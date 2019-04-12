
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#include "DisplayManager.h"

#include "../Instance.h"

namespace Compound::Display
{
	DisplayManager::DisplayManager(Instance *pInstance) :
		ManagerBase{pInstance}
	{
		//Empty.
	}
	
	void DisplayManager::initialize()
	{
		//Empty.
	}

	void DisplayManager::finalize()
	{
		//Empty.
	}

	Window *DisplayManager::createWindow(std::string_view sId)
	{
		auto iIndex{this->sWindowMap.find(std::string{sId})};

		if (iIndex != this->sWindowMap.cend())
			return iIndex->second.get();

		return this->sWindowMap.emplace(std::string{sId}, std::unique_ptr<Window>{new WindowType{this->pInstance, sId}}).first->second.get();
	}

	void DisplayManager::destroyWindow(std::string_view sId)
	{
		auto pWindow{this->getWindow(sId)};

		if (!pWindow)
			return;

		this->pInstance->sRenderManager.destroyContext(pWindow);
		this->sWindowMap.erase(std::string{sId});
	}

	Window *DisplayManager::getWindow(std::string_view sId)
	{
		auto iIndex{this->sWindowMap.find(std::string{sId})};

		return iIndex == this->sWindowMap.cend() ? nullptr : iIndex->second.get();
	}

	const Window *DisplayManager::getWindow(std::string_view sId) const
	{
		auto iIndex{this->sWindowMap.find(std::string{sId})};

		return iIndex == this->sWindowMap.cend() ? nullptr : iIndex->second.get();
	}
}