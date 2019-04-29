
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#include "../Context.h"
#include "__OpenGLContext.h"

#include "__OpenGLExtension.h"

#if __COMPOUND_OS_WINDOWS

#include <OpenGL/wglext.h>

#endif

namespace Compound::Render::Backend
{
	__OpenGLContext::__OpenGLContext(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo) :
		Context{pWindow, sFrameBufferInfo}
	{
#if __COMPOUND_OS_WINDOWS
		Display::Backend::__Windows_Window sFakeWindow{this->pWindow->pInstance, this->pWindow->sId + "::fake"};
		sFakeWindow.create(Display::Window::Style::ContentOnly, L"");

		auto hFakeDeviceContext{::GetDC(sFakeWindow.windowHandle())};

		PIXELFORMATDESCRIPTOR sPixelFormatDescriptor
		{
			sizeof(PIXELFORMATDESCRIPTOR),
			1,
			PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
			PFD_TYPE_RGBA,
			this->sFrameBufferInfo.nColorBit,
			0, 0, 0, 0, 0, 0,
			0,
			0,
			0,
			0, 0, 0, 0,
			this->sFrameBufferInfo.nDepthBit,
			this->sFrameBufferInfo.nStencilBit,
			0,
			PFD_MAIN_PLANE,
			0,
			0, 0, 0
		};

		auto test = ::SetPixelFormat(hFakeDeviceContext, ::ChoosePixelFormat(hFakeDeviceContext, &sPixelFormatDescriptor), &sPixelFormatDescriptor);

		auto hFakeRenderingContext{wglCreateContext(hFakeDeviceContext)};

		test = ::wglMakeCurrent(hFakeDeviceContext, hFakeRenderingContext);

		const auto wglChoosePixelFormatARB{reinterpret_cast<PFNWGLCHOOSEPIXELFORMATARBPROC>(wglGetProcAddress("wglChoosePixelFormatARB"))};
		const auto wglCreateContextAttribsARB{reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(wglGetProcAddress("wglCreateContextAttribsARB"))};

		this->hDeviceContext = ::GetDC(reinterpret_cast<Display::Backend::__Windows_Window *>(this->pWindow)->windowHandle());

		const int vPixelAttrib[]
		{
			WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
			WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
			WGL_DOUBLE_BUFFER_ARB, GL_TRUE,
			WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
			WGL_ACCELERATION_ARB, WGL_FULL_ACCELERATION_ARB,
			WGL_COLOR_BITS_ARB, sFrameBufferInfo.nColorBit,
			WGL_ALPHA_BITS_ARB, sFrameBufferInfo.nAlphaBit,
			WGL_DEPTH_BITS_ARB, sFrameBufferInfo.nDepthBit,
			WGL_STENCIL_BITS_ARB, sFrameBufferInfo.nStencilBit,
			WGL_SAMPLE_BUFFERS_ARB, sFrameBufferInfo.nMultisample == 0 ? GL_FALSE : GL_TRUE,
			WGL_SAMPLES_ARB, sFrameBufferInfo.nMultisample,
			0
		};

		int nPixelFormatID;
		UINT nPixelFormatNum;

		test = wglChoosePixelFormatARB(this->hDeviceContext, vPixelAttrib, nullptr, 1, &nPixelFormatID, &nPixelFormatNum);

		test = ::DescribePixelFormat(this->hDeviceContext, nPixelFormatID, sizeof(PIXELFORMATDESCRIPTOR), &sPixelFormatDescriptor);
		test = ::SetPixelFormat(this->hDeviceContext, nPixelFormatID, &sPixelFormatDescriptor);

		const int vContextAttrib[]
		{
			WGL_CONTEXT_MAJOR_VERSION_ARB, 4,
			WGL_CONTEXT_MINOR_VERSION_ARB, 5,
			WGL_CONTEXT_PROFILE_MASK_ARB,
			WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
			0
		};

		this->hRenderingContext = wglCreateContextAttribsARB(this->hDeviceContext, 0, vContextAttrib);

		test = ::wglMakeCurrent(nullptr, nullptr);
		test = ::wglDeleteContext(hFakeRenderingContext);
		test = ::ReleaseDC(sFakeWindow.windowHandle(), hFakeDeviceContext);

		sFakeWindow.destroy();

		::wglMakeCurrent(this->hDeviceContext, this->hRenderingContext);
#endif

		this->pExtension = std::make_unique<__OpenGLExtension>();
	}

