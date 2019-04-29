
/*
	2019.04.09
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_CONTEXT_H

#define _CLASS_COMPOUND_RENDER_CONTEXT_H

#include "../Display/Window.h"

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <vulkan/vulkan.h>

namespace Compound::Render
{
	class Context final
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

	public:
		Display::Window *const pWindow;
		const FrameBufferInfo sFrameBufferInfo;

	private:
		VkInstance vkInstance;
#ifdef _DEBUG
		VkDebugUtilsMessengerEXT vkDebugMessenger;
#endif
		VkPhysicalDevice vkPhysicalDevice;
		std::unordered_map<std::string, VkLayerProperties> sAvailableLayerMap;
		std::unordered_map<std::string, VkExtensionProperties> sAvailableExtensionMap;

	public:
		Context(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo);
		Context(const Context &sSrc) = delete;
		~Context() noexcept;

	public:
		Context &operator=(const Context &sSrc) = delete;

	private:
		void __fillLayer();
		void __fillExtension();
		bool __hasAllLayer(const std::vector<const char *> &sLayerList);
		bool __hasAllExtension(const std::vector<const char *> &sExtensionList);
		
	private:
		static VKAPI_ATTR VkBool32 VKAPI_CALL __callbackDebug(
			VkDebugUtilsMessageSeverityFlagBitsEXT vkSeverityFlag,
			VkDebugUtilsMessageTypeFlagsEXT vkTypeFlag,
			const VkDebugUtilsMessengerCallbackDataEXT *pCallbackData,
			void *pUserData);
		//virtual void flush() = 0;
		//virtual void clear(bool bColor, bool bDepth, bool bStencil) = 0;
		//virtual void clearColor(float nR, float nG, float nB, float nA) = 0;
		//virtual void clearDepth(float nD) = 0;
		//virtual void clearStencil(std::uint32_t nS) = 0;
		//virtual NativeHandle newBuffer() = 0;
		//virtual void deleteBuffer(NativeHandle hBuffer) = 0;
		//virtual void fillBuffer(NativeHandle hDstBuffer, std::size_t nSize, const void *pData = nullptr) = 0;
		//virtual void copyBuffer(NativeHandle hSrcBuffer, NativeHandle hDstBuffer, std::size_t nSrcOffset, std::size_t nDstOffset, std::size_t nSize) = 0;
		//virtual NativeHandle newShader() = 0;
		//virtual void deleteShader(NativeHandle hShader) = 0;
		//virtual NativeHandle newSubshader(SubshaderType eSubshaderType) = 0;
		//virtual void deleteSubshader(NativeHandle hSubshader) = 0;
		//virtual std::tuple<bool, std::string> compileSubshader(NativeHandle hSubshader, std::string_view sSource) = 0;
		//virtual void attachSubshader(NativeHandle hShader, NativeHandle hSubshader) = 0;
		//virtual void detachSubshader(NativeHandle hShader, NativeHandle hSubshader) = 0;
		//virtual std::tuple<bool, std::string> linkShader(NativeHandle hShader) = 0;
		//virtual void activeShader(NativeHandle hShader) = 0;
		//virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderInput(NativeHandle hShader) = 0;
		//virtual std::vector<std::tuple<std::string, std::int32_t>> getShaderGlobalInput(NativeHandle hShader) = 0;
		//virtual NativeHandle generateShaderLayout(NativeHandle hShader) = 0;
		//virtual void deleteShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual NativeHandle newShaderLayout() = 0;
		//virtual void deleteShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual void activeShaderLayout(NativeHandle hShaderLayout) = 0;
		//virtual void specifyShaderLayout(NativeHandle hShaderLayout, std::string_view sName, ) = 0;
	};
}

#endif