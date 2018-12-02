
/*
	2018.12.02
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_TESTPRINTCOMPONENT_H

#define _CLASS_TESTPRINTCOMPONENT_H

#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Object.h"

#include <iostream>
#include <string>
#include <string_view>

class TestPrintComponent : public Compound::Core::Component
{
protected:
	std::string sMessage;
	
public:
	TestPrintComponent(Compound::Core::Object *pObject);
	TestPrintComponent(const TestPrintComponent &sSrc) = delete;
	virtual ~TestPrintComponent() = default;
	
public:
	TestPrintComponent &operator=(const TestPrintComponent &sSrc) = delete;
	
public:
	void message(std::string_view sMessage);
	void print();
	virtual const Compound::Core::ComponentType *type() const;
	static std::string_view typeName();
};

#endif