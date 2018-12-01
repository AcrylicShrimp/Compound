
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#include "ComponentManager.h"

namespace Compound::Core
{
	ComponentManager::ComponentManager()
	{
		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(Component::typeName()), std::forward_as_tuple(nullptr, Component::typeName()));
	}
}