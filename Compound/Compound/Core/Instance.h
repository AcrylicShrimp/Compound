
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_INSTANCE_H

#define _CLASS_COMPOUND_CORE_INSTANCE_H

#include "ComponentManager.h"

namespace Compound::Core
{
	class Instance final
	{
	private:
		ComponentManager sComponentManager;

	public:
		Instance();
		Instance(const Instance &sSrc) = delete;
		~Instance() = default;
		
	public:
		Instance &operator=(const Instance &sSrc) = delete;
		
	public:
		inline ComponentManager &componentManager();
		inline const ComponentManager &componentManager() const;
	};

	inline ComponentManager &Instance::componentManager()
	{
		return this->sComponentManager;
	}

	inline const ComponentManager &Instance::componentManager() const
	{
		return this->sComponentManager;
	}
}

#endif