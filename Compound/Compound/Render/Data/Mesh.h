
/*
	2018.12.15
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_MESH_H

#define _CLASS_COMPOUND_RENDER_DATA_MESH_H

/*
	TODO : Place the include directives here.
*/


#include <utility>

namespace Compound::Render::Data
{
	class Mesh
	{
	private:
		/*
			TODO : Place the class member variable declarations here.
		*/
		
		
	public:
		Mesh();
		Mesh(const Mesh &sSrc);
		Mesh(Mesh &&sSrc);
		~Mesh();
		/*
			TODO : Place the declarations of other constructors here.
		*/
		
		
	public:
		Mesh &operator=(const Mesh &sSrc);
		Mesh &operator=(Mesh &&sSrc);
		/*
			TODO : Place other operator overloadings here.
		*/
		
		
	public:
		/*
			TODO : Place the member function declarations here.
		*/
		
	};
}

#endif