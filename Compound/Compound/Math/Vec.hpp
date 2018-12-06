
/*
	2018.12.06
	Created by AcrylicShrimp.
*/

namespace Compound::Math
{
	template<class T, std::size_t D> Vec<T, D>::Vec(const T &tScalar)
	{
		for (auto &tElem : this->sVec)
			tElem = tScalar;
	}

	template<class T, std::size_t D> Vec<T, D>::Vec(const Vec &sSrc)
	{

	}

	template<class T, std::size_t D> Vec<T, D>::Vec(std::initializer_list<T> sList)
	{

	}

	template<class T, std::size_t D> Vec<T, D>::Vec(std::array::const_iterator &iBegin, std::array::const_iterator &iEnd)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator=(const T &tScalar)
	{

	}
	
	template<class T, std::size_t D> Vec &Vec<T, D>::operator=(const Vec &sSrc)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator=(const VecOp<T, D> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator+=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator+=(const VecOp<T, D> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator-=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator-=(const VecOp<T, D> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator*=(const T &tScalar)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator*=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator*=(const VecOp<T, D> &sVecOp)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator/=(const T &tScalar)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator/=(const Vec &sVec)
	{

	}

	template<class T, std::size_t D> Vec &Vec<T, D>::operator/=(const VecOp<T, D> &sVecOp)
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator==(const Vec &sVec) const
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator==(const VecOp<T, D> &sVecOp) const
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator!=(const Vec &sVec) const
	{

	}

	template<class T, std::size_t D> bool Vec<T, D>::operator!=(const VecOp<T, D> &sVecOp) const
	{

	}

	template<class T, std::size_t D> T &Vec<T, D>::operator=(std::size_t nIndex)
	{

	}

	template<class T, std::size_t D> const T &Vec<T, D>::operator=(std::size_t nIndex)
	{

	}

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
}