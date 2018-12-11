
/*
	2018.12.11
	Created by AcrylicShirmp.
*/

#include "ShaderLayout.h"

namespace Compound::Render
{
	ShaderLayout::ShaderLayout(ShaderLayout::Type eType, ShaderLayout::Shape eShape) :
		eType{eType},
		eShape{eShape},
		nOffset{0},
		nStride{this->elementNum() * this->elementSize()}
	{
		//Empty.
	}

	ShaderLayout::ShaderLayout(ShaderLayout::Type eType, ShaderLayout::Shape eShape, std::size_t nOffset, std::size_t nStride) :
		eType{eType},
		eShape{eShape},
		nOffset{nOffset},
		nStride{nStride}
	{
		//Empty.
	}
}