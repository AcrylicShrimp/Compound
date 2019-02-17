
/*
	2018.12.15
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_SHADERDATA_H

#define _CLASS_COMPOUND_RENDER_DATA_SHADERDATA_H

#include <utility>

namespace Compound::Render::Data
{
	class ShaderData
	{
	private:
		
		
	public:
		ShaderData();
		ShaderData(const ShaderData &sSrc);
		ShaderData(ShaderData &&sSrc);
		~ShaderData();
		
	public:
		ShaderData &operator=(const ShaderData &sSrc);
		ShaderData &operator=(ShaderData &&sSrc);
		
	public:

	};
}

#endif