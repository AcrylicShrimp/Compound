
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#include "../../Platform.h"

#if __COMPOUND_OS_WINDOWS

#ifndef _CLASS_COMPOUND_RENDER_BACKEND_OPENGLCONTEXT_H

#define _CLASS_COMPOUND_RENDER_BACKEND_OPENGLCONTEXT_H

#define __COMPOUND_CONTEXT_SUPPORTED_OPENGL 1

#include <memory>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>
#include <vector>

#if __COMPOUND_OS_WINDOWS

#include <Windows.h>

#endif

namespace Compound::Render::Backend
{
	class __OpenGLExtension;

	class __OpenGLContext final : public Context
	{
	private:
		std::unique_ptr<__OpenGLExtension> pExtension;

#if __COMPOUND_OS_WINDOWS
		::HDC hDeviceContext;
		::HGLRC hRenderingContext;
#endif

	public:
		__OpenGLContext(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo);
		__OpenGLContext(const __OpenGLContext &sSrc) = delete;
		virtual ~__OpenGLContext() noexcept;

	public:
		__OpenGLContext &operator=(const __OpenGLContext &sSrc) = delete;

	public:
		virtual void flush() override;
		virtual void clear(bool bColor, bool bDepth, bool bStencil) override;
		virtual void clearColor(float nR, float nG, float nB, float nA) override;
		virtual void clearDepth(float nD) override;
		virtual void clearStencil(std::uint32_t nS) override;
		virtual NativeHandle newBuffer() override;
		virtual void deleteBuffer(NativeHandle hBuffer) override;
		virtual void fillBuffer(NativeHandle hDstBuffer, std::size_t nSize, const void *pData = nullptr) override;
		virtual void copyBuffer(NativeHandle hSrcBuffer, NativeHandle hDstBuffer, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize) override;
		virtual NativeHandle newShader() override;
		virtual void deleteShader(NativeHandle hShader) override;
		virtual NativeHandle newSubshader(SubshaderType eSubshaderType) override;
		virtual void deleteSubshader(NativeHandle hSubshader) override;
		virtual std::tuple<bool, std::string> compileSubshader(NativeHandle hSubshader, std::string_view sSource) override;
		virtual void attachSubshader(NativeHandle hShader, NativeHandle hSubshader) override;
		virtual void detachSubshader(NativeHandle hShader, NativeHandle hSubshader) override;
		virtual std::tuple<bool, std::string> linkShader(NativeHandle hShader) override;
		virtual void activeShader(NativeHandle hShader) override;
		virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderInput(NativeHandle hShader) override;
		virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderGlobalInput(NativeHandle hShader) override;
		virtual NativeHandle generateShaderLayout(NativeHandle hShader) override;
		virtual void deleteShaderLayout(NativeHandle hShaderLayout) override;
	};
}

#endif

#endif