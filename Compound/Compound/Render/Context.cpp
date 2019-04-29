
/*
	2019.04.09
	Created by AcrylicShrimp.
*/

#include "Context.h"

namespace Compound::Render
{
	Context::Context(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo) :
		pWindow{pWindow},
		sFrameBufferInfo{sFrameBufferInfo}
	{
		assert(pWindow);
		
		this->__fillExtension();
		this->__fillLayer();

		std::vector<const char *> sLayerList
		{
#ifdef _DEBUG
			"VK_LAYER_KHRONOS_validation"
#endif
		};

		std::vector<const char *> sExtensionList
		{
#ifdef _DEBUG
			VK_EXT_DEBUG_UTILS_EXTENSION_NAME
#endif
		};

		if (!this->__hasAllLayer(sLayerList))
			throw std::runtime_error{"no available layer detected"};

		if (!this->__hasAllExtension(sExtensionList))
			throw std::runtime_error{"no available extension detected"};

		VkApplicationInfo vkApplicationInfo
		{
			VkStructureType::VK_STRUCTURE_TYPE_APPLICATION_INFO,
			nullptr,
			"",
			VK_MAKE_VERSION(1, 0, 0),
			"Compound",
			VK_MAKE_VERSION(1, 0, 0),
			VK_API_VERSION_1_1
		};
		VkInstanceCreateInfo vkInstanceCreateInfo
		{
			VkStructureType::VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
			nullptr,
			0,
			&vkApplicationInfo,
			sLayerList.size(),
			sLayerList.data(),
			sExtensionList.size(),
			sExtensionList.data()
		};

		if (vkCreateInstance(&vkInstanceCreateInfo, nullptr, &this->vkInstance) != VkResult::VK_SUCCESS)
			throw std::runtime_error{"unable to create vulkan instance"};

		VkDebugUtilsMessengerCreateInfoEXT vkDebugMessengerCreateInfo
		{
			VkStructureType::VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,
			nullptr,
			0,
			VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
			VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT |
			VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
			VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
			VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
			VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
			VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
			&Context::__callbackDebug,
			nullptr
		};

#ifdef _DEBUG
		auto vkCreateDebugUtilsMessengerEXT{reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(vkGetInstanceProcAddr(this->vkInstance, "vkCreateDebugUtilsMessengerEXT"))};

		if (!vkCreateDebugUtilsMessengerEXT)
			throw std::runtime_error{"unable to load vkCreateDebugUtilsMessengerEXT"};

		if (vkCreateDebugUtilsMessengerEXT(this->vkInstance, &vkDebugMessengerCreateInfo, nullptr, &this->vkDebugMessenger) != VkResult::VK_SUCCESS)
			throw std::runtime_error{"unable to create vulkan debug messenger"};
#endif

		std::uint32_t nDeviceCount;
		vkEnumeratePhysicalDevices(this->vkInstance, &nDeviceCount, nullptr);

		if (!nDeviceCount)
			throw std::runtime_error{"no device detected that supports vulkan"};

		std::vector<VkPhysicalDevice> sPhysicalDeviceList(nDeviceCount);
		vkEnumeratePhysicalDevices(this->vkInstance, &nDeviceCount, sPhysicalDeviceList.data());

		this->vkPhysicalDevice = sPhysicalDeviceList.front();

		//for (auto vkPhysicalDevice : sPhysicalDeviceList)
		//{
		//	VkPhysicalDeviceProperties vkPhysicalDeviceProperties;
		//	VkPhysicalDeviceFeatures vkPhysicalDeviceFeatures;
		//
		//	vkGetPhysicalDeviceProperties(vkPhysicalDevice, &vkPhysicalDeviceProperties);
		//	vkGetPhysicalDeviceFeatures(vkPhysicalDevice, &vkPhysicalDeviceFeatures);
		//}


	}

	Context::~Context()
	{
		if (!this->vkInstance)
			return;

		auto vkDestroyDebugUtilsMessengerEXT{reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(vkGetInstanceProcAddr(this->vkInstance, "vkDestroyDebugUtilsMessengerEXT"))};

		if (vkDestroyDebugUtilsMessengerEXT)
			vkDestroyDebugUtilsMessengerEXT(this->vkInstance, this->vkDebugMessenger, nullptr);

		vkDestroyInstance(this->vkInstance, nullptr);
	}

	void Context::__fillLayer()
	{
		std::uint32_t nLayerCount;
		vkEnumerateInstanceLayerProperties(&nLayerCount, nullptr);

		std::vector<VkLayerProperties> sLayerList(nLayerCount);
		vkEnumerateInstanceLayerProperties(&nLayerCount, sLayerList.data());

		for (const auto &vkLayer : sLayerList)
			std::memcpy(
				&this->sAvailableLayerMap.emplace(std::string(std::cbegin(vkLayer.layerName), std::find(std::cbegin(vkLayer.layerName), std::cend(vkLayer.layerName), '\0')), VkLayerProperties{}).first->second,
				&vkLayer,
				sizeof(VkLayerProperties));
	}

	void Context::__fillExtension()
	{
		std::uint32_t nExtensionCount;
		vkEnumerateInstanceExtensionProperties(nullptr, &nExtensionCount, nullptr);

		std::vector<VkExtensionProperties> sExtensionList(nExtensionCount);
		vkEnumerateInstanceExtensionProperties(nullptr, &nExtensionCount, sExtensionList.data());

		for (const auto &vkExtension : sExtensionList)
			std::memcpy(
				&this->sAvailableExtensionMap.emplace(std::string(std::cbegin(vkExtension.extensionName), std::find(std::cbegin(vkExtension.extensionName), std::cend(vkExtension.extensionName), '\0')), VkExtensionProperties{}).first->second,
				&vkExtension,
				sizeof(VkExtensionProperties));
	}

	bool Context::__hasAllLayer(const std::vector<const char *> &sLayerList)
	{
		auto iEnd{this->sAvailableLayerMap.cend()};

		for (const auto &sLayer : sLayerList)
			if (this->sAvailableLayerMap.find(sLayer) == iEnd)
				return false;

		return true;
	}

	bool Context::__hasAllExtension(const std::vector<const char *> &sExtensionList)
	{
		auto iEnd{this->sAvailableExtensionMap.cend()};

		for (const auto &sExtension : sExtensionList)
			if (this->sAvailableExtensionMap.find(sExtension) == iEnd)
				return false;

		return true;
	}

	VKAPI_ATTR VkBool32 VKAPI_CALL Context::__callbackDebug(
		VkDebugUtilsMessageSeverityFlagBitsEXT vkSeverityFlag,
		VkDebugUtilsMessageTypeFlagsEXT vkTypeFlag,
		const VkDebugUtilsMessengerCallbackDataEXT *pCallbackData,
		void *pUserData)
	{
		std::cerr << pCallbackData->pMessageIdName << ": " << pCallbackData->pMessage << std::endl;

		return VK_FALSE;
	}
}