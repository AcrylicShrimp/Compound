
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_MATH_VECOP_H

#define _CLASS_COMPOUND_MATH_VECOP_H

#include <cstddef>
#include <tuple>
#include <type_traits>
#include <utility>

namespace Compound::Math
{
	template<class T, std::size_t D, class E> class VecOp
	{
	public:
		T operator[](std::size_t nIndex) const
		{
			return static_cast<const E &>(*this)[nIndex];
		}
	};

	template<class T, std::size_t D, class E> class VecOpPlus : public VecOp<T, D, VecOpPlus<T, D, E>>
	{
	protected:
		const E &tE;

	public:
		VecOpPlus(const E &tE) :
			tE(tE)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tE[nIndex];
		}
	};

	template<class T, std::size_t D, class E> class VecOpMinus : public VecOp<T, D, VecOpMinus<T, D, E>>
	{
	protected:
		const E &tE;

	public:
		VecOpMinus(const E &tE) :
			tE(tE)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return -tE[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpAdd : public VecOp<T, D, VecOpAdd<T, D, EL, ER>>
	{
	protected:
		const EL &tEL;
		const ER &tER;

	public:
		VecOpAdd(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] + tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpSubtract : public VecOp<T, D, VecOpSubtract<T, D, EL, ER>>
	{
	protected:
		const EL &tEL;
		const ER &tER;

	public:
		VecOpSubtract(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] - tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER, bool SL = std::is_arithmetic_v<std::remove_cv_t<EL>>, bool SR = std::is_arithmetic_v<std::remove_cv_t<ER>>> class VecOpMultiply : public VecOp<T, D, VecOpMultiply<T, D, EL, ER, SL, SR>>
	{
		static_assert(!SL || !SR);
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpMultiply<T, D, EL, ER, true, false> : public VecOp<T, D, VecOpMultiply<T, D, EL, ER, true, false>>
	{
	protected:
		const EL tEL;
		const ER &tER;

	public:
		VecOpMultiply(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL * tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpMultiply<T, D, EL, ER, false, true> : public VecOp<T, D, VecOpMultiply<T, D, EL, ER, false, true>>
	{
	protected:
		const EL &tEL;
		const ER tER;

	public:
		VecOpMultiply(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] * tER;
		}
	};
	
	template<class T, std::size_t D, class EL, class ER> class VecOpMultiply<T, D, EL, ER, false, false> : public VecOp<T, D, VecOpMultiply<T, D, EL, ER, false, false>>
	{
	protected:
		const EL &tEL;
		const ER &tER;

	public:
		VecOpMultiply(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] * tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER, bool SL = std::is_arithmetic_v<std::remove_cv_t<EL>>, bool SR = std::is_arithmetic_v<std::remove_cv_t<ER>>> class VecOpDivide : public VecOp<T, D, VecOpDivide<T, D, EL, ER, SL, SR>>
	{
		static_assert(!SL || !SR);
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpDivide<T, D, EL, ER, true, false> : public VecOp<T, D, VecOpDivide<T, D, EL, ER, true, false>>
	{
	protected:
		const EL tEL;
		const ER &tER;

	public:
		VecOpDivide(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL * tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpDivide<T, D, EL, ER, false, true> : public VecOp<T, D, VecOpDivide<T, D, EL, ER, false, true>>
	{
	protected:
		const EL &tEL;
		const ER tER;

	public:
		VecOpDivide(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] * tER;
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpDivide<T, D, EL, ER, false, false> : public VecOp<T, D, VecOpDivide<T, D, EL, ER, false, false>>
	{
	protected:
		const EL &tEL;
		const ER &tER;

	public:
		VecOpDivide(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(tER)
		{
			//Empty.
		}

	public:
		T operator[](std::size_t nIndex) const
		{
			return tEL[nIndex] * tER[nIndex];
		}
	};

	template<class T, std::size_t D, class E> inline VecOpPlus<T, D, E> operator+(const E &tE)
	{
		return VecOpPlus<T, D, E>(tE);
	}

	template<class T, std::size_t D, class E> inline VecOpMinus<T, D, E> operator-(const E &tE)
	{
		return VecOpMinus<T, D, E>(tE);
	}

	template<class T, std::size_t D, class EL, class ER> inline VecOpAdd<T, D, EL, ER> operator+(const EL &tEL, const ER &tER)
	{
		return VecOpAdd<T, D, EL, ER>{tEL, tER};
	}

	template<class T, std::size_t D, class EL, class ER> inline VecOpSubtract<T, D, EL, ER> operator-(const EL &tEL, const ER &tER)
	{
		return VecOpSubtract<T, D, EL, ER>{tEL, tER};
	}

	template<class T, std::size_t D, class EL, class ER> inline VecOpMultiply<T, D, EL, ER> operator*(const EL &tEL, const ER &tER)
	{
		return VecOpMultiply<T, D, EL, ER>{tEL, tER};
	}

	template<class T, std::size_t D, class EL, class ER> inline VecOpDivide<T, D, EL, ER> operator/(const EL &tEL, const ER &tER)
	{
		return VecOpDivide<T, D, EL, ER>{tEL, tER};
	}
}

#endif