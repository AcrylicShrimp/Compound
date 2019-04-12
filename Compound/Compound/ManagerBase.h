
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_MANAGERBASE_H

#define _CLASS_COMPOUND_CORE_MANAGERBASE_H

#include <cassert>

namespace Compound
{
	class Instance;

	class ManagerBase
	{
	public:
		Instance *const pInstance;
		
	public:
		ManagerBase(Instance *pInstance) noexcept;
		ManagerBase(const ManagerBase &sSrc) noexcept = default;
		~ManagerBase() noexcept = default;
		
	public:
		ManagerBase &operator=(const ManagerBase &sSrc) noexcept = default;
		
	public:
		virtual void initialize() = 0;
		virtual void finalize() = 0;
	};
}

#endif