
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_MATH_VEC_H

#define _CLASS_COMPOUND_MATH_VEC_H

#include "VecOp.h"

#include <algorithm>
#include <array>
#include <cassert>
#include <cstddef>
#include <initializer_list>

namespace Compound::Math
{
	template<class T, std::size_t D> class Vec : public VecOp<T, D, Vec<T, D>>
	{
		static_assert(D >= 1);

	private:
		std::array<T, D> sVec;

	public:
		Vec() = default;
		Vec(const T &tScalar);
		Vec(const Vec &sSrc);
		Vec(std::initializer_list<T> sList);
		Vec(typename std::array<T, D>::const_iterator &iBegin, typename std::array<T, D>::const_iterator &iEnd);
		template<class E> Vec(const VecOp<T, D, E> &sVecOp);
		~Vec() = default;

	public:
		Vec &operator=(const T &tScalar);
		Vec &operator=(const Vec &sSrc);
		template<class E> Vec &operator=(const VecOp<T, D, E> &sVecOp);
		Vec &operator+=(const Vec &sVec);
		template<class E> Vec &operator+=(const VecOp<T, D, E> &sVecOp);
		Vec &operator-=(const Vec &sVec);
		template<class E> Vec &operator-=(const VecOp<T, D, E> &sVecOp);
		Vec &operator*=(const T &tScalar);
		Vec &operator*=(const Vec &sVec);
		template<class E> Vec &operator*=(const VecOp<T, D, E> &sVecOp);
		Vec &operator/=(const T &tScalar);
		Vec &operator/=(const Vec &sVec);
		template<class E> Vec &operator/=(const VecOp<T, D, E> &sVecOp);
		bool operator==(const Vec &sVec) const;
		template<class E> bool operator==(const VecOp<T, D, E> &sVecOp) const;
		bool operator!=(const Vec &sVec) const;
		template<class E> bool operator!=(const VecOp<T, D, E> &sVecOp) const;
		T &operator[](std::size_t nIndex);
		const T &operator[](std::size_t nIndex) const;
		
	public:
		inline constexpr typename std::array<T, D>::iterator begin() noexcept;
		inline constexpr typename std::array<T, D>::const_iterator begin() const noexcept;
		inline constexpr typename std::array<T, D>::const_iterator cbegin() const noexcept;
		inline constexpr typename std::array<T, D>::reverse_iterator rbegin() noexcept;
		inline constexpr typename std::array<T, D>::const_reverse_iterator rbegin() const noexcept;
		inline constexpr typename std::array<T, D>::const_reverse_iterator crbegin() const noexcept;
		inline constexpr typename std::array<T, D>::iterator end() noexcept;
		inline constexpr typename std::array<T, D>::const_iterator end() const noexcept;
		inline constexpr typename std::array<T, D>::const_iterator cend() const noexcept;
		inline constexpr typename std::array<T, D>::reverse_iterator rend() noexcept;
		inline constexpr typename std::array<T, D>::const_reverse_iterator rend() const noexcept;
		inline constexpr typename std::array<T, D>::const_reverse_iterator crend() const noexcept;
		static inline Vec zero();
		static inline Vec one();
		static inline Vec positiveX();
		static inline Vec negativeX();
		static inline Vec positiveY();
		static inline Vec negativeY();
		static inline Vec positiveZ();
		static inline Vec negativeZ();
		static inline Vec oneHot(std::size_t nIndex);
	};

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
		auto sZero{Vec<T, D>::zero()};

		sZero[nIndex] = T(1);

		return sZero;
	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::oneHot(std::size_t nIndex)
	{
		assert(nIndex < D);
	}
}

#include "Vec.hpp"

#endif