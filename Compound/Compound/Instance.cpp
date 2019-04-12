
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
		sDisplayManager{this},
		sRenderManager{this}
	{
		this->sComponentManager.initialize();
		this->sDisplayManager.initialize();
		this->sRenderManager.initialize();
	}

	Instance::~Instance()
	{
		this->sRenderManager.finalize();
		this->sDisplayManager.finalize();
		this->sComponentManager.finalize();
	}
}