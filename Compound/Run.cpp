
#include "Compound/Core/Component.h"
#include "Compound/Core/ComponentManager.h"
#include "Compound/Core/ComponentType.h"
#include "Compound/Core/Instance.h"
#include "Compound/Core/Object.h"

#include "Compound/Math/Vec.h"

#include "TestLogger.h"
#include "TestConsoleLogger.h"
#include "TestFileLogger.h"

#include <iostream>

int main()
{
	using namespace Compound::Core;
	using namespace Compound::Math;

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

	auto sLogger{sObject.componentAll<TestLogger>()};

	std::cout << "Number of TestLogger Object : " << sLogger.size() << std::endl;

	for (auto *pLogger : sLogger)
	{
		std::cout << pLogger->type()->typeName() << std::endl;
		pLogger->log("This is my test message.\n");
	}

	{
		vec1 sVec1;
		vec2 sVec2;
		vec3 sVec3;
		vec4 sVec4;

		std::cout << "------------------------------------" << std::endl;
		std::cout << "TEST 3" << std::endl;
		std::cout << sVec1 << std::endl;
		std::cout << sVec2 << std::endl;
		std::cout << sVec3 << std::endl;
		std::cout << sVec4 << std::endl;
		std::cout << "END OF TEST 3" << std::endl;
		std::cout << "------------------------------------" << std::endl << std::endl;
	}

	{
		vec1 sVec1(100.f);
		vec2 sVec2(100.f);
		vec3 sVec3(100.f);
		vec4 sVec4(100.f);

		std::cout << "------------------------------------" << std::endl;
		std::cout << "TEST 4" << std::endl;
		std::cout << sVec1 << std::endl;
		std::cout << sVec2 << std::endl;
		std::cout << sVec3 << std::endl;
		std::cout << sVec4 << std::endl;
		std::cout << "END OF TEST 4" << std::endl;
		std::cout << "------------------------------------" << std::endl << std::endl;
	}

	{
		vec1 sVec1(100.f);
		vec2 sVec2(100.f);
		vec3 sVec3(100.f);
		vec4 sVec4(100.f);

		vec1 sVec1Copy(sVec1);
		vec2 sVec2Copy(sVec2);
		vec3 sVec3Copy(sVec3);
		vec4 sVec4Copy(sVec4);

		std::cout << "------------------------------------" << std::endl;
		std::cout << "TEST 5" << std::endl;
		std::cout << sVec1Copy << std::endl;
		std::cout << sVec2Copy << std::endl;
		std::cout << sVec3Copy << std::endl;
		std::cout << sVec4Copy << std::endl;
		std::cout << "END OF TEST 5" << std::endl;
		std::cout << "------------------------------------" << std::endl << std::endl;
	}

	{
		vec1 sVec1{1.f};
		vec2 sVec2{1.f, 2.f};
		vec3 sVec3{1.f, 2.f, 3.f};
		vec4 sVec4{1.f, 2.f, 3.f, 4.f};

		std::cout << "------------------------------------" << std::endl;
		std::cout << "TEST 6" << std::endl;
		std::cout << sVec1.magnitude() << std::endl;
		std::cout << sVec2.magnitude() << std::endl;
		std::cout << sVec3.magnitude() << std::endl;
		std::cout << sVec4.magnitude() << std::endl << std::endl;

		std::cout << sVec1.normalized() << std::endl;
		std::cout << sVec2.normalized() << std::endl;
		std::cout << sVec3.normalized() << std::endl;
		std::cout << sVec4.normalized() << std::endl << std::endl;

		std::cout << sVec1 + sVec1 << std::endl;
		std::cout << sVec2 + sVec2 << std::endl;
		std::cout << sVec3 + sVec3 << std::endl;
		std::cout << sVec4 + sVec4 << std::endl << std::endl;

		std::cout << sVec1 - sVec1 << std::endl;
		std::cout << sVec2 - sVec2 << std::endl;
		std::cout << sVec3 - sVec3 << std::endl;
		std::cout << sVec4 - sVec4 << std::endl << std::endl;

		std::cout << 2 * sVec1 << std::endl;
		std::cout << 2 * sVec2 << std::endl;
		std::cout << 2 * sVec3 << std::endl;
		std::cout << 2 * sVec4 << std::endl << std::endl;

		std::cout << sVec1 * 2 << std::endl;
		std::cout << sVec2 * 2 << std::endl;
		std::cout << sVec3 * 2 << std::endl;
		std::cout << sVec4 * 2 << std::endl << std::endl;

		std::cout << sVec1 * sVec1 << std::endl;
		std::cout << sVec2 * sVec2 << std::endl;
		std::cout << sVec3 * sVec3 << std::endl;
		std::cout << sVec4 * sVec4 << std::endl << std::endl;

		std::cout << sVec1 / sVec1 << std::endl;
		std::cout << sVec2 / sVec2 << std::endl;
		std::cout << sVec3 / sVec3 << std::endl;
		std::cout << sVec4 / sVec4 << std::endl << std::endl;
		std::cout << "END OF TEST 6" << std::endl;
		std::cout << "------------------------------------" << std::endl << std::endl;
	}

	{
		vec1 sVec1From(.0f);
		vec2 sVec2From(.0f);
		vec3 sVec3From(.0f);
		vec4 sVec4From(.0f);

		vec1 sVec1To{1.f};
		vec2 sVec2To{1.f, 2.f};
		vec3 sVec3To{1.f, 2.f, 3.f};
		vec4 sVec4To{1.f, 2.f, 3.f, 4.f};

		auto exp{Vec<float, 4>::lerp(sVec4From, sVec4To, .2f)};

		std::cout << exp << std::endl;
		std::cout << exp << std::endl;
		std::cout << exp << std::endl;
		std::cout << exp << std::endl;

		std::cout << "------------------------------------" << std::endl;
		std::cout << "TEST 7" << std::endl;
		std::cout << Vec<float, 1>::lerp(sVec1From, sVec1To, .5f) << std::endl;
		std::cout << Vec<float, 2>::lerp(sVec2From, sVec2To, .5f) << std::endl;
		std::cout << Vec<float, 3>::lerp(sVec3From, sVec3To, .5f) << std::endl;
		std::cout << Vec<float, 4>::lerp(sVec4From, sVec4To, .5f) << std::endl;
		std::cout << "END OF TEST 7" << std::endl;
		std::cout << "------------------------------------" << std::endl << std::endl;

		auto test{sVec4From + sVec4To * sVec4From};
		auto test0 = test[0];
		auto test1 = test[1];
		auto test2 = test[2];
		auto test3 = test[3];

		sVec4From[0] = sVec4From[0] + sVec4To[0] * sVec4From[0];
		sVec4From[1] = sVec4From[1] + sVec4To[1] * sVec4From[1];
		sVec4From[2] = sVec4From[2] + sVec4To[2] * sVec4From[2];
		sVec4From[3] = sVec4From[3] + sVec4To[3] * sVec4From[3];

		std::cout << test << std::endl;
		std::cout << test0 << std::endl;
		std::cout << test1 << std::endl;
		std::cout << test2 << std::endl;
		std::cout << test3 << std::endl;
	}

	return 0;
}