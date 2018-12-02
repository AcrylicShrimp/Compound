
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#include "Object.h"

namespace Compound::Core
{
	Object::Object(Instance *pInstance) :
		pInstance{pInstance}
	{
		//Empty.
	}

	Component *Object::component()
	{
		return this->component<Component>();
	}

	Component *Object::component(const ComponentType *pComponentType)
	{
		if (!pComponentType)
			return nullptr;

		auto iIndex{this->sComponentMap.find(pComponentType)};

		return iIndex == this->sComponentMap.cend() ? nullptr : iIndex->second;
	}

	const Component *Object::component(const ComponentType *pComponentType) const
	{
		if (!pComponentType)
			return nullptr;

		auto iIndex{this->sComponentMap.find(pComponentType)};

		return iIndex == this->sComponentMap.cend() ? nullptr : iIndex->second;
	}

	std::vector<Component *> Object::componentAll()
	{
		return this->componentAll<Component>();
	}

	std::vector<Component *> Object::componentAll(const ComponentType *pComponentType)
	{
		if (!pComponentType)
			return {};

		auto sPair{this->sComponentMap.equal_range(pComponentType)};

		std::vector<Component *> sResult;
		sResult.reserve(std::distance(sPair.first, sPair.second));
		
		for (; sPair.first != sPair.second; ++sPair.first)
			sResult.emplace_back(sPair.first->second);
		
		return sResult;
	}

	std::vector<const Component *> Object::componentAll(const ComponentType *pComponentType) const
	{
		if (!pComponentType)
			return {};

		auto sPair{this->sComponentMap.equal_range(pComponentType)};
		
		std::vector<const Component *> sResult;
		sResult.reserve(std::distance(sPair.first, sPair.second));
		
		for (; sPair.first != sPair.second; ++sPair.first)
			sResult.emplace_back(sPair.first->second);
		
		return sResult;
	}

	Component *Object::addComponent(const ComponentType *pComponentType)
	{
		if (!pComponentType)
			return nullptr;

		auto pComponent{this->sComponentSet.emplace(pComponentType->construct(this)).first->get()};

		for (; pComponentType; pComponentType = pComponentType->baseType())
			this->sComponentMap.emplace(pComponentType, pComponent);

		return pComponent;
	}
}