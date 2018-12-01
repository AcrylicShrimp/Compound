
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#include "ComponentType.h"

#include "Component.h"

namespace Compound::Core
{
	ComponentType::ComponentType(const ComponentType *pBaseType, std::string_view sTypeName) :
		sTypeName{sTypeName},
		pBaseType{pBaseType}
	{
		//Empty.
	}
	
	ComponentType::ComponentType(const ComponentType *pBaseType, std::string_view sTypeName, std::function<Component(Object *)> fConstructor) :
		sTypeName{sTypeName},
		pBaseType{pBaseType},
		fConstructor{fConstructor}
	{
		//Empty.
	}

	bool ComponentType::operator==(const ComponentType &sRight) const
	{
		return this->pBaseType == sRight.pBaseType && this->sTypeName == sRight.sTypeName;
	}

	bool ComponentType::isBaseOf(const ComponentType *pDerivedType) const
	{
		return ComponentType::isBaseOf(this, pDerivedType);
	}

	bool ComponentType::isDerivatedFrom(const ComponentType *pBaseType) const
	{
		return ComponentType::isBaseOf(pBaseType, this);
	}
	
	bool ComponentType::isExactlyBaseOf(const ComponentType *pDerivedType) const
	{
		return ComponentType::isBaseOf(this, pDerivedType);
	}

	bool ComponentType::isExactlyDerivatedFrom(const ComponentType *pBaseType) const
	{
		return ComponentType::isBaseOf(pBaseType, this);
	}

	bool ComponentType::isBaseOf(const ComponentType *pBaseType, const ComponentType *pDerivedType)
	{
		for (const auto *pBase{pDerivedType}; pBase; ++pBase)
			if (*pBase == *pBaseType)
				return true;

		return false;
	}

	bool ComponentType::isExactlyBaseOf(const ComponentType *pBaseType, const ComponentType *pDerivedType)
	{
		if (!pDerivedType)
			return false;

		for (const auto *pBase{pDerivedType->pBaseType}; pBase; ++pBase)
			if (*pBase == *pBaseType)
				return true;

		return false;
	}

	Component ComponentType::construct(Object *pObject) const
	{
		if (!this->fConstructor)
			throw std::exception{"not constructible component type"};

		return this->fConstructor(pObject);
	}
}