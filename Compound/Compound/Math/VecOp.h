
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_MATH_VECOP_H

#define _CLASS_COMPOUND_MATH_VECOP_H

#include <cmath>
#include <cstddef>
#include <ostream>
#include <string>
#include <type_traits>

namespace Compound::Math
{
	template<class T, std::size_t D, class E> class VecOp
	{
	public:
		T operator[](std::size_t nIndex) const
		{
			return static_cast<const E &>(*this)[nIndex];
		}

		T sum() const
		{
			T tSum{0};

			for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
				tSum += (*this)[nIndex];

			return tSum;
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
			return tEL * tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpMultiply<T, D, EL, ER, false, true> : public VecOp<T, D, VecOpMultiply<T, D, EL, ER, false, true>>
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
			return tEL / tER[nIndex];
		}
	};

	template<class T, std::size_t D, class EL, class ER> class VecOpDivide<T, D, EL, ER, false, true> : public VecOp<T, D, VecOpDivide<T, D, EL, ER, false, true>>
	{
	protected:
		const EL &tEL;
		const ER &tER;

	public:
		VecOpDivide(const EL &tEL, const ER &tER) :
			tEL(tEL),
			tER(T(1) / tER)
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
			return tEL[nIndex] / tER[nIndex];
		}
	};
}

template<class T, std::size_t D, class E> inline Compound::Math::VecOpPlus<T, D, E> operator+(const Compound::Math::VecOp<T, D, E> &sVecOp)
{
	return Compound::Math::VecOpPlus<T, D, E>{static_cast<const E &>(sVecOp)};
}

template<class T, std::size_t D, class E> inline Compound::Math::VecOpMinus<T, D, E> operator-(const Compound::Math::VecOp<T, D, E> &sVecOp)
{
	return Compound::Math::VecOpMinus<T, D, E>{static_cast<const E &>(sVecOp)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpAdd<T, D, EL, ER> operator+(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpAdd<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpSubtract<T, D, EL, ER> operator-(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpSubtract<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpMultiply<T, D, EL, ER> operator*(const EL &tEL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpMultiply<T, D, EL, ER>{tEL, static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpMultiply<T, D, EL, ER> operator*(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const ER &tER)
{
	return Compound::Math::VecOpMultiply<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), tER};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpMultiply<T, D, EL, ER> operator*(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpMultiply<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpDivide<T, D, EL, ER> operator/(const EL &tEL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpDivide<T, D, EL, ER>{tEL, static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpDivide<T, D, EL, ER> operator/(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const ER &tER)
{
	return Compound::Math::VecOpDivide<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), tER};
}

template<class T, std::size_t D, class EL, class ER> inline Compound::Math::VecOpDivide<T, D, EL, ER> operator/(const Compound::Math::VecOp<T, D, EL> &sVecOpL, const Compound::Math::VecOp<T, D, ER> &sVecOpR)
{
	return Compound::Math::VecOpDivide<T, D, EL, ER>{static_cast<const EL &>(sVecOpL), static_cast<const ER &>(sVecOpR)};
}

template<class T, std::size_t D, class E> inline std::ostream &operator<<(std::ostream &sOutput, const Compound::Math::VecOp<T, D, E> &sVecOp)
{
	sOutput << "[";

	for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
		sOutput << (nIndex ? ", " : "") << sVecOp[nIndex];

	return sOutput << "]";
}

#endif