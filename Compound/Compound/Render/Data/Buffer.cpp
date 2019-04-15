
/*
	2019.04.13
	Created by AcrylicShrimp.
*/

#include "Buffer.h"

namespace Compound::Render::Data
{
	Buffer::Buffer(Context *pContext) :
		pContext{pContext},
		hNativeHandle{pContext->newBuffer()},
		nSize{0}
	{
		assert(pContext);
	}

	Buffer::Buffer(Context *pContext, std::size_t nSize) :
		Buffer{pContext}
	{
		this->pContext->fillBuffer(this->hNativeHandle, this->nSize = nSize);
	}

	Buffer::Buffer(Context *pContext, std::size_t nSize, const void *pData) :
		Buffer{pContext}
	{
		this->pContext->fillBuffer(this->hNativeHandle, this->nSize = nSize, pData);
	}

	Buffer::Buffer(const Buffer &sSrc) :
		Buffer{sSrc.pContext, sSrc.nSize}
	{
		this->pContext->copyBuffer(sSrc.hNativeHandle, this->hNativeHandle, 0, 0, this->nSize);
	}
	
	Buffer::~Buffer()
	{
		this->pContext->deleteBuffer(this->hNativeHandle);
	}
	
	Buffer &Buffer::operator=(const Buffer &sSrc)
	{
		assert(this->pContext == sSrc.pContext);

		if (&sSrc == this)
			return *this;
		
		this->pContext->fillBuffer(this->hNativeHandle, this->nSize = sSrc.nSize);
		this->pContext->copyBuffer(sSrc.hNativeHandle, this->hNativeHandle, 0, 0, this->nSize);
		
		return *this;
	}
}