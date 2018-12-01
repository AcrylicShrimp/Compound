
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_IO_JSONOBJECT_H

#define _CLASS_COMPOUND_IO_JSONOBJECT_H

#include <utility>

namespace Compound::IO
{
	class JSONObject final
	{
	private:

		
	public:
		JSONObject();
		JSONObject(const JSONObject &sSrc);
		JSONObject(JSONObject &&sSrc);
		~JSONObject();
		
	public:
		JSONObject &operator=(const JSONObject &sSrc);
		JSONObject &operator=(JSONObject &&sSrc);
		
	public:
		
	};
}

#endif