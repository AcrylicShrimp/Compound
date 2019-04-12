
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#include "../../Platform.h"

#ifdef __COMPOUND_OS_WINDOWS

#include "../Window.h"
#include "__Windows_Window.h"

#include "../../Instance.h"

namespace Compound::Display::Backend
{
	std::unordered_map<HWND, __Windows_Window *> __Windows_Window::sWindowPointerMap;

	__Windows_Window::__Windows_Window(Instance *pInstance, std::string_view sId) :
		Window(pInstance, sId),
		hWindow{nullptr}
	{
		//Empty.
	}

	__Windows_Window::~__Windows_Window() noexcept
	{
		this->destroy();
	}

	bool __Windows_Window::create(Style eStyle, std::wstring_view sTitle)
	{
		if (this->hWindow)
			return false;

		DWORD nStyle;
		DWORD nExStyle;

		switch (eStyle)
		{
		case Style::ContentOnly:
			nStyle = WS_POPUP;
			nExStyle = 0;
			break;

		case Style::Title:
			nStyle = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU;
			nExStyle = WS_EX_OVERLAPPEDWINDOW;
			break;

		case Style::TitleResizable:
			nStyle = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME;
			nExStyle = WS_EX_OVERLAPPEDWINDOW;
			break;

		case Style::Standard:
			nStyle = WS_OVERLAPPEDWINDOW;
			nExStyle = WS_EX_OVERLAPPEDWINDOW;
			break;

		default:
			return false;
		}

		/*
			FIXME : Generate class name more nicely here.
		*/
		const auto sClassName{this->pInstance->sApplicationName + L"::" + std::wstring{this->sId.cbegin(), this->sId.cend()}};

		WNDCLASSW sClass
		{
			CS_OWNDC,
			&__Windows_Window::handleEvent,
			0,
			0,
			::GetModuleHandleW(nullptr),
			::LoadIconW(nullptr, IDI_APPLICATION),
			::LoadCursorW(nullptr, IDC_ARROW),
			nullptr,
			nullptr,
			sClassName.c_str()
		};

		if (!::RegisterClassW(&sClass))
			return false;

		this->hWindow = ::CreateWindowExW(
			nExStyle,
			sClassName.c_str(),
			sTitle.data(),
			nStyle,
			0,
			0,
			CW_USEDEFAULT,
			CW_USEDEFAULT,
			nullptr,
			nullptr,
			::GetModuleHandleW(nullptr),
			nullptr
		);

		if (!this->hWindow)
		{
			this->destroy();
			return false;
		}

		__Windows_Window::sWindowPointerMap.emplace(this->hWindow, this);

		return true;
	}

	void __Windows_Window::destroy()
	{
		const auto sClassName{this->pInstance->sApplicationName + L"::" + std::wstring{this->sId.cbegin(), this->sId.cend()}};

		::UnregisterClassW(sClassName.c_str(), ::GetModuleHandleW(nullptr));
		::DestroyWindow(this->hWindow);

		__Windows_Window::sWindowPointerMap.erase(this->hWindow);

		this->hWindow = nullptr;
	}

	void __Windows_Window::loopEvent()
	{
		if (!this->hWindow)
			return;

		MSG sMessage;

		while (::GetMessageW(&sMessage, nullptr, 0, 0))
		{
			::TranslateMessage(&sMessage);
			::DispatchMessageW(&sMessage);
		}
	}

	bool __Windows_Window::loopEventAvailable()
	{
		if (!this->hWindow)
			return false;

		MSG sMessage;

		while (::PeekMessageW(&sMessage, nullptr, 0, 0, PM_REMOVE))
		{
			if (sMessage.message == WM_QUIT)
				return false;

			::TranslateMessage(&sMessage);
			::DispatchMessageW(&sMessage);
		}

		return true;
	}

	void __Windows_Window::setTitle(std::wstring_view sTitle)
	{
		::SetWindowTextW(this->hWindow, sTitle.data());
	}

	void __Windows_Window::setVisibility(Visibility eVisibility)
	{
		int nVisibility;

		switch (eVisibility)
		{
		case Visibility::Invisible:
			nVisibility = SW_HIDE;
			break;

		case Visibility::VisibleDefault:
			nVisibility = SW_SHOWDEFAULT;
			break;

		case Visibility::VisibleMinimized:
			nVisibility = SW_SHOWMINIMIZED;
			break;

		case Visibility::VisibleMaximized:
			nVisibility = SW_SHOWMAXIMIZED;
			break;

		default:
			return;
		}

		ShowWindow(this->hWindow, nVisibility);
	}

	std::tuple<bool, LRESULT> __Windows_Window::handleEvent(UINT nMessage, WPARAM nWParam, LPARAM nLParam)
	{
		switch (nMessage)
		{
		case WM_ERASEBKGND:
			return std::make_tuple(true, 1);
		case WM_PAINT:
		{
			::ValidateRect(this->hWindow, nullptr);
		}
		return std::make_tuple(true, 0);
		case WM_MOVE:
		case WM_MOVING:
		case WM_SIZE:
		case WM_SIZING:
		{
			RECT sWindowRect;
			RECT sClientRect;

			::GetWindowRect(hWindow, &sWindowRect);
			::GetClientRect(hWindow, &sClientRect);

			this->sOuterCoordinateInfo.nMinX = sWindowRect.left;
			this->sOuterCoordinateInfo.nMinY = sWindowRect.top;
			this->sOuterCoordinateInfo.nMaxX = sWindowRect.right;
			this->sOuterCoordinateInfo.nMaxY = sWindowRect.bottom;

			this->sInnerCoordinateInfo.nMinX = sClientRect.left;
			this->sInnerCoordinateInfo.nMinY = sClientRect.top;
			this->sInnerCoordinateInfo.nMaxX = sClientRect.right;
			this->sInnerCoordinateInfo.nMaxY = sClientRect.bottom;
		}
		return std::make_tuple(true, 0);
		case WM_CLOSE:
		{
			::PostQuitMessage(0);
		}
		return std::make_tuple(true, 0);
		}

		return std::make_tuple(false, 0);
	}

	LRESULT CALLBACK __Windows_Window::handleEvent(HWND hWindow, UINT nMessage, WPARAM nWParam, LPARAM nLParam)
	{
		auto iIndex{__Windows_Window::sWindowPointerMap.find(hWindow)};

		if (iIndex == __Windows_Window::sWindowPointerMap.cend())
			return ::DefWindowProcW(hWindow, nMessage, nWParam, nLParam);

		auto sResult{iIndex->second->handleEvent(nMessage, nWParam, nLParam)};

		return std::get<0>(sResult) ? std::get<1>(sResult) : ::DefWindowProcW(hWindow, nMessage, nWParam, nLParam);
	}
}

#endif