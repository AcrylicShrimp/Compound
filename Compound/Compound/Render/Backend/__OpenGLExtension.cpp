
/*
	2019.04.13
	Created by AcrylicShrimp.
*/

#include "__OpenGLExtension.h"

#if __COMPOUND_OS_WINDOWS

#include <Windows.h>
#include <OpenGL/wglext.h>

#define GETFUNCADDR(x) wglGetProcAddress(x)

#endif

namespace Compound::Render::Backend
{
	__OpenGLExtension::__OpenGLExtension()
	{
		/*
			GL_VERSION_1_2
		*/
		this->glCopyTexSubImage3D = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC>(GETFUNCADDR("glCopyTexSubImage3D"));
		this->glDrawRangeElements = reinterpret_cast<PFNGLDRAWRANGEELEMENTSPROC>(GETFUNCADDR("glDrawRangeElements"));
		this->glTexImage3D = reinterpret_cast<PFNGLTEXIMAGE3DPROC>(GETFUNCADDR("glTexImage3D"));
		this->glTexSubImage3D = reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(GETFUNCADDR("glTexSubImage3D"));

		/*
			GL_VERSION_1_3
		*/
		this->glActiveTexture = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(GETFUNCADDR("glActiveTexture"));
		this->glClientActiveTexture = reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC>(GETFUNCADDR("glClientActiveTexture"));
		this->glCompressedTexImage1D = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE1DPROC>(GETFUNCADDR("glCompressedTexImage1D"));
		this->glCompressedTexImage2D = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC>(GETFUNCADDR("glCompressedTexImage2D"));
		this->glCompressedTexImage3D = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DPROC>(GETFUNCADDR("glCompressedTexImage3D"));
		this->glCompressedTexSubImage1D = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC>(GETFUNCADDR("glCompressedTexSubImage1D"));
		this->glCompressedTexSubImage2D = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(GETFUNCADDR("glCompressedTexSubImage2D"));
		this->glCompressedTexSubImage3D = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>(GETFUNCADDR("glCompressedTexSubImage3D"));
		this->glGetCompressedTexImage = reinterpret_cast<PFNGLGETCOMPRESSEDTEXIMAGEPROC>(GETFUNCADDR("glGetCompressedTexImage"));
		this->glLoadTransposeMatrixd = reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXDPROC>(GETFUNCADDR("glLoadTransposeMatrixd"));
		this->glLoadTransposeMatrixf = reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXFPROC>(GETFUNCADDR("glLoadTransposeMatrixf"));
		this->glMultTransposeMatrixd = reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXDPROC>(GETFUNCADDR("glMultTransposeMatrixd"));
		this->glMultTransposeMatrixf = reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXFPROC>(GETFUNCADDR("glMultTransposeMatrixf"));
		this->glMultiTexCoord1d = reinterpret_cast<PFNGLMULTITEXCOORD1DPROC>(GETFUNCADDR("glMultiTexCoord1d"));
		this->glMultiTexCoord1dv = reinterpret_cast<PFNGLMULTITEXCOORD1DVPROC>(GETFUNCADDR("glMultiTexCoord1dv"));
		this->glMultiTexCoord1f = reinterpret_cast<PFNGLMULTITEXCOORD1FPROC>(GETFUNCADDR("glMultiTexCoord1f"));
		this->glMultiTexCoord1fv = reinterpret_cast<PFNGLMULTITEXCOORD1FVPROC>(GETFUNCADDR("glMultiTexCoord1fv"));
		this->glMultiTexCoord1i = reinterpret_cast<PFNGLMULTITEXCOORD1IPROC>(GETFUNCADDR("glMultiTexCoord1i"));
		this->glMultiTexCoord1iv = reinterpret_cast<PFNGLMULTITEXCOORD1IVPROC>(GETFUNCADDR("glMultiTexCoord1iv"));
		this->glMultiTexCoord1s = reinterpret_cast<PFNGLMULTITEXCOORD1SPROC>(GETFUNCADDR("glMultiTexCoord1s"));
		this->glMultiTexCoord1sv = reinterpret_cast<PFNGLMULTITEXCOORD1SVPROC>(GETFUNCADDR("glMultiTexCoord1sv"));
		this->glMultiTexCoord2d = reinterpret_cast<PFNGLMULTITEXCOORD2DPROC>(GETFUNCADDR("glMultiTexCoord2d"));
		this->glMultiTexCoord2dv = reinterpret_cast<PFNGLMULTITEXCOORD2DVPROC>(GETFUNCADDR("glMultiTexCoord2dv"));
		this->glMultiTexCoord2f = reinterpret_cast<PFNGLMULTITEXCOORD2FPROC>(GETFUNCADDR("glMultiTexCoord2f"));
		this->glMultiTexCoord2fv = reinterpret_cast<PFNGLMULTITEXCOORD2FVPROC>(GETFUNCADDR("glMultiTexCoord2fv"));
		this->glMultiTexCoord2i = reinterpret_cast<PFNGLMULTITEXCOORD2IPROC>(GETFUNCADDR("glMultiTexCoord2i"));
		this->glMultiTexCoord2iv = reinterpret_cast<PFNGLMULTITEXCOORD2IVPROC>(GETFUNCADDR("glMultiTexCoord2iv"));
		this->glMultiTexCoord2s = reinterpret_cast<PFNGLMULTITEXCOORD2SPROC>(GETFUNCADDR("glMultiTexCoord2s"));
		this->glMultiTexCoord2sv = reinterpret_cast<PFNGLMULTITEXCOORD2SVPROC>(GETFUNCADDR("glMultiTexCoord2sv"));
		this->glMultiTexCoord3d = reinterpret_cast<PFNGLMULTITEXCOORD3DPROC>(GETFUNCADDR("glMultiTexCoord3d"));
		this->glMultiTexCoord3dv = reinterpret_cast<PFNGLMULTITEXCOORD3DVPROC>(GETFUNCADDR("glMultiTexCoord3dv"));
		this->glMultiTexCoord3f = reinterpret_cast<PFNGLMULTITEXCOORD3FPROC>(GETFUNCADDR("glMultiTexCoord3f"));
		this->glMultiTexCoord3fv = reinterpret_cast<PFNGLMULTITEXCOORD3FVPROC>(GETFUNCADDR("glMultiTexCoord3fv"));
		this->glMultiTexCoord3i = reinterpret_cast<PFNGLMULTITEXCOORD3IPROC>(GETFUNCADDR("glMultiTexCoord3i"));
		this->glMultiTexCoord3iv = reinterpret_cast<PFNGLMULTITEXCOORD3IVPROC>(GETFUNCADDR("glMultiTexCoord3iv"));
		this->glMultiTexCoord3s = reinterpret_cast<PFNGLMULTITEXCOORD3SPROC>(GETFUNCADDR("glMultiTexCoord3s"));
		this->glMultiTexCoord3sv = reinterpret_cast<PFNGLMULTITEXCOORD3SVPROC>(GETFUNCADDR("glMultiTexCoord3sv"));
		this->glMultiTexCoord4d = reinterpret_cast<PFNGLMULTITEXCOORD4DPROC>(GETFUNCADDR("glMultiTexCoord4d"));
		this->glMultiTexCoord4dv = reinterpret_cast<PFNGLMULTITEXCOORD4DVPROC>(GETFUNCADDR("glMultiTexCoord4dv"));
		this->glMultiTexCoord4f = reinterpret_cast<PFNGLMULTITEXCOORD4FPROC>(GETFUNCADDR("glMultiTexCoord4f"));
		this->glMultiTexCoord4fv = reinterpret_cast<PFNGLMULTITEXCOORD4FVPROC>(GETFUNCADDR("glMultiTexCoord4fv"));
		this->glMultiTexCoord4i = reinterpret_cast<PFNGLMULTITEXCOORD4IPROC>(GETFUNCADDR("glMultiTexCoord4i"));
		this->glMultiTexCoord4iv = reinterpret_cast<PFNGLMULTITEXCOORD4IVPROC>(GETFUNCADDR("glMultiTexCoord4iv"));
		this->glMultiTexCoord4s = reinterpret_cast<PFNGLMULTITEXCOORD4SPROC>(GETFUNCADDR("glMultiTexCoord4s"));
		this->glMultiTexCoord4sv = reinterpret_cast<PFNGLMULTITEXCOORD4SVPROC>(GETFUNCADDR("glMultiTexCoord4sv"));
		this->glSampleCoverage = reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(GETFUNCADDR("glSampleCoverage"));

		/*
			GL_VERSION_1_4
		*/
		this->glBlendColor = reinterpret_cast<PFNGLBLENDCOLORPROC>(GETFUNCADDR("glBlendColor"));
		this->glBlendEquation = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(GETFUNCADDR("glBlendEquation"));
		this->glBlendFuncSeparate = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(GETFUNCADDR("glBlendFuncSeparate"));
		this->glFogCoordPointer = reinterpret_cast<PFNGLFOGCOORDPOINTERPROC>(GETFUNCADDR("glFogCoordPointer"));
		this->glFogCoordd = reinterpret_cast<PFNGLFOGCOORDDPROC>(GETFUNCADDR("glFogCoordd"));
		this->glFogCoorddv = reinterpret_cast<PFNGLFOGCOORDDVPROC>(GETFUNCADDR("glFogCoorddv"));
		this->glFogCoordf = reinterpret_cast<PFNGLFOGCOORDFPROC>(GETFUNCADDR("glFogCoordf"));
		this->glFogCoordfv = reinterpret_cast<PFNGLFOGCOORDFVPROC>(GETFUNCADDR("glFogCoordfv"));
		this->glMultiDrawArrays = reinterpret_cast<PFNGLMULTIDRAWARRAYSPROC>(GETFUNCADDR("glMultiDrawArrays"));
		this->glMultiDrawElements = reinterpret_cast<PFNGLMULTIDRAWELEMENTSPROC>(GETFUNCADDR("glMultiDrawElements"));
		this->glPointParameterf = reinterpret_cast<PFNGLPOINTPARAMETERFPROC>(GETFUNCADDR("glPointParameterf"));
		this->glPointParameterfv = reinterpret_cast<PFNGLPOINTPARAMETERFVPROC>(GETFUNCADDR("glPointParameterfv"));
		this->glPointParameteri = reinterpret_cast<PFNGLPOINTPARAMETERIPROC>(GETFUNCADDR("glPointParameteri"));
		this->glPointParameteriv = reinterpret_cast<PFNGLPOINTPARAMETERIVPROC>(GETFUNCADDR("glPointParameteriv"));
		this->glSecondaryColor3b = reinterpret_cast<PFNGLSECONDARYCOLOR3BPROC>(GETFUNCADDR("glSecondaryColor3b"));
		this->glSecondaryColor3bv = reinterpret_cast<PFNGLSECONDARYCOLOR3BVPROC>(GETFUNCADDR("glSecondaryColor3bv"));
		this->glSecondaryColor3d = reinterpret_cast<PFNGLSECONDARYCOLOR3DPROC>(GETFUNCADDR("glSecondaryColor3d"));
		this->glSecondaryColor3dv = reinterpret_cast<PFNGLSECONDARYCOLOR3DVPROC>(GETFUNCADDR("glSecondaryColor3dv"));
		this->glSecondaryColor3f = reinterpret_cast<PFNGLSECONDARYCOLOR3FPROC>(GETFUNCADDR("glSecondaryColor3f"));
		this->glSecondaryColor3fv = reinterpret_cast<PFNGLSECONDARYCOLOR3FVPROC>(GETFUNCADDR("glSecondaryColor3fv"));
		this->glSecondaryColor3i = reinterpret_cast<PFNGLSECONDARYCOLOR3IPROC>(GETFUNCADDR("glSecondaryColor3i"));
		this->glSecondaryColor3iv = reinterpret_cast<PFNGLSECONDARYCOLOR3IVPROC>(GETFUNCADDR("glSecondaryColor3iv"));
		this->glSecondaryColor3s = reinterpret_cast<PFNGLSECONDARYCOLOR3SPROC>(GETFUNCADDR("glSecondaryColor3s"));
		this->glSecondaryColor3sv = reinterpret_cast<PFNGLSECONDARYCOLOR3SVPROC>(GETFUNCADDR("glSecondaryColor3sv"));
		this->glSecondaryColor3ub = reinterpret_cast<PFNGLSECONDARYCOLOR3UBPROC>(GETFUNCADDR("glSecondaryColor3ub"));
		this->glSecondaryColor3ubv = reinterpret_cast<PFNGLSECONDARYCOLOR3UBVPROC>(GETFUNCADDR("glSecondaryColor3ubv"));
		this->glSecondaryColor3ui = reinterpret_cast<PFNGLSECONDARYCOLOR3UIPROC>(GETFUNCADDR("glSecondaryColor3ui"));
		this->glSecondaryColor3uiv = reinterpret_cast<PFNGLSECONDARYCOLOR3UIVPROC>(GETFUNCADDR("glSecondaryColor3uiv"));
		this->glSecondaryColor3us = reinterpret_cast<PFNGLSECONDARYCOLOR3USPROC>(GETFUNCADDR("glSecondaryColor3us"));
		this->glSecondaryColor3usv = reinterpret_cast<PFNGLSECONDARYCOLOR3USVPROC>(GETFUNCADDR("glSecondaryColor3usv"));
		this->glSecondaryColorPointer = reinterpret_cast<PFNGLSECONDARYCOLORPOINTERPROC>(GETFUNCADDR("glSecondaryColorPointer"));
		this->glWindowPos2d = reinterpret_cast<PFNGLWINDOWPOS2DPROC>(GETFUNCADDR("glWindowPos2d"));
		this->glWindowPos2dv = reinterpret_cast<PFNGLWINDOWPOS2DVPROC>(GETFUNCADDR("glWindowPos2dv"));
		this->glWindowPos2f = reinterpret_cast<PFNGLWINDOWPOS2FPROC>(GETFUNCADDR("glWindowPos2f"));
		this->glWindowPos2fv = reinterpret_cast<PFNGLWINDOWPOS2FVPROC>(GETFUNCADDR("glWindowPos2fv"));
		this->glWindowPos2i = reinterpret_cast<PFNGLWINDOWPOS2IPROC>(GETFUNCADDR("glWindowPos2i"));
		this->glWindowPos2iv = reinterpret_cast<PFNGLWINDOWPOS2IVPROC>(GETFUNCADDR("glWindowPos2iv"));
		this->glWindowPos2s = reinterpret_cast<PFNGLWINDOWPOS2SPROC>(GETFUNCADDR("glWindowPos2s"));
		this->glWindowPos2sv = reinterpret_cast<PFNGLWINDOWPOS2SVPROC>(GETFUNCADDR("glWindowPos2sv"));
		this->glWindowPos3d = reinterpret_cast<PFNGLWINDOWPOS3DPROC>(GETFUNCADDR("glWindowPos3d"));
		this->glWindowPos3dv = reinterpret_cast<PFNGLWINDOWPOS3DVPROC>(GETFUNCADDR("glWindowPos3dv"));
		this->glWindowPos3f = reinterpret_cast<PFNGLWINDOWPOS3FPROC>(GETFUNCADDR("glWindowPos3f"));
		this->glWindowPos3fv = reinterpret_cast<PFNGLWINDOWPOS3FVPROC>(GETFUNCADDR("glWindowPos3fv"));
		this->glWindowPos3i = reinterpret_cast<PFNGLWINDOWPOS3IPROC>(GETFUNCADDR("glWindowPos3i"));
		this->glWindowPos3iv = reinterpret_cast<PFNGLWINDOWPOS3IVPROC>(GETFUNCADDR("glWindowPos3iv"));
		this->glWindowPos3s = reinterpret_cast<PFNGLWINDOWPOS3SPROC>(GETFUNCADDR("glWindowPos3s"));
		this->glWindowPos3sv = reinterpret_cast<PFNGLWINDOWPOS3SVPROC>(GETFUNCADDR("glWindowPos3sv"));

		/*
			GL_VERSION_1_5
		*/
		this->glBeginQuery = reinterpret_cast<PFNGLBEGINQUERYPROC>(GETFUNCADDR("glBeginQuery"));
		this->glBindBuffer = reinterpret_cast<PFNGLBINDBUFFERPROC>(GETFUNCADDR("glBindBuffer"));
		this->glBufferData = reinterpret_cast<PFNGLBUFFERDATAPROC>(GETFUNCADDR("glBufferData"));
		this->glBufferSubData = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(GETFUNCADDR("glBufferSubData"));
		this->glDeleteBuffers = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(GETFUNCADDR("glDeleteBuffers"));
		this->glDeleteQueries = reinterpret_cast<PFNGLDELETEQUERIESPROC>(GETFUNCADDR("glDeleteQueries"));
		this->glEndQuery = reinterpret_cast<PFNGLENDQUERYPROC>(GETFUNCADDR("glEndQuery"));
		this->glGenBuffers = reinterpret_cast<PFNGLGENBUFFERSPROC>(GETFUNCADDR("glGenBuffers"));
		this->glGenQueries = reinterpret_cast<PFNGLGENQUERIESPROC>(GETFUNCADDR("glGenQueries"));
		this->glGetBufferParameteriv = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetBufferParameteriv"));
		this->glGetBufferPointerv = reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC>(GETFUNCADDR("glGetBufferPointerv"));
		this->glGetBufferSubData = reinterpret_cast<PFNGLGETBUFFERSUBDATAPROC>(GETFUNCADDR("glGetBufferSubData"));
		this->glGetQueryObjectiv = reinterpret_cast<PFNGLGETQUERYOBJECTIVPROC>(GETFUNCADDR("glGetQueryObjectiv"));
		this->glGetQueryObjectuiv = reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC>(GETFUNCADDR("glGetQueryObjectuiv"));
		this->glGetQueryiv = reinterpret_cast<PFNGLGETQUERYIVPROC>(GETFUNCADDR("glGetQueryiv"));
		this->glIsBuffer = reinterpret_cast<PFNGLISBUFFERPROC>(GETFUNCADDR("glIsBuffer"));
		this->glIsQuery = reinterpret_cast<PFNGLISQUERYPROC>(GETFUNCADDR("glIsQuery"));
		this->glMapBuffer = reinterpret_cast<PFNGLMAPBUFFERPROC>(GETFUNCADDR("glMapBuffer"));
		this->glUnmapBuffer = reinterpret_cast<PFNGLUNMAPBUFFERPROC>(GETFUNCADDR("glUnmapBuffer"));

		/*
			GL_VERSION_2_0
		*/
		this->glAttachShader = reinterpret_cast<PFNGLATTACHSHADERPROC>(GETFUNCADDR("glAttachShader"));
		this->glBindAttribLocation = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(GETFUNCADDR("glBindAttribLocation"));
		this->glBlendEquationSeparate = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(GETFUNCADDR("glBlendEquationSeparate"));
		this->glCompileShader = reinterpret_cast<PFNGLCOMPILESHADERPROC>(GETFUNCADDR("glCompileShader"));
		this->glCreateProgram = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(GETFUNCADDR("glCreateProgram"));
		this->glCreateShader = reinterpret_cast<PFNGLCREATESHADERPROC>(GETFUNCADDR("glCreateShader"));
		this->glDeleteProgram = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(GETFUNCADDR("glDeleteProgram"));
		this->glDeleteShader = reinterpret_cast<PFNGLDELETESHADERPROC>(GETFUNCADDR("glDeleteShader"));
		this->glDetachShader = reinterpret_cast<PFNGLDETACHSHADERPROC>(GETFUNCADDR("glDetachShader"));
		this->glDisableVertexAttribArray = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(GETFUNCADDR("glDisableVertexAttribArray"));
		this->glDrawBuffers = reinterpret_cast<PFNGLDRAWBUFFERSPROC>(GETFUNCADDR("glDrawBuffers"));
		this->glEnableVertexAttribArray = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(GETFUNCADDR("glEnableVertexAttribArray"));
		this->glGetActiveAttrib = reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(GETFUNCADDR("glGetActiveAttrib"));
		this->glGetActiveUniform = reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(GETFUNCADDR("glGetActiveUniform"));
		this->glGetAttachedShaders = reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(GETFUNCADDR("glGetAttachedShaders"));
		this->glGetAttribLocation = reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(GETFUNCADDR("glGetAttribLocation"));
		this->glGetProgramInfoLog = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(GETFUNCADDR("glGetProgramInfoLog"));
		this->glGetProgramiv = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(GETFUNCADDR("glGetProgramiv"));
		this->glGetShaderInfoLog = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(GETFUNCADDR("glGetShaderInfoLog"));
		this->glGetShaderSource = reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(GETFUNCADDR("glGetShaderSource"));
		this->glGetShaderiv = reinterpret_cast<PFNGLGETSHADERIVPROC>(GETFUNCADDR("glGetShaderiv"));
		this->glGetUniformLocation = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(GETFUNCADDR("glGetUniformLocation"));
		this->glGetUniformfv = reinterpret_cast<PFNGLGETUNIFORMFVPROC>(GETFUNCADDR("glGetUniformfv"));
		this->glGetUniformiv = reinterpret_cast<PFNGLGETUNIFORMIVPROC>(GETFUNCADDR("glGetUniformiv"));
		this->glGetVertexAttribPointerv = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(GETFUNCADDR("glGetVertexAttribPointerv"));
		this->glGetVertexAttribdv = reinterpret_cast<PFNGLGETVERTEXATTRIBDVPROC>(GETFUNCADDR("glGetVertexAttribdv"));
		this->glGetVertexAttribfv = reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(GETFUNCADDR("glGetVertexAttribfv"));
		this->glGetVertexAttribiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(GETFUNCADDR("glGetVertexAttribiv"));
		this->glIsProgram = reinterpret_cast<PFNGLISPROGRAMPROC>(GETFUNCADDR("glIsProgram"));
		this->glIsShader = reinterpret_cast<PFNGLISSHADERPROC>(GETFUNCADDR("glIsShader"));
		this->glLinkProgram = reinterpret_cast<PFNGLLINKPROGRAMPROC>(GETFUNCADDR("glLinkProgram"));
		this->glShaderSource = reinterpret_cast<PFNGLSHADERSOURCEPROC>(GETFUNCADDR("glShaderSource"));
		this->glStencilFuncSeparate = reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(GETFUNCADDR("glStencilFuncSeparate"));
		this->glStencilMaskSeparate = reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(GETFUNCADDR("glStencilMaskSeparate"));
		this->glStencilOpSeparate = reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(GETFUNCADDR("glStencilOpSeparate"));
		this->glUniform1f = reinterpret_cast<PFNGLUNIFORM1FPROC>(GETFUNCADDR("glUniform1f"));
		this->glUniform1fv = reinterpret_cast<PFNGLUNIFORM1FVPROC>(GETFUNCADDR("glUniform1fv"));
		this->glUniform1i = reinterpret_cast<PFNGLUNIFORM1IPROC>(GETFUNCADDR("glUniform1i"));
		this->glUniform1iv = reinterpret_cast<PFNGLUNIFORM1IVPROC>(GETFUNCADDR("glUniform1iv"));
		this->glUniform2f = reinterpret_cast<PFNGLUNIFORM2FPROC>(GETFUNCADDR("glUniform2f"));
		this->glUniform2fv = reinterpret_cast<PFNGLUNIFORM2FVPROC>(GETFUNCADDR("glUniform2fv"));
		this->glUniform2i = reinterpret_cast<PFNGLUNIFORM2IPROC>(GETFUNCADDR("glUniform2i"));
		this->glUniform2iv = reinterpret_cast<PFNGLUNIFORM2IVPROC>(GETFUNCADDR("glUniform2iv"));
		this->glUniform3f = reinterpret_cast<PFNGLUNIFORM3FPROC>(GETFUNCADDR("glUniform3f"));
		this->glUniform3fv = reinterpret_cast<PFNGLUNIFORM3FVPROC>(GETFUNCADDR("glUniform3fv"));
		this->glUniform3i = reinterpret_cast<PFNGLUNIFORM3IPROC>(GETFUNCADDR("glUniform3i"));
		this->glUniform3iv = reinterpret_cast<PFNGLUNIFORM3IVPROC>(GETFUNCADDR("glUniform3iv"));
		this->glUniform4f = reinterpret_cast<PFNGLUNIFORM4FPROC>(GETFUNCADDR("glUniform4f"));
		this->glUniform4fv = reinterpret_cast<PFNGLUNIFORM4FVPROC>(GETFUNCADDR("glUniform4fv"));
		this->glUniform4i = reinterpret_cast<PFNGLUNIFORM4IPROC>(GETFUNCADDR("glUniform4i"));
		this->glUniform4iv = reinterpret_cast<PFNGLUNIFORM4IVPROC>(GETFUNCADDR("glUniform4iv"));
		this->glUniformMatrix2fv = reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(GETFUNCADDR("glUniformMatrix2fv"));
		this->glUniformMatrix3fv = reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(GETFUNCADDR("glUniformMatrix3fv"));
		this->glUniformMatrix4fv = reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(GETFUNCADDR("glUniformMatrix4fv"));
		this->glUseProgram = reinterpret_cast<PFNGLUSEPROGRAMPROC>(GETFUNCADDR("glUseProgram"));
		this->glValidateProgram = reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(GETFUNCADDR("glValidateProgram"));
		this->glVertexAttrib1d = reinterpret_cast<PFNGLVERTEXATTRIB1DPROC>(GETFUNCADDR("glVertexAttrib1d"));
		this->glVertexAttrib1dv = reinterpret_cast<PFNGLVERTEXATTRIB1DVPROC>(GETFUNCADDR("glVertexAttrib1dv"));
		this->glVertexAttrib1f = reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(GETFUNCADDR("glVertexAttrib1f"));
		this->glVertexAttrib1fv = reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC>(GETFUNCADDR("glVertexAttrib1fv"));
		this->glVertexAttrib1s = reinterpret_cast<PFNGLVERTEXATTRIB1SPROC>(GETFUNCADDR("glVertexAttrib1s"));
		this->glVertexAttrib1sv = reinterpret_cast<PFNGLVERTEXATTRIB1SVPROC>(GETFUNCADDR("glVertexAttrib1sv"));
		this->glVertexAttrib2d = reinterpret_cast<PFNGLVERTEXATTRIB2DPROC>(GETFUNCADDR("glVertexAttrib2d"));
		this->glVertexAttrib2dv = reinterpret_cast<PFNGLVERTEXATTRIB2DVPROC>(GETFUNCADDR("glVertexAttrib2dv"));
		this->glVertexAttrib2f = reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(GETFUNCADDR("glVertexAttrib2f"));
		this->glVertexAttrib2fv = reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC>(GETFUNCADDR("glVertexAttrib2fv"));
		this->glVertexAttrib2s = reinterpret_cast<PFNGLVERTEXATTRIB2SPROC>(GETFUNCADDR("glVertexAttrib2s"));
		this->glVertexAttrib2sv = reinterpret_cast<PFNGLVERTEXATTRIB2SVPROC>(GETFUNCADDR("glVertexAttrib2sv"));
		this->glVertexAttrib3d = reinterpret_cast<PFNGLVERTEXATTRIB3DPROC>(GETFUNCADDR("glVertexAttrib3d"));
		this->glVertexAttrib3dv = reinterpret_cast<PFNGLVERTEXATTRIB3DVPROC>(GETFUNCADDR("glVertexAttrib3dv"));
		this->glVertexAttrib3f = reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(GETFUNCADDR("glVertexAttrib3f"));
		this->glVertexAttrib3fv = reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC>(GETFUNCADDR("glVertexAttrib3fv"));
		this->glVertexAttrib3s = reinterpret_cast<PFNGLVERTEXATTRIB3SPROC>(GETFUNCADDR("glVertexAttrib3s"));
		this->glVertexAttrib3sv = reinterpret_cast<PFNGLVERTEXATTRIB3SVPROC>(GETFUNCADDR("glVertexAttrib3sv"));
		this->glVertexAttrib4Nbv = reinterpret_cast<PFNGLVERTEXATTRIB4NBVPROC>(GETFUNCADDR("glVertexAttrib4Nbv"));
		this->glVertexAttrib4Niv = reinterpret_cast<PFNGLVERTEXATTRIB4NIVPROC>(GETFUNCADDR("glVertexAttrib4Niv"));
		this->glVertexAttrib4Nsv = reinterpret_cast<PFNGLVERTEXATTRIB4NSVPROC>(GETFUNCADDR("glVertexAttrib4Nsv"));
		this->glVertexAttrib4Nub = reinterpret_cast<PFNGLVERTEXATTRIB4NUBPROC>(GETFUNCADDR("glVertexAttrib4Nub"));
		this->glVertexAttrib4Nubv = reinterpret_cast<PFNGLVERTEXATTRIB4NUBVPROC>(GETFUNCADDR("glVertexAttrib4Nubv"));
		this->glVertexAttrib4Nuiv = reinterpret_cast<PFNGLVERTEXATTRIB4NUIVPROC>(GETFUNCADDR("glVertexAttrib4Nuiv"));
		this->glVertexAttrib4Nusv = reinterpret_cast<PFNGLVERTEXATTRIB4NUSVPROC>(GETFUNCADDR("glVertexAttrib4Nusv"));
		this->glVertexAttrib4bv = reinterpret_cast<PFNGLVERTEXATTRIB4BVPROC>(GETFUNCADDR("glVertexAttrib4bv"));
		this->glVertexAttrib4d = reinterpret_cast<PFNGLVERTEXATTRIB4DPROC>(GETFUNCADDR("glVertexAttrib4d"));
		this->glVertexAttrib4dv = reinterpret_cast<PFNGLVERTEXATTRIB4DVPROC>(GETFUNCADDR("glVertexAttrib4dv"));
		this->glVertexAttrib4f = reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(GETFUNCADDR("glVertexAttrib4f"));
		this->glVertexAttrib4fv = reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC>(GETFUNCADDR("glVertexAttrib4fv"));
		this->glVertexAttrib4iv = reinterpret_cast<PFNGLVERTEXATTRIB4IVPROC>(GETFUNCADDR("glVertexAttrib4iv"));
		this->glVertexAttrib4s = reinterpret_cast<PFNGLVERTEXATTRIB4SPROC>(GETFUNCADDR("glVertexAttrib4s"));
		this->glVertexAttrib4sv = reinterpret_cast<PFNGLVERTEXATTRIB4SVPROC>(GETFUNCADDR("glVertexAttrib4sv"));
		this->glVertexAttrib4ubv = reinterpret_cast<PFNGLVERTEXATTRIB4UBVPROC>(GETFUNCADDR("glVertexAttrib4ubv"));
		this->glVertexAttrib4uiv = reinterpret_cast<PFNGLVERTEXATTRIB4UIVPROC>(GETFUNCADDR("glVertexAttrib4uiv"));
		this->glVertexAttrib4usv = reinterpret_cast<PFNGLVERTEXATTRIB4USVPROC>(GETFUNCADDR("glVertexAttrib4usv"));
		this->glVertexAttribPointer = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(GETFUNCADDR("glVertexAttribPointer"));

		/*
			GL_VERSION_2_1
		*/
		this->glUniformMatrix2x3fv = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVPROC>(GETFUNCADDR("glUniformMatrix2x3fv"));
		this->glUniformMatrix2x4fv = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVPROC>(GETFUNCADDR("glUniformMatrix2x4fv"));
		this->glUniformMatrix3x2fv = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVPROC>(GETFUNCADDR("glUniformMatrix3x2fv"));
		this->glUniformMatrix3x4fv = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVPROC>(GETFUNCADDR("glUniformMatrix3x4fv"));
		this->glUniformMatrix4x2fv = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVPROC>(GETFUNCADDR("glUniformMatrix4x2fv"));
		this->glUniformMatrix4x3fv = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVPROC>(GETFUNCADDR("glUniformMatrix4x3fv"));

		/*
			GL_VERSION_3_0
		*/
		this->glBeginConditionalRender = reinterpret_cast<PFNGLBEGINCONDITIONALRENDERPROC>(GETFUNCADDR("glBeginConditionalRender"));
		this->glBeginTransformFeedback = reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKPROC>(GETFUNCADDR("glBeginTransformFeedback"));
		this->glBindFragDataLocation = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONPROC>(GETFUNCADDR("glBindFragDataLocation"));
		this->glClampColor = reinterpret_cast<PFNGLCLAMPCOLORPROC>(GETFUNCADDR("glClampColor"));
		this->glClearBufferfi = reinterpret_cast<PFNGLCLEARBUFFERFIPROC>(GETFUNCADDR("glClearBufferfi"));
		this->glClearBufferfv = reinterpret_cast<PFNGLCLEARBUFFERFVPROC>(GETFUNCADDR("glClearBufferfv"));
		this->glClearBufferiv = reinterpret_cast<PFNGLCLEARBUFFERIVPROC>(GETFUNCADDR("glClearBufferiv"));
		this->glClearBufferuiv = reinterpret_cast<PFNGLCLEARBUFFERUIVPROC>(GETFUNCADDR("glClearBufferuiv"));
		this->glColorMaski = reinterpret_cast<PFNGLCOLORMASKIPROC>(GETFUNCADDR("glColorMaski"));
		this->glDisablei = reinterpret_cast<PFNGLDISABLEIPROC>(GETFUNCADDR("glDisablei"));
		this->glEnablei = reinterpret_cast<PFNGLENABLEIPROC>(GETFUNCADDR("glEnablei"));
		this->glEndConditionalRender = reinterpret_cast<PFNGLENDCONDITIONALRENDERPROC>(GETFUNCADDR("glEndConditionalRender"));
		this->glEndTransformFeedback = reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKPROC>(GETFUNCADDR("glEndTransformFeedback"));
		this->glGetBooleani_v = reinterpret_cast<PFNGLGETBOOLEANI_VPROC>(GETFUNCADDR("glGetBooleani_v"));
		this->glGetFragDataLocation = reinterpret_cast<PFNGLGETFRAGDATALOCATIONPROC>(GETFUNCADDR("glGetFragDataLocation"));
		this->glGetStringi = reinterpret_cast<PFNGLGETSTRINGIPROC>(GETFUNCADDR("glGetStringi"));
		this->glGetTexParameterIiv = reinterpret_cast<PFNGLGETTEXPARAMETERIIVPROC>(GETFUNCADDR("glGetTexParameterIiv"));
		this->glGetTexParameterIuiv = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVPROC>(GETFUNCADDR("glGetTexParameterIuiv"));
		this->glGetTransformFeedbackVarying = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>(GETFUNCADDR("glGetTransformFeedbackVarying"));
		this->glGetUniformuiv = reinterpret_cast<PFNGLGETUNIFORMUIVPROC>(GETFUNCADDR("glGetUniformuiv"));
		this->glGetVertexAttribIiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIIVPROC>(GETFUNCADDR("glGetVertexAttribIiv"));
		this->glGetVertexAttribIuiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVPROC>(GETFUNCADDR("glGetVertexAttribIuiv"));
		this->glIsEnabledi = reinterpret_cast<PFNGLISENABLEDIPROC>(GETFUNCADDR("glIsEnabledi"));
		this->glTexParameterIiv = reinterpret_cast<PFNGLTEXPARAMETERIIVPROC>(GETFUNCADDR("glTexParameterIiv"));
		this->glTexParameterIuiv = reinterpret_cast<PFNGLTEXPARAMETERIUIVPROC>(GETFUNCADDR("glTexParameterIuiv"));
		this->glTransformFeedbackVaryings = reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>(GETFUNCADDR("glTransformFeedbackVaryings"));
		this->glUniform1ui = reinterpret_cast<PFNGLUNIFORM1UIPROC>(GETFUNCADDR("glUniform1ui"));
		this->glUniform1uiv = reinterpret_cast<PFNGLUNIFORM1UIVPROC>(GETFUNCADDR("glUniform1uiv"));
		this->glUniform2ui = reinterpret_cast<PFNGLUNIFORM2UIPROC>(GETFUNCADDR("glUniform2ui"));
		this->glUniform2uiv = reinterpret_cast<PFNGLUNIFORM2UIVPROC>(GETFUNCADDR("glUniform2uiv"));
		this->glUniform3ui = reinterpret_cast<PFNGLUNIFORM3UIPROC>(GETFUNCADDR("glUniform3ui"));
		this->glUniform3uiv = reinterpret_cast<PFNGLUNIFORM3UIVPROC>(GETFUNCADDR("glUniform3uiv"));
		this->glUniform4ui = reinterpret_cast<PFNGLUNIFORM4UIPROC>(GETFUNCADDR("glUniform4ui"));
		this->glUniform4uiv = reinterpret_cast<PFNGLUNIFORM4UIVPROC>(GETFUNCADDR("glUniform4uiv"));
		this->glVertexAttribI1i = reinterpret_cast<PFNGLVERTEXATTRIBI1IPROC>(GETFUNCADDR("glVertexAttribI1i"));
		this->glVertexAttribI1iv = reinterpret_cast<PFNGLVERTEXATTRIBI1IVPROC>(GETFUNCADDR("glVertexAttribI1iv"));
		this->glVertexAttribI1ui = reinterpret_cast<PFNGLVERTEXATTRIBI1UIPROC>(GETFUNCADDR("glVertexAttribI1ui"));
		this->glVertexAttribI1uiv = reinterpret_cast<PFNGLVERTEXATTRIBI1UIVPROC>(GETFUNCADDR("glVertexAttribI1uiv"));
		this->glVertexAttribI2i = reinterpret_cast<PFNGLVERTEXATTRIBI2IPROC>(GETFUNCADDR("glVertexAttribI2i"));
		this->glVertexAttribI2iv = reinterpret_cast<PFNGLVERTEXATTRIBI2IVPROC>(GETFUNCADDR("glVertexAttribI2iv"));
		this->glVertexAttribI2ui = reinterpret_cast<PFNGLVERTEXATTRIBI2UIPROC>(GETFUNCADDR("glVertexAttribI2ui"));
		this->glVertexAttribI2uiv = reinterpret_cast<PFNGLVERTEXATTRIBI2UIVPROC>(GETFUNCADDR("glVertexAttribI2uiv"));
		this->glVertexAttribI3i = reinterpret_cast<PFNGLVERTEXATTRIBI3IPROC>(GETFUNCADDR("glVertexAttribI3i"));
		this->glVertexAttribI3iv = reinterpret_cast<PFNGLVERTEXATTRIBI3IVPROC>(GETFUNCADDR("glVertexAttribI3iv"));
		this->glVertexAttribI3ui = reinterpret_cast<PFNGLVERTEXATTRIBI3UIPROC>(GETFUNCADDR("glVertexAttribI3ui"));
		this->glVertexAttribI3uiv = reinterpret_cast<PFNGLVERTEXATTRIBI3UIVPROC>(GETFUNCADDR("glVertexAttribI3uiv"));
		this->glVertexAttribI4bv = reinterpret_cast<PFNGLVERTEXATTRIBI4BVPROC>(GETFUNCADDR("glVertexAttribI4bv"));
		this->glVertexAttribI4i = reinterpret_cast<PFNGLVERTEXATTRIBI4IPROC>(GETFUNCADDR("glVertexAttribI4i"));
		this->glVertexAttribI4iv = reinterpret_cast<PFNGLVERTEXATTRIBI4IVPROC>(GETFUNCADDR("glVertexAttribI4iv"));
		this->glVertexAttribI4sv = reinterpret_cast<PFNGLVERTEXATTRIBI4SVPROC>(GETFUNCADDR("glVertexAttribI4sv"));
		this->glVertexAttribI4ubv = reinterpret_cast<PFNGLVERTEXATTRIBI4UBVPROC>(GETFUNCADDR("glVertexAttribI4ubv"));
		this->glVertexAttribI4ui = reinterpret_cast<PFNGLVERTEXATTRIBI4UIPROC>(GETFUNCADDR("glVertexAttribI4ui"));
		this->glVertexAttribI4uiv = reinterpret_cast<PFNGLVERTEXATTRIBI4UIVPROC>(GETFUNCADDR("glVertexAttribI4uiv"));
		this->glVertexAttribI4usv = reinterpret_cast<PFNGLVERTEXATTRIBI4USVPROC>(GETFUNCADDR("glVertexAttribI4usv"));
		this->glVertexAttribIPointer = reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC>(GETFUNCADDR("glVertexAttribIPointer"));

		/*
			GL_VERSION_3_1
		*/
		this->glDrawArraysInstanced = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC>(GETFUNCADDR("glDrawArraysInstanced"));
		this->glDrawElementsInstanced = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC>(GETFUNCADDR("glDrawElementsInstanced"));
		this->glPrimitiveRestartIndex = reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXPROC>(GETFUNCADDR("glPrimitiveRestartIndex"));
		this->glTexBuffer = reinterpret_cast<PFNGLTEXBUFFERPROC>(GETFUNCADDR("glTexBuffer"));

		/*
			GL_VERSION_3_2
		*/
		this->glFramebufferTexture = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREPROC>(GETFUNCADDR("glFramebufferTexture"));
		this->glGetBufferParameteri64v = reinterpret_cast<PFNGLGETBUFFERPARAMETERI64VPROC>(GETFUNCADDR("glGetBufferParameteri64v"));
		this->glGetInteger64i_v = reinterpret_cast<PFNGLGETINTEGER64I_VPROC>(GETFUNCADDR("glGetInteger64i_v"));

		/*
			GL_VERSION_3_3
		*/
		this->glVertexAttribDivisor = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORPROC>(GETFUNCADDR("glVertexAttribDivisor"));

		/*
			GL_VERSION_4_0
		*/
		this->glBlendEquationSeparatei = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIPROC>(GETFUNCADDR("glBlendEquationSeparatei"));
		this->glBlendEquationi = reinterpret_cast<PFNGLBLENDEQUATIONIPROC>(GETFUNCADDR("glBlendEquationi"));
		this->glBlendFuncSeparatei = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIPROC>(GETFUNCADDR("glBlendFuncSeparatei"));
		this->glBlendFunci = reinterpret_cast<PFNGLBLENDFUNCIPROC>(GETFUNCADDR("glBlendFunci"));
		this->glMinSampleShading = reinterpret_cast<PFNGLMINSAMPLESHADINGPROC>(GETFUNCADDR("glMinSampleShading"));

		/*
			GL_VERSION_4_5
		*/
		this->glGetGraphicsResetStatus = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSPROC>(GETFUNCADDR("glGetGraphicsResetStatus"));
		this->glGetnCompressedTexImage = reinterpret_cast<PFNGLGETNCOMPRESSEDTEXIMAGEPROC>(GETFUNCADDR("glGetnCompressedTexImage"));
		this->glGetnTexImage = reinterpret_cast<PFNGLGETNTEXIMAGEPROC>(GETFUNCADDR("glGetnTexImage"));
		this->glGetnUniformdv = reinterpret_cast<PFNGLGETNUNIFORMDVPROC>(GETFUNCADDR("glGetnUniformdv"));

		/*
			GL_VERSION_4_6
		*/
		this->glMultiDrawArraysIndirectCount = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC>(GETFUNCADDR("glMultiDrawArraysIndirectCount"));
		this->glMultiDrawElementsIndirectCount = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC>(GETFUNCADDR("glMultiDrawElementsIndirectCount"));
		this->glSpecializeShader = reinterpret_cast<PFNGLSPECIALIZESHADERPROC>(GETFUNCADDR("glSpecializeShader"));

		/*
			GL_3DFX_tbuffer
		*/
		this->glTbufferMask3DFX = reinterpret_cast<PFNGLTBUFFERMASK3DFXPROC>(GETFUNCADDR("glTbufferMask3DFX"));

		/*
			GL_AMD_debug_output
		*/
		this->glDebugMessageCallbackAMD = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKAMDPROC>(GETFUNCADDR("glDebugMessageCallbackAMD"));
		this->glDebugMessageEnableAMD = reinterpret_cast<PFNGLDEBUGMESSAGEENABLEAMDPROC>(GETFUNCADDR("glDebugMessageEnableAMD"));
		this->glDebugMessageInsertAMD = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTAMDPROC>(GETFUNCADDR("glDebugMessageInsertAMD"));
		this->glGetDebugMessageLogAMD = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGAMDPROC>(GETFUNCADDR("glGetDebugMessageLogAMD"));

		/*
			GL_AMD_draw_buffers_blend
		*/
		this->glBlendEquationIndexedAMD = reinterpret_cast<PFNGLBLENDEQUATIONINDEXEDAMDPROC>(GETFUNCADDR("glBlendEquationIndexedAMD"));
		this->glBlendEquationSeparateIndexedAMD = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC>(GETFUNCADDR("glBlendEquationSeparateIndexedAMD"));
		this->glBlendFuncIndexedAMD = reinterpret_cast<PFNGLBLENDFUNCINDEXEDAMDPROC>(GETFUNCADDR("glBlendFuncIndexedAMD"));
		this->glBlendFuncSeparateIndexedAMD = reinterpret_cast<PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC>(GETFUNCADDR("glBlendFuncSeparateIndexedAMD"));

		/*
			GL_AMD_framebuffer_sample_positions
		*/
		this->glFramebufferSamplePositionsfvAMD = reinterpret_cast<PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC>(GETFUNCADDR("glFramebufferSamplePositionsfvAMD"));
		this->glGetFramebufferParameterfvAMD = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC>(GETFUNCADDR("glGetFramebufferParameterfvAMD"));
		this->glGetNamedFramebufferParameterfvAMD = reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC>(GETFUNCADDR("glGetNamedFramebufferParameterfvAMD"));
		this->glNamedFramebufferSamplePositionsfvAMD = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC>(GETFUNCADDR("glNamedFramebufferSamplePositionsfvAMD"));

		/*
			GL_AMD_interleaved_elements
		*/
		this->glVertexAttribParameteriAMD = reinterpret_cast<PFNGLVERTEXATTRIBPARAMETERIAMDPROC>(GETFUNCADDR("glVertexAttribParameteriAMD"));

		/*
			GL_AMD_multi_draw_indirect
		*/
		this->glMultiDrawArraysIndirectAMD = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC>(GETFUNCADDR("glMultiDrawArraysIndirectAMD"));
		this->glMultiDrawElementsIndirectAMD = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC>(GETFUNCADDR("glMultiDrawElementsIndirectAMD"));

		/*
			GL_AMD_name_gen_delete
		*/
		this->glDeleteNamesAMD = reinterpret_cast<PFNGLDELETENAMESAMDPROC>(GETFUNCADDR("glDeleteNamesAMD"));
		this->glGenNamesAMD = reinterpret_cast<PFNGLGENNAMESAMDPROC>(GETFUNCADDR("glGenNamesAMD"));
		this->glIsNameAMD = reinterpret_cast<PFNGLISNAMEAMDPROC>(GETFUNCADDR("glIsNameAMD"));

		/*
			GL_AMD_occlusion_query_event
		*/
		this->glQueryObjectParameteruiAMD = reinterpret_cast<PFNGLQUERYOBJECTPARAMETERUIAMDPROC>(GETFUNCADDR("glQueryObjectParameteruiAMD"));

		/*
			GL_AMD_performance_monitor
		*/
		this->glBeginPerfMonitorAMD = reinterpret_cast<PFNGLBEGINPERFMONITORAMDPROC>(GETFUNCADDR("glBeginPerfMonitorAMD"));
		this->glDeletePerfMonitorsAMD = reinterpret_cast<PFNGLDELETEPERFMONITORSAMDPROC>(GETFUNCADDR("glDeletePerfMonitorsAMD"));
		this->glEndPerfMonitorAMD = reinterpret_cast<PFNGLENDPERFMONITORAMDPROC>(GETFUNCADDR("glEndPerfMonitorAMD"));
		this->glGenPerfMonitorsAMD = reinterpret_cast<PFNGLGENPERFMONITORSAMDPROC>(GETFUNCADDR("glGenPerfMonitorsAMD"));
		this->glGetPerfMonitorCounterDataAMD = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERDATAAMDPROC>(GETFUNCADDR("glGetPerfMonitorCounterDataAMD"));
		this->glGetPerfMonitorCounterInfoAMD = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERINFOAMDPROC>(GETFUNCADDR("glGetPerfMonitorCounterInfoAMD"));
		this->glGetPerfMonitorCounterStringAMD = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC>(GETFUNCADDR("glGetPerfMonitorCounterStringAMD"));
		this->glGetPerfMonitorCountersAMD = reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSAMDPROC>(GETFUNCADDR("glGetPerfMonitorCountersAMD"));
		this->glGetPerfMonitorGroupStringAMD = reinterpret_cast<PFNGLGETPERFMONITORGROUPSTRINGAMDPROC>(GETFUNCADDR("glGetPerfMonitorGroupStringAMD"));
		this->glGetPerfMonitorGroupsAMD = reinterpret_cast<PFNGLGETPERFMONITORGROUPSAMDPROC>(GETFUNCADDR("glGetPerfMonitorGroupsAMD"));
		this->glSelectPerfMonitorCountersAMD = reinterpret_cast<PFNGLSELECTPERFMONITORCOUNTERSAMDPROC>(GETFUNCADDR("glSelectPerfMonitorCountersAMD"));

		/*
			GL_AMD_sample_positions
		*/
		this->glSetMultisamplefvAMD = reinterpret_cast<PFNGLSETMULTISAMPLEFVAMDPROC>(GETFUNCADDR("glSetMultisamplefvAMD"));

		/*
			GL_AMD_sparse_texture
		*/
		this->glTexStorageSparseAMD = reinterpret_cast<PFNGLTEXSTORAGESPARSEAMDPROC>(GETFUNCADDR("glTexStorageSparseAMD"));
		this->glTextureStorageSparseAMD = reinterpret_cast<PFNGLTEXTURESTORAGESPARSEAMDPROC>(GETFUNCADDR("glTextureStorageSparseAMD"));

		/*
			GL_AMD_stencil_operation_extended
		*/
		this->glStencilOpValueAMD = reinterpret_cast<PFNGLSTENCILOPVALUEAMDPROC>(GETFUNCADDR("glStencilOpValueAMD"));

		/*
			GL_AMD_vertex_shader_tessellator
		*/
		this->glTessellationFactorAMD = reinterpret_cast<PFNGLTESSELLATIONFACTORAMDPROC>(GETFUNCADDR("glTessellationFactorAMD"));
		this->glTessellationModeAMD = reinterpret_cast<PFNGLTESSELLATIONMODEAMDPROC>(GETFUNCADDR("glTessellationModeAMD"));

		/*
			GL_ANGLE_framebuffer_blit
		*/
		this->glBlitFramebufferANGLE = reinterpret_cast<PFNGLBLITFRAMEBUFFERANGLEPROC>(GETFUNCADDR("glBlitFramebufferANGLE"));

		/*
			GL_ANGLE_framebuffer_multisample
		*/
		this->glRenderbufferStorageMultisampleANGLE = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC>(GETFUNCADDR("glRenderbufferStorageMultisampleANGLE"));

		/*
			GL_ANGLE_instanced_arrays
		*/
		this->glDrawArraysInstancedANGLE = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(GETFUNCADDR("glDrawArraysInstancedANGLE"));
		this->glDrawElementsInstancedANGLE = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(GETFUNCADDR("glDrawElementsInstancedANGLE"));
		this->glVertexAttribDivisorANGLE = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(GETFUNCADDR("glVertexAttribDivisorANGLE"));

		/*
			GL_ANGLE_timer_query
		*/
		this->glBeginQueryANGLE = reinterpret_cast<PFNGLBEGINQUERYANGLEPROC>(GETFUNCADDR("glBeginQueryANGLE"));
		this->glDeleteQueriesANGLE = reinterpret_cast<PFNGLDELETEQUERIESANGLEPROC>(GETFUNCADDR("glDeleteQueriesANGLE"));
		this->glEndQueryANGLE = reinterpret_cast<PFNGLENDQUERYANGLEPROC>(GETFUNCADDR("glEndQueryANGLE"));
		this->glGenQueriesANGLE = reinterpret_cast<PFNGLGENQUERIESANGLEPROC>(GETFUNCADDR("glGenQueriesANGLE"));
		this->glGetQueryObjecti64vANGLE = reinterpret_cast<PFNGLGETQUERYOBJECTI64VANGLEPROC>(GETFUNCADDR("glGetQueryObjecti64vANGLE"));
		this->glGetQueryObjectivANGLE = reinterpret_cast<PFNGLGETQUERYOBJECTIVANGLEPROC>(GETFUNCADDR("glGetQueryObjectivANGLE"));
		this->glGetQueryObjectui64vANGLE = reinterpret_cast<PFNGLGETQUERYOBJECTUI64VANGLEPROC>(GETFUNCADDR("glGetQueryObjectui64vANGLE"));
		this->glGetQueryObjectuivANGLE = reinterpret_cast<PFNGLGETQUERYOBJECTUIVANGLEPROC>(GETFUNCADDR("glGetQueryObjectuivANGLE"));
		this->glGetQueryivANGLE = reinterpret_cast<PFNGLGETQUERYIVANGLEPROC>(GETFUNCADDR("glGetQueryivANGLE"));
		this->glIsQueryANGLE = reinterpret_cast<PFNGLISQUERYANGLEPROC>(GETFUNCADDR("glIsQueryANGLE"));
		this->glQueryCounterANGLE = reinterpret_cast<PFNGLQUERYCOUNTERANGLEPROC>(GETFUNCADDR("glQueryCounterANGLE"));

		/*
			GL_ANGLE_translated_shader_source
		*/
		this->glGetTranslatedShaderSourceANGLE = reinterpret_cast<PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC>(GETFUNCADDR("glGetTranslatedShaderSourceANGLE"));

		/*
			GL_APPLE_copy_texture_levels
		*/
		this->glCopyTextureLevelsAPPLE = reinterpret_cast<PFNGLCOPYTEXTURELEVELSAPPLEPROC>(GETFUNCADDR("glCopyTextureLevelsAPPLE"));

		/*
			GL_APPLE_element_array
		*/
		this->glDrawElementArrayAPPLE = reinterpret_cast<PFNGLDRAWELEMENTARRAYAPPLEPROC>(GETFUNCADDR("glDrawElementArrayAPPLE"));
		this->glDrawRangeElementArrayAPPLE = reinterpret_cast<PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC>(GETFUNCADDR("glDrawRangeElementArrayAPPLE"));
		this->glElementPointerAPPLE = reinterpret_cast<PFNGLELEMENTPOINTERAPPLEPROC>(GETFUNCADDR("glElementPointerAPPLE"));
		this->glMultiDrawElementArrayAPPLE = reinterpret_cast<PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC>(GETFUNCADDR("glMultiDrawElementArrayAPPLE"));
		this->glMultiDrawRangeElementArrayAPPLE = reinterpret_cast<PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC>(GETFUNCADDR("glMultiDrawRangeElementArrayAPPLE"));

		/*
			GL_APPLE_fence
		*/
		this->glDeleteFencesAPPLE = reinterpret_cast<PFNGLDELETEFENCESAPPLEPROC>(GETFUNCADDR("glDeleteFencesAPPLE"));
		this->glFinishFenceAPPLE = reinterpret_cast<PFNGLFINISHFENCEAPPLEPROC>(GETFUNCADDR("glFinishFenceAPPLE"));
		this->glFinishObjectAPPLE = reinterpret_cast<PFNGLFINISHOBJECTAPPLEPROC>(GETFUNCADDR("glFinishObjectAPPLE"));
		this->glGenFencesAPPLE = reinterpret_cast<PFNGLGENFENCESAPPLEPROC>(GETFUNCADDR("glGenFencesAPPLE"));
		this->glIsFenceAPPLE = reinterpret_cast<PFNGLISFENCEAPPLEPROC>(GETFUNCADDR("glIsFenceAPPLE"));
		this->glSetFenceAPPLE = reinterpret_cast<PFNGLSETFENCEAPPLEPROC>(GETFUNCADDR("glSetFenceAPPLE"));
		this->glTestFenceAPPLE = reinterpret_cast<PFNGLTESTFENCEAPPLEPROC>(GETFUNCADDR("glTestFenceAPPLE"));
		this->glTestObjectAPPLE = reinterpret_cast<PFNGLTESTOBJECTAPPLEPROC>(GETFUNCADDR("glTestObjectAPPLE"));

		/*
			GL_APPLE_flush_buffer_range
		*/
		this->glBufferParameteriAPPLE = reinterpret_cast<PFNGLBUFFERPARAMETERIAPPLEPROC>(GETFUNCADDR("glBufferParameteriAPPLE"));
		this->glFlushMappedBufferRangeAPPLE = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC>(GETFUNCADDR("glFlushMappedBufferRangeAPPLE"));

		/*
			GL_APPLE_framebuffer_multisample
		*/
		this->glRenderbufferStorageMultisampleAPPLE = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC>(GETFUNCADDR("glRenderbufferStorageMultisampleAPPLE"));
		this->glResolveMultisampleFramebufferAPPLE = reinterpret_cast<PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC>(GETFUNCADDR("glResolveMultisampleFramebufferAPPLE"));

		/*
			GL_APPLE_object_purgeable
		*/
		this->glGetObjectParameterivAPPLE = reinterpret_cast<PFNGLGETOBJECTPARAMETERIVAPPLEPROC>(GETFUNCADDR("glGetObjectParameterivAPPLE"));
		this->glObjectPurgeableAPPLE = reinterpret_cast<PFNGLOBJECTPURGEABLEAPPLEPROC>(GETFUNCADDR("glObjectPurgeableAPPLE"));
		this->glObjectUnpurgeableAPPLE = reinterpret_cast<PFNGLOBJECTUNPURGEABLEAPPLEPROC>(GETFUNCADDR("glObjectUnpurgeableAPPLE"));

		/*
			GL_APPLE_sync
		*/
		this->glClientWaitSyncAPPLE = reinterpret_cast<PFNGLCLIENTWAITSYNCAPPLEPROC>(GETFUNCADDR("glClientWaitSyncAPPLE"));
		this->glDeleteSyncAPPLE = reinterpret_cast<PFNGLDELETESYNCAPPLEPROC>(GETFUNCADDR("glDeleteSyncAPPLE"));
		this->glFenceSyncAPPLE = reinterpret_cast<PFNGLFENCESYNCAPPLEPROC>(GETFUNCADDR("glFenceSyncAPPLE"));
		this->glGetInteger64vAPPLE = reinterpret_cast<PFNGLGETINTEGER64VAPPLEPROC>(GETFUNCADDR("glGetInteger64vAPPLE"));
		this->glGetSyncivAPPLE = reinterpret_cast<PFNGLGETSYNCIVAPPLEPROC>(GETFUNCADDR("glGetSyncivAPPLE"));
		this->glIsSyncAPPLE = reinterpret_cast<PFNGLISSYNCAPPLEPROC>(GETFUNCADDR("glIsSyncAPPLE"));
		this->glWaitSyncAPPLE = reinterpret_cast<PFNGLWAITSYNCAPPLEPROC>(GETFUNCADDR("glWaitSyncAPPLE"));

		/*
			GL_APPLE_texture_range
		*/
		this->glGetTexParameterPointervAPPLE = reinterpret_cast<PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC>(GETFUNCADDR("glGetTexParameterPointervAPPLE"));
		this->glTextureRangeAPPLE = reinterpret_cast<PFNGLTEXTURERANGEAPPLEPROC>(GETFUNCADDR("glTextureRangeAPPLE"));

		/*
			GL_APPLE_vertex_array_object
		*/
		this->glBindVertexArrayAPPLE = reinterpret_cast<PFNGLBINDVERTEXARRAYAPPLEPROC>(GETFUNCADDR("glBindVertexArrayAPPLE"));
		this->glDeleteVertexArraysAPPLE = reinterpret_cast<PFNGLDELETEVERTEXARRAYSAPPLEPROC>(GETFUNCADDR("glDeleteVertexArraysAPPLE"));
		this->glGenVertexArraysAPPLE = reinterpret_cast<PFNGLGENVERTEXARRAYSAPPLEPROC>(GETFUNCADDR("glGenVertexArraysAPPLE"));
		this->glIsVertexArrayAPPLE = reinterpret_cast<PFNGLISVERTEXARRAYAPPLEPROC>(GETFUNCADDR("glIsVertexArrayAPPLE"));

		/*
			GL_APPLE_vertex_array_range
		*/
		this->glFlushVertexArrayRangeAPPLE = reinterpret_cast<PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC>(GETFUNCADDR("glFlushVertexArrayRangeAPPLE"));
		this->glVertexArrayParameteriAPPLE = reinterpret_cast<PFNGLVERTEXARRAYPARAMETERIAPPLEPROC>(GETFUNCADDR("glVertexArrayParameteriAPPLE"));
		this->glVertexArrayRangeAPPLE = reinterpret_cast<PFNGLVERTEXARRAYRANGEAPPLEPROC>(GETFUNCADDR("glVertexArrayRangeAPPLE"));

		/*
			GL_APPLE_vertex_program_evaluators
		*/
		this->glDisableVertexAttribAPPLE = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBAPPLEPROC>(GETFUNCADDR("glDisableVertexAttribAPPLE"));
		this->glEnableVertexAttribAPPLE = reinterpret_cast<PFNGLENABLEVERTEXATTRIBAPPLEPROC>(GETFUNCADDR("glEnableVertexAttribAPPLE"));
		this->glIsVertexAttribEnabledAPPLE = reinterpret_cast<PFNGLISVERTEXATTRIBENABLEDAPPLEPROC>(GETFUNCADDR("glIsVertexAttribEnabledAPPLE"));
		this->glMapVertexAttrib1dAPPLE = reinterpret_cast<PFNGLMAPVERTEXATTRIB1DAPPLEPROC>(GETFUNCADDR("glMapVertexAttrib1dAPPLE"));
		this->glMapVertexAttrib1fAPPLE = reinterpret_cast<PFNGLMAPVERTEXATTRIB1FAPPLEPROC>(GETFUNCADDR("glMapVertexAttrib1fAPPLE"));
		this->glMapVertexAttrib2dAPPLE = reinterpret_cast<PFNGLMAPVERTEXATTRIB2DAPPLEPROC>(GETFUNCADDR("glMapVertexAttrib2dAPPLE"));
		this->glMapVertexAttrib2fAPPLE = reinterpret_cast<PFNGLMAPVERTEXATTRIB2FAPPLEPROC>(GETFUNCADDR("glMapVertexAttrib2fAPPLE"));

		/*
			GL_ARB_ES2_compatibility
		*/
		this->glClearDepthf = reinterpret_cast<PFNGLCLEARDEPTHFPROC>(GETFUNCADDR("glClearDepthf"));
		this->glDepthRangef = reinterpret_cast<PFNGLDEPTHRANGEFPROC>(GETFUNCADDR("glDepthRangef"));
		this->glGetShaderPrecisionFormat = reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(GETFUNCADDR("glGetShaderPrecisionFormat"));
		this->glReleaseShaderCompiler = reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC>(GETFUNCADDR("glReleaseShaderCompiler"));
		this->glShaderBinary = reinterpret_cast<PFNGLSHADERBINARYPROC>(GETFUNCADDR("glShaderBinary"));

		/*
			GL_ARB_ES3_1_compatibility
		*/
		this->glMemoryBarrierByRegion = reinterpret_cast<PFNGLMEMORYBARRIERBYREGIONPROC>(GETFUNCADDR("glMemoryBarrierByRegion"));

		/*
			GL_ARB_ES3_2_compatibility
		*/
		this->glPrimitiveBoundingBoxARB = reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXARBPROC>(GETFUNCADDR("glPrimitiveBoundingBoxARB"));

		/*
			GL_ARB_base_instance
		*/
		this->glDrawArraysInstancedBaseInstance = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC>(GETFUNCADDR("glDrawArraysInstancedBaseInstance"));
		this->glDrawElementsInstancedBaseInstance = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC>(GETFUNCADDR("glDrawElementsInstancedBaseInstance"));
		this->glDrawElementsInstancedBaseVertexBaseInstance = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC>(GETFUNCADDR("glDrawElementsInstancedBaseVertexBaseInstance"));

		/*
			GL_ARB_bindless_texture
		*/
		this->glGetImageHandleARB = reinterpret_cast<PFNGLGETIMAGEHANDLEARBPROC>(GETFUNCADDR("glGetImageHandleARB"));
		this->glGetTextureHandleARB = reinterpret_cast<PFNGLGETTEXTUREHANDLEARBPROC>(GETFUNCADDR("glGetTextureHandleARB"));
		this->glGetTextureSamplerHandleARB = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLEARBPROC>(GETFUNCADDR("glGetTextureSamplerHandleARB"));
		this->glGetVertexAttribLui64vARB = reinterpret_cast<PFNGLGETVERTEXATTRIBLUI64VARBPROC>(GETFUNCADDR("glGetVertexAttribLui64vARB"));
		this->glIsImageHandleResidentARB = reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTARBPROC>(GETFUNCADDR("glIsImageHandleResidentARB"));
		this->glIsTextureHandleResidentARB = reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTARBPROC>(GETFUNCADDR("glIsTextureHandleResidentARB"));
		this->glMakeImageHandleNonResidentARB = reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC>(GETFUNCADDR("glMakeImageHandleNonResidentARB"));
		this->glMakeImageHandleResidentARB = reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTARBPROC>(GETFUNCADDR("glMakeImageHandleResidentARB"));
		this->glMakeTextureHandleNonResidentARB = reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC>(GETFUNCADDR("glMakeTextureHandleNonResidentARB"));
		this->glMakeTextureHandleResidentARB = reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTARBPROC>(GETFUNCADDR("glMakeTextureHandleResidentARB"));
		this->glProgramUniformHandleui64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC>(GETFUNCADDR("glProgramUniformHandleui64ARB"));
		this->glProgramUniformHandleui64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC>(GETFUNCADDR("glProgramUniformHandleui64vARB"));
		this->glUniformHandleui64ARB = reinterpret_cast<PFNGLUNIFORMHANDLEUI64ARBPROC>(GETFUNCADDR("glUniformHandleui64ARB"));
		this->glUniformHandleui64vARB = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VARBPROC>(GETFUNCADDR("glUniformHandleui64vARB"));
		this->glVertexAttribL1ui64ARB = reinterpret_cast<PFNGLVERTEXATTRIBL1UI64ARBPROC>(GETFUNCADDR("glVertexAttribL1ui64ARB"));
		this->glVertexAttribL1ui64vARB = reinterpret_cast<PFNGLVERTEXATTRIBL1UI64VARBPROC>(GETFUNCADDR("glVertexAttribL1ui64vARB"));

		/*
			GL_ARB_blend_func_extended
		*/
		this->glBindFragDataLocationIndexed = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONINDEXEDPROC>(GETFUNCADDR("glBindFragDataLocationIndexed"));
		this->glGetFragDataIndex = reinterpret_cast<PFNGLGETFRAGDATAINDEXPROC>(GETFUNCADDR("glGetFragDataIndex"));

		/*
			GL_ARB_buffer_storage
		*/
		this->glBufferStorage = reinterpret_cast<PFNGLBUFFERSTORAGEPROC>(GETFUNCADDR("glBufferStorage"));

		/*
			GL_ARB_cl_event
		*/
		this->glCreateSyncFromCLeventARB = reinterpret_cast<PFNGLCREATESYNCFROMCLEVENTARBPROC>(GETFUNCADDR("glCreateSyncFromCLeventARB"));

		/*
			GL_ARB_clear_buffer_object
		*/
		this->glClearBufferData = reinterpret_cast<PFNGLCLEARBUFFERDATAPROC>(GETFUNCADDR("glClearBufferData"));
		this->glClearBufferSubData = reinterpret_cast<PFNGLCLEARBUFFERSUBDATAPROC>(GETFUNCADDR("glClearBufferSubData"));
		this->glClearNamedBufferDataEXT = reinterpret_cast<PFNGLCLEARNAMEDBUFFERDATAEXTPROC>(GETFUNCADDR("glClearNamedBufferDataEXT"));
		this->glClearNamedBufferSubDataEXT = reinterpret_cast<PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC>(GETFUNCADDR("glClearNamedBufferSubDataEXT"));

		/*
			GL_ARB_clear_texture
		*/
		this->glClearTexImage = reinterpret_cast<PFNGLCLEARTEXIMAGEPROC>(GETFUNCADDR("glClearTexImage"));
		this->glClearTexSubImage = reinterpret_cast<PFNGLCLEARTEXSUBIMAGEPROC>(GETFUNCADDR("glClearTexSubImage"));

		/*
			GL_ARB_clip_control
		*/
		this->glClipControl = reinterpret_cast<PFNGLCLIPCONTROLPROC>(GETFUNCADDR("glClipControl"));

		/*
			GL_ARB_color_buffer_float
		*/
		this->glClampColorARB = reinterpret_cast<PFNGLCLAMPCOLORARBPROC>(GETFUNCADDR("glClampColorARB"));

		/*
			GL_ARB_compute_shader
		*/
		this->glDispatchCompute = reinterpret_cast<PFNGLDISPATCHCOMPUTEPROC>(GETFUNCADDR("glDispatchCompute"));
		this->glDispatchComputeIndirect = reinterpret_cast<PFNGLDISPATCHCOMPUTEINDIRECTPROC>(GETFUNCADDR("glDispatchComputeIndirect"));

		/*
			GL_ARB_compute_variable_group_size
		*/
		this->glDispatchComputeGroupSizeARB = reinterpret_cast<PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC>(GETFUNCADDR("glDispatchComputeGroupSizeARB"));

		/*
			GL_ARB_copy_buffer
		*/
		this->glCopyBufferSubData = reinterpret_cast<PFNGLCOPYBUFFERSUBDATAPROC>(GETFUNCADDR("glCopyBufferSubData"));

		/*
			GL_ARB_copy_image
		*/
		this->glCopyImageSubData = reinterpret_cast<PFNGLCOPYIMAGESUBDATAPROC>(GETFUNCADDR("glCopyImageSubData"));

		/*
			GL_ARB_debug_output
		*/
		this->glDebugMessageCallbackARB = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKARBPROC>(GETFUNCADDR("glDebugMessageCallbackARB"));
		this->glDebugMessageControlARB = reinterpret_cast<PFNGLDEBUGMESSAGECONTROLARBPROC>(GETFUNCADDR("glDebugMessageControlARB"));
		this->glDebugMessageInsertARB = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTARBPROC>(GETFUNCADDR("glDebugMessageInsertARB"));
		this->glGetDebugMessageLogARB = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGARBPROC>(GETFUNCADDR("glGetDebugMessageLogARB"));

		/*
			GL_ARB_direct_state_access
		*/
		this->glBindTextureUnit = reinterpret_cast<PFNGLBINDTEXTUREUNITPROC>(GETFUNCADDR("glBindTextureUnit"));
		this->glBlitNamedFramebuffer = reinterpret_cast<PFNGLBLITNAMEDFRAMEBUFFERPROC>(GETFUNCADDR("glBlitNamedFramebuffer"));
		this->glCheckNamedFramebufferStatus = reinterpret_cast<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC>(GETFUNCADDR("glCheckNamedFramebufferStatus"));
		this->glClearNamedBufferData = reinterpret_cast<PFNGLCLEARNAMEDBUFFERDATAPROC>(GETFUNCADDR("glClearNamedBufferData"));
		this->glClearNamedBufferSubData = reinterpret_cast<PFNGLCLEARNAMEDBUFFERSUBDATAPROC>(GETFUNCADDR("glClearNamedBufferSubData"));
		this->glClearNamedFramebufferfi = reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERFIPROC>(GETFUNCADDR("glClearNamedFramebufferfi"));
		this->glClearNamedFramebufferfv = reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERFVPROC>(GETFUNCADDR("glClearNamedFramebufferfv"));
		this->glClearNamedFramebufferiv = reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERIVPROC>(GETFUNCADDR("glClearNamedFramebufferiv"));
		this->glClearNamedFramebufferuiv = reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC>(GETFUNCADDR("glClearNamedFramebufferuiv"));
		this->glCompressedTextureSubImage1D = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC>(GETFUNCADDR("glCompressedTextureSubImage1D"));
		this->glCompressedTextureSubImage2D = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC>(GETFUNCADDR("glCompressedTextureSubImage2D"));
		this->glCompressedTextureSubImage3D = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC>(GETFUNCADDR("glCompressedTextureSubImage3D"));
		this->glCopyNamedBufferSubData = reinterpret_cast<PFNGLCOPYNAMEDBUFFERSUBDATAPROC>(GETFUNCADDR("glCopyNamedBufferSubData"));
		this->glCopyTextureSubImage1D = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE1DPROC>(GETFUNCADDR("glCopyTextureSubImage1D"));
		this->glCopyTextureSubImage2D = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE2DPROC>(GETFUNCADDR("glCopyTextureSubImage2D"));
		this->glCopyTextureSubImage3D = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE3DPROC>(GETFUNCADDR("glCopyTextureSubImage3D"));
		this->glCreateBuffers = reinterpret_cast<PFNGLCREATEBUFFERSPROC>(GETFUNCADDR("glCreateBuffers"));
		this->glCreateFramebuffers = reinterpret_cast<PFNGLCREATEFRAMEBUFFERSPROC>(GETFUNCADDR("glCreateFramebuffers"));
		this->glCreateProgramPipelines = reinterpret_cast<PFNGLCREATEPROGRAMPIPELINESPROC>(GETFUNCADDR("glCreateProgramPipelines"));
		this->glCreateQueries = reinterpret_cast<PFNGLCREATEQUERIESPROC>(GETFUNCADDR("glCreateQueries"));
		this->glCreateRenderbuffers = reinterpret_cast<PFNGLCREATERENDERBUFFERSPROC>(GETFUNCADDR("glCreateRenderbuffers"));
		this->glCreateSamplers = reinterpret_cast<PFNGLCREATESAMPLERSPROC>(GETFUNCADDR("glCreateSamplers"));
		this->glCreateTextures = reinterpret_cast<PFNGLCREATETEXTURESPROC>(GETFUNCADDR("glCreateTextures"));
		this->glCreateTransformFeedbacks = reinterpret_cast<PFNGLCREATETRANSFORMFEEDBACKSPROC>(GETFUNCADDR("glCreateTransformFeedbacks"));
		this->glCreateVertexArrays = reinterpret_cast<PFNGLCREATEVERTEXARRAYSPROC>(GETFUNCADDR("glCreateVertexArrays"));
		this->glDisableVertexArrayAttrib = reinterpret_cast<PFNGLDISABLEVERTEXARRAYATTRIBPROC>(GETFUNCADDR("glDisableVertexArrayAttrib"));
		this->glEnableVertexArrayAttrib = reinterpret_cast<PFNGLENABLEVERTEXARRAYATTRIBPROC>(GETFUNCADDR("glEnableVertexArrayAttrib"));
		this->glFlushMappedNamedBufferRange = reinterpret_cast<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC>(GETFUNCADDR("glFlushMappedNamedBufferRange"));
		this->glGenerateTextureMipmap = reinterpret_cast<PFNGLGENERATETEXTUREMIPMAPPROC>(GETFUNCADDR("glGenerateTextureMipmap"));
		this->glGetCompressedTextureImage = reinterpret_cast<PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC>(GETFUNCADDR("glGetCompressedTextureImage"));
		this->glGetNamedBufferParameteri64v = reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERI64VPROC>(GETFUNCADDR("glGetNamedBufferParameteri64v"));
		this->glGetNamedBufferParameteriv = reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetNamedBufferParameteriv"));
		this->glGetNamedBufferPointerv = reinterpret_cast<PFNGLGETNAMEDBUFFERPOINTERVPROC>(GETFUNCADDR("glGetNamedBufferPointerv"));
		this->glGetNamedBufferSubData = reinterpret_cast<PFNGLGETNAMEDBUFFERSUBDATAPROC>(GETFUNCADDR("glGetNamedBufferSubData"));
		this->glGetNamedFramebufferAttachmentParameteriv = reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(GETFUNCADDR("glGetNamedFramebufferAttachmentParameteriv"));
		this->glGetNamedFramebufferParameteriv = reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetNamedFramebufferParameteriv"));
		this->glGetNamedRenderbufferParameteriv = reinterpret_cast<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetNamedRenderbufferParameteriv"));
		this->glGetQueryBufferObjecti64v = reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTI64VPROC>(GETFUNCADDR("glGetQueryBufferObjecti64v"));
		this->glGetQueryBufferObjectiv = reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTIVPROC>(GETFUNCADDR("glGetQueryBufferObjectiv"));
		this->glGetQueryBufferObjectui64v = reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTUI64VPROC>(GETFUNCADDR("glGetQueryBufferObjectui64v"));
		this->glGetQueryBufferObjectuiv = reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTUIVPROC>(GETFUNCADDR("glGetQueryBufferObjectuiv"));
		this->glGetTextureImage = reinterpret_cast<PFNGLGETTEXTUREIMAGEPROC>(GETFUNCADDR("glGetTextureImage"));
		this->glGetTextureLevelParameterfv = reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERFVPROC>(GETFUNCADDR("glGetTextureLevelParameterfv"));
		this->glGetTextureLevelParameteriv = reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERIVPROC>(GETFUNCADDR("glGetTextureLevelParameteriv"));
		this->glGetTextureParameterIiv = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIIVPROC>(GETFUNCADDR("glGetTextureParameterIiv"));
		this->glGetTextureParameterIuiv = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIUIVPROC>(GETFUNCADDR("glGetTextureParameterIuiv"));
		this->glGetTextureParameterfv = reinterpret_cast<PFNGLGETTEXTUREPARAMETERFVPROC>(GETFUNCADDR("glGetTextureParameterfv"));
		this->glGetTextureParameteriv = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIVPROC>(GETFUNCADDR("glGetTextureParameteriv"));
		this->glGetTransformFeedbacki64_v = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKI64_VPROC>(GETFUNCADDR("glGetTransformFeedbacki64_v"));
		this->glGetTransformFeedbacki_v = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKI_VPROC>(GETFUNCADDR("glGetTransformFeedbacki_v"));
		this->glGetTransformFeedbackiv = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKIVPROC>(GETFUNCADDR("glGetTransformFeedbackiv"));
		this->glGetVertexArrayIndexed64iv = reinterpret_cast<PFNGLGETVERTEXARRAYINDEXED64IVPROC>(GETFUNCADDR("glGetVertexArrayIndexed64iv"));
		this->glGetVertexArrayIndexediv = reinterpret_cast<PFNGLGETVERTEXARRAYINDEXEDIVPROC>(GETFUNCADDR("glGetVertexArrayIndexediv"));
		this->glGetVertexArrayiv = reinterpret_cast<PFNGLGETVERTEXARRAYIVPROC>(GETFUNCADDR("glGetVertexArrayiv"));
		this->glInvalidateNamedFramebufferData = reinterpret_cast<PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC>(GETFUNCADDR("glInvalidateNamedFramebufferData"));
		this->glInvalidateNamedFramebufferSubData = reinterpret_cast<PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC>(GETFUNCADDR("glInvalidateNamedFramebufferSubData"));
		this->glMapNamedBuffer = reinterpret_cast<PFNGLMAPNAMEDBUFFERPROC>(GETFUNCADDR("glMapNamedBuffer"));
		this->glMapNamedBufferRange = reinterpret_cast<PFNGLMAPNAMEDBUFFERRANGEPROC>(GETFUNCADDR("glMapNamedBufferRange"));
		this->glNamedBufferData = reinterpret_cast<PFNGLNAMEDBUFFERDATAPROC>(GETFUNCADDR("glNamedBufferData"));
		this->glNamedBufferStorage = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEPROC>(GETFUNCADDR("glNamedBufferStorage"));
		this->glNamedBufferSubData = reinterpret_cast<PFNGLNAMEDBUFFERSUBDATAPROC>(GETFUNCADDR("glNamedBufferSubData"));
		this->glNamedFramebufferDrawBuffer = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC>(GETFUNCADDR("glNamedFramebufferDrawBuffer"));
		this->glNamedFramebufferDrawBuffers = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC>(GETFUNCADDR("glNamedFramebufferDrawBuffers"));
		this->glNamedFramebufferParameteri = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC>(GETFUNCADDR("glNamedFramebufferParameteri"));
		this->glNamedFramebufferReadBuffer = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC>(GETFUNCADDR("glNamedFramebufferReadBuffer"));
		this->glNamedFramebufferRenderbuffer = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC>(GETFUNCADDR("glNamedFramebufferRenderbuffer"));
		this->glNamedFramebufferTexture = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREPROC>(GETFUNCADDR("glNamedFramebufferTexture"));
		this->glNamedFramebufferTextureLayer = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC>(GETFUNCADDR("glNamedFramebufferTextureLayer"));
		this->glNamedRenderbufferStorage = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEPROC>(GETFUNCADDR("glNamedRenderbufferStorage"));
		this->glNamedRenderbufferStorageMultisample = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC>(GETFUNCADDR("glNamedRenderbufferStorageMultisample"));
		this->glTextureBuffer = reinterpret_cast<PFNGLTEXTUREBUFFERPROC>(GETFUNCADDR("glTextureBuffer"));
		this->glTextureBufferRange = reinterpret_cast<PFNGLTEXTUREBUFFERRANGEPROC>(GETFUNCADDR("glTextureBufferRange"));
		this->glTextureParameterIiv = reinterpret_cast<PFNGLTEXTUREPARAMETERIIVPROC>(GETFUNCADDR("glTextureParameterIiv"));
		this->glTextureParameterIuiv = reinterpret_cast<PFNGLTEXTUREPARAMETERIUIVPROC>(GETFUNCADDR("glTextureParameterIuiv"));
		this->glTextureParameterf = reinterpret_cast<PFNGLTEXTUREPARAMETERFPROC>(GETFUNCADDR("glTextureParameterf"));
		this->glTextureParameterfv = reinterpret_cast<PFNGLTEXTUREPARAMETERFVPROC>(GETFUNCADDR("glTextureParameterfv"));
		this->glTextureParameteri = reinterpret_cast<PFNGLTEXTUREPARAMETERIPROC>(GETFUNCADDR("glTextureParameteri"));
		this->glTextureParameteriv = reinterpret_cast<PFNGLTEXTUREPARAMETERIVPROC>(GETFUNCADDR("glTextureParameteriv"));
		this->glTextureStorage1D = reinterpret_cast<PFNGLTEXTURESTORAGE1DPROC>(GETFUNCADDR("glTextureStorage1D"));
		this->glTextureStorage2D = reinterpret_cast<PFNGLTEXTURESTORAGE2DPROC>(GETFUNCADDR("glTextureStorage2D"));
		this->glTextureStorage2DMultisample = reinterpret_cast<PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC>(GETFUNCADDR("glTextureStorage2DMultisample"));
		this->glTextureStorage3D = reinterpret_cast<PFNGLTEXTURESTORAGE3DPROC>(GETFUNCADDR("glTextureStorage3D"));
		this->glTextureStorage3DMultisample = reinterpret_cast<PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC>(GETFUNCADDR("glTextureStorage3DMultisample"));
		this->glTextureSubImage1D = reinterpret_cast<PFNGLTEXTURESUBIMAGE1DPROC>(GETFUNCADDR("glTextureSubImage1D"));
		this->glTextureSubImage2D = reinterpret_cast<PFNGLTEXTURESUBIMAGE2DPROC>(GETFUNCADDR("glTextureSubImage2D"));
		this->glTextureSubImage3D = reinterpret_cast<PFNGLTEXTURESUBIMAGE3DPROC>(GETFUNCADDR("glTextureSubImage3D"));
		this->glTransformFeedbackBufferBase = reinterpret_cast<PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC>(GETFUNCADDR("glTransformFeedbackBufferBase"));
		this->glTransformFeedbackBufferRange = reinterpret_cast<PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC>(GETFUNCADDR("glTransformFeedbackBufferRange"));
		this->glUnmapNamedBuffer = reinterpret_cast<PFNGLUNMAPNAMEDBUFFERPROC>(GETFUNCADDR("glUnmapNamedBuffer"));
		this->glVertexArrayAttribBinding = reinterpret_cast<PFNGLVERTEXARRAYATTRIBBINDINGPROC>(GETFUNCADDR("glVertexArrayAttribBinding"));
		this->glVertexArrayAttribFormat = reinterpret_cast<PFNGLVERTEXARRAYATTRIBFORMATPROC>(GETFUNCADDR("glVertexArrayAttribFormat"));
		this->glVertexArrayAttribIFormat = reinterpret_cast<PFNGLVERTEXARRAYATTRIBIFORMATPROC>(GETFUNCADDR("glVertexArrayAttribIFormat"));
		this->glVertexArrayAttribLFormat = reinterpret_cast<PFNGLVERTEXARRAYATTRIBLFORMATPROC>(GETFUNCADDR("glVertexArrayAttribLFormat"));
		this->glVertexArrayBindingDivisor = reinterpret_cast<PFNGLVERTEXARRAYBINDINGDIVISORPROC>(GETFUNCADDR("glVertexArrayBindingDivisor"));
		this->glVertexArrayElementBuffer = reinterpret_cast<PFNGLVERTEXARRAYELEMENTBUFFERPROC>(GETFUNCADDR("glVertexArrayElementBuffer"));
		this->glVertexArrayVertexBuffer = reinterpret_cast<PFNGLVERTEXARRAYVERTEXBUFFERPROC>(GETFUNCADDR("glVertexArrayVertexBuffer"));
		this->glVertexArrayVertexBuffers = reinterpret_cast<PFNGLVERTEXARRAYVERTEXBUFFERSPROC>(GETFUNCADDR("glVertexArrayVertexBuffers"));

		/*
			GL_ARB_draw_buffers
		*/
		this->glDrawBuffersARB = reinterpret_cast<PFNGLDRAWBUFFERSARBPROC>(GETFUNCADDR("glDrawBuffersARB"));

		/*
			GL_ARB_draw_buffers_blend
		*/
		this->glBlendEquationSeparateiARB = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIARBPROC>(GETFUNCADDR("glBlendEquationSeparateiARB"));
		this->glBlendEquationiARB = reinterpret_cast<PFNGLBLENDEQUATIONIARBPROC>(GETFUNCADDR("glBlendEquationiARB"));
		this->glBlendFuncSeparateiARB = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIARBPROC>(GETFUNCADDR("glBlendFuncSeparateiARB"));
		this->glBlendFunciARB = reinterpret_cast<PFNGLBLENDFUNCIARBPROC>(GETFUNCADDR("glBlendFunciARB"));

		/*
			GL_ARB_draw_elements_base_vertex
		*/
		this->glDrawElementsBaseVertex = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXPROC>(GETFUNCADDR("glDrawElementsBaseVertex"));
		this->glDrawElementsInstancedBaseVertex = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>(GETFUNCADDR("glDrawElementsInstancedBaseVertex"));
		this->glDrawRangeElementsBaseVertex = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>(GETFUNCADDR("glDrawRangeElementsBaseVertex"));
		this->glMultiDrawElementsBaseVertex = reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC>(GETFUNCADDR("glMultiDrawElementsBaseVertex"));

		/*
			GL_ARB_draw_indirect
		*/
		this->glDrawArraysIndirect = reinterpret_cast<PFNGLDRAWARRAYSINDIRECTPROC>(GETFUNCADDR("glDrawArraysIndirect"));
		this->glDrawElementsIndirect = reinterpret_cast<PFNGLDRAWELEMENTSINDIRECTPROC>(GETFUNCADDR("glDrawElementsIndirect"));

		/*
			GL_ARB_framebuffer_no_attachments
		*/
		this->glFramebufferParameteri = reinterpret_cast<PFNGLFRAMEBUFFERPARAMETERIPROC>(GETFUNCADDR("glFramebufferParameteri"));
		this->glGetFramebufferParameteriv = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetFramebufferParameteriv"));
		this->glGetNamedFramebufferParameterivEXT = reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC>(GETFUNCADDR("glGetNamedFramebufferParameterivEXT"));
		this->glNamedFramebufferParameteriEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC>(GETFUNCADDR("glNamedFramebufferParameteriEXT"));

		/*
			GL_ARB_framebuffer_object
		*/
		this->glBindFramebuffer = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(GETFUNCADDR("glBindFramebuffer"));
		this->glBindRenderbuffer = reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(GETFUNCADDR("glBindRenderbuffer"));
		this->glBlitFramebuffer = reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(GETFUNCADDR("glBlitFramebuffer"));
		this->glCheckFramebufferStatus = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(GETFUNCADDR("glCheckFramebufferStatus"));
		this->glDeleteFramebuffers = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(GETFUNCADDR("glDeleteFramebuffers"));
		this->glDeleteRenderbuffers = reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(GETFUNCADDR("glDeleteRenderbuffers"));
		this->glFramebufferRenderbuffer = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(GETFUNCADDR("glFramebufferRenderbuffer"));
		this->glFramebufferTexture1D = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE1DPROC>(GETFUNCADDR("glFramebufferTexture1D"));
		this->glFramebufferTexture2D = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(GETFUNCADDR("glFramebufferTexture2D"));
		this->glFramebufferTexture3D = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DPROC>(GETFUNCADDR("glFramebufferTexture3D"));
		this->glFramebufferTextureLayer = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC>(GETFUNCADDR("glFramebufferTextureLayer"));
		this->glGenFramebuffers = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(GETFUNCADDR("glGenFramebuffers"));
		this->glGenRenderbuffers = reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(GETFUNCADDR("glGenRenderbuffers"));
		this->glGenerateMipmap = reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(GETFUNCADDR("glGenerateMipmap"));
		this->glGetFramebufferAttachmentParameteriv = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(GETFUNCADDR("glGetFramebufferAttachmentParameteriv"));
		this->glGetRenderbufferParameteriv = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(GETFUNCADDR("glGetRenderbufferParameteriv"));
		this->glIsFramebuffer = reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(GETFUNCADDR("glIsFramebuffer"));
		this->glIsRenderbuffer = reinterpret_cast<PFNGLISRENDERBUFFERPROC>(GETFUNCADDR("glIsRenderbuffer"));
		this->glRenderbufferStorage = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(GETFUNCADDR("glRenderbufferStorage"));
		this->glRenderbufferStorageMultisample = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>(GETFUNCADDR("glRenderbufferStorageMultisample"));

		/*
			GL_ARB_geometry_shader4
		*/
		this->glFramebufferTextureARB = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREARBPROC>(GETFUNCADDR("glFramebufferTextureARB"));
		this->glFramebufferTextureFaceARB = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREFACEARBPROC>(GETFUNCADDR("glFramebufferTextureFaceARB"));
		this->glFramebufferTextureLayerARB = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERARBPROC>(GETFUNCADDR("glFramebufferTextureLayerARB"));
		this->glProgramParameteriARB = reinterpret_cast<PFNGLPROGRAMPARAMETERIARBPROC>(GETFUNCADDR("glProgramParameteriARB"));

		/*
			GL_ARB_get_program_binary
		*/
		this->glGetProgramBinary = reinterpret_cast<PFNGLGETPROGRAMBINARYPROC>(GETFUNCADDR("glGetProgramBinary"));
		this->glProgramBinary = reinterpret_cast<PFNGLPROGRAMBINARYPROC>(GETFUNCADDR("glProgramBinary"));
		this->glProgramParameteri = reinterpret_cast<PFNGLPROGRAMPARAMETERIPROC>(GETFUNCADDR("glProgramParameteri"));

		/*
			GL_ARB_get_texture_sub_image
		*/
		this->glGetCompressedTextureSubImage = reinterpret_cast<PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC>(GETFUNCADDR("glGetCompressedTextureSubImage"));
		this->glGetTextureSubImage = reinterpret_cast<PFNGLGETTEXTURESUBIMAGEPROC>(GETFUNCADDR("glGetTextureSubImage"));

		/*
			GL_ARB_gl_spirv
		*/
		this->glSpecializeShaderARB = reinterpret_cast<PFNGLSPECIALIZESHADERARBPROC>(GETFUNCADDR("glSpecializeShaderARB"));

		/*
			GL_ARB_gpu_shader_fp64
		*/
		this->glGetUniformdv = reinterpret_cast<PFNGLGETUNIFORMDVPROC>(GETFUNCADDR("glGetUniformdv"));
		this->glUniform1d = reinterpret_cast<PFNGLUNIFORM1DPROC>(GETFUNCADDR("glUniform1d"));
		this->glUniform1dv = reinterpret_cast<PFNGLUNIFORM1DVPROC>(GETFUNCADDR("glUniform1dv"));
		this->glUniform2d = reinterpret_cast<PFNGLUNIFORM2DPROC>(GETFUNCADDR("glUniform2d"));
		this->glUniform2dv = reinterpret_cast<PFNGLUNIFORM2DVPROC>(GETFUNCADDR("glUniform2dv"));
		this->glUniform3d = reinterpret_cast<PFNGLUNIFORM3DPROC>(GETFUNCADDR("glUniform3d"));
		this->glUniform3dv = reinterpret_cast<PFNGLUNIFORM3DVPROC>(GETFUNCADDR("glUniform3dv"));
		this->glUniform4d = reinterpret_cast<PFNGLUNIFORM4DPROC>(GETFUNCADDR("glUniform4d"));
		this->glUniform4dv = reinterpret_cast<PFNGLUNIFORM4DVPROC>(GETFUNCADDR("glUniform4dv"));
		this->glUniformMatrix2dv = reinterpret_cast<PFNGLUNIFORMMATRIX2DVPROC>(GETFUNCADDR("glUniformMatrix2dv"));
		this->glUniformMatrix2x3dv = reinterpret_cast<PFNGLUNIFORMMATRIX2X3DVPROC>(GETFUNCADDR("glUniformMatrix2x3dv"));
		this->glUniformMatrix2x4dv = reinterpret_cast<PFNGLUNIFORMMATRIX2X4DVPROC>(GETFUNCADDR("glUniformMatrix2x4dv"));
		this->glUniformMatrix3dv = reinterpret_cast<PFNGLUNIFORMMATRIX3DVPROC>(GETFUNCADDR("glUniformMatrix3dv"));
		this->glUniformMatrix3x2dv = reinterpret_cast<PFNGLUNIFORMMATRIX3X2DVPROC>(GETFUNCADDR("glUniformMatrix3x2dv"));
		this->glUniformMatrix3x4dv = reinterpret_cast<PFNGLUNIFORMMATRIX3X4DVPROC>(GETFUNCADDR("glUniformMatrix3x4dv"));
		this->glUniformMatrix4dv = reinterpret_cast<PFNGLUNIFORMMATRIX4DVPROC>(GETFUNCADDR("glUniformMatrix4dv"));
		this->glUniformMatrix4x2dv = reinterpret_cast<PFNGLUNIFORMMATRIX4X2DVPROC>(GETFUNCADDR("glUniformMatrix4x2dv"));
		this->glUniformMatrix4x3dv = reinterpret_cast<PFNGLUNIFORMMATRIX4X3DVPROC>(GETFUNCADDR("glUniformMatrix4x3dv"));

		/*
			GL_ARB_gpu_shader_int64
		*/
		this->glGetUniformi64vARB = reinterpret_cast<PFNGLGETUNIFORMI64VARBPROC>(GETFUNCADDR("glGetUniformi64vARB"));
		this->glGetUniformui64vARB = reinterpret_cast<PFNGLGETUNIFORMUI64VARBPROC>(GETFUNCADDR("glGetUniformui64vARB"));
		this->glGetnUniformi64vARB = reinterpret_cast<PFNGLGETNUNIFORMI64VARBPROC>(GETFUNCADDR("glGetnUniformi64vARB"));
		this->glGetnUniformui64vARB = reinterpret_cast<PFNGLGETNUNIFORMUI64VARBPROC>(GETFUNCADDR("glGetnUniformui64vARB"));
		this->glProgramUniform1i64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64ARBPROC>(GETFUNCADDR("glProgramUniform1i64ARB"));
		this->glProgramUniform1i64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VARBPROC>(GETFUNCADDR("glProgramUniform1i64vARB"));
		this->glProgramUniform1ui64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64ARBPROC>(GETFUNCADDR("glProgramUniform1ui64ARB"));
		this->glProgramUniform1ui64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VARBPROC>(GETFUNCADDR("glProgramUniform1ui64vARB"));
		this->glProgramUniform2i64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64ARBPROC>(GETFUNCADDR("glProgramUniform2i64ARB"));
		this->glProgramUniform2i64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VARBPROC>(GETFUNCADDR("glProgramUniform2i64vARB"));
		this->glProgramUniform2ui64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64ARBPROC>(GETFUNCADDR("glProgramUniform2ui64ARB"));
		this->glProgramUniform2ui64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VARBPROC>(GETFUNCADDR("glProgramUniform2ui64vARB"));
		this->glProgramUniform3i64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64ARBPROC>(GETFUNCADDR("glProgramUniform3i64ARB"));
		this->glProgramUniform3i64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VARBPROC>(GETFUNCADDR("glProgramUniform3i64vARB"));
		this->glProgramUniform3ui64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64ARBPROC>(GETFUNCADDR("glProgramUniform3ui64ARB"));
		this->glProgramUniform3ui64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VARBPROC>(GETFUNCADDR("glProgramUniform3ui64vARB"));
		this->glProgramUniform4i64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64ARBPROC>(GETFUNCADDR("glProgramUniform4i64ARB"));
		this->glProgramUniform4i64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VARBPROC>(GETFUNCADDR("glProgramUniform4i64vARB"));
		this->glProgramUniform4ui64ARB = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64ARBPROC>(GETFUNCADDR("glProgramUniform4ui64ARB"));
		this->glProgramUniform4ui64vARB = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VARBPROC>(GETFUNCADDR("glProgramUniform4ui64vARB"));
		this->glUniform1i64ARB = reinterpret_cast<PFNGLUNIFORM1I64ARBPROC>(GETFUNCADDR("glUniform1i64ARB"));
		this->glUniform1i64vARB = reinterpret_cast<PFNGLUNIFORM1I64VARBPROC>(GETFUNCADDR("glUniform1i64vARB"));
		this->glUniform1ui64ARB = reinterpret_cast<PFNGLUNIFORM1UI64ARBPROC>(GETFUNCADDR("glUniform1ui64ARB"));
		this->glUniform1ui64vARB = reinterpret_cast<PFNGLUNIFORM1UI64VARBPROC>(GETFUNCADDR("glUniform1ui64vARB"));
		this->glUniform2i64ARB = reinterpret_cast<PFNGLUNIFORM2I64ARBPROC>(GETFUNCADDR("glUniform2i64ARB"));
		this->glUniform2i64vARB = reinterpret_cast<PFNGLUNIFORM2I64VARBPROC>(GETFUNCADDR("glUniform2i64vARB"));
		this->glUniform2ui64ARB = reinterpret_cast<PFNGLUNIFORM2UI64ARBPROC>(GETFUNCADDR("glUniform2ui64ARB"));
		this->glUniform2ui64vARB = reinterpret_cast<PFNGLUNIFORM2UI64VARBPROC>(GETFUNCADDR("glUniform2ui64vARB"));
		this->glUniform3i64ARB = reinterpret_cast<PFNGLUNIFORM3I64ARBPROC>(GETFUNCADDR("glUniform3i64ARB"));
		this->glUniform3i64vARB = reinterpret_cast<PFNGLUNIFORM3I64VARBPROC>(GETFUNCADDR("glUniform3i64vARB"));
		this->glUniform3ui64ARB = reinterpret_cast<PFNGLUNIFORM3UI64ARBPROC>(GETFUNCADDR("glUniform3ui64ARB"));
		this->glUniform3ui64vARB = reinterpret_cast<PFNGLUNIFORM3UI64VARBPROC>(GETFUNCADDR("glUniform3ui64vARB"));
		this->glUniform4i64ARB = reinterpret_cast<PFNGLUNIFORM4I64ARBPROC>(GETFUNCADDR("glUniform4i64ARB"));
		this->glUniform4i64vARB = reinterpret_cast<PFNGLUNIFORM4I64VARBPROC>(GETFUNCADDR("glUniform4i64vARB"));
		this->glUniform4ui64ARB = reinterpret_cast<PFNGLUNIFORM4UI64ARBPROC>(GETFUNCADDR("glUniform4ui64ARB"));
		this->glUniform4ui64vARB = reinterpret_cast<PFNGLUNIFORM4UI64VARBPROC>(GETFUNCADDR("glUniform4ui64vARB"));

		/*
			GL_ARB_imaging
		*/
		this->glColorSubTable = reinterpret_cast<PFNGLCOLORSUBTABLEPROC>(GETFUNCADDR("glColorSubTable"));
		this->glColorTable = reinterpret_cast<PFNGLCOLORTABLEPROC>(GETFUNCADDR("glColorTable"));
		this->glColorTableParameterfv = reinterpret_cast<PFNGLCOLORTABLEPARAMETERFVPROC>(GETFUNCADDR("glColorTableParameterfv"));
		this->glColorTableParameteriv = reinterpret_cast<PFNGLCOLORTABLEPARAMETERIVPROC>(GETFUNCADDR("glColorTableParameteriv"));
		this->glConvolutionFilter1D = reinterpret_cast<PFNGLCONVOLUTIONFILTER1DPROC>(GETFUNCADDR("glConvolutionFilter1D"));
		this->glConvolutionFilter2D = reinterpret_cast<PFNGLCONVOLUTIONFILTER2DPROC>(GETFUNCADDR("glConvolutionFilter2D"));
		this->glConvolutionParameterf = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFPROC>(GETFUNCADDR("glConvolutionParameterf"));
		this->glConvolutionParameterfv = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFVPROC>(GETFUNCADDR("glConvolutionParameterfv"));
		this->glConvolutionParameteri = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIPROC>(GETFUNCADDR("glConvolutionParameteri"));
		this->glConvolutionParameteriv = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIVPROC>(GETFUNCADDR("glConvolutionParameteriv"));
		this->glCopyColorSubTable = reinterpret_cast<PFNGLCOPYCOLORSUBTABLEPROC>(GETFUNCADDR("glCopyColorSubTable"));
		this->glCopyColorTable = reinterpret_cast<PFNGLCOPYCOLORTABLEPROC>(GETFUNCADDR("glCopyColorTable"));
		this->glCopyConvolutionFilter1D = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER1DPROC>(GETFUNCADDR("glCopyConvolutionFilter1D"));
		this->glCopyConvolutionFilter2D = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER2DPROC>(GETFUNCADDR("glCopyConvolutionFilter2D"));
		this->glGetColorTable = reinterpret_cast<PFNGLGETCOLORTABLEPROC>(GETFUNCADDR("glGetColorTable"));
		this->glGetColorTableParameterfv = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVPROC>(GETFUNCADDR("glGetColorTableParameterfv"));
		this->glGetColorTableParameteriv = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVPROC>(GETFUNCADDR("glGetColorTableParameteriv"));
		this->glGetConvolutionFilter = reinterpret_cast<PFNGLGETCONVOLUTIONFILTERPROC>(GETFUNCADDR("glGetConvolutionFilter"));
		this->glGetConvolutionParameterfv = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERFVPROC>(GETFUNCADDR("glGetConvolutionParameterfv"));
		this->glGetConvolutionParameteriv = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERIVPROC>(GETFUNCADDR("glGetConvolutionParameteriv"));
		this->glGetHistogram = reinterpret_cast<PFNGLGETHISTOGRAMPROC>(GETFUNCADDR("glGetHistogram"));
		this->glGetHistogramParameterfv = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERFVPROC>(GETFUNCADDR("glGetHistogramParameterfv"));
		this->glGetHistogramParameteriv = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERIVPROC>(GETFUNCADDR("glGetHistogramParameteriv"));
		this->glGetMinmax = reinterpret_cast<PFNGLGETMINMAXPROC>(GETFUNCADDR("glGetMinmax"));
		this->glGetMinmaxParameterfv = reinterpret_cast<PFNGLGETMINMAXPARAMETERFVPROC>(GETFUNCADDR("glGetMinmaxParameterfv"));
		this->glGetMinmaxParameteriv = reinterpret_cast<PFNGLGETMINMAXPARAMETERIVPROC>(GETFUNCADDR("glGetMinmaxParameteriv"));
		this->glGetSeparableFilter = reinterpret_cast<PFNGLGETSEPARABLEFILTERPROC>(GETFUNCADDR("glGetSeparableFilter"));
		this->glHistogram = reinterpret_cast<PFNGLHISTOGRAMPROC>(GETFUNCADDR("glHistogram"));
		this->glMinmax = reinterpret_cast<PFNGLMINMAXPROC>(GETFUNCADDR("glMinmax"));
		this->glResetHistogram = reinterpret_cast<PFNGLRESETHISTOGRAMPROC>(GETFUNCADDR("glResetHistogram"));
		this->glResetMinmax = reinterpret_cast<PFNGLRESETMINMAXPROC>(GETFUNCADDR("glResetMinmax"));
		this->glSeparableFilter2D = reinterpret_cast<PFNGLSEPARABLEFILTER2DPROC>(GETFUNCADDR("glSeparableFilter2D"));

		/*
			GL_ARB_indirect_parameters
		*/
		this->glMultiDrawArraysIndirectCountARB = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC>(GETFUNCADDR("glMultiDrawArraysIndirectCountARB"));
		this->glMultiDrawElementsIndirectCountARB = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC>(GETFUNCADDR("glMultiDrawElementsIndirectCountARB"));

		/*
			GL_ARB_instanced_arrays
		*/
		this->glDrawArraysInstancedARB = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDARBPROC>(GETFUNCADDR("glDrawArraysInstancedARB"));
		this->glDrawElementsInstancedARB = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDARBPROC>(GETFUNCADDR("glDrawElementsInstancedARB"));
		this->glVertexAttribDivisorARB = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORARBPROC>(GETFUNCADDR("glVertexAttribDivisorARB"));

		/*
			GL_ARB_internalformat_query
		*/
		this->glGetInternalformativ = reinterpret_cast<PFNGLGETINTERNALFORMATIVPROC>(GETFUNCADDR("glGetInternalformativ"));

		/*
			GL_ARB_internalformat_query2
		*/
		this->glGetInternalformati64v = reinterpret_cast<PFNGLGETINTERNALFORMATI64VPROC>(GETFUNCADDR("glGetInternalformati64v"));

		/*
			GL_ARB_invalidate_subdata
		*/
		this->glInvalidateBufferData = reinterpret_cast<PFNGLINVALIDATEBUFFERDATAPROC>(GETFUNCADDR("glInvalidateBufferData"));
		this->glInvalidateBufferSubData = reinterpret_cast<PFNGLINVALIDATEBUFFERSUBDATAPROC>(GETFUNCADDR("glInvalidateBufferSubData"));
		this->glInvalidateFramebuffer = reinterpret_cast<PFNGLINVALIDATEFRAMEBUFFERPROC>(GETFUNCADDR("glInvalidateFramebuffer"));
		this->glInvalidateSubFramebuffer = reinterpret_cast<PFNGLINVALIDATESUBFRAMEBUFFERPROC>(GETFUNCADDR("glInvalidateSubFramebuffer"));
		this->glInvalidateTexImage = reinterpret_cast<PFNGLINVALIDATETEXIMAGEPROC>(GETFUNCADDR("glInvalidateTexImage"));
		this->glInvalidateTexSubImage = reinterpret_cast<PFNGLINVALIDATETEXSUBIMAGEPROC>(GETFUNCADDR("glInvalidateTexSubImage"));

		/*
			GL_ARB_map_buffer_range
		*/
		this->glFlushMappedBufferRange = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>(GETFUNCADDR("glFlushMappedBufferRange"));
		this->glMapBufferRange = reinterpret_cast<PFNGLMAPBUFFERRANGEPROC>(GETFUNCADDR("glMapBufferRange"));

		/*
			GL_ARB_matrix_palette
		*/
		this->glCurrentPaletteMatrixARB = reinterpret_cast<PFNGLCURRENTPALETTEMATRIXARBPROC>(GETFUNCADDR("glCurrentPaletteMatrixARB"));
		this->glMatrixIndexPointerARB = reinterpret_cast<PFNGLMATRIXINDEXPOINTERARBPROC>(GETFUNCADDR("glMatrixIndexPointerARB"));
		this->glMatrixIndexubvARB = reinterpret_cast<PFNGLMATRIXINDEXUBVARBPROC>(GETFUNCADDR("glMatrixIndexubvARB"));
		this->glMatrixIndexuivARB = reinterpret_cast<PFNGLMATRIXINDEXUIVARBPROC>(GETFUNCADDR("glMatrixIndexuivARB"));
		this->glMatrixIndexusvARB = reinterpret_cast<PFNGLMATRIXINDEXUSVARBPROC>(GETFUNCADDR("glMatrixIndexusvARB"));

		/*
			GL_ARB_multi_bind
		*/
		this->glBindBuffersBase = reinterpret_cast<PFNGLBINDBUFFERSBASEPROC>(GETFUNCADDR("glBindBuffersBase"));
		this->glBindBuffersRange = reinterpret_cast<PFNGLBINDBUFFERSRANGEPROC>(GETFUNCADDR("glBindBuffersRange"));
		this->glBindImageTextures = reinterpret_cast<PFNGLBINDIMAGETEXTURESPROC>(GETFUNCADDR("glBindImageTextures"));
		this->glBindSamplers = reinterpret_cast<PFNGLBINDSAMPLERSPROC>(GETFUNCADDR("glBindSamplers"));
		this->glBindTextures = reinterpret_cast<PFNGLBINDTEXTURESPROC>(GETFUNCADDR("glBindTextures"));
		this->glBindVertexBuffers = reinterpret_cast<PFNGLBINDVERTEXBUFFERSPROC>(GETFUNCADDR("glBindVertexBuffers"));

		/*
			GL_ARB_multi_draw_indirect
		*/
		this->glMultiDrawArraysIndirect = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTPROC>(GETFUNCADDR("glMultiDrawArraysIndirect"));
		this->glMultiDrawElementsIndirect = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTPROC>(GETFUNCADDR("glMultiDrawElementsIndirect"));

		/*
			GL_ARB_multisample
		*/
		this->glSampleCoverageARB = reinterpret_cast<PFNGLSAMPLECOVERAGEARBPROC>(GETFUNCADDR("glSampleCoverageARB"));

		/*
			GL_ARB_multitexture
		*/
		this->glActiveTextureARB = reinterpret_cast<PFNGLACTIVETEXTUREARBPROC>(GETFUNCADDR("glActiveTextureARB"));
		this->glClientActiveTextureARB = reinterpret_cast<PFNGLCLIENTACTIVETEXTUREARBPROC>(GETFUNCADDR("glClientActiveTextureARB"));
		this->glMultiTexCoord1dARB = reinterpret_cast<PFNGLMULTITEXCOORD1DARBPROC>(GETFUNCADDR("glMultiTexCoord1dARB"));
		this->glMultiTexCoord1dvARB = reinterpret_cast<PFNGLMULTITEXCOORD1DVARBPROC>(GETFUNCADDR("glMultiTexCoord1dvARB"));
		this->glMultiTexCoord1fARB = reinterpret_cast<PFNGLMULTITEXCOORD1FARBPROC>(GETFUNCADDR("glMultiTexCoord1fARB"));
		this->glMultiTexCoord1fvARB = reinterpret_cast<PFNGLMULTITEXCOORD1FVARBPROC>(GETFUNCADDR("glMultiTexCoord1fvARB"));
		this->glMultiTexCoord1iARB = reinterpret_cast<PFNGLMULTITEXCOORD1IARBPROC>(GETFUNCADDR("glMultiTexCoord1iARB"));
		this->glMultiTexCoord1ivARB = reinterpret_cast<PFNGLMULTITEXCOORD1IVARBPROC>(GETFUNCADDR("glMultiTexCoord1ivARB"));
		this->glMultiTexCoord1sARB = reinterpret_cast<PFNGLMULTITEXCOORD1SARBPROC>(GETFUNCADDR("glMultiTexCoord1sARB"));
		this->glMultiTexCoord1svARB = reinterpret_cast<PFNGLMULTITEXCOORD1SVARBPROC>(GETFUNCADDR("glMultiTexCoord1svARB"));
		this->glMultiTexCoord2dARB = reinterpret_cast<PFNGLMULTITEXCOORD2DARBPROC>(GETFUNCADDR("glMultiTexCoord2dARB"));
		this->glMultiTexCoord2dvARB = reinterpret_cast<PFNGLMULTITEXCOORD2DVARBPROC>(GETFUNCADDR("glMultiTexCoord2dvARB"));
		this->glMultiTexCoord2fARB = reinterpret_cast<PFNGLMULTITEXCOORD2FARBPROC>(GETFUNCADDR("glMultiTexCoord2fARB"));
		this->glMultiTexCoord2fvARB = reinterpret_cast<PFNGLMULTITEXCOORD2FVARBPROC>(GETFUNCADDR("glMultiTexCoord2fvARB"));
		this->glMultiTexCoord2iARB = reinterpret_cast<PFNGLMULTITEXCOORD2IARBPROC>(GETFUNCADDR("glMultiTexCoord2iARB"));
		this->glMultiTexCoord2ivARB = reinterpret_cast<PFNGLMULTITEXCOORD2IVARBPROC>(GETFUNCADDR("glMultiTexCoord2ivARB"));
		this->glMultiTexCoord2sARB = reinterpret_cast<PFNGLMULTITEXCOORD2SARBPROC>(GETFUNCADDR("glMultiTexCoord2sARB"));
		this->glMultiTexCoord2svARB = reinterpret_cast<PFNGLMULTITEXCOORD2SVARBPROC>(GETFUNCADDR("glMultiTexCoord2svARB"));
		this->glMultiTexCoord3dARB = reinterpret_cast<PFNGLMULTITEXCOORD3DARBPROC>(GETFUNCADDR("glMultiTexCoord3dARB"));
		this->glMultiTexCoord3dvARB = reinterpret_cast<PFNGLMULTITEXCOORD3DVARBPROC>(GETFUNCADDR("glMultiTexCoord3dvARB"));
		this->glMultiTexCoord3fARB = reinterpret_cast<PFNGLMULTITEXCOORD3FARBPROC>(GETFUNCADDR("glMultiTexCoord3fARB"));
		this->glMultiTexCoord3fvARB = reinterpret_cast<PFNGLMULTITEXCOORD3FVARBPROC>(GETFUNCADDR("glMultiTexCoord3fvARB"));
		this->glMultiTexCoord3iARB = reinterpret_cast<PFNGLMULTITEXCOORD3IARBPROC>(GETFUNCADDR("glMultiTexCoord3iARB"));
		this->glMultiTexCoord3ivARB = reinterpret_cast<PFNGLMULTITEXCOORD3IVARBPROC>(GETFUNCADDR("glMultiTexCoord3ivARB"));
		this->glMultiTexCoord3sARB = reinterpret_cast<PFNGLMULTITEXCOORD3SARBPROC>(GETFUNCADDR("glMultiTexCoord3sARB"));
		this->glMultiTexCoord3svARB = reinterpret_cast<PFNGLMULTITEXCOORD3SVARBPROC>(GETFUNCADDR("glMultiTexCoord3svARB"));
		this->glMultiTexCoord4dARB = reinterpret_cast<PFNGLMULTITEXCOORD4DARBPROC>(GETFUNCADDR("glMultiTexCoord4dARB"));
		this->glMultiTexCoord4dvARB = reinterpret_cast<PFNGLMULTITEXCOORD4DVARBPROC>(GETFUNCADDR("glMultiTexCoord4dvARB"));
		this->glMultiTexCoord4fARB = reinterpret_cast<PFNGLMULTITEXCOORD4FARBPROC>(GETFUNCADDR("glMultiTexCoord4fARB"));
		this->glMultiTexCoord4fvARB = reinterpret_cast<PFNGLMULTITEXCOORD4FVARBPROC>(GETFUNCADDR("glMultiTexCoord4fvARB"));
		this->glMultiTexCoord4iARB = reinterpret_cast<PFNGLMULTITEXCOORD4IARBPROC>(GETFUNCADDR("glMultiTexCoord4iARB"));
		this->glMultiTexCoord4ivARB = reinterpret_cast<PFNGLMULTITEXCOORD4IVARBPROC>(GETFUNCADDR("glMultiTexCoord4ivARB"));
		this->glMultiTexCoord4sARB = reinterpret_cast<PFNGLMULTITEXCOORD4SARBPROC>(GETFUNCADDR("glMultiTexCoord4sARB"));
		this->glMultiTexCoord4svARB = reinterpret_cast<PFNGLMULTITEXCOORD4SVARBPROC>(GETFUNCADDR("glMultiTexCoord4svARB"));

		/*
			GL_ARB_occlusion_query
		*/
		this->glBeginQueryARB = reinterpret_cast<PFNGLBEGINQUERYARBPROC>(GETFUNCADDR("glBeginQueryARB"));
		this->glDeleteQueriesARB = reinterpret_cast<PFNGLDELETEQUERIESARBPROC>(GETFUNCADDR("glDeleteQueriesARB"));
		this->glEndQueryARB = reinterpret_cast<PFNGLENDQUERYARBPROC>(GETFUNCADDR("glEndQueryARB"));
		this->glGenQueriesARB = reinterpret_cast<PFNGLGENQUERIESARBPROC>(GETFUNCADDR("glGenQueriesARB"));
		this->glGetQueryObjectivARB = reinterpret_cast<PFNGLGETQUERYOBJECTIVARBPROC>(GETFUNCADDR("glGetQueryObjectivARB"));
		this->glGetQueryObjectuivARB = reinterpret_cast<PFNGLGETQUERYOBJECTUIVARBPROC>(GETFUNCADDR("glGetQueryObjectuivARB"));
		this->glGetQueryivARB = reinterpret_cast<PFNGLGETQUERYIVARBPROC>(GETFUNCADDR("glGetQueryivARB"));
		this->glIsQueryARB = reinterpret_cast<PFNGLISQUERYARBPROC>(GETFUNCADDR("glIsQueryARB"));

		/*
			GL_ARB_parallel_shader_compile
		*/
		this->glMaxShaderCompilerThreadsARB = reinterpret_cast<PFNGLMAXSHADERCOMPILERTHREADSARBPROC>(GETFUNCADDR("glMaxShaderCompilerThreadsARB"));

		/*
			GL_ARB_point_parameters
		*/
		this->glPointParameterfARB = reinterpret_cast<PFNGLPOINTPARAMETERFARBPROC>(GETFUNCADDR("glPointParameterfARB"));
		this->glPointParameterfvARB = reinterpret_cast<PFNGLPOINTPARAMETERFVARBPROC>(GETFUNCADDR("glPointParameterfvARB"));

		/*
			GL_ARB_polygon_offset_clamp
		*/
		this->glPolygonOffsetClamp = reinterpret_cast<PFNGLPOLYGONOFFSETCLAMPPROC>(GETFUNCADDR("glPolygonOffsetClamp"));

		/*
			GL_ARB_program_interface_query
		*/
		this->glGetProgramInterfaceiv = reinterpret_cast<PFNGLGETPROGRAMINTERFACEIVPROC>(GETFUNCADDR("glGetProgramInterfaceiv"));
		this->glGetProgramResourceIndex = reinterpret_cast<PFNGLGETPROGRAMRESOURCEINDEXPROC>(GETFUNCADDR("glGetProgramResourceIndex"));
		this->glGetProgramResourceLocation = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONPROC>(GETFUNCADDR("glGetProgramResourceLocation"));
		this->glGetProgramResourceLocationIndex = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC>(GETFUNCADDR("glGetProgramResourceLocationIndex"));
		this->glGetProgramResourceName = reinterpret_cast<PFNGLGETPROGRAMRESOURCENAMEPROC>(GETFUNCADDR("glGetProgramResourceName"));
		this->glGetProgramResourceiv = reinterpret_cast<PFNGLGETPROGRAMRESOURCEIVPROC>(GETFUNCADDR("glGetProgramResourceiv"));

		/*
			GL_ARB_provoking_vertex
		*/
		this->glProvokingVertex = reinterpret_cast<PFNGLPROVOKINGVERTEXPROC>(GETFUNCADDR("glProvokingVertex"));

		/*
			GL_ARB_robustness
		*/
		this->glGetGraphicsResetStatusARB = reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSARBPROC>(GETFUNCADDR("glGetGraphicsResetStatusARB"));
		this->glGetnColorTableARB = reinterpret_cast<PFNGLGETNCOLORTABLEARBPROC>(GETFUNCADDR("glGetnColorTableARB"));
		this->glGetnCompressedTexImageARB = reinterpret_cast<PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC>(GETFUNCADDR("glGetnCompressedTexImageARB"));
		this->glGetnConvolutionFilterARB = reinterpret_cast<PFNGLGETNCONVOLUTIONFILTERARBPROC>(GETFUNCADDR("glGetnConvolutionFilterARB"));
		this->glGetnHistogramARB = reinterpret_cast<PFNGLGETNHISTOGRAMARBPROC>(GETFUNCADDR("glGetnHistogramARB"));
		this->glGetnMapdvARB = reinterpret_cast<PFNGLGETNMAPDVARBPROC>(GETFUNCADDR("glGetnMapdvARB"));
		this->glGetnMapfvARB = reinterpret_cast<PFNGLGETNMAPFVARBPROC>(GETFUNCADDR("glGetnMapfvARB"));
		this->glGetnMapivARB = reinterpret_cast<PFNGLGETNMAPIVARBPROC>(GETFUNCADDR("glGetnMapivARB"));
		this->glGetnMinmaxARB = reinterpret_cast<PFNGLGETNMINMAXARBPROC>(GETFUNCADDR("glGetnMinmaxARB"));
		this->glGetnPixelMapfvARB = reinterpret_cast<PFNGLGETNPIXELMAPFVARBPROC>(GETFUNCADDR("glGetnPixelMapfvARB"));
		this->glGetnPixelMapuivARB = reinterpret_cast<PFNGLGETNPIXELMAPUIVARBPROC>(GETFUNCADDR("glGetnPixelMapuivARB"));
		this->glGetnPixelMapusvARB = reinterpret_cast<PFNGLGETNPIXELMAPUSVARBPROC>(GETFUNCADDR("glGetnPixelMapusvARB"));
		this->glGetnPolygonStippleARB = reinterpret_cast<PFNGLGETNPOLYGONSTIPPLEARBPROC>(GETFUNCADDR("glGetnPolygonStippleARB"));
		this->glGetnSeparableFilterARB = reinterpret_cast<PFNGLGETNSEPARABLEFILTERARBPROC>(GETFUNCADDR("glGetnSeparableFilterARB"));
		this->glGetnTexImageARB = reinterpret_cast<PFNGLGETNTEXIMAGEARBPROC>(GETFUNCADDR("glGetnTexImageARB"));
		this->glGetnUniformdvARB = reinterpret_cast<PFNGLGETNUNIFORMDVARBPROC>(GETFUNCADDR("glGetnUniformdvARB"));
		this->glGetnUniformfvARB = reinterpret_cast<PFNGLGETNUNIFORMFVARBPROC>(GETFUNCADDR("glGetnUniformfvARB"));
		this->glGetnUniformivARB = reinterpret_cast<PFNGLGETNUNIFORMIVARBPROC>(GETFUNCADDR("glGetnUniformivARB"));
		this->glGetnUniformuivARB = reinterpret_cast<PFNGLGETNUNIFORMUIVARBPROC>(GETFUNCADDR("glGetnUniformuivARB"));
		this->glReadnPixelsARB = reinterpret_cast<PFNGLREADNPIXELSARBPROC>(GETFUNCADDR("glReadnPixelsARB"));

		/*
			GL_ARB_sample_locations
		*/
		this->glFramebufferSampleLocationsfvARB = reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC>(GETFUNCADDR("glFramebufferSampleLocationsfvARB"));
		this->glNamedFramebufferSampleLocationsfvARB = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC>(GETFUNCADDR("glNamedFramebufferSampleLocationsfvARB"));

		/*
			GL_ARB_sample_shading
		*/
		this->glMinSampleShadingARB = reinterpret_cast<PFNGLMINSAMPLESHADINGARBPROC>(GETFUNCADDR("glMinSampleShadingARB"));

		/*
			GL_ARB_sampler_objects
		*/
		this->glBindSampler = reinterpret_cast<PFNGLBINDSAMPLERPROC>(GETFUNCADDR("glBindSampler"));
		this->glDeleteSamplers = reinterpret_cast<PFNGLDELETESAMPLERSPROC>(GETFUNCADDR("glDeleteSamplers"));
		this->glGenSamplers = reinterpret_cast<PFNGLGENSAMPLERSPROC>(GETFUNCADDR("glGenSamplers"));
		this->glGetSamplerParameterIiv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVPROC>(GETFUNCADDR("glGetSamplerParameterIiv"));
		this->glGetSamplerParameterIuiv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVPROC>(GETFUNCADDR("glGetSamplerParameterIuiv"));
		this->glGetSamplerParameterfv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERFVPROC>(GETFUNCADDR("glGetSamplerParameterfv"));
		this->glGetSamplerParameteriv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIVPROC>(GETFUNCADDR("glGetSamplerParameteriv"));
		this->glIsSampler = reinterpret_cast<PFNGLISSAMPLERPROC>(GETFUNCADDR("glIsSampler"));
		this->glSamplerParameterIiv = reinterpret_cast<PFNGLSAMPLERPARAMETERIIVPROC>(GETFUNCADDR("glSamplerParameterIiv"));
		this->glSamplerParameterIuiv = reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVPROC>(GETFUNCADDR("glSamplerParameterIuiv"));
		this->glSamplerParameterf = reinterpret_cast<PFNGLSAMPLERPARAMETERFPROC>(GETFUNCADDR("glSamplerParameterf"));
		this->glSamplerParameterfv = reinterpret_cast<PFNGLSAMPLERPARAMETERFVPROC>(GETFUNCADDR("glSamplerParameterfv"));
		this->glSamplerParameteri = reinterpret_cast<PFNGLSAMPLERPARAMETERIPROC>(GETFUNCADDR("glSamplerParameteri"));
		this->glSamplerParameteriv = reinterpret_cast<PFNGLSAMPLERPARAMETERIVPROC>(GETFUNCADDR("glSamplerParameteriv"));

		/*
			GL_ARB_separate_shader_objects
		*/
		this->glActiveShaderProgram = reinterpret_cast<PFNGLACTIVESHADERPROGRAMPROC>(GETFUNCADDR("glActiveShaderProgram"));
		this->glBindProgramPipeline = reinterpret_cast<PFNGLBINDPROGRAMPIPELINEPROC>(GETFUNCADDR("glBindProgramPipeline"));
		this->glCreateShaderProgramv = reinterpret_cast<PFNGLCREATESHADERPROGRAMVPROC>(GETFUNCADDR("glCreateShaderProgramv"));
		this->glDeleteProgramPipelines = reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESPROC>(GETFUNCADDR("glDeleteProgramPipelines"));
		this->glGenProgramPipelines = reinterpret_cast<PFNGLGENPROGRAMPIPELINESPROC>(GETFUNCADDR("glGenProgramPipelines"));
		this->glGetProgramPipelineInfoLog = reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>(GETFUNCADDR("glGetProgramPipelineInfoLog"));
		this->glGetProgramPipelineiv = reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVPROC>(GETFUNCADDR("glGetProgramPipelineiv"));
		this->glIsProgramPipeline = reinterpret_cast<PFNGLISPROGRAMPIPELINEPROC>(GETFUNCADDR("glIsProgramPipeline"));
		this->glProgramUniform1d = reinterpret_cast<PFNGLPROGRAMUNIFORM1DPROC>(GETFUNCADDR("glProgramUniform1d"));
		this->glProgramUniform1dv = reinterpret_cast<PFNGLPROGRAMUNIFORM1DVPROC>(GETFUNCADDR("glProgramUniform1dv"));
		this->glProgramUniform1f = reinterpret_cast<PFNGLPROGRAMUNIFORM1FPROC>(GETFUNCADDR("glProgramUniform1f"));
		this->glProgramUniform1fv = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVPROC>(GETFUNCADDR("glProgramUniform1fv"));
		this->glProgramUniform1i = reinterpret_cast<PFNGLPROGRAMUNIFORM1IPROC>(GETFUNCADDR("glProgramUniform1i"));
		this->glProgramUniform1iv = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVPROC>(GETFUNCADDR("glProgramUniform1iv"));
		this->glProgramUniform1ui = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIPROC>(GETFUNCADDR("glProgramUniform1ui"));
		this->glProgramUniform1uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVPROC>(GETFUNCADDR("glProgramUniform1uiv"));
		this->glProgramUniform2d = reinterpret_cast<PFNGLPROGRAMUNIFORM2DPROC>(GETFUNCADDR("glProgramUniform2d"));
		this->glProgramUniform2dv = reinterpret_cast<PFNGLPROGRAMUNIFORM2DVPROC>(GETFUNCADDR("glProgramUniform2dv"));
		this->glProgramUniform2f = reinterpret_cast<PFNGLPROGRAMUNIFORM2FPROC>(GETFUNCADDR("glProgramUniform2f"));
		this->glProgramUniform2fv = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVPROC>(GETFUNCADDR("glProgramUniform2fv"));
		this->glProgramUniform2i = reinterpret_cast<PFNGLPROGRAMUNIFORM2IPROC>(GETFUNCADDR("glProgramUniform2i"));
		this->glProgramUniform2iv = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVPROC>(GETFUNCADDR("glProgramUniform2iv"));
		this->glProgramUniform2ui = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIPROC>(GETFUNCADDR("glProgramUniform2ui"));
		this->glProgramUniform2uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVPROC>(GETFUNCADDR("glProgramUniform2uiv"));
		this->glProgramUniform3d = reinterpret_cast<PFNGLPROGRAMUNIFORM3DPROC>(GETFUNCADDR("glProgramUniform3d"));
		this->glProgramUniform3dv = reinterpret_cast<PFNGLPROGRAMUNIFORM3DVPROC>(GETFUNCADDR("glProgramUniform3dv"));
		this->glProgramUniform3f = reinterpret_cast<PFNGLPROGRAMUNIFORM3FPROC>(GETFUNCADDR("glProgramUniform3f"));
		this->glProgramUniform3fv = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVPROC>(GETFUNCADDR("glProgramUniform3fv"));
		this->glProgramUniform3i = reinterpret_cast<PFNGLPROGRAMUNIFORM3IPROC>(GETFUNCADDR("glProgramUniform3i"));
		this->glProgramUniform3iv = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVPROC>(GETFUNCADDR("glProgramUniform3iv"));
		this->glProgramUniform3ui = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIPROC>(GETFUNCADDR("glProgramUniform3ui"));
		this->glProgramUniform3uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVPROC>(GETFUNCADDR("glProgramUniform3uiv"));
		this->glProgramUniform4d = reinterpret_cast<PFNGLPROGRAMUNIFORM4DPROC>(GETFUNCADDR("glProgramUniform4d"));
		this->glProgramUniform4dv = reinterpret_cast<PFNGLPROGRAMUNIFORM4DVPROC>(GETFUNCADDR("glProgramUniform4dv"));
		this->glProgramUniform4f = reinterpret_cast<PFNGLPROGRAMUNIFORM4FPROC>(GETFUNCADDR("glProgramUniform4f"));
		this->glProgramUniform4fv = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVPROC>(GETFUNCADDR("glProgramUniform4fv"));
		this->glProgramUniform4i = reinterpret_cast<PFNGLPROGRAMUNIFORM4IPROC>(GETFUNCADDR("glProgramUniform4i"));
		this->glProgramUniform4iv = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVPROC>(GETFUNCADDR("glProgramUniform4iv"));
		this->glProgramUniform4ui = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIPROC>(GETFUNCADDR("glProgramUniform4ui"));
		this->glProgramUniform4uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVPROC>(GETFUNCADDR("glProgramUniform4uiv"));
		this->glProgramUniformMatrix2dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2DVPROC>(GETFUNCADDR("glProgramUniformMatrix2dv"));
		this->glProgramUniformMatrix2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>(GETFUNCADDR("glProgramUniformMatrix2fv"));
		this->glProgramUniformMatrix2x3dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC>(GETFUNCADDR("glProgramUniformMatrix2x3dv"));
		this->glProgramUniformMatrix2x3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>(GETFUNCADDR("glProgramUniformMatrix2x3fv"));
		this->glProgramUniformMatrix2x4dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC>(GETFUNCADDR("glProgramUniformMatrix2x4dv"));
		this->glProgramUniformMatrix2x4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>(GETFUNCADDR("glProgramUniformMatrix2x4fv"));
		this->glProgramUniformMatrix3dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3DVPROC>(GETFUNCADDR("glProgramUniformMatrix3dv"));
		this->glProgramUniformMatrix3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>(GETFUNCADDR("glProgramUniformMatrix3fv"));
		this->glProgramUniformMatrix3x2dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC>(GETFUNCADDR("glProgramUniformMatrix3x2dv"));
		this->glProgramUniformMatrix3x2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>(GETFUNCADDR("glProgramUniformMatrix3x2fv"));
		this->glProgramUniformMatrix3x4dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC>(GETFUNCADDR("glProgramUniformMatrix3x4dv"));
		this->glProgramUniformMatrix3x4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>(GETFUNCADDR("glProgramUniformMatrix3x4fv"));
		this->glProgramUniformMatrix4dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4DVPROC>(GETFUNCADDR("glProgramUniformMatrix4dv"));
		this->glProgramUniformMatrix4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>(GETFUNCADDR("glProgramUniformMatrix4fv"));
		this->glProgramUniformMatrix4x2dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC>(GETFUNCADDR("glProgramUniformMatrix4x2dv"));
		this->glProgramUniformMatrix4x2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>(GETFUNCADDR("glProgramUniformMatrix4x2fv"));
		this->glProgramUniformMatrix4x3dv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC>(GETFUNCADDR("glProgramUniformMatrix4x3dv"));
		this->glProgramUniformMatrix4x3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>(GETFUNCADDR("glProgramUniformMatrix4x3fv"));
		this->glUseProgramStages = reinterpret_cast<PFNGLUSEPROGRAMSTAGESPROC>(GETFUNCADDR("glUseProgramStages"));
		this->glValidateProgramPipeline = reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEPROC>(GETFUNCADDR("glValidateProgramPipeline"));

		/*
			GL_ARB_shader_atomic_counters
		*/
		this->glGetActiveAtomicCounterBufferiv = reinterpret_cast<PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC>(GETFUNCADDR("glGetActiveAtomicCounterBufferiv"));

		/*
			GL_ARB_shader_image_load_store
		*/
		this->glBindImageTexture = reinterpret_cast<PFNGLBINDIMAGETEXTUREPROC>(GETFUNCADDR("glBindImageTexture"));
		this->glMemoryBarrier = reinterpret_cast<PFNGLMEMORYBARRIERPROC>(GETFUNCADDR("glMemoryBarrier"));

		/*
			GL_ARB_shader_objects
		*/
		this->glAttachObjectARB = reinterpret_cast<PFNGLATTACHOBJECTARBPROC>(GETFUNCADDR("glAttachObjectARB"));
		this->glCompileShaderARB = reinterpret_cast<PFNGLCOMPILESHADERARBPROC>(GETFUNCADDR("glCompileShaderARB"));
		this->glCreateProgramObjectARB = reinterpret_cast<PFNGLCREATEPROGRAMOBJECTARBPROC>(GETFUNCADDR("glCreateProgramObjectARB"));
		this->glCreateShaderObjectARB = reinterpret_cast<PFNGLCREATESHADEROBJECTARBPROC>(GETFUNCADDR("glCreateShaderObjectARB"));
		this->glDeleteObjectARB = reinterpret_cast<PFNGLDELETEOBJECTARBPROC>(GETFUNCADDR("glDeleteObjectARB"));
		this->glDetachObjectARB = reinterpret_cast<PFNGLDETACHOBJECTARBPROC>(GETFUNCADDR("glDetachObjectARB"));
		this->glGetActiveUniformARB = reinterpret_cast<PFNGLGETACTIVEUNIFORMARBPROC>(GETFUNCADDR("glGetActiveUniformARB"));
		this->glGetAttachedObjectsARB = reinterpret_cast<PFNGLGETATTACHEDOBJECTSARBPROC>(GETFUNCADDR("glGetAttachedObjectsARB"));
		this->glGetHandleARB = reinterpret_cast<PFNGLGETHANDLEARBPROC>(GETFUNCADDR("glGetHandleARB"));
		this->glGetInfoLogARB = reinterpret_cast<PFNGLGETINFOLOGARBPROC>(GETFUNCADDR("glGetInfoLogARB"));
		this->glGetObjectParameterfvARB = reinterpret_cast<PFNGLGETOBJECTPARAMETERFVARBPROC>(GETFUNCADDR("glGetObjectParameterfvARB"));
		this->glGetObjectParameterivARB = reinterpret_cast<PFNGLGETOBJECTPARAMETERIVARBPROC>(GETFUNCADDR("glGetObjectParameterivARB"));
		this->glGetShaderSourceARB = reinterpret_cast<PFNGLGETSHADERSOURCEARBPROC>(GETFUNCADDR("glGetShaderSourceARB"));
		this->glGetUniformLocationARB = reinterpret_cast<PFNGLGETUNIFORMLOCATIONARBPROC>(GETFUNCADDR("glGetUniformLocationARB"));
		this->glGetUniformfvARB = reinterpret_cast<PFNGLGETUNIFORMFVARBPROC>(GETFUNCADDR("glGetUniformfvARB"));
		this->glGetUniformivARB = reinterpret_cast<PFNGLGETUNIFORMIVARBPROC>(GETFUNCADDR("glGetUniformivARB"));
		this->glLinkProgramARB = reinterpret_cast<PFNGLLINKPROGRAMARBPROC>(GETFUNCADDR("glLinkProgramARB"));
		this->glShaderSourceARB = reinterpret_cast<PFNGLSHADERSOURCEARBPROC>(GETFUNCADDR("glShaderSourceARB"));
		this->glUniform1fARB = reinterpret_cast<PFNGLUNIFORM1FARBPROC>(GETFUNCADDR("glUniform1fARB"));
		this->glUniform1fvARB = reinterpret_cast<PFNGLUNIFORM1FVARBPROC>(GETFUNCADDR("glUniform1fvARB"));
		this->glUniform1iARB = reinterpret_cast<PFNGLUNIFORM1IARBPROC>(GETFUNCADDR("glUniform1iARB"));
		this->glUniform1ivARB = reinterpret_cast<PFNGLUNIFORM1IVARBPROC>(GETFUNCADDR("glUniform1ivARB"));
		this->glUniform2fARB = reinterpret_cast<PFNGLUNIFORM2FARBPROC>(GETFUNCADDR("glUniform2fARB"));
		this->glUniform2fvARB = reinterpret_cast<PFNGLUNIFORM2FVARBPROC>(GETFUNCADDR("glUniform2fvARB"));
		this->glUniform2iARB = reinterpret_cast<PFNGLUNIFORM2IARBPROC>(GETFUNCADDR("glUniform2iARB"));
		this->glUniform2ivARB = reinterpret_cast<PFNGLUNIFORM2IVARBPROC>(GETFUNCADDR("glUniform2ivARB"));
		this->glUniform3fARB = reinterpret_cast<PFNGLUNIFORM3FARBPROC>(GETFUNCADDR("glUniform3fARB"));
		this->glUniform3fvARB = reinterpret_cast<PFNGLUNIFORM3FVARBPROC>(GETFUNCADDR("glUniform3fvARB"));
		this->glUniform3iARB = reinterpret_cast<PFNGLUNIFORM3IARBPROC>(GETFUNCADDR("glUniform3iARB"));
		this->glUniform3ivARB = reinterpret_cast<PFNGLUNIFORM3IVARBPROC>(GETFUNCADDR("glUniform3ivARB"));
		this->glUniform4fARB = reinterpret_cast<PFNGLUNIFORM4FARBPROC>(GETFUNCADDR("glUniform4fARB"));
		this->glUniform4fvARB = reinterpret_cast<PFNGLUNIFORM4FVARBPROC>(GETFUNCADDR("glUniform4fvARB"));
		this->glUniform4iARB = reinterpret_cast<PFNGLUNIFORM4IARBPROC>(GETFUNCADDR("glUniform4iARB"));
		this->glUniform4ivARB = reinterpret_cast<PFNGLUNIFORM4IVARBPROC>(GETFUNCADDR("glUniform4ivARB"));
		this->glUniformMatrix2fvARB = reinterpret_cast<PFNGLUNIFORMMATRIX2FVARBPROC>(GETFUNCADDR("glUniformMatrix2fvARB"));
		this->glUniformMatrix3fvARB = reinterpret_cast<PFNGLUNIFORMMATRIX3FVARBPROC>(GETFUNCADDR("glUniformMatrix3fvARB"));
		this->glUniformMatrix4fvARB = reinterpret_cast<PFNGLUNIFORMMATRIX4FVARBPROC>(GETFUNCADDR("glUniformMatrix4fvARB"));
		this->glUseProgramObjectARB = reinterpret_cast<PFNGLUSEPROGRAMOBJECTARBPROC>(GETFUNCADDR("glUseProgramObjectARB"));
		this->glValidateProgramARB = reinterpret_cast<PFNGLVALIDATEPROGRAMARBPROC>(GETFUNCADDR("glValidateProgramARB"));

		/*
			GL_ARB_shader_storage_buffer_object
		*/
		this->glShaderStorageBlockBinding = reinterpret_cast<PFNGLSHADERSTORAGEBLOCKBINDINGPROC>(GETFUNCADDR("glShaderStorageBlockBinding"));

		/*
			GL_ARB_shader_subroutine
		*/
		this->glGetActiveSubroutineName = reinterpret_cast<PFNGLGETACTIVESUBROUTINENAMEPROC>(GETFUNCADDR("glGetActiveSubroutineName"));
		this->glGetActiveSubroutineUniformName = reinterpret_cast<PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC>(GETFUNCADDR("glGetActiveSubroutineUniformName"));
		this->glGetActiveSubroutineUniformiv = reinterpret_cast<PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC>(GETFUNCADDR("glGetActiveSubroutineUniformiv"));
		this->glGetProgramStageiv = reinterpret_cast<PFNGLGETPROGRAMSTAGEIVPROC>(GETFUNCADDR("glGetProgramStageiv"));
		this->glGetSubroutineIndex = reinterpret_cast<PFNGLGETSUBROUTINEINDEXPROC>(GETFUNCADDR("glGetSubroutineIndex"));
		this->glGetSubroutineUniformLocation = reinterpret_cast<PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC>(GETFUNCADDR("glGetSubroutineUniformLocation"));
		this->glGetUniformSubroutineuiv = reinterpret_cast<PFNGLGETUNIFORMSUBROUTINEUIVPROC>(GETFUNCADDR("glGetUniformSubroutineuiv"));
		this->glUniformSubroutinesuiv = reinterpret_cast<PFNGLUNIFORMSUBROUTINESUIVPROC>(GETFUNCADDR("glUniformSubroutinesuiv"));

		/*
			GL_ARB_shading_language_include
		*/
		this->glCompileShaderIncludeARB = reinterpret_cast<PFNGLCOMPILESHADERINCLUDEARBPROC>(GETFUNCADDR("glCompileShaderIncludeARB"));
		this->glDeleteNamedStringARB = reinterpret_cast<PFNGLDELETENAMEDSTRINGARBPROC>(GETFUNCADDR("glDeleteNamedStringARB"));
		this->glGetNamedStringARB = reinterpret_cast<PFNGLGETNAMEDSTRINGARBPROC>(GETFUNCADDR("glGetNamedStringARB"));
		this->glGetNamedStringivARB = reinterpret_cast<PFNGLGETNAMEDSTRINGIVARBPROC>(GETFUNCADDR("glGetNamedStringivARB"));
		this->glIsNamedStringARB = reinterpret_cast<PFNGLISNAMEDSTRINGARBPROC>(GETFUNCADDR("glIsNamedStringARB"));
		this->glNamedStringARB = reinterpret_cast<PFNGLNAMEDSTRINGARBPROC>(GETFUNCADDR("glNamedStringARB"));

		/*
			GL_ARB_sparse_buffer
		*/
		this->glBufferPageCommitmentARB = reinterpret_cast<PFNGLBUFFERPAGECOMMITMENTARBPROC>(GETFUNCADDR("glBufferPageCommitmentARB"));

		/*
			GL_ARB_sparse_texture
		*/
		this->glTexPageCommitmentARB = reinterpret_cast<PFNGLTEXPAGECOMMITMENTARBPROC>(GETFUNCADDR("glTexPageCommitmentARB"));

		/*
			GL_ARB_sync
		*/
		this->glClientWaitSync = reinterpret_cast<PFNGLCLIENTWAITSYNCPROC>(GETFUNCADDR("glClientWaitSync"));
		this->glDeleteSync = reinterpret_cast<PFNGLDELETESYNCPROC>(GETFUNCADDR("glDeleteSync"));
		this->glFenceSync = reinterpret_cast<PFNGLFENCESYNCPROC>(GETFUNCADDR("glFenceSync"));
		this->glGetInteger64v = reinterpret_cast<PFNGLGETINTEGER64VPROC>(GETFUNCADDR("glGetInteger64v"));
		this->glGetSynciv = reinterpret_cast<PFNGLGETSYNCIVPROC>(GETFUNCADDR("glGetSynciv"));
		this->glIsSync = reinterpret_cast<PFNGLISSYNCPROC>(GETFUNCADDR("glIsSync"));
		this->glWaitSync = reinterpret_cast<PFNGLWAITSYNCPROC>(GETFUNCADDR("glWaitSync"));

		/*
			GL_ARB_tessellation_shader
		*/
		this->glPatchParameterfv = reinterpret_cast<PFNGLPATCHPARAMETERFVPROC>(GETFUNCADDR("glPatchParameterfv"));
		this->glPatchParameteri = reinterpret_cast<PFNGLPATCHPARAMETERIPROC>(GETFUNCADDR("glPatchParameteri"));

		/*
			GL_ARB_texture_barrier
		*/
		this->glTextureBarrier = reinterpret_cast<PFNGLTEXTUREBARRIERPROC>(GETFUNCADDR("glTextureBarrier"));

		/*
			GL_ARB_texture_buffer_object
		*/
		this->glTexBufferARB = reinterpret_cast<PFNGLTEXBUFFERARBPROC>(GETFUNCADDR("glTexBufferARB"));

		/*
			GL_ARB_texture_buffer_range
		*/
		this->glTexBufferRange = reinterpret_cast<PFNGLTEXBUFFERRANGEPROC>(GETFUNCADDR("glTexBufferRange"));
		this->glTextureBufferRangeEXT = reinterpret_cast<PFNGLTEXTUREBUFFERRANGEEXTPROC>(GETFUNCADDR("glTextureBufferRangeEXT"));

		/*
			GL_ARB_texture_compression
		*/
		this->glCompressedTexImage1DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE1DARBPROC>(GETFUNCADDR("glCompressedTexImage1DARB"));
		this->glCompressedTexImage2DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DARBPROC>(GETFUNCADDR("glCompressedTexImage2DARB"));
		this->glCompressedTexImage3DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DARBPROC>(GETFUNCADDR("glCompressedTexImage3DARB"));
		this->glCompressedTexSubImage1DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC>(GETFUNCADDR("glCompressedTexSubImage1DARB"));
		this->glCompressedTexSubImage2DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC>(GETFUNCADDR("glCompressedTexSubImage2DARB"));
		this->glCompressedTexSubImage3DARB = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC>(GETFUNCADDR("glCompressedTexSubImage3DARB"));
		this->glGetCompressedTexImageARB = reinterpret_cast<PFNGLGETCOMPRESSEDTEXIMAGEARBPROC>(GETFUNCADDR("glGetCompressedTexImageARB"));

		/*
			GL_ARB_texture_multisample
		*/
		this->glGetMultisamplefv = reinterpret_cast<PFNGLGETMULTISAMPLEFVPROC>(GETFUNCADDR("glGetMultisamplefv"));
		this->glSampleMaski = reinterpret_cast<PFNGLSAMPLEMASKIPROC>(GETFUNCADDR("glSampleMaski"));
		this->glTexImage2DMultisample = reinterpret_cast<PFNGLTEXIMAGE2DMULTISAMPLEPROC>(GETFUNCADDR("glTexImage2DMultisample"));
		this->glTexImage3DMultisample = reinterpret_cast<PFNGLTEXIMAGE3DMULTISAMPLEPROC>(GETFUNCADDR("glTexImage3DMultisample"));

		/*
			GL_ARB_texture_storage
		*/
		this->glTexStorage1D = reinterpret_cast<PFNGLTEXSTORAGE1DPROC>(GETFUNCADDR("glTexStorage1D"));
		this->glTexStorage2D = reinterpret_cast<PFNGLTEXSTORAGE2DPROC>(GETFUNCADDR("glTexStorage2D"));
		this->glTexStorage3D = reinterpret_cast<PFNGLTEXSTORAGE3DPROC>(GETFUNCADDR("glTexStorage3D"));

		/*
			GL_ARB_texture_storage_multisample
		*/
		this->glTexStorage2DMultisample = reinterpret_cast<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>(GETFUNCADDR("glTexStorage2DMultisample"));
		this->glTexStorage3DMultisample = reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEPROC>(GETFUNCADDR("glTexStorage3DMultisample"));
		this->glTextureStorage2DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTextureStorage2DMultisampleEXT"));
		this->glTextureStorage3DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTextureStorage3DMultisampleEXT"));

		/*
			GL_ARB_texture_view
		*/
		this->glTextureView = reinterpret_cast<PFNGLTEXTUREVIEWPROC>(GETFUNCADDR("glTextureView"));

		/*
			GL_ARB_timer_query
		*/
		this->glGetQueryObjecti64v = reinterpret_cast<PFNGLGETQUERYOBJECTI64VPROC>(GETFUNCADDR("glGetQueryObjecti64v"));
		this->glGetQueryObjectui64v = reinterpret_cast<PFNGLGETQUERYOBJECTUI64VPROC>(GETFUNCADDR("glGetQueryObjectui64v"));
		this->glQueryCounter = reinterpret_cast<PFNGLQUERYCOUNTERPROC>(GETFUNCADDR("glQueryCounter"));

		/*
			GL_ARB_transform_feedback2
		*/
		this->glBindTransformFeedback = reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKPROC>(GETFUNCADDR("glBindTransformFeedback"));
		this->glDeleteTransformFeedbacks = reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSPROC>(GETFUNCADDR("glDeleteTransformFeedbacks"));
		this->glDrawTransformFeedback = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKPROC>(GETFUNCADDR("glDrawTransformFeedback"));
		this->glGenTransformFeedbacks = reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSPROC>(GETFUNCADDR("glGenTransformFeedbacks"));
		this->glIsTransformFeedback = reinterpret_cast<PFNGLISTRANSFORMFEEDBACKPROC>(GETFUNCADDR("glIsTransformFeedback"));
		this->glPauseTransformFeedback = reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKPROC>(GETFUNCADDR("glPauseTransformFeedback"));
		this->glResumeTransformFeedback = reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKPROC>(GETFUNCADDR("glResumeTransformFeedback"));

		/*
			GL_ARB_transform_feedback3
		*/
		this->glBeginQueryIndexed = reinterpret_cast<PFNGLBEGINQUERYINDEXEDPROC>(GETFUNCADDR("glBeginQueryIndexed"));
		this->glDrawTransformFeedbackStream = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC>(GETFUNCADDR("glDrawTransformFeedbackStream"));
		this->glEndQueryIndexed = reinterpret_cast<PFNGLENDQUERYINDEXEDPROC>(GETFUNCADDR("glEndQueryIndexed"));
		this->glGetQueryIndexediv = reinterpret_cast<PFNGLGETQUERYINDEXEDIVPROC>(GETFUNCADDR("glGetQueryIndexediv"));

		/*
			GL_ARB_transform_feedback_instanced
		*/
		this->glDrawTransformFeedbackInstanced = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC>(GETFUNCADDR("glDrawTransformFeedbackInstanced"));
		this->glDrawTransformFeedbackStreamInstanced = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC>(GETFUNCADDR("glDrawTransformFeedbackStreamInstanced"));

		/*
			GL_ARB_transpose_matrix
		*/
		this->glLoadTransposeMatrixdARB = reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXDARBPROC>(GETFUNCADDR("glLoadTransposeMatrixdARB"));
		this->glLoadTransposeMatrixfARB = reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXFARBPROC>(GETFUNCADDR("glLoadTransposeMatrixfARB"));
		this->glMultTransposeMatrixdARB = reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXDARBPROC>(GETFUNCADDR("glMultTransposeMatrixdARB"));
		this->glMultTransposeMatrixfARB = reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXFARBPROC>(GETFUNCADDR("glMultTransposeMatrixfARB"));

		/*
			GL_ARB_uniform_buffer_object
		*/
		this->glBindBufferBase = reinterpret_cast<PFNGLBINDBUFFERBASEPROC>(GETFUNCADDR("glBindBufferBase"));
		this->glBindBufferRange = reinterpret_cast<PFNGLBINDBUFFERRANGEPROC>(GETFUNCADDR("glBindBufferRange"));
		this->glGetActiveUniformBlockName = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>(GETFUNCADDR("glGetActiveUniformBlockName"));
		this->glGetActiveUniformBlockiv = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>(GETFUNCADDR("glGetActiveUniformBlockiv"));
		this->glGetActiveUniformName = reinterpret_cast<PFNGLGETACTIVEUNIFORMNAMEPROC>(GETFUNCADDR("glGetActiveUniformName"));
		this->glGetActiveUniformsiv = reinterpret_cast<PFNGLGETACTIVEUNIFORMSIVPROC>(GETFUNCADDR("glGetActiveUniformsiv"));
		this->glGetIntegeri_v = reinterpret_cast<PFNGLGETINTEGERI_VPROC>(GETFUNCADDR("glGetIntegeri_v"));
		this->glGetUniformBlockIndex = reinterpret_cast<PFNGLGETUNIFORMBLOCKINDEXPROC>(GETFUNCADDR("glGetUniformBlockIndex"));
		this->glGetUniformIndices = reinterpret_cast<PFNGLGETUNIFORMINDICESPROC>(GETFUNCADDR("glGetUniformIndices"));
		this->glUniformBlockBinding = reinterpret_cast<PFNGLUNIFORMBLOCKBINDINGPROC>(GETFUNCADDR("glUniformBlockBinding"));

		/*
			GL_ARB_vertex_array_object
		*/
		this->glBindVertexArray = reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(GETFUNCADDR("glBindVertexArray"));
		this->glDeleteVertexArrays = reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(GETFUNCADDR("glDeleteVertexArrays"));
		this->glGenVertexArrays = reinterpret_cast<PFNGLGENVERTEXARRAYSPROC>(GETFUNCADDR("glGenVertexArrays"));
		this->glIsVertexArray = reinterpret_cast<PFNGLISVERTEXARRAYPROC>(GETFUNCADDR("glIsVertexArray"));

		/*
			GL_ARB_vertex_attrib_64bit
		*/
		this->glGetVertexAttribLdv = reinterpret_cast<PFNGLGETVERTEXATTRIBLDVPROC>(GETFUNCADDR("glGetVertexAttribLdv"));
		this->glVertexAttribL1d = reinterpret_cast<PFNGLVERTEXATTRIBL1DPROC>(GETFUNCADDR("glVertexAttribL1d"));
		this->glVertexAttribL1dv = reinterpret_cast<PFNGLVERTEXATTRIBL1DVPROC>(GETFUNCADDR("glVertexAttribL1dv"));
		this->glVertexAttribL2d = reinterpret_cast<PFNGLVERTEXATTRIBL2DPROC>(GETFUNCADDR("glVertexAttribL2d"));
		this->glVertexAttribL2dv = reinterpret_cast<PFNGLVERTEXATTRIBL2DVPROC>(GETFUNCADDR("glVertexAttribL2dv"));
		this->glVertexAttribL3d = reinterpret_cast<PFNGLVERTEXATTRIBL3DPROC>(GETFUNCADDR("glVertexAttribL3d"));
		this->glVertexAttribL3dv = reinterpret_cast<PFNGLVERTEXATTRIBL3DVPROC>(GETFUNCADDR("glVertexAttribL3dv"));
		this->glVertexAttribL4d = reinterpret_cast<PFNGLVERTEXATTRIBL4DPROC>(GETFUNCADDR("glVertexAttribL4d"));
		this->glVertexAttribL4dv = reinterpret_cast<PFNGLVERTEXATTRIBL4DVPROC>(GETFUNCADDR("glVertexAttribL4dv"));
		this->glVertexAttribLPointer = reinterpret_cast<PFNGLVERTEXATTRIBLPOINTERPROC>(GETFUNCADDR("glVertexAttribLPointer"));

		/*
			GL_ARB_vertex_attrib_binding
		*/
		this->glBindVertexBuffer = reinterpret_cast<PFNGLBINDVERTEXBUFFERPROC>(GETFUNCADDR("glBindVertexBuffer"));
		this->glVertexArrayBindVertexBufferEXT = reinterpret_cast<PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC>(GETFUNCADDR("glVertexArrayBindVertexBufferEXT"));
		this->glVertexArrayVertexAttribBindingEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribBindingEXT"));
		this->glVertexArrayVertexAttribFormatEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribFormatEXT"));
		this->glVertexArrayVertexAttribIFormatEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribIFormatEXT"));
		this->glVertexArrayVertexAttribLFormatEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribLFormatEXT"));
		this->glVertexArrayVertexBindingDivisorEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC>(GETFUNCADDR("glVertexArrayVertexBindingDivisorEXT"));
		this->glVertexAttribBinding = reinterpret_cast<PFNGLVERTEXATTRIBBINDINGPROC>(GETFUNCADDR("glVertexAttribBinding"));
		this->glVertexAttribFormat = reinterpret_cast<PFNGLVERTEXATTRIBFORMATPROC>(GETFUNCADDR("glVertexAttribFormat"));
		this->glVertexAttribIFormat = reinterpret_cast<PFNGLVERTEXATTRIBIFORMATPROC>(GETFUNCADDR("glVertexAttribIFormat"));
		this->glVertexAttribLFormat = reinterpret_cast<PFNGLVERTEXATTRIBLFORMATPROC>(GETFUNCADDR("glVertexAttribLFormat"));
		this->glVertexBindingDivisor = reinterpret_cast<PFNGLVERTEXBINDINGDIVISORPROC>(GETFUNCADDR("glVertexBindingDivisor"));

		/*
			GL_ARB_vertex_blend
		*/
		this->glVertexBlendARB = reinterpret_cast<PFNGLVERTEXBLENDARBPROC>(GETFUNCADDR("glVertexBlendARB"));
		this->glWeightPointerARB = reinterpret_cast<PFNGLWEIGHTPOINTERARBPROC>(GETFUNCADDR("glWeightPointerARB"));
		this->glWeightbvARB = reinterpret_cast<PFNGLWEIGHTBVARBPROC>(GETFUNCADDR("glWeightbvARB"));
		this->glWeightdvARB = reinterpret_cast<PFNGLWEIGHTDVARBPROC>(GETFUNCADDR("glWeightdvARB"));
		this->glWeightfvARB = reinterpret_cast<PFNGLWEIGHTFVARBPROC>(GETFUNCADDR("glWeightfvARB"));
		this->glWeightivARB = reinterpret_cast<PFNGLWEIGHTIVARBPROC>(GETFUNCADDR("glWeightivARB"));
		this->glWeightsvARB = reinterpret_cast<PFNGLWEIGHTSVARBPROC>(GETFUNCADDR("glWeightsvARB"));
		this->glWeightubvARB = reinterpret_cast<PFNGLWEIGHTUBVARBPROC>(GETFUNCADDR("glWeightubvARB"));
		this->glWeightuivARB = reinterpret_cast<PFNGLWEIGHTUIVARBPROC>(GETFUNCADDR("glWeightuivARB"));
		this->glWeightusvARB = reinterpret_cast<PFNGLWEIGHTUSVARBPROC>(GETFUNCADDR("glWeightusvARB"));

		/*
			GL_ARB_vertex_buffer_object
		*/
		this->glBindBufferARB = reinterpret_cast<PFNGLBINDBUFFERARBPROC>(GETFUNCADDR("glBindBufferARB"));
		this->glBufferDataARB = reinterpret_cast<PFNGLBUFFERDATAARBPROC>(GETFUNCADDR("glBufferDataARB"));
		this->glBufferSubDataARB = reinterpret_cast<PFNGLBUFFERSUBDATAARBPROC>(GETFUNCADDR("glBufferSubDataARB"));
		this->glDeleteBuffersARB = reinterpret_cast<PFNGLDELETEBUFFERSARBPROC>(GETFUNCADDR("glDeleteBuffersARB"));
		this->glGenBuffersARB = reinterpret_cast<PFNGLGENBUFFERSARBPROC>(GETFUNCADDR("glGenBuffersARB"));
		this->glGetBufferParameterivARB = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVARBPROC>(GETFUNCADDR("glGetBufferParameterivARB"));
		this->glGetBufferPointervARB = reinterpret_cast<PFNGLGETBUFFERPOINTERVARBPROC>(GETFUNCADDR("glGetBufferPointervARB"));
		this->glGetBufferSubDataARB = reinterpret_cast<PFNGLGETBUFFERSUBDATAARBPROC>(GETFUNCADDR("glGetBufferSubDataARB"));
		this->glIsBufferARB = reinterpret_cast<PFNGLISBUFFERARBPROC>(GETFUNCADDR("glIsBufferARB"));
		this->glMapBufferARB = reinterpret_cast<PFNGLMAPBUFFERARBPROC>(GETFUNCADDR("glMapBufferARB"));
		this->glUnmapBufferARB = reinterpret_cast<PFNGLUNMAPBUFFERARBPROC>(GETFUNCADDR("glUnmapBufferARB"));

		/*
			GL_ARB_vertex_program
		*/
		this->glBindProgramARB = reinterpret_cast<PFNGLBINDPROGRAMARBPROC>(GETFUNCADDR("glBindProgramARB"));
		this->glDeleteProgramsARB = reinterpret_cast<PFNGLDELETEPROGRAMSARBPROC>(GETFUNCADDR("glDeleteProgramsARB"));
		this->glDisableVertexAttribArrayARB = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYARBPROC>(GETFUNCADDR("glDisableVertexAttribArrayARB"));
		this->glEnableVertexAttribArrayARB = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYARBPROC>(GETFUNCADDR("glEnableVertexAttribArrayARB"));
		this->glGenProgramsARB = reinterpret_cast<PFNGLGENPROGRAMSARBPROC>(GETFUNCADDR("glGenProgramsARB"));
		this->glGetProgramEnvParameterdvARB = reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERDVARBPROC>(GETFUNCADDR("glGetProgramEnvParameterdvARB"));
		this->glGetProgramEnvParameterfvARB = reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERFVARBPROC>(GETFUNCADDR("glGetProgramEnvParameterfvARB"));
		this->glGetProgramLocalParameterdvARB = reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC>(GETFUNCADDR("glGetProgramLocalParameterdvARB"));
		this->glGetProgramLocalParameterfvARB = reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC>(GETFUNCADDR("glGetProgramLocalParameterfvARB"));
		this->glGetProgramStringARB = reinterpret_cast<PFNGLGETPROGRAMSTRINGARBPROC>(GETFUNCADDR("glGetProgramStringARB"));
		this->glGetProgramivARB = reinterpret_cast<PFNGLGETPROGRAMIVARBPROC>(GETFUNCADDR("glGetProgramivARB"));
		this->glGetVertexAttribPointervARB = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVARBPROC>(GETFUNCADDR("glGetVertexAttribPointervARB"));
		this->glGetVertexAttribdvARB = reinterpret_cast<PFNGLGETVERTEXATTRIBDVARBPROC>(GETFUNCADDR("glGetVertexAttribdvARB"));
		this->glGetVertexAttribfvARB = reinterpret_cast<PFNGLGETVERTEXATTRIBFVARBPROC>(GETFUNCADDR("glGetVertexAttribfvARB"));
		this->glGetVertexAttribivARB = reinterpret_cast<PFNGLGETVERTEXATTRIBIVARBPROC>(GETFUNCADDR("glGetVertexAttribivARB"));
		this->glIsProgramARB = reinterpret_cast<PFNGLISPROGRAMARBPROC>(GETFUNCADDR("glIsProgramARB"));
		this->glProgramEnvParameter4dARB = reinterpret_cast<PFNGLPROGRAMENVPARAMETER4DARBPROC>(GETFUNCADDR("glProgramEnvParameter4dARB"));
		this->glProgramEnvParameter4dvARB = reinterpret_cast<PFNGLPROGRAMENVPARAMETER4DVARBPROC>(GETFUNCADDR("glProgramEnvParameter4dvARB"));
		this->glProgramEnvParameter4fARB = reinterpret_cast<PFNGLPROGRAMENVPARAMETER4FARBPROC>(GETFUNCADDR("glProgramEnvParameter4fARB"));
		this->glProgramEnvParameter4fvARB = reinterpret_cast<PFNGLPROGRAMENVPARAMETER4FVARBPROC>(GETFUNCADDR("glProgramEnvParameter4fvARB"));
		this->glProgramLocalParameter4dARB = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4DARBPROC>(GETFUNCADDR("glProgramLocalParameter4dARB"));
		this->glProgramLocalParameter4dvARB = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4DVARBPROC>(GETFUNCADDR("glProgramLocalParameter4dvARB"));
		this->glProgramLocalParameter4fARB = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4FARBPROC>(GETFUNCADDR("glProgramLocalParameter4fARB"));
		this->glProgramLocalParameter4fvARB = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4FVARBPROC>(GETFUNCADDR("glProgramLocalParameter4fvARB"));
		this->glProgramStringARB = reinterpret_cast<PFNGLPROGRAMSTRINGARBPROC>(GETFUNCADDR("glProgramStringARB"));
		this->glVertexAttrib1dARB = reinterpret_cast<PFNGLVERTEXATTRIB1DARBPROC>(GETFUNCADDR("glVertexAttrib1dARB"));
		this->glVertexAttrib1dvARB = reinterpret_cast<PFNGLVERTEXATTRIB1DVARBPROC>(GETFUNCADDR("glVertexAttrib1dvARB"));
		this->glVertexAttrib1fARB = reinterpret_cast<PFNGLVERTEXATTRIB1FARBPROC>(GETFUNCADDR("glVertexAttrib1fARB"));
		this->glVertexAttrib1fvARB = reinterpret_cast<PFNGLVERTEXATTRIB1FVARBPROC>(GETFUNCADDR("glVertexAttrib1fvARB"));
		this->glVertexAttrib1sARB = reinterpret_cast<PFNGLVERTEXATTRIB1SARBPROC>(GETFUNCADDR("glVertexAttrib1sARB"));
		this->glVertexAttrib1svARB = reinterpret_cast<PFNGLVERTEXATTRIB1SVARBPROC>(GETFUNCADDR("glVertexAttrib1svARB"));
		this->glVertexAttrib2dARB = reinterpret_cast<PFNGLVERTEXATTRIB2DARBPROC>(GETFUNCADDR("glVertexAttrib2dARB"));
		this->glVertexAttrib2dvARB = reinterpret_cast<PFNGLVERTEXATTRIB2DVARBPROC>(GETFUNCADDR("glVertexAttrib2dvARB"));
		this->glVertexAttrib2fARB = reinterpret_cast<PFNGLVERTEXATTRIB2FARBPROC>(GETFUNCADDR("glVertexAttrib2fARB"));
		this->glVertexAttrib2fvARB = reinterpret_cast<PFNGLVERTEXATTRIB2FVARBPROC>(GETFUNCADDR("glVertexAttrib2fvARB"));
		this->glVertexAttrib2sARB = reinterpret_cast<PFNGLVERTEXATTRIB2SARBPROC>(GETFUNCADDR("glVertexAttrib2sARB"));
		this->glVertexAttrib2svARB = reinterpret_cast<PFNGLVERTEXATTRIB2SVARBPROC>(GETFUNCADDR("glVertexAttrib2svARB"));
		this->glVertexAttrib3dARB = reinterpret_cast<PFNGLVERTEXATTRIB3DARBPROC>(GETFUNCADDR("glVertexAttrib3dARB"));
		this->glVertexAttrib3dvARB = reinterpret_cast<PFNGLVERTEXATTRIB3DVARBPROC>(GETFUNCADDR("glVertexAttrib3dvARB"));
		this->glVertexAttrib3fARB = reinterpret_cast<PFNGLVERTEXATTRIB3FARBPROC>(GETFUNCADDR("glVertexAttrib3fARB"));
		this->glVertexAttrib3fvARB = reinterpret_cast<PFNGLVERTEXATTRIB3FVARBPROC>(GETFUNCADDR("glVertexAttrib3fvARB"));
		this->glVertexAttrib3sARB = reinterpret_cast<PFNGLVERTEXATTRIB3SARBPROC>(GETFUNCADDR("glVertexAttrib3sARB"));
		this->glVertexAttrib3svARB = reinterpret_cast<PFNGLVERTEXATTRIB3SVARBPROC>(GETFUNCADDR("glVertexAttrib3svARB"));
		this->glVertexAttrib4NbvARB = reinterpret_cast<PFNGLVERTEXATTRIB4NBVARBPROC>(GETFUNCADDR("glVertexAttrib4NbvARB"));
		this->glVertexAttrib4NivARB = reinterpret_cast<PFNGLVERTEXATTRIB4NIVARBPROC>(GETFUNCADDR("glVertexAttrib4NivARB"));
		this->glVertexAttrib4NsvARB = reinterpret_cast<PFNGLVERTEXATTRIB4NSVARBPROC>(GETFUNCADDR("glVertexAttrib4NsvARB"));
		this->glVertexAttrib4NubARB = reinterpret_cast<PFNGLVERTEXATTRIB4NUBARBPROC>(GETFUNCADDR("glVertexAttrib4NubARB"));
		this->glVertexAttrib4NubvARB = reinterpret_cast<PFNGLVERTEXATTRIB4NUBVARBPROC>(GETFUNCADDR("glVertexAttrib4NubvARB"));
		this->glVertexAttrib4NuivARB = reinterpret_cast<PFNGLVERTEXATTRIB4NUIVARBPROC>(GETFUNCADDR("glVertexAttrib4NuivARB"));
		this->glVertexAttrib4NusvARB = reinterpret_cast<PFNGLVERTEXATTRIB4NUSVARBPROC>(GETFUNCADDR("glVertexAttrib4NusvARB"));
		this->glVertexAttrib4bvARB = reinterpret_cast<PFNGLVERTEXATTRIB4BVARBPROC>(GETFUNCADDR("glVertexAttrib4bvARB"));
		this->glVertexAttrib4dARB = reinterpret_cast<PFNGLVERTEXATTRIB4DARBPROC>(GETFUNCADDR("glVertexAttrib4dARB"));
		this->glVertexAttrib4dvARB = reinterpret_cast<PFNGLVERTEXATTRIB4DVARBPROC>(GETFUNCADDR("glVertexAttrib4dvARB"));
		this->glVertexAttrib4fARB = reinterpret_cast<PFNGLVERTEXATTRIB4FARBPROC>(GETFUNCADDR("glVertexAttrib4fARB"));
		this->glVertexAttrib4fvARB = reinterpret_cast<PFNGLVERTEXATTRIB4FVARBPROC>(GETFUNCADDR("glVertexAttrib4fvARB"));
		this->glVertexAttrib4ivARB = reinterpret_cast<PFNGLVERTEXATTRIB4IVARBPROC>(GETFUNCADDR("glVertexAttrib4ivARB"));
		this->glVertexAttrib4sARB = reinterpret_cast<PFNGLVERTEXATTRIB4SARBPROC>(GETFUNCADDR("glVertexAttrib4sARB"));
		this->glVertexAttrib4svARB = reinterpret_cast<PFNGLVERTEXATTRIB4SVARBPROC>(GETFUNCADDR("glVertexAttrib4svARB"));
		this->glVertexAttrib4ubvARB = reinterpret_cast<PFNGLVERTEXATTRIB4UBVARBPROC>(GETFUNCADDR("glVertexAttrib4ubvARB"));
		this->glVertexAttrib4uivARB = reinterpret_cast<PFNGLVERTEXATTRIB4UIVARBPROC>(GETFUNCADDR("glVertexAttrib4uivARB"));
		this->glVertexAttrib4usvARB = reinterpret_cast<PFNGLVERTEXATTRIB4USVARBPROC>(GETFUNCADDR("glVertexAttrib4usvARB"));
		this->glVertexAttribPointerARB = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERARBPROC>(GETFUNCADDR("glVertexAttribPointerARB"));

		/*
			GL_ARB_vertex_shader
		*/
		this->glBindAttribLocationARB = reinterpret_cast<PFNGLBINDATTRIBLOCATIONARBPROC>(GETFUNCADDR("glBindAttribLocationARB"));
		this->glGetActiveAttribARB = reinterpret_cast<PFNGLGETACTIVEATTRIBARBPROC>(GETFUNCADDR("glGetActiveAttribARB"));
		this->glGetAttribLocationARB = reinterpret_cast<PFNGLGETATTRIBLOCATIONARBPROC>(GETFUNCADDR("glGetAttribLocationARB"));

		/*
			GL_ARB_vertex_type_2_10_10_10_rev
		*/
		this->glColorP3ui = reinterpret_cast<PFNGLCOLORP3UIPROC>(GETFUNCADDR("glColorP3ui"));
		this->glColorP3uiv = reinterpret_cast<PFNGLCOLORP3UIVPROC>(GETFUNCADDR("glColorP3uiv"));
		this->glColorP4ui = reinterpret_cast<PFNGLCOLORP4UIPROC>(GETFUNCADDR("glColorP4ui"));
		this->glColorP4uiv = reinterpret_cast<PFNGLCOLORP4UIVPROC>(GETFUNCADDR("glColorP4uiv"));
		this->glMultiTexCoordP1ui = reinterpret_cast<PFNGLMULTITEXCOORDP1UIPROC>(GETFUNCADDR("glMultiTexCoordP1ui"));
		this->glMultiTexCoordP1uiv = reinterpret_cast<PFNGLMULTITEXCOORDP1UIVPROC>(GETFUNCADDR("glMultiTexCoordP1uiv"));
		this->glMultiTexCoordP2ui = reinterpret_cast<PFNGLMULTITEXCOORDP2UIPROC>(GETFUNCADDR("glMultiTexCoordP2ui"));
		this->glMultiTexCoordP2uiv = reinterpret_cast<PFNGLMULTITEXCOORDP2UIVPROC>(GETFUNCADDR("glMultiTexCoordP2uiv"));
		this->glMultiTexCoordP3ui = reinterpret_cast<PFNGLMULTITEXCOORDP3UIPROC>(GETFUNCADDR("glMultiTexCoordP3ui"));
		this->glMultiTexCoordP3uiv = reinterpret_cast<PFNGLMULTITEXCOORDP3UIVPROC>(GETFUNCADDR("glMultiTexCoordP3uiv"));
		this->glMultiTexCoordP4ui = reinterpret_cast<PFNGLMULTITEXCOORDP4UIPROC>(GETFUNCADDR("glMultiTexCoordP4ui"));
		this->glMultiTexCoordP4uiv = reinterpret_cast<PFNGLMULTITEXCOORDP4UIVPROC>(GETFUNCADDR("glMultiTexCoordP4uiv"));
		this->glNormalP3ui = reinterpret_cast<PFNGLNORMALP3UIPROC>(GETFUNCADDR("glNormalP3ui"));
		this->glNormalP3uiv = reinterpret_cast<PFNGLNORMALP3UIVPROC>(GETFUNCADDR("glNormalP3uiv"));
		this->glSecondaryColorP3ui = reinterpret_cast<PFNGLSECONDARYCOLORP3UIPROC>(GETFUNCADDR("glSecondaryColorP3ui"));
		this->glSecondaryColorP3uiv = reinterpret_cast<PFNGLSECONDARYCOLORP3UIVPROC>(GETFUNCADDR("glSecondaryColorP3uiv"));
		this->glTexCoordP1ui = reinterpret_cast<PFNGLTEXCOORDP1UIPROC>(GETFUNCADDR("glTexCoordP1ui"));
		this->glTexCoordP1uiv = reinterpret_cast<PFNGLTEXCOORDP1UIVPROC>(GETFUNCADDR("glTexCoordP1uiv"));
		this->glTexCoordP2ui = reinterpret_cast<PFNGLTEXCOORDP2UIPROC>(GETFUNCADDR("glTexCoordP2ui"));
		this->glTexCoordP2uiv = reinterpret_cast<PFNGLTEXCOORDP2UIVPROC>(GETFUNCADDR("glTexCoordP2uiv"));
		this->glTexCoordP3ui = reinterpret_cast<PFNGLTEXCOORDP3UIPROC>(GETFUNCADDR("glTexCoordP3ui"));
		this->glTexCoordP3uiv = reinterpret_cast<PFNGLTEXCOORDP3UIVPROC>(GETFUNCADDR("glTexCoordP3uiv"));
		this->glTexCoordP4ui = reinterpret_cast<PFNGLTEXCOORDP4UIPROC>(GETFUNCADDR("glTexCoordP4ui"));
		this->glTexCoordP4uiv = reinterpret_cast<PFNGLTEXCOORDP4UIVPROC>(GETFUNCADDR("glTexCoordP4uiv"));
		this->glVertexAttribP1ui = reinterpret_cast<PFNGLVERTEXATTRIBP1UIPROC>(GETFUNCADDR("glVertexAttribP1ui"));
		this->glVertexAttribP1uiv = reinterpret_cast<PFNGLVERTEXATTRIBP1UIVPROC>(GETFUNCADDR("glVertexAttribP1uiv"));
		this->glVertexAttribP2ui = reinterpret_cast<PFNGLVERTEXATTRIBP2UIPROC>(GETFUNCADDR("glVertexAttribP2ui"));
		this->glVertexAttribP2uiv = reinterpret_cast<PFNGLVERTEXATTRIBP2UIVPROC>(GETFUNCADDR("glVertexAttribP2uiv"));
		this->glVertexAttribP3ui = reinterpret_cast<PFNGLVERTEXATTRIBP3UIPROC>(GETFUNCADDR("glVertexAttribP3ui"));
		this->glVertexAttribP3uiv = reinterpret_cast<PFNGLVERTEXATTRIBP3UIVPROC>(GETFUNCADDR("glVertexAttribP3uiv"));
		this->glVertexAttribP4ui = reinterpret_cast<PFNGLVERTEXATTRIBP4UIPROC>(GETFUNCADDR("glVertexAttribP4ui"));
		this->glVertexAttribP4uiv = reinterpret_cast<PFNGLVERTEXATTRIBP4UIVPROC>(GETFUNCADDR("glVertexAttribP4uiv"));
		this->glVertexP2ui = reinterpret_cast<PFNGLVERTEXP2UIPROC>(GETFUNCADDR("glVertexP2ui"));
		this->glVertexP2uiv = reinterpret_cast<PFNGLVERTEXP2UIVPROC>(GETFUNCADDR("glVertexP2uiv"));
		this->glVertexP3ui = reinterpret_cast<PFNGLVERTEXP3UIPROC>(GETFUNCADDR("glVertexP3ui"));
		this->glVertexP3uiv = reinterpret_cast<PFNGLVERTEXP3UIVPROC>(GETFUNCADDR("glVertexP3uiv"));
		this->glVertexP4ui = reinterpret_cast<PFNGLVERTEXP4UIPROC>(GETFUNCADDR("glVertexP4ui"));
		this->glVertexP4uiv = reinterpret_cast<PFNGLVERTEXP4UIVPROC>(GETFUNCADDR("glVertexP4uiv"));

		/*
			GL_ARB_viewport_array
		*/
		this->glDepthRangeArrayv = reinterpret_cast<PFNGLDEPTHRANGEARRAYVPROC>(GETFUNCADDR("glDepthRangeArrayv"));
		this->glDepthRangeIndexed = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDPROC>(GETFUNCADDR("glDepthRangeIndexed"));
		this->glGetDoublei_v = reinterpret_cast<PFNGLGETDOUBLEI_VPROC>(GETFUNCADDR("glGetDoublei_v"));
		this->glGetFloati_v = reinterpret_cast<PFNGLGETFLOATI_VPROC>(GETFUNCADDR("glGetFloati_v"));
		this->glScissorArrayv = reinterpret_cast<PFNGLSCISSORARRAYVPROC>(GETFUNCADDR("glScissorArrayv"));
		this->glScissorIndexed = reinterpret_cast<PFNGLSCISSORINDEXEDPROC>(GETFUNCADDR("glScissorIndexed"));
		this->glScissorIndexedv = reinterpret_cast<PFNGLSCISSORINDEXEDVPROC>(GETFUNCADDR("glScissorIndexedv"));
		this->glViewportArrayv = reinterpret_cast<PFNGLVIEWPORTARRAYVPROC>(GETFUNCADDR("glViewportArrayv"));
		this->glViewportIndexedf = reinterpret_cast<PFNGLVIEWPORTINDEXEDFPROC>(GETFUNCADDR("glViewportIndexedf"));
		this->glViewportIndexedfv = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVPROC>(GETFUNCADDR("glViewportIndexedfv"));

		/*
			GL_ARB_window_pos
		*/
		this->glWindowPos2dARB = reinterpret_cast<PFNGLWINDOWPOS2DARBPROC>(GETFUNCADDR("glWindowPos2dARB"));
		this->glWindowPos2dvARB = reinterpret_cast<PFNGLWINDOWPOS2DVARBPROC>(GETFUNCADDR("glWindowPos2dvARB"));
		this->glWindowPos2fARB = reinterpret_cast<PFNGLWINDOWPOS2FARBPROC>(GETFUNCADDR("glWindowPos2fARB"));
		this->glWindowPos2fvARB = reinterpret_cast<PFNGLWINDOWPOS2FVARBPROC>(GETFUNCADDR("glWindowPos2fvARB"));
		this->glWindowPos2iARB = reinterpret_cast<PFNGLWINDOWPOS2IARBPROC>(GETFUNCADDR("glWindowPos2iARB"));
		this->glWindowPos2ivARB = reinterpret_cast<PFNGLWINDOWPOS2IVARBPROC>(GETFUNCADDR("glWindowPos2ivARB"));
		this->glWindowPos2sARB = reinterpret_cast<PFNGLWINDOWPOS2SARBPROC>(GETFUNCADDR("glWindowPos2sARB"));
		this->glWindowPos2svARB = reinterpret_cast<PFNGLWINDOWPOS2SVARBPROC>(GETFUNCADDR("glWindowPos2svARB"));
		this->glWindowPos3dARB = reinterpret_cast<PFNGLWINDOWPOS3DARBPROC>(GETFUNCADDR("glWindowPos3dARB"));
		this->glWindowPos3dvARB = reinterpret_cast<PFNGLWINDOWPOS3DVARBPROC>(GETFUNCADDR("glWindowPos3dvARB"));
		this->glWindowPos3fARB = reinterpret_cast<PFNGLWINDOWPOS3FARBPROC>(GETFUNCADDR("glWindowPos3fARB"));
		this->glWindowPos3fvARB = reinterpret_cast<PFNGLWINDOWPOS3FVARBPROC>(GETFUNCADDR("glWindowPos3fvARB"));
		this->glWindowPos3iARB = reinterpret_cast<PFNGLWINDOWPOS3IARBPROC>(GETFUNCADDR("glWindowPos3iARB"));
		this->glWindowPos3ivARB = reinterpret_cast<PFNGLWINDOWPOS3IVARBPROC>(GETFUNCADDR("glWindowPos3ivARB"));
		this->glWindowPos3sARB = reinterpret_cast<PFNGLWINDOWPOS3SARBPROC>(GETFUNCADDR("glWindowPos3sARB"));
		this->glWindowPos3svARB = reinterpret_cast<PFNGLWINDOWPOS3SVARBPROC>(GETFUNCADDR("glWindowPos3svARB"));

		/*
			GL_ATI_draw_buffers
		*/
		this->glDrawBuffersATI = reinterpret_cast<PFNGLDRAWBUFFERSATIPROC>(GETFUNCADDR("glDrawBuffersATI"));

		/*
			GL_ATI_element_array
		*/
		this->glDrawElementArrayATI = reinterpret_cast<PFNGLDRAWELEMENTARRAYATIPROC>(GETFUNCADDR("glDrawElementArrayATI"));
		this->glDrawRangeElementArrayATI = reinterpret_cast<PFNGLDRAWRANGEELEMENTARRAYATIPROC>(GETFUNCADDR("glDrawRangeElementArrayATI"));
		this->glElementPointerATI = reinterpret_cast<PFNGLELEMENTPOINTERATIPROC>(GETFUNCADDR("glElementPointerATI"));

		/*
			GL_ATI_envmap_bumpmap
		*/
		this->glGetTexBumpParameterfvATI = reinterpret_cast<PFNGLGETTEXBUMPPARAMETERFVATIPROC>(GETFUNCADDR("glGetTexBumpParameterfvATI"));
		this->glGetTexBumpParameterivATI = reinterpret_cast<PFNGLGETTEXBUMPPARAMETERIVATIPROC>(GETFUNCADDR("glGetTexBumpParameterivATI"));
		this->glTexBumpParameterfvATI = reinterpret_cast<PFNGLTEXBUMPPARAMETERFVATIPROC>(GETFUNCADDR("glTexBumpParameterfvATI"));
		this->glTexBumpParameterivATI = reinterpret_cast<PFNGLTEXBUMPPARAMETERIVATIPROC>(GETFUNCADDR("glTexBumpParameterivATI"));

		/*
			GL_ATI_fragment_shader
		*/
		this->glAlphaFragmentOp1ATI = reinterpret_cast<PFNGLALPHAFRAGMENTOP1ATIPROC>(GETFUNCADDR("glAlphaFragmentOp1ATI"));
		this->glAlphaFragmentOp2ATI = reinterpret_cast<PFNGLALPHAFRAGMENTOP2ATIPROC>(GETFUNCADDR("glAlphaFragmentOp2ATI"));
		this->glAlphaFragmentOp3ATI = reinterpret_cast<PFNGLALPHAFRAGMENTOP3ATIPROC>(GETFUNCADDR("glAlphaFragmentOp3ATI"));
		this->glBeginFragmentShaderATI = reinterpret_cast<PFNGLBEGINFRAGMENTSHADERATIPROC>(GETFUNCADDR("glBeginFragmentShaderATI"));
		this->glBindFragmentShaderATI = reinterpret_cast<PFNGLBINDFRAGMENTSHADERATIPROC>(GETFUNCADDR("glBindFragmentShaderATI"));
		this->glColorFragmentOp1ATI = reinterpret_cast<PFNGLCOLORFRAGMENTOP1ATIPROC>(GETFUNCADDR("glColorFragmentOp1ATI"));
		this->glColorFragmentOp2ATI = reinterpret_cast<PFNGLCOLORFRAGMENTOP2ATIPROC>(GETFUNCADDR("glColorFragmentOp2ATI"));
		this->glColorFragmentOp3ATI = reinterpret_cast<PFNGLCOLORFRAGMENTOP3ATIPROC>(GETFUNCADDR("glColorFragmentOp3ATI"));
		this->glDeleteFragmentShaderATI = reinterpret_cast<PFNGLDELETEFRAGMENTSHADERATIPROC>(GETFUNCADDR("glDeleteFragmentShaderATI"));
		this->glEndFragmentShaderATI = reinterpret_cast<PFNGLENDFRAGMENTSHADERATIPROC>(GETFUNCADDR("glEndFragmentShaderATI"));
		this->glGenFragmentShadersATI = reinterpret_cast<PFNGLGENFRAGMENTSHADERSATIPROC>(GETFUNCADDR("glGenFragmentShadersATI"));
		this->glPassTexCoordATI = reinterpret_cast<PFNGLPASSTEXCOORDATIPROC>(GETFUNCADDR("glPassTexCoordATI"));
		this->glSampleMapATI = reinterpret_cast<PFNGLSAMPLEMAPATIPROC>(GETFUNCADDR("glSampleMapATI"));
		this->glSetFragmentShaderConstantATI = reinterpret_cast<PFNGLSETFRAGMENTSHADERCONSTANTATIPROC>(GETFUNCADDR("glSetFragmentShaderConstantATI"));

		/*
			GL_ATI_map_object_buffer
		*/
		this->glMapObjectBufferATI = reinterpret_cast<PFNGLMAPOBJECTBUFFERATIPROC>(GETFUNCADDR("glMapObjectBufferATI"));
		this->glUnmapObjectBufferATI = reinterpret_cast<PFNGLUNMAPOBJECTBUFFERATIPROC>(GETFUNCADDR("glUnmapObjectBufferATI"));

		/*
			GL_ATI_pn_triangles
		*/
		this->glPNTrianglesfATI = reinterpret_cast<PFNGLPNTRIANGLESFATIPROC>(GETFUNCADDR("glPNTrianglesfATI"));
		this->glPNTrianglesiATI = reinterpret_cast<PFNGLPNTRIANGLESIATIPROC>(GETFUNCADDR("glPNTrianglesiATI"));

		/*
			GL_ATI_separate_stencil
		*/
		this->glStencilFuncSeparateATI = reinterpret_cast<PFNGLSTENCILFUNCSEPARATEATIPROC>(GETFUNCADDR("glStencilFuncSeparateATI"));
		this->glStencilOpSeparateATI = reinterpret_cast<PFNGLSTENCILOPSEPARATEATIPROC>(GETFUNCADDR("glStencilOpSeparateATI"));

		/*
			GL_ATI_vertex_array_object
		*/
		this->glArrayObjectATI = reinterpret_cast<PFNGLARRAYOBJECTATIPROC>(GETFUNCADDR("glArrayObjectATI"));
		this->glFreeObjectBufferATI = reinterpret_cast<PFNGLFREEOBJECTBUFFERATIPROC>(GETFUNCADDR("glFreeObjectBufferATI"));
		this->glGetArrayObjectfvATI = reinterpret_cast<PFNGLGETARRAYOBJECTFVATIPROC>(GETFUNCADDR("glGetArrayObjectfvATI"));
		this->glGetArrayObjectivATI = reinterpret_cast<PFNGLGETARRAYOBJECTIVATIPROC>(GETFUNCADDR("glGetArrayObjectivATI"));
		this->glGetObjectBufferfvATI = reinterpret_cast<PFNGLGETOBJECTBUFFERFVATIPROC>(GETFUNCADDR("glGetObjectBufferfvATI"));
		this->glGetObjectBufferivATI = reinterpret_cast<PFNGLGETOBJECTBUFFERIVATIPROC>(GETFUNCADDR("glGetObjectBufferivATI"));
		this->glGetVariantArrayObjectfvATI = reinterpret_cast<PFNGLGETVARIANTARRAYOBJECTFVATIPROC>(GETFUNCADDR("glGetVariantArrayObjectfvATI"));
		this->glGetVariantArrayObjectivATI = reinterpret_cast<PFNGLGETVARIANTARRAYOBJECTIVATIPROC>(GETFUNCADDR("glGetVariantArrayObjectivATI"));
		this->glIsObjectBufferATI = reinterpret_cast<PFNGLISOBJECTBUFFERATIPROC>(GETFUNCADDR("glIsObjectBufferATI"));
		this->glNewObjectBufferATI = reinterpret_cast<PFNGLNEWOBJECTBUFFERATIPROC>(GETFUNCADDR("glNewObjectBufferATI"));
		this->glUpdateObjectBufferATI = reinterpret_cast<PFNGLUPDATEOBJECTBUFFERATIPROC>(GETFUNCADDR("glUpdateObjectBufferATI"));
		this->glVariantArrayObjectATI = reinterpret_cast<PFNGLVARIANTARRAYOBJECTATIPROC>(GETFUNCADDR("glVariantArrayObjectATI"));

		/*
			GL_ATI_vertex_attrib_array_object
		*/
		this->glGetVertexAttribArrayObjectfvATI = reinterpret_cast<PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC>(GETFUNCADDR("glGetVertexAttribArrayObjectfvATI"));
		this->glGetVertexAttribArrayObjectivATI = reinterpret_cast<PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC>(GETFUNCADDR("glGetVertexAttribArrayObjectivATI"));
		this->glVertexAttribArrayObjectATI = reinterpret_cast<PFNGLVERTEXATTRIBARRAYOBJECTATIPROC>(GETFUNCADDR("glVertexAttribArrayObjectATI"));

		/*
			GL_ATI_vertex_streams
		*/
		this->glClientActiveVertexStreamATI = reinterpret_cast<PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC>(GETFUNCADDR("glClientActiveVertexStreamATI"));
		this->glNormalStream3bATI = reinterpret_cast<PFNGLNORMALSTREAM3BATIPROC>(GETFUNCADDR("glNormalStream3bATI"));
		this->glNormalStream3bvATI = reinterpret_cast<PFNGLNORMALSTREAM3BVATIPROC>(GETFUNCADDR("glNormalStream3bvATI"));
		this->glNormalStream3dATI = reinterpret_cast<PFNGLNORMALSTREAM3DATIPROC>(GETFUNCADDR("glNormalStream3dATI"));
		this->glNormalStream3dvATI = reinterpret_cast<PFNGLNORMALSTREAM3DVATIPROC>(GETFUNCADDR("glNormalStream3dvATI"));
		this->glNormalStream3fATI = reinterpret_cast<PFNGLNORMALSTREAM3FATIPROC>(GETFUNCADDR("glNormalStream3fATI"));
		this->glNormalStream3fvATI = reinterpret_cast<PFNGLNORMALSTREAM3FVATIPROC>(GETFUNCADDR("glNormalStream3fvATI"));
		this->glNormalStream3iATI = reinterpret_cast<PFNGLNORMALSTREAM3IATIPROC>(GETFUNCADDR("glNormalStream3iATI"));
		this->glNormalStream3ivATI = reinterpret_cast<PFNGLNORMALSTREAM3IVATIPROC>(GETFUNCADDR("glNormalStream3ivATI"));
		this->glNormalStream3sATI = reinterpret_cast<PFNGLNORMALSTREAM3SATIPROC>(GETFUNCADDR("glNormalStream3sATI"));
		this->glNormalStream3svATI = reinterpret_cast<PFNGLNORMALSTREAM3SVATIPROC>(GETFUNCADDR("glNormalStream3svATI"));
		this->glVertexBlendEnvfATI = reinterpret_cast<PFNGLVERTEXBLENDENVFATIPROC>(GETFUNCADDR("glVertexBlendEnvfATI"));
		this->glVertexBlendEnviATI = reinterpret_cast<PFNGLVERTEXBLENDENVIATIPROC>(GETFUNCADDR("glVertexBlendEnviATI"));
		this->glVertexStream1dATI = reinterpret_cast<PFNGLVERTEXSTREAM1DATIPROC>(GETFUNCADDR("glVertexStream1dATI"));
		this->glVertexStream1dvATI = reinterpret_cast<PFNGLVERTEXSTREAM1DVATIPROC>(GETFUNCADDR("glVertexStream1dvATI"));
		this->glVertexStream1fATI = reinterpret_cast<PFNGLVERTEXSTREAM1FATIPROC>(GETFUNCADDR("glVertexStream1fATI"));
		this->glVertexStream1fvATI = reinterpret_cast<PFNGLVERTEXSTREAM1FVATIPROC>(GETFUNCADDR("glVertexStream1fvATI"));
		this->glVertexStream1iATI = reinterpret_cast<PFNGLVERTEXSTREAM1IATIPROC>(GETFUNCADDR("glVertexStream1iATI"));
		this->glVertexStream1ivATI = reinterpret_cast<PFNGLVERTEXSTREAM1IVATIPROC>(GETFUNCADDR("glVertexStream1ivATI"));
		this->glVertexStream1sATI = reinterpret_cast<PFNGLVERTEXSTREAM1SATIPROC>(GETFUNCADDR("glVertexStream1sATI"));
		this->glVertexStream1svATI = reinterpret_cast<PFNGLVERTEXSTREAM1SVATIPROC>(GETFUNCADDR("glVertexStream1svATI"));
		this->glVertexStream2dATI = reinterpret_cast<PFNGLVERTEXSTREAM2DATIPROC>(GETFUNCADDR("glVertexStream2dATI"));
		this->glVertexStream2dvATI = reinterpret_cast<PFNGLVERTEXSTREAM2DVATIPROC>(GETFUNCADDR("glVertexStream2dvATI"));
		this->glVertexStream2fATI = reinterpret_cast<PFNGLVERTEXSTREAM2FATIPROC>(GETFUNCADDR("glVertexStream2fATI"));
		this->glVertexStream2fvATI = reinterpret_cast<PFNGLVERTEXSTREAM2FVATIPROC>(GETFUNCADDR("glVertexStream2fvATI"));
		this->glVertexStream2iATI = reinterpret_cast<PFNGLVERTEXSTREAM2IATIPROC>(GETFUNCADDR("glVertexStream2iATI"));
		this->glVertexStream2ivATI = reinterpret_cast<PFNGLVERTEXSTREAM2IVATIPROC>(GETFUNCADDR("glVertexStream2ivATI"));
		this->glVertexStream2sATI = reinterpret_cast<PFNGLVERTEXSTREAM2SATIPROC>(GETFUNCADDR("glVertexStream2sATI"));
		this->glVertexStream2svATI = reinterpret_cast<PFNGLVERTEXSTREAM2SVATIPROC>(GETFUNCADDR("glVertexStream2svATI"));
		this->glVertexStream3dATI = reinterpret_cast<PFNGLVERTEXSTREAM3DATIPROC>(GETFUNCADDR("glVertexStream3dATI"));
		this->glVertexStream3dvATI = reinterpret_cast<PFNGLVERTEXSTREAM3DVATIPROC>(GETFUNCADDR("glVertexStream3dvATI"));
		this->glVertexStream3fATI = reinterpret_cast<PFNGLVERTEXSTREAM3FATIPROC>(GETFUNCADDR("glVertexStream3fATI"));
		this->glVertexStream3fvATI = reinterpret_cast<PFNGLVERTEXSTREAM3FVATIPROC>(GETFUNCADDR("glVertexStream3fvATI"));
		this->glVertexStream3iATI = reinterpret_cast<PFNGLVERTEXSTREAM3IATIPROC>(GETFUNCADDR("glVertexStream3iATI"));
		this->glVertexStream3ivATI = reinterpret_cast<PFNGLVERTEXSTREAM3IVATIPROC>(GETFUNCADDR("glVertexStream3ivATI"));
		this->glVertexStream3sATI = reinterpret_cast<PFNGLVERTEXSTREAM3SATIPROC>(GETFUNCADDR("glVertexStream3sATI"));
		this->glVertexStream3svATI = reinterpret_cast<PFNGLVERTEXSTREAM3SVATIPROC>(GETFUNCADDR("glVertexStream3svATI"));
		this->glVertexStream4dATI = reinterpret_cast<PFNGLVERTEXSTREAM4DATIPROC>(GETFUNCADDR("glVertexStream4dATI"));
		this->glVertexStream4dvATI = reinterpret_cast<PFNGLVERTEXSTREAM4DVATIPROC>(GETFUNCADDR("glVertexStream4dvATI"));
		this->glVertexStream4fATI = reinterpret_cast<PFNGLVERTEXSTREAM4FATIPROC>(GETFUNCADDR("glVertexStream4fATI"));
		this->glVertexStream4fvATI = reinterpret_cast<PFNGLVERTEXSTREAM4FVATIPROC>(GETFUNCADDR("glVertexStream4fvATI"));
		this->glVertexStream4iATI = reinterpret_cast<PFNGLVERTEXSTREAM4IATIPROC>(GETFUNCADDR("glVertexStream4iATI"));
		this->glVertexStream4ivATI = reinterpret_cast<PFNGLVERTEXSTREAM4IVATIPROC>(GETFUNCADDR("glVertexStream4ivATI"));
		this->glVertexStream4sATI = reinterpret_cast<PFNGLVERTEXSTREAM4SATIPROC>(GETFUNCADDR("glVertexStream4sATI"));
		this->glVertexStream4svATI = reinterpret_cast<PFNGLVERTEXSTREAM4SVATIPROC>(GETFUNCADDR("glVertexStream4svATI"));

		/*
			GL_EXT_base_instance
		*/
		this->glDrawArraysInstancedBaseInstanceEXT = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC>(GETFUNCADDR("glDrawArraysInstancedBaseInstanceEXT"));
		this->glDrawElementsInstancedBaseInstanceEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC>(GETFUNCADDR("glDrawElementsInstancedBaseInstanceEXT"));
		this->glDrawElementsInstancedBaseVertexBaseInstanceEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC>(GETFUNCADDR("glDrawElementsInstancedBaseVertexBaseInstanceEXT"));

		/*
			GL_EXT_bindable_uniform
		*/
		this->glGetUniformBufferSizeEXT = reinterpret_cast<PFNGLGETUNIFORMBUFFERSIZEEXTPROC>(GETFUNCADDR("glGetUniformBufferSizeEXT"));
		this->glGetUniformOffsetEXT = reinterpret_cast<PFNGLGETUNIFORMOFFSETEXTPROC>(GETFUNCADDR("glGetUniformOffsetEXT"));
		this->glUniformBufferEXT = reinterpret_cast<PFNGLUNIFORMBUFFEREXTPROC>(GETFUNCADDR("glUniformBufferEXT"));

		/*
			GL_EXT_blend_color
		*/
		this->glBlendColorEXT = reinterpret_cast<PFNGLBLENDCOLOREXTPROC>(GETFUNCADDR("glBlendColorEXT"));

		/*
			GL_EXT_blend_equation_separate
		*/
		this->glBlendEquationSeparateEXT = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEEXTPROC>(GETFUNCADDR("glBlendEquationSeparateEXT"));

		/*
			GL_EXT_blend_func_extended
		*/
		this->glBindFragDataLocationIndexedEXT = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC>(GETFUNCADDR("glBindFragDataLocationIndexedEXT"));
		this->glGetFragDataIndexEXT = reinterpret_cast<PFNGLGETFRAGDATAINDEXEXTPROC>(GETFUNCADDR("glGetFragDataIndexEXT"));
		this->glGetProgramResourceLocationIndexEXT = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC>(GETFUNCADDR("glGetProgramResourceLocationIndexEXT"));

		/*
			GL_EXT_blend_func_separate
		*/
		this->glBlendFuncSeparateEXT = reinterpret_cast<PFNGLBLENDFUNCSEPARATEEXTPROC>(GETFUNCADDR("glBlendFuncSeparateEXT"));

		/*
			GL_EXT_blend_minmax
		*/
		this->glBlendEquationEXT = reinterpret_cast<PFNGLBLENDEQUATIONEXTPROC>(GETFUNCADDR("glBlendEquationEXT"));

		/*
			GL_EXT_buffer_storage
		*/
		this->glBufferStorageEXT = reinterpret_cast<PFNGLBUFFERSTORAGEEXTPROC>(GETFUNCADDR("glBufferStorageEXT"));
		this->glNamedBufferStorageEXT = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEEXTPROC>(GETFUNCADDR("glNamedBufferStorageEXT"));

		/*
			GL_EXT_clear_texture
		*/
		this->glClearTexImageEXT = reinterpret_cast<PFNGLCLEARTEXIMAGEEXTPROC>(GETFUNCADDR("glClearTexImageEXT"));
		this->glClearTexSubImageEXT = reinterpret_cast<PFNGLCLEARTEXSUBIMAGEEXTPROC>(GETFUNCADDR("glClearTexSubImageEXT"));

		/*
			GL_EXT_color_subtable
		*/
		this->glColorSubTableEXT = reinterpret_cast<PFNGLCOLORSUBTABLEEXTPROC>(GETFUNCADDR("glColorSubTableEXT"));
		this->glCopyColorSubTableEXT = reinterpret_cast<PFNGLCOPYCOLORSUBTABLEEXTPROC>(GETFUNCADDR("glCopyColorSubTableEXT"));

		/*
			GL_EXT_compiled_vertex_array
		*/
		this->glLockArraysEXT = reinterpret_cast<PFNGLLOCKARRAYSEXTPROC>(GETFUNCADDR("glLockArraysEXT"));
		this->glUnlockArraysEXT = reinterpret_cast<PFNGLUNLOCKARRAYSEXTPROC>(GETFUNCADDR("glUnlockArraysEXT"));

		/*
			GL_EXT_convolution
		*/
		this->glConvolutionFilter1DEXT = reinterpret_cast<PFNGLCONVOLUTIONFILTER1DEXTPROC>(GETFUNCADDR("glConvolutionFilter1DEXT"));
		this->glConvolutionFilter2DEXT = reinterpret_cast<PFNGLCONVOLUTIONFILTER2DEXTPROC>(GETFUNCADDR("glConvolutionFilter2DEXT"));
		this->glConvolutionParameterfEXT = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFEXTPROC>(GETFUNCADDR("glConvolutionParameterfEXT"));
		this->glConvolutionParameterfvEXT = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFVEXTPROC>(GETFUNCADDR("glConvolutionParameterfvEXT"));
		this->glConvolutionParameteriEXT = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIEXTPROC>(GETFUNCADDR("glConvolutionParameteriEXT"));
		this->glConvolutionParameterivEXT = reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIVEXTPROC>(GETFUNCADDR("glConvolutionParameterivEXT"));
		this->glCopyConvolutionFilter1DEXT = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC>(GETFUNCADDR("glCopyConvolutionFilter1DEXT"));
		this->glCopyConvolutionFilter2DEXT = reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC>(GETFUNCADDR("glCopyConvolutionFilter2DEXT"));
		this->glGetConvolutionFilterEXT = reinterpret_cast<PFNGLGETCONVOLUTIONFILTEREXTPROC>(GETFUNCADDR("glGetConvolutionFilterEXT"));
		this->glGetConvolutionParameterfvEXT = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC>(GETFUNCADDR("glGetConvolutionParameterfvEXT"));
		this->glGetConvolutionParameterivEXT = reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC>(GETFUNCADDR("glGetConvolutionParameterivEXT"));
		this->glGetSeparableFilterEXT = reinterpret_cast<PFNGLGETSEPARABLEFILTEREXTPROC>(GETFUNCADDR("glGetSeparableFilterEXT"));
		this->glSeparableFilter2DEXT = reinterpret_cast<PFNGLSEPARABLEFILTER2DEXTPROC>(GETFUNCADDR("glSeparableFilter2DEXT"));

		/*
			GL_EXT_coordinate_frame
		*/
		this->glBinormalPointerEXT = reinterpret_cast<PFNGLBINORMALPOINTEREXTPROC>(GETFUNCADDR("glBinormalPointerEXT"));
		this->glTangentPointerEXT = reinterpret_cast<PFNGLTANGENTPOINTEREXTPROC>(GETFUNCADDR("glTangentPointerEXT"));

		/*
			GL_EXT_copy_image
		*/
		this->glCopyImageSubDataEXT = reinterpret_cast<PFNGLCOPYIMAGESUBDATAEXTPROC>(GETFUNCADDR("glCopyImageSubDataEXT"));

		/*
			GL_EXT_copy_texture
		*/
		this->glCopyTexImage1DEXT = reinterpret_cast<PFNGLCOPYTEXIMAGE1DEXTPROC>(GETFUNCADDR("glCopyTexImage1DEXT"));
		this->glCopyTexImage2DEXT = reinterpret_cast<PFNGLCOPYTEXIMAGE2DEXTPROC>(GETFUNCADDR("glCopyTexImage2DEXT"));
		this->glCopyTexSubImage1DEXT = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE1DEXTPROC>(GETFUNCADDR("glCopyTexSubImage1DEXT"));
		this->glCopyTexSubImage2DEXT = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DEXTPROC>(GETFUNCADDR("glCopyTexSubImage2DEXT"));
		this->glCopyTexSubImage3DEXT = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DEXTPROC>(GETFUNCADDR("glCopyTexSubImage3DEXT"));

		/*
			GL_EXT_cull_vertex
		*/
		this->glCullParameterdvEXT = reinterpret_cast<PFNGLCULLPARAMETERDVEXTPROC>(GETFUNCADDR("glCullParameterdvEXT"));
		this->glCullParameterfvEXT = reinterpret_cast<PFNGLCULLPARAMETERFVEXTPROC>(GETFUNCADDR("glCullParameterfvEXT"));

		/*
			GL_EXT_debug_label
		*/
		this->glGetObjectLabelEXT = reinterpret_cast<PFNGLGETOBJECTLABELEXTPROC>(GETFUNCADDR("glGetObjectLabelEXT"));
		this->glLabelObjectEXT = reinterpret_cast<PFNGLLABELOBJECTEXTPROC>(GETFUNCADDR("glLabelObjectEXT"));

		/*
			GL_EXT_debug_marker
		*/
		this->glInsertEventMarkerEXT = reinterpret_cast<PFNGLINSERTEVENTMARKEREXTPROC>(GETFUNCADDR("glInsertEventMarkerEXT"));
		this->glPopGroupMarkerEXT = reinterpret_cast<PFNGLPOPGROUPMARKEREXTPROC>(GETFUNCADDR("glPopGroupMarkerEXT"));
		this->glPushGroupMarkerEXT = reinterpret_cast<PFNGLPUSHGROUPMARKEREXTPROC>(GETFUNCADDR("glPushGroupMarkerEXT"));

		/*
			GL_EXT_depth_bounds_test
		*/
		this->glDepthBoundsEXT = reinterpret_cast<PFNGLDEPTHBOUNDSEXTPROC>(GETFUNCADDR("glDepthBoundsEXT"));

		/*
			GL_EXT_direct_state_access
		*/
		this->glBindMultiTextureEXT = reinterpret_cast<PFNGLBINDMULTITEXTUREEXTPROC>(GETFUNCADDR("glBindMultiTextureEXT"));
		this->glCheckNamedFramebufferStatusEXT = reinterpret_cast<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC>(GETFUNCADDR("glCheckNamedFramebufferStatusEXT"));
		this->glClientAttribDefaultEXT = reinterpret_cast<PFNGLCLIENTATTRIBDEFAULTEXTPROC>(GETFUNCADDR("glClientAttribDefaultEXT"));
		this->glCompressedMultiTexImage1DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC>(GETFUNCADDR("glCompressedMultiTexImage1DEXT"));
		this->glCompressedMultiTexImage2DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC>(GETFUNCADDR("glCompressedMultiTexImage2DEXT"));
		this->glCompressedMultiTexImage3DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC>(GETFUNCADDR("glCompressedMultiTexImage3DEXT"));
		this->glCompressedMultiTexSubImage1DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC>(GETFUNCADDR("glCompressedMultiTexSubImage1DEXT"));
		this->glCompressedMultiTexSubImage2DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC>(GETFUNCADDR("glCompressedMultiTexSubImage2DEXT"));
		this->glCompressedMultiTexSubImage3DEXT = reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC>(GETFUNCADDR("glCompressedMultiTexSubImage3DEXT"));
		this->glCompressedTextureImage1DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC>(GETFUNCADDR("glCompressedTextureImage1DEXT"));
		this->glCompressedTextureImage2DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC>(GETFUNCADDR("glCompressedTextureImage2DEXT"));
		this->glCompressedTextureImage3DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC>(GETFUNCADDR("glCompressedTextureImage3DEXT"));
		this->glCompressedTextureSubImage1DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC>(GETFUNCADDR("glCompressedTextureSubImage1DEXT"));
		this->glCompressedTextureSubImage2DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC>(GETFUNCADDR("glCompressedTextureSubImage2DEXT"));
		this->glCompressedTextureSubImage3DEXT = reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC>(GETFUNCADDR("glCompressedTextureSubImage3DEXT"));
		this->glCopyMultiTexImage1DEXT = reinterpret_cast<PFNGLCOPYMULTITEXIMAGE1DEXTPROC>(GETFUNCADDR("glCopyMultiTexImage1DEXT"));
		this->glCopyMultiTexImage2DEXT = reinterpret_cast<PFNGLCOPYMULTITEXIMAGE2DEXTPROC>(GETFUNCADDR("glCopyMultiTexImage2DEXT"));
		this->glCopyMultiTexSubImage1DEXT = reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC>(GETFUNCADDR("glCopyMultiTexSubImage1DEXT"));
		this->glCopyMultiTexSubImage2DEXT = reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC>(GETFUNCADDR("glCopyMultiTexSubImage2DEXT"));
		this->glCopyMultiTexSubImage3DEXT = reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC>(GETFUNCADDR("glCopyMultiTexSubImage3DEXT"));
		this->glCopyTextureImage1DEXT = reinterpret_cast<PFNGLCOPYTEXTUREIMAGE1DEXTPROC>(GETFUNCADDR("glCopyTextureImage1DEXT"));
		this->glCopyTextureImage2DEXT = reinterpret_cast<PFNGLCOPYTEXTUREIMAGE2DEXTPROC>(GETFUNCADDR("glCopyTextureImage2DEXT"));
		this->glCopyTextureSubImage1DEXT = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC>(GETFUNCADDR("glCopyTextureSubImage1DEXT"));
		this->glCopyTextureSubImage2DEXT = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC>(GETFUNCADDR("glCopyTextureSubImage2DEXT"));
		this->glCopyTextureSubImage3DEXT = reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC>(GETFUNCADDR("glCopyTextureSubImage3DEXT"));
		this->glDisableClientStateIndexedEXT = reinterpret_cast<PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC>(GETFUNCADDR("glDisableClientStateIndexedEXT"));
		this->glDisableClientStateiEXT = reinterpret_cast<PFNGLDISABLECLIENTSTATEIEXTPROC>(GETFUNCADDR("glDisableClientStateiEXT"));
		this->glDisableVertexArrayAttribEXT = reinterpret_cast<PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC>(GETFUNCADDR("glDisableVertexArrayAttribEXT"));
		this->glDisableVertexArrayEXT = reinterpret_cast<PFNGLDISABLEVERTEXARRAYEXTPROC>(GETFUNCADDR("glDisableVertexArrayEXT"));
		this->glEnableClientStateIndexedEXT = reinterpret_cast<PFNGLENABLECLIENTSTATEINDEXEDEXTPROC>(GETFUNCADDR("glEnableClientStateIndexedEXT"));
		this->glEnableClientStateiEXT = reinterpret_cast<PFNGLENABLECLIENTSTATEIEXTPROC>(GETFUNCADDR("glEnableClientStateiEXT"));
		this->glEnableVertexArrayAttribEXT = reinterpret_cast<PFNGLENABLEVERTEXARRAYATTRIBEXTPROC>(GETFUNCADDR("glEnableVertexArrayAttribEXT"));
		this->glEnableVertexArrayEXT = reinterpret_cast<PFNGLENABLEVERTEXARRAYEXTPROC>(GETFUNCADDR("glEnableVertexArrayEXT"));
		this->glFlushMappedNamedBufferRangeEXT = reinterpret_cast<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC>(GETFUNCADDR("glFlushMappedNamedBufferRangeEXT"));
		this->glFramebufferDrawBufferEXT = reinterpret_cast<PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC>(GETFUNCADDR("glFramebufferDrawBufferEXT"));
		this->glFramebufferDrawBuffersEXT = reinterpret_cast<PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC>(GETFUNCADDR("glFramebufferDrawBuffersEXT"));
		this->glFramebufferReadBufferEXT = reinterpret_cast<PFNGLFRAMEBUFFERREADBUFFEREXTPROC>(GETFUNCADDR("glFramebufferReadBufferEXT"));
		this->glGenerateMultiTexMipmapEXT = reinterpret_cast<PFNGLGENERATEMULTITEXMIPMAPEXTPROC>(GETFUNCADDR("glGenerateMultiTexMipmapEXT"));
		this->glGenerateTextureMipmapEXT = reinterpret_cast<PFNGLGENERATETEXTUREMIPMAPEXTPROC>(GETFUNCADDR("glGenerateTextureMipmapEXT"));
		this->glGetCompressedMultiTexImageEXT = reinterpret_cast<PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC>(GETFUNCADDR("glGetCompressedMultiTexImageEXT"));
		this->glGetCompressedTextureImageEXT = reinterpret_cast<PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC>(GETFUNCADDR("glGetCompressedTextureImageEXT"));
		this->glGetDoubleIndexedvEXT = reinterpret_cast<PFNGLGETDOUBLEINDEXEDVEXTPROC>(GETFUNCADDR("glGetDoubleIndexedvEXT"));
		this->glGetDoublei_vEXT = reinterpret_cast<PFNGLGETDOUBLEI_VEXTPROC>(GETFUNCADDR("glGetDoublei_vEXT"));
		this->glGetFloatIndexedvEXT = reinterpret_cast<PFNGLGETFLOATINDEXEDVEXTPROC>(GETFUNCADDR("glGetFloatIndexedvEXT"));
		this->glGetFloati_vEXT = reinterpret_cast<PFNGLGETFLOATI_VEXTPROC>(GETFUNCADDR("glGetFloati_vEXT"));
		this->glGetFramebufferParameterivEXT = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC>(GETFUNCADDR("glGetFramebufferParameterivEXT"));
		this->glGetMultiTexEnvfvEXT = reinterpret_cast<PFNGLGETMULTITEXENVFVEXTPROC>(GETFUNCADDR("glGetMultiTexEnvfvEXT"));
		this->glGetMultiTexEnvivEXT = reinterpret_cast<PFNGLGETMULTITEXENVIVEXTPROC>(GETFUNCADDR("glGetMultiTexEnvivEXT"));
		this->glGetMultiTexGendvEXT = reinterpret_cast<PFNGLGETMULTITEXGENDVEXTPROC>(GETFUNCADDR("glGetMultiTexGendvEXT"));
		this->glGetMultiTexGenfvEXT = reinterpret_cast<PFNGLGETMULTITEXGENFVEXTPROC>(GETFUNCADDR("glGetMultiTexGenfvEXT"));
		this->glGetMultiTexGenivEXT = reinterpret_cast<PFNGLGETMULTITEXGENIVEXTPROC>(GETFUNCADDR("glGetMultiTexGenivEXT"));
		this->glGetMultiTexImageEXT = reinterpret_cast<PFNGLGETMULTITEXIMAGEEXTPROC>(GETFUNCADDR("glGetMultiTexImageEXT"));
		this->glGetMultiTexLevelParameterfvEXT = reinterpret_cast<PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC>(GETFUNCADDR("glGetMultiTexLevelParameterfvEXT"));
		this->glGetMultiTexLevelParameterivEXT = reinterpret_cast<PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC>(GETFUNCADDR("glGetMultiTexLevelParameterivEXT"));
		this->glGetMultiTexParameterIivEXT = reinterpret_cast<PFNGLGETMULTITEXPARAMETERIIVEXTPROC>(GETFUNCADDR("glGetMultiTexParameterIivEXT"));
		this->glGetMultiTexParameterIuivEXT = reinterpret_cast<PFNGLGETMULTITEXPARAMETERIUIVEXTPROC>(GETFUNCADDR("glGetMultiTexParameterIuivEXT"));
		this->glGetMultiTexParameterfvEXT = reinterpret_cast<PFNGLGETMULTITEXPARAMETERFVEXTPROC>(GETFUNCADDR("glGetMultiTexParameterfvEXT"));
		this->glGetMultiTexParameterivEXT = reinterpret_cast<PFNGLGETMULTITEXPARAMETERIVEXTPROC>(GETFUNCADDR("glGetMultiTexParameterivEXT"));
		this->glGetNamedBufferParameterivEXT = reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC>(GETFUNCADDR("glGetNamedBufferParameterivEXT"));
		this->glGetNamedBufferPointervEXT = reinterpret_cast<PFNGLGETNAMEDBUFFERPOINTERVEXTPROC>(GETFUNCADDR("glGetNamedBufferPointervEXT"));
		this->glGetNamedBufferSubDataEXT = reinterpret_cast<PFNGLGETNAMEDBUFFERSUBDATAEXTPROC>(GETFUNCADDR("glGetNamedBufferSubDataEXT"));
		this->glGetNamedFramebufferAttachmentParameterivEXT = reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(GETFUNCADDR("glGetNamedFramebufferAttachmentParameterivEXT"));
		this->glGetNamedProgramLocalParameterIivEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC>(GETFUNCADDR("glGetNamedProgramLocalParameterIivEXT"));
		this->glGetNamedProgramLocalParameterIuivEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC>(GETFUNCADDR("glGetNamedProgramLocalParameterIuivEXT"));
		this->glGetNamedProgramLocalParameterdvEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC>(GETFUNCADDR("glGetNamedProgramLocalParameterdvEXT"));
		this->glGetNamedProgramLocalParameterfvEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC>(GETFUNCADDR("glGetNamedProgramLocalParameterfvEXT"));
		this->glGetNamedProgramStringEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMSTRINGEXTPROC>(GETFUNCADDR("glGetNamedProgramStringEXT"));
		this->glGetNamedProgramivEXT = reinterpret_cast<PFNGLGETNAMEDPROGRAMIVEXTPROC>(GETFUNCADDR("glGetNamedProgramivEXT"));
		this->glGetNamedRenderbufferParameterivEXT = reinterpret_cast<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC>(GETFUNCADDR("glGetNamedRenderbufferParameterivEXT"));
		this->glGetPointerIndexedvEXT = reinterpret_cast<PFNGLGETPOINTERINDEXEDVEXTPROC>(GETFUNCADDR("glGetPointerIndexedvEXT"));
		this->glGetPointeri_vEXT = reinterpret_cast<PFNGLGETPOINTERI_VEXTPROC>(GETFUNCADDR("glGetPointeri_vEXT"));
		this->glGetTextureImageEXT = reinterpret_cast<PFNGLGETTEXTUREIMAGEEXTPROC>(GETFUNCADDR("glGetTextureImageEXT"));
		this->glGetTextureLevelParameterfvEXT = reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC>(GETFUNCADDR("glGetTextureLevelParameterfvEXT"));
		this->glGetTextureLevelParameterivEXT = reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC>(GETFUNCADDR("glGetTextureLevelParameterivEXT"));
		this->glGetTextureParameterIivEXT = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIIVEXTPROC>(GETFUNCADDR("glGetTextureParameterIivEXT"));
		this->glGetTextureParameterIuivEXT = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIUIVEXTPROC>(GETFUNCADDR("glGetTextureParameterIuivEXT"));
		this->glGetTextureParameterfvEXT = reinterpret_cast<PFNGLGETTEXTUREPARAMETERFVEXTPROC>(GETFUNCADDR("glGetTextureParameterfvEXT"));
		this->glGetTextureParameterivEXT = reinterpret_cast<PFNGLGETTEXTUREPARAMETERIVEXTPROC>(GETFUNCADDR("glGetTextureParameterivEXT"));
		this->glGetVertexArrayIntegeri_vEXT = reinterpret_cast<PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC>(GETFUNCADDR("glGetVertexArrayIntegeri_vEXT"));
		this->glGetVertexArrayIntegervEXT = reinterpret_cast<PFNGLGETVERTEXARRAYINTEGERVEXTPROC>(GETFUNCADDR("glGetVertexArrayIntegervEXT"));
		this->glGetVertexArrayPointeri_vEXT = reinterpret_cast<PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC>(GETFUNCADDR("glGetVertexArrayPointeri_vEXT"));
		this->glGetVertexArrayPointervEXT = reinterpret_cast<PFNGLGETVERTEXARRAYPOINTERVEXTPROC>(GETFUNCADDR("glGetVertexArrayPointervEXT"));
		this->glMapNamedBufferEXT = reinterpret_cast<PFNGLMAPNAMEDBUFFEREXTPROC>(GETFUNCADDR("glMapNamedBufferEXT"));
		this->glMapNamedBufferRangeEXT = reinterpret_cast<PFNGLMAPNAMEDBUFFERRANGEEXTPROC>(GETFUNCADDR("glMapNamedBufferRangeEXT"));
		this->glMatrixFrustumEXT = reinterpret_cast<PFNGLMATRIXFRUSTUMEXTPROC>(GETFUNCADDR("glMatrixFrustumEXT"));
		this->glMatrixLoadIdentityEXT = reinterpret_cast<PFNGLMATRIXLOADIDENTITYEXTPROC>(GETFUNCADDR("glMatrixLoadIdentityEXT"));
		this->glMatrixLoadTransposedEXT = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEDEXTPROC>(GETFUNCADDR("glMatrixLoadTransposedEXT"));
		this->glMatrixLoadTransposefEXT = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEFEXTPROC>(GETFUNCADDR("glMatrixLoadTransposefEXT"));
		this->glMatrixLoaddEXT = reinterpret_cast<PFNGLMATRIXLOADDEXTPROC>(GETFUNCADDR("glMatrixLoaddEXT"));
		this->glMatrixLoadfEXT = reinterpret_cast<PFNGLMATRIXLOADFEXTPROC>(GETFUNCADDR("glMatrixLoadfEXT"));
		this->glMatrixMultTransposedEXT = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEDEXTPROC>(GETFUNCADDR("glMatrixMultTransposedEXT"));
		this->glMatrixMultTransposefEXT = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEFEXTPROC>(GETFUNCADDR("glMatrixMultTransposefEXT"));
		this->glMatrixMultdEXT = reinterpret_cast<PFNGLMATRIXMULTDEXTPROC>(GETFUNCADDR("glMatrixMultdEXT"));
		this->glMatrixMultfEXT = reinterpret_cast<PFNGLMATRIXMULTFEXTPROC>(GETFUNCADDR("glMatrixMultfEXT"));
		this->glMatrixOrthoEXT = reinterpret_cast<PFNGLMATRIXORTHOEXTPROC>(GETFUNCADDR("glMatrixOrthoEXT"));
		this->glMatrixPopEXT = reinterpret_cast<PFNGLMATRIXPOPEXTPROC>(GETFUNCADDR("glMatrixPopEXT"));
		this->glMatrixPushEXT = reinterpret_cast<PFNGLMATRIXPUSHEXTPROC>(GETFUNCADDR("glMatrixPushEXT"));
		this->glMatrixRotatedEXT = reinterpret_cast<PFNGLMATRIXROTATEDEXTPROC>(GETFUNCADDR("glMatrixRotatedEXT"));
		this->glMatrixRotatefEXT = reinterpret_cast<PFNGLMATRIXROTATEFEXTPROC>(GETFUNCADDR("glMatrixRotatefEXT"));
		this->glMatrixScaledEXT = reinterpret_cast<PFNGLMATRIXSCALEDEXTPROC>(GETFUNCADDR("glMatrixScaledEXT"));
		this->glMatrixScalefEXT = reinterpret_cast<PFNGLMATRIXSCALEFEXTPROC>(GETFUNCADDR("glMatrixScalefEXT"));
		this->glMatrixTranslatedEXT = reinterpret_cast<PFNGLMATRIXTRANSLATEDEXTPROC>(GETFUNCADDR("glMatrixTranslatedEXT"));
		this->glMatrixTranslatefEXT = reinterpret_cast<PFNGLMATRIXTRANSLATEFEXTPROC>(GETFUNCADDR("glMatrixTranslatefEXT"));
		this->glMultiTexBufferEXT = reinterpret_cast<PFNGLMULTITEXBUFFEREXTPROC>(GETFUNCADDR("glMultiTexBufferEXT"));
		this->glMultiTexCoordPointerEXT = reinterpret_cast<PFNGLMULTITEXCOORDPOINTEREXTPROC>(GETFUNCADDR("glMultiTexCoordPointerEXT"));
		this->glMultiTexEnvfEXT = reinterpret_cast<PFNGLMULTITEXENVFEXTPROC>(GETFUNCADDR("glMultiTexEnvfEXT"));
		this->glMultiTexEnvfvEXT = reinterpret_cast<PFNGLMULTITEXENVFVEXTPROC>(GETFUNCADDR("glMultiTexEnvfvEXT"));
		this->glMultiTexEnviEXT = reinterpret_cast<PFNGLMULTITEXENVIEXTPROC>(GETFUNCADDR("glMultiTexEnviEXT"));
		this->glMultiTexEnvivEXT = reinterpret_cast<PFNGLMULTITEXENVIVEXTPROC>(GETFUNCADDR("glMultiTexEnvivEXT"));
		this->glMultiTexGendEXT = reinterpret_cast<PFNGLMULTITEXGENDEXTPROC>(GETFUNCADDR("glMultiTexGendEXT"));
		this->glMultiTexGendvEXT = reinterpret_cast<PFNGLMULTITEXGENDVEXTPROC>(GETFUNCADDR("glMultiTexGendvEXT"));
		this->glMultiTexGenfEXT = reinterpret_cast<PFNGLMULTITEXGENFEXTPROC>(GETFUNCADDR("glMultiTexGenfEXT"));
		this->glMultiTexGenfvEXT = reinterpret_cast<PFNGLMULTITEXGENFVEXTPROC>(GETFUNCADDR("glMultiTexGenfvEXT"));
		this->glMultiTexGeniEXT = reinterpret_cast<PFNGLMULTITEXGENIEXTPROC>(GETFUNCADDR("glMultiTexGeniEXT"));
		this->glMultiTexGenivEXT = reinterpret_cast<PFNGLMULTITEXGENIVEXTPROC>(GETFUNCADDR("glMultiTexGenivEXT"));
		this->glMultiTexImage1DEXT = reinterpret_cast<PFNGLMULTITEXIMAGE1DEXTPROC>(GETFUNCADDR("glMultiTexImage1DEXT"));
		this->glMultiTexImage2DEXT = reinterpret_cast<PFNGLMULTITEXIMAGE2DEXTPROC>(GETFUNCADDR("glMultiTexImage2DEXT"));
		this->glMultiTexImage3DEXT = reinterpret_cast<PFNGLMULTITEXIMAGE3DEXTPROC>(GETFUNCADDR("glMultiTexImage3DEXT"));
		this->glMultiTexParameterIivEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERIIVEXTPROC>(GETFUNCADDR("glMultiTexParameterIivEXT"));
		this->glMultiTexParameterIuivEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERIUIVEXTPROC>(GETFUNCADDR("glMultiTexParameterIuivEXT"));
		this->glMultiTexParameterfEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERFEXTPROC>(GETFUNCADDR("glMultiTexParameterfEXT"));
		this->glMultiTexParameterfvEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERFVEXTPROC>(GETFUNCADDR("glMultiTexParameterfvEXT"));
		this->glMultiTexParameteriEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERIEXTPROC>(GETFUNCADDR("glMultiTexParameteriEXT"));
		this->glMultiTexParameterivEXT = reinterpret_cast<PFNGLMULTITEXPARAMETERIVEXTPROC>(GETFUNCADDR("glMultiTexParameterivEXT"));
		this->glMultiTexRenderbufferEXT = reinterpret_cast<PFNGLMULTITEXRENDERBUFFEREXTPROC>(GETFUNCADDR("glMultiTexRenderbufferEXT"));
		this->glMultiTexSubImage1DEXT = reinterpret_cast<PFNGLMULTITEXSUBIMAGE1DEXTPROC>(GETFUNCADDR("glMultiTexSubImage1DEXT"));
		this->glMultiTexSubImage2DEXT = reinterpret_cast<PFNGLMULTITEXSUBIMAGE2DEXTPROC>(GETFUNCADDR("glMultiTexSubImage2DEXT"));
		this->glMultiTexSubImage3DEXT = reinterpret_cast<PFNGLMULTITEXSUBIMAGE3DEXTPROC>(GETFUNCADDR("glMultiTexSubImage3DEXT"));
		this->glNamedBufferDataEXT = reinterpret_cast<PFNGLNAMEDBUFFERDATAEXTPROC>(GETFUNCADDR("glNamedBufferDataEXT"));
		this->glNamedBufferSubDataEXT = reinterpret_cast<PFNGLNAMEDBUFFERSUBDATAEXTPROC>(GETFUNCADDR("glNamedBufferSubDataEXT"));
		this->glNamedCopyBufferSubDataEXT = reinterpret_cast<PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC>(GETFUNCADDR("glNamedCopyBufferSubDataEXT"));
		this->glNamedFramebufferRenderbufferEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC>(GETFUNCADDR("glNamedFramebufferRenderbufferEXT"));
		this->glNamedFramebufferTexture1DEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC>(GETFUNCADDR("glNamedFramebufferTexture1DEXT"));
		this->glNamedFramebufferTexture2DEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC>(GETFUNCADDR("glNamedFramebufferTexture2DEXT"));
		this->glNamedFramebufferTexture3DEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC>(GETFUNCADDR("glNamedFramebufferTexture3DEXT"));
		this->glNamedFramebufferTextureEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC>(GETFUNCADDR("glNamedFramebufferTextureEXT"));
		this->glNamedFramebufferTextureFaceEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC>(GETFUNCADDR("glNamedFramebufferTextureFaceEXT"));
		this->glNamedFramebufferTextureLayerEXT = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC>(GETFUNCADDR("glNamedFramebufferTextureLayerEXT"));
		this->glNamedProgramLocalParameter4dEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameter4dEXT"));
		this->glNamedProgramLocalParameter4dvEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameter4dvEXT"));
		this->glNamedProgramLocalParameter4fEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameter4fEXT"));
		this->glNamedProgramLocalParameter4fvEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameter4fvEXT"));
		this->glNamedProgramLocalParameterI4iEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameterI4iEXT"));
		this->glNamedProgramLocalParameterI4ivEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameterI4ivEXT"));
		this->glNamedProgramLocalParameterI4uiEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameterI4uiEXT"));
		this->glNamedProgramLocalParameterI4uivEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameterI4uivEXT"));
		this->glNamedProgramLocalParameters4fvEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParameters4fvEXT"));
		this->glNamedProgramLocalParametersI4ivEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParametersI4ivEXT"));
		this->glNamedProgramLocalParametersI4uivEXT = reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC>(GETFUNCADDR("glNamedProgramLocalParametersI4uivEXT"));
		this->glNamedProgramStringEXT = reinterpret_cast<PFNGLNAMEDPROGRAMSTRINGEXTPROC>(GETFUNCADDR("glNamedProgramStringEXT"));
		this->glNamedRenderbufferStorageEXT = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC>(GETFUNCADDR("glNamedRenderbufferStorageEXT"));
		this->glNamedRenderbufferStorageMultisampleCoverageEXT = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC>(GETFUNCADDR("glNamedRenderbufferStorageMultisampleCoverageEXT"));
		this->glNamedRenderbufferStorageMultisampleEXT = reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(GETFUNCADDR("glNamedRenderbufferStorageMultisampleEXT"));
		this->glProgramUniform1fEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1FEXTPROC>(GETFUNCADDR("glProgramUniform1fEXT"));
		this->glProgramUniform1fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVEXTPROC>(GETFUNCADDR("glProgramUniform1fvEXT"));
		this->glProgramUniform1iEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1IEXTPROC>(GETFUNCADDR("glProgramUniform1iEXT"));
		this->glProgramUniform1ivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVEXTPROC>(GETFUNCADDR("glProgramUniform1ivEXT"));
		this->glProgramUniform1uiEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIEXTPROC>(GETFUNCADDR("glProgramUniform1uiEXT"));
		this->glProgramUniform1uivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVEXTPROC>(GETFUNCADDR("glProgramUniform1uivEXT"));
		this->glProgramUniform2fEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2FEXTPROC>(GETFUNCADDR("glProgramUniform2fEXT"));
		this->glProgramUniform2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVEXTPROC>(GETFUNCADDR("glProgramUniform2fvEXT"));
		this->glProgramUniform2iEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2IEXTPROC>(GETFUNCADDR("glProgramUniform2iEXT"));
		this->glProgramUniform2ivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVEXTPROC>(GETFUNCADDR("glProgramUniform2ivEXT"));
		this->glProgramUniform2uiEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIEXTPROC>(GETFUNCADDR("glProgramUniform2uiEXT"));
		this->glProgramUniform2uivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVEXTPROC>(GETFUNCADDR("glProgramUniform2uivEXT"));
		this->glProgramUniform3fEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3FEXTPROC>(GETFUNCADDR("glProgramUniform3fEXT"));
		this->glProgramUniform3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVEXTPROC>(GETFUNCADDR("glProgramUniform3fvEXT"));
		this->glProgramUniform3iEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3IEXTPROC>(GETFUNCADDR("glProgramUniform3iEXT"));
		this->glProgramUniform3ivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVEXTPROC>(GETFUNCADDR("glProgramUniform3ivEXT"));
		this->glProgramUniform3uiEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIEXTPROC>(GETFUNCADDR("glProgramUniform3uiEXT"));
		this->glProgramUniform3uivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVEXTPROC>(GETFUNCADDR("glProgramUniform3uivEXT"));
		this->glProgramUniform4fEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4FEXTPROC>(GETFUNCADDR("glProgramUniform4fEXT"));
		this->glProgramUniform4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVEXTPROC>(GETFUNCADDR("glProgramUniform4fvEXT"));
		this->glProgramUniform4iEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4IEXTPROC>(GETFUNCADDR("glProgramUniform4iEXT"));
		this->glProgramUniform4ivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVEXTPROC>(GETFUNCADDR("glProgramUniform4ivEXT"));
		this->glProgramUniform4uiEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIEXTPROC>(GETFUNCADDR("glProgramUniform4uiEXT"));
		this->glProgramUniform4uivEXT = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVEXTPROC>(GETFUNCADDR("glProgramUniform4uivEXT"));
		this->glProgramUniformMatrix2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix2fvEXT"));
		this->glProgramUniformMatrix2x3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix2x3fvEXT"));
		this->glProgramUniformMatrix2x4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix2x4fvEXT"));
		this->glProgramUniformMatrix3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix3fvEXT"));
		this->glProgramUniformMatrix3x2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix3x2fvEXT"));
		this->glProgramUniformMatrix3x4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix3x4fvEXT"));
		this->glProgramUniformMatrix4fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix4fvEXT"));
		this->glProgramUniformMatrix4x2fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix4x2fvEXT"));
		this->glProgramUniformMatrix4x3fvEXT = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC>(GETFUNCADDR("glProgramUniformMatrix4x3fvEXT"));
		this->glPushClientAttribDefaultEXT = reinterpret_cast<PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC>(GETFUNCADDR("glPushClientAttribDefaultEXT"));
		this->glTextureBufferEXT = reinterpret_cast<PFNGLTEXTUREBUFFEREXTPROC>(GETFUNCADDR("glTextureBufferEXT"));
		this->glTextureImage1DEXT = reinterpret_cast<PFNGLTEXTUREIMAGE1DEXTPROC>(GETFUNCADDR("glTextureImage1DEXT"));
		this->glTextureImage2DEXT = reinterpret_cast<PFNGLTEXTUREIMAGE2DEXTPROC>(GETFUNCADDR("glTextureImage2DEXT"));
		this->glTextureImage3DEXT = reinterpret_cast<PFNGLTEXTUREIMAGE3DEXTPROC>(GETFUNCADDR("glTextureImage3DEXT"));
		this->glTextureParameterIivEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERIIVEXTPROC>(GETFUNCADDR("glTextureParameterIivEXT"));
		this->glTextureParameterIuivEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERIUIVEXTPROC>(GETFUNCADDR("glTextureParameterIuivEXT"));
		this->glTextureParameterfEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERFEXTPROC>(GETFUNCADDR("glTextureParameterfEXT"));
		this->glTextureParameterfvEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERFVEXTPROC>(GETFUNCADDR("glTextureParameterfvEXT"));
		this->glTextureParameteriEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERIEXTPROC>(GETFUNCADDR("glTextureParameteriEXT"));
		this->glTextureParameterivEXT = reinterpret_cast<PFNGLTEXTUREPARAMETERIVEXTPROC>(GETFUNCADDR("glTextureParameterivEXT"));
		this->glTextureRenderbufferEXT = reinterpret_cast<PFNGLTEXTURERENDERBUFFEREXTPROC>(GETFUNCADDR("glTextureRenderbufferEXT"));
		this->glTextureSubImage1DEXT = reinterpret_cast<PFNGLTEXTURESUBIMAGE1DEXTPROC>(GETFUNCADDR("glTextureSubImage1DEXT"));
		this->glTextureSubImage2DEXT = reinterpret_cast<PFNGLTEXTURESUBIMAGE2DEXTPROC>(GETFUNCADDR("glTextureSubImage2DEXT"));
		this->glTextureSubImage3DEXT = reinterpret_cast<PFNGLTEXTURESUBIMAGE3DEXTPROC>(GETFUNCADDR("glTextureSubImage3DEXT"));
		this->glUnmapNamedBufferEXT = reinterpret_cast<PFNGLUNMAPNAMEDBUFFEREXTPROC>(GETFUNCADDR("glUnmapNamedBufferEXT"));
		this->glVertexArrayColorOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYCOLOROFFSETEXTPROC>(GETFUNCADDR("glVertexArrayColorOffsetEXT"));
		this->glVertexArrayEdgeFlagOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayEdgeFlagOffsetEXT"));
		this->glVertexArrayFogCoordOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayFogCoordOffsetEXT"));
		this->glVertexArrayIndexOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYINDEXOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayIndexOffsetEXT"));
		this->glVertexArrayMultiTexCoordOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayMultiTexCoordOffsetEXT"));
		this->glVertexArrayNormalOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYNORMALOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayNormalOffsetEXT"));
		this->glVertexArraySecondaryColorOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC>(GETFUNCADDR("glVertexArraySecondaryColorOffsetEXT"));
		this->glVertexArrayTexCoordOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayTexCoordOffsetEXT"));
		this->glVertexArrayVertexAttribDivisorEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribDivisorEXT"));
		this->glVertexArrayVertexAttribIOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribIOffsetEXT"));
		this->glVertexArrayVertexAttribOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribOffsetEXT"));
		this->glVertexArrayVertexOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayVertexOffsetEXT"));

		/*
			GL_EXT_discard_framebuffer
		*/
		this->glDiscardFramebufferEXT = reinterpret_cast<PFNGLDISCARDFRAMEBUFFEREXTPROC>(GETFUNCADDR("glDiscardFramebufferEXT"));

		/*
			GL_EXT_draw_buffers
		*/
		this->glDrawBuffersEXT = reinterpret_cast<PFNGLDRAWBUFFERSEXTPROC>(GETFUNCADDR("glDrawBuffersEXT"));

		/*
			GL_EXT_draw_buffers2
		*/
		this->glColorMaskIndexedEXT = reinterpret_cast<PFNGLCOLORMASKINDEXEDEXTPROC>(GETFUNCADDR("glColorMaskIndexedEXT"));
		this->glDisableIndexedEXT = reinterpret_cast<PFNGLDISABLEINDEXEDEXTPROC>(GETFUNCADDR("glDisableIndexedEXT"));
		this->glEnableIndexedEXT = reinterpret_cast<PFNGLENABLEINDEXEDEXTPROC>(GETFUNCADDR("glEnableIndexedEXT"));
		this->glGetBooleanIndexedvEXT = reinterpret_cast<PFNGLGETBOOLEANINDEXEDVEXTPROC>(GETFUNCADDR("glGetBooleanIndexedvEXT"));
		this->glGetIntegerIndexedvEXT = reinterpret_cast<PFNGLGETINTEGERINDEXEDVEXTPROC>(GETFUNCADDR("glGetIntegerIndexedvEXT"));
		this->glIsEnabledIndexedEXT = reinterpret_cast<PFNGLISENABLEDINDEXEDEXTPROC>(GETFUNCADDR("glIsEnabledIndexedEXT"));

		/*
			GL_EXT_draw_buffers_indexed
		*/
		this->glBlendEquationSeparateiEXT = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIEXTPROC>(GETFUNCADDR("glBlendEquationSeparateiEXT"));
		this->glBlendEquationiEXT = reinterpret_cast<PFNGLBLENDEQUATIONIEXTPROC>(GETFUNCADDR("glBlendEquationiEXT"));
		this->glBlendFuncSeparateiEXT = reinterpret_cast<PFNGLBLENDFUNCSEPARATEIEXTPROC>(GETFUNCADDR("glBlendFuncSeparateiEXT"));
		this->glBlendFunciEXT = reinterpret_cast<PFNGLBLENDFUNCIEXTPROC>(GETFUNCADDR("glBlendFunciEXT"));
		this->glColorMaskiEXT = reinterpret_cast<PFNGLCOLORMASKIEXTPROC>(GETFUNCADDR("glColorMaskiEXT"));
		this->glDisableiEXT = reinterpret_cast<PFNGLDISABLEIEXTPROC>(GETFUNCADDR("glDisableiEXT"));
		this->glEnableiEXT = reinterpret_cast<PFNGLENABLEIEXTPROC>(GETFUNCADDR("glEnableiEXT"));
		this->glIsEnablediEXT = reinterpret_cast<PFNGLISENABLEDIEXTPROC>(GETFUNCADDR("glIsEnablediEXT"));

		/*
			GL_EXT_draw_elements_base_vertex
		*/
		this->glDrawElementsBaseVertexEXT = reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXEXTPROC>(GETFUNCADDR("glDrawElementsBaseVertexEXT"));
		this->glDrawElementsInstancedBaseVertexEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC>(GETFUNCADDR("glDrawElementsInstancedBaseVertexEXT"));
		this->glDrawRangeElementsBaseVertexEXT = reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC>(GETFUNCADDR("glDrawRangeElementsBaseVertexEXT"));
		this->glMultiDrawElementsBaseVertexEXT = reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC>(GETFUNCADDR("glMultiDrawElementsBaseVertexEXT"));

		/*
			GL_EXT_draw_instanced
		*/
		this->glDrawArraysInstancedEXT = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC>(GETFUNCADDR("glDrawArraysInstancedEXT"));
		this->glDrawElementsInstancedEXT = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC>(GETFUNCADDR("glDrawElementsInstancedEXT"));

		/*
			GL_EXT_draw_range_elements
		*/
		this->glDrawRangeElementsEXT = reinterpret_cast<PFNGLDRAWRANGEELEMENTSEXTPROC>(GETFUNCADDR("glDrawRangeElementsEXT"));

		/*
			GL_EXT_external_buffer
		*/
		this->glBufferStorageExternalEXT = reinterpret_cast<PFNGLBUFFERSTORAGEEXTERNALEXTPROC>(GETFUNCADDR("glBufferStorageExternalEXT"));
		this->glNamedBufferStorageExternalEXT = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC>(GETFUNCADDR("glNamedBufferStorageExternalEXT"));

		/*
			GL_EXT_fog_coord
		*/
		this->glFogCoordPointerEXT = reinterpret_cast<PFNGLFOGCOORDPOINTEREXTPROC>(GETFUNCADDR("glFogCoordPointerEXT"));
		this->glFogCoorddEXT = reinterpret_cast<PFNGLFOGCOORDDEXTPROC>(GETFUNCADDR("glFogCoorddEXT"));
		this->glFogCoorddvEXT = reinterpret_cast<PFNGLFOGCOORDDVEXTPROC>(GETFUNCADDR("glFogCoorddvEXT"));
		this->glFogCoordfEXT = reinterpret_cast<PFNGLFOGCOORDFEXTPROC>(GETFUNCADDR("glFogCoordfEXT"));
		this->glFogCoordfvEXT = reinterpret_cast<PFNGLFOGCOORDFVEXTPROC>(GETFUNCADDR("glFogCoordfvEXT"));

		/*
			GL_EXT_fragment_lighting
		*/
		this->glFragmentColorMaterialEXT = reinterpret_cast<PFNGLFRAGMENTCOLORMATERIALEXTPROC>(GETFUNCADDR("glFragmentColorMaterialEXT"));
		this->glFragmentLightModelfEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFEXTPROC>(GETFUNCADDR("glFragmentLightModelfEXT"));
		this->glFragmentLightModelfvEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFVEXTPROC>(GETFUNCADDR("glFragmentLightModelfvEXT"));
		this->glFragmentLightModeliEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELIEXTPROC>(GETFUNCADDR("glFragmentLightModeliEXT"));
		this->glFragmentLightModelivEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELIVEXTPROC>(GETFUNCADDR("glFragmentLightModelivEXT"));
		this->glFragmentLightfEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTFEXTPROC>(GETFUNCADDR("glFragmentLightfEXT"));
		this->glFragmentLightfvEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTFVEXTPROC>(GETFUNCADDR("glFragmentLightfvEXT"));
		this->glFragmentLightiEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTIEXTPROC>(GETFUNCADDR("glFragmentLightiEXT"));
		this->glFragmentLightivEXT = reinterpret_cast<PFNGLFRAGMENTLIGHTIVEXTPROC>(GETFUNCADDR("glFragmentLightivEXT"));
		this->glFragmentMaterialfEXT = reinterpret_cast<PFNGLFRAGMENTMATERIALFEXTPROC>(GETFUNCADDR("glFragmentMaterialfEXT"));
		this->glFragmentMaterialfvEXT = reinterpret_cast<PFNGLFRAGMENTMATERIALFVEXTPROC>(GETFUNCADDR("glFragmentMaterialfvEXT"));
		this->glFragmentMaterialiEXT = reinterpret_cast<PFNGLFRAGMENTMATERIALIEXTPROC>(GETFUNCADDR("glFragmentMaterialiEXT"));
		this->glFragmentMaterialivEXT = reinterpret_cast<PFNGLFRAGMENTMATERIALIVEXTPROC>(GETFUNCADDR("glFragmentMaterialivEXT"));
		this->glGetFragmentLightfvEXT = reinterpret_cast<PFNGLGETFRAGMENTLIGHTFVEXTPROC>(GETFUNCADDR("glGetFragmentLightfvEXT"));
		this->glGetFragmentLightivEXT = reinterpret_cast<PFNGLGETFRAGMENTLIGHTIVEXTPROC>(GETFUNCADDR("glGetFragmentLightivEXT"));
		this->glGetFragmentMaterialfvEXT = reinterpret_cast<PFNGLGETFRAGMENTMATERIALFVEXTPROC>(GETFUNCADDR("glGetFragmentMaterialfvEXT"));
		this->glGetFragmentMaterialivEXT = reinterpret_cast<PFNGLGETFRAGMENTMATERIALIVEXTPROC>(GETFUNCADDR("glGetFragmentMaterialivEXT"));
		this->glLightEnviEXT = reinterpret_cast<PFNGLLIGHTENVIEXTPROC>(GETFUNCADDR("glLightEnviEXT"));

		/*
			GL_EXT_framebuffer_blit
		*/
		this->glBlitFramebufferEXT = reinterpret_cast<PFNGLBLITFRAMEBUFFEREXTPROC>(GETFUNCADDR("glBlitFramebufferEXT"));

		/*
			GL_EXT_framebuffer_multisample
		*/
		this->glRenderbufferStorageMultisampleEXT = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(GETFUNCADDR("glRenderbufferStorageMultisampleEXT"));

		/*
			GL_EXT_framebuffer_object
		*/
		this->glBindFramebufferEXT = reinterpret_cast<PFNGLBINDFRAMEBUFFEREXTPROC>(GETFUNCADDR("glBindFramebufferEXT"));
		this->glBindRenderbufferEXT = reinterpret_cast<PFNGLBINDRENDERBUFFEREXTPROC>(GETFUNCADDR("glBindRenderbufferEXT"));
		this->glCheckFramebufferStatusEXT = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC>(GETFUNCADDR("glCheckFramebufferStatusEXT"));
		this->glDeleteFramebuffersEXT = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSEXTPROC>(GETFUNCADDR("glDeleteFramebuffersEXT"));
		this->glDeleteRenderbuffersEXT = reinterpret_cast<PFNGLDELETERENDERBUFFERSEXTPROC>(GETFUNCADDR("glDeleteRenderbuffersEXT"));
		this->glFramebufferRenderbufferEXT = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC>(GETFUNCADDR("glFramebufferRenderbufferEXT"));
		this->glFramebufferTexture1DEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE1DEXTPROC>(GETFUNCADDR("glFramebufferTexture1DEXT"));
		this->glFramebufferTexture2DEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DEXTPROC>(GETFUNCADDR("glFramebufferTexture2DEXT"));
		this->glFramebufferTexture3DEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DEXTPROC>(GETFUNCADDR("glFramebufferTexture3DEXT"));
		this->glGenFramebuffersEXT = reinterpret_cast<PFNGLGENFRAMEBUFFERSEXTPROC>(GETFUNCADDR("glGenFramebuffersEXT"));
		this->glGenRenderbuffersEXT = reinterpret_cast<PFNGLGENRENDERBUFFERSEXTPROC>(GETFUNCADDR("glGenRenderbuffersEXT"));
		this->glGenerateMipmapEXT = reinterpret_cast<PFNGLGENERATEMIPMAPEXTPROC>(GETFUNCADDR("glGenerateMipmapEXT"));
		this->glGetFramebufferAttachmentParameterivEXT = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(GETFUNCADDR("glGetFramebufferAttachmentParameterivEXT"));
		this->glGetRenderbufferParameterivEXT = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC>(GETFUNCADDR("glGetRenderbufferParameterivEXT"));
		this->glIsFramebufferEXT = reinterpret_cast<PFNGLISFRAMEBUFFEREXTPROC>(GETFUNCADDR("glIsFramebufferEXT"));
		this->glIsRenderbufferEXT = reinterpret_cast<PFNGLISRENDERBUFFEREXTPROC>(GETFUNCADDR("glIsRenderbufferEXT"));
		this->glRenderbufferStorageEXT = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEEXTPROC>(GETFUNCADDR("glRenderbufferStorageEXT"));

		/*
			GL_EXT_geometry_shader4
		*/
		this->glFramebufferTextureEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREEXTPROC>(GETFUNCADDR("glFramebufferTextureEXT"));
		this->glFramebufferTextureFaceEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC>(GETFUNCADDR("glFramebufferTextureFaceEXT"));
		this->glProgramParameteriEXT = reinterpret_cast<PFNGLPROGRAMPARAMETERIEXTPROC>(GETFUNCADDR("glProgramParameteriEXT"));

		/*
			GL_EXT_gpu_program_parameters
		*/
		this->glProgramEnvParameters4fvEXT = reinterpret_cast<PFNGLPROGRAMENVPARAMETERS4FVEXTPROC>(GETFUNCADDR("glProgramEnvParameters4fvEXT"));
		this->glProgramLocalParameters4fvEXT = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC>(GETFUNCADDR("glProgramLocalParameters4fvEXT"));

		/*
			GL_EXT_gpu_shader4
		*/
		this->glBindFragDataLocationEXT = reinterpret_cast<PFNGLBINDFRAGDATALOCATIONEXTPROC>(GETFUNCADDR("glBindFragDataLocationEXT"));
		this->glGetFragDataLocationEXT = reinterpret_cast<PFNGLGETFRAGDATALOCATIONEXTPROC>(GETFUNCADDR("glGetFragDataLocationEXT"));
		this->glGetUniformuivEXT = reinterpret_cast<PFNGLGETUNIFORMUIVEXTPROC>(GETFUNCADDR("glGetUniformuivEXT"));
		this->glGetVertexAttribIivEXT = reinterpret_cast<PFNGLGETVERTEXATTRIBIIVEXTPROC>(GETFUNCADDR("glGetVertexAttribIivEXT"));
		this->glGetVertexAttribIuivEXT = reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVEXTPROC>(GETFUNCADDR("glGetVertexAttribIuivEXT"));
		this->glUniform1uiEXT = reinterpret_cast<PFNGLUNIFORM1UIEXTPROC>(GETFUNCADDR("glUniform1uiEXT"));
		this->glUniform1uivEXT = reinterpret_cast<PFNGLUNIFORM1UIVEXTPROC>(GETFUNCADDR("glUniform1uivEXT"));
		this->glUniform2uiEXT = reinterpret_cast<PFNGLUNIFORM2UIEXTPROC>(GETFUNCADDR("glUniform2uiEXT"));
		this->glUniform2uivEXT = reinterpret_cast<PFNGLUNIFORM2UIVEXTPROC>(GETFUNCADDR("glUniform2uivEXT"));
		this->glUniform3uiEXT = reinterpret_cast<PFNGLUNIFORM3UIEXTPROC>(GETFUNCADDR("glUniform3uiEXT"));
		this->glUniform3uivEXT = reinterpret_cast<PFNGLUNIFORM3UIVEXTPROC>(GETFUNCADDR("glUniform3uivEXT"));
		this->glUniform4uiEXT = reinterpret_cast<PFNGLUNIFORM4UIEXTPROC>(GETFUNCADDR("glUniform4uiEXT"));
		this->glUniform4uivEXT = reinterpret_cast<PFNGLUNIFORM4UIVEXTPROC>(GETFUNCADDR("glUniform4uivEXT"));
		this->glVertexAttribI1iEXT = reinterpret_cast<PFNGLVERTEXATTRIBI1IEXTPROC>(GETFUNCADDR("glVertexAttribI1iEXT"));
		this->glVertexAttribI1ivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI1IVEXTPROC>(GETFUNCADDR("glVertexAttribI1ivEXT"));
		this->glVertexAttribI1uiEXT = reinterpret_cast<PFNGLVERTEXATTRIBI1UIEXTPROC>(GETFUNCADDR("glVertexAttribI1uiEXT"));
		this->glVertexAttribI1uivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI1UIVEXTPROC>(GETFUNCADDR("glVertexAttribI1uivEXT"));
		this->glVertexAttribI2iEXT = reinterpret_cast<PFNGLVERTEXATTRIBI2IEXTPROC>(GETFUNCADDR("glVertexAttribI2iEXT"));
		this->glVertexAttribI2ivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI2IVEXTPROC>(GETFUNCADDR("glVertexAttribI2ivEXT"));
		this->glVertexAttribI2uiEXT = reinterpret_cast<PFNGLVERTEXATTRIBI2UIEXTPROC>(GETFUNCADDR("glVertexAttribI2uiEXT"));
		this->glVertexAttribI2uivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI2UIVEXTPROC>(GETFUNCADDR("glVertexAttribI2uivEXT"));
		this->glVertexAttribI3iEXT = reinterpret_cast<PFNGLVERTEXATTRIBI3IEXTPROC>(GETFUNCADDR("glVertexAttribI3iEXT"));
		this->glVertexAttribI3ivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI3IVEXTPROC>(GETFUNCADDR("glVertexAttribI3ivEXT"));
		this->glVertexAttribI3uiEXT = reinterpret_cast<PFNGLVERTEXATTRIBI3UIEXTPROC>(GETFUNCADDR("glVertexAttribI3uiEXT"));
		this->glVertexAttribI3uivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI3UIVEXTPROC>(GETFUNCADDR("glVertexAttribI3uivEXT"));
		this->glVertexAttribI4bvEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4BVEXTPROC>(GETFUNCADDR("glVertexAttribI4bvEXT"));
		this->glVertexAttribI4iEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4IEXTPROC>(GETFUNCADDR("glVertexAttribI4iEXT"));
		this->glVertexAttribI4ivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4IVEXTPROC>(GETFUNCADDR("glVertexAttribI4ivEXT"));
		this->glVertexAttribI4svEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4SVEXTPROC>(GETFUNCADDR("glVertexAttribI4svEXT"));
		this->glVertexAttribI4ubvEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4UBVEXTPROC>(GETFUNCADDR("glVertexAttribI4ubvEXT"));
		this->glVertexAttribI4uiEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4UIEXTPROC>(GETFUNCADDR("glVertexAttribI4uiEXT"));
		this->glVertexAttribI4uivEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4UIVEXTPROC>(GETFUNCADDR("glVertexAttribI4uivEXT"));
		this->glVertexAttribI4usvEXT = reinterpret_cast<PFNGLVERTEXATTRIBI4USVEXTPROC>(GETFUNCADDR("glVertexAttribI4usvEXT"));
		this->glVertexAttribIPointerEXT = reinterpret_cast<PFNGLVERTEXATTRIBIPOINTEREXTPROC>(GETFUNCADDR("glVertexAttribIPointerEXT"));

		/*
			GL_EXT_histogram
		*/
		this->glGetHistogramEXT = reinterpret_cast<PFNGLGETHISTOGRAMEXTPROC>(GETFUNCADDR("glGetHistogramEXT"));
		this->glGetHistogramParameterfvEXT = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERFVEXTPROC>(GETFUNCADDR("glGetHistogramParameterfvEXT"));
		this->glGetHistogramParameterivEXT = reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERIVEXTPROC>(GETFUNCADDR("glGetHistogramParameterivEXT"));
		this->glGetMinmaxEXT = reinterpret_cast<PFNGLGETMINMAXEXTPROC>(GETFUNCADDR("glGetMinmaxEXT"));
		this->glGetMinmaxParameterfvEXT = reinterpret_cast<PFNGLGETMINMAXPARAMETERFVEXTPROC>(GETFUNCADDR("glGetMinmaxParameterfvEXT"));
		this->glGetMinmaxParameterivEXT = reinterpret_cast<PFNGLGETMINMAXPARAMETERIVEXTPROC>(GETFUNCADDR("glGetMinmaxParameterivEXT"));
		this->glHistogramEXT = reinterpret_cast<PFNGLHISTOGRAMEXTPROC>(GETFUNCADDR("glHistogramEXT"));
		this->glMinmaxEXT = reinterpret_cast<PFNGLMINMAXEXTPROC>(GETFUNCADDR("glMinmaxEXT"));
		this->glResetHistogramEXT = reinterpret_cast<PFNGLRESETHISTOGRAMEXTPROC>(GETFUNCADDR("glResetHistogramEXT"));
		this->glResetMinmaxEXT = reinterpret_cast<PFNGLRESETMINMAXEXTPROC>(GETFUNCADDR("glResetMinmaxEXT"));

		/*
			GL_EXT_index_func
		*/
		this->glIndexFuncEXT = reinterpret_cast<PFNGLINDEXFUNCEXTPROC>(GETFUNCADDR("glIndexFuncEXT"));

		/*
			GL_EXT_index_material
		*/
		this->glIndexMaterialEXT = reinterpret_cast<PFNGLINDEXMATERIALEXTPROC>(GETFUNCADDR("glIndexMaterialEXT"));

		/*
			GL_EXT_instanced_arrays
		*/
		this->glVertexAttribDivisorEXT = reinterpret_cast<PFNGLVERTEXATTRIBDIVISOREXTPROC>(GETFUNCADDR("glVertexAttribDivisorEXT"));

		/*
			GL_EXT_light_texture
		*/
		this->glApplyTextureEXT = reinterpret_cast<PFNGLAPPLYTEXTUREEXTPROC>(GETFUNCADDR("glApplyTextureEXT"));
		this->glTextureLightEXT = reinterpret_cast<PFNGLTEXTURELIGHTEXTPROC>(GETFUNCADDR("glTextureLightEXT"));
		this->glTextureMaterialEXT = reinterpret_cast<PFNGLTEXTUREMATERIALEXTPROC>(GETFUNCADDR("glTextureMaterialEXT"));

		/*
			GL_EXT_map_buffer_range
		*/
		this->glFlushMappedBufferRangeEXT = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC>(GETFUNCADDR("glFlushMappedBufferRangeEXT"));
		this->glMapBufferRangeEXT = reinterpret_cast<PFNGLMAPBUFFERRANGEEXTPROC>(GETFUNCADDR("glMapBufferRangeEXT"));

		/*
			GL_EXT_memory_object
		*/
		this->glBufferStorageMemEXT = reinterpret_cast<PFNGLBUFFERSTORAGEMEMEXTPROC>(GETFUNCADDR("glBufferStorageMemEXT"));
		this->glCreateMemoryObjectsEXT = reinterpret_cast<PFNGLCREATEMEMORYOBJECTSEXTPROC>(GETFUNCADDR("glCreateMemoryObjectsEXT"));
		this->glDeleteMemoryObjectsEXT = reinterpret_cast<PFNGLDELETEMEMORYOBJECTSEXTPROC>(GETFUNCADDR("glDeleteMemoryObjectsEXT"));
		this->glGetMemoryObjectParameterivEXT = reinterpret_cast<PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC>(GETFUNCADDR("glGetMemoryObjectParameterivEXT"));
		this->glGetUnsignedBytei_vEXT = reinterpret_cast<PFNGLGETUNSIGNEDBYTEI_VEXTPROC>(GETFUNCADDR("glGetUnsignedBytei_vEXT"));
		this->glGetUnsignedBytevEXT = reinterpret_cast<PFNGLGETUNSIGNEDBYTEVEXTPROC>(GETFUNCADDR("glGetUnsignedBytevEXT"));
		this->glIsMemoryObjectEXT = reinterpret_cast<PFNGLISMEMORYOBJECTEXTPROC>(GETFUNCADDR("glIsMemoryObjectEXT"));
		this->glMemoryObjectParameterivEXT = reinterpret_cast<PFNGLMEMORYOBJECTPARAMETERIVEXTPROC>(GETFUNCADDR("glMemoryObjectParameterivEXT"));
		this->glNamedBufferStorageMemEXT = reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC>(GETFUNCADDR("glNamedBufferStorageMemEXT"));
		this->glTexStorageMem1DEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM1DEXTPROC>(GETFUNCADDR("glTexStorageMem1DEXT"));
		this->glTexStorageMem2DEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM2DEXTPROC>(GETFUNCADDR("glTexStorageMem2DEXT"));
		this->glTexStorageMem2DMultisampleEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTexStorageMem2DMultisampleEXT"));
		this->glTexStorageMem3DEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM3DEXTPROC>(GETFUNCADDR("glTexStorageMem3DEXT"));
		this->glTexStorageMem3DMultisampleEXT = reinterpret_cast<PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTexStorageMem3DMultisampleEXT"));
		this->glTextureStorageMem1DEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM1DEXTPROC>(GETFUNCADDR("glTextureStorageMem1DEXT"));
		this->glTextureStorageMem2DEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DEXTPROC>(GETFUNCADDR("glTextureStorageMem2DEXT"));
		this->glTextureStorageMem2DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTextureStorageMem2DMultisampleEXT"));
		this->glTextureStorageMem3DEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DEXTPROC>(GETFUNCADDR("glTextureStorageMem3DEXT"));
		this->glTextureStorageMem3DMultisampleEXT = reinterpret_cast<PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC>(GETFUNCADDR("glTextureStorageMem3DMultisampleEXT"));

		/*
			GL_EXT_memory_object_fd
		*/
		this->glImportMemoryFdEXT = reinterpret_cast<PFNGLIMPORTMEMORYFDEXTPROC>(GETFUNCADDR("glImportMemoryFdEXT"));

		/*
			GL_EXT_memory_object_win32
		*/
		this->glImportMemoryWin32HandleEXT = reinterpret_cast<PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC>(GETFUNCADDR("glImportMemoryWin32HandleEXT"));
		this->glImportMemoryWin32NameEXT = reinterpret_cast<PFNGLIMPORTMEMORYWIN32NAMEEXTPROC>(GETFUNCADDR("glImportMemoryWin32NameEXT"));

		/*
			GL_EXT_multi_draw_arrays
		*/
		this->glMultiDrawArraysEXT = reinterpret_cast<PFNGLMULTIDRAWARRAYSEXTPROC>(GETFUNCADDR("glMultiDrawArraysEXT"));
		this->glMultiDrawElementsEXT = reinterpret_cast<PFNGLMULTIDRAWELEMENTSEXTPROC>(GETFUNCADDR("glMultiDrawElementsEXT"));

		/*
			GL_EXT_multi_draw_indirect
		*/
		this->glMultiDrawArraysIndirectEXT = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC>(GETFUNCADDR("glMultiDrawArraysIndirectEXT"));
		this->glMultiDrawElementsIndirectEXT = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC>(GETFUNCADDR("glMultiDrawElementsIndirectEXT"));

		/*
			GL_EXT_multisample
		*/
		this->glSampleMaskEXT = reinterpret_cast<PFNGLSAMPLEMASKEXTPROC>(GETFUNCADDR("glSampleMaskEXT"));
		this->glSamplePatternEXT = reinterpret_cast<PFNGLSAMPLEPATTERNEXTPROC>(GETFUNCADDR("glSamplePatternEXT"));

		/*
			GL_EXT_multisampled_render_to_texture
		*/
		this->glFramebufferTexture2DMultisampleEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC>(GETFUNCADDR("glFramebufferTexture2DMultisampleEXT"));

		/*
			GL_EXT_multiview_draw_buffers
		*/
		this->glDrawBuffersIndexedEXT = reinterpret_cast<PFNGLDRAWBUFFERSINDEXEDEXTPROC>(GETFUNCADDR("glDrawBuffersIndexedEXT"));
		this->glGetIntegeri_vEXT = reinterpret_cast<PFNGLGETINTEGERI_VEXTPROC>(GETFUNCADDR("glGetIntegeri_vEXT"));
		this->glReadBufferIndexedEXT = reinterpret_cast<PFNGLREADBUFFERINDEXEDEXTPROC>(GETFUNCADDR("glReadBufferIndexedEXT"));

		/*
			GL_EXT_paletted_texture
		*/
		this->glColorTableEXT = reinterpret_cast<PFNGLCOLORTABLEEXTPROC>(GETFUNCADDR("glColorTableEXT"));
		this->glGetColorTableEXT = reinterpret_cast<PFNGLGETCOLORTABLEEXTPROC>(GETFUNCADDR("glGetColorTableEXT"));
		this->glGetColorTableParameterfvEXT = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVEXTPROC>(GETFUNCADDR("glGetColorTableParameterfvEXT"));
		this->glGetColorTableParameterivEXT = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVEXTPROC>(GETFUNCADDR("glGetColorTableParameterivEXT"));

		/*
			GL_EXT_pixel_transform
		*/
		this->glGetPixelTransformParameterfvEXT = reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC>(GETFUNCADDR("glGetPixelTransformParameterfvEXT"));
		this->glGetPixelTransformParameterivEXT = reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC>(GETFUNCADDR("glGetPixelTransformParameterivEXT"));
		this->glPixelTransformParameterfEXT = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFEXTPROC>(GETFUNCADDR("glPixelTransformParameterfEXT"));
		this->glPixelTransformParameterfvEXT = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC>(GETFUNCADDR("glPixelTransformParameterfvEXT"));
		this->glPixelTransformParameteriEXT = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERIEXTPROC>(GETFUNCADDR("glPixelTransformParameteriEXT"));
		this->glPixelTransformParameterivEXT = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC>(GETFUNCADDR("glPixelTransformParameterivEXT"));

		/*
			GL_EXT_point_parameters
		*/
		this->glPointParameterfEXT = reinterpret_cast<PFNGLPOINTPARAMETERFEXTPROC>(GETFUNCADDR("glPointParameterfEXT"));
		this->glPointParameterfvEXT = reinterpret_cast<PFNGLPOINTPARAMETERFVEXTPROC>(GETFUNCADDR("glPointParameterfvEXT"));

		/*
			GL_EXT_polygon_offset
		*/
		this->glPolygonOffsetEXT = reinterpret_cast<PFNGLPOLYGONOFFSETEXTPROC>(GETFUNCADDR("glPolygonOffsetEXT"));

		/*
			GL_EXT_polygon_offset_clamp
		*/
		this->glPolygonOffsetClampEXT = reinterpret_cast<PFNGLPOLYGONOFFSETCLAMPEXTPROC>(GETFUNCADDR("glPolygonOffsetClampEXT"));

		/*
			GL_EXT_provoking_vertex
		*/
		this->glProvokingVertexEXT = reinterpret_cast<PFNGLPROVOKINGVERTEXEXTPROC>(GETFUNCADDR("glProvokingVertexEXT"));

		/*
			GL_EXT_raster_multisample
		*/
		this->glCoverageModulationNV = reinterpret_cast<PFNGLCOVERAGEMODULATIONNVPROC>(GETFUNCADDR("glCoverageModulationNV"));
		this->glCoverageModulationTableNV = reinterpret_cast<PFNGLCOVERAGEMODULATIONTABLENVPROC>(GETFUNCADDR("glCoverageModulationTableNV"));
		this->glGetCoverageModulationTableNV = reinterpret_cast<PFNGLGETCOVERAGEMODULATIONTABLENVPROC>(GETFUNCADDR("glGetCoverageModulationTableNV"));
		this->glRasterSamplesEXT = reinterpret_cast<PFNGLRASTERSAMPLESEXTPROC>(GETFUNCADDR("glRasterSamplesEXT"));

		/*
			GL_EXT_scene_marker
		*/
		this->glBeginSceneEXT = reinterpret_cast<PFNGLBEGINSCENEEXTPROC>(GETFUNCADDR("glBeginSceneEXT"));
		this->glEndSceneEXT = reinterpret_cast<PFNGLENDSCENEEXTPROC>(GETFUNCADDR("glEndSceneEXT"));

		/*
			GL_EXT_secondary_color
		*/
		this->glSecondaryColor3bEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3BEXTPROC>(GETFUNCADDR("glSecondaryColor3bEXT"));
		this->glSecondaryColor3bvEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3BVEXTPROC>(GETFUNCADDR("glSecondaryColor3bvEXT"));
		this->glSecondaryColor3dEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3DEXTPROC>(GETFUNCADDR("glSecondaryColor3dEXT"));
		this->glSecondaryColor3dvEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3DVEXTPROC>(GETFUNCADDR("glSecondaryColor3dvEXT"));
		this->glSecondaryColor3fEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3FEXTPROC>(GETFUNCADDR("glSecondaryColor3fEXT"));
		this->glSecondaryColor3fvEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3FVEXTPROC>(GETFUNCADDR("glSecondaryColor3fvEXT"));
		this->glSecondaryColor3iEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3IEXTPROC>(GETFUNCADDR("glSecondaryColor3iEXT"));
		this->glSecondaryColor3ivEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3IVEXTPROC>(GETFUNCADDR("glSecondaryColor3ivEXT"));
		this->glSecondaryColor3sEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3SEXTPROC>(GETFUNCADDR("glSecondaryColor3sEXT"));
		this->glSecondaryColor3svEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3SVEXTPROC>(GETFUNCADDR("glSecondaryColor3svEXT"));
		this->glSecondaryColor3ubEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3UBEXTPROC>(GETFUNCADDR("glSecondaryColor3ubEXT"));
		this->glSecondaryColor3ubvEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3UBVEXTPROC>(GETFUNCADDR("glSecondaryColor3ubvEXT"));
		this->glSecondaryColor3uiEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3UIEXTPROC>(GETFUNCADDR("glSecondaryColor3uiEXT"));
		this->glSecondaryColor3uivEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3UIVEXTPROC>(GETFUNCADDR("glSecondaryColor3uivEXT"));
		this->glSecondaryColor3usEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3USEXTPROC>(GETFUNCADDR("glSecondaryColor3usEXT"));
		this->glSecondaryColor3usvEXT = reinterpret_cast<PFNGLSECONDARYCOLOR3USVEXTPROC>(GETFUNCADDR("glSecondaryColor3usvEXT"));
		this->glSecondaryColorPointerEXT = reinterpret_cast<PFNGLSECONDARYCOLORPOINTEREXTPROC>(GETFUNCADDR("glSecondaryColorPointerEXT"));

		/*
			GL_EXT_semaphore
		*/
		this->glDeleteSemaphoresEXT = reinterpret_cast<PFNGLDELETESEMAPHORESEXTPROC>(GETFUNCADDR("glDeleteSemaphoresEXT"));
		this->glGenSemaphoresEXT = reinterpret_cast<PFNGLGENSEMAPHORESEXTPROC>(GETFUNCADDR("glGenSemaphoresEXT"));
		this->glGetSemaphoreParameterui64vEXT = reinterpret_cast<PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC>(GETFUNCADDR("glGetSemaphoreParameterui64vEXT"));
		this->glIsSemaphoreEXT = reinterpret_cast<PFNGLISSEMAPHOREEXTPROC>(GETFUNCADDR("glIsSemaphoreEXT"));
		this->glSemaphoreParameterui64vEXT = reinterpret_cast<PFNGLSEMAPHOREPARAMETERUI64VEXTPROC>(GETFUNCADDR("glSemaphoreParameterui64vEXT"));
		this->glSignalSemaphoreEXT = reinterpret_cast<PFNGLSIGNALSEMAPHOREEXTPROC>(GETFUNCADDR("glSignalSemaphoreEXT"));
		this->glWaitSemaphoreEXT = reinterpret_cast<PFNGLWAITSEMAPHOREEXTPROC>(GETFUNCADDR("glWaitSemaphoreEXT"));

		/*
			GL_EXT_semaphore_fd
		*/
		this->glImportSemaphoreFdEXT = reinterpret_cast<PFNGLIMPORTSEMAPHOREFDEXTPROC>(GETFUNCADDR("glImportSemaphoreFdEXT"));

		/*
			GL_EXT_semaphore_win32
		*/
		this->glImportSemaphoreWin32HandleEXT = reinterpret_cast<PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC>(GETFUNCADDR("glImportSemaphoreWin32HandleEXT"));
		this->glImportSemaphoreWin32NameEXT = reinterpret_cast<PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC>(GETFUNCADDR("glImportSemaphoreWin32NameEXT"));

		/*
			GL_EXT_separate_shader_objects
		*/
		this->glActiveProgramEXT = reinterpret_cast<PFNGLACTIVEPROGRAMEXTPROC>(GETFUNCADDR("glActiveProgramEXT"));
		this->glCreateShaderProgramEXT = reinterpret_cast<PFNGLCREATESHADERPROGRAMEXTPROC>(GETFUNCADDR("glCreateShaderProgramEXT"));
		this->glUseShaderProgramEXT = reinterpret_cast<PFNGLUSESHADERPROGRAMEXTPROC>(GETFUNCADDR("glUseShaderProgramEXT"));

		/*
			GL_EXT_shader_image_load_store
		*/
		this->glBindImageTextureEXT = reinterpret_cast<PFNGLBINDIMAGETEXTUREEXTPROC>(GETFUNCADDR("glBindImageTextureEXT"));
		this->glMemoryBarrierEXT = reinterpret_cast<PFNGLMEMORYBARRIEREXTPROC>(GETFUNCADDR("glMemoryBarrierEXT"));

		/*
			GL_EXT_shader_pixel_local_storage2
		*/
		this->glClearPixelLocalStorageuiEXT = reinterpret_cast<PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC>(GETFUNCADDR("glClearPixelLocalStorageuiEXT"));
		this->glFramebufferPixelLocalStorageSizeEXT = reinterpret_cast<PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(GETFUNCADDR("glFramebufferPixelLocalStorageSizeEXT"));
		this->glGetFramebufferPixelLocalStorageSizeEXT = reinterpret_cast<PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC>(GETFUNCADDR("glGetFramebufferPixelLocalStorageSizeEXT"));

		/*
			GL_EXT_sparse_texture
		*/
		this->glTexPageCommitmentEXT = reinterpret_cast<PFNGLTEXPAGECOMMITMENTEXTPROC>(GETFUNCADDR("glTexPageCommitmentEXT"));
		this->glTexturePageCommitmentEXT = reinterpret_cast<PFNGLTEXTUREPAGECOMMITMENTEXTPROC>(GETFUNCADDR("glTexturePageCommitmentEXT"));

		/*
			GL_EXT_stencil_two_side
		*/
		this->glActiveStencilFaceEXT = reinterpret_cast<PFNGLACTIVESTENCILFACEEXTPROC>(GETFUNCADDR("glActiveStencilFaceEXT"));

		/*
			GL_EXT_subtexture
		*/
		this->glTexSubImage1DEXT = reinterpret_cast<PFNGLTEXSUBIMAGE1DEXTPROC>(GETFUNCADDR("glTexSubImage1DEXT"));
		this->glTexSubImage2DEXT = reinterpret_cast<PFNGLTEXSUBIMAGE2DEXTPROC>(GETFUNCADDR("glTexSubImage2DEXT"));
		this->glTexSubImage3DEXT = reinterpret_cast<PFNGLTEXSUBIMAGE3DEXTPROC>(GETFUNCADDR("glTexSubImage3DEXT"));

		/*
			GL_EXT_texture3D
		*/
		this->glTexImage3DEXT = reinterpret_cast<PFNGLTEXIMAGE3DEXTPROC>(GETFUNCADDR("glTexImage3DEXT"));

		/*
			GL_EXT_texture_array
		*/
		this->glFramebufferTextureLayerEXT = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC>(GETFUNCADDR("glFramebufferTextureLayerEXT"));

		/*
			GL_EXT_texture_buffer_object
		*/
		this->glTexBufferEXT = reinterpret_cast<PFNGLTEXBUFFEREXTPROC>(GETFUNCADDR("glTexBufferEXT"));

		/*
			GL_EXT_texture_integer
		*/
		this->glClearColorIiEXT = reinterpret_cast<PFNGLCLEARCOLORIIEXTPROC>(GETFUNCADDR("glClearColorIiEXT"));
		this->glClearColorIuiEXT = reinterpret_cast<PFNGLCLEARCOLORIUIEXTPROC>(GETFUNCADDR("glClearColorIuiEXT"));
		this->glGetTexParameterIivEXT = reinterpret_cast<PFNGLGETTEXPARAMETERIIVEXTPROC>(GETFUNCADDR("glGetTexParameterIivEXT"));
		this->glGetTexParameterIuivEXT = reinterpret_cast<PFNGLGETTEXPARAMETERIUIVEXTPROC>(GETFUNCADDR("glGetTexParameterIuivEXT"));
		this->glTexParameterIivEXT = reinterpret_cast<PFNGLTEXPARAMETERIIVEXTPROC>(GETFUNCADDR("glTexParameterIivEXT"));
		this->glTexParameterIuivEXT = reinterpret_cast<PFNGLTEXPARAMETERIUIVEXTPROC>(GETFUNCADDR("glTexParameterIuivEXT"));

		/*
			GL_EXT_texture_object
		*/
		this->glAreTexturesResidentEXT = reinterpret_cast<PFNGLARETEXTURESRESIDENTEXTPROC>(GETFUNCADDR("glAreTexturesResidentEXT"));
		this->glBindTextureEXT = reinterpret_cast<PFNGLBINDTEXTUREEXTPROC>(GETFUNCADDR("glBindTextureEXT"));
		this->glDeleteTexturesEXT = reinterpret_cast<PFNGLDELETETEXTURESEXTPROC>(GETFUNCADDR("glDeleteTexturesEXT"));
		this->glGenTexturesEXT = reinterpret_cast<PFNGLGENTEXTURESEXTPROC>(GETFUNCADDR("glGenTexturesEXT"));
		this->glIsTextureEXT = reinterpret_cast<PFNGLISTEXTUREEXTPROC>(GETFUNCADDR("glIsTextureEXT"));
		this->glPrioritizeTexturesEXT = reinterpret_cast<PFNGLPRIORITIZETEXTURESEXTPROC>(GETFUNCADDR("glPrioritizeTexturesEXT"));

		/*
			GL_EXT_texture_perturb_normal
		*/
		this->glTextureNormalEXT = reinterpret_cast<PFNGLTEXTURENORMALEXTPROC>(GETFUNCADDR("glTextureNormalEXT"));

		/*
			GL_EXT_texture_storage
		*/
		this->glTexStorage1DEXT = reinterpret_cast<PFNGLTEXSTORAGE1DEXTPROC>(GETFUNCADDR("glTexStorage1DEXT"));
		this->glTexStorage2DEXT = reinterpret_cast<PFNGLTEXSTORAGE2DEXTPROC>(GETFUNCADDR("glTexStorage2DEXT"));
		this->glTexStorage3DEXT = reinterpret_cast<PFNGLTEXSTORAGE3DEXTPROC>(GETFUNCADDR("glTexStorage3DEXT"));
		this->glTextureStorage1DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE1DEXTPROC>(GETFUNCADDR("glTextureStorage1DEXT"));
		this->glTextureStorage2DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE2DEXTPROC>(GETFUNCADDR("glTextureStorage2DEXT"));
		this->glTextureStorage3DEXT = reinterpret_cast<PFNGLTEXTURESTORAGE3DEXTPROC>(GETFUNCADDR("glTextureStorage3DEXT"));

		/*
			GL_EXT_texture_view
		*/
		this->glTextureViewEXT = reinterpret_cast<PFNGLTEXTUREVIEWEXTPROC>(GETFUNCADDR("glTextureViewEXT"));

		/*
			GL_EXT_timer_query
		*/
		this->glGetQueryObjecti64vEXT = reinterpret_cast<PFNGLGETQUERYOBJECTI64VEXTPROC>(GETFUNCADDR("glGetQueryObjecti64vEXT"));
		this->glGetQueryObjectui64vEXT = reinterpret_cast<PFNGLGETQUERYOBJECTUI64VEXTPROC>(GETFUNCADDR("glGetQueryObjectui64vEXT"));

		/*
			GL_EXT_transform_feedback
		*/
		this->glBeginTransformFeedbackEXT = reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKEXTPROC>(GETFUNCADDR("glBeginTransformFeedbackEXT"));
		this->glBindBufferBaseEXT = reinterpret_cast<PFNGLBINDBUFFERBASEEXTPROC>(GETFUNCADDR("glBindBufferBaseEXT"));
		this->glBindBufferOffsetEXT = reinterpret_cast<PFNGLBINDBUFFEROFFSETEXTPROC>(GETFUNCADDR("glBindBufferOffsetEXT"));
		this->glBindBufferRangeEXT = reinterpret_cast<PFNGLBINDBUFFERRANGEEXTPROC>(GETFUNCADDR("glBindBufferRangeEXT"));
		this->glEndTransformFeedbackEXT = reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKEXTPROC>(GETFUNCADDR("glEndTransformFeedbackEXT"));
		this->glGetTransformFeedbackVaryingEXT = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC>(GETFUNCADDR("glGetTransformFeedbackVaryingEXT"));
		this->glTransformFeedbackVaryingsEXT = reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC>(GETFUNCADDR("glTransformFeedbackVaryingsEXT"));

		/*
			GL_EXT_vertex_array
		*/
		this->glArrayElementEXT = reinterpret_cast<PFNGLARRAYELEMENTEXTPROC>(GETFUNCADDR("glArrayElementEXT"));
		this->glColorPointerEXT = reinterpret_cast<PFNGLCOLORPOINTEREXTPROC>(GETFUNCADDR("glColorPointerEXT"));
		this->glDrawArraysEXT = reinterpret_cast<PFNGLDRAWARRAYSEXTPROC>(GETFUNCADDR("glDrawArraysEXT"));
		this->glEdgeFlagPointerEXT = reinterpret_cast<PFNGLEDGEFLAGPOINTEREXTPROC>(GETFUNCADDR("glEdgeFlagPointerEXT"));
		this->glIndexPointerEXT = reinterpret_cast<PFNGLINDEXPOINTEREXTPROC>(GETFUNCADDR("glIndexPointerEXT"));
		this->glNormalPointerEXT = reinterpret_cast<PFNGLNORMALPOINTEREXTPROC>(GETFUNCADDR("glNormalPointerEXT"));
		this->glTexCoordPointerEXT = reinterpret_cast<PFNGLTEXCOORDPOINTEREXTPROC>(GETFUNCADDR("glTexCoordPointerEXT"));
		this->glVertexPointerEXT = reinterpret_cast<PFNGLVERTEXPOINTEREXTPROC>(GETFUNCADDR("glVertexPointerEXT"));

		/*
			GL_EXT_vertex_array_setXXX
		*/
		this->glBindArraySetEXT = reinterpret_cast<PFNGLBINDARRAYSETEXTPROC>(GETFUNCADDR("glBindArraySetEXT"));
		this->glCreateArraySetExt = reinterpret_cast<PFNGLCREATEARRAYSETEXTPROC>(GETFUNCADDR("glCreateArraySetExt"));
		this->glDeleteArraySetsEXT = reinterpret_cast<PFNGLDELETEARRAYSETSEXTPROC>(GETFUNCADDR("glDeleteArraySetsEXT"));

		/*
			GL_EXT_vertex_attrib_64bit
		*/
		this->glGetVertexAttribLdvEXT = reinterpret_cast<PFNGLGETVERTEXATTRIBLDVEXTPROC>(GETFUNCADDR("glGetVertexAttribLdvEXT"));
		this->glVertexArrayVertexAttribLOffsetEXT = reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC>(GETFUNCADDR("glVertexArrayVertexAttribLOffsetEXT"));
		this->glVertexAttribL1dEXT = reinterpret_cast<PFNGLVERTEXATTRIBL1DEXTPROC>(GETFUNCADDR("glVertexAttribL1dEXT"));
		this->glVertexAttribL1dvEXT = reinterpret_cast<PFNGLVERTEXATTRIBL1DVEXTPROC>(GETFUNCADDR("glVertexAttribL1dvEXT"));
		this->glVertexAttribL2dEXT = reinterpret_cast<PFNGLVERTEXATTRIBL2DEXTPROC>(GETFUNCADDR("glVertexAttribL2dEXT"));
		this->glVertexAttribL2dvEXT = reinterpret_cast<PFNGLVERTEXATTRIBL2DVEXTPROC>(GETFUNCADDR("glVertexAttribL2dvEXT"));
		this->glVertexAttribL3dEXT = reinterpret_cast<PFNGLVERTEXATTRIBL3DEXTPROC>(GETFUNCADDR("glVertexAttribL3dEXT"));
		this->glVertexAttribL3dvEXT = reinterpret_cast<PFNGLVERTEXATTRIBL3DVEXTPROC>(GETFUNCADDR("glVertexAttribL3dvEXT"));
		this->glVertexAttribL4dEXT = reinterpret_cast<PFNGLVERTEXATTRIBL4DEXTPROC>(GETFUNCADDR("glVertexAttribL4dEXT"));
		this->glVertexAttribL4dvEXT = reinterpret_cast<PFNGLVERTEXATTRIBL4DVEXTPROC>(GETFUNCADDR("glVertexAttribL4dvEXT"));
		this->glVertexAttribLPointerEXT = reinterpret_cast<PFNGLVERTEXATTRIBLPOINTEREXTPROC>(GETFUNCADDR("glVertexAttribLPointerEXT"));

		/*
			GL_EXT_vertex_shader
		*/
		this->glBeginVertexShaderEXT = reinterpret_cast<PFNGLBEGINVERTEXSHADEREXTPROC>(GETFUNCADDR("glBeginVertexShaderEXT"));
		this->glBindLightParameterEXT = reinterpret_cast<PFNGLBINDLIGHTPARAMETEREXTPROC>(GETFUNCADDR("glBindLightParameterEXT"));
		this->glBindMaterialParameterEXT = reinterpret_cast<PFNGLBINDMATERIALPARAMETEREXTPROC>(GETFUNCADDR("glBindMaterialParameterEXT"));
		this->glBindParameterEXT = reinterpret_cast<PFNGLBINDPARAMETEREXTPROC>(GETFUNCADDR("glBindParameterEXT"));
		this->glBindTexGenParameterEXT = reinterpret_cast<PFNGLBINDTEXGENPARAMETEREXTPROC>(GETFUNCADDR("glBindTexGenParameterEXT"));
		this->glBindTextureUnitParameterEXT = reinterpret_cast<PFNGLBINDTEXTUREUNITPARAMETEREXTPROC>(GETFUNCADDR("glBindTextureUnitParameterEXT"));
		this->glBindVertexShaderEXT = reinterpret_cast<PFNGLBINDVERTEXSHADEREXTPROC>(GETFUNCADDR("glBindVertexShaderEXT"));
		this->glDeleteVertexShaderEXT = reinterpret_cast<PFNGLDELETEVERTEXSHADEREXTPROC>(GETFUNCADDR("glDeleteVertexShaderEXT"));
		this->glDisableVariantClientStateEXT = reinterpret_cast<PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC>(GETFUNCADDR("glDisableVariantClientStateEXT"));
		this->glEnableVariantClientStateEXT = reinterpret_cast<PFNGLENABLEVARIANTCLIENTSTATEEXTPROC>(GETFUNCADDR("glEnableVariantClientStateEXT"));
		this->glEndVertexShaderEXT = reinterpret_cast<PFNGLENDVERTEXSHADEREXTPROC>(GETFUNCADDR("glEndVertexShaderEXT"));
		this->glExtractComponentEXT = reinterpret_cast<PFNGLEXTRACTCOMPONENTEXTPROC>(GETFUNCADDR("glExtractComponentEXT"));
		this->glGenSymbolsEXT = reinterpret_cast<PFNGLGENSYMBOLSEXTPROC>(GETFUNCADDR("glGenSymbolsEXT"));
		this->glGenVertexShadersEXT = reinterpret_cast<PFNGLGENVERTEXSHADERSEXTPROC>(GETFUNCADDR("glGenVertexShadersEXT"));
		this->glGetInvariantBooleanvEXT = reinterpret_cast<PFNGLGETINVARIANTBOOLEANVEXTPROC>(GETFUNCADDR("glGetInvariantBooleanvEXT"));
		this->glGetInvariantFloatvEXT = reinterpret_cast<PFNGLGETINVARIANTFLOATVEXTPROC>(GETFUNCADDR("glGetInvariantFloatvEXT"));
		this->glGetInvariantIntegervEXT = reinterpret_cast<PFNGLGETINVARIANTINTEGERVEXTPROC>(GETFUNCADDR("glGetInvariantIntegervEXT"));
		this->glGetLocalConstantBooleanvEXT = reinterpret_cast<PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC>(GETFUNCADDR("glGetLocalConstantBooleanvEXT"));
		this->glGetLocalConstantFloatvEXT = reinterpret_cast<PFNGLGETLOCALCONSTANTFLOATVEXTPROC>(GETFUNCADDR("glGetLocalConstantFloatvEXT"));
		this->glGetLocalConstantIntegervEXT = reinterpret_cast<PFNGLGETLOCALCONSTANTINTEGERVEXTPROC>(GETFUNCADDR("glGetLocalConstantIntegervEXT"));
		this->glGetVariantBooleanvEXT = reinterpret_cast<PFNGLGETVARIANTBOOLEANVEXTPROC>(GETFUNCADDR("glGetVariantBooleanvEXT"));
		this->glGetVariantFloatvEXT = reinterpret_cast<PFNGLGETVARIANTFLOATVEXTPROC>(GETFUNCADDR("glGetVariantFloatvEXT"));
		this->glGetVariantIntegervEXT = reinterpret_cast<PFNGLGETVARIANTINTEGERVEXTPROC>(GETFUNCADDR("glGetVariantIntegervEXT"));
		this->glGetVariantPointervEXT = reinterpret_cast<PFNGLGETVARIANTPOINTERVEXTPROC>(GETFUNCADDR("glGetVariantPointervEXT"));
		this->glInsertComponentEXT = reinterpret_cast<PFNGLINSERTCOMPONENTEXTPROC>(GETFUNCADDR("glInsertComponentEXT"));
		this->glIsVariantEnabledEXT = reinterpret_cast<PFNGLISVARIANTENABLEDEXTPROC>(GETFUNCADDR("glIsVariantEnabledEXT"));
		this->glSetInvariantEXT = reinterpret_cast<PFNGLSETINVARIANTEXTPROC>(GETFUNCADDR("glSetInvariantEXT"));
		this->glSetLocalConstantEXT = reinterpret_cast<PFNGLSETLOCALCONSTANTEXTPROC>(GETFUNCADDR("glSetLocalConstantEXT"));
		this->glShaderOp1EXT = reinterpret_cast<PFNGLSHADEROP1EXTPROC>(GETFUNCADDR("glShaderOp1EXT"));
		this->glShaderOp2EXT = reinterpret_cast<PFNGLSHADEROP2EXTPROC>(GETFUNCADDR("glShaderOp2EXT"));
		this->glShaderOp3EXT = reinterpret_cast<PFNGLSHADEROP3EXTPROC>(GETFUNCADDR("glShaderOp3EXT"));
		this->glSwizzleEXT = reinterpret_cast<PFNGLSWIZZLEEXTPROC>(GETFUNCADDR("glSwizzleEXT"));
		this->glVariantPointerEXT = reinterpret_cast<PFNGLVARIANTPOINTEREXTPROC>(GETFUNCADDR("glVariantPointerEXT"));
		this->glVariantbvEXT = reinterpret_cast<PFNGLVARIANTBVEXTPROC>(GETFUNCADDR("glVariantbvEXT"));
		this->glVariantdvEXT = reinterpret_cast<PFNGLVARIANTDVEXTPROC>(GETFUNCADDR("glVariantdvEXT"));
		this->glVariantfvEXT = reinterpret_cast<PFNGLVARIANTFVEXTPROC>(GETFUNCADDR("glVariantfvEXT"));
		this->glVariantivEXT = reinterpret_cast<PFNGLVARIANTIVEXTPROC>(GETFUNCADDR("glVariantivEXT"));
		this->glVariantsvEXT = reinterpret_cast<PFNGLVARIANTSVEXTPROC>(GETFUNCADDR("glVariantsvEXT"));
		this->glVariantubvEXT = reinterpret_cast<PFNGLVARIANTUBVEXTPROC>(GETFUNCADDR("glVariantubvEXT"));
		this->glVariantuivEXT = reinterpret_cast<PFNGLVARIANTUIVEXTPROC>(GETFUNCADDR("glVariantuivEXT"));
		this->glVariantusvEXT = reinterpret_cast<PFNGLVARIANTUSVEXTPROC>(GETFUNCADDR("glVariantusvEXT"));
		this->glWriteMaskEXT = reinterpret_cast<PFNGLWRITEMASKEXTPROC>(GETFUNCADDR("glWriteMaskEXT"));

		/*
			GL_EXT_vertex_weighting
		*/
		this->glVertexWeightPointerEXT = reinterpret_cast<PFNGLVERTEXWEIGHTPOINTEREXTPROC>(GETFUNCADDR("glVertexWeightPointerEXT"));
		this->glVertexWeightfEXT = reinterpret_cast<PFNGLVERTEXWEIGHTFEXTPROC>(GETFUNCADDR("glVertexWeightfEXT"));
		this->glVertexWeightfvEXT = reinterpret_cast<PFNGLVERTEXWEIGHTFVEXTPROC>(GETFUNCADDR("glVertexWeightfvEXT"));

		/*
			GL_EXT_win32_keyed_mutex
		*/
		this->glAcquireKeyedMutexWin32EXT = reinterpret_cast<PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC>(GETFUNCADDR("glAcquireKeyedMutexWin32EXT"));
		this->glReleaseKeyedMutexWin32EXT = reinterpret_cast<PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC>(GETFUNCADDR("glReleaseKeyedMutexWin32EXT"));

		/*
			GL_EXT_window_rectangles
		*/
		this->glWindowRectanglesEXT = reinterpret_cast<PFNGLWINDOWRECTANGLESEXTPROC>(GETFUNCADDR("glWindowRectanglesEXT"));

		/*
			GL_EXT_x11_sync_object
		*/
		this->glImportSyncEXT = reinterpret_cast<PFNGLIMPORTSYNCEXTPROC>(GETFUNCADDR("glImportSyncEXT"));

		/*
			GL_GREMEDY_frame_terminator
		*/
		this->glFrameTerminatorGREMEDY = reinterpret_cast<PFNGLFRAMETERMINATORGREMEDYPROC>(GETFUNCADDR("glFrameTerminatorGREMEDY"));

		/*
			GL_GREMEDY_string_marker
		*/
		this->glStringMarkerGREMEDY = reinterpret_cast<PFNGLSTRINGMARKERGREMEDYPROC>(GETFUNCADDR("glStringMarkerGREMEDY"));

		/*
			GL_HP_image_transform
		*/
		this->glGetImageTransformParameterfvHP = reinterpret_cast<PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC>(GETFUNCADDR("glGetImageTransformParameterfvHP"));
		this->glGetImageTransformParameterivHP = reinterpret_cast<PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC>(GETFUNCADDR("glGetImageTransformParameterivHP"));
		this->glImageTransformParameterfHP = reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERFHPPROC>(GETFUNCADDR("glImageTransformParameterfHP"));
		this->glImageTransformParameterfvHP = reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERFVHPPROC>(GETFUNCADDR("glImageTransformParameterfvHP"));
		this->glImageTransformParameteriHP = reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERIHPPROC>(GETFUNCADDR("glImageTransformParameteriHP"));
		this->glImageTransformParameterivHP = reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERIVHPPROC>(GETFUNCADDR("glImageTransformParameterivHP"));

		/*
			GL_IBM_multimode_draw_arrays
		*/
		this->glMultiModeDrawArraysIBM = reinterpret_cast<PFNGLMULTIMODEDRAWARRAYSIBMPROC>(GETFUNCADDR("glMultiModeDrawArraysIBM"));
		this->glMultiModeDrawElementsIBM = reinterpret_cast<PFNGLMULTIMODEDRAWELEMENTSIBMPROC>(GETFUNCADDR("glMultiModeDrawElementsIBM"));

		/*
			GL_IBM_vertex_array_lists
		*/
		this->glColorPointerListIBM = reinterpret_cast<PFNGLCOLORPOINTERLISTIBMPROC>(GETFUNCADDR("glColorPointerListIBM"));
		this->glEdgeFlagPointerListIBM = reinterpret_cast<PFNGLEDGEFLAGPOINTERLISTIBMPROC>(GETFUNCADDR("glEdgeFlagPointerListIBM"));
		this->glFogCoordPointerListIBM = reinterpret_cast<PFNGLFOGCOORDPOINTERLISTIBMPROC>(GETFUNCADDR("glFogCoordPointerListIBM"));
		this->glIndexPointerListIBM = reinterpret_cast<PFNGLINDEXPOINTERLISTIBMPROC>(GETFUNCADDR("glIndexPointerListIBM"));
		this->glNormalPointerListIBM = reinterpret_cast<PFNGLNORMALPOINTERLISTIBMPROC>(GETFUNCADDR("glNormalPointerListIBM"));
		this->glSecondaryColorPointerListIBM = reinterpret_cast<PFNGLSECONDARYCOLORPOINTERLISTIBMPROC>(GETFUNCADDR("glSecondaryColorPointerListIBM"));
		this->glTexCoordPointerListIBM = reinterpret_cast<PFNGLTEXCOORDPOINTERLISTIBMPROC>(GETFUNCADDR("glTexCoordPointerListIBM"));
		this->glVertexPointerListIBM = reinterpret_cast<PFNGLVERTEXPOINTERLISTIBMPROC>(GETFUNCADDR("glVertexPointerListIBM"));

		/*
			GL_INTEL_map_texture
		*/
		this->glMapTexture2DINTEL = reinterpret_cast<PFNGLMAPTEXTURE2DINTELPROC>(GETFUNCADDR("glMapTexture2DINTEL"));
		this->glSyncTextureINTEL = reinterpret_cast<PFNGLSYNCTEXTUREINTELPROC>(GETFUNCADDR("glSyncTextureINTEL"));
		this->glUnmapTexture2DINTEL = reinterpret_cast<PFNGLUNMAPTEXTURE2DINTELPROC>(GETFUNCADDR("glUnmapTexture2DINTEL"));

		/*
			GL_INTEL_parallel_arrays
		*/
		this->glColorPointervINTEL = reinterpret_cast<PFNGLCOLORPOINTERVINTELPROC>(GETFUNCADDR("glColorPointervINTEL"));
		this->glNormalPointervINTEL = reinterpret_cast<PFNGLNORMALPOINTERVINTELPROC>(GETFUNCADDR("glNormalPointervINTEL"));
		this->glTexCoordPointervINTEL = reinterpret_cast<PFNGLTEXCOORDPOINTERVINTELPROC>(GETFUNCADDR("glTexCoordPointervINTEL"));
		this->glVertexPointervINTEL = reinterpret_cast<PFNGLVERTEXPOINTERVINTELPROC>(GETFUNCADDR("glVertexPointervINTEL"));

		/*
			GL_INTEL_performance_query
		*/
		this->glBeginPerfQueryINTEL = reinterpret_cast<PFNGLBEGINPERFQUERYINTELPROC>(GETFUNCADDR("glBeginPerfQueryINTEL"));
		this->glCreatePerfQueryINTEL = reinterpret_cast<PFNGLCREATEPERFQUERYINTELPROC>(GETFUNCADDR("glCreatePerfQueryINTEL"));
		this->glDeletePerfQueryINTEL = reinterpret_cast<PFNGLDELETEPERFQUERYINTELPROC>(GETFUNCADDR("glDeletePerfQueryINTEL"));
		this->glEndPerfQueryINTEL = reinterpret_cast<PFNGLENDPERFQUERYINTELPROC>(GETFUNCADDR("glEndPerfQueryINTEL"));
		this->glGetFirstPerfQueryIdINTEL = reinterpret_cast<PFNGLGETFIRSTPERFQUERYIDINTELPROC>(GETFUNCADDR("glGetFirstPerfQueryIdINTEL"));
		this->glGetNextPerfQueryIdINTEL = reinterpret_cast<PFNGLGETNEXTPERFQUERYIDINTELPROC>(GETFUNCADDR("glGetNextPerfQueryIdINTEL"));
		this->glGetPerfCounterInfoINTEL = reinterpret_cast<PFNGLGETPERFCOUNTERINFOINTELPROC>(GETFUNCADDR("glGetPerfCounterInfoINTEL"));
		this->glGetPerfQueryDataINTEL = reinterpret_cast<PFNGLGETPERFQUERYDATAINTELPROC>(GETFUNCADDR("glGetPerfQueryDataINTEL"));
		this->glGetPerfQueryIdByNameINTEL = reinterpret_cast<PFNGLGETPERFQUERYIDBYNAMEINTELPROC>(GETFUNCADDR("glGetPerfQueryIdByNameINTEL"));
		this->glGetPerfQueryInfoINTEL = reinterpret_cast<PFNGLGETPERFQUERYINFOINTELPROC>(GETFUNCADDR("glGetPerfQueryInfoINTEL"));

		/*
			GL_INTEL_texture_scissor
		*/
		this->glTexScissorFuncINTEL = reinterpret_cast<PFNGLTEXSCISSORFUNCINTELPROC>(GETFUNCADDR("glTexScissorFuncINTEL"));
		this->glTexScissorINTEL = reinterpret_cast<PFNGLTEXSCISSORINTELPROC>(GETFUNCADDR("glTexScissorINTEL"));

		/*
			GL_KHR_blend_equation_advanced
		*/
		this->glBlendBarrierKHR = reinterpret_cast<PFNGLBLENDBARRIERKHRPROC>(GETFUNCADDR("glBlendBarrierKHR"));

		/*
			GL_KHR_debug
		*/
		this->glDebugMessageCallback = reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKPROC>(GETFUNCADDR("glDebugMessageCallback"));
		this->glDebugMessageControl = reinterpret_cast<PFNGLDEBUGMESSAGECONTROLPROC>(GETFUNCADDR("glDebugMessageControl"));
		this->glDebugMessageInsert = reinterpret_cast<PFNGLDEBUGMESSAGEINSERTPROC>(GETFUNCADDR("glDebugMessageInsert"));
		this->glGetDebugMessageLog = reinterpret_cast<PFNGLGETDEBUGMESSAGELOGPROC>(GETFUNCADDR("glGetDebugMessageLog"));
		this->glGetObjectLabel = reinterpret_cast<PFNGLGETOBJECTLABELPROC>(GETFUNCADDR("glGetObjectLabel"));
		this->glGetObjectPtrLabel = reinterpret_cast<PFNGLGETOBJECTPTRLABELPROC>(GETFUNCADDR("glGetObjectPtrLabel"));
		this->glObjectLabel = reinterpret_cast<PFNGLOBJECTLABELPROC>(GETFUNCADDR("glObjectLabel"));
		this->glObjectPtrLabel = reinterpret_cast<PFNGLOBJECTPTRLABELPROC>(GETFUNCADDR("glObjectPtrLabel"));
		this->glPopDebugGroup = reinterpret_cast<PFNGLPOPDEBUGGROUPPROC>(GETFUNCADDR("glPopDebugGroup"));
		this->glPushDebugGroup = reinterpret_cast<PFNGLPUSHDEBUGGROUPPROC>(GETFUNCADDR("glPushDebugGroup"));

		/*
			GL_KHR_parallel_shader_compile
		*/
		this->glMaxShaderCompilerThreadsKHR = reinterpret_cast<PFNGLMAXSHADERCOMPILERTHREADSKHRPROC>(GETFUNCADDR("glMaxShaderCompilerThreadsKHR"));

		/*
			GL_KHR_robustness
		*/
		this->glGetnUniformfv = reinterpret_cast<PFNGLGETNUNIFORMFVPROC>(GETFUNCADDR("glGetnUniformfv"));
		this->glGetnUniformiv = reinterpret_cast<PFNGLGETNUNIFORMIVPROC>(GETFUNCADDR("glGetnUniformiv"));
		this->glGetnUniformuiv = reinterpret_cast<PFNGLGETNUNIFORMUIVPROC>(GETFUNCADDR("glGetnUniformuiv"));
		this->glReadnPixels = reinterpret_cast<PFNGLREADNPIXELSPROC>(GETFUNCADDR("glReadnPixels"));

		/*
			GL_KTX_buffer_region
		*/
		this->glBufferRegionEnabled = reinterpret_cast<PFNGLBUFFERREGIONENABLEDPROC>(GETFUNCADDR("glBufferRegionEnabled"));
		this->glDeleteBufferRegion = reinterpret_cast<PFNGLDELETEBUFFERREGIONPROC>(GETFUNCADDR("glDeleteBufferRegion"));
		this->glDrawBufferRegion = reinterpret_cast<PFNGLDRAWBUFFERREGIONPROC>(GETFUNCADDR("glDrawBufferRegion"));
		this->glNewBufferRegion = reinterpret_cast<PFNGLNEWBUFFERREGIONPROC>(GETFUNCADDR("glNewBufferRegion"));
		this->glReadBufferRegion = reinterpret_cast<PFNGLREADBUFFERREGIONPROC>(GETFUNCADDR("glReadBufferRegion"));

		/*
			GL_MESA_resize_buffers
		*/
		this->glResizeBuffersMESA = reinterpret_cast<PFNGLRESIZEBUFFERSMESAPROC>(GETFUNCADDR("glResizeBuffersMESA"));

		/*
			GL_MESA_window_pos
		*/
		this->glWindowPos2dMESA = reinterpret_cast<PFNGLWINDOWPOS2DMESAPROC>(GETFUNCADDR("glWindowPos2dMESA"));
		this->glWindowPos2dvMESA = reinterpret_cast<PFNGLWINDOWPOS2DVMESAPROC>(GETFUNCADDR("glWindowPos2dvMESA"));
		this->glWindowPos2fMESA = reinterpret_cast<PFNGLWINDOWPOS2FMESAPROC>(GETFUNCADDR("glWindowPos2fMESA"));
		this->glWindowPos2fvMESA = reinterpret_cast<PFNGLWINDOWPOS2FVMESAPROC>(GETFUNCADDR("glWindowPos2fvMESA"));
		this->glWindowPos2iMESA = reinterpret_cast<PFNGLWINDOWPOS2IMESAPROC>(GETFUNCADDR("glWindowPos2iMESA"));
		this->glWindowPos2ivMESA = reinterpret_cast<PFNGLWINDOWPOS2IVMESAPROC>(GETFUNCADDR("glWindowPos2ivMESA"));
		this->glWindowPos2sMESA = reinterpret_cast<PFNGLWINDOWPOS2SMESAPROC>(GETFUNCADDR("glWindowPos2sMESA"));
		this->glWindowPos2svMESA = reinterpret_cast<PFNGLWINDOWPOS2SVMESAPROC>(GETFUNCADDR("glWindowPos2svMESA"));
		this->glWindowPos3dMESA = reinterpret_cast<PFNGLWINDOWPOS3DMESAPROC>(GETFUNCADDR("glWindowPos3dMESA"));
		this->glWindowPos3dvMESA = reinterpret_cast<PFNGLWINDOWPOS3DVMESAPROC>(GETFUNCADDR("glWindowPos3dvMESA"));
		this->glWindowPos3fMESA = reinterpret_cast<PFNGLWINDOWPOS3FMESAPROC>(GETFUNCADDR("glWindowPos3fMESA"));
		this->glWindowPos3fvMESA = reinterpret_cast<PFNGLWINDOWPOS3FVMESAPROC>(GETFUNCADDR("glWindowPos3fvMESA"));
		this->glWindowPos3iMESA = reinterpret_cast<PFNGLWINDOWPOS3IMESAPROC>(GETFUNCADDR("glWindowPos3iMESA"));
		this->glWindowPos3ivMESA = reinterpret_cast<PFNGLWINDOWPOS3IVMESAPROC>(GETFUNCADDR("glWindowPos3ivMESA"));
		this->glWindowPos3sMESA = reinterpret_cast<PFNGLWINDOWPOS3SMESAPROC>(GETFUNCADDR("glWindowPos3sMESA"));
		this->glWindowPos3svMESA = reinterpret_cast<PFNGLWINDOWPOS3SVMESAPROC>(GETFUNCADDR("glWindowPos3svMESA"));
		this->glWindowPos4dMESA = reinterpret_cast<PFNGLWINDOWPOS4DMESAPROC>(GETFUNCADDR("glWindowPos4dMESA"));
		this->glWindowPos4dvMESA = reinterpret_cast<PFNGLWINDOWPOS4DVMESAPROC>(GETFUNCADDR("glWindowPos4dvMESA"));
		this->glWindowPos4fMESA = reinterpret_cast<PFNGLWINDOWPOS4FMESAPROC>(GETFUNCADDR("glWindowPos4fMESA"));
		this->glWindowPos4fvMESA = reinterpret_cast<PFNGLWINDOWPOS4FVMESAPROC>(GETFUNCADDR("glWindowPos4fvMESA"));
		this->glWindowPos4iMESA = reinterpret_cast<PFNGLWINDOWPOS4IMESAPROC>(GETFUNCADDR("glWindowPos4iMESA"));
		this->glWindowPos4ivMESA = reinterpret_cast<PFNGLWINDOWPOS4IVMESAPROC>(GETFUNCADDR("glWindowPos4ivMESA"));
		this->glWindowPos4sMESA = reinterpret_cast<PFNGLWINDOWPOS4SMESAPROC>(GETFUNCADDR("glWindowPos4sMESA"));
		this->glWindowPos4svMESA = reinterpret_cast<PFNGLWINDOWPOS4SVMESAPROC>(GETFUNCADDR("glWindowPos4svMESA"));

		/*
			GL_NVX_conditional_render
		*/
		this->glBeginConditionalRenderNVX = reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVXPROC>(GETFUNCADDR("glBeginConditionalRenderNVX"));
		this->glEndConditionalRenderNVX = reinterpret_cast<PFNGLENDCONDITIONALRENDERNVXPROC>(GETFUNCADDR("glEndConditionalRenderNVX"));

		/*
			GL_NVX_linked_gpu_multicast
		*/
		this->glLGPUCopyImageSubDataNVX = reinterpret_cast<PFNGLLGPUCOPYIMAGESUBDATANVXPROC>(GETFUNCADDR("glLGPUCopyImageSubDataNVX"));
		this->glLGPUInterlockNVX = reinterpret_cast<PFNGLLGPUINTERLOCKNVXPROC>(GETFUNCADDR("glLGPUInterlockNVX"));
		this->glLGPUNamedBufferSubDataNVX = reinterpret_cast<PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC>(GETFUNCADDR("glLGPUNamedBufferSubDataNVX"));

		/*
			GL_NV_3dvision_settings
		*/
		this->glStereoParameterfNV = reinterpret_cast<PFNGLSTEREOPARAMETERFNVPROC>(GETFUNCADDR("glStereoParameterfNV"));
		this->glStereoParameteriNV = reinterpret_cast<PFNGLSTEREOPARAMETERINVPROC>(GETFUNCADDR("glStereoParameteriNV"));

		/*
			GL_NV_bindless_multi_draw_indirect
		*/
		this->glMultiDrawArraysIndirectBindlessNV = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC>(GETFUNCADDR("glMultiDrawArraysIndirectBindlessNV"));
		this->glMultiDrawElementsIndirectBindlessNV = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC>(GETFUNCADDR("glMultiDrawElementsIndirectBindlessNV"));

		/*
			GL_NV_bindless_multi_draw_indirect_count
		*/
		this->glMultiDrawArraysIndirectBindlessCountNV = reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC>(GETFUNCADDR("glMultiDrawArraysIndirectBindlessCountNV"));
		this->glMultiDrawElementsIndirectBindlessCountNV = reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC>(GETFUNCADDR("glMultiDrawElementsIndirectBindlessCountNV"));

		/*
			GL_NV_bindless_texture
		*/
		this->glGetImageHandleNV = reinterpret_cast<PFNGLGETIMAGEHANDLENVPROC>(GETFUNCADDR("glGetImageHandleNV"));
		this->glGetTextureHandleNV = reinterpret_cast<PFNGLGETTEXTUREHANDLENVPROC>(GETFUNCADDR("glGetTextureHandleNV"));
		this->glGetTextureSamplerHandleNV = reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLENVPROC>(GETFUNCADDR("glGetTextureSamplerHandleNV"));
		this->glIsImageHandleResidentNV = reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTNVPROC>(GETFUNCADDR("glIsImageHandleResidentNV"));
		this->glIsTextureHandleResidentNV = reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTNVPROC>(GETFUNCADDR("glIsTextureHandleResidentNV"));
		this->glMakeImageHandleNonResidentNV = reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC>(GETFUNCADDR("glMakeImageHandleNonResidentNV"));
		this->glMakeImageHandleResidentNV = reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTNVPROC>(GETFUNCADDR("glMakeImageHandleResidentNV"));
		this->glMakeTextureHandleNonResidentNV = reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC>(GETFUNCADDR("glMakeTextureHandleNonResidentNV"));
		this->glMakeTextureHandleResidentNV = reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTNVPROC>(GETFUNCADDR("glMakeTextureHandleResidentNV"));
		this->glProgramUniformHandleui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC>(GETFUNCADDR("glProgramUniformHandleui64NV"));
		this->glProgramUniformHandleui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC>(GETFUNCADDR("glProgramUniformHandleui64vNV"));
		this->glUniformHandleui64NV = reinterpret_cast<PFNGLUNIFORMHANDLEUI64NVPROC>(GETFUNCADDR("glUniformHandleui64NV"));
		this->glUniformHandleui64vNV = reinterpret_cast<PFNGLUNIFORMHANDLEUI64VNVPROC>(GETFUNCADDR("glUniformHandleui64vNV"));

		/*
			GL_NV_blend_equation_advanced
		*/
		this->glBlendBarrierNV = reinterpret_cast<PFNGLBLENDBARRIERNVPROC>(GETFUNCADDR("glBlendBarrierNV"));
		this->glBlendParameteriNV = reinterpret_cast<PFNGLBLENDPARAMETERINVPROC>(GETFUNCADDR("glBlendParameteriNV"));

		/*
			GL_NV_clip_space_w_scaling
		*/
		this->glViewportPositionWScaleNV = reinterpret_cast<PFNGLVIEWPORTPOSITIONWSCALENVPROC>(GETFUNCADDR("glViewportPositionWScaleNV"));

		/*
			GL_NV_command_list
		*/
		this->glCallCommandListNV = reinterpret_cast<PFNGLCALLCOMMANDLISTNVPROC>(GETFUNCADDR("glCallCommandListNV"));
		this->glCommandListSegmentsNV = reinterpret_cast<PFNGLCOMMANDLISTSEGMENTSNVPROC>(GETFUNCADDR("glCommandListSegmentsNV"));
		this->glCompileCommandListNV = reinterpret_cast<PFNGLCOMPILECOMMANDLISTNVPROC>(GETFUNCADDR("glCompileCommandListNV"));
		this->glCreateCommandListsNV = reinterpret_cast<PFNGLCREATECOMMANDLISTSNVPROC>(GETFUNCADDR("glCreateCommandListsNV"));
		this->glCreateStatesNV = reinterpret_cast<PFNGLCREATESTATESNVPROC>(GETFUNCADDR("glCreateStatesNV"));
		this->glDeleteCommandListsNV = reinterpret_cast<PFNGLDELETECOMMANDLISTSNVPROC>(GETFUNCADDR("glDeleteCommandListsNV"));
		this->glDeleteStatesNV = reinterpret_cast<PFNGLDELETESTATESNVPROC>(GETFUNCADDR("glDeleteStatesNV"));
		this->glDrawCommandsAddressNV = reinterpret_cast<PFNGLDRAWCOMMANDSADDRESSNVPROC>(GETFUNCADDR("glDrawCommandsAddressNV"));
		this->glDrawCommandsNV = reinterpret_cast<PFNGLDRAWCOMMANDSNVPROC>(GETFUNCADDR("glDrawCommandsNV"));
		this->glDrawCommandsStatesAddressNV = reinterpret_cast<PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC>(GETFUNCADDR("glDrawCommandsStatesAddressNV"));
		this->glDrawCommandsStatesNV = reinterpret_cast<PFNGLDRAWCOMMANDSSTATESNVPROC>(GETFUNCADDR("glDrawCommandsStatesNV"));
		this->glGetCommandHeaderNV = reinterpret_cast<PFNGLGETCOMMANDHEADERNVPROC>(GETFUNCADDR("glGetCommandHeaderNV"));
		this->glGetStageIndexNV = reinterpret_cast<PFNGLGETSTAGEINDEXNVPROC>(GETFUNCADDR("glGetStageIndexNV"));
		this->glIsCommandListNV = reinterpret_cast<PFNGLISCOMMANDLISTNVPROC>(GETFUNCADDR("glIsCommandListNV"));
		this->glIsStateNV = reinterpret_cast<PFNGLISSTATENVPROC>(GETFUNCADDR("glIsStateNV"));
		this->glListDrawCommandsStatesClientNV = reinterpret_cast<PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC>(GETFUNCADDR("glListDrawCommandsStatesClientNV"));
		this->glStateCaptureNV = reinterpret_cast<PFNGLSTATECAPTURENVPROC>(GETFUNCADDR("glStateCaptureNV"));

		/*
			GL_NV_conditional_render
		*/
		this->glBeginConditionalRenderNV = reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVPROC>(GETFUNCADDR("glBeginConditionalRenderNV"));
		this->glEndConditionalRenderNV = reinterpret_cast<PFNGLENDCONDITIONALRENDERNVPROC>(GETFUNCADDR("glEndConditionalRenderNV"));

		/*
			GL_NV_conservative_raster
		*/
		this->glSubpixelPrecisionBiasNV = reinterpret_cast<PFNGLSUBPIXELPRECISIONBIASNVPROC>(GETFUNCADDR("glSubpixelPrecisionBiasNV"));

		/*
			GL_NV_conservative_raster_dilate
		*/
		this->glConservativeRasterParameterfNV = reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERFNVPROC>(GETFUNCADDR("glConservativeRasterParameterfNV"));

		/*
			GL_NV_conservative_raster_pre_snap_triangles
		*/
		this->glConservativeRasterParameteriNV = reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERINVPROC>(GETFUNCADDR("glConservativeRasterParameteriNV"));

		/*
			GL_NV_copy_buffer
		*/
		this->glCopyBufferSubDataNV = reinterpret_cast<PFNGLCOPYBUFFERSUBDATANVPROC>(GETFUNCADDR("glCopyBufferSubDataNV"));

		/*
			GL_NV_copy_image
		*/
		this->glCopyImageSubDataNV = reinterpret_cast<PFNGLCOPYIMAGESUBDATANVPROC>(GETFUNCADDR("glCopyImageSubDataNV"));

		/*
			GL_NV_depth_buffer_float
		*/
		this->glClearDepthdNV = reinterpret_cast<PFNGLCLEARDEPTHDNVPROC>(GETFUNCADDR("glClearDepthdNV"));
		this->glDepthBoundsdNV = reinterpret_cast<PFNGLDEPTHBOUNDSDNVPROC>(GETFUNCADDR("glDepthBoundsdNV"));
		this->glDepthRangedNV = reinterpret_cast<PFNGLDEPTHRANGEDNVPROC>(GETFUNCADDR("glDepthRangedNV"));

		/*
			GL_NV_draw_buffers
		*/
		this->glDrawBuffersNV = reinterpret_cast<PFNGLDRAWBUFFERSNVPROC>(GETFUNCADDR("glDrawBuffersNV"));

		/*
			GL_NV_draw_instanced
		*/
		this->glDrawArraysInstancedNV = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDNVPROC>(GETFUNCADDR("glDrawArraysInstancedNV"));
		this->glDrawElementsInstancedNV = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDNVPROC>(GETFUNCADDR("glDrawElementsInstancedNV"));

		/*
			GL_NV_draw_texture
		*/
		this->glDrawTextureNV = reinterpret_cast<PFNGLDRAWTEXTURENVPROC>(GETFUNCADDR("glDrawTextureNV"));

		/*
			GL_NV_draw_vulkan_image
		*/
		this->glDrawVkImageNV = reinterpret_cast<PFNGLDRAWVKIMAGENVPROC>(GETFUNCADDR("glDrawVkImageNV"));
		this->glGetVkProcAddrNV = reinterpret_cast<PFNGLGETVKPROCADDRNVPROC>(GETFUNCADDR("glGetVkProcAddrNV"));
		this->glSignalVkFenceNV = reinterpret_cast<PFNGLSIGNALVKFENCENVPROC>(GETFUNCADDR("glSignalVkFenceNV"));
		this->glSignalVkSemaphoreNV = reinterpret_cast<PFNGLSIGNALVKSEMAPHORENVPROC>(GETFUNCADDR("glSignalVkSemaphoreNV"));
		this->glWaitVkSemaphoreNV = reinterpret_cast<PFNGLWAITVKSEMAPHORENVPROC>(GETFUNCADDR("glWaitVkSemaphoreNV"));

		/*
			GL_NV_evaluators
		*/
		this->glEvalMapsNV = reinterpret_cast<PFNGLEVALMAPSNVPROC>(GETFUNCADDR("glEvalMapsNV"));
		this->glGetMapAttribParameterfvNV = reinterpret_cast<PFNGLGETMAPATTRIBPARAMETERFVNVPROC>(GETFUNCADDR("glGetMapAttribParameterfvNV"));
		this->glGetMapAttribParameterivNV = reinterpret_cast<PFNGLGETMAPATTRIBPARAMETERIVNVPROC>(GETFUNCADDR("glGetMapAttribParameterivNV"));
		this->glGetMapControlPointsNV = reinterpret_cast<PFNGLGETMAPCONTROLPOINTSNVPROC>(GETFUNCADDR("glGetMapControlPointsNV"));
		this->glGetMapParameterfvNV = reinterpret_cast<PFNGLGETMAPPARAMETERFVNVPROC>(GETFUNCADDR("glGetMapParameterfvNV"));
		this->glGetMapParameterivNV = reinterpret_cast<PFNGLGETMAPPARAMETERIVNVPROC>(GETFUNCADDR("glGetMapParameterivNV"));
		this->glMapControlPointsNV = reinterpret_cast<PFNGLMAPCONTROLPOINTSNVPROC>(GETFUNCADDR("glMapControlPointsNV"));
		this->glMapParameterfvNV = reinterpret_cast<PFNGLMAPPARAMETERFVNVPROC>(GETFUNCADDR("glMapParameterfvNV"));
		this->glMapParameterivNV = reinterpret_cast<PFNGLMAPPARAMETERIVNVPROC>(GETFUNCADDR("glMapParameterivNV"));

		/*
			GL_NV_explicit_multisample
		*/
		this->glGetMultisamplefvNV = reinterpret_cast<PFNGLGETMULTISAMPLEFVNVPROC>(GETFUNCADDR("glGetMultisamplefvNV"));
		this->glSampleMaskIndexedNV = reinterpret_cast<PFNGLSAMPLEMASKINDEXEDNVPROC>(GETFUNCADDR("glSampleMaskIndexedNV"));
		this->glTexRenderbufferNV = reinterpret_cast<PFNGLTEXRENDERBUFFERNVPROC>(GETFUNCADDR("glTexRenderbufferNV"));

		/*
			GL_NV_fence
		*/
		this->glDeleteFencesNV = reinterpret_cast<PFNGLDELETEFENCESNVPROC>(GETFUNCADDR("glDeleteFencesNV"));
		this->glFinishFenceNV = reinterpret_cast<PFNGLFINISHFENCENVPROC>(GETFUNCADDR("glFinishFenceNV"));
		this->glGenFencesNV = reinterpret_cast<PFNGLGENFENCESNVPROC>(GETFUNCADDR("glGenFencesNV"));
		this->glGetFenceivNV = reinterpret_cast<PFNGLGETFENCEIVNVPROC>(GETFUNCADDR("glGetFenceivNV"));
		this->glIsFenceNV = reinterpret_cast<PFNGLISFENCENVPROC>(GETFUNCADDR("glIsFenceNV"));
		this->glSetFenceNV = reinterpret_cast<PFNGLSETFENCENVPROC>(GETFUNCADDR("glSetFenceNV"));
		this->glTestFenceNV = reinterpret_cast<PFNGLTESTFENCENVPROC>(GETFUNCADDR("glTestFenceNV"));

		/*
			GL_NV_fragment_coverage_to_color
		*/
		this->glFragmentCoverageColorNV = reinterpret_cast<PFNGLFRAGMENTCOVERAGECOLORNVPROC>(GETFUNCADDR("glFragmentCoverageColorNV"));

		/*
			GL_NV_fragment_program
		*/
		this->glGetProgramNamedParameterdvNV = reinterpret_cast<PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC>(GETFUNCADDR("glGetProgramNamedParameterdvNV"));
		this->glGetProgramNamedParameterfvNV = reinterpret_cast<PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC>(GETFUNCADDR("glGetProgramNamedParameterfvNV"));
		this->glProgramNamedParameter4dNV = reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4DNVPROC>(GETFUNCADDR("glProgramNamedParameter4dNV"));
		this->glProgramNamedParameter4dvNV = reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC>(GETFUNCADDR("glProgramNamedParameter4dvNV"));
		this->glProgramNamedParameter4fNV = reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4FNVPROC>(GETFUNCADDR("glProgramNamedParameter4fNV"));
		this->glProgramNamedParameter4fvNV = reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC>(GETFUNCADDR("glProgramNamedParameter4fvNV"));

		/*
			GL_NV_framebuffer_blit
		*/
		this->glBlitFramebufferNV = reinterpret_cast<PFNGLBLITFRAMEBUFFERNVPROC>(GETFUNCADDR("glBlitFramebufferNV"));

		/*
			GL_NV_framebuffer_multisample
		*/
		this->glRenderbufferStorageMultisampleNV = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC>(GETFUNCADDR("glRenderbufferStorageMultisampleNV"));

		/*
			GL_NV_framebuffer_multisample_coverage
		*/
		this->glRenderbufferStorageMultisampleCoverageNV = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC>(GETFUNCADDR("glRenderbufferStorageMultisampleCoverageNV"));

		/*
			GL_NV_geometry_program4
		*/
		this->glProgramVertexLimitNV = reinterpret_cast<PFNGLPROGRAMVERTEXLIMITNVPROC>(GETFUNCADDR("glProgramVertexLimitNV"));

		/*
			GL_NV_gpu_multicast
		*/
		this->glMulticastBarrierNV = reinterpret_cast<PFNGLMULTICASTBARRIERNVPROC>(GETFUNCADDR("glMulticastBarrierNV"));
		this->glMulticastBlitFramebufferNV = reinterpret_cast<PFNGLMULTICASTBLITFRAMEBUFFERNVPROC>(GETFUNCADDR("glMulticastBlitFramebufferNV"));
		this->glMulticastBufferSubDataNV = reinterpret_cast<PFNGLMULTICASTBUFFERSUBDATANVPROC>(GETFUNCADDR("glMulticastBufferSubDataNV"));
		this->glMulticastCopyBufferSubDataNV = reinterpret_cast<PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC>(GETFUNCADDR("glMulticastCopyBufferSubDataNV"));
		this->glMulticastCopyImageSubDataNV = reinterpret_cast<PFNGLMULTICASTCOPYIMAGESUBDATANVPROC>(GETFUNCADDR("glMulticastCopyImageSubDataNV"));
		this->glMulticastFramebufferSampleLocationsfvNV = reinterpret_cast<PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(GETFUNCADDR("glMulticastFramebufferSampleLocationsfvNV"));
		this->glMulticastGetQueryObjecti64vNV = reinterpret_cast<PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC>(GETFUNCADDR("glMulticastGetQueryObjecti64vNV"));
		this->glMulticastGetQueryObjectivNV = reinterpret_cast<PFNGLMULTICASTGETQUERYOBJECTIVNVPROC>(GETFUNCADDR("glMulticastGetQueryObjectivNV"));
		this->glMulticastGetQueryObjectui64vNV = reinterpret_cast<PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC>(GETFUNCADDR("glMulticastGetQueryObjectui64vNV"));
		this->glMulticastGetQueryObjectuivNV = reinterpret_cast<PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC>(GETFUNCADDR("glMulticastGetQueryObjectuivNV"));
		this->glMulticastWaitSyncNV = reinterpret_cast<PFNGLMULTICASTWAITSYNCNVPROC>(GETFUNCADDR("glMulticastWaitSyncNV"));
		this->glRenderGpuMaskNV = reinterpret_cast<PFNGLRENDERGPUMASKNVPROC>(GETFUNCADDR("glRenderGpuMaskNV"));

		/*
			GL_NV_gpu_program4
		*/
		this->glProgramEnvParameterI4iNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4INVPROC>(GETFUNCADDR("glProgramEnvParameterI4iNV"));
		this->glProgramEnvParameterI4ivNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4IVNVPROC>(GETFUNCADDR("glProgramEnvParameterI4ivNV"));
		this->glProgramEnvParameterI4uiNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4UINVPROC>(GETFUNCADDR("glProgramEnvParameterI4uiNV"));
		this->glProgramEnvParameterI4uivNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4UIVNVPROC>(GETFUNCADDR("glProgramEnvParameterI4uivNV"));
		this->glProgramEnvParametersI4ivNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERSI4IVNVPROC>(GETFUNCADDR("glProgramEnvParametersI4ivNV"));
		this->glProgramEnvParametersI4uivNV = reinterpret_cast<PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC>(GETFUNCADDR("glProgramEnvParametersI4uivNV"));
		this->glProgramLocalParameterI4iNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4INVPROC>(GETFUNCADDR("glProgramLocalParameterI4iNV"));
		this->glProgramLocalParameterI4ivNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC>(GETFUNCADDR("glProgramLocalParameterI4ivNV"));
		this->glProgramLocalParameterI4uiNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4UINVPROC>(GETFUNCADDR("glProgramLocalParameterI4uiNV"));
		this->glProgramLocalParameterI4uivNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC>(GETFUNCADDR("glProgramLocalParameterI4uivNV"));
		this->glProgramLocalParametersI4ivNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC>(GETFUNCADDR("glProgramLocalParametersI4ivNV"));
		this->glProgramLocalParametersI4uivNV = reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC>(GETFUNCADDR("glProgramLocalParametersI4uivNV"));

		/*
			GL_NV_gpu_shader5
		*/
		this->glGetUniformi64vNV = reinterpret_cast<PFNGLGETUNIFORMI64VNVPROC>(GETFUNCADDR("glGetUniformi64vNV"));
		this->glGetUniformui64vNV = reinterpret_cast<PFNGLGETUNIFORMUI64VNVPROC>(GETFUNCADDR("glGetUniformui64vNV"));
		this->glProgramUniform1i64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64NVPROC>(GETFUNCADDR("glProgramUniform1i64NV"));
		this->glProgramUniform1i64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VNVPROC>(GETFUNCADDR("glProgramUniform1i64vNV"));
		this->glProgramUniform1ui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64NVPROC>(GETFUNCADDR("glProgramUniform1ui64NV"));
		this->glProgramUniform1ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VNVPROC>(GETFUNCADDR("glProgramUniform1ui64vNV"));
		this->glProgramUniform2i64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64NVPROC>(GETFUNCADDR("glProgramUniform2i64NV"));
		this->glProgramUniform2i64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VNVPROC>(GETFUNCADDR("glProgramUniform2i64vNV"));
		this->glProgramUniform2ui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64NVPROC>(GETFUNCADDR("glProgramUniform2ui64NV"));
		this->glProgramUniform2ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VNVPROC>(GETFUNCADDR("glProgramUniform2ui64vNV"));
		this->glProgramUniform3i64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64NVPROC>(GETFUNCADDR("glProgramUniform3i64NV"));
		this->glProgramUniform3i64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VNVPROC>(GETFUNCADDR("glProgramUniform3i64vNV"));
		this->glProgramUniform3ui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64NVPROC>(GETFUNCADDR("glProgramUniform3ui64NV"));
		this->glProgramUniform3ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VNVPROC>(GETFUNCADDR("glProgramUniform3ui64vNV"));
		this->glProgramUniform4i64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64NVPROC>(GETFUNCADDR("glProgramUniform4i64NV"));
		this->glProgramUniform4i64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VNVPROC>(GETFUNCADDR("glProgramUniform4i64vNV"));
		this->glProgramUniform4ui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64NVPROC>(GETFUNCADDR("glProgramUniform4ui64NV"));
		this->glProgramUniform4ui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VNVPROC>(GETFUNCADDR("glProgramUniform4ui64vNV"));
		this->glUniform1i64NV = reinterpret_cast<PFNGLUNIFORM1I64NVPROC>(GETFUNCADDR("glUniform1i64NV"));
		this->glUniform1i64vNV = reinterpret_cast<PFNGLUNIFORM1I64VNVPROC>(GETFUNCADDR("glUniform1i64vNV"));
		this->glUniform1ui64NV = reinterpret_cast<PFNGLUNIFORM1UI64NVPROC>(GETFUNCADDR("glUniform1ui64NV"));
		this->glUniform1ui64vNV = reinterpret_cast<PFNGLUNIFORM1UI64VNVPROC>(GETFUNCADDR("glUniform1ui64vNV"));
		this->glUniform2i64NV = reinterpret_cast<PFNGLUNIFORM2I64NVPROC>(GETFUNCADDR("glUniform2i64NV"));
		this->glUniform2i64vNV = reinterpret_cast<PFNGLUNIFORM2I64VNVPROC>(GETFUNCADDR("glUniform2i64vNV"));
		this->glUniform2ui64NV = reinterpret_cast<PFNGLUNIFORM2UI64NVPROC>(GETFUNCADDR("glUniform2ui64NV"));
		this->glUniform2ui64vNV = reinterpret_cast<PFNGLUNIFORM2UI64VNVPROC>(GETFUNCADDR("glUniform2ui64vNV"));
		this->glUniform3i64NV = reinterpret_cast<PFNGLUNIFORM3I64NVPROC>(GETFUNCADDR("glUniform3i64NV"));
		this->glUniform3i64vNV = reinterpret_cast<PFNGLUNIFORM3I64VNVPROC>(GETFUNCADDR("glUniform3i64vNV"));
		this->glUniform3ui64NV = reinterpret_cast<PFNGLUNIFORM3UI64NVPROC>(GETFUNCADDR("glUniform3ui64NV"));
		this->glUniform3ui64vNV = reinterpret_cast<PFNGLUNIFORM3UI64VNVPROC>(GETFUNCADDR("glUniform3ui64vNV"));
		this->glUniform4i64NV = reinterpret_cast<PFNGLUNIFORM4I64NVPROC>(GETFUNCADDR("glUniform4i64NV"));
		this->glUniform4i64vNV = reinterpret_cast<PFNGLUNIFORM4I64VNVPROC>(GETFUNCADDR("glUniform4i64vNV"));
		this->glUniform4ui64NV = reinterpret_cast<PFNGLUNIFORM4UI64NVPROC>(GETFUNCADDR("glUniform4ui64NV"));
		this->glUniform4ui64vNV = reinterpret_cast<PFNGLUNIFORM4UI64VNVPROC>(GETFUNCADDR("glUniform4ui64vNV"));

		/*
			GL_NV_half_float
		*/
		this->glColor3hNV = reinterpret_cast<PFNGLCOLOR3HNVPROC>(GETFUNCADDR("glColor3hNV"));
		this->glColor3hvNV = reinterpret_cast<PFNGLCOLOR3HVNVPROC>(GETFUNCADDR("glColor3hvNV"));
		this->glColor4hNV = reinterpret_cast<PFNGLCOLOR4HNVPROC>(GETFUNCADDR("glColor4hNV"));
		this->glColor4hvNV = reinterpret_cast<PFNGLCOLOR4HVNVPROC>(GETFUNCADDR("glColor4hvNV"));
		this->glFogCoordhNV = reinterpret_cast<PFNGLFOGCOORDHNVPROC>(GETFUNCADDR("glFogCoordhNV"));
		this->glFogCoordhvNV = reinterpret_cast<PFNGLFOGCOORDHVNVPROC>(GETFUNCADDR("glFogCoordhvNV"));
		this->glMultiTexCoord1hNV = reinterpret_cast<PFNGLMULTITEXCOORD1HNVPROC>(GETFUNCADDR("glMultiTexCoord1hNV"));
		this->glMultiTexCoord1hvNV = reinterpret_cast<PFNGLMULTITEXCOORD1HVNVPROC>(GETFUNCADDR("glMultiTexCoord1hvNV"));
		this->glMultiTexCoord2hNV = reinterpret_cast<PFNGLMULTITEXCOORD2HNVPROC>(GETFUNCADDR("glMultiTexCoord2hNV"));
		this->glMultiTexCoord2hvNV = reinterpret_cast<PFNGLMULTITEXCOORD2HVNVPROC>(GETFUNCADDR("glMultiTexCoord2hvNV"));
		this->glMultiTexCoord3hNV = reinterpret_cast<PFNGLMULTITEXCOORD3HNVPROC>(GETFUNCADDR("glMultiTexCoord3hNV"));
		this->glMultiTexCoord3hvNV = reinterpret_cast<PFNGLMULTITEXCOORD3HVNVPROC>(GETFUNCADDR("glMultiTexCoord3hvNV"));
		this->glMultiTexCoord4hNV = reinterpret_cast<PFNGLMULTITEXCOORD4HNVPROC>(GETFUNCADDR("glMultiTexCoord4hNV"));
		this->glMultiTexCoord4hvNV = reinterpret_cast<PFNGLMULTITEXCOORD4HVNVPROC>(GETFUNCADDR("glMultiTexCoord4hvNV"));
		this->glNormal3hNV = reinterpret_cast<PFNGLNORMAL3HNVPROC>(GETFUNCADDR("glNormal3hNV"));
		this->glNormal3hvNV = reinterpret_cast<PFNGLNORMAL3HVNVPROC>(GETFUNCADDR("glNormal3hvNV"));
		this->glSecondaryColor3hNV = reinterpret_cast<PFNGLSECONDARYCOLOR3HNVPROC>(GETFUNCADDR("glSecondaryColor3hNV"));
		this->glSecondaryColor3hvNV = reinterpret_cast<PFNGLSECONDARYCOLOR3HVNVPROC>(GETFUNCADDR("glSecondaryColor3hvNV"));
		this->glTexCoord1hNV = reinterpret_cast<PFNGLTEXCOORD1HNVPROC>(GETFUNCADDR("glTexCoord1hNV"));
		this->glTexCoord1hvNV = reinterpret_cast<PFNGLTEXCOORD1HVNVPROC>(GETFUNCADDR("glTexCoord1hvNV"));
		this->glTexCoord2hNV = reinterpret_cast<PFNGLTEXCOORD2HNVPROC>(GETFUNCADDR("glTexCoord2hNV"));
		this->glTexCoord2hvNV = reinterpret_cast<PFNGLTEXCOORD2HVNVPROC>(GETFUNCADDR("glTexCoord2hvNV"));
		this->glTexCoord3hNV = reinterpret_cast<PFNGLTEXCOORD3HNVPROC>(GETFUNCADDR("glTexCoord3hNV"));
		this->glTexCoord3hvNV = reinterpret_cast<PFNGLTEXCOORD3HVNVPROC>(GETFUNCADDR("glTexCoord3hvNV"));
		this->glTexCoord4hNV = reinterpret_cast<PFNGLTEXCOORD4HNVPROC>(GETFUNCADDR("glTexCoord4hNV"));
		this->glTexCoord4hvNV = reinterpret_cast<PFNGLTEXCOORD4HVNVPROC>(GETFUNCADDR("glTexCoord4hvNV"));
		this->glVertex2hNV = reinterpret_cast<PFNGLVERTEX2HNVPROC>(GETFUNCADDR("glVertex2hNV"));
		this->glVertex2hvNV = reinterpret_cast<PFNGLVERTEX2HVNVPROC>(GETFUNCADDR("glVertex2hvNV"));
		this->glVertex3hNV = reinterpret_cast<PFNGLVERTEX3HNVPROC>(GETFUNCADDR("glVertex3hNV"));
		this->glVertex3hvNV = reinterpret_cast<PFNGLVERTEX3HVNVPROC>(GETFUNCADDR("glVertex3hvNV"));
		this->glVertex4hNV = reinterpret_cast<PFNGLVERTEX4HNVPROC>(GETFUNCADDR("glVertex4hNV"));
		this->glVertex4hvNV = reinterpret_cast<PFNGLVERTEX4HVNVPROC>(GETFUNCADDR("glVertex4hvNV"));
		this->glVertexAttrib1hNV = reinterpret_cast<PFNGLVERTEXATTRIB1HNVPROC>(GETFUNCADDR("glVertexAttrib1hNV"));
		this->glVertexAttrib1hvNV = reinterpret_cast<PFNGLVERTEXATTRIB1HVNVPROC>(GETFUNCADDR("glVertexAttrib1hvNV"));
		this->glVertexAttrib2hNV = reinterpret_cast<PFNGLVERTEXATTRIB2HNVPROC>(GETFUNCADDR("glVertexAttrib2hNV"));
		this->glVertexAttrib2hvNV = reinterpret_cast<PFNGLVERTEXATTRIB2HVNVPROC>(GETFUNCADDR("glVertexAttrib2hvNV"));
		this->glVertexAttrib3hNV = reinterpret_cast<PFNGLVERTEXATTRIB3HNVPROC>(GETFUNCADDR("glVertexAttrib3hNV"));
		this->glVertexAttrib3hvNV = reinterpret_cast<PFNGLVERTEXATTRIB3HVNVPROC>(GETFUNCADDR("glVertexAttrib3hvNV"));
		this->glVertexAttrib4hNV = reinterpret_cast<PFNGLVERTEXATTRIB4HNVPROC>(GETFUNCADDR("glVertexAttrib4hNV"));
		this->glVertexAttrib4hvNV = reinterpret_cast<PFNGLVERTEXATTRIB4HVNVPROC>(GETFUNCADDR("glVertexAttrib4hvNV"));
		this->glVertexAttribs1hvNV = reinterpret_cast<PFNGLVERTEXATTRIBS1HVNVPROC>(GETFUNCADDR("glVertexAttribs1hvNV"));
		this->glVertexAttribs2hvNV = reinterpret_cast<PFNGLVERTEXATTRIBS2HVNVPROC>(GETFUNCADDR("glVertexAttribs2hvNV"));
		this->glVertexAttribs3hvNV = reinterpret_cast<PFNGLVERTEXATTRIBS3HVNVPROC>(GETFUNCADDR("glVertexAttribs3hvNV"));
		this->glVertexAttribs4hvNV = reinterpret_cast<PFNGLVERTEXATTRIBS4HVNVPROC>(GETFUNCADDR("glVertexAttribs4hvNV"));
		this->glVertexWeighthNV = reinterpret_cast<PFNGLVERTEXWEIGHTHNVPROC>(GETFUNCADDR("glVertexWeighthNV"));
		this->glVertexWeighthvNV = reinterpret_cast<PFNGLVERTEXWEIGHTHVNVPROC>(GETFUNCADDR("glVertexWeighthvNV"));

		/*
			GL_NV_instanced_arrays
		*/
		this->glVertexAttribDivisorNV = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORNVPROC>(GETFUNCADDR("glVertexAttribDivisorNV"));

		/*
			GL_NV_internalformat_sample_query
		*/
		this->glGetInternalformatSampleivNV = reinterpret_cast<PFNGLGETINTERNALFORMATSAMPLEIVNVPROC>(GETFUNCADDR("glGetInternalformatSampleivNV"));

		/*
			GL_NV_non_square_matrices
		*/
		this->glUniformMatrix2x3fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVNVPROC>(GETFUNCADDR("glUniformMatrix2x3fvNV"));
		this->glUniformMatrix2x4fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVNVPROC>(GETFUNCADDR("glUniformMatrix2x4fvNV"));
		this->glUniformMatrix3x2fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVNVPROC>(GETFUNCADDR("glUniformMatrix3x2fvNV"));
		this->glUniformMatrix3x4fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVNVPROC>(GETFUNCADDR("glUniformMatrix3x4fvNV"));
		this->glUniformMatrix4x2fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVNVPROC>(GETFUNCADDR("glUniformMatrix4x2fvNV"));
		this->glUniformMatrix4x3fvNV = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVNVPROC>(GETFUNCADDR("glUniformMatrix4x3fvNV"));

		/*
			GL_NV_occlusion_query
		*/
		this->glBeginOcclusionQueryNV = reinterpret_cast<PFNGLBEGINOCCLUSIONQUERYNVPROC>(GETFUNCADDR("glBeginOcclusionQueryNV"));
		this->glDeleteOcclusionQueriesNV = reinterpret_cast<PFNGLDELETEOCCLUSIONQUERIESNVPROC>(GETFUNCADDR("glDeleteOcclusionQueriesNV"));
		this->glEndOcclusionQueryNV = reinterpret_cast<PFNGLENDOCCLUSIONQUERYNVPROC>(GETFUNCADDR("glEndOcclusionQueryNV"));
		this->glGenOcclusionQueriesNV = reinterpret_cast<PFNGLGENOCCLUSIONQUERIESNVPROC>(GETFUNCADDR("glGenOcclusionQueriesNV"));
		this->glGetOcclusionQueryivNV = reinterpret_cast<PFNGLGETOCCLUSIONQUERYIVNVPROC>(GETFUNCADDR("glGetOcclusionQueryivNV"));
		this->glGetOcclusionQueryuivNV = reinterpret_cast<PFNGLGETOCCLUSIONQUERYUIVNVPROC>(GETFUNCADDR("glGetOcclusionQueryuivNV"));
		this->glIsOcclusionQueryNV = reinterpret_cast<PFNGLISOCCLUSIONQUERYNVPROC>(GETFUNCADDR("glIsOcclusionQueryNV"));

		/*
			GL_NV_parameter_buffer_object
		*/
		this->glProgramBufferParametersIivNV = reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC>(GETFUNCADDR("glProgramBufferParametersIivNV"));
		this->glProgramBufferParametersIuivNV = reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC>(GETFUNCADDR("glProgramBufferParametersIuivNV"));
		this->glProgramBufferParametersfvNV = reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC>(GETFUNCADDR("glProgramBufferParametersfvNV"));

		/*
			GL_NV_path_rendering
		*/
		this->glCopyPathNV = reinterpret_cast<PFNGLCOPYPATHNVPROC>(GETFUNCADDR("glCopyPathNV"));
		this->glCoverFillPathInstancedNV = reinterpret_cast<PFNGLCOVERFILLPATHINSTANCEDNVPROC>(GETFUNCADDR("glCoverFillPathInstancedNV"));
		this->glCoverFillPathNV = reinterpret_cast<PFNGLCOVERFILLPATHNVPROC>(GETFUNCADDR("glCoverFillPathNV"));
		this->glCoverStrokePathInstancedNV = reinterpret_cast<PFNGLCOVERSTROKEPATHINSTANCEDNVPROC>(GETFUNCADDR("glCoverStrokePathInstancedNV"));
		this->glCoverStrokePathNV = reinterpret_cast<PFNGLCOVERSTROKEPATHNVPROC>(GETFUNCADDR("glCoverStrokePathNV"));
		this->glDeletePathsNV = reinterpret_cast<PFNGLDELETEPATHSNVPROC>(GETFUNCADDR("glDeletePathsNV"));
		this->glGenPathsNV = reinterpret_cast<PFNGLGENPATHSNVPROC>(GETFUNCADDR("glGenPathsNV"));
		this->glGetPathColorGenfvNV = reinterpret_cast<PFNGLGETPATHCOLORGENFVNVPROC>(GETFUNCADDR("glGetPathColorGenfvNV"));
		this->glGetPathColorGenivNV = reinterpret_cast<PFNGLGETPATHCOLORGENIVNVPROC>(GETFUNCADDR("glGetPathColorGenivNV"));
		this->glGetPathCommandsNV = reinterpret_cast<PFNGLGETPATHCOMMANDSNVPROC>(GETFUNCADDR("glGetPathCommandsNV"));
		this->glGetPathCoordsNV = reinterpret_cast<PFNGLGETPATHCOORDSNVPROC>(GETFUNCADDR("glGetPathCoordsNV"));
		this->glGetPathDashArrayNV = reinterpret_cast<PFNGLGETPATHDASHARRAYNVPROC>(GETFUNCADDR("glGetPathDashArrayNV"));
		this->glGetPathLengthNV = reinterpret_cast<PFNGLGETPATHLENGTHNVPROC>(GETFUNCADDR("glGetPathLengthNV"));
		this->glGetPathMetricRangeNV = reinterpret_cast<PFNGLGETPATHMETRICRANGENVPROC>(GETFUNCADDR("glGetPathMetricRangeNV"));
		this->glGetPathMetricsNV = reinterpret_cast<PFNGLGETPATHMETRICSNVPROC>(GETFUNCADDR("glGetPathMetricsNV"));
		this->glGetPathParameterfvNV = reinterpret_cast<PFNGLGETPATHPARAMETERFVNVPROC>(GETFUNCADDR("glGetPathParameterfvNV"));
		this->glGetPathParameterivNV = reinterpret_cast<PFNGLGETPATHPARAMETERIVNVPROC>(GETFUNCADDR("glGetPathParameterivNV"));
		this->glGetPathSpacingNV = reinterpret_cast<PFNGLGETPATHSPACINGNVPROC>(GETFUNCADDR("glGetPathSpacingNV"));
		this->glGetPathTexGenfvNV = reinterpret_cast<PFNGLGETPATHTEXGENFVNVPROC>(GETFUNCADDR("glGetPathTexGenfvNV"));
		this->glGetPathTexGenivNV = reinterpret_cast<PFNGLGETPATHTEXGENIVNVPROC>(GETFUNCADDR("glGetPathTexGenivNV"));
		this->glGetProgramResourcefvNV = reinterpret_cast<PFNGLGETPROGRAMRESOURCEFVNVPROC>(GETFUNCADDR("glGetProgramResourcefvNV"));
		this->glInterpolatePathsNV = reinterpret_cast<PFNGLINTERPOLATEPATHSNVPROC>(GETFUNCADDR("glInterpolatePathsNV"));
		this->glIsPathNV = reinterpret_cast<PFNGLISPATHNVPROC>(GETFUNCADDR("glIsPathNV"));
		this->glIsPointInFillPathNV = reinterpret_cast<PFNGLISPOINTINFILLPATHNVPROC>(GETFUNCADDR("glIsPointInFillPathNV"));
		this->glIsPointInStrokePathNV = reinterpret_cast<PFNGLISPOINTINSTROKEPATHNVPROC>(GETFUNCADDR("glIsPointInStrokePathNV"));
		this->glMatrixLoad3x2fNV = reinterpret_cast<PFNGLMATRIXLOAD3X2FNVPROC>(GETFUNCADDR("glMatrixLoad3x2fNV"));
		this->glMatrixLoad3x3fNV = reinterpret_cast<PFNGLMATRIXLOAD3X3FNVPROC>(GETFUNCADDR("glMatrixLoad3x3fNV"));
		this->glMatrixLoadTranspose3x3fNV = reinterpret_cast<PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC>(GETFUNCADDR("glMatrixLoadTranspose3x3fNV"));
		this->glMatrixMult3x2fNV = reinterpret_cast<PFNGLMATRIXMULT3X2FNVPROC>(GETFUNCADDR("glMatrixMult3x2fNV"));
		this->glMatrixMult3x3fNV = reinterpret_cast<PFNGLMATRIXMULT3X3FNVPROC>(GETFUNCADDR("glMatrixMult3x3fNV"));
		this->glMatrixMultTranspose3x3fNV = reinterpret_cast<PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC>(GETFUNCADDR("glMatrixMultTranspose3x3fNV"));
		this->glPathColorGenNV = reinterpret_cast<PFNGLPATHCOLORGENNVPROC>(GETFUNCADDR("glPathColorGenNV"));
		this->glPathCommandsNV = reinterpret_cast<PFNGLPATHCOMMANDSNVPROC>(GETFUNCADDR("glPathCommandsNV"));
		this->glPathCoordsNV = reinterpret_cast<PFNGLPATHCOORDSNVPROC>(GETFUNCADDR("glPathCoordsNV"));
		this->glPathCoverDepthFuncNV = reinterpret_cast<PFNGLPATHCOVERDEPTHFUNCNVPROC>(GETFUNCADDR("glPathCoverDepthFuncNV"));
		this->glPathDashArrayNV = reinterpret_cast<PFNGLPATHDASHARRAYNVPROC>(GETFUNCADDR("glPathDashArrayNV"));
		this->glPathFogGenNV = reinterpret_cast<PFNGLPATHFOGGENNVPROC>(GETFUNCADDR("glPathFogGenNV"));
		this->glPathGlyphIndexArrayNV = reinterpret_cast<PFNGLPATHGLYPHINDEXARRAYNVPROC>(GETFUNCADDR("glPathGlyphIndexArrayNV"));
		this->glPathGlyphIndexRangeNV = reinterpret_cast<PFNGLPATHGLYPHINDEXRANGENVPROC>(GETFUNCADDR("glPathGlyphIndexRangeNV"));
		this->glPathGlyphRangeNV = reinterpret_cast<PFNGLPATHGLYPHRANGENVPROC>(GETFUNCADDR("glPathGlyphRangeNV"));
		this->glPathGlyphsNV = reinterpret_cast<PFNGLPATHGLYPHSNVPROC>(GETFUNCADDR("glPathGlyphsNV"));
		this->glPathMemoryGlyphIndexArrayNV = reinterpret_cast<PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC>(GETFUNCADDR("glPathMemoryGlyphIndexArrayNV"));
		this->glPathParameterfNV = reinterpret_cast<PFNGLPATHPARAMETERFNVPROC>(GETFUNCADDR("glPathParameterfNV"));
		this->glPathParameterfvNV = reinterpret_cast<PFNGLPATHPARAMETERFVNVPROC>(GETFUNCADDR("glPathParameterfvNV"));
		this->glPathParameteriNV = reinterpret_cast<PFNGLPATHPARAMETERINVPROC>(GETFUNCADDR("glPathParameteriNV"));
		this->glPathParameterivNV = reinterpret_cast<PFNGLPATHPARAMETERIVNVPROC>(GETFUNCADDR("glPathParameterivNV"));
		this->glPathStencilDepthOffsetNV = reinterpret_cast<PFNGLPATHSTENCILDEPTHOFFSETNVPROC>(GETFUNCADDR("glPathStencilDepthOffsetNV"));
		this->glPathStencilFuncNV = reinterpret_cast<PFNGLPATHSTENCILFUNCNVPROC>(GETFUNCADDR("glPathStencilFuncNV"));
		this->glPathStringNV = reinterpret_cast<PFNGLPATHSTRINGNVPROC>(GETFUNCADDR("glPathStringNV"));
		this->glPathSubCommandsNV = reinterpret_cast<PFNGLPATHSUBCOMMANDSNVPROC>(GETFUNCADDR("glPathSubCommandsNV"));
		this->glPathSubCoordsNV = reinterpret_cast<PFNGLPATHSUBCOORDSNVPROC>(GETFUNCADDR("glPathSubCoordsNV"));
		this->glPathTexGenNV = reinterpret_cast<PFNGLPATHTEXGENNVPROC>(GETFUNCADDR("glPathTexGenNV"));
		this->glPointAlongPathNV = reinterpret_cast<PFNGLPOINTALONGPATHNVPROC>(GETFUNCADDR("glPointAlongPathNV"));
		this->glProgramPathFragmentInputGenNV = reinterpret_cast<PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC>(GETFUNCADDR("glProgramPathFragmentInputGenNV"));
		this->glStencilFillPathInstancedNV = reinterpret_cast<PFNGLSTENCILFILLPATHINSTANCEDNVPROC>(GETFUNCADDR("glStencilFillPathInstancedNV"));
		this->glStencilFillPathNV = reinterpret_cast<PFNGLSTENCILFILLPATHNVPROC>(GETFUNCADDR("glStencilFillPathNV"));
		this->glStencilStrokePathInstancedNV = reinterpret_cast<PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC>(GETFUNCADDR("glStencilStrokePathInstancedNV"));
		this->glStencilStrokePathNV = reinterpret_cast<PFNGLSTENCILSTROKEPATHNVPROC>(GETFUNCADDR("glStencilStrokePathNV"));
		this->glStencilThenCoverFillPathInstancedNV = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC>(GETFUNCADDR("glStencilThenCoverFillPathInstancedNV"));
		this->glStencilThenCoverFillPathNV = reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHNVPROC>(GETFUNCADDR("glStencilThenCoverFillPathNV"));
		this->glStencilThenCoverStrokePathInstancedNV = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC>(GETFUNCADDR("glStencilThenCoverStrokePathInstancedNV"));
		this->glStencilThenCoverStrokePathNV = reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC>(GETFUNCADDR("glStencilThenCoverStrokePathNV"));
		this->glTransformPathNV = reinterpret_cast<PFNGLTRANSFORMPATHNVPROC>(GETFUNCADDR("glTransformPathNV"));
		this->glWeightPathsNV = reinterpret_cast<PFNGLWEIGHTPATHSNVPROC>(GETFUNCADDR("glWeightPathsNV"));

		/*
			GL_NV_pixel_data_range
		*/
		this->glFlushPixelDataRangeNV = reinterpret_cast<PFNGLFLUSHPIXELDATARANGENVPROC>(GETFUNCADDR("glFlushPixelDataRangeNV"));
		this->glPixelDataRangeNV = reinterpret_cast<PFNGLPIXELDATARANGENVPROC>(GETFUNCADDR("glPixelDataRangeNV"));

		/*
			GL_NV_point_sprite
		*/
		this->glPointParameteriNV = reinterpret_cast<PFNGLPOINTPARAMETERINVPROC>(GETFUNCADDR("glPointParameteriNV"));
		this->glPointParameterivNV = reinterpret_cast<PFNGLPOINTPARAMETERIVNVPROC>(GETFUNCADDR("glPointParameterivNV"));

		/*
			GL_NV_polygon_mode
		*/
		this->glPolygonModeNV = reinterpret_cast<PFNGLPOLYGONMODENVPROC>(GETFUNCADDR("glPolygonModeNV"));

		/*
			GL_NV_present_video
		*/
		this->glGetVideoi64vNV = reinterpret_cast<PFNGLGETVIDEOI64VNVPROC>(GETFUNCADDR("glGetVideoi64vNV"));
		this->glGetVideoivNV = reinterpret_cast<PFNGLGETVIDEOIVNVPROC>(GETFUNCADDR("glGetVideoivNV"));
		this->glGetVideoui64vNV = reinterpret_cast<PFNGLGETVIDEOUI64VNVPROC>(GETFUNCADDR("glGetVideoui64vNV"));
		this->glGetVideouivNV = reinterpret_cast<PFNGLGETVIDEOUIVNVPROC>(GETFUNCADDR("glGetVideouivNV"));
		this->glPresentFrameDualFillNV = reinterpret_cast<PFNGLPRESENTFRAMEDUALFILLNVPROC>(GETFUNCADDR("glPresentFrameDualFillNV"));
		this->glPresentFrameKeyedNV = reinterpret_cast<PFNGLPRESENTFRAMEKEYEDNVPROC>(GETFUNCADDR("glPresentFrameKeyedNV"));

		/*
			GL_NV_primitive_restart
		*/
		this->glPrimitiveRestartIndexNV = reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXNVPROC>(GETFUNCADDR("glPrimitiveRestartIndexNV"));
		this->glPrimitiveRestartNV = reinterpret_cast<PFNGLPRIMITIVERESTARTNVPROC>(GETFUNCADDR("glPrimitiveRestartNV"));

		/*
			GL_NV_register_combiners
		*/
		this->glCombinerInputNV = reinterpret_cast<PFNGLCOMBINERINPUTNVPROC>(GETFUNCADDR("glCombinerInputNV"));
		this->glCombinerOutputNV = reinterpret_cast<PFNGLCOMBINEROUTPUTNVPROC>(GETFUNCADDR("glCombinerOutputNV"));
		this->glCombinerParameterfNV = reinterpret_cast<PFNGLCOMBINERPARAMETERFNVPROC>(GETFUNCADDR("glCombinerParameterfNV"));
		this->glCombinerParameterfvNV = reinterpret_cast<PFNGLCOMBINERPARAMETERFVNVPROC>(GETFUNCADDR("glCombinerParameterfvNV"));
		this->glCombinerParameteriNV = reinterpret_cast<PFNGLCOMBINERPARAMETERINVPROC>(GETFUNCADDR("glCombinerParameteriNV"));
		this->glCombinerParameterivNV = reinterpret_cast<PFNGLCOMBINERPARAMETERIVNVPROC>(GETFUNCADDR("glCombinerParameterivNV"));
		this->glFinalCombinerInputNV = reinterpret_cast<PFNGLFINALCOMBINERINPUTNVPROC>(GETFUNCADDR("glFinalCombinerInputNV"));
		this->glGetCombinerInputParameterfvNV = reinterpret_cast<PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC>(GETFUNCADDR("glGetCombinerInputParameterfvNV"));
		this->glGetCombinerInputParameterivNV = reinterpret_cast<PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC>(GETFUNCADDR("glGetCombinerInputParameterivNV"));
		this->glGetCombinerOutputParameterfvNV = reinterpret_cast<PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC>(GETFUNCADDR("glGetCombinerOutputParameterfvNV"));
		this->glGetCombinerOutputParameterivNV = reinterpret_cast<PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC>(GETFUNCADDR("glGetCombinerOutputParameterivNV"));
		this->glGetFinalCombinerInputParameterfvNV = reinterpret_cast<PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC>(GETFUNCADDR("glGetFinalCombinerInputParameterfvNV"));
		this->glGetFinalCombinerInputParameterivNV = reinterpret_cast<PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC>(GETFUNCADDR("glGetFinalCombinerInputParameterivNV"));

		/*
			GL_NV_register_combiners2
		*/
		this->glCombinerStageParameterfvNV = reinterpret_cast<PFNGLCOMBINERSTAGEPARAMETERFVNVPROC>(GETFUNCADDR("glCombinerStageParameterfvNV"));
		this->glGetCombinerStageParameterfvNV = reinterpret_cast<PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC>(GETFUNCADDR("glGetCombinerStageParameterfvNV"));

		/*
			GL_NV_sample_locations
		*/
		this->glFramebufferSampleLocationsfvNV = reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(GETFUNCADDR("glFramebufferSampleLocationsfvNV"));
		this->glNamedFramebufferSampleLocationsfvNV = reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(GETFUNCADDR("glNamedFramebufferSampleLocationsfvNV"));

		/*
			GL_NV_shader_buffer_load
		*/
		this->glGetBufferParameterui64vNV = reinterpret_cast<PFNGLGETBUFFERPARAMETERUI64VNVPROC>(GETFUNCADDR("glGetBufferParameterui64vNV"));
		this->glGetIntegerui64vNV = reinterpret_cast<PFNGLGETINTEGERUI64VNVPROC>(GETFUNCADDR("glGetIntegerui64vNV"));
		this->glGetNamedBufferParameterui64vNV = reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC>(GETFUNCADDR("glGetNamedBufferParameterui64vNV"));
		this->glIsBufferResidentNV = reinterpret_cast<PFNGLISBUFFERRESIDENTNVPROC>(GETFUNCADDR("glIsBufferResidentNV"));
		this->glIsNamedBufferResidentNV = reinterpret_cast<PFNGLISNAMEDBUFFERRESIDENTNVPROC>(GETFUNCADDR("glIsNamedBufferResidentNV"));
		this->glMakeBufferNonResidentNV = reinterpret_cast<PFNGLMAKEBUFFERNONRESIDENTNVPROC>(GETFUNCADDR("glMakeBufferNonResidentNV"));
		this->glMakeBufferResidentNV = reinterpret_cast<PFNGLMAKEBUFFERRESIDENTNVPROC>(GETFUNCADDR("glMakeBufferResidentNV"));
		this->glMakeNamedBufferNonResidentNV = reinterpret_cast<PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC>(GETFUNCADDR("glMakeNamedBufferNonResidentNV"));
		this->glMakeNamedBufferResidentNV = reinterpret_cast<PFNGLMAKENAMEDBUFFERRESIDENTNVPROC>(GETFUNCADDR("glMakeNamedBufferResidentNV"));
		this->glProgramUniformui64NV = reinterpret_cast<PFNGLPROGRAMUNIFORMUI64NVPROC>(GETFUNCADDR("glProgramUniformui64NV"));
		this->glProgramUniformui64vNV = reinterpret_cast<PFNGLPROGRAMUNIFORMUI64VNVPROC>(GETFUNCADDR("glProgramUniformui64vNV"));
		this->glUniformui64NV = reinterpret_cast<PFNGLUNIFORMUI64NVPROC>(GETFUNCADDR("glUniformui64NV"));
		this->glUniformui64vNV = reinterpret_cast<PFNGLUNIFORMUI64VNVPROC>(GETFUNCADDR("glUniformui64vNV"));

		/*
			GL_NV_texture_array
		*/
		this->glCompressedTexImage3DNV = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DNVPROC>(GETFUNCADDR("glCompressedTexImage3DNV"));
		this->glCompressedTexSubImage3DNV = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DNVPROC>(GETFUNCADDR("glCompressedTexSubImage3DNV"));
		this->glCopyTexSubImage3DNV = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DNVPROC>(GETFUNCADDR("glCopyTexSubImage3DNV"));
		this->glFramebufferTextureLayerNV = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERNVPROC>(GETFUNCADDR("glFramebufferTextureLayerNV"));
		this->glTexImage3DNV = reinterpret_cast<PFNGLTEXIMAGE3DNVPROC>(GETFUNCADDR("glTexImage3DNV"));
		this->glTexSubImage3DNV = reinterpret_cast<PFNGLTEXSUBIMAGE3DNVPROC>(GETFUNCADDR("glTexSubImage3DNV"));

		/*
			GL_NV_texture_barrier
		*/
		this->glTextureBarrierNV = reinterpret_cast<PFNGLTEXTUREBARRIERNVPROC>(GETFUNCADDR("glTextureBarrierNV"));

		/*
			GL_NV_texture_multisample
		*/
		this->glTexImage2DMultisampleCoverageNV = reinterpret_cast<PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC>(GETFUNCADDR("glTexImage2DMultisampleCoverageNV"));
		this->glTexImage3DMultisampleCoverageNV = reinterpret_cast<PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC>(GETFUNCADDR("glTexImage3DMultisampleCoverageNV"));
		this->glTextureImage2DMultisampleCoverageNV = reinterpret_cast<PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC>(GETFUNCADDR("glTextureImage2DMultisampleCoverageNV"));
		this->glTextureImage2DMultisampleNV = reinterpret_cast<PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC>(GETFUNCADDR("glTextureImage2DMultisampleNV"));
		this->glTextureImage3DMultisampleCoverageNV = reinterpret_cast<PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC>(GETFUNCADDR("glTextureImage3DMultisampleCoverageNV"));
		this->glTextureImage3DMultisampleNV = reinterpret_cast<PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC>(GETFUNCADDR("glTextureImage3DMultisampleNV"));

		/*
			GL_NV_transform_feedback
		*/
		this->glActiveVaryingNV = reinterpret_cast<PFNGLACTIVEVARYINGNVPROC>(GETFUNCADDR("glActiveVaryingNV"));
		this->glBeginTransformFeedbackNV = reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glBeginTransformFeedbackNV"));
		this->glBindBufferBaseNV = reinterpret_cast<PFNGLBINDBUFFERBASENVPROC>(GETFUNCADDR("glBindBufferBaseNV"));
		this->glBindBufferOffsetNV = reinterpret_cast<PFNGLBINDBUFFEROFFSETNVPROC>(GETFUNCADDR("glBindBufferOffsetNV"));
		this->glBindBufferRangeNV = reinterpret_cast<PFNGLBINDBUFFERRANGENVPROC>(GETFUNCADDR("glBindBufferRangeNV"));
		this->glEndTransformFeedbackNV = reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glEndTransformFeedbackNV"));
		this->glGetActiveVaryingNV = reinterpret_cast<PFNGLGETACTIVEVARYINGNVPROC>(GETFUNCADDR("glGetActiveVaryingNV"));
		this->glGetTransformFeedbackVaryingNV = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC>(GETFUNCADDR("glGetTransformFeedbackVaryingNV"));
		this->glGetVaryingLocationNV = reinterpret_cast<PFNGLGETVARYINGLOCATIONNVPROC>(GETFUNCADDR("glGetVaryingLocationNV"));
		this->glTransformFeedbackAttribsNV = reinterpret_cast<PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC>(GETFUNCADDR("glTransformFeedbackAttribsNV"));
		this->glTransformFeedbackVaryingsNV = reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC>(GETFUNCADDR("glTransformFeedbackVaryingsNV"));

		/*
			GL_NV_transform_feedback2
		*/
		this->glBindTransformFeedbackNV = reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glBindTransformFeedbackNV"));
		this->glDeleteTransformFeedbacksNV = reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSNVPROC>(GETFUNCADDR("glDeleteTransformFeedbacksNV"));
		this->glDrawTransformFeedbackNV = reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glDrawTransformFeedbackNV"));
		this->glGenTransformFeedbacksNV = reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSNVPROC>(GETFUNCADDR("glGenTransformFeedbacksNV"));
		this->glIsTransformFeedbackNV = reinterpret_cast<PFNGLISTRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glIsTransformFeedbackNV"));
		this->glPauseTransformFeedbackNV = reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glPauseTransformFeedbackNV"));
		this->glResumeTransformFeedbackNV = reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKNVPROC>(GETFUNCADDR("glResumeTransformFeedbackNV"));

		/*
			GL_NV_vdpau_interop
		*/
		this->glVDPAUFiniNV = reinterpret_cast<PFNGLVDPAUFININVPROC>(GETFUNCADDR("glVDPAUFiniNV"));
		this->glVDPAUGetSurfaceivNV = reinterpret_cast<PFNGLVDPAUGETSURFACEIVNVPROC>(GETFUNCADDR("glVDPAUGetSurfaceivNV"));
		this->glVDPAUInitNV = reinterpret_cast<PFNGLVDPAUINITNVPROC>(GETFUNCADDR("glVDPAUInitNV"));
		this->glVDPAUIsSurfaceNV = reinterpret_cast<PFNGLVDPAUISSURFACENVPROC>(GETFUNCADDR("glVDPAUIsSurfaceNV"));
		this->glVDPAUMapSurfacesNV = reinterpret_cast<PFNGLVDPAUMAPSURFACESNVPROC>(GETFUNCADDR("glVDPAUMapSurfacesNV"));
		this->glVDPAURegisterOutputSurfaceNV = reinterpret_cast<PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC>(GETFUNCADDR("glVDPAURegisterOutputSurfaceNV"));
		this->glVDPAURegisterVideoSurfaceNV = reinterpret_cast<PFNGLVDPAUREGISTERVIDEOSURFACENVPROC>(GETFUNCADDR("glVDPAURegisterVideoSurfaceNV"));
		this->glVDPAUSurfaceAccessNV = reinterpret_cast<PFNGLVDPAUSURFACEACCESSNVPROC>(GETFUNCADDR("glVDPAUSurfaceAccessNV"));
		this->glVDPAUUnmapSurfacesNV = reinterpret_cast<PFNGLVDPAUUNMAPSURFACESNVPROC>(GETFUNCADDR("glVDPAUUnmapSurfacesNV"));
		this->glVDPAUUnregisterSurfaceNV = reinterpret_cast<PFNGLVDPAUUNREGISTERSURFACENVPROC>(GETFUNCADDR("glVDPAUUnregisterSurfaceNV"));

		/*
			GL_NV_vertex_array_range
		*/
		this->glFlushVertexArrayRangeNV = reinterpret_cast<PFNGLFLUSHVERTEXARRAYRANGENVPROC>(GETFUNCADDR("glFlushVertexArrayRangeNV"));
		this->glVertexArrayRangeNV = reinterpret_cast<PFNGLVERTEXARRAYRANGENVPROC>(GETFUNCADDR("glVertexArrayRangeNV"));

		/*
			GL_NV_vertex_attrib_integer_64bit
		*/
		this->glGetVertexAttribLi64vNV = reinterpret_cast<PFNGLGETVERTEXATTRIBLI64VNVPROC>(GETFUNCADDR("glGetVertexAttribLi64vNV"));
		this->glGetVertexAttribLui64vNV = reinterpret_cast<PFNGLGETVERTEXATTRIBLUI64VNVPROC>(GETFUNCADDR("glGetVertexAttribLui64vNV"));
		this->glVertexAttribL1i64NV = reinterpret_cast<PFNGLVERTEXATTRIBL1I64NVPROC>(GETFUNCADDR("glVertexAttribL1i64NV"));
		this->glVertexAttribL1i64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL1I64VNVPROC>(GETFUNCADDR("glVertexAttribL1i64vNV"));
		this->glVertexAttribL1ui64NV = reinterpret_cast<PFNGLVERTEXATTRIBL1UI64NVPROC>(GETFUNCADDR("glVertexAttribL1ui64NV"));
		this->glVertexAttribL1ui64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL1UI64VNVPROC>(GETFUNCADDR("glVertexAttribL1ui64vNV"));
		this->glVertexAttribL2i64NV = reinterpret_cast<PFNGLVERTEXATTRIBL2I64NVPROC>(GETFUNCADDR("glVertexAttribL2i64NV"));
		this->glVertexAttribL2i64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL2I64VNVPROC>(GETFUNCADDR("glVertexAttribL2i64vNV"));
		this->glVertexAttribL2ui64NV = reinterpret_cast<PFNGLVERTEXATTRIBL2UI64NVPROC>(GETFUNCADDR("glVertexAttribL2ui64NV"));
		this->glVertexAttribL2ui64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL2UI64VNVPROC>(GETFUNCADDR("glVertexAttribL2ui64vNV"));
		this->glVertexAttribL3i64NV = reinterpret_cast<PFNGLVERTEXATTRIBL3I64NVPROC>(GETFUNCADDR("glVertexAttribL3i64NV"));
		this->glVertexAttribL3i64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL3I64VNVPROC>(GETFUNCADDR("glVertexAttribL3i64vNV"));
		this->glVertexAttribL3ui64NV = reinterpret_cast<PFNGLVERTEXATTRIBL3UI64NVPROC>(GETFUNCADDR("glVertexAttribL3ui64NV"));
		this->glVertexAttribL3ui64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL3UI64VNVPROC>(GETFUNCADDR("glVertexAttribL3ui64vNV"));
		this->glVertexAttribL4i64NV = reinterpret_cast<PFNGLVERTEXATTRIBL4I64NVPROC>(GETFUNCADDR("glVertexAttribL4i64NV"));
		this->glVertexAttribL4i64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL4I64VNVPROC>(GETFUNCADDR("glVertexAttribL4i64vNV"));
		this->glVertexAttribL4ui64NV = reinterpret_cast<PFNGLVERTEXATTRIBL4UI64NVPROC>(GETFUNCADDR("glVertexAttribL4ui64NV"));
		this->glVertexAttribL4ui64vNV = reinterpret_cast<PFNGLVERTEXATTRIBL4UI64VNVPROC>(GETFUNCADDR("glVertexAttribL4ui64vNV"));
		this->glVertexAttribLFormatNV = reinterpret_cast<PFNGLVERTEXATTRIBLFORMATNVPROC>(GETFUNCADDR("glVertexAttribLFormatNV"));

		/*
			GL_NV_vertex_buffer_unified_memory
		*/
		this->glBufferAddressRangeNV = reinterpret_cast<PFNGLBUFFERADDRESSRANGENVPROC>(GETFUNCADDR("glBufferAddressRangeNV"));
		this->glColorFormatNV = reinterpret_cast<PFNGLCOLORFORMATNVPROC>(GETFUNCADDR("glColorFormatNV"));
		this->glEdgeFlagFormatNV = reinterpret_cast<PFNGLEDGEFLAGFORMATNVPROC>(GETFUNCADDR("glEdgeFlagFormatNV"));
		this->glFogCoordFormatNV = reinterpret_cast<PFNGLFOGCOORDFORMATNVPROC>(GETFUNCADDR("glFogCoordFormatNV"));
		this->glGetIntegerui64i_vNV = reinterpret_cast<PFNGLGETINTEGERUI64I_VNVPROC>(GETFUNCADDR("glGetIntegerui64i_vNV"));
		this->glIndexFormatNV = reinterpret_cast<PFNGLINDEXFORMATNVPROC>(GETFUNCADDR("glIndexFormatNV"));
		this->glNormalFormatNV = reinterpret_cast<PFNGLNORMALFORMATNVPROC>(GETFUNCADDR("glNormalFormatNV"));
		this->glSecondaryColorFormatNV = reinterpret_cast<PFNGLSECONDARYCOLORFORMATNVPROC>(GETFUNCADDR("glSecondaryColorFormatNV"));
		this->glTexCoordFormatNV = reinterpret_cast<PFNGLTEXCOORDFORMATNVPROC>(GETFUNCADDR("glTexCoordFormatNV"));
		this->glVertexAttribFormatNV = reinterpret_cast<PFNGLVERTEXATTRIBFORMATNVPROC>(GETFUNCADDR("glVertexAttribFormatNV"));
		this->glVertexAttribIFormatNV = reinterpret_cast<PFNGLVERTEXATTRIBIFORMATNVPROC>(GETFUNCADDR("glVertexAttribIFormatNV"));
		this->glVertexFormatNV = reinterpret_cast<PFNGLVERTEXFORMATNVPROC>(GETFUNCADDR("glVertexFormatNV"));

		/*
			GL_NV_vertex_program
		*/
		this->glAreProgramsResidentNV = reinterpret_cast<PFNGLAREPROGRAMSRESIDENTNVPROC>(GETFUNCADDR("glAreProgramsResidentNV"));
		this->glBindProgramNV = reinterpret_cast<PFNGLBINDPROGRAMNVPROC>(GETFUNCADDR("glBindProgramNV"));
		this->glDeleteProgramsNV = reinterpret_cast<PFNGLDELETEPROGRAMSNVPROC>(GETFUNCADDR("glDeleteProgramsNV"));
		this->glExecuteProgramNV = reinterpret_cast<PFNGLEXECUTEPROGRAMNVPROC>(GETFUNCADDR("glExecuteProgramNV"));
		this->glGenProgramsNV = reinterpret_cast<PFNGLGENPROGRAMSNVPROC>(GETFUNCADDR("glGenProgramsNV"));
		this->glGetProgramParameterdvNV = reinterpret_cast<PFNGLGETPROGRAMPARAMETERDVNVPROC>(GETFUNCADDR("glGetProgramParameterdvNV"));
		this->glGetProgramParameterfvNV = reinterpret_cast<PFNGLGETPROGRAMPARAMETERFVNVPROC>(GETFUNCADDR("glGetProgramParameterfvNV"));
		this->glGetProgramStringNV = reinterpret_cast<PFNGLGETPROGRAMSTRINGNVPROC>(GETFUNCADDR("glGetProgramStringNV"));
		this->glGetProgramivNV = reinterpret_cast<PFNGLGETPROGRAMIVNVPROC>(GETFUNCADDR("glGetProgramivNV"));
		this->glGetTrackMatrixivNV = reinterpret_cast<PFNGLGETTRACKMATRIXIVNVPROC>(GETFUNCADDR("glGetTrackMatrixivNV"));
		this->glGetVertexAttribPointervNV = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVNVPROC>(GETFUNCADDR("glGetVertexAttribPointervNV"));
		this->glGetVertexAttribdvNV = reinterpret_cast<PFNGLGETVERTEXATTRIBDVNVPROC>(GETFUNCADDR("glGetVertexAttribdvNV"));
		this->glGetVertexAttribfvNV = reinterpret_cast<PFNGLGETVERTEXATTRIBFVNVPROC>(GETFUNCADDR("glGetVertexAttribfvNV"));
		this->glGetVertexAttribivNV = reinterpret_cast<PFNGLGETVERTEXATTRIBIVNVPROC>(GETFUNCADDR("glGetVertexAttribivNV"));
		this->glIsProgramNV = reinterpret_cast<PFNGLISPROGRAMNVPROC>(GETFUNCADDR("glIsProgramNV"));
		this->glLoadProgramNV = reinterpret_cast<PFNGLLOADPROGRAMNVPROC>(GETFUNCADDR("glLoadProgramNV"));
		this->glProgramParameter4dNV = reinterpret_cast<PFNGLPROGRAMPARAMETER4DNVPROC>(GETFUNCADDR("glProgramParameter4dNV"));
		this->glProgramParameter4dvNV = reinterpret_cast<PFNGLPROGRAMPARAMETER4DVNVPROC>(GETFUNCADDR("glProgramParameter4dvNV"));
		this->glProgramParameter4fNV = reinterpret_cast<PFNGLPROGRAMPARAMETER4FNVPROC>(GETFUNCADDR("glProgramParameter4fNV"));
		this->glProgramParameter4fvNV = reinterpret_cast<PFNGLPROGRAMPARAMETER4FVNVPROC>(GETFUNCADDR("glProgramParameter4fvNV"));
		this->glProgramParameters4dvNV = reinterpret_cast<PFNGLPROGRAMPARAMETERS4DVNVPROC>(GETFUNCADDR("glProgramParameters4dvNV"));
		this->glProgramParameters4fvNV = reinterpret_cast<PFNGLPROGRAMPARAMETERS4FVNVPROC>(GETFUNCADDR("glProgramParameters4fvNV"));
		this->glRequestResidentProgramsNV = reinterpret_cast<PFNGLREQUESTRESIDENTPROGRAMSNVPROC>(GETFUNCADDR("glRequestResidentProgramsNV"));
		this->glTrackMatrixNV = reinterpret_cast<PFNGLTRACKMATRIXNVPROC>(GETFUNCADDR("glTrackMatrixNV"));
		this->glVertexAttrib1dNV = reinterpret_cast<PFNGLVERTEXATTRIB1DNVPROC>(GETFUNCADDR("glVertexAttrib1dNV"));
		this->glVertexAttrib1dvNV = reinterpret_cast<PFNGLVERTEXATTRIB1DVNVPROC>(GETFUNCADDR("glVertexAttrib1dvNV"));
		this->glVertexAttrib1fNV = reinterpret_cast<PFNGLVERTEXATTRIB1FNVPROC>(GETFUNCADDR("glVertexAttrib1fNV"));
		this->glVertexAttrib1fvNV = reinterpret_cast<PFNGLVERTEXATTRIB1FVNVPROC>(GETFUNCADDR("glVertexAttrib1fvNV"));
		this->glVertexAttrib1sNV = reinterpret_cast<PFNGLVERTEXATTRIB1SNVPROC>(GETFUNCADDR("glVertexAttrib1sNV"));
		this->glVertexAttrib1svNV = reinterpret_cast<PFNGLVERTEXATTRIB1SVNVPROC>(GETFUNCADDR("glVertexAttrib1svNV"));
		this->glVertexAttrib2dNV = reinterpret_cast<PFNGLVERTEXATTRIB2DNVPROC>(GETFUNCADDR("glVertexAttrib2dNV"));
		this->glVertexAttrib2dvNV = reinterpret_cast<PFNGLVERTEXATTRIB2DVNVPROC>(GETFUNCADDR("glVertexAttrib2dvNV"));
		this->glVertexAttrib2fNV = reinterpret_cast<PFNGLVERTEXATTRIB2FNVPROC>(GETFUNCADDR("glVertexAttrib2fNV"));
		this->glVertexAttrib2fvNV = reinterpret_cast<PFNGLVERTEXATTRIB2FVNVPROC>(GETFUNCADDR("glVertexAttrib2fvNV"));
		this->glVertexAttrib2sNV = reinterpret_cast<PFNGLVERTEXATTRIB2SNVPROC>(GETFUNCADDR("glVertexAttrib2sNV"));
		this->glVertexAttrib2svNV = reinterpret_cast<PFNGLVERTEXATTRIB2SVNVPROC>(GETFUNCADDR("glVertexAttrib2svNV"));
		this->glVertexAttrib3dNV = reinterpret_cast<PFNGLVERTEXATTRIB3DNVPROC>(GETFUNCADDR("glVertexAttrib3dNV"));
		this->glVertexAttrib3dvNV = reinterpret_cast<PFNGLVERTEXATTRIB3DVNVPROC>(GETFUNCADDR("glVertexAttrib3dvNV"));
		this->glVertexAttrib3fNV = reinterpret_cast<PFNGLVERTEXATTRIB3FNVPROC>(GETFUNCADDR("glVertexAttrib3fNV"));
		this->glVertexAttrib3fvNV = reinterpret_cast<PFNGLVERTEXATTRIB3FVNVPROC>(GETFUNCADDR("glVertexAttrib3fvNV"));
		this->glVertexAttrib3sNV = reinterpret_cast<PFNGLVERTEXATTRIB3SNVPROC>(GETFUNCADDR("glVertexAttrib3sNV"));
		this->glVertexAttrib3svNV = reinterpret_cast<PFNGLVERTEXATTRIB3SVNVPROC>(GETFUNCADDR("glVertexAttrib3svNV"));
		this->glVertexAttrib4dNV = reinterpret_cast<PFNGLVERTEXATTRIB4DNVPROC>(GETFUNCADDR("glVertexAttrib4dNV"));
		this->glVertexAttrib4dvNV = reinterpret_cast<PFNGLVERTEXATTRIB4DVNVPROC>(GETFUNCADDR("glVertexAttrib4dvNV"));
		this->glVertexAttrib4fNV = reinterpret_cast<PFNGLVERTEXATTRIB4FNVPROC>(GETFUNCADDR("glVertexAttrib4fNV"));
		this->glVertexAttrib4fvNV = reinterpret_cast<PFNGLVERTEXATTRIB4FVNVPROC>(GETFUNCADDR("glVertexAttrib4fvNV"));
		this->glVertexAttrib4sNV = reinterpret_cast<PFNGLVERTEXATTRIB4SNVPROC>(GETFUNCADDR("glVertexAttrib4sNV"));
		this->glVertexAttrib4svNV = reinterpret_cast<PFNGLVERTEXATTRIB4SVNVPROC>(GETFUNCADDR("glVertexAttrib4svNV"));
		this->glVertexAttrib4ubNV = reinterpret_cast<PFNGLVERTEXATTRIB4UBNVPROC>(GETFUNCADDR("glVertexAttrib4ubNV"));
		this->glVertexAttrib4ubvNV = reinterpret_cast<PFNGLVERTEXATTRIB4UBVNVPROC>(GETFUNCADDR("glVertexAttrib4ubvNV"));
		this->glVertexAttribPointerNV = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERNVPROC>(GETFUNCADDR("glVertexAttribPointerNV"));
		this->glVertexAttribs1dvNV = reinterpret_cast<PFNGLVERTEXATTRIBS1DVNVPROC>(GETFUNCADDR("glVertexAttribs1dvNV"));
		this->glVertexAttribs1fvNV = reinterpret_cast<PFNGLVERTEXATTRIBS1FVNVPROC>(GETFUNCADDR("glVertexAttribs1fvNV"));
		this->glVertexAttribs1svNV = reinterpret_cast<PFNGLVERTEXATTRIBS1SVNVPROC>(GETFUNCADDR("glVertexAttribs1svNV"));
		this->glVertexAttribs2dvNV = reinterpret_cast<PFNGLVERTEXATTRIBS2DVNVPROC>(GETFUNCADDR("glVertexAttribs2dvNV"));
		this->glVertexAttribs2fvNV = reinterpret_cast<PFNGLVERTEXATTRIBS2FVNVPROC>(GETFUNCADDR("glVertexAttribs2fvNV"));
		this->glVertexAttribs2svNV = reinterpret_cast<PFNGLVERTEXATTRIBS2SVNVPROC>(GETFUNCADDR("glVertexAttribs2svNV"));
		this->glVertexAttribs3dvNV = reinterpret_cast<PFNGLVERTEXATTRIBS3DVNVPROC>(GETFUNCADDR("glVertexAttribs3dvNV"));
		this->glVertexAttribs3fvNV = reinterpret_cast<PFNGLVERTEXATTRIBS3FVNVPROC>(GETFUNCADDR("glVertexAttribs3fvNV"));
		this->glVertexAttribs3svNV = reinterpret_cast<PFNGLVERTEXATTRIBS3SVNVPROC>(GETFUNCADDR("glVertexAttribs3svNV"));
		this->glVertexAttribs4dvNV = reinterpret_cast<PFNGLVERTEXATTRIBS4DVNVPROC>(GETFUNCADDR("glVertexAttribs4dvNV"));
		this->glVertexAttribs4fvNV = reinterpret_cast<PFNGLVERTEXATTRIBS4FVNVPROC>(GETFUNCADDR("glVertexAttribs4fvNV"));
		this->glVertexAttribs4svNV = reinterpret_cast<PFNGLVERTEXATTRIBS4SVNVPROC>(GETFUNCADDR("glVertexAttribs4svNV"));
		this->glVertexAttribs4ubvNV = reinterpret_cast<PFNGLVERTEXATTRIBS4UBVNVPROC>(GETFUNCADDR("glVertexAttribs4ubvNV"));

		/*
			GL_NV_video_capture
		*/
		this->glBeginVideoCaptureNV = reinterpret_cast<PFNGLBEGINVIDEOCAPTURENVPROC>(GETFUNCADDR("glBeginVideoCaptureNV"));
		this->glBindVideoCaptureStreamBufferNV = reinterpret_cast<PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC>(GETFUNCADDR("glBindVideoCaptureStreamBufferNV"));
		this->glBindVideoCaptureStreamTextureNV = reinterpret_cast<PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC>(GETFUNCADDR("glBindVideoCaptureStreamTextureNV"));
		this->glEndVideoCaptureNV = reinterpret_cast<PFNGLENDVIDEOCAPTURENVPROC>(GETFUNCADDR("glEndVideoCaptureNV"));
		this->glGetVideoCaptureStreamdvNV = reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMDVNVPROC>(GETFUNCADDR("glGetVideoCaptureStreamdvNV"));
		this->glGetVideoCaptureStreamfvNV = reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMFVNVPROC>(GETFUNCADDR("glGetVideoCaptureStreamfvNV"));
		this->glGetVideoCaptureStreamivNV = reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMIVNVPROC>(GETFUNCADDR("glGetVideoCaptureStreamivNV"));
		this->glGetVideoCaptureivNV = reinterpret_cast<PFNGLGETVIDEOCAPTUREIVNVPROC>(GETFUNCADDR("glGetVideoCaptureivNV"));
		this->glVideoCaptureNV = reinterpret_cast<PFNGLVIDEOCAPTURENVPROC>(GETFUNCADDR("glVideoCaptureNV"));
		this->glVideoCaptureStreamParameterdvNV = reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC>(GETFUNCADDR("glVideoCaptureStreamParameterdvNV"));
		this->glVideoCaptureStreamParameterfvNV = reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC>(GETFUNCADDR("glVideoCaptureStreamParameterfvNV"));
		this->glVideoCaptureStreamParameterivNV = reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC>(GETFUNCADDR("glVideoCaptureStreamParameterivNV"));

		/*
			GL_NV_viewport_array
		*/
		this->glDepthRangeArrayfvNV = reinterpret_cast<PFNGLDEPTHRANGEARRAYFVNVPROC>(GETFUNCADDR("glDepthRangeArrayfvNV"));
		this->glDepthRangeIndexedfNV = reinterpret_cast<PFNGLDEPTHRANGEINDEXEDFNVPROC>(GETFUNCADDR("glDepthRangeIndexedfNV"));
		this->glDisableiNV = reinterpret_cast<PFNGLDISABLEINVPROC>(GETFUNCADDR("glDisableiNV"));
		this->glEnableiNV = reinterpret_cast<PFNGLENABLEINVPROC>(GETFUNCADDR("glEnableiNV"));
		this->glGetFloati_vNV = reinterpret_cast<PFNGLGETFLOATI_VNVPROC>(GETFUNCADDR("glGetFloati_vNV"));
		this->glIsEnablediNV = reinterpret_cast<PFNGLISENABLEDINVPROC>(GETFUNCADDR("glIsEnablediNV"));
		this->glScissorArrayvNV = reinterpret_cast<PFNGLSCISSORARRAYVNVPROC>(GETFUNCADDR("glScissorArrayvNV"));
		this->glScissorIndexedNV = reinterpret_cast<PFNGLSCISSORINDEXEDNVPROC>(GETFUNCADDR("glScissorIndexedNV"));
		this->glScissorIndexedvNV = reinterpret_cast<PFNGLSCISSORINDEXEDVNVPROC>(GETFUNCADDR("glScissorIndexedvNV"));
		this->glViewportArrayvNV = reinterpret_cast<PFNGLVIEWPORTARRAYVNVPROC>(GETFUNCADDR("glViewportArrayvNV"));
		this->glViewportIndexedfNV = reinterpret_cast<PFNGLVIEWPORTINDEXEDFNVPROC>(GETFUNCADDR("glViewportIndexedfNV"));
		this->glViewportIndexedfvNV = reinterpret_cast<PFNGLVIEWPORTINDEXEDFVNVPROC>(GETFUNCADDR("glViewportIndexedfvNV"));

		/*
			GL_NV_viewport_swizzle
		*/
		this->glViewportSwizzleNV = reinterpret_cast<PFNGLVIEWPORTSWIZZLENVPROC>(GETFUNCADDR("glViewportSwizzleNV"));

		/*
			GL_OVR_multiview
		*/
		this->glFramebufferTextureMultiviewOVR = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC>(GETFUNCADDR("glFramebufferTextureMultiviewOVR"));

		/*
			GL_OVR_multiview_multisampled_render_to_texture
		*/
		this->glFramebufferTextureMultisampleMultiviewOVR = reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC>(GETFUNCADDR("glFramebufferTextureMultisampleMultiviewOVR"));

		/*
			GL_QCOM_alpha_test
		*/
		this->glAlphaFuncQCOM = reinterpret_cast<PFNGLALPHAFUNCQCOMPROC>(GETFUNCADDR("glAlphaFuncQCOM"));

		/*
			GL_QCOM_driver_control
		*/
		this->glDisableDriverControlQCOM = reinterpret_cast<PFNGLDISABLEDRIVERCONTROLQCOMPROC>(GETFUNCADDR("glDisableDriverControlQCOM"));
		this->glEnableDriverControlQCOM = reinterpret_cast<PFNGLENABLEDRIVERCONTROLQCOMPROC>(GETFUNCADDR("glEnableDriverControlQCOM"));
		this->glGetDriverControlStringQCOM = reinterpret_cast<PFNGLGETDRIVERCONTROLSTRINGQCOMPROC>(GETFUNCADDR("glGetDriverControlStringQCOM"));
		this->glGetDriverControlsQCOM = reinterpret_cast<PFNGLGETDRIVERCONTROLSQCOMPROC>(GETFUNCADDR("glGetDriverControlsQCOM"));

		/*
			GL_QCOM_extended_get
		*/
		this->glExtGetBufferPointervQCOM = reinterpret_cast<PFNGLEXTGETBUFFERPOINTERVQCOMPROC>(GETFUNCADDR("glExtGetBufferPointervQCOM"));
		this->glExtGetBuffersQCOM = reinterpret_cast<PFNGLEXTGETBUFFERSQCOMPROC>(GETFUNCADDR("glExtGetBuffersQCOM"));
		this->glExtGetFramebuffersQCOM = reinterpret_cast<PFNGLEXTGETFRAMEBUFFERSQCOMPROC>(GETFUNCADDR("glExtGetFramebuffersQCOM"));
		this->glExtGetRenderbuffersQCOM = reinterpret_cast<PFNGLEXTGETRENDERBUFFERSQCOMPROC>(GETFUNCADDR("glExtGetRenderbuffersQCOM"));
		this->glExtGetTexLevelParameterivQCOM = reinterpret_cast<PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC>(GETFUNCADDR("glExtGetTexLevelParameterivQCOM"));
		this->glExtGetTexSubImageQCOM = reinterpret_cast<PFNGLEXTGETTEXSUBIMAGEQCOMPROC>(GETFUNCADDR("glExtGetTexSubImageQCOM"));
		this->glExtGetTexturesQCOM = reinterpret_cast<PFNGLEXTGETTEXTURESQCOMPROC>(GETFUNCADDR("glExtGetTexturesQCOM"));
		this->glExtTexObjectStateOverrideiQCOM = reinterpret_cast<PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC>(GETFUNCADDR("glExtTexObjectStateOverrideiQCOM"));

		/*
			GL_QCOM_extended_get2
		*/
		this->glExtGetProgramBinarySourceQCOM = reinterpret_cast<PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC>(GETFUNCADDR("glExtGetProgramBinarySourceQCOM"));
		this->glExtGetProgramsQCOM = reinterpret_cast<PFNGLEXTGETPROGRAMSQCOMPROC>(GETFUNCADDR("glExtGetProgramsQCOM"));
		this->glExtGetShadersQCOM = reinterpret_cast<PFNGLEXTGETSHADERSQCOMPROC>(GETFUNCADDR("glExtGetShadersQCOM"));
		this->glExtIsProgramBinaryQCOM = reinterpret_cast<PFNGLEXTISPROGRAMBINARYQCOMPROC>(GETFUNCADDR("glExtIsProgramBinaryQCOM"));

		/*
			GL_QCOM_framebuffer_foveated
		*/
		this->glFramebufferFoveationConfigQCOM = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC>(GETFUNCADDR("glFramebufferFoveationConfigQCOM"));
		this->glFramebufferFoveationParametersQCOM = reinterpret_cast<PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC>(GETFUNCADDR("glFramebufferFoveationParametersQCOM"));

		/*
			GL_QCOM_shader_framebuffer_fetch_noncoherent
		*/
		this->glFramebufferFetchBarrierQCOM = reinterpret_cast<PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC>(GETFUNCADDR("glFramebufferFetchBarrierQCOM"));

		/*
			GL_QCOM_tiled_rendering
		*/
		this->glEndTilingQCOM = reinterpret_cast<PFNGLENDTILINGQCOMPROC>(GETFUNCADDR("glEndTilingQCOM"));
		this->glStartTilingQCOM = reinterpret_cast<PFNGLSTARTTILINGQCOMPROC>(GETFUNCADDR("glStartTilingQCOM"));

		/*
			GL_REGAL_ES1_0_compatibility
		*/
		this->glAlphaFuncx = reinterpret_cast<PFNGLALPHAFUNCXPROC>(GETFUNCADDR("glAlphaFuncx"));
		this->glClearColorx = reinterpret_cast<PFNGLCLEARCOLORXPROC>(GETFUNCADDR("glClearColorx"));
		this->glClearDepthx = reinterpret_cast<PFNGLCLEARDEPTHXPROC>(GETFUNCADDR("glClearDepthx"));
		this->glColor4x = reinterpret_cast<PFNGLCOLOR4XPROC>(GETFUNCADDR("glColor4x"));
		this->glDepthRangex = reinterpret_cast<PFNGLDEPTHRANGEXPROC>(GETFUNCADDR("glDepthRangex"));
		this->glFogx = reinterpret_cast<PFNGLFOGXPROC>(GETFUNCADDR("glFogx"));
		this->glFogxv = reinterpret_cast<PFNGLFOGXVPROC>(GETFUNCADDR("glFogxv"));
		this->glFrustumf = reinterpret_cast<PFNGLFRUSTUMFPROC>(GETFUNCADDR("glFrustumf"));
		this->glFrustumx = reinterpret_cast<PFNGLFRUSTUMXPROC>(GETFUNCADDR("glFrustumx"));
		this->glLightModelx = reinterpret_cast<PFNGLLIGHTMODELXPROC>(GETFUNCADDR("glLightModelx"));
		this->glLightModelxv = reinterpret_cast<PFNGLLIGHTMODELXVPROC>(GETFUNCADDR("glLightModelxv"));
		this->glLightx = reinterpret_cast<PFNGLLIGHTXPROC>(GETFUNCADDR("glLightx"));
		this->glLightxv = reinterpret_cast<PFNGLLIGHTXVPROC>(GETFUNCADDR("glLightxv"));
		this->glLineWidthx = reinterpret_cast<PFNGLLINEWIDTHXPROC>(GETFUNCADDR("glLineWidthx"));
		this->glLoadMatrixx = reinterpret_cast<PFNGLLOADMATRIXXPROC>(GETFUNCADDR("glLoadMatrixx"));
		this->glMaterialx = reinterpret_cast<PFNGLMATERIALXPROC>(GETFUNCADDR("glMaterialx"));
		this->glMaterialxv = reinterpret_cast<PFNGLMATERIALXVPROC>(GETFUNCADDR("glMaterialxv"));
		this->glMultMatrixx = reinterpret_cast<PFNGLMULTMATRIXXPROC>(GETFUNCADDR("glMultMatrixx"));
		this->glMultiTexCoord4x = reinterpret_cast<PFNGLMULTITEXCOORD4XPROC>(GETFUNCADDR("glMultiTexCoord4x"));
		this->glNormal3x = reinterpret_cast<PFNGLNORMAL3XPROC>(GETFUNCADDR("glNormal3x"));
		this->glOrthof = reinterpret_cast<PFNGLORTHOFPROC>(GETFUNCADDR("glOrthof"));
		this->glOrthox = reinterpret_cast<PFNGLORTHOXPROC>(GETFUNCADDR("glOrthox"));
		this->glPointSizex = reinterpret_cast<PFNGLPOINTSIZEXPROC>(GETFUNCADDR("glPointSizex"));
		this->glPolygonOffsetx = reinterpret_cast<PFNGLPOLYGONOFFSETXPROC>(GETFUNCADDR("glPolygonOffsetx"));
		this->glRotatex = reinterpret_cast<PFNGLROTATEXPROC>(GETFUNCADDR("glRotatex"));
		this->glSampleCoveragex = reinterpret_cast<PFNGLSAMPLECOVERAGEXPROC>(GETFUNCADDR("glSampleCoveragex"));
		this->glScalex = reinterpret_cast<PFNGLSCALEXPROC>(GETFUNCADDR("glScalex"));
		this->glTexEnvx = reinterpret_cast<PFNGLTEXENVXPROC>(GETFUNCADDR("glTexEnvx"));
		this->glTexEnvxv = reinterpret_cast<PFNGLTEXENVXVPROC>(GETFUNCADDR("glTexEnvxv"));
		this->glTexParameterx = reinterpret_cast<PFNGLTEXPARAMETERXPROC>(GETFUNCADDR("glTexParameterx"));
		this->glTranslatex = reinterpret_cast<PFNGLTRANSLATEXPROC>(GETFUNCADDR("glTranslatex"));

		/*
			GL_REGAL_ES1_1_compatibility
		*/
		this->glClipPlanef = reinterpret_cast<PFNGLCLIPPLANEFPROC>(GETFUNCADDR("glClipPlanef"));
		this->glClipPlanex = reinterpret_cast<PFNGLCLIPPLANEXPROC>(GETFUNCADDR("glClipPlanex"));
		this->glGetClipPlanef = reinterpret_cast<PFNGLGETCLIPPLANEFPROC>(GETFUNCADDR("glGetClipPlanef"));
		this->glGetClipPlanex = reinterpret_cast<PFNGLGETCLIPPLANEXPROC>(GETFUNCADDR("glGetClipPlanex"));
		this->glGetFixedv = reinterpret_cast<PFNGLGETFIXEDVPROC>(GETFUNCADDR("glGetFixedv"));
		this->glGetLightxv = reinterpret_cast<PFNGLGETLIGHTXVPROC>(GETFUNCADDR("glGetLightxv"));
		this->glGetMaterialxv = reinterpret_cast<PFNGLGETMATERIALXVPROC>(GETFUNCADDR("glGetMaterialxv"));
		this->glGetTexEnvxv = reinterpret_cast<PFNGLGETTEXENVXVPROC>(GETFUNCADDR("glGetTexEnvxv"));
		this->glGetTexParameterxv = reinterpret_cast<PFNGLGETTEXPARAMETERXVPROC>(GETFUNCADDR("glGetTexParameterxv"));
		this->glPointParameterx = reinterpret_cast<PFNGLPOINTPARAMETERXPROC>(GETFUNCADDR("glPointParameterx"));
		this->glPointParameterxv = reinterpret_cast<PFNGLPOINTPARAMETERXVPROC>(GETFUNCADDR("glPointParameterxv"));
		this->glPointSizePointerOES = reinterpret_cast<PFNGLPOINTSIZEPOINTEROESPROC>(GETFUNCADDR("glPointSizePointerOES"));
		this->glTexParameterxv = reinterpret_cast<PFNGLTEXPARAMETERXVPROC>(GETFUNCADDR("glTexParameterxv"));

		/*
			GL_REGAL_error_string
		*/
		this->glErrorStringREGAL = reinterpret_cast<PFNGLERRORSTRINGREGALPROC>(GETFUNCADDR("glErrorStringREGAL"));

		/*
			GL_REGAL_extension_query
		*/
		this->glGetExtensionREGAL = reinterpret_cast<PFNGLGETEXTENSIONREGALPROC>(GETFUNCADDR("glGetExtensionREGAL"));
		this->glIsSupportedREGAL = reinterpret_cast<PFNGLISSUPPORTEDREGALPROC>(GETFUNCADDR("glIsSupportedREGAL"));

		/*
			GL_REGAL_log
		*/
		this->glLogMessageCallbackREGAL = reinterpret_cast<PFNGLLOGMESSAGECALLBACKREGALPROC>(GETFUNCADDR("glLogMessageCallbackREGAL"));

		/*
			GL_REGAL_proc_address
		*/
		this->glGetProcAddressREGAL = reinterpret_cast<PFNGLGETPROCADDRESSREGALPROC>(GETFUNCADDR("glGetProcAddressREGAL"));

		/*
			GL_SGIS_detail_texture
		*/
		this->glDetailTexFuncSGIS = reinterpret_cast<PFNGLDETAILTEXFUNCSGISPROC>(GETFUNCADDR("glDetailTexFuncSGIS"));
		this->glGetDetailTexFuncSGIS = reinterpret_cast<PFNGLGETDETAILTEXFUNCSGISPROC>(GETFUNCADDR("glGetDetailTexFuncSGIS"));

		/*
			GL_SGIS_fog_function
		*/
		this->glFogFuncSGIS = reinterpret_cast<PFNGLFOGFUNCSGISPROC>(GETFUNCADDR("glFogFuncSGIS"));
		this->glGetFogFuncSGIS = reinterpret_cast<PFNGLGETFOGFUNCSGISPROC>(GETFUNCADDR("glGetFogFuncSGIS"));

		/*
			GL_SGIS_multisample
		*/
		this->glSampleMaskSGIS = reinterpret_cast<PFNGLSAMPLEMASKSGISPROC>(GETFUNCADDR("glSampleMaskSGIS"));
		this->glSamplePatternSGIS = reinterpret_cast<PFNGLSAMPLEPATTERNSGISPROC>(GETFUNCADDR("glSamplePatternSGIS"));

		/*
			GL_SGIS_multitexture
		*/
		this->glInterleavedTextureCoordSetsSGIS = reinterpret_cast<PFNGLINTERLEAVEDTEXTURECOORDSETSSGISPROC>(GETFUNCADDR("glInterleavedTextureCoordSetsSGIS"));
		this->glSelectTextureCoordSetSGIS = reinterpret_cast<PFNGLSELECTTEXTURECOORDSETSGISPROC>(GETFUNCADDR("glSelectTextureCoordSetSGIS"));
		this->glSelectTextureSGIS = reinterpret_cast<PFNGLSELECTTEXTURESGISPROC>(GETFUNCADDR("glSelectTextureSGIS"));
		this->glSelectTextureTransformSGIS = reinterpret_cast<PFNGLSELECTTEXTURETRANSFORMSGISPROC>(GETFUNCADDR("glSelectTextureTransformSGIS"));

		/*
			GL_SGIS_shared_multisample
		*/
		this->glMultisampleSubRectPosSGIS = reinterpret_cast<PFNGLMULTISAMPLESUBRECTPOSSGISPROC>(GETFUNCADDR("glMultisampleSubRectPosSGIS"));

		/*
			GL_SGIS_sharpen_texture
		*/
		this->glGetSharpenTexFuncSGIS = reinterpret_cast<PFNGLGETSHARPENTEXFUNCSGISPROC>(GETFUNCADDR("glGetSharpenTexFuncSGIS"));
		this->glSharpenTexFuncSGIS = reinterpret_cast<PFNGLSHARPENTEXFUNCSGISPROC>(GETFUNCADDR("glSharpenTexFuncSGIS"));

		/*
			GL_SGIS_texture4D
		*/
		this->glTexImage4DSGIS = reinterpret_cast<PFNGLTEXIMAGE4DSGISPROC>(GETFUNCADDR("glTexImage4DSGIS"));
		this->glTexSubImage4DSGIS = reinterpret_cast<PFNGLTEXSUBIMAGE4DSGISPROC>(GETFUNCADDR("glTexSubImage4DSGIS"));

		/*
			GL_SGIS_texture_filter4
		*/
		this->glGetTexFilterFuncSGIS = reinterpret_cast<PFNGLGETTEXFILTERFUNCSGISPROC>(GETFUNCADDR("glGetTexFilterFuncSGIS"));
		this->glTexFilterFuncSGIS = reinterpret_cast<PFNGLTEXFILTERFUNCSGISPROC>(GETFUNCADDR("glTexFilterFuncSGIS"));

		/*
			GL_SGIX_async
		*/
		this->glAsyncMarkerSGIX = reinterpret_cast<PFNGLASYNCMARKERSGIXPROC>(GETFUNCADDR("glAsyncMarkerSGIX"));
		this->glDeleteAsyncMarkersSGIX = reinterpret_cast<PFNGLDELETEASYNCMARKERSSGIXPROC>(GETFUNCADDR("glDeleteAsyncMarkersSGIX"));
		this->glFinishAsyncSGIX = reinterpret_cast<PFNGLFINISHASYNCSGIXPROC>(GETFUNCADDR("glFinishAsyncSGIX"));
		this->glGenAsyncMarkersSGIX = reinterpret_cast<PFNGLGENASYNCMARKERSSGIXPROC>(GETFUNCADDR("glGenAsyncMarkersSGIX"));
		this->glIsAsyncMarkerSGIX = reinterpret_cast<PFNGLISASYNCMARKERSGIXPROC>(GETFUNCADDR("glIsAsyncMarkerSGIX"));
		this->glPollAsyncSGIX = reinterpret_cast<PFNGLPOLLASYNCSGIXPROC>(GETFUNCADDR("glPollAsyncSGIX"));

		/*
			GL_SGIX_datapipe
		*/
		this->glAddressSpace = reinterpret_cast<PFNGLADDRESSSPACEPROC>(GETFUNCADDR("glAddressSpace"));
		this->glDataPipe = reinterpret_cast<PFNGLDATAPIPEPROC>(GETFUNCADDR("glDataPipe"));

		/*
			GL_SGIX_flush_raster
		*/
		this->glFlushRasterSGIX = reinterpret_cast<PFNGLFLUSHRASTERSGIXPROC>(GETFUNCADDR("glFlushRasterSGIX"));

		/*
			GL_SGIX_fog_layers
		*/
		this->glFogLayersSGIX = reinterpret_cast<PFNGLFOGLAYERSSGIXPROC>(GETFUNCADDR("glFogLayersSGIX"));
		this->glGetFogLayersSGIX = reinterpret_cast<PFNGLGETFOGLAYERSSGIXPROC>(GETFUNCADDR("glGetFogLayersSGIX"));

		/*
			GL_SGIX_fog_texture
		*/
		this->glTextureFogSGIX = reinterpret_cast<PFNGLTEXTUREFOGSGIXPROC>(GETFUNCADDR("glTextureFogSGIX"));

		/*
			GL_SGIX_fragment_specular_lighting
		*/
		this->glFragmentColorMaterialSGIX = reinterpret_cast<PFNGLFRAGMENTCOLORMATERIALSGIXPROC>(GETFUNCADDR("glFragmentColorMaterialSGIX"));
		this->glFragmentLightModelfSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFSGIXPROC>(GETFUNCADDR("glFragmentLightModelfSGIX"));
		this->glFragmentLightModelfvSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFVSGIXPROC>(GETFUNCADDR("glFragmentLightModelfvSGIX"));
		this->glFragmentLightModeliSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELISGIXPROC>(GETFUNCADDR("glFragmentLightModeliSGIX"));
		this->glFragmentLightModelivSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTMODELIVSGIXPROC>(GETFUNCADDR("glFragmentLightModelivSGIX"));
		this->glFragmentLightfSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTFSGIXPROC>(GETFUNCADDR("glFragmentLightfSGIX"));
		this->glFragmentLightfvSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTFVSGIXPROC>(GETFUNCADDR("glFragmentLightfvSGIX"));
		this->glFragmentLightiSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTISGIXPROC>(GETFUNCADDR("glFragmentLightiSGIX"));
		this->glFragmentLightivSGIX = reinterpret_cast<PFNGLFRAGMENTLIGHTIVSGIXPROC>(GETFUNCADDR("glFragmentLightivSGIX"));
		this->glFragmentMaterialfSGIX = reinterpret_cast<PFNGLFRAGMENTMATERIALFSGIXPROC>(GETFUNCADDR("glFragmentMaterialfSGIX"));
		this->glFragmentMaterialfvSGIX = reinterpret_cast<PFNGLFRAGMENTMATERIALFVSGIXPROC>(GETFUNCADDR("glFragmentMaterialfvSGIX"));
		this->glFragmentMaterialiSGIX = reinterpret_cast<PFNGLFRAGMENTMATERIALISGIXPROC>(GETFUNCADDR("glFragmentMaterialiSGIX"));
		this->glFragmentMaterialivSGIX = reinterpret_cast<PFNGLFRAGMENTMATERIALIVSGIXPROC>(GETFUNCADDR("glFragmentMaterialivSGIX"));
		this->glGetFragmentLightfvSGIX = reinterpret_cast<PFNGLGETFRAGMENTLIGHTFVSGIXPROC>(GETFUNCADDR("glGetFragmentLightfvSGIX"));
		this->glGetFragmentLightivSGIX = reinterpret_cast<PFNGLGETFRAGMENTLIGHTIVSGIXPROC>(GETFUNCADDR("glGetFragmentLightivSGIX"));
		this->glGetFragmentMaterialfvSGIX = reinterpret_cast<PFNGLGETFRAGMENTMATERIALFVSGIXPROC>(GETFUNCADDR("glGetFragmentMaterialfvSGIX"));
		this->glGetFragmentMaterialivSGIX = reinterpret_cast<PFNGLGETFRAGMENTMATERIALIVSGIXPROC>(GETFUNCADDR("glGetFragmentMaterialivSGIX"));

		/*
			GL_SGIX_framezoom
		*/
		this->glFrameZoomSGIX = reinterpret_cast<PFNGLFRAMEZOOMSGIXPROC>(GETFUNCADDR("glFrameZoomSGIX"));

		/*
			GL_SGIX_igloo_interface
		*/
		this->glIglooInterfaceSGIX = reinterpret_cast<PFNGLIGLOOINTERFACESGIXPROC>(GETFUNCADDR("glIglooInterfaceSGIX"));

		/*
			GL_SGIX_mpeg1
		*/
		this->glAllocMPEGPredictorsSGIX = reinterpret_cast<PFNGLALLOCMPEGPREDICTORSSGIXPROC>(GETFUNCADDR("glAllocMPEGPredictorsSGIX"));
		this->glDeleteMPEGPredictorsSGIX = reinterpret_cast<PFNGLDELETEMPEGPREDICTORSSGIXPROC>(GETFUNCADDR("glDeleteMPEGPredictorsSGIX"));
		this->glGenMPEGPredictorsSGIX = reinterpret_cast<PFNGLGENMPEGPREDICTORSSGIXPROC>(GETFUNCADDR("glGenMPEGPredictorsSGIX"));
		this->glGetMPEGParameterfvSGIX = reinterpret_cast<PFNGLGETMPEGPARAMETERFVSGIXPROC>(GETFUNCADDR("glGetMPEGParameterfvSGIX"));
		this->glGetMPEGParameterivSGIX = reinterpret_cast<PFNGLGETMPEGPARAMETERIVSGIXPROC>(GETFUNCADDR("glGetMPEGParameterivSGIX"));
		this->glGetMPEGPredictorSGIX = reinterpret_cast<PFNGLGETMPEGPREDICTORSGIXPROC>(GETFUNCADDR("glGetMPEGPredictorSGIX"));
		this->glGetMPEGQuantTableubv = reinterpret_cast<PFNGLGETMPEGQUANTTABLEUBVPROC>(GETFUNCADDR("glGetMPEGQuantTableubv"));
		this->glIsMPEGPredictorSGIX = reinterpret_cast<PFNGLISMPEGPREDICTORSGIXPROC>(GETFUNCADDR("glIsMPEGPredictorSGIX"));
		this->glMPEGPredictorSGIX = reinterpret_cast<PFNGLMPEGPREDICTORSGIXPROC>(GETFUNCADDR("glMPEGPredictorSGIX"));
		this->glMPEGQuantTableubv = reinterpret_cast<PFNGLMPEGQUANTTABLEUBVPROC>(GETFUNCADDR("glMPEGQuantTableubv"));
		this->glSwapMPEGPredictorsSGIX = reinterpret_cast<PFNGLSWAPMPEGPREDICTORSSGIXPROC>(GETFUNCADDR("glSwapMPEGPredictorsSGIX"));

		/*
			GL_SGIX_nonlinear_lighting_pervertex
		*/
		this->glGetNonlinLightfvSGIX = reinterpret_cast<PFNGLGETNONLINLIGHTFVSGIXPROC>(GETFUNCADDR("glGetNonlinLightfvSGIX"));
		this->glGetNonlinMaterialfvSGIX = reinterpret_cast<PFNGLGETNONLINMATERIALFVSGIXPROC>(GETFUNCADDR("glGetNonlinMaterialfvSGIX"));
		this->glNonlinLightfvSGIX = reinterpret_cast<PFNGLNONLINLIGHTFVSGIXPROC>(GETFUNCADDR("glNonlinLightfvSGIX"));
		this->glNonlinMaterialfvSGIX = reinterpret_cast<PFNGLNONLINMATERIALFVSGIXPROC>(GETFUNCADDR("glNonlinMaterialfvSGIX"));

		/*
			GL_SGIX_pixel_texture
		*/
		this->glPixelTexGenSGIX = reinterpret_cast<PFNGLPIXELTEXGENSGIXPROC>(GETFUNCADDR("glPixelTexGenSGIX"));

		/*
			GL_SGIX_polynomial_ffd
		*/
		this->glDeformSGIX = reinterpret_cast<PFNGLDEFORMSGIXPROC>(GETFUNCADDR("glDeformSGIX"));
		this->glLoadIdentityDeformationMapSGIX = reinterpret_cast<PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC>(GETFUNCADDR("glLoadIdentityDeformationMapSGIX"));

		/*
			GL_SGIX_quad_mesh
		*/
		this->glMeshBreadthSGIX = reinterpret_cast<PFNGLMESHBREADTHSGIXPROC>(GETFUNCADDR("glMeshBreadthSGIX"));
		this->glMeshStrideSGIX = reinterpret_cast<PFNGLMESHSTRIDESGIXPROC>(GETFUNCADDR("glMeshStrideSGIX"));

		/*
			GL_SGIX_reference_plane
		*/
		this->glReferencePlaneSGIX = reinterpret_cast<PFNGLREFERENCEPLANESGIXPROC>(GETFUNCADDR("glReferencePlaneSGIX"));

		/*
			GL_SGIX_sprite
		*/
		this->glSpriteParameterfSGIX = reinterpret_cast<PFNGLSPRITEPARAMETERFSGIXPROC>(GETFUNCADDR("glSpriteParameterfSGIX"));
		this->glSpriteParameterfvSGIX = reinterpret_cast<PFNGLSPRITEPARAMETERFVSGIXPROC>(GETFUNCADDR("glSpriteParameterfvSGIX"));
		this->glSpriteParameteriSGIX = reinterpret_cast<PFNGLSPRITEPARAMETERISGIXPROC>(GETFUNCADDR("glSpriteParameteriSGIX"));
		this->glSpriteParameterivSGIX = reinterpret_cast<PFNGLSPRITEPARAMETERIVSGIXPROC>(GETFUNCADDR("glSpriteParameterivSGIX"));

		/*
			GL_SGIX_tag_sample_buffer
		*/
		this->glTagSampleBufferSGIX = reinterpret_cast<PFNGLTAGSAMPLEBUFFERSGIXPROC>(GETFUNCADDR("glTagSampleBufferSGIX"));

		/*
			GL_SGIX_vector_ops
		*/
		this->glGetVectorOperationSGIX = reinterpret_cast<PFNGLGETVECTOROPERATIONSGIXPROC>(GETFUNCADDR("glGetVectorOperationSGIX"));
		this->glVectorOperationSGIX = reinterpret_cast<PFNGLVECTOROPERATIONSGIXPROC>(GETFUNCADDR("glVectorOperationSGIX"));

		/*
			GL_SGIX_vertex_array_object
		*/
		this->glAreVertexArraysResidentSGIX = reinterpret_cast<PFNGLAREVERTEXARRAYSRESIDENTSGIXPROC>(GETFUNCADDR("glAreVertexArraysResidentSGIX"));
		this->glBindVertexArraySGIX = reinterpret_cast<PFNGLBINDVERTEXARRAYSGIXPROC>(GETFUNCADDR("glBindVertexArraySGIX"));
		this->glDeleteVertexArraysSGIX = reinterpret_cast<PFNGLDELETEVERTEXARRAYSSGIXPROC>(GETFUNCADDR("glDeleteVertexArraysSGIX"));
		this->glGenVertexArraysSGIX = reinterpret_cast<PFNGLGENVERTEXARRAYSSGIXPROC>(GETFUNCADDR("glGenVertexArraysSGIX"));
		this->glIsVertexArraySGIX = reinterpret_cast<PFNGLISVERTEXARRAYSGIXPROC>(GETFUNCADDR("glIsVertexArraySGIX"));
		this->glPrioritizeVertexArraysSGIX = reinterpret_cast<PFNGLPRIORITIZEVERTEXARRAYSSGIXPROC>(GETFUNCADDR("glPrioritizeVertexArraysSGIX"));

		/*
			GL_SGI_color_table
		*/
		this->glColorTableParameterfvSGI = reinterpret_cast<PFNGLCOLORTABLEPARAMETERFVSGIPROC>(GETFUNCADDR("glColorTableParameterfvSGI"));
		this->glColorTableParameterivSGI = reinterpret_cast<PFNGLCOLORTABLEPARAMETERIVSGIPROC>(GETFUNCADDR("glColorTableParameterivSGI"));
		this->glColorTableSGI = reinterpret_cast<PFNGLCOLORTABLESGIPROC>(GETFUNCADDR("glColorTableSGI"));
		this->glCopyColorTableSGI = reinterpret_cast<PFNGLCOPYCOLORTABLESGIPROC>(GETFUNCADDR("glCopyColorTableSGI"));
		this->glGetColorTableParameterfvSGI = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVSGIPROC>(GETFUNCADDR("glGetColorTableParameterfvSGI"));
		this->glGetColorTableParameterivSGI = reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVSGIPROC>(GETFUNCADDR("glGetColorTableParameterivSGI"));
		this->glGetColorTableSGI = reinterpret_cast<PFNGLGETCOLORTABLESGIPROC>(GETFUNCADDR("glGetColorTableSGI"));

		/*
			GL_SGI_fft
		*/
		this->glGetPixelTransformParameterfvSGI = reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERFVSGIPROC>(GETFUNCADDR("glGetPixelTransformParameterfvSGI"));
		this->glGetPixelTransformParameterivSGI = reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERIVSGIPROC>(GETFUNCADDR("glGetPixelTransformParameterivSGI"));
		this->glPixelTransformParameterfSGI = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFSGIPROC>(GETFUNCADDR("glPixelTransformParameterfSGI"));
		this->glPixelTransformParameterfvSGI = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFVSGIPROC>(GETFUNCADDR("glPixelTransformParameterfvSGI"));
		this->glPixelTransformParameteriSGI = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERISGIPROC>(GETFUNCADDR("glPixelTransformParameteriSGI"));
		this->glPixelTransformParameterivSGI = reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERIVSGIPROC>(GETFUNCADDR("glPixelTransformParameterivSGI"));
		this->glPixelTransformSGI = reinterpret_cast<PFNGLPIXELTRANSFORMSGIPROC>(GETFUNCADDR("glPixelTransformSGI"));

		/*
			GL_SUNX_constant_data
		*/
		this->glFinishTextureSUNX = reinterpret_cast<PFNGLFINISHTEXTURESUNXPROC>(GETFUNCADDR("glFinishTextureSUNX"));

		/*
			GL_SUN_global_alpha
		*/
		this->glGlobalAlphaFactorbSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORBSUNPROC>(GETFUNCADDR("glGlobalAlphaFactorbSUN"));
		this->glGlobalAlphaFactordSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORDSUNPROC>(GETFUNCADDR("glGlobalAlphaFactordSUN"));
		this->glGlobalAlphaFactorfSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORFSUNPROC>(GETFUNCADDR("glGlobalAlphaFactorfSUN"));
		this->glGlobalAlphaFactoriSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORISUNPROC>(GETFUNCADDR("glGlobalAlphaFactoriSUN"));
		this->glGlobalAlphaFactorsSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORSSUNPROC>(GETFUNCADDR("glGlobalAlphaFactorsSUN"));
		this->glGlobalAlphaFactorubSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORUBSUNPROC>(GETFUNCADDR("glGlobalAlphaFactorubSUN"));
		this->glGlobalAlphaFactoruiSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORUISUNPROC>(GETFUNCADDR("glGlobalAlphaFactoruiSUN"));
		this->glGlobalAlphaFactorusSUN = reinterpret_cast<PFNGLGLOBALALPHAFACTORUSSUNPROC>(GETFUNCADDR("glGlobalAlphaFactorusSUN"));

		/*
			GL_SUN_read_video_pixels
		*/
		this->glReadVideoPixelsSUN = reinterpret_cast<PFNGLREADVIDEOPIXELSSUNPROC>(GETFUNCADDR("glReadVideoPixelsSUN"));

		/*
			GL_SUN_triangle_list
		*/
		this->glReplacementCodePointerSUN = reinterpret_cast<PFNGLREPLACEMENTCODEPOINTERSUNPROC>(GETFUNCADDR("glReplacementCodePointerSUN"));
		this->glReplacementCodeubSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUBSUNPROC>(GETFUNCADDR("glReplacementCodeubSUN"));
		this->glReplacementCodeubvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUBVSUNPROC>(GETFUNCADDR("glReplacementCodeubvSUN"));
		this->glReplacementCodeuiSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUISUNPROC>(GETFUNCADDR("glReplacementCodeuiSUN"));
		this->glReplacementCodeuivSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUIVSUNPROC>(GETFUNCADDR("glReplacementCodeuivSUN"));
		this->glReplacementCodeusSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUSSUNPROC>(GETFUNCADDR("glReplacementCodeusSUN"));
		this->glReplacementCodeusvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUSVSUNPROC>(GETFUNCADDR("glReplacementCodeusvSUN"));

		/*
			GL_SUN_vertex
		*/
		this->glColor3fVertex3fSUN = reinterpret_cast<PFNGLCOLOR3FVERTEX3FSUNPROC>(GETFUNCADDR("glColor3fVertex3fSUN"));
		this->glColor3fVertex3fvSUN = reinterpret_cast<PFNGLCOLOR3FVERTEX3FVSUNPROC>(GETFUNCADDR("glColor3fVertex3fvSUN"));
		this->glColor4fNormal3fVertex3fSUN = reinterpret_cast<PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glColor4fNormal3fVertex3fSUN"));
		this->glColor4fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glColor4fNormal3fVertex3fvSUN"));
		this->glColor4ubVertex2fSUN = reinterpret_cast<PFNGLCOLOR4UBVERTEX2FSUNPROC>(GETFUNCADDR("glColor4ubVertex2fSUN"));
		this->glColor4ubVertex2fvSUN = reinterpret_cast<PFNGLCOLOR4UBVERTEX2FVSUNPROC>(GETFUNCADDR("glColor4ubVertex2fvSUN"));
		this->glColor4ubVertex3fSUN = reinterpret_cast<PFNGLCOLOR4UBVERTEX3FSUNPROC>(GETFUNCADDR("glColor4ubVertex3fSUN"));
		this->glColor4ubVertex3fvSUN = reinterpret_cast<PFNGLCOLOR4UBVERTEX3FVSUNPROC>(GETFUNCADDR("glColor4ubVertex3fvSUN"));
		this->glNormal3fVertex3fSUN = reinterpret_cast<PFNGLNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glNormal3fVertex3fSUN"));
		this->glNormal3fVertex3fvSUN = reinterpret_cast<PFNGLNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glNormal3fVertex3fvSUN"));
		this->glReplacementCodeuiColor3fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor3fVertex3fSUN"));
		this->glReplacementCodeuiColor3fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor3fVertex3fvSUN"));
		this->glReplacementCodeuiColor4fNormal3fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor4fNormal3fVertex3fSUN"));
		this->glReplacementCodeuiColor4fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor4fNormal3fVertex3fvSUN"));
		this->glReplacementCodeuiColor4ubVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor4ubVertex3fSUN"));
		this->glReplacementCodeuiColor4ubVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiColor4ubVertex3fvSUN"));
		this->glReplacementCodeuiNormal3fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiNormal3fVertex3fSUN"));
		this->glReplacementCodeuiNormal3fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiNormal3fVertex3fvSUN"));
		this->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN"));
		this->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN"));
		this->glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN"));
		this->glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN"));
		this->glReplacementCodeuiTexCoord2fVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fVertex3fSUN"));
		this->glReplacementCodeuiTexCoord2fVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiTexCoord2fVertex3fvSUN"));
		this->glReplacementCodeuiVertex3fSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC>(GETFUNCADDR("glReplacementCodeuiVertex3fSUN"));
		this->glReplacementCodeuiVertex3fvSUN = reinterpret_cast<PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC>(GETFUNCADDR("glReplacementCodeuiVertex3fvSUN"));
		this->glTexCoord2fColor3fVertex3fSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC>(GETFUNCADDR("glTexCoord2fColor3fVertex3fSUN"));
		this->glTexCoord2fColor3fVertex3fvSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC>(GETFUNCADDR("glTexCoord2fColor3fVertex3fvSUN"));
		this->glTexCoord2fColor4fNormal3fVertex3fSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glTexCoord2fColor4fNormal3fVertex3fSUN"));
		this->glTexCoord2fColor4fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glTexCoord2fColor4fNormal3fVertex3fvSUN"));
		this->glTexCoord2fColor4ubVertex3fSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC>(GETFUNCADDR("glTexCoord2fColor4ubVertex3fSUN"));
		this->glTexCoord2fColor4ubVertex3fvSUN = reinterpret_cast<PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC>(GETFUNCADDR("glTexCoord2fColor4ubVertex3fvSUN"));
		this->glTexCoord2fNormal3fVertex3fSUN = reinterpret_cast<PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(GETFUNCADDR("glTexCoord2fNormal3fVertex3fSUN"));
		this->glTexCoord2fNormal3fVertex3fvSUN = reinterpret_cast<PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(GETFUNCADDR("glTexCoord2fNormal3fVertex3fvSUN"));
		this->glTexCoord2fVertex3fSUN = reinterpret_cast<PFNGLTEXCOORD2FVERTEX3FSUNPROC>(GETFUNCADDR("glTexCoord2fVertex3fSUN"));
		this->glTexCoord2fVertex3fvSUN = reinterpret_cast<PFNGLTEXCOORD2FVERTEX3FVSUNPROC>(GETFUNCADDR("glTexCoord2fVertex3fvSUN"));
		this->glTexCoord4fColor4fNormal3fVertex4fSUN = reinterpret_cast<PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC>(GETFUNCADDR("glTexCoord4fColor4fNormal3fVertex4fSUN"));
		this->glTexCoord4fColor4fNormal3fVertex4fvSUN = reinterpret_cast<PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC>(GETFUNCADDR("glTexCoord4fColor4fNormal3fVertex4fvSUN"));
		this->glTexCoord4fVertex4fSUN = reinterpret_cast<PFNGLTEXCOORD4FVERTEX4FSUNPROC>(GETFUNCADDR("glTexCoord4fVertex4fSUN"));
		this->glTexCoord4fVertex4fvSUN = reinterpret_cast<PFNGLTEXCOORD4FVERTEX4FVSUNPROC>(GETFUNCADDR("glTexCoord4fVertex4fvSUN"));

		/*
			GL_WIN_swap_hint
		*/
		this->glAddSwapHintRectWIN = reinterpret_cast<PFNGLADDSWAPHINTRECTWINPROC>(GETFUNCADDR("glAddSwapHintRectWIN"));
	}
}