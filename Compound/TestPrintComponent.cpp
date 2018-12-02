
/*
	2018.12.02
	Created by AcrylicShrimp.
*/

#include "TestPrintComponent.h"

TestPrintComponent::TestPrintComponent(Compound::Core::Object *pObject) :
	Component(pObject)
{
	//Empty.
}

void TestPrintComponent::message(std::string_view sMessage)
{
	this->sMessage = sMessage;
}

void TestPrintComponent::print()
{
	std::cout << this->sMessage << std::endl;
}

const Compound::Core::ComponentType *TestPrintComponent::type() const
{
	return this->pObject->instance()->componentManager().type<TestPrintComponent>();
}

std::string_view TestPrintComponent::typeName()
{
	return "TestPrintComponent";
}