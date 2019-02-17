
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#include "Instance.h"

namespace Compound
{
	Instance::Instance(std::wstring_view sApplicationName) :
		sApplicationName{sApplicationName},
		sComponentManager{this},
		sDisplayManager{this}
	{
		//Empty.
	}
}