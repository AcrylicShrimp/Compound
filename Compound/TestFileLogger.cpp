
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#include "TestFileLogger.h"

TestFileLogger::TestFileLogger(Compound::Core::Object *pObject) :
	TestLogger(pObject)
{
	//Empty.
}

void TestFileLogger::log(std::string_view sMessage)
{
	std::ofstream{"log.txt", std::ios_base::app | std::ios_base::out} << sMessage;
}

const Compound::Core::ComponentType *TestFileLogger::type() const
{
	return this->pObject->instance()->componentManager().type<TestFileLogger>();
}

std::string_view TestFileLogger::typeName()
{
	return "TestFileLogger";
}