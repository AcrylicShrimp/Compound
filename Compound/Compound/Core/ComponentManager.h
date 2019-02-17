
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_COMPONENTMANAGER_H

#define _CLASS_COMPOUND_CORE_COMPONENTMANAGER_H

#include "Component.h"
#include "ComponentType.h"
#include "../ManagerBase.h"

#include <functional>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <utility>

namespace Compound
{
	class Instance;
}

namespace Compound::Core
{
	class Object;

	class ComponentManager final : public ManagerBase
	{
	private:
		std::unordered_map<std::string, ComponentType> sTypeMap;

	public:
		ComponentManager(Instance *pInstance);
		ComponentManager(const ComponentManager &sSrc) = delete;
		~ComponentManager() = default;
		
	public:
		ComponentManager &operator=(const ComponentManager &sSrc) = delete;
		
	public:
		inline const ComponentType *type(std::string_view sTypeName) const;
		virtual void initialize() override;
		virtual void finalize() override;
		template<class T> inline const ComponentType *type() const;
		template<class T> inline void registerComponent();
		template<class T, class B> inline void registerComponent();
		template<class T> inline void registerComponent(std::function<std::unique_ptr<Component>(Object *)> fConstructor);
		template<class T, class B> inline void registerComponent(std::function<std::unique_ptr<Component>(Object *)> fConstructor);
		template<class T> inline void registerComponentWithDefaultConstructor();
		template<class T, class B> inline void registerComponentWithDefaultConstructor();
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
		static_assert(std::is_base_of<Component, T>());

		this->registerComponent<T, Component>();
	}

	template<class T, class B> inline void ComponentManager::registerComponent()
	{
		static_assert(std::is_base_of<B, T>());
		static_assert(std::is_base_of<Component, T>());
		static_assert(std::is_base_of<Component, B>());

		if (this->type<T>())
			throw std::exception{"already registered component type"};

		const auto *pBaseType{this->type<B>()};

		if (!pBaseType)
			throw std::exception{"already registered component type"};

		auto sTypeName{T::typeName()};

		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(sTypeName), std::forward_as_tuple(pBaseType, sTypeName));
	}

	template<class T> inline void ComponentManager::registerComponent(std::function<std::unique_ptr<Component>(Object *)> fConstructor)
	{
		static_assert(std::is_base_of<Component, T>());

		this->registerComponent<T, Component>(fConstructor);
	}

	template<class T, class B> inline void ComponentManager::registerComponent(std::function<std::unique_ptr<Component>(Object *)> fConstructor)
	{
		static_assert(std::is_base_of<B, T>());
		static_assert(std::is_base_of<Component, T>());
		static_assert(std::is_base_of<Component, B>());

		if (this->type<T>())
			throw std::exception{"already registered component type"};

		const auto *pBaseType{this->type<B>()};

		if (!pBaseType)
			throw std::exception{"already registered component type"};

		auto sTypeName{T::typeName()};

		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(sTypeName), std::forward_as_tuple(pBaseType, sTypeName, fConstructor));
	}

	template<class T> inline void ComponentManager::registerComponentWithDefaultConstructor()
	{
		static_assert(std::is_base_of<Component, T>());

		this->registerComponentWithDefaultConstructor<T, Component>();
	}

	template<class T, class B> inline void ComponentManager::registerComponentWithDefaultConstructor()
	{
		static_assert(std::is_base_of<B, T>());
		static_assert(std::is_base_of<Component, T>());
		static_assert(std::is_base_of<Component, B>());

		if (this->type<T>())
			throw std::exception{"already registered component type"};

		const auto *pBaseType{this->type<B>()};

		if (!pBaseType)
			throw std::exception{"already registered component type"};

		auto sTypeName{T::typeName()};

		this->sTypeMap.emplace(std::piecewise_construct, std::forward_as_tuple(sTypeName), std::forward_as_tuple(pBaseType, sTypeName, [](Object *pObject)
		{
			return std::unique_ptr<Component>{new T(pObject)};
		}));
	}
}

#endif