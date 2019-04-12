
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#include "ManagerBase.h"

#include "Instance.h"

namespace Compound
{
	ManagerBase::ManagerBase(Instance *pInstance) noexcept :
		pInstance{pInstance}
	{
		assert(this->pInstance);
	}
}