
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_OBJECT_H

#define _CLASS_COMPOUND_CORE_OBJECT_H

#include "../Instance.h"
#include "Component.h"
#include "ComponentManager.h"
#include "ComponentType.h"

#include <iterator>
#include <memory>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace Compound::Core
{
	class Object final
	{
	private:
		Instance *pInstance;
		std::unordered_set<std::unique_ptr<Component>> sComponentSet;
		std::unordered_multimap<const ComponentType *, Component *> sComponentMap;

	public:
		Object(Instance *pInstance);
		Object(const Object &sSrc) = delete;
		~Object() = default;
		
	public:
		Object &operator=(const Object &sSrc) = delete;
		
	public:
		inline Instance *instance();
		inline const Instance *instance() const;
		template<class T> inline T *component();
		template<class T> inline const T *component() const;
		template<class T> inline std::vector<T *> componentAll();
		template<class T> inline const std::vector<T *> componentAll() const;
		template<class T> inline T *addComponent();
		Component *component();
		Component *component(const ComponentType *pComponentType);
		const Component *component(const ComponentType *pComponentType) const;
		std::vector<Component *> componentAll();
		std::vector<Component *> componentAll(const ComponentType *pComponentType);
		std::vector<const Component *> componentAll(const ComponentType *pComponentType) const;
		Component *addComponent(const ComponentType *pComponentType);
	};

	inline Instance *Object::instance()
	{
		return this->pInstance;
	}

	inline const Instance *Object::instance() const
	{
		return this->pInstance;
	}

	template<class T> inline T *Object::component()
	{
		static_assert(std::is_base_of<Component, T>());

		return static_cast<T *>(this->component(this->pInstance->sComponentManager.type<T>()));
	}

	template<class T> inline const T *Object::component() const
	{
		static_assert(std::is_base_of<Component, T>());

		return static_cast<T *>(this->component(this->pInstance->sComponentManager.type<T>()));
	}

	template<class T> inline std::vector<T *> Object::componentAll()
	{
		static_assert(std::is_base_of<Component, T>());

		const auto *pComponentType{this->pInstance->sComponentManager.type<T>()};

		if (!pComponentType)
			return {};

		auto sPair{this->sComponentMap.equal_range(pComponentType)};

		std::vector<T *> sResult;
		sResult.reserve(std::distance(sPair.first, sPair.second));

		for (; sPair.first != sPair.second; ++sPair.first)
			sResult.emplace_back(static_cast<T *>(sPair.first->second));

		return sResult;
	}

	template<class T> inline const std::vector<T *> Object::componentAll() const
	{
		static_assert(std::is_base_of<Component, T>());

		const auto *pComponentType{this->pInstance->sComponentManager.type<T>()};

		if (!pComponentType)
			return {};

		auto sPair{this->sComponentMap.equal_range(pComponentType)};

		std::vector<const T *> sResult;
		sResult.reserve(std::distance(sPair.first, sPair.second));

		for (; sPair.first != sPair.second; ++sPair.first)
			sResult.emplace_back(static_cast<const T *>(sPair.first->second));

		return sResult;
	}

	template<class T> inline T *Object::addComponent()
	{
		static_assert(std::is_base_of<Component, T>());

		return static_cast<T *>(this->addComponent(this->pInstance->sComponentManager.type<T>()));
	}
}

#endif