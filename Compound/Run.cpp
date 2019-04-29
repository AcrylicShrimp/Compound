
#include "Compound/Instance.h"

#include <Windows.h>

#ifdef _DEBUG

int main()

#else

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)

#endif
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
	})};

	if (!pContext)
		return -1;

	//pContext->clearColor(.0f, .0f, .0f, .0f);
	//pContext->clearDepth(1.f);
	//pContext->clear(true, true, false);
	//pContext->flush();

	pWindow->setVisibility(Display::Window::Visibility::VisibleDefault);
	pWindow->loopEvent();

	//while (pWindow->loopEvent())
	//{
	//	//pContext->clear(true, true, false);
	//
	//	//sShader.active();
	//
	//
	//
	//	pContext->flush();
	//}

	pWindow->setVisibility(Display::Window::Visibility::Invisible);

	sInstance.sRenderManager.destroyContext(pWindow);

	pWindow->destroy();

	return 0;
}