
/*
	2018.12.01
	Created by AcrylicShrimp.
*/

#ifndef _INTERFACE_COMPOUND_IO_JSONSERIALIZABLE_H

#define _INTERFACE_COMPOUND_IO_JSONSERIALIZABLE_H

#include "JSONObject.h"

namespace Compound::IO
{
	class JSONSerializable
	{
	public:
		JSONSerializable() = default;
		JSONSerializable(const JSONSerializable &sSrc) = default;
		virtual ~JSONSerializable() = default;
		
	public:
		JSONSerializable &operator=(const JSONSerializable &sSrc) = default;
		
	public:
		virtual void serialize(JSONObject &sJSONObject) const = 0;
		virtual void deserialize(const JSONObject &sJSONObject) = 0;
	};
}

#endif