	__OpenGLContext::~__OpenGLContext() noexcept
	{
#if __COMPOUND_OS_WINDOWS
		::wglMakeCurrent(nullptr, nullptr);

		if (this->hRenderingContext)
			::wglDeleteContext(this->hRenderingContext);

		if (this->hDeviceContext)
			::ReleaseDC(reinterpret_cast<Display::Backend::__Windows_Window *>(this->pWindow)->windowHandle(), this->hDeviceContext);

		this->hRenderingContext = nullptr;
		this->hDeviceContext = nullptr;
#endif
	}

	void __OpenGLContext::flush()
	{
#if __COMPOUND_OS_WINDOWS
		::SwapBuffers(this->hDeviceContext);
#endif
	}

	void __OpenGLContext::clear(bool bColor, bool bDepth, bool bStencil)
	{
		::glClear(
			(bColor ? GL_COLOR_BUFFER_BIT : 0) |
			(bDepth ? GL_DEPTH_BUFFER_BIT : 0) |
			(bStencil ? GL_STENCIL_BUFFER_BIT : 0)
		);
	}

	void __OpenGLContext::clearColor(float nR, float nG, float nB, float nA)
	{
		::glClearColor(nR, nG, nB, nA);
	}

	void __OpenGLContext::clearDepth(float nD)
	{
		::glClearDepth(nD);
	}

	void __OpenGLContext::clearStencil(std::uint32_t nS)
	{
		::glClearStencil(nS);
	}

	Context::NativeHandle __OpenGLContext::newBuffer()
	{
		GLuint nHandle;

		this->pExtension->glCreateBuffers(1, &nHandle);

		return nHandle;
	}

	void __OpenGLContext::deleteBuffer(NativeHandle hNativeHandle)
	{
		auto nHandle{static_cast<GLuint>(hNativeHandle)};

		this->pExtension->glDeleteBuffers(1, &nHandle);
	}

	void __OpenGLContext::fillBuffer(NativeHandle hDst, std::size_t nSize, const void *pData)
	{
		this->pExtension->glNamedBufferData(static_cast<GLuint>(hDst), static_cast<GLsizeiptr>(nSize), pData, GL_STATIC_DRAW);
	}

	void __OpenGLContext::copyBuffer(NativeHandle hSrc, NativeHandle hDst, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize)
	{
		this->pExtension->glCopyNamedBufferSubData(static_cast<GLuint>(hSrc), static_cast<GLuint>(hDst), static_cast<GLintptr>(nSrcOffset), static_cast<GLintptr>(nDstOffset), static_cast<GLsizeiptr>(nSize));
	}

	Context::NativeHandle __OpenGLContext::newShader()
	{
		return this->pExtension->glCreateProgram();
	}

	void __OpenGLContext::deleteShader(NativeHandle hShader)
	{
		this->pExtension->glDeleteShader(hShader);
	}

	Context::NativeHandle __OpenGLContext::newSubshader(SubshaderType eSubshaderType)
	{
		switch (eSubshaderType)
		{
		case SubshaderType::Vertex:
			return this->pExtension->glCreateShader(GL_VERTEX_SHADER);

		case SubshaderType::Fragment:
			return this->pExtension->glCreateShader(GL_FRAGMENT_SHADER);

		default:
			return nullptr;
		}
	}

	void __OpenGLContext::deleteSubshader(NativeHandle hSubshader)
	{
		this->pExtension->glDeleteShader(hSubshader);
	}

