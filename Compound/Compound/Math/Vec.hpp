
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

namespace Compound::Math
{
	template<class T, std::size_t D> Vec<T, D>::Vec(const T tScalar)
	{
		*this = tScalar;
	}

	template<class T, std::size_t D> Vec<T, D>::Vec(std::initializer_list<T> sList)
	{
		*this = sList;
	}

	template<class T, std::size_t D> template<class I> Vec<T, D>::Vec(I iBegin, I iEnd)
	{
		std::copy(iBegin, iEnd, this->begin());
	}

	template<class T, std::size_t D> template<class E> Vec<T, D>::Vec(const VecOp<T, D, E> &sVecOp)
	{
		*this = sVecOp;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator=(const T tScalar)
	{
		this->sVec.fill(tScalar);

		return *this;
	}
	
	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator=(std::initializer_list<T> sList)
	{
		assert(sList.size() == D);

		std::copy(sList.begin(), sList.end(), this->begin());

		return *this;
	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator=(const VecOp<T, D, E> &sVecOp)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] = sVecOp[nIndex];

		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator+=(std::initializer_list<T> sList)
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] += sList.begin()[nIndex];

		return *this;
	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator+=(const VecOp<T, D, E> &sVecOp)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] += sVecOp[nIndex];

		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator-=(std::initializer_list<T> sList)
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] -= sList.begin()[nIndex];

		return *this;
	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator-=(const VecOp<T, D, E> &sVecOp)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] -= sVecOp[nIndex];
		
		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator*=(const T tScalar)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] *= tScalar;

		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator*=(std::initializer_list<T> sList)
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] *= sList.begin()[nIndex];

		return *this;
	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator*=(const VecOp<T, D, E> &sVecOp)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] *= sVecOp[nIndex];

		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator/=(const T tScalar)
	{
		tScalar = T(1) / tScalar;

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] /= tScalar;

		return *this;
	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator/=(std::initializer_list<T> sList)
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] /= sList.begin()[nIndex];

		return *this;
	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator/=(const VecOp<T, D, E> &sVecOp)
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			this->sVec[nIndex] *= sVecOp[nIndex];

		return *this;
	}

	template<class T, std::size_t D> bool Vec<T, D>::operator==(std::initializer_list<T> sList) const
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			if (this->sVec[nIndex] != sList.begin()[nIndex])
				return false;

		return true;
	}

	template<class T, std::size_t D> template<class E> bool Vec<T, D>::operator==(const VecOp<T, D, E> &sVecOp) const
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			if (this->sVec[nIndex] != sVecOp[nIndex])
				return false;

		return true;
	}

	template<class T, std::size_t D> bool Vec<T, D>::operator!=(std::initializer_list<T> sList) const
	{
		assert(sList.size() == D);

		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			if (this->sVec[nIndex] != sList.begin()[nIndex])
				return true;

		return false;
	}

	template<class T, std::size_t D> template<class E> bool Vec<T, D>::operator!=(const VecOp<T, D, E> &sVecOp) const
	{
		for (std::size_t nIndex{0}; nIndex < D; ++nIndex)
			if (this->sVec[nIndex] != sVecOp[nIndex])
				return true;

		return false;
	}

	template<class T, std::size_t D> T &Vec<T, D>::operator[](std::size_t nIndex)
	{
		assert(nIndex < D);

		return this->sVec[nIndex];
	}

	template<class T, std::size_t D> const T &Vec<T, D>::operator[](std::size_t nIndex) const
	{
		assert(nIndex < D);

		return this->sVec[nIndex];
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::iterator Vec<T, D>::begin() noexcept
	{
		return this->sVec.begin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_iterator Vec<T, D>::begin() const noexcept
	{
		return this->sVec.begin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_iterator Vec<T, D>::cbegin() const noexcept
	{
		return this->sVec.cbegin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::reverse_iterator Vec<T, D>::rbegin() noexcept
	{
		return this->sVec.rbegin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_reverse_iterator Vec<T, D>::rbegin() const noexcept
	{
		return this->sVec.rbegin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_reverse_iterator Vec<T, D>::crbegin() const noexcept
	{
		return this->sVec.crbegin();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::iterator Vec<T, D>::end() noexcept
	{
		return this->sVec.end();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_iterator Vec<T, D>::end() const noexcept
	{
		return this->sVec.end();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_iterator Vec<T, D>::cend() const noexcept
	{
		return this->sVec.cend();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::reverse_iterator Vec<T, D>::rend() noexcept
	{
		return this->sVec.rend();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_reverse_iterator Vec<T, D>::rend() const noexcept
	{
		return this->sVec.rend();
	}

	template<class T, std::size_t D> inline constexpr typename std::array<T, D>::const_reverse_iterator Vec<T, D>::crend() const noexcept
	{
		return this->sVec.crend();
	}
	
	template<class T, std::size_t D> VecOpDivide<T, D, const Vec<T, D> &, T> Vec<T, D>::normalized() const
	{
		return *this / this->magnitude();
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::zero()
	{
		return Vec<T, D>(T(0));
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::one()
	{
		return Vec<T, D>(T(1));
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveX()
	{
		static_assert(D >= 1);

		return Vec<T, D>::oneHot(0);
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeX()
	{
		static_assert(D >= 1);

		return -Vec<T, D>::positiveX();
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveY()
	{
		static_assert(D >= 2);

		return Vec<T, D>::oneHot(1);
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeY()
	{
		static_assert(D >= 2);

		return -Vec<T, D>::positiveY();
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveZ()
	{
		static_assert(D >= 3);

		return Vec<T, D>::oneHot(2);
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeZ()
	{
		static_assert(D >= 3);

		return -Vec<T, D>::positiveZ();
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::oneHot(std::size_t nIndex)
	{
		assert(nIndex < D);

		auto sZero{Vec<T, D>::zero()};

		sZero[nIndex] = T(1);

		return sZero;
	}

	template<class T, std::size_t D> template<class EL, class ER> T Vec<T, D>::dot(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight)
	{
		return (sLeft * sRight).sum();
	}

	template<class T, std::size_t D> template<class EL, class ER> T Vec<T, D>::distance(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight)
	{
		return std::sqrt(((sLeft * sLeft) - (sRight * sRight)).sum());
	}

	template<class T, std::size_t D> template<class EL, class ER> Vec<T, D> Vec<T, D>::cross(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight)
	{
		static_assert(D == 3);


	}

	template<class T, std::size_t D> template<class EL, class ER> decltype(auto) Vec<T, D>::lerp(const VecOp<T, D, EL> &sFrom, const VecOp<T, D, ER> &sTo, T tT)
	{
		return sFrom * (T(1) - std::clamp(tT, T(0), T(1))) + sTo * std::clamp(tT, T(0), T(1));
	}
}