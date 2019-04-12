
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#include "../../Platform.h"

#if __COMPOUND_OS_WINDOWS || __COMPOUND_OS_APPLE_OSX || __COMPOUND_OS_LINUX

#ifndef _CLASS_COMPOUND_RENDER_BACKEND_OPENGLCONTEXT_H

#define _CLASS_COMPOUND_RENDER_BACKEND_OPENGLCONTEXT_H

#define __COMPOUND_CONTEXT_SUPPORTED_OPENGL 1

#if __COMPOUND_OS_WINDOWS

#include <Windows.h>
#include <gl/GL.h>

#include <OpenGL/glext.h>
#include <OpenGL/wglext.h>
#include <OpenGL/glcorearb.h>

#endif

namespace Compound::Render::Backend
{
	class __OpenGLContext final : public Context
	{
	private:
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
		virtual void bind() override;
		virtual void clear(bool bColor, bool bDepth, bool bStencil) override;
		virtual void clearColor(float nR, float nG, float nB, float nA) override;
		virtual void clearDepth(float nD) override;
		virtual void clearStencil(std::uint32_t nS) override;
	};
}

#endif

#endif