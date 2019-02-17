
#include "Window.h"

namespace Compound::Display
{
	Window::Window(Instance *pInstance, std::string_view sId) :
		pInstance{pInstance},
		sId{sId}
	{
		//Empty.
	}
}