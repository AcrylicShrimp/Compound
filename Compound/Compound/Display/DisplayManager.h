
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_DISPLAY_DISPLAYMANAGER_H

#define _CLASS_COMPOUND_DISPLAY_DISPLAYMANAGER_H

#include "../ManagerBase.h"

#include "Window.h"

#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>

namespace Compound
{
	class Instance;
}

namespace Compound::Display
{
	class DisplayManager final : public ManagerBase
	{
	private:
		std::unordered_map<std::string, std::unique_ptr<Window>> sWindowMap;

	public:
		DisplayManager(Instance *pInstance);
		DisplayManager(const DisplayManager &sSrc) = delete;
		~DisplayManager() noexcept = default;
		
	public:
		DisplayManager &operator=(const DisplayManager &sSrc) = delete;
		
	public:
		virtual void initialize() override;
		virtual void finalize() override;
		Window *createWindow(std::string_view sId);
		void destroyWindow(std::string_view sId);
		Window *getWindow(std::string_view sId);
		const Window *getWindow(std::string_view sId) const;
	};
}

#endif