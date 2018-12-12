
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
#include <cmath>
#include <cstddef>
#include <initializer_list>
#include <iterator>
#include <type_traits>

namespace Compound::Math
{
	template<class T, std::size_t D> class Vec : public VecOp<T, D, Vec<T, D>>
	{
		static_assert(std::is_arithmetic_v<T>);
		static_assert(D >= 1);

	private:
		std::array<T, D> sVec;

	public:
		Vec() = default;
		Vec(const T tScalar);
		Vec(std::initializer_list<T> sList);
		template<class I> Vec(I iBegin, I iEnd);
		template<class E> Vec(const VecOp<T, D, E> &sVecOp);
		~Vec() = default;

	public:
		Vec &operator=(const T tScalar);
		Vec &operator=(std::initializer_list<T> sList);
		template<class E> Vec &operator=(const VecOp<T, D, E> &sVecOp);
		Vec &operator+=(std::initializer_list<T> sList);
		template<class E> Vec &operator+=(const VecOp<T, D, E> &sVecOp);
		Vec &operator-=(std::initializer_list<T> sList);
		template<class E> Vec &operator-=(const VecOp<T, D, E> &sVecOp);
		Vec &operator*=(const T tScalar);
		Vec &operator*=(std::initializer_list<T> sList);
		template<class E> Vec &operator*=(const VecOp<T, D, E> &sVecOp);
		Vec &operator/=(const T tScalar);
		Vec &operator/=(std::initializer_list<T> sList);
		template<class E> Vec &operator/=(const VecOp<T, D, E> &sVecOp);
		bool operator==(std::initializer_list<T> sList) const;
		template<class E> bool operator==(const VecOp<T, D, E> &sVecOp) const;
		bool operator!=(std::initializer_list<T> sList) const;
		template<class E> bool operator!=(const VecOp<T, D, E> &sVecOp) const;
		T &operator[](std::size_t nIndex);
		const T &operator[](std::size_t nIndex) const;
		
	public:
		constexpr typename std::array<T, D>::iterator begin() noexcept;
		constexpr typename std::array<T, D>::const_iterator begin() const noexcept;
		constexpr typename std::array<T, D>::const_iterator cbegin() const noexcept;
		constexpr typename std::array<T, D>::reverse_iterator rbegin() noexcept;
		constexpr typename std::array<T, D>::const_reverse_iterator rbegin() const noexcept;
		constexpr typename std::array<T, D>::const_reverse_iterator crbegin() const noexcept;
		constexpr typename std::array<T, D>::iterator end() noexcept;
		constexpr typename std::array<T, D>::const_iterator end() const noexcept;
		constexpr typename std::array<T, D>::const_iterator cend() const noexcept;
		constexpr typename std::array<T, D>::reverse_iterator rend() noexcept;
		constexpr typename std::array<T, D>::const_reverse_iterator rend() const noexcept;
		constexpr typename std::array<T, D>::const_reverse_iterator crend() const noexcept;
		T sum() const;
		T magnitude() const;
		T magnitudeSquare() const;
		Vec normalized() const;
		static Vec zero();
		static Vec one();
		static Vec positiveX();
		static Vec negativeX();
		static Vec positiveY();
		static Vec negativeY();
		static Vec positiveZ();
		static Vec negativeZ();
		static Vec oneHot(std::size_t nIndex);
		template<class EL, class ER> static T dot(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static T distance(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static Vec cross(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static Vec lerp(const VecOp<T, D, EL> &sFrom, const VecOp<T, D, ER> &sTo, T tT);
	};
}

#include "Vec.hpp"

#endif