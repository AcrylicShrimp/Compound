
/*
	2018.12.04
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_TESTLOGGER_H

#define _CLASS_TESTLOGGER_H

#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Object.h"

#include <string_view>

class TestLogger : public Compound::Core::Component
{
public:
	TestLogger(Compound::Core::Object *pObject);
	TestLogger(const TestLogger &sSrc) = delete;
	virtual ~TestLogger() = default;

public:
	TestLogger &operator=(const TestLogger &sSrc) = delete;

public:
	virtual void log(std::string_view sMessage) = 0;
	virtual const Compound::Core::ComponentType *type() const;
	static std::string_view typeName();
};

#endif