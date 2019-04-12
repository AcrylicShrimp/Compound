
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#include "../../Platform.h"

#if __COMPOUND_OS_WINDOWS

#ifndef _CLASS_COMPOUND_DISPLAY_BACKEND_WINDOWS_WINDOW_H

#define _CLASS_COMPOUND_DISPLAY_BACKEND_WINDOWS_WINDOW_H

#define __COMPOUND_WINDOW_SUPPORTED 1

#include <cstddef>
#include <cstdint>
#include <functional>
#include <string>
#include <string_view>
#include <tuple>
#include <unordered_map>
#include <Windows.h>

namespace Compound
{
	class Instance;
}

namespace Compound::Display::Backend
{
	class __Windows_Window final : public Window
	{
	private:
		static std::unordered_map<HWND, __Windows_Window *> sWindowPointerMap;

	private:
		HWND hWindow;

	public:
		__Windows_Window(Instance *pInstance, std::string_view sId);
		__Windows_Window(const __Windows_Window &sSrc) = delete;
		virtual ~__Windows_Window() noexcept;

	public:
		__Windows_Window &operator=(const __Windows_Window &sSrc) = delete;

	public:
		inline HWND windowHandle() const;
		virtual bool create(Style eStyle, std::wstring_view sTitle) override;
		virtual void destroy() override;
		virtual void loopEvent() override;
		virtual bool loopEventAvailable() override;
		virtual void setTitle(std::wstring_view sTitle) override;
		virtual void setVisibility(Visibility eVisibility) override;
		std::tuple<bool, LRESULT> handleEvent(UINT nMessage, WPARAM nWParam, LPARAM nLParam);

	private:
		static LRESULT CALLBACK handleEvent(HWND hWindow, UINT nMessage, WPARAM nWParam, LPARAM nLParam);
	};

	inline HWND __Windows_Window::windowHandle() const
	{
		return this->hWindow;
	}
}

namespace Compound::Display
{
	using WindowType = Backend::__Windows_Window;
}

#endif

#endif