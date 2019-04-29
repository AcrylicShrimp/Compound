
/*
	2019.04.28
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_MATERIAL_H

#define _CLASS_COMPOUND_RENDER_DATA_MATERIAL_H

#include "../Context.h"

#include "Shader.h"

#include <utility>

namespace Compound::Render::Data
{
	class Material
	{
	public:
		Shader *const pShader;
		Context::NativeHandle hShaderLayout;
		
	public:
		Material(Shader *pShader);
		//Material(const Material &sSrc);
		//Material(Material &&sSrc);
		//~Material();
		
	public:
		//Material &operator=(const Material &sSrc);
		//Material &operator=(Material &&sSrc);
		
	public:
		
	};
}

#endif