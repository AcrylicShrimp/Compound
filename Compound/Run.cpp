
#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Instance.h"
#include "Compound/Core/Object.h"

#include "TestLogger.h"
#include "TestConsoleLogger.h"
#include "TestFileLogger.h"

#include <iostream>
#include <memory>

int main()
{
	using namespace Compound::Core;

	Instance sInstance;
	
	sInstance.componentManager().registerComponent<TestLogger>();
	sInstance.componentManager().registerComponentWithDefaultConstructor<TestConsoleLogger, TestLogger>();
	sInstance.componentManager().registerComponentWithDefaultConstructor<TestFileLogger, TestLogger>();

	std::cout << sInstance.componentManager().type<Component>()->typeName() << std::endl;
	std::cout << sInstance.componentManager().type<TestLogger>()->typeName() << std::endl;
	std::cout << sInstance.componentManager().type<TestConsoleLogger>()->typeName() << std::endl;
	std::cout << sInstance.componentManager().type<TestFileLogger>()->typeName() << std::endl;
	
	Object sObject{&sInstance};
	
	sObject.addComponent<TestConsoleLogger>();
	sObject.addComponent<TestFileLogger>();

	std::cout << sObject.component<TestConsoleLogger>()->type()->typeName() << std::endl;
	std::cout << sObject.component<TestFileLogger>()->type()->typeName() << std::endl;

	auto sLogger{sObject.componentAll<TestLogger>()};

	std::cout << "Number of TestLogger Object : " << sLogger.size() << std::endl;

	for (auto *sLogger : sLogger)
		sLogger->log("This is my test message.\n");

	return 0;
}