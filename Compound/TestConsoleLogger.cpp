
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#include "TestConsoleLogger.h"

TestConsoleLogger::TestConsoleLogger(Compound::Core::Object *pObject) :
	TestLogger(pObject)
{
	//Empty.
}

void TestConsoleLogger::log(std::string_view sMessage)
{
	std::cout << sMessage;
}

const Compound::Core::ComponentType *TestConsoleLogger::type() const
{
	return this->pObject->instance()->componentManager().type<TestConsoleLogger>();
}

std::string_view TestConsoleLogger::typeName()
{
	return "TestConsoleLogger";
}