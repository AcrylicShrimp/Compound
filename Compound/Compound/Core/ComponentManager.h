
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_COMPONENTMANAGER_H

#define _CLASS_COMPOUND_CORE_COMPONENTMANAGER_H

#include "Component.h"
#include "ComponentType.h"

#include <functional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <utility>

namespace Compound::Core
{
	class Object;

	class ComponentManager
	{
	private:
		std::unordered_map<std::string, ComponentType> sTypeMap;

	public:
		ComponentManager();
		ComponentManager(const ComponentManager &sSrc) = delete;
		~ComponentManager() = default;
		
	public:
		ComponentManager &operator=(const ComponentManager &sSrc) = delete;
		
	public:
		inline const ComponentType *type(std::string_view sTypeName) const;
		template<class T> inline const ComponentType *type() const;
		template<class T> inline void registerComponent();
		template<class T, class B> inline void registerComponent();
		template<class T> inline void registerComponent(std::function<Component(Object *)> fConstructor);
		template<class T, class B> inline void registerComponent(std::function<Component(Object *)> fConstructor);
	};

	inline const ComponentType *ComponentManager::type(std::string_view sTypeName) const
	{
		auto iIndex{this->sTypeMap.find(std::string{sTypeName})};

		return iIndex == this->sTypeMap.cend() ? nullptr : &iIndex->second;
	}

	template<class T> inline const ComponentType *ComponentManager::type() const
	{
		static_assert(std::is_base_of<Component, T>());

		return this->type(T::typeName());
	}

	template<class T> inline void ComponentManager::registerComponent()
	{
		this->registerComponent<T, Component>();
	}

	template<class T, class B> inline void ComponentManager::registerComponent()
	{
		if (this->type<T>())
			throw std::exception{"already registered component type"};

		const auto *pBaseType{this->type<B>()};

		if (!pBaseType)
			throw std::exception{"already registered component type"};

		auto sTypeName{T::typeName()};

		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(sTypeName), std::forward_as_tuple(pBaseType, sTypeName));
	}

	template<class T> inline void ComponentManager::registerComponent(std::function<Component(Object *)> fConstructor)
	{
		this->registerComponent<T, Component>(fConstructor);
	}

	template<class T, class B> inline void ComponentManager::registerComponent(std::function<Component(Object *)> fConstructor)
	{
		if (this->type<T>())
			throw std::exception{"already registered component type"};

		const auto *pBaseType{this->type<B>()};

		if (!pBaseType)
			throw std::exception{"already registered component type"};

		auto sTypeName{T::typeName()};

		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(sTypeName), std::forward_as_tuple(pBaseType, sTypeName, fConstructor));
	}
}

#endif