
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#include "Component.h"

#include "../Instance.h"
#include "Object.h"

namespace Compound::Core
{
	Component::Component(Object *pObject) :
		pObject{pObject}
	{
		//Empty.
	}

	const ComponentType *Component::type() const
	{
		return this->pObject->instance()->sComponentManager.type<Component>();
	}

	std::string_view Component::typeName()
	{
		return "Component";
	}
}