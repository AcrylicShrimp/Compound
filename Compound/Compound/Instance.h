
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_INSTANCE_H

#define _CLASS_COMPOUND_CORE_INSTANCE_H

#include "./Core/ComponentManager.h"
#include "./Display/DisplayManager.h"

#include <string>
#include <string_view>

namespace Compound
{
	class Instance final
	{
	public:
		const std::wstring sApplicationName;
		Core::ComponentManager sComponentManager;
		Display::DisplayManager sDisplayManager;

	public:
		Instance(std::wstring_view sApplicationName);
		Instance(const Instance &sSrc) = delete;
		~Instance() = default;
		
	public:
		Instance &operator=(const Instance &sSrc) = delete;
	};
}

#endif