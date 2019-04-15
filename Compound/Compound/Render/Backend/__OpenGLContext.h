
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
		virtual void deleteBuffer(NativeHandle nNativeHandle) override;
		virtual void fillBuffer(NativeHandle hDst, std::size_t nSize, const void *pData = nullptr) override;
		virtual void copyBuffer(NativeHandle hSrc, NativeHandle hDst, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize) override;
	};
}

#endif

#endif