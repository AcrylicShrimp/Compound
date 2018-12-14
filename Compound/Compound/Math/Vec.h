
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
#include <cstdint>
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
		inline T &operator[](std::size_t nIndex);
		inline const T &operator[](std::size_t nIndex) const;
		
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
		inline decltype(auto) normalized() const;
		static inline Vec zero();
		static inline Vec one();
		static inline Vec positiveX();
		static inline Vec negativeX();
		static inline Vec positiveY();
		static inline Vec negativeY();
		static inline Vec positiveZ();
		static inline Vec negativeZ();
		static inline Vec oneHot(std::size_t nIndex);
		template<class EL, class ER> static inline T dot(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static inline T distance(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static inline decltype(auto) cross(const VecOp<T, D, EL> &sLeft, const VecOp<T, D, ER> &sRight);
		template<class EL, class ER> static inline decltype(auto) lerp(const VecOp<T, D, EL> &sFrom, const VecOp<T, D, ER> &sTo, T tT);
		template<class EL, class ER> static inline decltype(auto) lerp(const VecOp<T, D, EL> &&sFrom, const VecOp<T, D, ER> &sTo, T tT);
		template<class EL, class ER> static inline decltype(auto) lerp(const VecOp<T, D, EL> &sFrom, const VecOp<T, D, ER> &&sTo, T tT);
		template<class EL, class ER> static inline decltype(auto) lerp(const VecOp<T, D, EL> &&sFrom, const VecOp<T, D, ER> &&sTo, T tT);
	};

	using bvec1 = Vec<bool, 1>;
	using bvec2 = Vec<bool, 2>;
	using bvec3 = Vec<bool, 3>;
	using bvec4 = Vec<bool, 4>;
	using ivec1 = Vec<std::int32_t, 1>;
	using ivec2 = Vec<std::int32_t, 2>;
	using ivec3 = Vec<std::int32_t, 3>;
	using ivec4 = Vec<std::int32_t, 4>;
	using uvec1 = Vec<std::uint32_t, 1>;
	using uvec2 = Vec<std::uint32_t, 2>;
	using uvec3 = Vec<std::uint32_t, 3>;
	using uvec4 = Vec<std::uint32_t, 4>;
	using vec1 = Vec<float, 1>;
	using vec2 = Vec<float, 2>;
	using vec3 = Vec<float, 3>;
	using vec4 = Vec<float, 4>;
	using dvec1 = Vec<double, 1>;
	using dvec2 = Vec<double, 2>;
	using dvec3 = Vec<double, 3>;
	using dvec4 = Vec<double, 4>;
}

#include "Vec.hpp"

#endif