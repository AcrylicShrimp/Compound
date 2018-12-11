
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

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::zero()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::one()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveX()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeX()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveY()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeY()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::positiveZ()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::negativeZ()
	{

	}

	template<class T, std::size_t D> inline Vec<T, D> Vec<T, D>::oneHot(std::size_t nIndex)
	{
		assert(nIndex < D);
	}
}

#include "Vec.hpp"

#endif