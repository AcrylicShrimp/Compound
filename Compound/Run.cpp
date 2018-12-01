
#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Instance.h"
#include "Compound/Core/Object.h"

#include <iostream>

int main()
{
	using namespace Compound::Core;

	Instance sInstance;

	std::cout << sInstance.componentManager().type<Component>()->typeName() << std::endl;

	return 0;
}