
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_COMPONENTTYPE_H

#define _CLASS_COMPOUND_CORE_COMPONENTTYPE_H

#include <functional>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>

namespace Compound::Core
{
	class Component;
	class Object;

	class ComponentType final
	{
	private:
		const ComponentType *pBaseType;
		std::string sTypeName;
		std::function<std::unique_ptr<Component>(Object *)> fConstructor;
		
	public:
		ComponentType(const ComponentType *pBaseType, std::string_view sTypeName);
		ComponentType(const ComponentType *pBaseType, std::string_view sTypeName, std::function<std::unique_ptr<Component>(Object *)> fConstructor);
		ComponentType(const ComponentType &sSrc) = delete;
		~ComponentType() noexcept = default;
		
	public:
		ComponentType &operator=(const ComponentType &sSrc) = delete;
		bool operator==(const ComponentType &sRight) const;
		
	public:
		inline std::string_view typeName() const noexcept;
		inline const ComponentType *baseType() const noexcept;
		bool isBaseOf(const ComponentType *pDerivedType) const;
		bool isDerivatedFrom(const ComponentType *pBaseType) const;
		bool isExactlyBaseOf(const ComponentType *pDerivedType) const;
		bool isExactlyDerivatedFrom(const ComponentType *pBaseType) const;
		std::unique_ptr<Component> construct(Object *pObject) const;

	private:
		static bool isBaseOf(const ComponentType *pBaseType, const ComponentType *pDerivedType);
		static bool isExactlyBaseOf(const ComponentType *pBaseType, const ComponentType *pDerivedType);
	};

	inline std::string_view ComponentType::typeName() const noexcept
	{
		return this->sTypeName;
	}

	inline const ComponentType *ComponentType::baseType() const noexcept
	{
		return this->pBaseType;
	}
}

#endif