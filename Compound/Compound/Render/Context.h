
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
#include <string_view>
#include <tuple>
#include <type_traits>
#include <vector>

namespace Compound::Render
{
	class Context
	{
	public:
		struct FrameBufferInfo
		{
			std::uint8_t nColorBit;
			std::uint8_t nAlphaBit;
			std::uint8_t nDepthBit;
			std::uint8_t nStencilBit;
			std::uint8_t nMultisample;
		};

		enum class SubshaderType
		{
			Vertex,
			Fragment
		};

		enum class ShaderLayoutDimension
		{
			Dim1x1,
			Dim1x2,
			Dim1x3,
			Dim1x4,
			Dim2x2,
			Dim2x3,
			Dim2x4,
			Dim3x2,
			Dim3x3,
			Dim3x4,
			Dim4x2,
			Dim4x3,
			Dim4x4
		};

		//enum class ShaderLayoutType
		//{
		//	Byte,
		//	uByte,
		//	Short,
		//	uShort,
		//	Int,
		//	uInt,
		//	Fixed,
		//	Half,
		//	Float,
		//	Double
		//};

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
		virtual void deleteBuffer(NativeHandle hBuffer) = 0;
		virtual void fillBuffer(NativeHandle hDstBuffer, std::size_t nSize, const void *pData = nullptr) = 0;
		virtual void copyBuffer(NativeHandle hSrcBuffer, NativeHandle hDstBuffer, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize) = 0;
		virtual NativeHandle newShader() = 0;
		virtual void deleteShader(NativeHandle hShader) = 0;
		virtual NativeHandle newSubshader(SubshaderType eSubshaderType) = 0;
		virtual void deleteSubshader(NativeHandle hSubshader) = 0;
		virtual std::tuple<bool, std::string> compileSubshader(NativeHandle hSubshader, std::string_view sSource) = 0;
		virtual void attachSubshader(NativeHandle hShader, NativeHandle hSubshader) = 0;
		virtual void detachSubshader(NativeHandle hShader, NativeHandle hSubshader) = 0;
		virtual std::tuple<bool, std::string> linkShader(NativeHandle hShader) = 0;
		virtual void activeShader(NativeHandle hShader) = 0;
		virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderInput(NativeHandle hShader) = 0;
		virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderGlobalInput(NativeHandle hShader) = 0;
		virtual NativeHandle generateShaderLayout(NativeHandle hShader) = 0;
		virtual void deleteShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual NativeHandle newShaderLayout() = 0;
		//virtual void deleteShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual void activeShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual void specifyShaderLayout(NativeHandle hShaderLayout, std::string_view sName, ) = 0;
	};
}

#include "./Backend/__OpenGLContext.h"

#endif