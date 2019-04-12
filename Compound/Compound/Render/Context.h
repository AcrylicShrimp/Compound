
/*
	2019.04.09
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_CONTEXT_H

#define _CLASS_COMPOUND_RENDER_CONTEXT_H

#include "../Display/Window.h"

#include <cassert>
#include <cstdint>
#include <string>

namespace Compound::Render
{
	struct FrameBufferInfo
	{
		std::uint8_t nColorBit;
		std::uint8_t nAlphaBit;
		std::uint8_t nDepthBit;
		std::uint8_t nStencilBit;
		std::uint8_t nMultisample;
	};

	class Context
	{
	public:
		Display::Window *const pWindow;
		const FrameBufferInfo sFrameBufferInfo;

	public:
		Context(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo);
		Context(const Context &sSrc) = delete;
		virtual ~Context() noexcept = default;

	public:
		Context &operator=(const Context &sSrc) = delete;

	public:
		virtual void bind() = 0;
		virtual void flush() = 0;
		virtual void clear(bool bColor, bool bDepth, bool bStencil) = 0;
		virtual void clearColor(float nR, float nG, float nB, float nA) = 0;
		virtual void clearDepth(float nD) = 0;
		virtual void clearStencil(std::uint32_t nS) = 0;
	};
}

#include "./Backend/__OpenGLContext.h"

#endif