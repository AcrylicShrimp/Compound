
/*
	2018.12.15
	Created by AcrylicShrimp.
*/

#ifndef _CLASS_COMPOUND_RENDER_DATA_INDEXDATA_H

#define _CLASS_COMPOUND_RENDER_DATA_INDEXDATA_H

/*
	TODO : Place the include directives here.
*/


#include <utility>

namespace Compound::Render::Data
{
	class IndexData
	{
	private:
		/*
			TODO : Place the class member variable declarations here.
		*/
		
		
	public:
		IndexData();
		IndexData(const IndexData &sSrc);
		IndexData(IndexData &&sSrc);
		~IndexData();
		/*
			TODO : Place the declarations of other constructors here.
		*/
		
		
	public:
		IndexData &operator=(const IndexData &sSrc);
		IndexData &operator=(IndexData &&sSrc);
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