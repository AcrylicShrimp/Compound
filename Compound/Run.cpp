
#include "Compound/Instance.h"
#include "Compound/Render/Data/Buffer.h"
#include "Compound/Render/Data/Shader.h"

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

	Render::Data::Shader sShader{pContext};

	{
		auto sBuilder{sShader.builder()};

		auto vertex = sBuilder.attach(Render::Context::SubshaderType::Vertex,
			"\n#version 450"
			"\n"
			"\nuniform mat4 test;"
			"\n"
			"\nin vec3 vert_in;"
			"\n"
			"\nvoid main()"
			"\n{"
			"\n\tgl_Position = vec4(vert_in, 1.0) * test;"
			"\n}");

		auto fragment = sBuilder.attach(Render::Context::SubshaderType::Fragment,
			"\n#version 450"
			"\n"
			"\nuniform mat4 test;"
			"\n"
			"\nout vec4 out_color;"
			"\n"
			"\nvoid main()"
			"\n{"
			"\n\tout_color = vec4(1.0, 1.0, 1.0, 1.0);"
			"\n}");

		auto link = sBuilder.link();
	}

	pContext->clearColor(.0f, .0f, .0f, .0f);
	pContext->clearDepth(1.f);
	pContext->clear(true, true, false);
	pContext->flush();

	pWindow->setVisibility(Display::Window::Visibility::VisibleDefault);

	while (pWindow->loopEventAvailable())
	{
		pContext->clear(true, true, false);

		sShader.active();


		pContext->flush();
	}

	pWindow->destroy();

	return 0;
}