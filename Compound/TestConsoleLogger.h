
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_TESTCONSOLELOGGER_H

#define _CLASS_TESTCONSOLELOGGER_H

#include "TestLogger.h"

#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Object.h"

#include <iostream>
#include <string_view>

class TestConsoleLogger : public TestLogger
{
public:
	TestConsoleLogger(Compound::Core::Object *pObject);
	TestConsoleLogger(const TestConsoleLogger &sSrc) = delete;
	virtual ~TestConsoleLogger() = default;

public:
	TestConsoleLogger &operator=(const TestConsoleLogger &sSrc) = delete;

public:
	virtual void log(std::string_view sMessage);
	virtual const Compound::Core::ComponentType *type() const;
	static std::string_view typeName();
};

#endif