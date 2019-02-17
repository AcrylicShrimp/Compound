
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#include "ComponentManager.h"

#include "../Instance.h"

namespace Compound::Core
{
	ComponentManager::ComponentManager(Instance *pInstance) :
		ManagerBase(pInstance)
	{
		//Empty.
	}

	void ComponentManager::initialize()
	{
		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(Component::typeName()), std::forward_as_tuple(nullptr, Component::typeName()));
	}

	void ComponentManager::finalize()
	{
		//Empty.
	}
}