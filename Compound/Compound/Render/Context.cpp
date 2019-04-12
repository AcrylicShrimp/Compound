
/*
	2019.04.09
	Created by AcrylicShrimp.
*/

#include "Context.h"

namespace Compound::Render
{
	Context::Context(Display::Window *pWindow, FrameBufferInfo sFrameBufferInfo) :
		pWindow{pWindow},
		sFrameBufferInfo{sFrameBufferInfo}
	{
		assert(pWindow);
	}
}