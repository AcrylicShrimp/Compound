
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
#include <type_traits>

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
		struct NativeHandle final
		{
		private:
			void *pHandle;

		public:
			NativeHandle() : pHandle{nullptr}{}
			NativeHandle(void *pHandle) : pHandle{pHandle}{}
			NativeHandle(const NativeHandle &sSrc) = default;
			template<class T, class = std::enable_if_t<std::is_integral_v<T>>> NativeHandle(T tHandle) : pHandle{reinterpret_cast<void *>(tHandle)}{}

		public:
			NativeHandle &operator=(const NativeHandle &sSrc) = default;
			operator void *() const { return this->pHandle; }
			operator std::uint64_t() const { return reinterpret_cast<std::uint64_t>(this->pHandle); }
		};

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
		virtual void flush() = 0;
		virtual void clear(bool bColor, bool bDepth, bool bStencil) = 0;
		virtual void clearColor(float nR, float nG, float nB, float nA) = 0;
		virtual void clearDepth(float nD) = 0;
		virtual void clearStencil(std::uint32_t nS) = 0;
		virtual NativeHandle newBuffer() = 0;
		virtual void deleteBuffer(NativeHandle hNativeHandle) = 0;
		virtual void fillBuffer(NativeHandle hDst, std::size_t nSize, const void *pData = nullptr) = 0;
		virtual void copyBuffer(NativeHandle hSrc, NativeHandle hDst, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize) = 0;
	};
}

#include "./Backend/__OpenGLContext.h"

#endif