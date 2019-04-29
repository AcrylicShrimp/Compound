
/*
	2019.04.28
	Created by AcrylicShrimp.
*/

#include "Material.h"

namespace Compound::Render::Data
{
	Material::Material(Shader *pShader) :
		pShader{pShader}
	{
		//Empty.
	}
	
	//Material::Material(const Material &sSrc)
	//{
	//	/*
	//		TODO : Place the implementation of the copy constructor here.
	//	*/
	//	
	//}
	//
	//Material::Material(Material &&sSrc)
	//{
	//	/*
	//		TODO : Place the implementation of the move constructor here.
	//	*/
	//	
	//}
	//
	//Material::~Material()
	//{
	//	/*
	//		TODO : Place the implementation of the destructor here.
	//	*/
	//	
	//}
	//
	///*
	//	TODO : Place the implementations of other constructors here.
	//*/
	//
	//
	//Material &Material::operator=(const Material &sSrc)
	//{
	//	if (&sSrc == this)
	//		return *this;
	//	
	//	/*
	//		TODO : Place the implementation of the copy assignment operator here.
	//	*/
	//	
	//	
	//	return *this;
	//}
	//
	//Material &Material::operator=(Material &&sSrc)
	//{
	//	if (&sSrc == this)
	//		return *this;
	//	
	//	/*
	//		TODO : Place the implementation of the move assignment operator here.
	//	*/
	//	
	//	
	//	return *this;
	//}
	//
	///*
	//	TODO : Implement other operator overloadings here.
	//*/
	//
	//
	///*
	//	TODO : Place the member function implementations here.
	//*/
	//
}