	std::tuple<bool, std::string> __OpenGLContext::compileSubshader(NativeHandle hSubshader, std::string_view sSource)
	{
		const auto *pSource{sSource.data()};

		this->pExtension->glShaderSource(hSubshader, 1, &pSource, nullptr);
		this->pExtension->glCompileShader(hSubshader);

		GLint nStatus;
		this->pExtension->glGetShaderiv(hSubshader, GL_COMPILE_STATUS, &nStatus);

		GLint nLogLength;
		this->pExtension->glGetShaderiv(hSubshader, GL_INFO_LOG_LENGTH, &nLogLength);

		std::string sLog(nLogLength, '\0');
		this->pExtension->glGetShaderInfoLog(hSubshader, nLogLength, nullptr, sLog.data());

		return std::make_tuple(nStatus == GL_TRUE, std::move(sLog));
	}

	void __OpenGLContext::attachSubshader(NativeHandle hShader, NativeHandle hSubshader)
	{
		this->pExtension->glAttachShader(hShader, hSubshader);
	}

	void __OpenGLContext::detachSubshader(NativeHandle hShader, NativeHandle hSubshader)
	{
		this->pExtension->glDetachShader(hShader, hSubshader);
	}

	std::tuple<bool, std::string> __OpenGLContext::linkShader(NativeHandle hShader)
	{
		this->pExtension->glLinkProgram(hShader);

		GLint nStatus;
		this->pExtension->glGetProgramiv(hShader, GL_LINK_STATUS, &nStatus);

		GLint nLogLength;
		this->pExtension->glGetProgramiv(hShader, GL_INFO_LOG_LENGTH, &nLogLength);

		std::string sLog(nLogLength, '\0');
		this->pExtension->glGetProgramInfoLog(hShader, nLogLength, nullptr, sLog.data());

		return std::make_tuple(nStatus == GL_TRUE, std::move(sLog));
	}

	void __OpenGLContext::activeShader(NativeHandle hShader)
	{
		this->pExtension->glUseProgram(hShader);
	}

	std::vector<std::tuple<std::string, std::int32_t>> __OpenGLContext::getShaderInput(NativeHandle hShader)
	{
		GLint nInputCount;
		this->pExtension->glGetProgramInterfaceiv(hShader, GL_PROGRAM_INPUT, GL_ACTIVE_RESOURCES, &nInputCount);

		std::vector<std::tuple<std::string, std::int32_t>> sInputList;
		sInputList.reserve(nInputCount);

		GLenum vProperty[]
		{
			GL_NAME_LENGTH,
			GL_LOCATION
		};
		GLint vResult[2];

		for (GLint nIndex{0}; nIndex < nInputCount; ++nIndex)
		{
			this->pExtension->glGetProgramResourceiv(hShader, GL_PROGRAM_INPUT, static_cast<GLuint>(nIndex), 2, vProperty, 2, nullptr, vResult);

			std::string sName(vResult[0], '\0');
			this->pExtension->glGetProgramResourceName(hShader, GL_PROGRAM_INPUT, static_cast<GLuint>(nIndex), vResult[0], nullptr, sName.data());

			sInputList.emplace_back(std::move(sName), vResult[1]);
		}

		return sInputList;
	}

	std::vector<std::tuple<std::string, std::int32_t>> __OpenGLContext::getShaderGlobalInput(NativeHandle hShader)
	{
		GLint numBlocks;
		this->pExtension->glGetProgramiv(hShader, GL_ACTIVE_UNIFORM_BLOCKS, &numBlocks);

		std::vector<std::string> nameList;
		nameList.reserve(numBlocks);
		for (int blockIx = 0; blockIx < numBlocks; ++blockIx)
		{
			GLint nameLen;
			this->pExtension->glGetActiveUniformBlockiv(hShader, blockIx, GL_UNIFORM_BLOCK_NAME_LENGTH, &nameLen);

			std::vector<GLchar> name;
			name.resize(nameLen);
			this->pExtension->glGetActiveUniformBlockName(hShader, blockIx, nameLen, NULL, &name[0]);

			nameList.push_back(std::string());
			nameList.back().assign(name.begin(), name.end() - 1); //Remove the null terminator.
		}

		GLint nGlobalInputCount;
		this->pExtension->glGetProgramInterfaceiv(hShader, GL_UNIFORM, GL_ACTIVE_RESOURCES, &nGlobalInputCount);

		std::vector<std::tuple<std::string, std::int32_t>> sGlobalInputList;
		sGlobalInputList.reserve(nGlobalInputCount);

		GLenum vProperty[]
		{
			GL_NAME_LENGTH,
			GL_LOCATION
		};
		GLint vResult[2];

		for (GLint nIndex{0}; nIndex < nGlobalInputCount; ++nIndex)
		{
			this->pExtension->glGetProgramResourceiv(hShader, GL_UNIFORM, static_cast<GLuint>(nIndex), 2, vProperty, 2, nullptr, vResult);

			std::string sName(vResult[0], '\0');
			this->pExtension->glGetProgramResourceName(hShader, GL_UNIFORM, static_cast<GLuint>(nIndex), vResult[0], nullptr, sName.data());

			sGlobalInputList.emplace_back(std::move(sName), vResult[1]);
		}

		return sGlobalInputList;
	}

