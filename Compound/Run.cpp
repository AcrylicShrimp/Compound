
#include "Compound/Instance.h"

#include <Windows.h>

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	using namespace Compound;

	Instance sInstance{L"Compound"};

	auto pWindow = sInstance.sDisplayManager.createWindow("main");

	if (pWindow->create(Display::Window::Style::Standard, L"Compound test"))
	{
		pWindow->setVisibility(Display::Window::Visibility::VisibleDefault);
		pWindow->loopEvent();
	}

	pWindow->destroy();

	return 0;
}