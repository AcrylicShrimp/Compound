
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_OBJECT_H

#define _CLASS_COMPOUND_CORE_OBJECT_H

#include "Component.h"
#include "ComponentManager.h"
#include "ComponentType.h"
#include "Instance.h"

#include <unordered_map>

namespace Compound::Core
{
	class Object final
	{
	private:
		Instance *pInstance;
		std::unordered_multimap<const ComponentType *, Component> sComponentMap;

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
		Component *component(const ComponentType *pComponentType);
		const Component *component(const ComponentType *pComponentType) const;
		std::vector<Component *> componentAll(const ComponentType *pComponentType);
		std::vector<const Component *> componentAll(const ComponentType *pComponentType) const;
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
		return this->component(this->pInstance->componentManager().type<T>());
	}

	template<class T> inline const T *Object::component() const
	{
		return this->component(this->pInstance->componentManager().type<T>());
	}

	template<class T> inline std::vector<T *> Object::componentAll()
	{
		return this->componentAll(this->pInstance->componentManager().type<T>());
	}

	template<class T> inline const std::vector<T *> Object::componentAll() const
	{
		return this->componentAll(this->pInstance->componentManager().type<T>());
	}

	Component *Object::component(const ComponentType *pComponentType)
	{

	}

	const Component *Object::component(const ComponentType *pComponentType) const
	{

	}

	std::vector<Component *> Object::componentAll(const ComponentType *pComponentType)
	{

	}

	std::vector<const Component *> Object::componentAll(const ComponentType *pComponentType) const
	{

	}
}

#endif