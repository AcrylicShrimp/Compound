
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#include "TestLogger.h"

TestLogger::TestLogger(Compound::Core::Object *pObject) :
	Component(pObject)
{
	//Empty.
}

const Compound::Core::ComponentType *TestLogger::type() const
{
	return this->pObject->instance()->sComponentManager.type<TestLogger>();
}

std::string_view TestLogger::typeName()
{
	return "TestLogger";
}