	Context::NativeHandle __OpenGLContext::generateShaderLayout(NativeHandle hShader)
	{
		GLuint hShaderLayout;
		this->pExtension->glCreateVertexArrays(1, &hShaderLayout);

		//GLint nInputCount;
		//this->pExtension->glGetProgramInterfaceiv(hShader, GL_PROGRAM_INPUT, GL_ACTIVE_RESOURCES, &nInputCount);
		//
		//GLenum vProperty[]
		//{
		//	GL_TYPE,
		//	GL_LOCATION
		//};
		//GLint vResult[2];
		//
		//for (GLint nIndex{0}; nIndex < nInputCount; ++nIndex)
		//{
		//	this->pExtension->glGetProgramResourceiv(hShader, GL_PROGRAM_INPUT, static_cast<GLuint>(nIndex), 2, vProperty, 2, nullptr, vResult);
		//
		//	switch (vResult[0])
		//	{
		//
		//
		//	case GL_FLOAT:
		//		this->pExtension->glVertexArrayAttribFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 1, GL_FLOAT, false, sizeof(GLfloat) * 1);
		//		break;
		//	case GL_FLOAT_VEC2:
		//		this->pExtension->glVertexArrayAttribFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 2, GL_FLOAT, false, sizeof(GLfloat) * 2);
		//		break;
		//	case GL_FLOAT_VEC3:
		//		this->pExtension->glVertexArrayAttribFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 3, GL_FLOAT, false, sizeof(GLfloat) * 3);
		//		break;
		//	case GL_FLOAT_VEC4:
		//		this->pExtension->glVertexArrayAttribFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 4, GL_FLOAT, false, sizeof(GLfloat) * 4);
		//		break;
		//
		//	case GL_DOUBLE:
		//		this->pExtension->glVertexArrayAttribLFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 1, GL_DOUBLE, sizeof(GLdouble) * 1);
		//		break;
		//	case GL_DOUBLE_VEC2:
		//		this->pExtension->glVertexArrayAttribLFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 2, GL_DOUBLE, sizeof(GLdouble) * 2);
		//		break;
		//	case GL_DOUBLE_VEC3:
		//		this->pExtension->glVertexArrayAttribLFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 3, GL_DOUBLE, sizeof(GLdouble) * 3);
		//		break;
		//	case GL_DOUBLE_VEC4:
		//		this->pExtension->glVertexArrayAttribLFormat(hShaderLayout, static_cast<GLuint>(vResult[1]), 4, GL_DOUBLE, sizeof(GLdouble) * 4);
		//		break;
		//	}
		//
		//	std::string sName(vResult[0], '\0');
		//	this->pExtension->glGetProgramResourceName(hShader, GL_PROGRAM_INPUT, static_cast<GLuint>(nIndex), vResult[0], nullptr, sName.data());
		//
		//	sInputList.emplace_back(std::move(sName), vResult[1]);
		//}

		return hShaderLayout;
	}

	void __OpenGLContext::deleteShaderLayout(NativeHandle hShaderLayout)
	{

	}
}