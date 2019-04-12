
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#include "../Context.h"
#include "__OpenGLContext.h"

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

		::SetPixelFormat(hFakeDeviceContext, ::ChoosePixelFormat(hFakeDeviceContext, &sPixelFormatDescriptor), &sPixelFormatDescriptor);

		auto hFakeRenderingContext{wglCreateContext(this->hDeviceContext)};

		::wglMakeCurrent(hFakeDeviceContext, hFakeRenderingContext);

		const auto wglChoosePixelFormatARB{reinterpret_cast<PFNWGLCHOOSEPIXELFORMATARBPROC>(wglGetProcAddress("wglChoosePixelFormatARB"))};
		const auto wglCreateContextAttribsARB{reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(wglGetProcAddress("wglCreateContextAttribsARB"))};

		this->hDeviceContext = ::GetDC(reinterpret_cast<Display::Backend::__Windows_Window *>(this->pWindow)->windowHandle());

		const int vPixelAttrib[]
		{
			WGL_DRAW_TO_WINDOW_ARB,		GL_TRUE,
			WGL_SUPPORT_OPENGL_ARB,		GL_TRUE,
			WGL_DOUBLE_BUFFER_ARB,		GL_TRUE,
			WGL_PIXEL_TYPE_ARB,			WGL_TYPE_RGBA_ARB,
			WGL_ACCELERATION_ARB,		WGL_FULL_ACCELERATION_ARB,
			WGL_COLOR_BITS_ARB,			sFrameBufferInfo.nColorBit,
			WGL_ALPHA_BITS_ARB,			sFrameBufferInfo.nAlphaBit,
			WGL_DEPTH_BITS_ARB,			sFrameBufferInfo.nDepthBit,
			WGL_STENCIL_BITS_ARB,		sFrameBufferInfo.nStencilBit,
			WGL_SAMPLE_BUFFERS_ARB,		sFrameBufferInfo.nMultisample == 0 ? GL_FALSE : GL_TRUE,
			WGL_SAMPLES_ARB,			sFrameBufferInfo.nMultisample,
			0
		};

		int nPixelFormatID;
		UINT nPixelFormatNum;

		wglChoosePixelFormatARB(this->hDeviceContext, vPixelAttrib, nullptr, 1, &nPixelFormatID, &nPixelFormatNum);

		DescribePixelFormat(this->hDeviceContext, nPixelFormatID, sizeof(PIXELFORMATDESCRIPTOR), &sPixelFormatDescriptor);
		SetPixelFormat(this->hDeviceContext, nPixelFormatID, &sPixelFormatDescriptor);

		const int vContextAttrib[]
		{
			WGL_CONTEXT_MAJOR_VERSION_ARB,		4,
			WGL_CONTEXT_MINOR_VERSION_ARB,		5,
			WGL_CONTEXT_PROFILE_MASK_ARB,
			WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
			0
		};

		this->hRenderingContext = wglCreateContextAttribsARB(this->hDeviceContext, 0, vContextAttrib);

		::wglMakeCurrent(nullptr, nullptr);
		::wglDeleteContext(hFakeRenderingContext);
		::ReleaseDC(sFakeWindow.windowHandle(), hFakeDeviceContext);

		sFakeWindow.destroy();
#endif
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

	void __OpenGLContext::bind()
	{
#if __COMPOUND_OS_WINDOWS
		::wglMakeCurrent(this->hDeviceContext, this->hRenderingContext);
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
}