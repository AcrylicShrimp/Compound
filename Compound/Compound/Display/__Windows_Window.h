
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#ifdef _MSC_VER

#ifndef _CLASS_COMPOUND_DISPLAY_WINDOWS_WINDOW_H

#define _CLASS_COMPOUND_DISPLAY_WINDOWS_WINDOW_H

#define __COMPOUND__WINDOW_SUPPORTED

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

namespace Compound::Display
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
		virtual ~__Windows_Window() = default;

	public:
		__Windows_Window &operator=(const __Windows_Window &sSrc) = delete;

	public:
		virtual bool create(Style eStyle, std::wstring_view sTitle) override;
		virtual void destroy() override;
		virtual void loopEvent() override;
		virtual void loopEventAvailable() override;
		virtual void setVisibility(Visibility eVisibility) override;
		std::tuple<bool, LRESULT> handleEvent(UINT nMessage, WPARAM nWParam, LPARAM nLParam);

	private:
		static LRESULT CALLBACK handleEvent(HWND hWindow, UINT nMessage, WPARAM nWParam, LPARAM nLParam);
	};

	using WindowType = __Windows_Window;
}

#endif

#endif