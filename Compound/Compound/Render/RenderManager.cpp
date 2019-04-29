
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#include "RenderManager.h"

#include "../Instance.h"

namespace Compound::Render
{
	RenderManager::RenderManager(Instance *pInstance) :
		ManagerBase{pInstance}
	{
		//Empty.
	}

	void RenderManager::initialize()
	{
		//Empty.
	}

	void RenderManager::finalize()
	{
		this->sContextMap.clear();
	}

	Context *RenderManager::createContext(Display::Window *pWindow, Context::FrameBufferInfo sFrameBufferInfo)
	{
		assert(pWindow);

		auto iIndex{this->sContextMap.find(pWindow)};

		if (iIndex != this->sContextMap.cend())
			return iIndex->second.get();

		return this->sContextMap.emplace(pWindow, std::make_unique<Context>(pWindow, sFrameBufferInfo)).first->second.get();
	}

	void RenderManager::destroyContext(Display::Window *pWindow)
	{
		assert(pWindow);

		this->sContextMap.erase(pWindow);
	}

	Context *RenderManager::getContext(Display::Window *pWindow)
	{
		assert(pWindow);

		auto iIndex{this->sContextMap.find(pWindow)};

		return iIndex == this->sContextMap.cend() ? nullptr : iIndex->second.get();
	}

	const Context *RenderManager::getContext(Display::Window *pWindow) const
	{
		assert(pWindow);

		auto iIndex{this->sContextMap.find(pWindow)};

		return iIndex == this->sContextMap.cend() ? nullptr : iIndex->second.get();
	}
}