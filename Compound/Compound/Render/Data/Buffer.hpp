
/*
	2019.04.13
	Created by AcrylicShrimp.
*/

namespace Compound::Render::Data
{
	template<class T> Buffer::Buffer(Context *pContext, std::initializer_list<T> sInitList)  :
		Buffer{pContext}
	{
		this->pContext->fillBuffer(this->hNativeHandle, this->nSize = sizeof(T) * sInitList.size(), sInitList.begin());
	}

	template<class T> Buffer &Buffer::operator=(std::initializer_list<T> sInitList)
	{
		this->pContext->fillBuffer(this->hNativeHandle, this->nSize = sizeof(T) * sInitList.size(), sInitList.begin());

		return *this;
	}
}