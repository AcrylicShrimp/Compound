
/*
	2019.01.13
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_DISPLAY_WINDOW_H

#define _CLASS_COMPOUND_DISPLAY_WINDOW_H

#include <cstddef>
#include <cstdint>
#include <memory>
#include <string>
#include <string_view>

namespace Compound
{
	class Instance;
}

namespace Compound::Display
{
	class Window
	{
	public:
		enum class Style
		{
			ContentOnly,
			Title,
			TitleResizable,
			Standard
		};

		enum class Visibility
		{
			Invisible,
			VisibleDefault,
			VisibleMinimized,
			VisibleMaximized
		};

		struct CoordinateInfo
		{
			std::int32_t nMinX;
			std::int32_t nMinY;
			std::int32_t nMaxX;
			std::int32_t nMaxY;
		};

	public:
		Instance *const pInstance;
		const std::string sId;

	protected:
		CoordinateInfo sOuterCoordinateInfo;
		CoordinateInfo sInnerCoordinateInfo;

	public:
		Window(Instance *pInstance, std::string_view sId);
		Window(const Window &sSrc) = delete;
		virtual ~Window() noexcept = default;

	public:
		Window &operator=(const Window &sSrc) = delete;

	public:
		inline const CoordinateInfo &outerCoordinateInfo() const noexcept;
		inline const CoordinateInfo &innerCoordinateInfo() const noexcept;
		virtual bool create(Style eStyle, std::wstring_view sTitle) = 0;
		virtual void destroy() = 0;
		virtual void loopEvent() = 0;
		virtual void loopEventAvailable() = 0;
		virtual void setVisibility(Visibility eVisibility) = 0;
	};

	inline const Window::CoordinateInfo &Window::outerCoordinateInfo() const noexcept
	{
		return this->sOuterCoordinateInfo;
	}

	inline const Window::CoordinateInfo &Window::innerCoordinateInfo() const noexcept
	{
		return this->sInnerCoordinateInfo;
	}
}

#include "./Backend/__Windows_Window.h"

#if !__COMPOUND_WINDOW_SUPPORTED

static_assert(false, "unsupported environment.");

#endif

#endif