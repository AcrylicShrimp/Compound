
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
		//Empty.
	}

	Context *RenderManager::createContext(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo, std::string_view sRendererName)
	{
		assert(pWindow);

		auto iIndex{this->sContextMap.find(pWindow)};

		if (iIndex != this->sContextMap.cend())
			//return iIndex->second->sRendererInfo.sRendererName == sRendererName ? iIndex->second.get() : nullptr;
			return nullptr;

		std::string sLowerRenderName{sRendererName};
		std::transform(sLowerRenderName.begin(), sLowerRenderName.end(), sLowerRenderName.begin(), std::tolower);

		std::unique_ptr<Context> pContext;

#if __COMPOUND_CONTEXT_SUPPORTED_OPENGL

		if (sLowerRenderName == "opengl")
			pContext = std::unique_ptr<Context>{new Backend::__OpenGLContext{pWindow, sFrameBufferInfo}};

#endif

		if (!pContext)
			return nullptr;

		return this->sContextMap.emplace(pWindow, std::move(pContext)).first->second.get();
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