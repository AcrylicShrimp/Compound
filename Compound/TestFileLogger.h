
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_TESTFILELOGGER_H

#define _CLASS_TESTFILELOGGER_H

#include "TestLogger.h"

#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Object.h"

#include <fstream>
#include <string_view>

class TestFileLogger : public TestLogger
{
public:
	TestFileLogger(Compound::Core::Object *pObject);
	TestFileLogger(const TestFileLogger &sSrc) = delete;
	virtual ~TestFileLogger() = default;

public:
	TestFileLogger &operator=(const TestFileLogger &sSrc) = delete;

public:
	virtual void log(std::string_view sMessage);
	virtual const Compound::Core::ComponentType *type() const;
	static std::string_view typeName();
};

#endif