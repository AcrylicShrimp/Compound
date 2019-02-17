
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_CORE_MANAGERBASE_H

#define _CLASS_COMPOUND_CORE_MANAGERBASE_H

namespace Compound
{
	class Instance;

	class ManagerBase
	{
	public:
		Instance *const pInstance;
		
	public:
		ManagerBase(Instance *pInstance);
		ManagerBase(const ManagerBase &sSrc) = default;
		~ManagerBase() = default;
		
	public:
		ManagerBase &operator=(const ManagerBase &sSrc) = default;
		
	public:
		virtual void initialize() = 0;
		virtual void finalize() = 0;
	};
}

#endif