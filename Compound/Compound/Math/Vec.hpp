
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

namespace Compound::Math
{
	template<class T, std::size_t D> Vec<T, D>::Vec(const T &tScalar)
	{
		this->sVec.fill(tScalar);
	}

	template<class T, std::size_t D> Vec<T, D>::Vec(const Vec &sSrc)
	{

	}

	template<class T, std::size_t D> Vec<T, D>::Vec(std::initializer_list<T> sList)
	{
		static_assert(sList.size() == D);
	}

	template<class T, std::size_t D> Vec<T, D>::Vec(typename std::array<T, D>::const_iterator &iBegin, typename std::array<T, D>::const_iterator &iEnd)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator=(const T &tScalar)
	{

	}
	
	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator=(const Vec &sSrc)
	{

	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator=(const VecOp<T, D, E> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator+=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator+=(const VecOp<T, D, E> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator-=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator-=(const VecOp<T, D, E> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator*=(const T &tScalar)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator*=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator*=(const VecOp<T, D, E> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator/=(const T &tScalar)
	{

	}

	template<class T, std::size_t D> Vec<T, D> &Vec<T, D>::operator/=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> template<class E> Vec<T, D> &Vec<T, D>::operator/=(const VecOp<T, D, E> &sVecOp)
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator==(const Vec &sVec) const
	{

	}

	template<class T, std::size_t D> template<class E> bool Vec<T, D>::operator==(const VecOp<T, D, E> &sVecOp) const
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator!=(const Vec &sVec) const
	{

	}

	template<class T, std::size_t D> template<class E> bool Vec<T, D>::operator!=(const VecOp<T, D, E> &sVecOp) const
	{

	}

	template<class T, std::size_t D> T &Vec<T, D>::operator[](std::size_t nIndex)
	{

	}

	template<class T, std::size_t D> const T &Vec<T, D>::operator[](std::size_t nIndex) const
	{

	}
}