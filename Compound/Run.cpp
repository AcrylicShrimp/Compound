
#include "Compound/Instance.h"

#include <Windows.h>

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	using namespace Compound;

	Instance sInstance{L"Compound"};

	auto pWindow{sInstance.sDisplayManager.createWindow("main")};

	if (!pWindow->create(Display::Window::Style::Standard, L"Compound test"))
		return -1;

	auto pContext{sInstance.sRenderManager.createContext(pWindow, {
		32,
		8,
		24,
		8,
		0
	}, "opengl")};

	if (!pContext)
		return -1;

	pContext->bind();
	pContext->clearColor(.0f, .0f, .0f, .0f);
	pContext->clearDepth(1.f);
	pContext->clear(true, true, false);

	pWindow->setVisibility(Display::Window::Visibility::VisibleDefault);

	while (true)
	{
		pWindow->loopEventAvailable();

		pContext->clear(true, true, false);
	}

	pWindow->destroy();

	return 0;
}