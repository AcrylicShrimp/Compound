
/*
	2019.04.26
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_SHADER_H

#define _CLASS_COMPOUND_RENDER_DATA_SHADER_H

#include "../Context.h"

#include <cassert>
#include <string>
#include <string_view>
#include <tuple>
#include <vector>

namespace Compound::Render::Data
{
	class Shader final
	{
	public:
		class Builder final
		{
		public:
			Shader &sShader;

		private:
			std::vector<Context::NativeHandle> sSubshaderList;

		public:
			Builder(Shader &sShader);
			Builder(const Builder &sSrc) = default;
			~Builder();

		public:
			Builder &operator=(const Builder &sSrc) = delete;

		public:
			std::tuple<bool, std::string> attach(SubshaderType eSubshaderType, std::string_view sSource);
			std::tuple<bool, std::string> link();
		};

	public:
		Context *const pContext;
		const Context::NativeHandle hNativeHandle;
		
	public:
		Shader(Context *pContext);
		Shader(const Shader &sSrc) = delete;
		~Shader();
		
	public:
		Shader &operator=(const Shader &sSrc) = delete;
		
	public:
		inline Builder builder();
		inline void active();
	};

	inline Shader::Builder Shader::builder()
	{
		return Shader::Builder{*this};
	}

	inline void Shader::active()
	{
		this->pContext->activeShader(this->pContext);
	}
}

#endif