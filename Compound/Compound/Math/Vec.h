
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_MATH_VEC_H

#define _CLASS_COMPOUND_MATH_VEC_H

#include "VecOp.h"

#include <array>
#include <cstddef>
#include <initializer_list>

namespace Compound::Math
{
	template<class T, std::size_t D> class Vec : public VecOp<T, D, Vec<T, D>>
	{
	private:
		std::array<T, D> sVec;

	public:
		Vec() = default;
		Vec(const T &tScalar);
		Vec(const Vec &sSrc);
		Vec(std::initializer_list<T> sList);
		Vec(std::array::const_iterator &iBegin, std::array::const_iterator &iEnd);
		~Vec() = default;

	public:
		Vec &operator=(const T &tScalar);
		Vec &operator=(const Vec &sSrc);
		Vec &operator=(const VecOp<T, D> &sVecOp);
		Vec &operator+=(const Vec &sVec);
		Vec &operator+=(const VecOp<T, D> &sVecOp);
		Vec &operator-=(const Vec &sVec);
		Vec &operator-=(const VecOp<T, D> &sVecOp);
		Vec &operator*=(const T &tScalar);
		Vec &operator*=(const Vec &sVec);
		Vec &operator*=(const VecOp<T, D> &sVecOp);
		Vec &operator/=(const T &tScalar);
		Vec &operator/=(const Vec &sVec);
		Vec &operator/=(const VecOp<T, D> &sVecOp);
		bool operator==(const Vec &sVec) const;
		bool operator==(const VecOp<T, D> &sVecOp) const;
		bool operator!=(const Vec &sVec) const;
		bool operator!=(const VecOp<T, D> &sVecOp) const;
		T &operator=(std::size_t nIndex);
		const T &operator=(std::size_t nIndex);
		
	public:
		static inline Vec zero();
		static inline Vec one();
		static inline Vec positiveX();
		static inline Vec negativeX();
		static inline Vec positiveY();
		static inline Vec negativeY();
		static inline Vec positiveZ();
		static inline Vec negativeZ();
	};
}

#include "Vec.hpp"

#endif