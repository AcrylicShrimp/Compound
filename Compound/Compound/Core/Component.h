
/*
	2018.11.29
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_COMPONENT_H

#define _CLASS_COMPOUND_CORE_COMPONENT_H

#include <string_view>

namespace Compound::Core
{
	class ComponentType;
	class Object;

	class Component
	{
	protected:
		Object *pObject;
		
	public:
		Component(Object *pObject);
		Component(const Component &sSrc) = delete;
		virtual ~Component() noexcept = default;
		
	public:
		Component &operator=(const Component &sSrc) = delete;
		
	public:
		virtual const ComponentType *type() const;
		static std::string_view typeName() noexcept;
	};
}

#endif