
/*
	2019.04.26
	Created by AcrylicShrimp.
*/

#include "Shader.h"

namespace Compound::Render::Data
{
	Shader::Builder::Builder(Shader &sShader) :
		sShader{sShader}
	{
		//Empty.
	}

	Shader::Builder::~Builder()
	{
		for (auto hSubshader : this->sSubshaderList)
		{
			this->sShader.pContext->detachSubshader(this->sShader.hNativeHandle, hSubshader);
			this->sShader.pContext->deleteSubshader(hSubshader);
		}
	}

	std::tuple<bool, std::string> Shader::Builder::attach(Context::SubshaderType eSubshaderType, std::string_view sSource)
	{
		auto hSubshader{this->sSubshaderList.emplace_back(this->sShader.pContext->newSubshader(eSubshaderType))};

		this->sShader.pContext->attachSubshader(this->sShader.hNativeHandle, hSubshader);

		return this->sShader.pContext->compileSubshader(hSubshader, sSource);
	}

	std::tuple<bool, std::string> Shader::Builder::link()
	{
		auto sResult{this->sShader.pContext->linkShader(this->sShader.hNativeHandle)};

		if (std::get<0>(sResult))
		{
			for (auto &sTuple : this->sShader.pContext->getShaderInput(this->sShader.hNativeHandle))
				this->sShader.sInputMap.emplace(std::move(std::get<0>(sTuple)), std::get<1>(sTuple));

			for (auto &sTuple : this->sShader.pContext->getShaderGlobalInput(this->sShader.hNativeHandle))
				this->sShader.sGlobalInputMap.emplace(std::move(std::get<0>(sTuple)), std::get<1>(sTuple));
		}

		return sResult;
	}

	Shader::Shader(Context *pContext) :
		pContext{pContext},
		hNativeHandle{pContext->newShader()}
	{
		assert(pContext);
	}
	
	Shader::~Shader()
	{
		this->pContext->deleteShader(this->hNativeHandle);
	}
}