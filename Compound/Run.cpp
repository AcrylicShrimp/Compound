
#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Instance.h"
#include "Compound/Core/Object.h"

#include "Compound/Math/VecOp.h"

#include "TestLogger.h"
#include "TestConsoleLogger.h"
#include "TestFileLogger.h"

#include <iostream>
#include <memory>
#include <vector>

int main()
{
	using namespace Compound::Core;
	using namespace Compound::Math;

	Instance sInstance;

	//std::cout << A[0] << std::endl;
	//std::cout << A[1] << std::endl;
	//std::cout << A[2] << std::endl;
	//std::cout << A[3] << std::endl;
	
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

	auto sLogger{sObject.componentAll<TestLogger>()};

	std::cout << "Number of TestLogger Object : " << sLogger.size() << std::endl;

	for (auto *pLogger : sLogger)
	{
		std::cout << pLogger->type()->typeName() << std::endl;
		pLogger->log("This is my test message.\n");
	}

	return 0;
}