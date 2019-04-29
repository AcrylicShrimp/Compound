
/*
	2019.04.12
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_RENDERMANAGER_H

#define _CLASS_COMPOUND_RENDER_RENDERMANAGER_H

#include "../ManagerBase.h"

#include "../Display/Window.h"

#include "Context.h"

#include <algorithm>
#include <cassert>
#include <cctype>
#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>

namespace Compound
{
	class Instance;
}

namespace Compound::Render
{
	class RenderManager final : public ManagerBase
	{
	private:
		std::unordered_map<Display::Window *, std::unique_ptr<Context>> sContextMap;

	public:
		RenderManager(Instance *pInstance);
		RenderManager(const RenderManager &sSrc) = delete;
		~RenderManager() noexcept = default;

	public:
		RenderManager &operator=(const RenderManager &sSrc) = delete;

	public:
		virtual void initialize() override;
		virtual void finalize() override;
		Context *createContext(Display::Window *pWindow, Context::FrameBufferInfo sFrameBufferInfo);
		void destroyContext(Display::Window *pWindow);
		Context *getContext(Display::Window *pWindow);
		const Context *getContext(Display::Window *pWindow) const;
	};
}

#endif