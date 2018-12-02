
#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Instance.h"
#include "Compound/Core/Object.h"

#include "TestPrintComponent.h"

#include <iostream>
#include <memory>

int main()
{
	using namespace Compound::Core;

	Instance sInstance;
	
	sInstance.componentManager().registerComponentWithDefaultConstructor<TestPrintComponent>();

	std::cout << sInstance.componentManager().type<Component>()->typeName() << std::endl;
	std::cout << sInstance.componentManager().type<TestPrintComponent>()->typeName() << std::endl;
	
	Object sObject{&sInstance};
	
	sObject.addComponent<TestPrintComponent>();

	std::cout << sObject.component<Component>()->type()->typeName() << std::endl;
	std::cout << sObject.component<TestPrintComponent>()->type()->typeName() << std::endl;

	sObject.component<TestPrintComponent>()->message("This is my test message.\n");
	sObject.component<TestPrintComponent>()->print();

	sObject.addComponent<TestPrintComponent>();
	sObject.addComponent<TestPrintComponent>();
	sObject.addComponent<TestPrintComponent>();

	auto sComponentList1{sObject.componentAll()};
	auto sComponentList2{sObject.componentAll<Component>()};
	auto sComponentList3{sObject.componentAll<TestPrintComponent>()};

	return 0;
}