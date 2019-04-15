
/*
	2019.04.13
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_BUFFER_H

#define _CLASS_COMPOUND_RENDER_DATA_BUFFER_H

#include "../Context.h"

#include <cassert>
#include <cstddef>
#include <initializer_list>
#include <iterator>
#include <utility>

namespace Compound::Render::Data
{
	class Buffer final
	{
	public:
		Context *const pContext;
		const Context::NativeHandle hNativeHandle;

	private:
		std::size_t nSize;

	public:
		Buffer(Context *pContext);
		Buffer(Context *pContext, std::size_t nSize);
		Buffer(Context *pContext, std::size_t nSize, const void *pData);
		template<class T> Buffer(Context *pContext, std::initializer_list<T> sInitList);
		Buffer(const Buffer &sSrc);
		~Buffer();

	public:
		Buffer &operator=(const Buffer &sSrc);
		template<class T> Buffer &operator=(std::initializer_list<T> sInitList);

	public:
		inline std::size_t size() const noexcept;
	};

	inline std::size_t Buffer::size() const noexcept
	{
		return this->nSize;
	}
}

#include "Buffer.hpp"

#endif