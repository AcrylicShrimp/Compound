
/*
	2018.12.11
	Created by AcrylicShirmp.
*/

#ifndef _CLASS_COMPOUND_RENDER_MESH_H

#define _CLASS_COMPOUND_RENDER_MESH_H

#include <cstddef>

namespace Compound::Render
{
	class Mesh
	{
	public:
		enum class Type : std::size_t
		{
			Point = 1,
			Line,
			Triangle
		};

	protected:
		Type eType;

	public:
		Mesh(Type eType);
		Mesh(const Mesh &sSrc) = default;
		virtual ~Mesh() = default;

	public:
		Mesh &operator=(const Mesh &sSrc) = default;

	public:
		inline Type type() const;
		
	};
}

#endif