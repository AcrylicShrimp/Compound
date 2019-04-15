
/*
	2019.04.13
	Created by AcrylicShrimp.
*/

#include "../../Platform.h"

#if __COMPOUND_OS_WINDOWS

#ifndef _CLASS_COMPOUND_RENDER_BACKEND___OPENGLEXTENSION_H

#define _CLASS_COMPOUND_RENDER_BACKEND___OPENGLEXTENSION_H

#include <cstdint>

/*
	GL_VERSION_1_1
*/
using GLenum = unsigned int;
using GLbitfield = unsigned int;
using GLuint = unsigned int;
using GLint = int;
using GLsizei = int;
using GLboolean = unsigned char;
using GLbyte = signed char;
using GLshort = short;
using GLubyte = unsigned char;
using GLushort = unsigned short;
using GLulong = unsigned long;
using GLfloat = float;
using GLclampf = float;
using GLdouble = double;
using GLclampd = double;
using GLvoid = void;
using GLint64EXT = std::int64_t;
using GLuint64EXT = std::uint64_t;
using GLint64 = GLint64EXT;
using GLuint64 = GLuint64EXT;
using GLsync = struct __GLsync *;
using GLchar = char;

/*
	GL_VERSION_1_5
*/
using GLintptr = ptrdiff_t;
using GLsizeiptr = ptrdiff_t;

/*
	GL_ARB_ES2_compatibility
*/
using GLfixed = int;

/*
	GL_ARB_cl_event
*/
using cl_context = struct _cl_context *;
using cl_event = struct _cl_event *;

/*
	GL_ARB_shader_objects
*/
using GLcharARB = char;
using GLhandleARB = unsigned int;

/*
	GL_ARB_vertex_buffer_object
*/
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;

/*
	GL_EXT_external_buffer
*/
using GLeglClientBufferEXT = void*;

/*
	GL_NV_half_float
*/
using GLhalf = unsigned short;

/*
	GL_NV_vdpau_interop
*/
using GLvdpauSurfaceNV = GLintptr;

/*
	GL_REGAL_ES1_0_compatibility
*/
using GLclampx = int;


/*
	GL_VERSION_1_1
*/
#define GL_ZERO																0
#define GL_FALSE															0
#define GL_LOGIC_OP															0x0BF1
#define GL_NONE																0
#define GL_TEXTURE_COMPONENTS												0x1003
#define GL_NO_ERROR															0
#define GL_POINTS															0x0000
#define GL_CURRENT_BIT														0x00000001
#define GL_TRUE																1
#define GL_ONE																1
#define GL_CLIENT_PIXEL_STORE_BIT											0x00000001
#define GL_LINES															0x0001
#define GL_LINE_LOOP														0x0002
#define GL_POINT_BIT														0x00000002
#define GL_CLIENT_VERTEX_ARRAY_BIT											0x00000002
#define GL_LINE_STRIP														0x0003
#define GL_LINE_BIT															0x00000004
#define GL_TRIANGLES														0x0004
#define GL_TRIANGLE_STRIP													0x0005
#define GL_TRIANGLE_FAN														0x0006
#define GL_QUADS															0x0007
#define GL_QUAD_STRIP														0x0008
#define GL_POLYGON_BIT														0x00000008
#define GL_POLYGON															0x0009
#define GL_POLYGON_STIPPLE_BIT												0x00000010
#define GL_PIXEL_MODE_BIT													0x00000020
#define GL_LIGHTING_BIT														0x00000040
#define GL_FOG_BIT															0x00000080
#define GL_DEPTH_BUFFER_BIT													0x00000100
#define GL_ACCUM															0x0100
#define GL_LOAD																0x0101
#define GL_RETURN															0x0102
#define GL_MULT																0x0103
#define GL_ADD																0x0104
#define GL_NEVER															0x0200
#define GL_ACCUM_BUFFER_BIT													0x00000200
#define GL_LESS																0x0201
#define GL_EQUAL															0x0202
#define GL_LEQUAL															0x0203
#define GL_GREATER															0x0204
#define GL_NOTEQUAL															0x0205
#define GL_GEQUAL															0x0206
#define GL_ALWAYS															0x0207
#define GL_SRC_COLOR														0x0300
#define GL_ONE_MINUS_SRC_COLOR												0x0301
#define GL_SRC_ALPHA														0x0302
#define GL_ONE_MINUS_SRC_ALPHA												0x0303
#define GL_DST_ALPHA														0x0304
#define GL_ONE_MINUS_DST_ALPHA												0x0305
#define GL_DST_COLOR														0x0306
#define GL_ONE_MINUS_DST_COLOR												0x0307
#define GL_SRC_ALPHA_SATURATE												0x0308
#define GL_STENCIL_BUFFER_BIT												0x00000400
#define GL_FRONT_LEFT														0x0400
#define GL_FRONT_RIGHT														0x0401
#define GL_BACK_LEFT														0x0402
#define GL_BACK_RIGHT														0x0403
#define GL_FRONT															0x0404
#define GL_BACK																0x0405
#define GL_LEFT																0x0406
#define GL_RIGHT															0x0407
#define GL_FRONT_AND_BACK													0x0408
#define GL_AUX0																0x0409
#define GL_AUX1																0x040A
#define GL_AUX2																0x040B
#define GL_AUX3																0x040C
#define GL_INVALID_ENUM														0x0500
#define GL_INVALID_VALUE													0x0501
#define GL_INVALID_OPERATION												0x0502
#define GL_STACK_OVERFLOW													0x0503
#define GL_STACK_UNDERFLOW													0x0504
#define GL_OUT_OF_MEMORY													0x0505
#define GL_2D																0x0600
#define GL_3D																0x0601
#define GL_3D_COLOR															0x0602
#define GL_3D_COLOR_TEXTURE													0x0603
#define GL_4D_COLOR_TEXTURE													0x0604
#define GL_PASS_THROUGH_TOKEN												0x0700
#define GL_POINT_TOKEN														0x0701
#define GL_LINE_TOKEN														0x0702
#define GL_POLYGON_TOKEN													0x0703
#define GL_BITMAP_TOKEN														0x0704
#define GL_DRAW_PIXEL_TOKEN													0x0705
#define GL_COPY_PIXEL_TOKEN													0x0706
#define GL_LINE_RESET_TOKEN													0x0707
#define GL_EXP																0x0800
#define GL_VIEWPORT_BIT														0x00000800
#define GL_EXP2																0x0801
#define GL_CW																0x0900
#define GL_CCW																0x0901
#define GL_COEFF															0x0A00
#define GL_ORDER															0x0A01
#define GL_DOMAIN															0x0A02
#define GL_CURRENT_COLOR													0x0B00
#define GL_CURRENT_INDEX													0x0B01
#define GL_CURRENT_NORMAL													0x0B02
#define GL_CURRENT_TEXTURE_COORDS											0x0B03
#define GL_CURRENT_RASTER_COLOR												0x0B04
#define GL_CURRENT_RASTER_INDEX												0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS									0x0B06
#define GL_CURRENT_RASTER_POSITION											0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID									0x0B08
#define GL_CURRENT_RASTER_DISTANCE											0x0B09
#define GL_POINT_SMOOTH														0x0B10
#define GL_POINT_SIZE														0x0B11
#define GL_POINT_SIZE_RANGE													0x0B12
#define GL_POINT_SIZE_GRANULARITY											0x0B13
#define GL_LINE_SMOOTH														0x0B20
#define GL_LINE_WIDTH														0x0B21
#define GL_LINE_WIDTH_RANGE													0x0B22
#define GL_LINE_WIDTH_GRANULARITY											0x0B23
#define GL_LINE_STIPPLE														0x0B24
#define GL_LINE_STIPPLE_PATTERN												0x0B25
#define GL_LINE_STIPPLE_REPEAT												0x0B26
#define GL_LIST_MODE														0x0B30
#define GL_MAX_LIST_NESTING													0x0B31
#define GL_LIST_BASE														0x0B32
#define GL_LIST_INDEX														0x0B33
#define GL_POLYGON_MODE														0x0B40
#define GL_POLYGON_SMOOTH													0x0B41
#define GL_POLYGON_STIPPLE													0x0B42
#define GL_EDGE_FLAG														0x0B43
#define GL_CULL_FACE														0x0B44
#define GL_CULL_FACE_MODE													0x0B45
#define GL_FRONT_FACE														0x0B46
#define GL_LIGHTING															0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER											0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE												0x0B52
#define GL_LIGHT_MODEL_AMBIENT												0x0B53
#define GL_SHADE_MODEL														0x0B54
#define GL_COLOR_MATERIAL_FACE												0x0B55
#define GL_COLOR_MATERIAL_PARAMETER											0x0B56
#define GL_COLOR_MATERIAL													0x0B57
#define GL_FOG																0x0B60
#define GL_FOG_INDEX														0x0B61
#define GL_FOG_DENSITY														0x0B62
#define GL_FOG_START														0x0B63
#define GL_FOG_END															0x0B64
#define GL_FOG_MODE															0x0B65
#define GL_FOG_COLOR														0x0B66
#define GL_DEPTH_RANGE														0x0B70
#define GL_DEPTH_TEST														0x0B71
#define GL_DEPTH_WRITEMASK													0x0B72
#define GL_DEPTH_CLEAR_VALUE												0x0B73
#define GL_DEPTH_FUNC														0x0B74
#define GL_ACCUM_CLEAR_VALUE												0x0B80
#define GL_STENCIL_TEST														0x0B90
#define GL_STENCIL_CLEAR_VALUE												0x0B91
#define GL_STENCIL_FUNC														0x0B92
#define GL_STENCIL_VALUE_MASK												0x0B93
#define GL_STENCIL_FAIL														0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL											0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS											0x0B96
#define GL_STENCIL_REF														0x0B97
#define GL_STENCIL_WRITEMASK												0x0B98
#define GL_MATRIX_MODE														0x0BA0
#define GL_NORMALIZE														0x0BA1
#define GL_VIEWPORT															0x0BA2
#define GL_MODELVIEW_STACK_DEPTH											0x0BA3
#define GL_PROJECTION_STACK_DEPTH											0x0BA4
#define GL_TEXTURE_STACK_DEPTH												0x0BA5
#define GL_MODELVIEW_MATRIX													0x0BA6
#define GL_PROJECTION_MATRIX												0x0BA7
#define GL_TEXTURE_MATRIX													0x0BA8
#define GL_ATTRIB_STACK_DEPTH												0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH										0x0BB1
#define GL_ALPHA_TEST														0x0BC0
#define GL_ALPHA_TEST_FUNC													0x0BC1
#define GL_ALPHA_TEST_REF													0x0BC2
#define GL_DITHER															0x0BD0
#define GL_BLEND_DST														0x0BE0
#define GL_BLEND_SRC														0x0BE1
#define GL_BLEND															0x0BE2
#define GL_LOGIC_OP_MODE													0x0BF0
#define GL_INDEX_LOGIC_OP													0x0BF1
#define GL_COLOR_LOGIC_OP													0x0BF2
#define GL_AUX_BUFFERS														0x0C00
#define GL_DRAW_BUFFER														0x0C01
#define GL_READ_BUFFER														0x0C02
#define GL_SCISSOR_BOX														0x0C10
#define GL_SCISSOR_TEST														0x0C11
#define GL_INDEX_CLEAR_VALUE												0x0C20
#define GL_INDEX_WRITEMASK													0x0C21
#define GL_COLOR_CLEAR_VALUE												0x0C22
#define GL_COLOR_WRITEMASK													0x0C23
#define GL_INDEX_MODE														0x0C30
#define GL_RGBA_MODE														0x0C31
#define GL_DOUBLEBUFFER														0x0C32
#define GL_STEREO															0x0C33
#define GL_RENDER_MODE														0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT										0x0C50
#define GL_POINT_SMOOTH_HINT												0x0C51
#define GL_LINE_SMOOTH_HINT													0x0C52
#define GL_POLYGON_SMOOTH_HINT												0x0C53
#define GL_FOG_HINT															0x0C54
#define GL_TEXTURE_GEN_S													0x0C60
#define GL_TEXTURE_GEN_T													0x0C61
#define GL_TEXTURE_GEN_R													0x0C62
#define GL_TEXTURE_GEN_Q													0x0C63
#define GL_PIXEL_MAP_I_TO_I													0x0C70
#define GL_PIXEL_MAP_S_TO_S													0x0C71
#define GL_PIXEL_MAP_I_TO_R													0x0C72
#define GL_PIXEL_MAP_I_TO_G													0x0C73
#define GL_PIXEL_MAP_I_TO_B													0x0C74
#define GL_PIXEL_MAP_I_TO_A													0x0C75
#define GL_PIXEL_MAP_R_TO_R													0x0C76
#define GL_PIXEL_MAP_G_TO_G													0x0C77
#define GL_PIXEL_MAP_B_TO_B													0x0C78
#define GL_PIXEL_MAP_A_TO_A													0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE											0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE											0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE											0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE											0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE											0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE											0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE											0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE											0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE											0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE											0x0CB9
#define GL_UNPACK_SWAP_BYTES												0x0CF0
#define GL_UNPACK_LSB_FIRST													0x0CF1
#define GL_UNPACK_ROW_LENGTH												0x0CF2
#define GL_UNPACK_SKIP_ROWS													0x0CF3
#define GL_UNPACK_SKIP_PIXELS												0x0CF4
#define GL_UNPACK_ALIGNMENT													0x0CF5
#define GL_PACK_SWAP_BYTES													0x0D00
#define GL_PACK_LSB_FIRST													0x0D01
#define GL_PACK_ROW_LENGTH													0x0D02
#define GL_PACK_SKIP_ROWS													0x0D03
#define GL_PACK_SKIP_PIXELS													0x0D04
#define GL_PACK_ALIGNMENT													0x0D05
#define GL_MAP_COLOR														0x0D10
#define GL_MAP_STENCIL														0x0D11
#define GL_INDEX_SHIFT														0x0D12
#define GL_INDEX_OFFSET														0x0D13
#define GL_RED_SCALE														0x0D14
#define GL_RED_BIAS															0x0D15
#define GL_ZOOM_X															0x0D16
#define GL_ZOOM_Y															0x0D17
#define GL_GREEN_SCALE														0x0D18
#define GL_GREEN_BIAS														0x0D19
#define GL_BLUE_SCALE														0x0D1A
#define GL_BLUE_BIAS														0x0D1B
#define GL_ALPHA_SCALE														0x0D1C
#define GL_ALPHA_BIAS														0x0D1D
#define GL_DEPTH_SCALE														0x0D1E
#define GL_DEPTH_BIAS														0x0D1F
#define GL_MAX_EVAL_ORDER													0x0D30
#define GL_MAX_LIGHTS														0x0D31
#define GL_MAX_CLIP_PLANES													0x0D32
#define GL_MAX_TEXTURE_SIZE													0x0D33
#define GL_MAX_PIXEL_MAP_TABLE												0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH											0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH										0x0D36
#define GL_MAX_NAME_STACK_DEPTH												0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH										0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH											0x0D39
#define GL_MAX_VIEWPORT_DIMS												0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH									0x0D3B
#define GL_SUBPIXEL_BITS													0x0D50
#define GL_INDEX_BITS														0x0D51
#define GL_RED_BITS															0x0D52
#define GL_GREEN_BITS														0x0D53
#define GL_BLUE_BITS														0x0D54
#define GL_ALPHA_BITS														0x0D55
#define GL_DEPTH_BITS														0x0D56
#define GL_STENCIL_BITS														0x0D57
#define GL_ACCUM_RED_BITS													0x0D58
#define GL_ACCUM_GREEN_BITS													0x0D59
#define GL_ACCUM_BLUE_BITS													0x0D5A
#define GL_ACCUM_ALPHA_BITS													0x0D5B
#define GL_NAME_STACK_DEPTH													0x0D70
#define GL_AUTO_NORMAL														0x0D80
#define GL_MAP1_COLOR_4														0x0D90
#define GL_MAP1_INDEX														0x0D91
#define GL_MAP1_NORMAL														0x0D92
#define GL_MAP1_TEXTURE_COORD_1												0x0D93
#define GL_MAP1_TEXTURE_COORD_2												0x0D94
#define GL_MAP1_TEXTURE_COORD_3												0x0D95
#define GL_MAP1_TEXTURE_COORD_4												0x0D96
#define GL_MAP1_VERTEX_3													0x0D97
#define GL_MAP1_VERTEX_4													0x0D98
#define GL_MAP2_COLOR_4														0x0DB0
#define GL_MAP2_INDEX														0x0DB1
#define GL_MAP2_NORMAL														0x0DB2
#define GL_MAP2_TEXTURE_COORD_1												0x0DB3
#define GL_MAP2_TEXTURE_COORD_2												0x0DB4
#define GL_MAP2_TEXTURE_COORD_3												0x0DB5
#define GL_MAP2_TEXTURE_COORD_4												0x0DB6
#define GL_MAP2_VERTEX_3													0x0DB7
#define GL_MAP2_VERTEX_4													0x0DB8
#define GL_MAP1_GRID_DOMAIN													0x0DD0
#define GL_MAP1_GRID_SEGMENTS												0x0DD1
#define GL_MAP2_GRID_DOMAIN													0x0DD2
#define GL_MAP2_GRID_SEGMENTS												0x0DD3
#define GL_TEXTURE_1D														0x0DE0
#define GL_TEXTURE_2D														0x0DE1
#define GL_FEEDBACK_BUFFER_POINTER											0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE												0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE												0x0DF2
#define GL_SELECTION_BUFFER_POINTER											0x0DF3
#define GL_SELECTION_BUFFER_SIZE											0x0DF4
#define GL_TEXTURE_WIDTH													0x1000
#define GL_TRANSFORM_BIT													0x00001000
#define GL_TEXTURE_HEIGHT													0x1001
#define GL_TEXTURE_INTERNAL_FORMAT											0x1003
#define GL_TEXTURE_BORDER_COLOR												0x1004
#define GL_TEXTURE_BORDER													0x1005
#define GL_DONT_CARE														0x1100
#define GL_FASTEST															0x1101
#define GL_NICEST															0x1102
#define GL_AMBIENT															0x1200
#define GL_DIFFUSE															0x1201
#define GL_SPECULAR															0x1202
#define GL_POSITION															0x1203
#define GL_SPOT_DIRECTION													0x1204
#define GL_SPOT_EXPONENT													0x1205
#define GL_SPOT_CUTOFF														0x1206
#define GL_CONSTANT_ATTENUATION												0x1207
#define GL_LINEAR_ATTENUATION												0x1208
#define GL_QUADRATIC_ATTENUATION											0x1209
#define GL_COMPILE															0x1300
#define GL_COMPILE_AND_EXECUTE												0x1301
#define GL_BYTE																0x1400
#define GL_UNSIGNED_BYTE													0x1401
#define GL_SHORT															0x1402
#define GL_UNSIGNED_SHORT													0x1403
#define GL_INT																0x1404
#define GL_UNSIGNED_INT														0x1405
#define GL_FLOAT															0x1406
#define GL_2_BYTES															0x1407
#define GL_3_BYTES															0x1408
#define GL_4_BYTES															0x1409
#define GL_DOUBLE															0x140A
#define GL_CLEAR															0x1500
#define GL_AND																0x1501
#define GL_AND_REVERSE														0x1502
#define GL_COPY																0x1503
#define GL_AND_INVERTED														0x1504
#define GL_NOOP																0x1505
#define GL_XOR																0x1506
#define GL_OR																0x1507
#define GL_NOR																0x1508
#define GL_EQUIV															0x1509
#define GL_INVERT															0x150A
#define GL_OR_REVERSE														0x150B
#define GL_COPY_INVERTED													0x150C
#define GL_OR_INVERTED														0x150D
#define GL_NAND																0x150E
#define GL_SET																0x150F
#define GL_EMISSION															0x1600
#define GL_SHININESS														0x1601
#define GL_AMBIENT_AND_DIFFUSE												0x1602
#define GL_COLOR_INDEXES													0x1603
#define GL_MODELVIEW														0x1700
#define GL_PROJECTION														0x1701
#define GL_TEXTURE															0x1702
#define GL_COLOR															0x1800
#define GL_DEPTH															0x1801
#define GL_STENCIL															0x1802
#define GL_COLOR_INDEX														0x1900
#define GL_STENCIL_INDEX													0x1901
#define GL_DEPTH_COMPONENT													0x1902
#define GL_RED																0x1903
#define GL_GREEN															0x1904
#define GL_BLUE																0x1905
#define GL_ALPHA															0x1906
#define GL_RGB																0x1907
#define GL_RGBA																0x1908
#define GL_LUMINANCE														0x1909
#define GL_LUMINANCE_ALPHA													0x190A
#define GL_BITMAP															0x1A00
#define GL_POINT															0x1B00
#define GL_LINE																0x1B01
#define GL_FILL																0x1B02
#define GL_RENDER															0x1C00
#define GL_FEEDBACK															0x1C01
#define GL_SELECT															0x1C02
#define GL_FLAT																0x1D00
#define GL_SMOOTH															0x1D01
#define GL_KEEP																0x1E00
#define GL_REPLACE															0x1E01
#define GL_INCR																0x1E02
#define GL_DECR																0x1E03
#define GL_VENDOR															0x1F00
#define GL_RENDERER															0x1F01
#define GL_VERSION															0x1F02
#define GL_EXTENSIONS														0x1F03
#define GL_S																0x2000
#define GL_ENABLE_BIT														0x00002000
#define GL_T																0x2001
#define GL_R																0x2002
#define GL_Q																0x2003
#define GL_MODULATE															0x2100
#define GL_DECAL															0x2101
#define GL_TEXTURE_ENV_MODE													0x2200
#define GL_TEXTURE_ENV_COLOR												0x2201
#define GL_TEXTURE_ENV														0x2300
#define GL_EYE_LINEAR														0x2400
#define GL_OBJECT_LINEAR													0x2401
#define GL_SPHERE_MAP														0x2402
#define GL_TEXTURE_GEN_MODE													0x2500
#define GL_OBJECT_PLANE														0x2501
#define GL_EYE_PLANE														0x2502
#define GL_NEAREST															0x2600
#define GL_LINEAR															0x2601
#define GL_NEAREST_MIPMAP_NEAREST											0x2700
#define GL_LINEAR_MIPMAP_NEAREST											0x2701
#define GL_NEAREST_MIPMAP_LINEAR											0x2702
#define GL_LINEAR_MIPMAP_LINEAR												0x2703
#define GL_TEXTURE_MAG_FILTER												0x2800
#define GL_TEXTURE_MIN_FILTER												0x2801
#define GL_TEXTURE_WRAP_S													0x2802
#define GL_TEXTURE_WRAP_T													0x2803
#define GL_CLAMP															0x2900
#define GL_REPEAT															0x2901
#define GL_POLYGON_OFFSET_UNITS												0x2A00
#define GL_POLYGON_OFFSET_POINT												0x2A01
#define GL_POLYGON_OFFSET_LINE												0x2A02
#define GL_R3_G3_B2															0x2A10
#define GL_V2F																0x2A20
#define GL_V3F																0x2A21
#define GL_C4UB_V2F															0x2A22
#define GL_C4UB_V3F															0x2A23
#define GL_C3F_V3F															0x2A24
#define GL_N3F_V3F															0x2A25
#define GL_C4F_N3F_V3F														0x2A26
#define GL_T2F_V3F															0x2A27
#define GL_T4F_V4F															0x2A28
#define GL_T2F_C4UB_V3F														0x2A29
#define GL_T2F_C3F_V3F														0x2A2A
#define GL_T2F_N3F_V3F														0x2A2B
#define GL_T2F_C4F_N3F_V3F													0x2A2C
#define GL_T4F_C4F_N3F_V4F													0x2A2D
#define GL_CLIP_PLANE0														0x3000
#define GL_CLIP_PLANE1														0x3001
#define GL_CLIP_PLANE2														0x3002
#define GL_CLIP_PLANE3														0x3003
#define GL_CLIP_PLANE4														0x3004
#define GL_CLIP_PLANE5														0x3005
#define GL_LIGHT0															0x4000
#define GL_COLOR_BUFFER_BIT													0x00004000
#define GL_LIGHT1															0x4001
#define GL_LIGHT2															0x4002
#define GL_LIGHT3															0x4003
#define GL_LIGHT4															0x4004
#define GL_LIGHT5															0x4005
#define GL_LIGHT6															0x4006
#define GL_LIGHT7															0x4007
#define GL_HINT_BIT															0x00008000
#define GL_POLYGON_OFFSET_FILL												0x8037
#define GL_POLYGON_OFFSET_FACTOR											0x8038
#define GL_ALPHA4															0x803B
#define GL_ALPHA8															0x803C
#define GL_ALPHA12															0x803D
#define GL_ALPHA16															0x803E
#define GL_LUMINANCE4														0x803F
#define GL_LUMINANCE8														0x8040
#define GL_LUMINANCE12														0x8041
#define GL_LUMINANCE16														0x8042
#define GL_LUMINANCE4_ALPHA4												0x8043
#define GL_LUMINANCE6_ALPHA2												0x8044
#define GL_LUMINANCE8_ALPHA8												0x8045
#define GL_LUMINANCE12_ALPHA4												0x8046
#define GL_LUMINANCE12_ALPHA12												0x8047
#define GL_LUMINANCE16_ALPHA16												0x8048
#define GL_INTENSITY														0x8049
#define GL_INTENSITY4														0x804A
#define GL_INTENSITY8														0x804B
#define GL_INTENSITY12														0x804C
#define GL_INTENSITY16														0x804D
#define GL_RGB4																0x804F
#define GL_RGB5																0x8050
#define GL_RGB8																0x8051
#define GL_RGB10															0x8052
#define GL_RGB12															0x8053
#define GL_RGB16															0x8054
#define GL_RGBA2															0x8055
#define GL_RGBA4															0x8056
#define GL_RGB5_A1															0x8057
#define GL_RGBA8															0x8058
#define GL_RGB10_A2															0x8059
#define GL_RGBA12															0x805A
#define GL_RGBA16															0x805B
#define GL_TEXTURE_RED_SIZE													0x805C
#define GL_TEXTURE_GREEN_SIZE												0x805D
#define GL_TEXTURE_BLUE_SIZE												0x805E
#define GL_TEXTURE_ALPHA_SIZE												0x805F
#define GL_TEXTURE_LUMINANCE_SIZE											0x8060
#define GL_TEXTURE_INTENSITY_SIZE											0x8061
#define GL_PROXY_TEXTURE_1D													0x8063
#define GL_PROXY_TEXTURE_2D													0x8064
#define GL_TEXTURE_PRIORITY													0x8066
#define GL_TEXTURE_RESIDENT													0x8067
#define GL_TEXTURE_BINDING_1D												0x8068
#define GL_TEXTURE_BINDING_2D												0x8069
#define GL_VERTEX_ARRAY														0x8074
#define GL_NORMAL_ARRAY														0x8075
#define GL_COLOR_ARRAY														0x8076
#define GL_INDEX_ARRAY														0x8077
#define GL_TEXTURE_COORD_ARRAY												0x8078
#define GL_EDGE_FLAG_ARRAY													0x8079
#define GL_VERTEX_ARRAY_SIZE												0x807A
#define GL_VERTEX_ARRAY_TYPE												0x807B
#define GL_VERTEX_ARRAY_STRIDE												0x807C
#define GL_NORMAL_ARRAY_TYPE												0x807E
#define GL_NORMAL_ARRAY_STRIDE												0x807F
#define GL_COLOR_ARRAY_SIZE													0x8081
#define GL_COLOR_ARRAY_TYPE													0x8082
#define GL_COLOR_ARRAY_STRIDE												0x8083
#define GL_INDEX_ARRAY_TYPE													0x8085
#define GL_INDEX_ARRAY_STRIDE												0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE											0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE											0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE										0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE											0x808C
#define GL_VERTEX_ARRAY_POINTER												0x808E
#define GL_NORMAL_ARRAY_POINTER												0x808F
#define GL_COLOR_ARRAY_POINTER												0x8090
#define GL_INDEX_ARRAY_POINTER												0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER										0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER											0x8093
#define GL_COLOR_INDEX1_EXT													0x80E2
#define GL_COLOR_INDEX2_EXT													0x80E3
#define GL_COLOR_INDEX4_EXT													0x80E4
#define GL_COLOR_INDEX8_EXT													0x80E5
#define GL_COLOR_INDEX12_EXT												0x80E6
#define GL_COLOR_INDEX16_EXT												0x80E7
#define GL_EVAL_BIT															0x00010000
#define GL_LIST_BIT															0x00020000
#define GL_TEXTURE_BIT														0x00040000
#define GL_SCISSOR_BIT														0x00080000
#define GL_ALL_ATTRIB_BITS													0x000fffff
#define GL_CLIENT_ALL_ATTRIB_BITS											0xffffffff

/*
	GL_VERSION_1_2
*/
#define GL_SMOOTH_POINT_SIZE_RANGE											0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY									0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE											0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY									0x0B23
#define GL_UNSIGNED_BYTE_3_3_2												0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4											0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1											0x8034
#define GL_UNSIGNED_INT_8_8_8_8												0x8035
#define GL_UNSIGNED_INT_10_10_10_2											0x8036
#define GL_RESCALE_NORMAL													0x803A
#define GL_TEXTURE_BINDING_3D												0x806A
#define GL_PACK_SKIP_IMAGES													0x806B
#define GL_PACK_IMAGE_HEIGHT												0x806C
#define GL_UNPACK_SKIP_IMAGES												0x806D
#define GL_UNPACK_IMAGE_HEIGHT												0x806E
#define GL_TEXTURE_3D														0x806F
#define GL_PROXY_TEXTURE_3D													0x8070
#define GL_TEXTURE_DEPTH													0x8071
#define GL_TEXTURE_WRAP_R													0x8072
#define GL_MAX_3D_TEXTURE_SIZE												0x8073
#define GL_BGR																0x80E0
#define GL_BGRA																0x80E1
#define GL_MAX_ELEMENTS_VERTICES											0x80E8
#define GL_MAX_ELEMENTS_INDICES												0x80E9
#define GL_CLAMP_TO_EDGE													0x812F
#define GL_TEXTURE_MIN_LOD													0x813A
#define GL_TEXTURE_MAX_LOD													0x813B
#define GL_TEXTURE_BASE_LEVEL												0x813C
#define GL_TEXTURE_MAX_LEVEL												0x813D
#define GL_LIGHT_MODEL_COLOR_CONTROL										0x81F8
#define GL_SINGLE_COLOR														0x81F9
#define GL_SEPARATE_SPECULAR_COLOR											0x81FA
#define GL_UNSIGNED_BYTE_2_3_3_REV											0x8362
#define GL_UNSIGNED_SHORT_5_6_5												0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV											0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV										0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV										0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV											0x8367
#define GL_ALIASED_POINT_SIZE_RANGE											0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE											0x846E

/*
	GL_VERSION_1_3
*/
#define GL_MULTISAMPLE														0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE											0x809E
#define GL_SAMPLE_ALPHA_TO_ONE												0x809F
#define GL_SAMPLE_COVERAGE													0x80A0
#define GL_SAMPLE_BUFFERS													0x80A8
#define GL_SAMPLES															0x80A9
#define GL_SAMPLE_COVERAGE_VALUE											0x80AA
#define GL_SAMPLE_COVERAGE_INVERT											0x80AB
#define GL_CLAMP_TO_BORDER													0x812D
#define GL_TEXTURE0															0x84C0
#define GL_TEXTURE1															0x84C1
#define GL_TEXTURE2															0x84C2
#define GL_TEXTURE3															0x84C3
#define GL_TEXTURE4															0x84C4
#define GL_TEXTURE5															0x84C5
#define GL_TEXTURE6															0x84C6
#define GL_TEXTURE7															0x84C7
#define GL_TEXTURE8															0x84C8
#define GL_TEXTURE9															0x84C9
#define GL_TEXTURE10														0x84CA
#define GL_TEXTURE11														0x84CB
#define GL_TEXTURE12														0x84CC
#define GL_TEXTURE13														0x84CD
#define GL_TEXTURE14														0x84CE
#define GL_TEXTURE15														0x84CF
#define GL_TEXTURE16														0x84D0
#define GL_TEXTURE17														0x84D1
#define GL_TEXTURE18														0x84D2
#define GL_TEXTURE19														0x84D3
#define GL_TEXTURE20														0x84D4
#define GL_TEXTURE21														0x84D5
#define GL_TEXTURE22														0x84D6
#define GL_TEXTURE23														0x84D7
#define GL_TEXTURE24														0x84D8
#define GL_TEXTURE25														0x84D9
#define GL_TEXTURE26														0x84DA
#define GL_TEXTURE27														0x84DB
#define GL_TEXTURE28														0x84DC
#define GL_TEXTURE29														0x84DD
#define GL_TEXTURE30														0x84DE
#define GL_TEXTURE31														0x84DF
#define GL_ACTIVE_TEXTURE													0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE											0x84E1
#define GL_MAX_TEXTURE_UNITS												0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX										0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX										0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX											0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX											0x84E6
#define GL_SUBTRACT															0x84E7
#define GL_COMPRESSED_ALPHA													0x84E9
#define GL_COMPRESSED_LUMINANCE												0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA										0x84EB
#define GL_COMPRESSED_INTENSITY												0x84EC
#define GL_COMPRESSED_RGB													0x84ED
#define GL_COMPRESSED_RGBA													0x84EE
#define GL_TEXTURE_COMPRESSION_HINT											0x84EF
#define GL_NORMAL_MAP														0x8511
#define GL_REFLECTION_MAP													0x8512
#define GL_TEXTURE_CUBE_MAP													0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP											0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X										0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X										0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y										0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y										0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z										0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z										0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP											0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE										0x851C
#define GL_COMBINE															0x8570
#define GL_COMBINE_RGB														0x8571
#define GL_COMBINE_ALPHA													0x8572
#define GL_RGB_SCALE														0x8573
#define GL_ADD_SIGNED														0x8574
#define GL_INTERPOLATE														0x8575
#define GL_CONSTANT															0x8576
#define GL_PRIMARY_COLOR													0x8577
#define GL_PREVIOUS															0x8578
#define GL_SOURCE0_RGB														0x8580
#define GL_SOURCE1_RGB														0x8581
#define GL_SOURCE2_RGB														0x8582
#define GL_SOURCE0_ALPHA													0x8588
#define GL_SOURCE1_ALPHA													0x8589
#define GL_SOURCE2_ALPHA													0x858A
#define GL_OPERAND0_RGB														0x8590
#define GL_OPERAND1_RGB														0x8591
#define GL_OPERAND2_RGB														0x8592
#define GL_OPERAND0_ALPHA													0x8598
#define GL_OPERAND1_ALPHA													0x8599
#define GL_OPERAND2_ALPHA													0x859A
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE									0x86A0
#define GL_TEXTURE_COMPRESSED												0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS									0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS										0x86A3
#define GL_DOT3_RGB															0x86AE
#define GL_DOT3_RGBA														0x86AF
#define GL_MULTISAMPLE_BIT													0x20000000

/*
	GL_VERSION_1_4
*/
#define GL_BLEND_DST_RGB													0x80C8
#define GL_BLEND_SRC_RGB													0x80C9
#define GL_BLEND_DST_ALPHA													0x80CA
#define GL_BLEND_SRC_ALPHA													0x80CB
#define GL_POINT_SIZE_MIN													0x8126
#define GL_POINT_SIZE_MAX													0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE										0x8128
#define GL_POINT_DISTANCE_ATTENUATION										0x8129
#define GL_GENERATE_MIPMAP													0x8191
#define GL_GENERATE_MIPMAP_HINT												0x8192
#define GL_DEPTH_COMPONENT16												0x81A5
#define GL_DEPTH_COMPONENT24												0x81A6
#define GL_DEPTH_COMPONENT32												0x81A7
#define GL_MIRRORED_REPEAT													0x8370
#define GL_FOG_COORDINATE_SOURCE											0x8450
#define GL_FOG_COORDINATE													0x8451
#define GL_FRAGMENT_DEPTH													0x8452
#define GL_CURRENT_FOG_COORDINATE											0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE										0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE										0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER										0x8456
#define GL_FOG_COORDINATE_ARRAY												0x8457
#define GL_COLOR_SUM														0x8458
#define GL_CURRENT_SECONDARY_COLOR											0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE										0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE										0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE										0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER									0x845D
#define GL_SECONDARY_COLOR_ARRAY											0x845E
#define GL_MAX_TEXTURE_LOD_BIAS												0x84FD
#define GL_TEXTURE_FILTER_CONTROL											0x8500
#define GL_TEXTURE_LOD_BIAS													0x8501
#define GL_INCR_WRAP														0x8507
#define GL_DECR_WRAP														0x8508
#define GL_TEXTURE_DEPTH_SIZE												0x884A
#define GL_DEPTH_TEXTURE_MODE												0x884B
#define GL_TEXTURE_COMPARE_MODE												0x884C
#define GL_TEXTURE_COMPARE_FUNC												0x884D
#define GL_COMPARE_R_TO_TEXTURE												0x884E

/*
	GL_VERSION_1_5
*/
#define GL_CURRENT_FOG_COORD												GL_CURRENT_FOG_COORDINATE
#define GL_FOG_COORD														GL_FOG_COORDINATE
#define GL_FOG_COORD_ARRAY													GL_FOG_COORDINATE_ARRAY
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING									GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
#define GL_FOG_COORD_ARRAY_POINTER											GL_FOG_COORDINATE_ARRAY_POINTER
#define GL_FOG_COORD_ARRAY_STRIDE											GL_FOG_COORDINATE_ARRAY_STRIDE
#define GL_FOG_COORD_ARRAY_TYPE												GL_FOG_COORDINATE_ARRAY_TYPE
#define GL_FOG_COORD_SRC													GL_FOG_COORDINATE_SOURCE
#define GL_SRC0_ALPHA														GL_SOURCE0_ALPHA
#define GL_SRC0_RGB															GL_SOURCE0_RGB
#define GL_SRC1_ALPHA														GL_SOURCE1_ALPHA
#define GL_SRC1_RGB															GL_SOURCE1_RGB
#define GL_SRC2_ALPHA														GL_SOURCE2_ALPHA
#define GL_SRC2_RGB															GL_SOURCE2_RGB
#define GL_BUFFER_SIZE														0x8764
#define GL_BUFFER_USAGE														0x8765
#define GL_QUERY_COUNTER_BITS												0x8864
#define GL_CURRENT_QUERY													0x8865
#define GL_QUERY_RESULT														0x8866
#define GL_QUERY_RESULT_AVAILABLE											0x8867
#define GL_ARRAY_BUFFER														0x8892
#define GL_ELEMENT_ARRAY_BUFFER												0x8893
#define GL_ARRAY_BUFFER_BINDING												0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING										0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING										0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING										0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING										0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING										0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING								0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING									0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING								0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING								0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING										0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING								0x889F
#define GL_READ_ONLY														0x88B8
#define GL_WRITE_ONLY														0x88B9
#define GL_READ_WRITE														0x88BA
#define GL_BUFFER_ACCESS													0x88BB
#define GL_BUFFER_MAPPED													0x88BC
#define GL_BUFFER_MAP_POINTER												0x88BD
#define GL_STREAM_DRAW														0x88E0
#define GL_STREAM_READ														0x88E1
#define GL_STREAM_COPY														0x88E2
#define GL_STATIC_DRAW														0x88E4
#define GL_STATIC_READ														0x88E5
#define GL_STATIC_COPY														0x88E6
#define GL_DYNAMIC_DRAW														0x88E8
#define GL_DYNAMIC_READ														0x88E9
#define GL_DYNAMIC_COPY														0x88EA
#define GL_SAMPLES_PASSED													0x8914

/*
	GL_VERSION_2_0
*/
#define GL_BLEND_EQUATION_RGB												GL_BLEND_EQUATION
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED										0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE											0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE										0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE											0x8625
#define GL_CURRENT_VERTEX_ATTRIB											0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE										0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE											0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER										0x8645
#define GL_STENCIL_BACK_FUNC												0x8800
#define GL_STENCIL_BACK_FAIL												0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL										0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS										0x8803
#define GL_MAX_DRAW_BUFFERS													0x8824
#define GL_DRAW_BUFFER0														0x8825
#define GL_DRAW_BUFFER1														0x8826
#define GL_DRAW_BUFFER2														0x8827
#define GL_DRAW_BUFFER3														0x8828
#define GL_DRAW_BUFFER4														0x8829
#define GL_DRAW_BUFFER5														0x882A
#define GL_DRAW_BUFFER6														0x882B
#define GL_DRAW_BUFFER7														0x882C
#define GL_DRAW_BUFFER8														0x882D
#define GL_DRAW_BUFFER9														0x882E
#define GL_DRAW_BUFFER10													0x882F
#define GL_DRAW_BUFFER11													0x8830
#define GL_DRAW_BUFFER12													0x8831
#define GL_DRAW_BUFFER13													0x8832
#define GL_DRAW_BUFFER14													0x8833
#define GL_DRAW_BUFFER15													0x8834
#define GL_BLEND_EQUATION_ALPHA												0x883D
#define GL_POINT_SPRITE														0x8861
#define GL_COORD_REPLACE													0x8862
#define GL_MAX_VERTEX_ATTRIBS												0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED									0x886A
#define GL_MAX_TEXTURE_COORDS												0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS											0x8872
#define GL_FRAGMENT_SHADER													0x8B30
#define GL_VERTEX_SHADER													0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS									0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS									0x8B4A
#define GL_MAX_VARYING_FLOATS												0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS									0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS									0x8B4D
#define GL_SHADER_TYPE														0x8B4F
#define GL_FLOAT_VEC2														0x8B50
#define GL_FLOAT_VEC3														0x8B51
#define GL_FLOAT_VEC4														0x8B52
#define GL_INT_VEC2															0x8B53
#define GL_INT_VEC3															0x8B54
#define GL_INT_VEC4															0x8B55
#define GL_BOOL																0x8B56
#define GL_BOOL_VEC2														0x8B57
#define GL_BOOL_VEC3														0x8B58
#define GL_BOOL_VEC4														0x8B59
#define GL_FLOAT_MAT2														0x8B5A
#define GL_FLOAT_MAT3														0x8B5B
#define GL_FLOAT_MAT4														0x8B5C
#define GL_SAMPLER_1D														0x8B5D
#define GL_SAMPLER_2D														0x8B5E
#define GL_SAMPLER_3D														0x8B5F
#define GL_SAMPLER_CUBE														0x8B60
#define GL_SAMPLER_1D_SHADOW												0x8B61
#define GL_SAMPLER_2D_SHADOW												0x8B62
#define GL_DELETE_STATUS													0x8B80
#define GL_COMPILE_STATUS													0x8B81
#define GL_LINK_STATUS														0x8B82
#define GL_VALIDATE_STATUS													0x8B83
#define GL_INFO_LOG_LENGTH													0x8B84
#define GL_ATTACHED_SHADERS													0x8B85
#define GL_ACTIVE_UNIFORMS													0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH										0x8B87
#define GL_SHADER_SOURCE_LENGTH												0x8B88
#define GL_ACTIVE_ATTRIBUTES												0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH										0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT									0x8B8B
#define GL_SHADING_LANGUAGE_VERSION											0x8B8C
#define GL_CURRENT_PROGRAM													0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN										0x8CA0
#define GL_LOWER_LEFT														0x8CA1
#define GL_UPPER_LEFT														0x8CA2
#define GL_STENCIL_BACK_REF													0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK											0x8CA4
#define GL_STENCIL_BACK_WRITEMASK											0x8CA5

/*
	GL_VERSION_2_1
*/
#define GL_CURRENT_RASTER_SECONDARY_COLOR									0x845F
#define GL_PIXEL_PACK_BUFFER												0x88EB
#define GL_PIXEL_UNPACK_BUFFER												0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING										0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING										0x88EF
#define GL_FLOAT_MAT2x3														0x8B65
#define GL_FLOAT_MAT2x4														0x8B66
#define GL_FLOAT_MAT3x2														0x8B67
#define GL_FLOAT_MAT3x4														0x8B68
#define GL_FLOAT_MAT4x2														0x8B69
#define GL_FLOAT_MAT4x3														0x8B6A
#define GL_SRGB																0x8C40
#define GL_SRGB8															0x8C41
#define GL_SRGB_ALPHA														0x8C42
#define GL_SRGB8_ALPHA8														0x8C43
#define GL_SLUMINANCE_ALPHA													0x8C44
#define GL_SLUMINANCE8_ALPHA8												0x8C45
#define GL_SLUMINANCE														0x8C46
#define GL_SLUMINANCE8														0x8C47
#define GL_COMPRESSED_SRGB													0x8C48
#define GL_COMPRESSED_SRGB_ALPHA											0x8C49
#define GL_COMPRESSED_SLUMINANCE											0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA										0x8C4B

/*
	GL_VERSION_3_0
*/
#define GL_CLIP_DISTANCE0													GL_CLIP_PLANE0
#define GL_CLIP_DISTANCE1													GL_CLIP_PLANE1
#define GL_CLIP_DISTANCE2													GL_CLIP_PLANE2
#define GL_CLIP_DISTANCE3													GL_CLIP_PLANE3
#define GL_CLIP_DISTANCE4													GL_CLIP_PLANE4
#define GL_CLIP_DISTANCE5													GL_CLIP_PLANE5
#define GL_COMPARE_REF_TO_TEXTURE											GL_COMPARE_R_TO_TEXTURE_ARB
#define GL_MAX_CLIP_DISTANCES												GL_MAX_CLIP_PLANES
#define GL_MAX_VARYING_COMPONENTS											GL_MAX_VARYING_FLOATS
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT								0x0001
#define GL_MAJOR_VERSION													0x821B
#define GL_MINOR_VERSION													0x821C
#define GL_NUM_EXTENSIONS													0x821D
#define GL_CONTEXT_FLAGS													0x821E
#define GL_DEPTH_BUFFER														0x8223
#define GL_STENCIL_BUFFER													0x8224
#define GL_RGBA32F															0x8814
#define GL_RGB32F															0x8815
#define GL_RGBA16F															0x881A
#define GL_RGB16F															0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER										0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS											0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET											0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET											0x8905
#define GL_CLAMP_VERTEX_COLOR												0x891A
#define GL_CLAMP_FRAGMENT_COLOR												0x891B
#define GL_CLAMP_READ_COLOR													0x891C
#define GL_FIXED_ONLY														0x891D
#define GL_TEXTURE_RED_TYPE													0x8C10
#define GL_TEXTURE_GREEN_TYPE												0x8C11
#define GL_TEXTURE_BLUE_TYPE												0x8C12
#define GL_TEXTURE_ALPHA_TYPE												0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE											0x8C14
#define GL_TEXTURE_INTENSITY_TYPE											0x8C15
#define GL_TEXTURE_DEPTH_TYPE												0x8C16
#define GL_TEXTURE_1D_ARRAY													0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY											0x8C19
#define GL_TEXTURE_2D_ARRAY													0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY											0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY											0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY											0x8C1D
#define GL_R11F_G11F_B10F													0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV										0x8C3B
#define GL_RGB9_E5															0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV											0x8C3E
#define GL_TEXTURE_SHARED_SIZE												0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH							0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE									0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS						0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS										0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START									0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE									0x8C85
#define GL_PRIMITIVES_GENERATED												0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN							0x8C88
#define GL_RASTERIZER_DISCARD												0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS					0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS							0x8C8B
#define GL_INTERLEAVED_ATTRIBS												0x8C8C
#define GL_SEPARATE_ATTRIBS													0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER										0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING								0x8C8F
#define GL_RGBA32UI															0x8D70
#define GL_RGB32UI															0x8D71
#define GL_RGBA16UI															0x8D76
#define GL_RGB16UI															0x8D77
#define GL_RGBA8UI															0x8D7C
#define GL_RGB8UI															0x8D7D
#define GL_RGBA32I															0x8D82
#define GL_RGB32I															0x8D83
#define GL_RGBA16I															0x8D88
#define GL_RGB16I															0x8D89
#define GL_RGBA8I															0x8D8E
#define GL_RGB8I															0x8D8F
#define GL_RED_INTEGER														0x8D94
#define GL_GREEN_INTEGER													0x8D95
#define GL_BLUE_INTEGER														0x8D96
#define GL_ALPHA_INTEGER													0x8D97
#define GL_RGB_INTEGER														0x8D98
#define GL_RGBA_INTEGER														0x8D99
#define GL_BGR_INTEGER														0x8D9A
#define GL_BGRA_INTEGER														0x8D9B
#define GL_SAMPLER_1D_ARRAY													0x8DC0
#define GL_SAMPLER_2D_ARRAY													0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW											0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW											0x8DC4
#define GL_SAMPLER_CUBE_SHADOW												0x8DC5
#define GL_UNSIGNED_INT_VEC2												0x8DC6
#define GL_UNSIGNED_INT_VEC3												0x8DC7
#define GL_UNSIGNED_INT_VEC4												0x8DC8
#define GL_INT_SAMPLER_1D													0x8DC9
#define GL_INT_SAMPLER_2D													0x8DCA
#define GL_INT_SAMPLER_3D													0x8DCB
#define GL_INT_SAMPLER_CUBE													0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY												0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY												0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D											0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D											0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D											0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE										0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY									0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY									0x8DD7
#define GL_QUERY_WAIT														0x8E13
#define GL_QUERY_NO_WAIT													0x8E14
#define GL_QUERY_BY_REGION_WAIT												0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT											0x8E16

/*
	GL_VERSION_3_1
*/
#define GL_TEXTURE_RECTANGLE												0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE										0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE											0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE										0x84F8
#define GL_SAMPLER_2D_RECT													0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW											0x8B64
#define GL_TEXTURE_BUFFER													0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE											0x8C2B
#define GL_TEXTURE_BINDING_BUFFER											0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING								0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT											0x8C2E
#define GL_SAMPLER_BUFFER													0x8DC2
#define GL_INT_SAMPLER_2D_RECT												0x8DCD
#define GL_INT_SAMPLER_BUFFER												0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT										0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER										0x8DD8
#define GL_RED_SNORM														0x8F90
#define GL_RG_SNORM															0x8F91
#define GL_RGB_SNORM														0x8F92
#define GL_RGBA_SNORM														0x8F93
#define GL_R8_SNORM															0x8F94
#define GL_RG8_SNORM														0x8F95
#define GL_RGB8_SNORM														0x8F96
#define GL_RGBA8_SNORM														0x8F97
#define GL_R16_SNORM														0x8F98
#define GL_RG16_SNORM														0x8F99
#define GL_RGB16_SNORM														0x8F9A
#define GL_RGBA16_SNORM														0x8F9B
#define GL_SIGNED_NORMALIZED												0x8F9C
#define GL_PRIMITIVE_RESTART												0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX											0x8F9E
#define GL_BUFFER_ACCESS_FLAGS												0x911F
#define GL_BUFFER_MAP_LENGTH												0x9120
#define GL_BUFFER_MAP_OFFSET												0x9121

/*
	GL_VERSION_3_2
*/
#define GL_CONTEXT_CORE_PROFILE_BIT											0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT								0x00000002
#define GL_LINES_ADJACENCY													0x000A
#define GL_LINE_STRIP_ADJACENCY												0x000B
#define GL_TRIANGLES_ADJACENCY												0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY											0x000D
#define GL_PROGRAM_POINT_SIZE												0x8642
#define GL_GEOMETRY_VERTICES_OUT											0x8916
#define GL_GEOMETRY_INPUT_TYPE												0x8917
#define GL_GEOMETRY_OUTPUT_TYPE												0x8918
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS									0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED									0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS								0x8DA8
#define GL_GEOMETRY_SHADER													0x8DD9
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS									0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES										0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS								0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS										0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS									0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS									0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS									0x9125
#define GL_CONTEXT_PROFILE_MASK												0x9126

/*
	GL_VERSION_3_3
*/
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR										0x88FE
#define GL_RGB10_A2UI														0x906F

/*
	GL_VERSION_4_0
*/
#define GL_SAMPLE_SHADING													0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE											0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET								0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET								0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS							0x8F9F
#define GL_TEXTURE_CUBE_MAP_ARRAY											0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY									0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY										0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY											0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW									0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY										0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY								0x900F

/*
	GL_VERSION_4_2
*/
#define GL_TRANSFORM_FEEDBACK_PAUSED										0x8E23
#define GL_TRANSFORM_FEEDBACK_ACTIVE										0x8E24
#define GL_COMPRESSED_RGBA_BPTC_UNORM										0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM									0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT									0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT								0x8E8F
#define GL_COPY_READ_BUFFER_BINDING											0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING										0x8F37

/*
	GL_VERSION_4_3
*/
#define GL_NUM_SHADING_LANGUAGE_VERSIONS									0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG											0x874E

/*
	GL_VERSION_4_4
*/
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED							0x8221
#define GL_MAX_VERTEX_ATTRIB_STRIDE											0x82E5
#define GL_TEXTURE_BUFFER_BINDING											0x8C2A

/*
	GL_VERSION_4_5
*/
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT									0x00000004

/*
	GL_VERSION_4_6
*/
#define GL_CONTEXT_FLAG_NO_ERROR_BIT										0x00000008
#define GL_PARAMETER_BUFFER													0x80EE
#define GL_PARAMETER_BUFFER_BINDING											0x80EF
#define GL_TRANSFORM_FEEDBACK_OVERFLOW										0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW								0x82ED
#define GL_VERTICES_SUBMITTED												0x82EE
#define GL_PRIMITIVES_SUBMITTED												0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS										0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES										0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS								0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED								0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS										0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS										0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES										0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES										0x82F7
#define GL_TEXTURE_MAX_ANISOTROPY											0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY										0x84FF
#define GL_POLYGON_OFFSET_CLAMP												0x8E1B
#define GL_SHADER_BINARY_FORMAT_SPIR_V										0x9551
#define GL_SPIR_V_BINARY													0x9552
#define GL_SPIR_V_EXTENSIONS												0x9553
#define GL_NUM_SPIR_V_EXTENSIONS											0x9554

/*
	GL_3DFX_multisample
*/
#define GL_MULTISAMPLE_3DFX													0x86B2
#define GL_SAMPLE_BUFFERS_3DFX												0x86B3
#define GL_SAMPLES_3DFX														0x86B4
#define GL_MULTISAMPLE_BIT_3DFX												0x20000000

/*
	GL_3DFX_texture_compression_FXT1
*/
#define GL_COMPRESSED_RGB_FXT1_3DFX											0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX										0x86B1

/*
	GL_AMD_blend_minmax_factor
*/
#define GL_FACTOR_MIN_AMD													0x901C
#define GL_FACTOR_MAX_AMD													0x901D

/*
	GL_AMD_compressed_3DC_texture
*/
#define GL_3DC_X_AMD														0x87F9
#define GL_3DC_XY_AMD														0x87FA

/*
	GL_AMD_compressed_ATC_texture
*/
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD									0x87EE
#define GL_ATC_RGB_AMD														0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD										0x8C93

/*
	GL_AMD_debug_output
*/
#define GL_MAX_DEBUG_MESSAGE_LENGTH_AMD										0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD									0x9144
#define GL_DEBUG_LOGGED_MESSAGES_AMD										0x9145
#define GL_DEBUG_SEVERITY_HIGH_AMD											0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_AMD										0x9147
#define GL_DEBUG_SEVERITY_LOW_AMD											0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD										0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD									0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD									0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD							0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD									0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD								0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD									0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD											0x9150

/*
	GL_AMD_depth_clamp_separate
*/
#define GL_DEPTH_CLAMP_NEAR_AMD												0x901E
#define GL_DEPTH_CLAMP_FAR_AMD												0x901F

/*
	GL_AMD_framebuffer_sample_positions
*/
#define GL_SUBSAMPLE_DISTANCE_AMD											0x883F
#define GL_PIXELS_PER_SAMPLE_PATTERN_X_AMD									0x91AE
#define GL_PIXELS_PER_SAMPLE_PATTERN_Y_AMD									0x91AF
#define GL_ALL_PIXELS_AMD													0xFFFFFFFF

/*
	GL_AMD_gpu_shader_half_float
*/
#define GL_FLOAT16_NV														0x8FF8
#define GL_FLOAT16_VEC2_NV													0x8FF9
#define GL_FLOAT16_VEC3_NV													0x8FFA
#define GL_FLOAT16_VEC4_NV													0x8FFB
#define GL_FLOAT16_MAT2_AMD													0x91C5
#define GL_FLOAT16_MAT3_AMD													0x91C6
#define GL_FLOAT16_MAT4_AMD													0x91C7
#define GL_FLOAT16_MAT2x3_AMD												0x91C8
#define GL_FLOAT16_MAT2x4_AMD												0x91C9
#define GL_FLOAT16_MAT3x2_AMD												0x91CA
#define GL_FLOAT16_MAT3x4_AMD												0x91CB
#define GL_FLOAT16_MAT4x2_AMD												0x91CC
#define GL_FLOAT16_MAT4x3_AMD												0x91CD

/*
	GL_AMD_interleaved_elements
*/
#define GL_RED																0x1903
#define GL_GREEN															0x1904
#define GL_BLUE																0x1905
#define GL_ALPHA															0x1906
#define GL_RG8UI															0x8238
#define GL_RG16UI															0x823A
#define GL_RGBA8UI															0x8D7C
#define GL_VERTEX_ELEMENT_SWIZZLE_AMD										0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD											0x91A5

/*
	GL_AMD_name_gen_delete
*/
#define GL_DATA_BUFFER_AMD													0x9151
#define GL_PERFORMANCE_MONITOR_AMD											0x9152
#define GL_QUERY_OBJECT_AMD													0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD											0x9154
#define GL_SAMPLER_OBJECT_AMD												0x9155

/*
	GL_AMD_occlusion_query_event
*/
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD									0x00000001
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD									0x00000002
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD									0x00000004
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD							0x00000008
#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD									0x874F
#define GL_QUERY_ALL_EVENT_BITS_AMD											0xFFFFFFFF

/*
	GL_AMD_performance_monitor
*/
#define GL_COUNTER_TYPE_AMD													0x8BC0
#define GL_COUNTER_RANGE_AMD												0x8BC1
#define GL_UNSIGNED_INT64_AMD												0x8BC2
#define GL_PERCENTAGE_AMD													0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD										0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD											0x8BC5
#define GL_PERFMON_RESULT_AMD												0x8BC6

/*
	GL_AMD_pinned_memory
*/
#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD								0x9160

/*
	GL_AMD_program_binary_Z400
*/
#define GL_Z400_BINARY_AMD													0x8740

/*
	GL_AMD_query_buffer_object
*/
#define GL_QUERY_BUFFER_AMD													0x9192
#define GL_QUERY_BUFFER_BINDING_AMD											0x9193
#define GL_QUERY_RESULT_NO_WAIT_AMD											0x9194

/*
	GL_AMD_sample_positions
*/
#define GL_SUBSAMPLE_DISTANCE_AMD											0x883F

/*
	GL_AMD_seamless_cubemap_per_texture
*/
#define GL_TEXTURE_CUBE_MAP_SEAMLESS										0x884F

/*
	GL_AMD_sparse_texture
*/
#define GL_TEXTURE_STORAGE_SPARSE_BIT_AMD									0x00000001
#define GL_VIRTUAL_PAGE_SIZE_X_AMD											0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_AMD											0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_AMD											0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_AMD										0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD									0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS									0x919A
#define GL_MIN_SPARSE_LEVEL_AMD												0x919B
#define GL_MIN_LOD_WARNING_AMD												0x919C

/*
	GL_AMD_stencil_operation_extended
*/
#define GL_SET_AMD															0x874A
#define GL_REPLACE_VALUE_AMD												0x874B
#define GL_STENCIL_OP_VALUE_AMD												0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD										0x874D

/*
	GL_AMD_transform_feedback4
*/
#define GL_STREAM_RASTERIZATION_AMD											0x91A0

/*
	GL_AMD_vertex_shader_tessellator
*/
#define GL_SAMPLER_BUFFER_AMD												0x9001
#define GL_INT_SAMPLER_BUFFER_AMD											0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD									0x9003
#define GL_TESSELLATION_MODE_AMD											0x9004
#define GL_TESSELLATION_FACTOR_AMD											0x9005
#define GL_DISCRETE_AMD														0x9006
#define GL_CONTINUOUS_AMD													0x9007

/*
	GL_ANGLE_framebuffer_blit
*/
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE									0x8CA6
#define GL_READ_FRAMEBUFFER_ANGLE											0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE											0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE									0x8CAA

/*
	GL_ANGLE_framebuffer_multisample
*/
#define GL_RENDERBUFFER_SAMPLES_ANGLE										0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE							0x8D56
#define GL_MAX_SAMPLES_ANGLE												0x8D57

/*
	GL_ANGLE_instanced_arrays
*/
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE								0x88FE

/*
	GL_ANGLE_pack_reverse_row_order
*/
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE										0x93A4

/*
	GL_ANGLE_program_binary
*/
#define GL_PROGRAM_BINARY_ANGLE												0x93A6

/*
	GL_ANGLE_texture_compression_dxt1
*/
#define GL_COMPRESSED_RGB_S3TC_DXT1_ANGLE									0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_ANGLE									0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE									0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE									0x83F3

/*
	GL_ANGLE_texture_compression_dxt3
*/
#define GL_COMPRESSED_RGB_S3TC_DXT1_ANGLE									0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_ANGLE									0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE									0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE									0x83F3

/*
	GL_ANGLE_texture_compression_dxt5
*/
#define GL_COMPRESSED_RGB_S3TC_DXT1_ANGLE									0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_ANGLE									0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE									0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE									0x83F3

/*
	GL_ANGLE_texture_usage
*/
#define GL_TEXTURE_USAGE_ANGLE												0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE										0x93A3

/*
	GL_ANGLE_timer_query
*/
#define GL_QUERY_COUNTER_BITS_ANGLE											0x8864
#define GL_CURRENT_QUERY_ANGLE												0x8865
#define GL_QUERY_RESULT_ANGLE												0x8866
#define GL_QUERY_RESULT_AVAILABLE_ANGLE										0x8867
#define GL_TIME_ELAPSED_ANGLE												0x88BF
#define GL_TIMESTAMP_ANGLE													0x8E28

/*
	GL_ANGLE_translated_shader_source
*/
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE							0x93A0

/*
	GL_APPLE_aux_depth_stencil
*/
#define GL_AUX_DEPTH_STENCIL_APPLE											0x8A14

/*
	GL_APPLE_client_storage
*/
#define GL_UNPACK_CLIENT_STORAGE_APPLE										0x85B2

/*
	GL_APPLE_clip_distance
*/
#define GL_MAX_CLIP_DISTANCES_APPLE											0x0D32
#define GL_CLIP_DISTANCE0_APPLE												0x3000
#define GL_CLIP_DISTANCE1_APPLE												0x3001
#define GL_CLIP_DISTANCE2_APPLE												0x3002
#define GL_CLIP_DISTANCE3_APPLE												0x3003
#define GL_CLIP_DISTANCE4_APPLE												0x3004
#define GL_CLIP_DISTANCE5_APPLE												0x3005
#define GL_CLIP_DISTANCE6_APPLE												0x3006
#define GL_CLIP_DISTANCE7_APPLE												0x3007

/*
	GL_APPLE_element_array
*/
#define GL_ELEMENT_ARRAY_APPLE												0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE											0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE										0x8A0E

/*
	GL_APPLE_fence
*/
#define GL_DRAW_PIXELS_APPLE												0x8A0A
#define GL_FENCE_APPLE														0x8A0B

/*
	GL_APPLE_float_pixels
*/
#define GL_HALF_APPLE														0x140B
#define GL_RGBA_FLOAT32_APPLE												0x8814
#define GL_RGB_FLOAT32_APPLE												0x8815
#define GL_ALPHA_FLOAT32_APPLE												0x8816
#define GL_INTENSITY_FLOAT32_APPLE											0x8817
#define GL_LUMINANCE_FLOAT32_APPLE											0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE									0x8819
#define GL_RGBA_FLOAT16_APPLE												0x881A
#define GL_RGB_FLOAT16_APPLE												0x881B
#define GL_ALPHA_FLOAT16_APPLE												0x881C
#define GL_INTENSITY_FLOAT16_APPLE											0x881D
#define GL_LUMINANCE_FLOAT16_APPLE											0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE									0x881F
#define GL_COLOR_FLOAT_APPLE												0x8A0F

/*
	GL_APPLE_flush_buffer_range
*/
#define GL_BUFFER_SERIALIZED_MODIFY_APPLE									0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE										0x8A13

/*
	GL_APPLE_framebuffer_multisample
*/
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE									0x8CA6
#define GL_READ_FRAMEBUFFER_APPLE											0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE											0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING_APPLE									0x8CAA
#define GL_RENDERBUFFER_SAMPLES_APPLE										0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE							0x8D56
#define GL_MAX_SAMPLES_APPLE												0x8D57

/*
	GL_APPLE_object_purgeable
*/
#define GL_BUFFER_OBJECT_APPLE												0x85B3
#define GL_RELEASED_APPLE													0x8A19
#define GL_VOLATILE_APPLE													0x8A1A
#define GL_RETAINED_APPLE													0x8A1B
#define GL_UNDEFINED_APPLE													0x8A1C
#define GL_PURGEABLE_APPLE													0x8A1D

/*
	GL_APPLE_pixel_buffer
*/
#define GL_MIN_PBUFFER_VIEWPORT_DIMS_APPLE									0x8A10

/*
	GL_APPLE_rgb_422
*/
#define GL_UNSIGNED_SHORT_8_8_APPLE											0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE										0x85BB
#define GL_RGB_422_APPLE													0x8A1F
#define GL_RGB_RAW_422_APPLE												0x8A51

/*
	GL_APPLE_row_bytes
*/
#define GL_PACK_ROW_BYTES_APPLE												0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE											0x8A16

/*
	GL_APPLE_specular_vector
*/
#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE								0x85B0

/*
	GL_APPLE_sync
*/
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE									0x00000001
#define GL_SYNC_OBJECT_APPLE												0x8A53
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE									0x9111
#define GL_OBJECT_TYPE_APPLE												0x9112
#define GL_SYNC_CONDITION_APPLE												0x9113
#define GL_SYNC_STATUS_APPLE												0x9114
#define GL_SYNC_FLAGS_APPLE													0x9115
#define GL_SYNC_FENCE_APPLE													0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE									0x9117
#define GL_UNSIGNALED_APPLE													0x9118
#define GL_SIGNALED_APPLE													0x9119
#define GL_ALREADY_SIGNALED_APPLE											0x911A
#define GL_TIMEOUT_EXPIRED_APPLE											0x911B
#define GL_CONDITION_SATISFIED_APPLE										0x911C
#define GL_WAIT_FAILED_APPLE												0x911D
#define GL_TIMEOUT_IGNORED_APPLE											0xFFFFFFFFFFFFFFFFull

/*
	GL_APPLE_texture_format_BGRA8888
*/
#define GL_BGRA_EXT															0x80E1
#define GL_BGRA8_EXT														0x93A1

/*
	GL_APPLE_texture_max_level
*/
#define GL_TEXTURE_MAX_LEVEL_APPLE											0x813D

/*
	GL_APPLE_texture_packed_float
*/
#define GL_R11F_G11F_B10F_APPLE												0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE								0x8C3B
#define GL_RGB9_E5_APPLE													0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE									0x8C3E

/*
	GL_APPLE_texture_range
*/
#define GL_TEXTURE_RANGE_LENGTH_APPLE										0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE										0x85B8
#define GL_TEXTURE_STORAGE_HINT_APPLE										0x85BC
#define GL_STORAGE_PRIVATE_APPLE											0x85BD
#define GL_STORAGE_CACHED_APPLE												0x85BE
#define GL_STORAGE_SHARED_APPLE												0x85BF

/*
	GL_APPLE_transform_hint
*/
#define GL_TRANSFORM_HINT_APPLE												0x85B1

/*
	GL_APPLE_vertex_array_object
*/
#define GL_VERTEX_ARRAY_BINDING_APPLE										0x85B5

/*
	GL_APPLE_vertex_array_range
*/
#define GL_VERTEX_ARRAY_RANGE_APPLE											0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE									0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE									0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE								0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE									0x8521
#define GL_STORAGE_CLIENT_APPLE												0x85B4
#define GL_STORAGE_CACHED_APPLE												0x85BE
#define GL_STORAGE_SHARED_APPLE												0x85BF

/*
	GL_APPLE_vertex_program_evaluators
*/
#define GL_VERTEX_ATTRIB_MAP1_APPLE											0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE											0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE									0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE									0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE									0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE									0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE									0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE									0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE									0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE									0x8A09

/*
	GL_APPLE_ycbcr_422
*/
#define GL_YCBCR_422_APPLE													0x85B9

/*
	GL_ARB_ES2_compatibility
*/
#define GL_FIXED															0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE									0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT									0x8B9B
#define GL_RGB565															0x8D62
#define GL_LOW_FLOAT														0x8DF0
#define GL_MEDIUM_FLOAT														0x8DF1
#define GL_HIGH_FLOAT														0x8DF2
#define GL_LOW_INT															0x8DF3
#define GL_MEDIUM_INT														0x8DF4
#define GL_HIGH_INT															0x8DF5
#define GL_SHADER_BINARY_FORMATS											0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS										0x8DF9
#define GL_SHADER_COMPILER													0x8DFA
#define GL_MAX_VERTEX_UNIFORM_VECTORS										0x8DFB
#define GL_MAX_VARYING_VECTORS												0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS										0x8DFD

/*
	GL_ARB_ES3_2_compatibility
*/
#define GL_PRIMITIVE_BOUNDING_BOX_ARB										0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB									0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB							0x9382

/*
	GL_ARB_ES3_compatibility
*/
#define GL_TEXTURE_IMMUTABLE_LEVELS											0x82DF
#define GL_PRIMITIVE_RESTART_FIXED_INDEX									0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE									0x8D6A
#define GL_MAX_ELEMENT_INDEX												0x8D6B
#define GL_COMPRESSED_R11_EAC												0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC										0x9271
#define GL_COMPRESSED_RG11_EAC												0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC										0x9273
#define GL_COMPRESSED_RGB8_ETC2												0x9274
#define GL_COMPRESSED_SRGB8_ETC2											0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2							0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2						0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC										0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC									0x9279

/*
	GL_ARB_bindless_texture
*/
#define GL_UNSIGNED_INT64_ARB												0x140F

/*
	GL_ARB_blend_func_extended
*/
#define GL_SRC1_COLOR														0x88F9
#define GL_ONE_MINUS_SRC1_COLOR												0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA												0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS										0x88FC

/*
	GL_ARB_buffer_storage
*/
#define GL_MAP_READ_BIT														0x0001
#define GL_MAP_WRITE_BIT													0x0002
#define GL_MAP_PERSISTENT_BIT												0x00000040
#define GL_MAP_COHERENT_BIT													0x00000080
#define GL_DYNAMIC_STORAGE_BIT												0x0100
#define GL_CLIENT_STORAGE_BIT												0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT									0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE											0x821F
#define GL_BUFFER_STORAGE_FLAGS												0x8220

/*
	GL_ARB_cl_event
*/
#define GL_SYNC_CL_EVENT_ARB												0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB										0x8241

/*
	GL_ARB_clear_texture
*/
#define GL_CLEAR_TEXTURE													0x9365

/*
	GL_ARB_clip_control
*/
#define GL_LOWER_LEFT														0x8CA1
#define GL_UPPER_LEFT														0x8CA2
#define GL_CLIP_ORIGIN														0x935C
#define GL_CLIP_DEPTH_MODE													0x935D
#define GL_NEGATIVE_ONE_TO_ONE												0x935E
#define GL_ZERO_TO_ONE														0x935F

/*
	GL_ARB_color_buffer_float
*/
#define GL_RGBA_FLOAT_MODE_ARB												0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB											0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB											0x891B
#define GL_CLAMP_READ_COLOR_ARB												0x891C
#define GL_FIXED_ONLY_ARB													0x891D

/*
	GL_ARB_compressed_texture_pixel_storage
*/
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH									0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT									0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH									0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE										0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH										0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT										0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH										0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE										0x912E

/*
	GL_ARB_compute_shader
*/
#define GL_COMPUTE_SHADER_BIT												0x00000020
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE									0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS									0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS								0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS										0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS							0x8266
#define GL_COMPUTE_WORK_GROUP_SIZE											0x8267
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS								0x90EB
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER						0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER				0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER											0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING									0x90EF
#define GL_COMPUTE_SHADER													0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS										0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS									0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS										0x91BD
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT										0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE										0x91BF

/*
	GL_ARB_compute_variable_group_size
*/
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB							0x90EB
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB									0x91BF
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB						0x9344
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB								0x9345

/*
	GL_ARB_conditional_render_inverted
*/
#define GL_QUERY_WAIT_INVERTED												0x8E17
#define GL_QUERY_NO_WAIT_INVERTED											0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED									0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED									0x8E1A

/*
	GL_ARB_copy_buffer
*/
#define GL_COPY_READ_BUFFER													0x8F36
#define GL_COPY_WRITE_BUFFER												0x8F37

/*
	GL_ARB_cull_distance
*/
#define GL_MAX_CULL_DISTANCES												0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES								0x82FA

/*
	GL_ARB_debug_output
*/
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB										0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB								0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB										0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB									0x8245
#define GL_DEBUG_SOURCE_API_ARB												0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB									0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB									0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB										0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB										0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB											0x824B
#define GL_DEBUG_TYPE_ERROR_ARB												0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB								0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB								0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB										0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB										0x8250
#define GL_DEBUG_TYPE_OTHER_ARB												0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB										0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB									0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB										0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB											0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB										0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB											0x9148

/*
	GL_ARB_depth_buffer_float
*/
#define GL_DEPTH_COMPONENT32F												0x8CAC
#define GL_DEPTH32F_STENCIL8												0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV									0x8DAD

/*
	GL_ARB_depth_clamp
*/
#define GL_DEPTH_CLAMP														0x864F

/*
	GL_ARB_depth_texture
*/
#define GL_DEPTH_COMPONENT16_ARB											0x81A5
#define GL_DEPTH_COMPONENT24_ARB											0x81A6
#define GL_DEPTH_COMPONENT32_ARB											0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB											0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB											0x884B

/*
	GL_ARB_direct_state_access
*/
#define GL_TEXTURE_TARGET													0x1006
#define GL_QUERY_TARGET														0x82EA

/*
	GL_ARB_draw_buffers
*/
#define GL_MAX_DRAW_BUFFERS_ARB												0x8824
#define GL_DRAW_BUFFER0_ARB													0x8825
#define GL_DRAW_BUFFER1_ARB													0x8826
#define GL_DRAW_BUFFER2_ARB													0x8827
#define GL_DRAW_BUFFER3_ARB													0x8828
#define GL_DRAW_BUFFER4_ARB													0x8829
#define GL_DRAW_BUFFER5_ARB													0x882A
#define GL_DRAW_BUFFER6_ARB													0x882B
#define GL_DRAW_BUFFER7_ARB													0x882C
#define GL_DRAW_BUFFER8_ARB													0x882D
#define GL_DRAW_BUFFER9_ARB													0x882E
#define GL_DRAW_BUFFER10_ARB												0x882F
#define GL_DRAW_BUFFER11_ARB												0x8830
#define GL_DRAW_BUFFER12_ARB												0x8831
#define GL_DRAW_BUFFER13_ARB												0x8832
#define GL_DRAW_BUFFER14_ARB												0x8833
#define GL_DRAW_BUFFER15_ARB												0x8834

/*
	GL_ARB_draw_indirect
*/
#define GL_DRAW_INDIRECT_BUFFER												0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING										0x8F43

/*
	GL_ARB_enhanced_layouts
*/
#define GL_LOCATION_COMPONENT												0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX									0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE									0x934C

/*
	GL_ARB_explicit_uniform_location
*/
#define GL_MAX_UNIFORM_LOCATIONS											0x826E

/*
	GL_ARB_fragment_program
*/
#define GL_FRAGMENT_PROGRAM_ARB												0x8804
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB										0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB										0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB										0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB								0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB								0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB								0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB									0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB									0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB									0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB							0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB							0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB							0x8810
#define GL_MAX_TEXTURE_COORDS_ARB											0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB										0x8872

/*
	GL_ARB_fragment_shader
*/
#define GL_FRAGMENT_SHADER_ARB												0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB								0x8B49
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB								0x8B8B

/*
	GL_ARB_framebuffer_no_attachments
*/
#define GL_FRAMEBUFFER_DEFAULT_WIDTH										0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT										0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS										0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES										0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS						0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH											0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT											0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS											0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES											0x9318

/*
	GL_ARB_framebuffer_object
*/
#define GL_INVALID_FRAMEBUFFER_OPERATION									0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING							0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE							0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE									0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE								0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE									0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE								0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE								0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE								0x8217
#define GL_FRAMEBUFFER_DEFAULT												0x8218
#define GL_FRAMEBUFFER_UNDEFINED											0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT											0x821A
#define GL_INDEX															0x8222
#define GL_MAX_RENDERBUFFER_SIZE											0x84E8
#define GL_DEPTH_STENCIL													0x84F9
#define GL_UNSIGNED_INT_24_8												0x84FA
#define GL_DEPTH24_STENCIL8													0x88F0
#define GL_TEXTURE_STENCIL_SIZE												0x88F1
#define GL_UNSIGNED_NORMALIZED												0x8C17
#define GL_SRGB																0x8C40
#define GL_DRAW_FRAMEBUFFER_BINDING											0x8CA6
#define GL_FRAMEBUFFER_BINDING												0x8CA6
#define GL_RENDERBUFFER_BINDING												0x8CA7
#define GL_READ_FRAMEBUFFER													0x8CA8
#define GL_DRAW_FRAMEBUFFER													0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING											0x8CAA
#define GL_RENDERBUFFER_SAMPLES												0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE								0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME								0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL								0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE						0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER								0x8CD4
#define GL_FRAMEBUFFER_COMPLETE												0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT								0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT						0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER								0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER								0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED											0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS											0x8CDF
#define GL_COLOR_ATTACHMENT0												0x8CE0
#define GL_COLOR_ATTACHMENT1												0x8CE1
#define GL_COLOR_ATTACHMENT2												0x8CE2
#define GL_COLOR_ATTACHMENT3												0x8CE3
#define GL_COLOR_ATTACHMENT4												0x8CE4
#define GL_COLOR_ATTACHMENT5												0x8CE5
#define GL_COLOR_ATTACHMENT6												0x8CE6
#define GL_COLOR_ATTACHMENT7												0x8CE7
#define GL_COLOR_ATTACHMENT8												0x8CE8
#define GL_COLOR_ATTACHMENT9												0x8CE9
#define GL_COLOR_ATTACHMENT10												0x8CEA
#define GL_COLOR_ATTACHMENT11												0x8CEB
#define GL_COLOR_ATTACHMENT12												0x8CEC
#define GL_COLOR_ATTACHMENT13												0x8CED
#define GL_COLOR_ATTACHMENT14												0x8CEE
#define GL_COLOR_ATTACHMENT15												0x8CEF
#define GL_DEPTH_ATTACHMENT													0x8D00
#define GL_STENCIL_ATTACHMENT												0x8D20
#define GL_FRAMEBUFFER														0x8D40
#define GL_RENDERBUFFER														0x8D41
#define GL_RENDERBUFFER_WIDTH												0x8D42
#define GL_RENDERBUFFER_HEIGHT												0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT										0x8D44
#define GL_STENCIL_INDEX1													0x8D46
#define GL_STENCIL_INDEX4													0x8D47
#define GL_STENCIL_INDEX8													0x8D48
#define GL_STENCIL_INDEX16													0x8D49
#define GL_RENDERBUFFER_RED_SIZE											0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE											0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE											0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE											0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE											0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE										0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE								0x8D56
#define GL_MAX_SAMPLES														0x8D57

/*
	GL_ARB_framebuffer_sRGB
*/
#define GL_FRAMEBUFFER_SRGB													0x8DB9

/*
	GL_ARB_geometry_shader4
*/
#define GL_LINES_ADJACENCY_ARB												0xA
#define GL_LINE_STRIP_ADJACENCY_ARB											0xB
#define GL_TRIANGLES_ADJACENCY_ARB											0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB										0xD
#define GL_PROGRAM_POINT_SIZE_ARB											0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB								0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER								0x8CD4
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB								0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB							0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB							0x8DA9
#define GL_GEOMETRY_SHADER_ARB												0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB										0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB											0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB											0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB								0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB								0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB								0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB									0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB							0x8DE1

/*
	GL_ARB_get_program_binary
*/
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT									0x8257
#define GL_PROGRAM_BINARY_LENGTH											0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS										0x87FE
#define GL_PROGRAM_BINARY_FORMATS											0x87FF

/*
	GL_ARB_gl_spirv
*/
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB									0x9551
#define GL_SPIR_V_BINARY_ARB												0x9552

/*
	GL_ARB_gpu_shader5
*/
#define GL_GEOMETRY_SHADER_INVOCATIONS										0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS									0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET								0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET								0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS								0x8E5D
#define GL_MAX_VERTEX_STREAMS												0x8E71

/*
	GL_ARB_gpu_shader_fp64
*/
#define GL_DOUBLE_MAT2														0x8F46
#define GL_DOUBLE_MAT3														0x8F47
#define GL_DOUBLE_MAT4														0x8F48
#define GL_DOUBLE_MAT2x3													0x8F49
#define GL_DOUBLE_MAT2x4													0x8F4A
#define GL_DOUBLE_MAT3x2													0x8F4B
#define GL_DOUBLE_MAT3x4													0x8F4C
#define GL_DOUBLE_MAT4x2													0x8F4D
#define GL_DOUBLE_MAT4x3													0x8F4E
#define GL_DOUBLE_VEC2														0x8FFC
#define GL_DOUBLE_VEC3														0x8FFD
#define GL_DOUBLE_VEC4														0x8FFE

/*
	GL_ARB_gpu_shader_int64
*/
#define GL_INT64_ARB														0x140E
#define GL_UNSIGNED_INT64_ARB												0x140F
#define GL_INT64_VEC2_ARB													0x8FE9
#define GL_INT64_VEC3_ARB													0x8FEA
#define GL_INT64_VEC4_ARB													0x8FEB
#define GL_UNSIGNED_INT64_VEC2_ARB											0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB											0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB											0x8FF7

/*
	GL_ARB_half_float_pixel
*/
#define GL_HALF_FLOAT_ARB													0x140B

/*
	GL_ARB_half_float_vertex
*/
#define GL_HALF_FLOAT														0x140B

/*
	GL_ARB_imaging
*/
#define GL_CONSTANT_COLOR													0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR											0x8002
#define GL_CONSTANT_ALPHA													0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA											0x8004
#define GL_BLEND_COLOR														0x8005
#define GL_FUNC_ADD															0x8006
#define GL_MIN																0x8007
#define GL_MAX																0x8008
#define GL_BLEND_EQUATION													0x8009
#define GL_FUNC_SUBTRACT													0x800A
#define GL_FUNC_REVERSE_SUBTRACT											0x800B
#define GL_CONVOLUTION_1D													0x8010
#define GL_CONVOLUTION_2D													0x8011
#define GL_SEPARABLE_2D														0x8012
#define GL_CONVOLUTION_BORDER_MODE											0x8013
#define GL_CONVOLUTION_FILTER_SCALE											0x8014
#define GL_CONVOLUTION_FILTER_BIAS											0x8015
#define GL_REDUCE															0x8016
#define GL_CONVOLUTION_FORMAT												0x8017
#define GL_CONVOLUTION_WIDTH												0x8018
#define GL_CONVOLUTION_HEIGHT												0x8019
#define GL_MAX_CONVOLUTION_WIDTH											0x801A
#define GL_MAX_CONVOLUTION_HEIGHT											0x801B
#define GL_POST_CONVOLUTION_RED_SCALE										0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE										0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE										0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE										0x801F
#define GL_POST_CONVOLUTION_RED_BIAS										0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS										0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS										0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS										0x8023
#define GL_HISTOGRAM														0x8024
#define GL_PROXY_HISTOGRAM													0x8025
#define GL_HISTOGRAM_WIDTH													0x8026
#define GL_HISTOGRAM_FORMAT													0x8027
#define GL_HISTOGRAM_RED_SIZE												0x8028
#define GL_HISTOGRAM_GREEN_SIZE												0x8029
#define GL_HISTOGRAM_BLUE_SIZE												0x802A
#define GL_HISTOGRAM_ALPHA_SIZE												0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE											0x802C
#define GL_HISTOGRAM_SINK													0x802D
#define GL_MINMAX															0x802E
#define GL_MINMAX_FORMAT													0x802F
#define GL_MINMAX_SINK														0x8030
#define GL_TABLE_TOO_LARGE													0x8031
#define GL_COLOR_MATRIX														0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH											0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH										0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE										0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE									0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE										0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE									0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS										0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS										0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS										0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS										0x80BB
#define GL_COLOR_TABLE														0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE										0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE									0x80D2
#define GL_PROXY_COLOR_TABLE												0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE								0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE								0x80D5
#define GL_COLOR_TABLE_SCALE												0x80D6
#define GL_COLOR_TABLE_BIAS													0x80D7
#define GL_COLOR_TABLE_FORMAT												0x80D8
#define GL_COLOR_TABLE_WIDTH												0x80D9
#define GL_COLOR_TABLE_RED_SIZE												0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE											0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE											0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE											0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE										0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE										0x80DF
#define GL_IGNORE_BORDER													0x8150
#define GL_CONSTANT_BORDER													0x8151
#define GL_WRAP_BORDER														0x8152
#define GL_REPLICATE_BORDER													0x8153
#define GL_CONVOLUTION_BORDER_COLOR											0x8154

/*
	GL_ARB_indirect_parameters
*/
#define GL_PARAMETER_BUFFER_ARB												0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB										0x80EF

/*
	GL_ARB_instanced_arrays
*/
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB									0x88FE

/*
	GL_ARB_internalformat_query
*/
#define GL_NUM_SAMPLE_COUNTS												0x9380

/*
	GL_ARB_internalformat_query2
*/
#define GL_INTERNALFORMAT_SUPPORTED											0x826F
#define GL_INTERNALFORMAT_PREFERRED											0x8270
#define GL_INTERNALFORMAT_RED_SIZE											0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE										0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE											0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE										0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE										0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE										0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE										0x8277
#define GL_INTERNALFORMAT_RED_TYPE											0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE										0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE											0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE										0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE										0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE										0x827D
#define GL_MAX_WIDTH														0x827E
#define GL_MAX_HEIGHT														0x827F
#define GL_MAX_DEPTH														0x8280
#define GL_MAX_LAYERS														0x8281
#define GL_MAX_COMBINED_DIMENSIONS											0x8282
#define GL_COLOR_COMPONENTS													0x8283
#define GL_DEPTH_COMPONENTS													0x8284
#define GL_STENCIL_COMPONENTS												0x8285
#define GL_COLOR_RENDERABLE													0x8286
#define GL_DEPTH_RENDERABLE													0x8287
#define GL_STENCIL_RENDERABLE												0x8288
#define GL_FRAMEBUFFER_RENDERABLE											0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED									0x828A
#define GL_FRAMEBUFFER_BLEND												0x828B
#define GL_READ_PIXELS														0x828C
#define GL_READ_PIXELS_FORMAT												0x828D
#define GL_READ_PIXELS_TYPE													0x828E
#define GL_TEXTURE_IMAGE_FORMAT												0x828F
#define GL_TEXTURE_IMAGE_TYPE												0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT											0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE											0x8292
#define GL_MIPMAP															0x8293
#define GL_MANUAL_GENERATE_MIPMAP											0x8294
#define GL_AUTO_GENERATE_MIPMAP												0x8295
#define GL_COLOR_ENCODING													0x8296
#define GL_SRGB_READ														0x8297
#define GL_SRGB_WRITE														0x8298
#define GL_SRGB_DECODE_ARB													0x8299
#define GL_FILTER															0x829A
#define GL_VERTEX_TEXTURE													0x829B
#define GL_TESS_CONTROL_TEXTURE												0x829C
#define GL_TESS_EVALUATION_TEXTURE											0x829D
#define GL_GEOMETRY_TEXTURE													0x829E
#define GL_FRAGMENT_TEXTURE													0x829F
#define GL_COMPUTE_TEXTURE													0x82A0
#define GL_TEXTURE_SHADOW													0x82A1
#define GL_TEXTURE_GATHER													0x82A2
#define GL_TEXTURE_GATHER_SHADOW											0x82A3
#define GL_SHADER_IMAGE_LOAD												0x82A4
#define GL_SHADER_IMAGE_STORE												0x82A5
#define GL_SHADER_IMAGE_ATOMIC												0x82A6
#define GL_IMAGE_TEXEL_SIZE													0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS										0x82A8
#define GL_IMAGE_PIXEL_FORMAT												0x82A9
#define GL_IMAGE_PIXEL_TYPE													0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST								0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST							0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE								0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE							0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH									0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT									0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE									0x82B3
#define GL_CLEAR_BUFFER														0x82B4
#define GL_TEXTURE_VIEW														0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS											0x82B6
#define GL_FULL_SUPPORT														0x82B7
#define GL_CAVEAT_SUPPORT													0x82B8
#define GL_IMAGE_CLASS_4_X_32												0x82B9
#define GL_IMAGE_CLASS_2_X_32												0x82BA
#define GL_IMAGE_CLASS_1_X_32												0x82BB
#define GL_IMAGE_CLASS_4_X_16												0x82BC
#define GL_IMAGE_CLASS_2_X_16												0x82BD
#define GL_IMAGE_CLASS_1_X_16												0x82BE
#define GL_IMAGE_CLASS_4_X_8												0x82BF
#define GL_IMAGE_CLASS_2_X_8												0x82C0
#define GL_IMAGE_CLASS_1_X_8												0x82C1
#define GL_IMAGE_CLASS_11_11_10												0x82C2
#define GL_IMAGE_CLASS_10_10_10_2											0x82C3
#define GL_VIEW_CLASS_128_BITS												0x82C4
#define GL_VIEW_CLASS_96_BITS												0x82C5
#define GL_VIEW_CLASS_64_BITS												0x82C6
#define GL_VIEW_CLASS_48_BITS												0x82C7
#define GL_VIEW_CLASS_32_BITS												0x82C8
#define GL_VIEW_CLASS_24_BITS												0x82C9
#define GL_VIEW_CLASS_16_BITS												0x82CA
#define GL_VIEW_CLASS_8_BITS												0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB											0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA										0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA										0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA										0x82CF
#define GL_VIEW_CLASS_RGTC1_RED												0x82D0
#define GL_VIEW_CLASS_RGTC2_RG												0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM											0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT											0x82D3

/*
	GL_ARB_map_buffer_alignment
*/
#define GL_MIN_MAP_BUFFER_ALIGNMENT											0x90BC

/*
	GL_ARB_map_buffer_range
*/
#define GL_MAP_READ_BIT														0x0001
#define GL_MAP_WRITE_BIT													0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT											0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT										0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT											0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT											0x0020

/*
	GL_ARB_matrix_palette
*/
#define GL_MATRIX_PALETTE_ARB												0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB								0x8841
#define GL_MAX_PALETTE_MATRICES_ARB											0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB										0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB											0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB											0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB										0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB										0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB									0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB									0x8849

/*
	GL_ARB_multisample
*/
#define GL_MULTISAMPLE_ARB													0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB										0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB											0x809F
#define GL_SAMPLE_COVERAGE_ARB												0x80A0
#define GL_SAMPLE_BUFFERS_ARB												0x80A8
#define GL_SAMPLES_ARB														0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB										0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB										0x80AB
#define GL_MULTISAMPLE_BIT_ARB												0x20000000

/*
	GL_ARB_multitexture
*/
#define GL_TEXTURE0_ARB														0x84C0
#define GL_TEXTURE1_ARB														0x84C1
#define GL_TEXTURE2_ARB														0x84C2
#define GL_TEXTURE3_ARB														0x84C3
#define GL_TEXTURE4_ARB														0x84C4
#define GL_TEXTURE5_ARB														0x84C5
#define GL_TEXTURE6_ARB														0x84C6
#define GL_TEXTURE7_ARB														0x84C7
#define GL_TEXTURE8_ARB														0x84C8
#define GL_TEXTURE9_ARB														0x84C9
#define GL_TEXTURE10_ARB													0x84CA
#define GL_TEXTURE11_ARB													0x84CB
#define GL_TEXTURE12_ARB													0x84CC
#define GL_TEXTURE13_ARB													0x84CD
#define GL_TEXTURE14_ARB													0x84CE
#define GL_TEXTURE15_ARB													0x84CF
#define GL_TEXTURE16_ARB													0x84D0
#define GL_TEXTURE17_ARB													0x84D1
#define GL_TEXTURE18_ARB													0x84D2
#define GL_TEXTURE19_ARB													0x84D3
#define GL_TEXTURE20_ARB													0x84D4
#define GL_TEXTURE21_ARB													0x84D5
#define GL_TEXTURE22_ARB													0x84D6
#define GL_TEXTURE23_ARB													0x84D7
#define GL_TEXTURE24_ARB													0x84D8
#define GL_TEXTURE25_ARB													0x84D9
#define GL_TEXTURE26_ARB													0x84DA
#define GL_TEXTURE27_ARB													0x84DB
#define GL_TEXTURE28_ARB													0x84DC
#define GL_TEXTURE29_ARB													0x84DD
#define GL_TEXTURE30_ARB													0x84DE
#define GL_TEXTURE31_ARB													0x84DF
#define GL_ACTIVE_TEXTURE_ARB												0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB										0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB											0x84E2

/*
	GL_ARB_occlusion_query
*/
#define GL_QUERY_COUNTER_BITS_ARB											0x8864
#define GL_CURRENT_QUERY_ARB												0x8865
#define GL_QUERY_RESULT_ARB													0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB										0x8867
#define GL_SAMPLES_PASSED_ARB												0x8914

/*
	GL_ARB_occlusion_query2
*/
#define GL_ANY_SAMPLES_PASSED												0x8C2F

/*
	GL_ARB_parallel_shader_compile
*/
#define GL_MAX_SHADER_COMPILER_THREADS_ARB									0x91B0
#define GL_COMPLETION_STATUS_ARB											0x91B1

/*
	GL_ARB_pipeline_statistics_query
*/
#define GL_VERTICES_SUBMITTED_ARB											0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB											0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB									0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB									0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB							0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB							0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB									0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB									0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB									0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB									0x82F7
#define GL_GEOMETRY_SHADER_INVOCATIONS										0x887F

/*
	GL_ARB_pixel_buffer_object
*/
#define GL_PIXEL_PACK_BUFFER_ARB											0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB											0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB									0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB									0x88EF

/*
	GL_ARB_point_parameters
*/
#define GL_POINT_SIZE_MIN_ARB												0x8126
#define GL_POINT_SIZE_MAX_ARB												0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB									0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB									0x8129

/*
	GL_ARB_point_sprite
*/
#define GL_POINT_SPRITE_ARB													0x8861
#define GL_COORD_REPLACE_ARB												0x8862

/*
	GL_ARB_polygon_offset_clamp
*/
#define GL_POLYGON_OFFSET_CLAMP												0x8E1B

/*
	GL_ARB_program_interface_query
*/
#define GL_UNIFORM															0x92E1
#define GL_UNIFORM_BLOCK													0x92E2
#define GL_PROGRAM_INPUT													0x92E3
#define GL_PROGRAM_OUTPUT													0x92E4
#define GL_BUFFER_VARIABLE													0x92E5
#define GL_SHADER_STORAGE_BLOCK												0x92E6
#define GL_IS_PER_PATCH														0x92E7
#define GL_VERTEX_SUBROUTINE												0x92E8
#define GL_TESS_CONTROL_SUBROUTINE											0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE										0x92EA
#define GL_GEOMETRY_SUBROUTINE												0x92EB
#define GL_FRAGMENT_SUBROUTINE												0x92EC
#define GL_COMPUTE_SUBROUTINE												0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM										0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM									0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM								0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM										0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM										0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM										0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING										0x92F4
#define GL_ACTIVE_RESOURCES													0x92F5
#define GL_MAX_NAME_LENGTH													0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES											0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES									0x92F8
#define GL_NAME_LENGTH														0x92F9
#define GL_TYPE																0x92FA
#define GL_ARRAY_SIZE														0x92FB
#define GL_OFFSET															0x92FC
#define GL_BLOCK_INDEX														0x92FD
#define GL_ARRAY_STRIDE														0x92FE
#define GL_MATRIX_STRIDE													0x92FF
#define GL_IS_ROW_MAJOR														0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX										0x9301
#define GL_BUFFER_BINDING													0x9302
#define GL_BUFFER_DATA_SIZE													0x9303
#define GL_NUM_ACTIVE_VARIABLES												0x9304
#define GL_ACTIVE_VARIABLES													0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER										0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER								0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER								0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER									0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER									0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER										0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE												0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE											0x930D
#define GL_LOCATION															0x930E
#define GL_LOCATION_INDEX													0x930F

/*
	GL_ARB_provoking_vertex
*/
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION							0x8E4C
#define GL_FIRST_VERTEX_CONVENTION											0x8E4D
#define GL_LAST_VERTEX_CONVENTION											0x8E4E
#define GL_PROVOKING_VERTEX													0x8E4F

/*
	GL_ARB_query_buffer_object
*/
#define GL_QUERY_BUFFER_BARRIER_BIT											0x00008000
#define GL_QUERY_BUFFER														0x9192
#define GL_QUERY_BUFFER_BINDING												0x9193
#define GL_QUERY_RESULT_NO_WAIT												0x9194

/*
	GL_ARB_robustness
*/
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB								0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB										0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB											0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB										0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB										0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB									0x8256
#define GL_NO_RESET_NOTIFICATION_ARB										0x8261

/*
	GL_ARB_sample_locations
*/
#define GL_SAMPLE_LOCATION_ARB												0x8E50
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB								0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB								0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB							0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB						0x9340
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB									0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB					0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB						0x9343

/*
	GL_ARB_sample_shading
*/
#define GL_SAMPLE_SHADING_ARB												0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB										0x8C37

/*
	GL_ARB_sampler_objects
*/
#define GL_SAMPLER_BINDING													0x8919

/*
	GL_ARB_seamless_cube_map
*/
#define GL_TEXTURE_CUBE_MAP_SEAMLESS										0x884F

/*
	GL_ARB_seamless_cubemap_per_texture
*/
#define GL_TEXTURE_CUBE_MAP_SEAMLESS										0x884F

/*
	GL_ARB_separate_shader_objects
*/
#define GL_VERTEX_SHADER_BIT												0x00000001
#define GL_FRAGMENT_SHADER_BIT												0x00000002
#define GL_GEOMETRY_SHADER_BIT												0x00000004
#define GL_TESS_CONTROL_SHADER_BIT											0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT										0x00000010
#define GL_PROGRAM_SEPARABLE												0x8258
#define GL_ACTIVE_PROGRAM													0x8259
#define GL_PROGRAM_PIPELINE_BINDING											0x825A
#define GL_ALL_SHADER_BITS													0xFFFFFFFF

/*
	GL_ARB_shader_atomic_counters
*/
#define GL_ATOMIC_COUNTER_BUFFER											0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING									0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START										0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE										0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE									0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS						0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES				0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER				0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER			0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER		0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER				0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER				0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS								0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS							0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS						0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS								0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS								0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS								0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS										0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS									0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS								0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS										0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS										0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS										0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE									0x92D8
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS									0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX								0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER										0x92DB
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS								0x92DC

/*
	GL_ARB_shader_image_load_store
*/
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT									0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT										0x00000002
#define GL_UNIFORM_BARRIER_BIT												0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT										0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT									0x00000020
#define GL_COMMAND_BARRIER_BIT												0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT											0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT										0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT										0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT											0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT									0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT										0x00001000
#define GL_MAX_IMAGE_UNITS													0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS					0x8F39
#define GL_IMAGE_BINDING_NAME												0x8F3A
#define GL_IMAGE_BINDING_LEVEL												0x8F3B
#define GL_IMAGE_BINDING_LAYERED											0x8F3C
#define GL_IMAGE_BINDING_LAYER												0x8F3D
#define GL_IMAGE_BINDING_ACCESS												0x8F3E
#define GL_IMAGE_1D															0x904C
#define GL_IMAGE_2D															0x904D
#define GL_IMAGE_3D															0x904E
#define GL_IMAGE_2D_RECT													0x904F
#define GL_IMAGE_CUBE														0x9050
#define GL_IMAGE_BUFFER														0x9051
#define GL_IMAGE_1D_ARRAY													0x9052
#define GL_IMAGE_2D_ARRAY													0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY												0x9054
#define GL_IMAGE_2D_MULTISAMPLE												0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY										0x9056
#define GL_INT_IMAGE_1D														0x9057
#define GL_INT_IMAGE_2D														0x9058
#define GL_INT_IMAGE_3D														0x9059
#define GL_INT_IMAGE_2D_RECT												0x905A
#define GL_INT_IMAGE_CUBE													0x905B
#define GL_INT_IMAGE_BUFFER													0x905C
#define GL_INT_IMAGE_1D_ARRAY												0x905D
#define GL_INT_IMAGE_2D_ARRAY												0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY											0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE											0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY									0x9061
#define GL_UNSIGNED_INT_IMAGE_1D											0x9062
#define GL_UNSIGNED_INT_IMAGE_2D											0x9063
#define GL_UNSIGNED_INT_IMAGE_3D											0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT										0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE											0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER										0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY										0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY										0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY								0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE								0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY							0x906C
#define GL_MAX_IMAGE_SAMPLES												0x906D
#define GL_IMAGE_BINDING_FORMAT												0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE									0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE								0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS								0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS										0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS									0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS								0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS										0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS										0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS										0x90CF
#define GL_ALL_BARRIER_BITS													0xFFFFFFFF

/*
	GL_ARB_shader_objects
*/
#define GL_PROGRAM_OBJECT_ARB												0x8B40
#define GL_SHADER_OBJECT_ARB												0x8B48
#define GL_OBJECT_TYPE_ARB													0x8B4E
#define GL_OBJECT_SUBTYPE_ARB												0x8B4F
#define GL_FLOAT_VEC2_ARB													0x8B50
#define GL_FLOAT_VEC3_ARB													0x8B51
#define GL_FLOAT_VEC4_ARB													0x8B52
#define GL_INT_VEC2_ARB														0x8B53
#define GL_INT_VEC3_ARB														0x8B54
#define GL_INT_VEC4_ARB														0x8B55
#define GL_BOOL_ARB															0x8B56
#define GL_BOOL_VEC2_ARB													0x8B57
#define GL_BOOL_VEC3_ARB													0x8B58
#define GL_BOOL_VEC4_ARB													0x8B59
#define GL_FLOAT_MAT2_ARB													0x8B5A
#define GL_FLOAT_MAT3_ARB													0x8B5B
#define GL_FLOAT_MAT4_ARB													0x8B5C
#define GL_SAMPLER_1D_ARB													0x8B5D
#define GL_SAMPLER_2D_ARB													0x8B5E
#define GL_SAMPLER_3D_ARB													0x8B5F
#define GL_SAMPLER_CUBE_ARB													0x8B60
#define GL_SAMPLER_1D_SHADOW_ARB											0x8B61
#define GL_SAMPLER_2D_SHADOW_ARB											0x8B62
#define GL_SAMPLER_2D_RECT_ARB												0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB										0x8B64
#define GL_OBJECT_DELETE_STATUS_ARB											0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB										0x8B81
#define GL_OBJECT_LINK_STATUS_ARB											0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB										0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB										0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB										0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB										0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB								0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB									0x8B88

/*
	GL_ARB_shader_storage_buffer_object
*/
#define GL_SHADER_STORAGE_BARRIER_BIT										0x2000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES								0x8F39
#define GL_SHADER_STORAGE_BUFFER											0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING									0x90D3
#define GL_SHADER_STORAGE_BUFFER_START										0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE										0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS									0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS								0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS							0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS						0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS								0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS								0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS								0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS								0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE									0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT							0x90DF

/*
	GL_ARB_shader_subroutine
*/
#define GL_ACTIVE_SUBROUTINES												0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS										0x8DE6
#define GL_MAX_SUBROUTINES													0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS									0x8DE8
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS								0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH										0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH								0x8E49
#define GL_NUM_COMPATIBLE_SUBROUTINES										0x8E4A
#define GL_COMPATIBLE_SUBROUTINES											0x8E4B

/*
	GL_ARB_shading_language_100
*/
#define GL_SHADING_LANGUAGE_VERSION_ARB										0x8B8C

/*
	GL_ARB_shading_language_include
*/
#define GL_SHADER_INCLUDE_ARB												0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB											0x8DE9
#define GL_NAMED_STRING_TYPE_ARB											0x8DEA

/*
	GL_ARB_shadow
*/
#define GL_TEXTURE_COMPARE_MODE_ARB											0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB											0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB											0x884E

/*
	GL_ARB_shadow_ambient
*/
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB									0x80BF

/*
	GL_ARB_sparse_buffer
*/
#define GL_SPARSE_STORAGE_BIT_ARB											0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB										0x82F8

/*
	GL_ARB_sparse_texture
*/
#define GL_VIRTUAL_PAGE_SIZE_X_ARB											0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB											0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB											0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB										0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB									0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB								0x919A
#define GL_TEXTURE_SPARSE_ARB												0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB										0x91A7
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB										0x91A8
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB						0x91A9
#define GL_NUM_SPARSE_LEVELS_ARB											0x91AA

/*
	GL_ARB_spirv_extensions
*/
#define GL_SPIR_V_EXTENSIONS												0x9553
#define GL_NUM_SPIR_V_EXTENSIONS											0x9554

/*
	GL_ARB_stencil_texturing
*/
#define GL_DEPTH_STENCIL_TEXTURE_MODE										0x90EA

/*
	GL_ARB_sync
*/
#define GL_SYNC_FLUSH_COMMANDS_BIT											0x00000001
#define GL_MAX_SERVER_WAIT_TIMEOUT											0x9111
#define GL_OBJECT_TYPE														0x9112
#define GL_SYNC_CONDITION													0x9113
#define GL_SYNC_STATUS														0x9114
#define GL_SYNC_FLAGS														0x9115
#define GL_SYNC_FENCE														0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE										0x9117
#define GL_UNSIGNALED														0x9118
#define GL_SIGNALED															0x9119
#define GL_ALREADY_SIGNALED													0x911A
#define GL_TIMEOUT_EXPIRED													0x911B
#define GL_CONDITION_SATISFIED												0x911C
#define GL_WAIT_FAILED														0x911D
#define GL_TIMEOUT_IGNORED													0xFFFFFFFFFFFFFFFFull

/*
	GL_ARB_tessellation_shader
*/
#define GL_PATCHES															0xE
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER					0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER				0x84F1
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS								0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS								0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS						0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS					0x8E1F
#define GL_PATCH_VERTICES													0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL										0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL										0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES										0x8E75
#define GL_TESS_GEN_MODE													0x8E76
#define GL_TESS_GEN_SPACING													0x8E77
#define GL_TESS_GEN_VERTEX_ORDER											0x8E78
#define GL_TESS_GEN_POINT_MODE												0x8E79
#define GL_ISOLINES															0x8E7A
#define GL_FRACTIONAL_ODD													0x8E7B
#define GL_FRACTIONAL_EVEN													0x8E7C
#define GL_MAX_PATCH_VERTICES												0x8E7D
#define GL_MAX_TESS_GEN_LEVEL												0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS								0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS							0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS								0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS							0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS								0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS										0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS							0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS							0x8E86
#define GL_TESS_EVALUATION_SHADER											0x8E87
#define GL_TESS_CONTROL_SHADER												0x8E88
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS									0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS								0x8E8A

/*
	GL_ARB_texture_border_clamp
*/
#define GL_CLAMP_TO_BORDER_ARB												0x812D

/*
	GL_ARB_texture_buffer_object
*/
#define GL_TEXTURE_BUFFER_ARB												0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB										0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB										0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB							0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB										0x8C2E

/*
	GL_ARB_texture_buffer_range
*/
#define GL_TEXTURE_BUFFER_OFFSET											0x919D
#define GL_TEXTURE_BUFFER_SIZE												0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT									0x919F

/*
	GL_ARB_texture_compression
*/
#define GL_COMPRESSED_ALPHA_ARB												0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB											0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB									0x84EB
#define GL_COMPRESSED_INTENSITY_ARB											0x84EC
#define GL_COMPRESSED_RGB_ARB												0x84ED
#define GL_COMPRESSED_RGBA_ARB												0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB										0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB								0x86A0
#define GL_TEXTURE_COMPRESSED_ARB											0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB								0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB									0x86A3

/*
	GL_ARB_texture_compression_bptc
*/
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB									0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB								0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB								0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB							0x8E8F

/*
	GL_ARB_texture_compression_rgtc
*/
#define GL_COMPRESSED_RED_RGTC1												0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1										0x8DBC
#define GL_COMPRESSED_RG_RGTC2												0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2										0x8DBE

/*
	GL_ARB_texture_cube_map
*/
#define GL_NORMAL_MAP_ARB													0x8511
#define GL_REFLECTION_MAP_ARB												0x8512
#define GL_TEXTURE_CUBE_MAP_ARB												0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB										0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB									0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB									0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB									0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB									0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB									0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB									0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB										0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB									0x851C

/*
	GL_ARB_texture_cube_map_array
*/
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB										0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB								0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB									0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB										0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB								0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB									0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB							0x900F

/*
	GL_ARB_texture_env_combine
*/
#define GL_SUBTRACT_ARB														0x84E7
#define GL_COMBINE_ARB														0x8570
#define GL_COMBINE_RGB_ARB													0x8571
#define GL_COMBINE_ALPHA_ARB												0x8572
#define GL_RGB_SCALE_ARB													0x8573
#define GL_ADD_SIGNED_ARB													0x8574
#define GL_INTERPOLATE_ARB													0x8575
#define GL_CONSTANT_ARB														0x8576
#define GL_PRIMARY_COLOR_ARB												0x8577
#define GL_PREVIOUS_ARB														0x8578
#define GL_SOURCE0_RGB_ARB													0x8580
#define GL_SOURCE1_RGB_ARB													0x8581
#define GL_SOURCE2_RGB_ARB													0x8582
#define GL_SOURCE0_ALPHA_ARB												0x8588
#define GL_SOURCE1_ALPHA_ARB												0x8589
#define GL_SOURCE2_ALPHA_ARB												0x858A
#define GL_OPERAND0_RGB_ARB													0x8590
#define GL_OPERAND1_RGB_ARB													0x8591
#define GL_OPERAND2_RGB_ARB													0x8592
#define GL_OPERAND0_ALPHA_ARB												0x8598
#define GL_OPERAND1_ALPHA_ARB												0x8599
#define GL_OPERAND2_ALPHA_ARB												0x859A

/*
	GL_ARB_texture_env_dot3
*/
#define GL_DOT3_RGB_ARB														0x86AE
#define GL_DOT3_RGBA_ARB													0x86AF

/*
	GL_ARB_texture_filter_anisotropic
*/
#define GL_TEXTURE_MAX_ANISOTROPY											0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY										0x84FF

/*
	GL_ARB_texture_filter_minmax
*/
#define GL_TEXTURE_REDUCTION_MODE_ARB										0x9366
#define GL_WEIGHTED_AVERAGE_ARB												0x9367

/*
	GL_ARB_texture_float
*/
#define GL_RGBA32F_ARB														0x8814
#define GL_RGB32F_ARB														0x8815
#define GL_ALPHA32F_ARB														0x8816
#define GL_INTENSITY32F_ARB													0x8817
#define GL_LUMINANCE32F_ARB													0x8818
#define GL_LUMINANCE_ALPHA32F_ARB											0x8819
#define GL_RGBA16F_ARB														0x881A
#define GL_RGB16F_ARB														0x881B
#define GL_ALPHA16F_ARB														0x881C
#define GL_INTENSITY16F_ARB													0x881D
#define GL_LUMINANCE16F_ARB													0x881E
#define GL_LUMINANCE_ALPHA16F_ARB											0x881F
#define GL_TEXTURE_RED_TYPE_ARB												0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB											0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB											0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB											0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB										0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB										0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB											0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB											0x8C17

/*
	GL_ARB_texture_gather
*/
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB							0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB							0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB						0x8F9F

/*
	GL_ARB_texture_mirror_clamp_to_edge
*/
#define GL_MIRROR_CLAMP_TO_EDGE												0x8743

/*
	GL_ARB_texture_mirrored_repeat
*/
#define GL_MIRRORED_REPEAT_ARB												0x8370

/*
	GL_ARB_texture_multisample
*/
#define GL_SAMPLE_POSITION													0x8E50
#define GL_SAMPLE_MASK														0x8E51
#define GL_SAMPLE_MASK_VALUE												0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS											0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE											0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE										0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY										0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY								0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE									0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY								0x9105
#define GL_TEXTURE_SAMPLES													0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS									0x9107
#define GL_SAMPLER_2D_MULTISAMPLE											0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE										0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE								0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY										0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY									0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY						0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES										0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES										0x910F
#define GL_MAX_INTEGER_SAMPLES												0x9110

/*
	GL_ARB_texture_rectangle
*/
#define GL_TEXTURE_RECTANGLE_ARB											0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB									0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB										0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB									0x84F8
#define GL_SAMPLER_2D_RECT_ARB												0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB										0x8B64

/*
	GL_ARB_texture_rg
*/
#define GL_COMPRESSED_RED													0x8225
#define GL_COMPRESSED_RG													0x8226
#define GL_RG																0x8227
#define GL_RG_INTEGER														0x8228
#define GL_R8																0x8229
#define GL_R16																0x822A
#define GL_RG8																0x822B
#define GL_RG16																0x822C
#define GL_R16F																0x822D
#define GL_R32F																0x822E
#define GL_RG16F															0x822F
#define GL_RG32F															0x8230
#define GL_R8I																0x8231
#define GL_R8UI																0x8232
#define GL_R16I																0x8233
#define GL_R16UI															0x8234
#define GL_R32I																0x8235
#define GL_R32UI															0x8236
#define GL_RG8I																0x8237
#define GL_RG8UI															0x8238
#define GL_RG16I															0x8239
#define GL_RG16UI															0x823A
#define GL_RG32I															0x823B
#define GL_RG32UI															0x823C

/*
	GL_ARB_texture_rgb10_a2ui
*/
#define GL_RGB10_A2UI														0x906F

/*
	GL_ARB_texture_stencil8
*/
#define GL_STENCIL_INDEX													0x1901
#define GL_STENCIL_INDEX8													0x8D48

/*
	GL_ARB_texture_storage
*/
#define GL_TEXTURE_IMMUTABLE_FORMAT											0x912F

/*
	GL_ARB_texture_swizzle
*/
#define GL_TEXTURE_SWIZZLE_R												0x8E42
#define GL_TEXTURE_SWIZZLE_G												0x8E43
#define GL_TEXTURE_SWIZZLE_B												0x8E44
#define GL_TEXTURE_SWIZZLE_A												0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA												0x8E46

/*
	GL_ARB_texture_view
*/
#define GL_TEXTURE_VIEW_MIN_LEVEL											0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS											0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER											0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS											0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS											0x82DF

/*
	GL_ARB_timer_query
*/
#define GL_TIME_ELAPSED														0x88BF
#define GL_TIMESTAMP														0x8E28

/*
	GL_ARB_transform_feedback2
*/
#define GL_TRANSFORM_FEEDBACK												0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED									0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE									0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING										0x8E25

/*
	GL_ARB_transform_feedback3
*/
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS									0x8E70
#define GL_MAX_VERTEX_STREAMS												0x8E71

/*
	GL_ARB_transform_feedback_overflow_query
*/
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB									0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB							0x82ED

/*
	GL_ARB_transpose_matrix
*/
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB									0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB									0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB										0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB										0x84E6

/*
	GL_ARB_uniform_buffer_object
*/
#define GL_UNIFORM_BUFFER													0x8A11
#define GL_UNIFORM_BUFFER_BINDING											0x8A28
#define GL_UNIFORM_BUFFER_START												0x8A29
#define GL_UNIFORM_BUFFER_SIZE												0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS										0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS										0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS										0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS										0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS										0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE											0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS							0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS							0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS							0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT									0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH								0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS											0x8A36
#define GL_UNIFORM_TYPE														0x8A37
#define GL_UNIFORM_SIZE														0x8A38
#define GL_UNIFORM_NAME_LENGTH												0x8A39
#define GL_UNIFORM_BLOCK_INDEX												0x8A3A
#define GL_UNIFORM_OFFSET													0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE												0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE											0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR												0x8A3E
#define GL_UNIFORM_BLOCK_BINDING											0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE											0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH										0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS									0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES								0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER						0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER						0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER						0x8A46
#define GL_INVALID_INDEX													0xFFFFFFFFu

/*
	GL_ARB_vertex_array_bgra
*/
#define GL_BGRA																0x80E1

/*
	GL_ARB_vertex_array_object
*/
#define GL_VERTEX_ARRAY_BINDING												0x85B5

/*
	GL_ARB_vertex_attrib_binding
*/
#define GL_VERTEX_ATTRIB_BINDING											0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET									0x82D5
#define GL_VERTEX_BINDING_DIVISOR											0x82D6
#define GL_VERTEX_BINDING_OFFSET											0x82D7
#define GL_VERTEX_BINDING_STRIDE											0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET								0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS										0x82DA
#define GL_VERTEX_BINDING_BUFFER											0x8F4F

/*
	GL_ARB_vertex_blend
*/
#define GL_MODELVIEW0_ARB													0x1700
#define GL_MODELVIEW1_ARB													0x850A
#define GL_MAX_VERTEX_UNITS_ARB												0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB											0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB												0x86A6
#define GL_VERTEX_BLEND_ARB													0x86A7
#define GL_CURRENT_WEIGHT_ARB												0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB											0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB											0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB											0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB											0x86AC
#define GL_WEIGHT_ARRAY_ARB													0x86AD
#define GL_MODELVIEW2_ARB													0x8722
#define GL_MODELVIEW3_ARB													0x8723
#define GL_MODELVIEW4_ARB													0x8724
#define GL_MODELVIEW5_ARB													0x8725
#define GL_MODELVIEW6_ARB													0x8726
#define GL_MODELVIEW7_ARB													0x8727
#define GL_MODELVIEW8_ARB													0x8728
#define GL_MODELVIEW9_ARB													0x8729
#define GL_MODELVIEW10_ARB													0x872A
#define GL_MODELVIEW11_ARB													0x872B
#define GL_MODELVIEW12_ARB													0x872C
#define GL_MODELVIEW13_ARB													0x872D
#define GL_MODELVIEW14_ARB													0x872E
#define GL_MODELVIEW15_ARB													0x872F
#define GL_MODELVIEW16_ARB													0x8730
#define GL_MODELVIEW17_ARB													0x8731
#define GL_MODELVIEW18_ARB													0x8732
#define GL_MODELVIEW19_ARB													0x8733
#define GL_MODELVIEW20_ARB													0x8734
#define GL_MODELVIEW21_ARB													0x8735
#define GL_MODELVIEW22_ARB													0x8736
#define GL_MODELVIEW23_ARB													0x8737
#define GL_MODELVIEW24_ARB													0x8738
#define GL_MODELVIEW25_ARB													0x8739
#define GL_MODELVIEW26_ARB													0x873A
#define GL_MODELVIEW27_ARB													0x873B
#define GL_MODELVIEW28_ARB													0x873C
#define GL_MODELVIEW29_ARB													0x873D
#define GL_MODELVIEW30_ARB													0x873E
#define GL_MODELVIEW31_ARB													0x873F

/*
	GL_ARB_vertex_buffer_object
*/
#define GL_BUFFER_SIZE_ARB													0x8764
#define GL_BUFFER_USAGE_ARB													0x8765
#define GL_ARRAY_BUFFER_ARB													0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB											0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB											0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB									0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB									0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB									0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB									0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB									0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB							0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB								0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB							0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB							0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB									0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB							0x889F
#define GL_READ_ONLY_ARB													0x88B8
#define GL_WRITE_ONLY_ARB													0x88B9
#define GL_READ_WRITE_ARB													0x88BA
#define GL_BUFFER_ACCESS_ARB												0x88BB
#define GL_BUFFER_MAPPED_ARB												0x88BC
#define GL_BUFFER_MAP_POINTER_ARB											0x88BD
#define GL_STREAM_DRAW_ARB													0x88E0
#define GL_STREAM_READ_ARB													0x88E1
#define GL_STREAM_COPY_ARB													0x88E2
#define GL_STATIC_DRAW_ARB													0x88E4
#define GL_STATIC_READ_ARB													0x88E5
#define GL_STATIC_COPY_ARB													0x88E6
#define GL_DYNAMIC_DRAW_ARB													0x88E8
#define GL_DYNAMIC_READ_ARB													0x88E9
#define GL_DYNAMIC_COPY_ARB													0x88EA

/*
	GL_ARB_vertex_program
*/
#define GL_COLOR_SUM_ARB													0x8458
#define GL_VERTEX_PROGRAM_ARB												0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB									0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB										0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB									0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB										0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB										0x8626
#define GL_PROGRAM_LENGTH_ARB												0x8627
#define GL_PROGRAM_STRING_ARB												0x8628
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB								0x862E
#define GL_MAX_PROGRAM_MATRICES_ARB											0x862F
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB									0x8640
#define GL_CURRENT_MATRIX_ARB												0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB									0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB										0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB									0x8645
#define GL_PROGRAM_ERROR_POSITION_ARB										0x864B
#define GL_PROGRAM_BINDING_ARB												0x8677
#define GL_MAX_VERTEX_ATTRIBS_ARB											0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB								0x886A
#define GL_PROGRAM_ERROR_STRING_ARB											0x8874
#define GL_PROGRAM_FORMAT_ASCII_ARB											0x8875
#define GL_PROGRAM_FORMAT_ARB												0x8876
#define GL_PROGRAM_INSTRUCTIONS_ARB											0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB										0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB									0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB								0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB											0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB										0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB									0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB								0x88A7
#define GL_PROGRAM_PARAMETERS_ARB											0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB										0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB									0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB								0x88AB
#define GL_PROGRAM_ATTRIBS_ARB												0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB											0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB										0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB									0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB									0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB								0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB								0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB							0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB									0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB									0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB									0x88B6
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB										0x88B7
#define GL_MATRIX0_ARB														0x88C0
#define GL_MATRIX1_ARB														0x88C1
#define GL_MATRIX2_ARB														0x88C2
#define GL_MATRIX3_ARB														0x88C3
#define GL_MATRIX4_ARB														0x88C4
#define GL_MATRIX5_ARB														0x88C5
#define GL_MATRIX6_ARB														0x88C6
#define GL_MATRIX7_ARB														0x88C7
#define GL_MATRIX8_ARB														0x88C8
#define GL_MATRIX9_ARB														0x88C9
#define GL_MATRIX10_ARB														0x88CA
#define GL_MATRIX11_ARB														0x88CB
#define GL_MATRIX12_ARB														0x88CC
#define GL_MATRIX13_ARB														0x88CD
#define GL_MATRIX14_ARB														0x88CE
#define GL_MATRIX15_ARB														0x88CF
#define GL_MATRIX16_ARB														0x88D0
#define GL_MATRIX17_ARB														0x88D1
#define GL_MATRIX18_ARB														0x88D2
#define GL_MATRIX19_ARB														0x88D3
#define GL_MATRIX20_ARB														0x88D4
#define GL_MATRIX21_ARB														0x88D5
#define GL_MATRIX22_ARB														0x88D6
#define GL_MATRIX23_ARB														0x88D7
#define GL_MATRIX24_ARB														0x88D8
#define GL_MATRIX25_ARB														0x88D9
#define GL_MATRIX26_ARB														0x88DA
#define GL_MATRIX27_ARB														0x88DB
#define GL_MATRIX28_ARB														0x88DC
#define GL_MATRIX29_ARB														0x88DD
#define GL_MATRIX30_ARB														0x88DE
#define GL_MATRIX31_ARB														0x88DF

/*
	GL_ARB_vertex_shader
*/
#define GL_VERTEX_SHADER_ARB												0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB								0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB											0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB								0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB								0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB										0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB							0x8B8A

/*
	GL_ARB_vertex_type_10f_11f_11f_rev
*/
#define GL_UNSIGNED_INT_10F_11F_11F_REV										0x8C3B

/*
	GL_ARB_vertex_type_2_10_10_10_rev
*/
#define GL_UNSIGNED_INT_2_10_10_10_REV										0x8368
#define GL_INT_2_10_10_10_REV												0x8D9F

/*
	GL_ARB_viewport_array
*/
#define GL_DEPTH_RANGE														0x0B70
#define GL_VIEWPORT															0x0BA2
#define GL_SCISSOR_BOX														0x0C10
#define GL_SCISSOR_TEST														0x0C11
#define GL_MAX_VIEWPORTS													0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS											0x825C
#define GL_VIEWPORT_BOUNDS_RANGE											0x825D
#define GL_LAYER_PROVOKING_VERTEX											0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX									0x825F
#define GL_UNDEFINED_VERTEX													0x8260
#define GL_FIRST_VERTEX_CONVENTION											0x8E4D
#define GL_LAST_VERTEX_CONVENTION											0x8E4E
#define GL_PROVOKING_VERTEX													0x8E4F

/*
	GL_ARM_mali_program_binary
*/
#define GL_MALI_PROGRAM_BINARY_ARM											0x8F61

/*
	GL_ARM_mali_shader_binary
*/
#define GL_MALI_SHADER_BINARY_ARM											0x8F60

/*
	GL_ARM_rgba8
*/
#define GL_RGBA8_OES														0x8058

/*
	GL_ARM_shader_framebuffer_fetch
*/
#define GL_FETCH_PER_SAMPLE_ARM												0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM						0x8F66

/*
	GL_ATIX_point_sprites
*/
#define GL_TEXTURE_POINT_MODE_ATIX											0x60B0
#define GL_TEXTURE_POINT_ONE_COORD_ATIX										0x60B1
#define GL_TEXTURE_POINT_SPRITE_ATIX										0x60B2
#define GL_POINT_SPRITE_CULL_MODE_ATIX										0x60B3
#define GL_POINT_SPRITE_CULL_CENTER_ATIX									0x60B4
#define GL_POINT_SPRITE_CULL_CLIP_ATIX										0x60B5

/*
	GL_ATIX_texture_env_combine3
*/
#define GL_MODULATE_ADD_ATIX												0x8744
#define GL_MODULATE_SIGNED_ADD_ATIX											0x8745
#define GL_MODULATE_SUBTRACT_ATIX											0x8746

/*
	GL_ATIX_texture_env_route
*/
#define GL_SECONDARY_COLOR_ATIX												0x8747
#define GL_TEXTURE_OUTPUT_RGB_ATIX											0x8748
#define GL_TEXTURE_OUTPUT_ALPHA_ATIX										0x8749

/*
	GL_ATIX_vertex_shader_output_point_size
*/
#define GL_OUTPUT_POINT_SIZE_ATIX											0x610E

/*
	GL_ATI_draw_buffers
*/
#define GL_MAX_DRAW_BUFFERS_ATI												0x8824
#define GL_DRAW_BUFFER0_ATI													0x8825
#define GL_DRAW_BUFFER1_ATI													0x8826
#define GL_DRAW_BUFFER2_ATI													0x8827
#define GL_DRAW_BUFFER3_ATI													0x8828
#define GL_DRAW_BUFFER4_ATI													0x8829
#define GL_DRAW_BUFFER5_ATI													0x882A
#define GL_DRAW_BUFFER6_ATI													0x882B
#define GL_DRAW_BUFFER7_ATI													0x882C
#define GL_DRAW_BUFFER8_ATI													0x882D
#define GL_DRAW_BUFFER9_ATI													0x882E
#define GL_DRAW_BUFFER10_ATI												0x882F
#define GL_DRAW_BUFFER11_ATI												0x8830
#define GL_DRAW_BUFFER12_ATI												0x8831
#define GL_DRAW_BUFFER13_ATI												0x8832
#define GL_DRAW_BUFFER14_ATI												0x8833
#define GL_DRAW_BUFFER15_ATI												0x8834

/*
	GL_ATI_element_array
*/
#define GL_ELEMENT_ARRAY_ATI												0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI											0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI										0x876A

/*
	GL_ATI_envmap_bumpmap
*/
#define GL_BUMP_ROT_MATRIX_ATI												0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI											0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI											0x8777
#define GL_BUMP_TEX_UNITS_ATI												0x8778
#define GL_DUDV_ATI															0x8779
#define GL_DU8DV8_ATI														0x877A
#define GL_BUMP_ENVMAP_ATI													0x877B
#define GL_BUMP_TARGET_ATI													0x877C

/*
	GL_ATI_fragment_shader
*/
#define GL_2X_BIT_ATI														0x00000001
#define GL_RED_BIT_ATI														0x00000001
#define GL_4X_BIT_ATI														0x00000002
#define GL_COMP_BIT_ATI														0x00000002
#define GL_GREEN_BIT_ATI													0x00000002
#define GL_8X_BIT_ATI														0x00000004
#define GL_BLUE_BIT_ATI														0x00000004
#define GL_NEGATE_BIT_ATI													0x00000004
#define GL_BIAS_BIT_ATI														0x00000008
#define GL_HALF_BIT_ATI														0x00000008
#define GL_QUARTER_BIT_ATI													0x00000010
#define GL_EIGHTH_BIT_ATI													0x00000020
#define GL_SATURATE_BIT_ATI													0x00000040
#define GL_FRAGMENT_SHADER_ATI												0x8920
#define GL_REG_0_ATI														0x8921
#define GL_REG_1_ATI														0x8922
#define GL_REG_2_ATI														0x8923
#define GL_REG_3_ATI														0x8924
#define GL_REG_4_ATI														0x8925
#define GL_REG_5_ATI														0x8926
#define GL_CON_0_ATI														0x8941
#define GL_CON_1_ATI														0x8942
#define GL_CON_2_ATI														0x8943
#define GL_CON_3_ATI														0x8944
#define GL_CON_4_ATI														0x8945
#define GL_CON_5_ATI														0x8946
#define GL_CON_6_ATI														0x8947
#define GL_CON_7_ATI														0x8948
#define GL_MOV_ATI															0x8961
#define GL_ADD_ATI															0x8963
#define GL_MUL_ATI															0x8964
#define GL_SUB_ATI															0x8965
#define GL_DOT3_ATI															0x8966
#define GL_DOT4_ATI															0x8967
#define GL_MAD_ATI															0x8968
#define GL_LERP_ATI															0x8969
#define GL_CND_ATI															0x896A
#define GL_CND0_ATI															0x896B
#define GL_DOT2_ADD_ATI														0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI										0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI										0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI										0x896F
#define GL_NUM_PASSES_ATI													0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI									0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI										0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI							0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI										0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI											0x8975
#define GL_SWIZZLE_STR_ATI													0x8976
#define GL_SWIZZLE_STQ_ATI													0x8977
#define GL_SWIZZLE_STR_DR_ATI												0x8978
#define GL_SWIZZLE_STQ_DQ_ATI												0x8979
#define GL_SWIZZLE_STRQ_ATI													0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI												0x897B

/*
	GL_ATI_meminfo
*/
#define GL_VBO_FREE_MEMORY_ATI												0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI											0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI										0x87FD

/*
	GL_ATI_pn_triangles
*/
#define GL_PN_TRIANGLES_ATI													0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI							0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI										0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI										0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI								0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI								0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI								0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI								0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI							0x87F8

/*
	GL_ATI_separate_stencil
*/
#define GL_STENCIL_BACK_FUNC_ATI											0x8800
#define GL_STENCIL_BACK_FAIL_ATI											0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI									0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI									0x8803

/*
	GL_ATI_text_fragment_shader
*/
#define GL_TEXT_FRAGMENT_SHADER_ATI											0x8200

/*
	GL_ATI_texture_compression_3dc
*/
#define GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI								0x8837

/*
	GL_ATI_texture_env_combine3
*/
#define GL_MODULATE_ADD_ATI													0x8744
#define GL_MODULATE_SIGNED_ADD_ATI											0x8745
#define GL_MODULATE_SUBTRACT_ATI											0x8746

/*
	GL_ATI_texture_float
*/
#define GL_RGBA_FLOAT32_ATI													0x8814
#define GL_RGB_FLOAT32_ATI													0x8815
#define GL_ALPHA_FLOAT32_ATI												0x8816
#define GL_INTENSITY_FLOAT32_ATI											0x8817
#define GL_LUMINANCE_FLOAT32_ATI											0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI										0x8819
#define GL_RGBA_FLOAT16_ATI													0x881A
#define GL_RGB_FLOAT16_ATI													0x881B
#define GL_ALPHA_FLOAT16_ATI												0x881C
#define GL_INTENSITY_FLOAT16_ATI											0x881D
#define GL_LUMINANCE_FLOAT16_ATI											0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI										0x881F

/*
	GL_ATI_texture_mirror_once
*/
#define GL_MIRROR_CLAMP_ATI													0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI											0x8743

/*
	GL_ATI_vertex_array_object
*/
#define GL_STATIC_ATI														0x8760
#define GL_DYNAMIC_ATI														0x8761
#define GL_PRESERVE_ATI														0x8762
#define GL_DISCARD_ATI														0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI											0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI											0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI											0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI											0x8767

/*
	GL_ATI_vertex_streams
*/
#define GL_MAX_VERTEX_STREAMS_ATI											0x876B
#define GL_VERTEX_SOURCE_ATI												0x876C
#define GL_VERTEX_STREAM0_ATI												0x876D
#define GL_VERTEX_STREAM1_ATI												0x876E
#define GL_VERTEX_STREAM2_ATI												0x876F
#define GL_VERTEX_STREAM3_ATI												0x8770
#define GL_VERTEX_STREAM4_ATI												0x8771
#define GL_VERTEX_STREAM5_ATI												0x8772
#define GL_VERTEX_STREAM6_ATI												0x8773
#define GL_VERTEX_STREAM7_ATI												0x8774

/*
	GL_EGL_NV_robustness_video_memory_purge
*/
#define GL_EGL_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV						0x334C
#define GL_PURGED_CONTEXT_RESET_NV											0x92BB

/*
	GL_EXT_422_pixels
*/
#define GL_422_EXT															0x80CC
#define GL_422_REV_EXT														0x80CD
#define GL_422_AVERAGE_EXT													0x80CE
#define GL_422_REV_AVERAGE_EXT												0x80CF

/*
	GL_EXT_Cg_shader
*/
#define GL_CG_VERTEX_SHADER_EXT												0x890E
#define GL_CG_FRAGMENT_SHADER_EXT											0x890F

/*
	GL_EXT_YUV_target
*/
#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT										0x8BE7

/*
	GL_EXT_abgr
*/
#define GL_ABGR_EXT															0x8000

/*
	GL_EXT_bgra
*/
#define GL_BGR_EXT															0x80E0
#define GL_BGRA_EXT															0x80E1

/*
	GL_EXT_bindable_uniform
*/
#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT									0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT								0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT								0x8DE4
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT									0x8DED
#define GL_UNIFORM_BUFFER_EXT												0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT										0x8DEF

/*
	GL_EXT_blend_color
*/
#define GL_CONSTANT_COLOR_EXT												0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT										0x8002
#define GL_CONSTANT_ALPHA_EXT												0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT										0x8004
#define GL_BLEND_COLOR_EXT													0x8005

/*
	GL_EXT_blend_equation_separate
*/
#define GL_BLEND_EQUATION_RGB_EXT											0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT											0x883D

/*
	GL_EXT_blend_func_extended
*/
#define GL_SRC_ALPHA_SATURATE_EXT											0x0308
#define GL_SRC1_ALPHA_EXT													0x8589
#define GL_SRC1_COLOR_EXT													0x88F9
#define GL_ONE_MINUS_SRC1_COLOR_EXT											0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_EXT											0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT									0x88FC
#define GL_LOCATION_INDEX_EXT												0x930F

/*
	GL_EXT_blend_func_separate
*/
#define GL_BLEND_DST_RGB_EXT												0x80C8
#define GL_BLEND_SRC_RGB_EXT												0x80C9
#define GL_BLEND_DST_ALPHA_EXT												0x80CA
#define GL_BLEND_SRC_ALPHA_EXT												0x80CB

/*
	GL_EXT_blend_minmax
*/
#define GL_FUNC_ADD_EXT														0x8006
#define GL_MIN_EXT															0x8007
#define GL_MAX_EXT															0x8008
#define GL_BLEND_EQUATION_EXT												0x8009

/*
	GL_EXT_blend_subtract
*/
#define GL_FUNC_SUBTRACT_EXT												0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT										0x800B

/*
	GL_EXT_buffer_storage
*/
#define GL_MAP_READ_BIT														0x0001
#define GL_MAP_WRITE_BIT													0x0002
#define GL_MAP_PERSISTENT_BIT_EXT											0x0040
#define GL_MAP_COHERENT_BIT_EXT												0x0080
#define GL_DYNAMIC_STORAGE_BIT_EXT											0x0100
#define GL_CLIENT_STORAGE_BIT_EXT											0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT								0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT										0x821F
#define GL_BUFFER_STORAGE_FLAGS_EXT											0x8220

/*
	GL_EXT_clip_cull_distance
*/
#define GL_MAX_CLIP_DISTANCES_EXT											0x0D32
#define GL_CLIP_DISTANCE0_EXT												0x3000
#define GL_CLIP_DISTANCE1_EXT												0x3001
#define GL_CLIP_DISTANCE2_EXT												0x3002
#define GL_CLIP_DISTANCE3_EXT												0x3003
#define GL_CLIP_DISTANCE4_EXT												0x3004
#define GL_CLIP_DISTANCE5_EXT												0x3005
#define GL_CLIP_DISTANCE6_EXT												0x3006
#define GL_CLIP_DISTANCE7_EXT												0x3007
#define GL_MAX_CULL_DISTANCES_EXT											0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT							0x82FA

/*
	GL_EXT_clip_volume_hint
*/
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT									0x80F0

/*
	GL_EXT_cmyka
*/
#define GL_CMYK_EXT															0x800C
#define GL_CMYKA_EXT														0x800D
#define GL_PACK_CMYK_HINT_EXT												0x800E
#define GL_UNPACK_CMYK_HINT_EXT												0x800F

/*
	GL_EXT_color_buffer_half_float
*/
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT						0x8211
#define GL_R16F_EXT															0x822D
#define GL_RG16F_EXT														0x822F
#define GL_RGBA16F_EXT														0x881A
#define GL_RGB16F_EXT														0x881B
#define GL_UNSIGNED_NORMALIZED_EXT											0x8C17

/*
	GL_EXT_compiled_vertex_array
*/
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT										0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT										0x81A9

/*
	GL_EXT_convolution
*/
#define GL_CONVOLUTION_1D_EXT												0x8010
#define GL_CONVOLUTION_2D_EXT												0x8011
#define GL_SEPARABLE_2D_EXT													0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT										0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT										0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT										0x8015
#define GL_REDUCE_EXT														0x8016
#define GL_CONVOLUTION_FORMAT_EXT											0x8017
#define GL_CONVOLUTION_WIDTH_EXT											0x8018
#define GL_CONVOLUTION_HEIGHT_EXT											0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT										0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT										0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT									0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT									0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT									0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT									0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT									0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT									0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT									0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT									0x8023

/*
	GL_EXT_coordinate_frame
*/
#define GL_TANGENT_ARRAY_EXT												0x8439
#define GL_BINORMAL_ARRAY_EXT												0x843A
#define GL_CURRENT_TANGENT_EXT												0x843B
#define GL_CURRENT_BINORMAL_EXT												0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT											0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT											0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT											0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT										0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT										0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT										0x8443
#define GL_MAP1_TANGENT_EXT													0x8444
#define GL_MAP2_TANGENT_EXT													0x8445
#define GL_MAP1_BINORMAL_EXT												0x8446
#define GL_MAP2_BINORMAL_EXT												0x8447

/*
	GL_EXT_cull_vertex
*/
#define GL_CULL_VERTEX_EXT													0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT										0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT									0x81AC

/*
	GL_EXT_debug_label
*/
#define GL_PROGRAM_PIPELINE_OBJECT_EXT										0x8A4F
#define GL_PROGRAM_OBJECT_EXT												0x8B40
#define GL_SHADER_OBJECT_EXT												0x8B48
#define GL_BUFFER_OBJECT_EXT												0x9151
#define GL_QUERY_OBJECT_EXT													0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT											0x9154

/*
	GL_EXT_depth_bounds_test
*/
#define GL_DEPTH_BOUNDS_TEST_EXT											0x8890
#define GL_DEPTH_BOUNDS_EXT													0x8891

/*
	GL_EXT_direct_state_access
*/
#define GL_PROGRAM_MATRIX_EXT												0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT										0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT									0x8E2F

/*
	GL_EXT_discard_framebuffer
*/
#define GL_COLOR_EXT														0x1800
#define GL_DEPTH_EXT														0x1801
#define GL_STENCIL_EXT														0x1802

/*
	GL_EXT_draw_buffers
*/
#define GL_MAX_DRAW_BUFFERS_EXT												0x8824
#define GL_DRAW_BUFFER0_EXT													0x8825
#define GL_DRAW_BUFFER1_EXT													0x8826
#define GL_DRAW_BUFFER2_EXT													0x8827
#define GL_DRAW_BUFFER3_EXT													0x8828
#define GL_DRAW_BUFFER4_EXT													0x8829
#define GL_DRAW_BUFFER5_EXT													0x882A
#define GL_DRAW_BUFFER6_EXT													0x882B
#define GL_DRAW_BUFFER7_EXT													0x882C
#define GL_DRAW_BUFFER8_EXT													0x882D
#define GL_DRAW_BUFFER9_EXT													0x882E
#define GL_DRAW_BUFFER10_EXT												0x882F
#define GL_DRAW_BUFFER11_EXT												0x8830
#define GL_DRAW_BUFFER12_EXT												0x8831
#define GL_DRAW_BUFFER13_EXT												0x8832
#define GL_DRAW_BUFFER14_EXT												0x8833
#define GL_DRAW_BUFFER15_EXT												0x8834
#define GL_MAX_COLOR_ATTACHMENTS_EXT										0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT											0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT											0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT											0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT											0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT											0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT											0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT											0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT											0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT											0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT											0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT											0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT											0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT											0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT											0x8CED
#define GL_COLOR_ATTACHMENT14_EXT											0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT											0x8CEF

/*
	GL_EXT_draw_range_elements
*/
#define GL_MAX_ELEMENTS_VERTICES_EXT										0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT											0x80E9

/*
	GL_EXT_fog_coord
*/
#define GL_FOG_COORDINATE_SOURCE_EXT										0x8450
#define GL_FOG_COORDINATE_EXT												0x8451
#define GL_FRAGMENT_DEPTH_EXT												0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT										0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT									0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT									0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT									0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT											0x8457

/*
	GL_EXT_fragment_lighting
*/
#define GL_FRAGMENT_LIGHTING_EXT											0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_EXT										0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT									0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT							0x8403
#define GL_MAX_FRAGMENT_LIGHTS_EXT											0x8404
#define GL_MAX_ACTIVE_LIGHTS_EXT											0x8405
#define GL_CURRENT_RASTER_NORMAL_EXT										0x8406
#define GL_LIGHT_ENV_MODE_EXT												0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT							0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT								0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT									0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT					0x840B
#define GL_FRAGMENT_LIGHT0_EXT												0x840C
#define GL_FRAGMENT_LIGHT7_EXT												0x8413

/*
	GL_EXT_framebuffer_blit
*/
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT										0x8CA6
#define GL_READ_FRAMEBUFFER_EXT												0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT												0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING_EXT										0x8CAA

/*
	GL_EXT_framebuffer_multisample
*/
#define GL_RENDERBUFFER_SAMPLES_EXT											0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT							0x8D56
#define GL_MAX_SAMPLES_EXT													0x8D57

/*
	GL_EXT_framebuffer_multisample_blit_scaled
*/
#define GL_SCALED_RESOLVE_FASTEST_EXT										0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT										0x90BB

/*
	GL_EXT_framebuffer_object
*/
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT								0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT										0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT											0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT											0x8CA7
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT							0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT							0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT							0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT					0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT					0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT											0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT							0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT					0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT							0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT								0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT							0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT							0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT										0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT										0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT											0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT											0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT											0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT											0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT											0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT											0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT											0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT											0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT											0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT											0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT											0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT											0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT											0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT											0x8CED
#define GL_COLOR_ATTACHMENT14_EXT											0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT											0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT												0x8D00
#define GL_STENCIL_ATTACHMENT_EXT											0x8D20
#define GL_FRAMEBUFFER_EXT													0x8D40
#define GL_RENDERBUFFER_EXT													0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT											0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT											0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT									0x8D44
#define GL_STENCIL_INDEX1_EXT												0x8D46
#define GL_STENCIL_INDEX4_EXT												0x8D47
#define GL_STENCIL_INDEX8_EXT												0x8D48
#define GL_STENCIL_INDEX16_EXT												0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT										0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT										0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT										0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT										0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT										0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT									0x8D55

/*
	GL_EXT_framebuffer_sRGB
*/
#define GL_FRAMEBUFFER_SRGB_EXT												0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT										0x8DBA

/*
	GL_EXT_geometry_point_size
*/
#define GL_GEOMETRY_SHADER_BIT_EXT											0x00000004
#define GL_LINES_ADJACENCY_EXT												0xA
#define GL_LINE_STRIP_ADJACENCY_EXT											0xB
#define GL_TRIANGLES_ADJACENCY_EXT											0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT										0xD
#define GL_LAYER_PROVOKING_VERTEX_EXT										0x825E
#define GL_UNDEFINED_VERTEX_EXT												0x8260
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT									0x887F
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT									0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT									0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT									0x8918
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT									0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT						0x8A32
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT								0x8C29
#define GL_PRIMITIVES_GENERATED_EXT											0x8C87
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT								0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT							0x8DA8
#define GL_GEOMETRY_SHADER_EXT												0x8DD9
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT								0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT									0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT							0x8DE1
#define GL_FIRST_VERTEX_CONVENTION_EXT										0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT										0x8E4E
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT								0x8E5A
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT									0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT							0x90D7
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT								0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT								0x9124
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT							0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT									0x92D5
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT								0x9309
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT									0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT										0x9317

/*
	GL_EXT_geometry_shader
*/
#define GL_GEOMETRY_SHADER_BIT_EXT											0x00000004
#define GL_LINES_ADJACENCY_EXT												0xA
#define GL_LINE_STRIP_ADJACENCY_EXT											0xB
#define GL_TRIANGLES_ADJACENCY_EXT											0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT										0xD
#define GL_LAYER_PROVOKING_VERTEX_EXT										0x825E
#define GL_UNDEFINED_VERTEX_EXT												0x8260
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT									0x887F
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT									0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT									0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT									0x8918
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT									0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT						0x8A32
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT								0x8C29
#define GL_PRIMITIVES_GENERATED_EXT											0x8C87
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT								0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT							0x8DA8
#define GL_GEOMETRY_SHADER_EXT												0x8DD9
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT								0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT									0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT							0x8DE1
#define GL_FIRST_VERTEX_CONVENTION_EXT										0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT										0x8E4E
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT								0x8E5A
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT									0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT							0x90D7
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT								0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT								0x9124
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT							0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT									0x92D5
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT								0x9309
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT									0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT										0x9317

/*
	GL_EXT_geometry_shader4
*/
#define GL_LINES_ADJACENCY_EXT												0xA
#define GL_LINE_STRIP_ADJACENCY_EXT											0xB
#define GL_TRIANGLES_ADJACENCY_EXT											0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT										0xD
#define GL_PROGRAM_POINT_SIZE_EXT											0x8642
#define GL_MAX_VARYING_COMPONENTS_EXT										0x8B4B
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT								0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT							0x8CD4
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT								0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT							0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT							0x8DA9
#define GL_GEOMETRY_SHADER_EXT												0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_EXT										0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT											0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT											0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT								0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT								0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT								0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT									0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT							0x8DE1

/*
	GL_EXT_gpu_shader4
*/
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT									0x88FD
#define GL_SAMPLER_1D_ARRAY_EXT												0x8DC0
#define GL_SAMPLER_2D_ARRAY_EXT												0x8DC1
#define GL_SAMPLER_BUFFER_EXT												0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT										0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT										0x8DC4
#define GL_SAMPLER_CUBE_SHADOW_EXT											0x8DC5
#define GL_UNSIGNED_INT_VEC2_EXT											0x8DC6
#define GL_UNSIGNED_INT_VEC3_EXT											0x8DC7
#define GL_UNSIGNED_INT_VEC4_EXT											0x8DC8
#define GL_INT_SAMPLER_1D_EXT												0x8DC9
#define GL_INT_SAMPLER_2D_EXT												0x8DCA
#define GL_INT_SAMPLER_3D_EXT												0x8DCB
#define GL_INT_SAMPLER_CUBE_EXT												0x8DCC
#define GL_INT_SAMPLER_2D_RECT_EXT											0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY_EXT											0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY_EXT											0x8DCF
#define GL_INT_SAMPLER_BUFFER_EXT											0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT										0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT										0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT										0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT									0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT									0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT								0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT								0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT									0x8DD8

/*
	GL_EXT_histogram
*/
#define GL_HISTOGRAM_EXT													0x8024
#define GL_PROXY_HISTOGRAM_EXT												0x8025
#define GL_HISTOGRAM_WIDTH_EXT												0x8026
#define GL_HISTOGRAM_FORMAT_EXT												0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT											0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT											0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT											0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT											0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT										0x802C
#define GL_HISTOGRAM_SINK_EXT												0x802D
#define GL_MINMAX_EXT														0x802E
#define GL_MINMAX_FORMAT_EXT												0x802F
#define GL_MINMAX_SINK_EXT													0x8030

/*
	GL_EXT_instanced_arrays
*/
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT									0x88FE

/*
	GL_EXT_light_texture
*/
#define GL_FRAGMENT_MATERIAL_EXT											0x8349
#define GL_FRAGMENT_NORMAL_EXT												0x834A
#define GL_FRAGMENT_COLOR_EXT												0x834C
#define GL_ATTENUATION_EXT													0x834D
#define GL_SHADOW_ATTENUATION_EXT											0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT										0x834F
#define GL_TEXTURE_LIGHT_EXT												0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT										0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT									0x8352

/*
	GL_EXT_map_buffer_range
*/
#define GL_MAP_READ_BIT_EXT													0x0001
#define GL_MAP_WRITE_BIT_EXT												0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT										0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT									0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT										0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT										0x0020

/*
	GL_EXT_memory_object
*/
#define GL_UUID_SIZE_EXT													16
#define GL_TEXTURE_TILING_EXT												0x9580
#define GL_DEDICATED_MEMORY_OBJECT_EXT										0x9581
#define GL_NUM_TILING_TYPES_EXT												0x9582
#define GL_TILING_TYPES_EXT													0x9583
#define GL_OPTIMAL_TILING_EXT												0x9584
#define GL_LINEAR_TILING_EXT												0x9585
#define GL_LAYOUT_GENERAL_EXT												0x958D
#define GL_LAYOUT_COLOR_ATTACHMENT_EXT										0x958E
#define GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT								0x958F
#define GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT								0x9590
#define GL_LAYOUT_SHADER_READ_ONLY_EXT										0x9591
#define GL_LAYOUT_TRANSFER_SRC_EXT											0x9592
#define GL_LAYOUT_TRANSFER_DST_EXT											0x9593
#define GL_NUM_DEVICE_UUIDS_EXT												0x9596
#define GL_DEVICE_UUID_EXT													0x9597
#define GL_DRIVER_UUID_EXT													0x9598
#define GL_PROTECTED_MEMORY_OBJECT_EXT										0x959B

/*
	GL_EXT_memory_object_fd
*/
#define GL_HANDLE_TYPE_OPAQUE_FD_EXT										0x9586

/*
	GL_EXT_memory_object_win32
*/
#define GL_LUID_SIZE_EXT													8
#define GL_HANDLE_TYPE_OPAQUE_WIN32_EXT										0x9587
#define GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT									0x9588
#define GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT									0x9589
#define GL_HANDLE_TYPE_D3D12_RESOURCE_EXT									0x958A
#define GL_HANDLE_TYPE_D3D11_IMAGE_EXT										0x958B
#define GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT									0x958C
#define GL_HANDLE_TYPE_D3D12_FENCE_EXT										0x9594
#define GL_D3D12_FENCE_VALUE_EXT											0x9595
#define GL_DEVICE_LUID_EXT													0x9599
#define GL_DEVICE_NODE_MASK_EXT												0x959A

/*
	GL_EXT_multisample
*/
#define GL_MULTISAMPLE_EXT													0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_EXT											0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_EXT											0x809F
#define GL_SAMPLE_MASK_EXT													0x80A0
#define GL_1PASS_EXT														0x80A1
#define GL_2PASS_0_EXT														0x80A2
#define GL_2PASS_1_EXT														0x80A3
#define GL_4PASS_0_EXT														0x80A4
#define GL_4PASS_1_EXT														0x80A5
#define GL_4PASS_2_EXT														0x80A6
#define GL_4PASS_3_EXT														0x80A7
#define GL_SAMPLE_BUFFERS_EXT												0x80A8
#define GL_SAMPLES_EXT														0x80A9
#define GL_SAMPLE_MASK_VALUE_EXT											0x80AA
#define GL_SAMPLE_MASK_INVERT_EXT											0x80AB
#define GL_SAMPLE_PATTERN_EXT												0x80AC
#define GL_MULTISAMPLE_BIT_EXT												0x20000000

/*
	GL_EXT_multisample_compatibility
*/
#define GL_MULTISAMPLE_EXT													0x809D
#define GL_SAMPLE_ALPHA_TO_ONE_EXT											0x809F

/*
	GL_EXT_multisampled_render_to_texture
*/
#define GL_RENDERBUFFER_SAMPLES_EXT											0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT							0x8D56
#define GL_MAX_SAMPLES_EXT													0x8D57
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT						0x8D6C

/*
	GL_EXT_multiview_draw_buffers
*/
#define GL_DRAW_BUFFER_EXT													0x0C01
#define GL_READ_BUFFER_EXT													0x0C02
#define GL_COLOR_ATTACHMENT_EXT												0x90F0
#define GL_MULTIVIEW_EXT													0x90F1
#define GL_MAX_MULTIVIEW_BUFFERS_EXT										0x90F2

/*
	GL_EXT_packed_depth_stencil
*/
#define GL_DEPTH_STENCIL_EXT												0x84F9
#define GL_UNSIGNED_INT_24_8_EXT											0x84FA
#define GL_DEPTH24_STENCIL8_EXT												0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT											0x88F1

/*
	GL_EXT_packed_float
*/
#define GL_R11F_G11F_B10F_EXT												0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT									0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT										0x8C3C

/*
	GL_EXT_packed_pixels
*/
#define GL_UNSIGNED_BYTE_3_3_2_EXT											0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT										0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT										0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT											0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT										0x8036

/*
	GL_EXT_paletted_texture
*/
#define GL_TEXTURE_1D														0x0DE0
#define GL_TEXTURE_2D														0x0DE1
#define GL_PROXY_TEXTURE_1D													0x8063
#define GL_PROXY_TEXTURE_2D													0x8064
#define GL_COLOR_TABLE_FORMAT_EXT											0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT											0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT											0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT										0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT										0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT										0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT									0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT									0x80DF
#define GL_COLOR_INDEX1_EXT													0x80E2
#define GL_COLOR_INDEX2_EXT													0x80E3
#define GL_COLOR_INDEX4_EXT													0x80E4
#define GL_COLOR_INDEX8_EXT													0x80E5
#define GL_COLOR_INDEX12_EXT												0x80E6
#define GL_COLOR_INDEX16_EXT												0x80E7
#define GL_TEXTURE_INDEX_SIZE_EXT											0x80ED
#define GL_TEXTURE_CUBE_MAP_ARB												0x8513
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB										0x851B

/*
	GL_EXT_pixel_buffer_object
*/
#define GL_PIXEL_PACK_BUFFER_EXT											0x88EB
#define GL_PIXEL_UNPACK_BUFFER_EXT											0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT									0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT									0x88EF

/*
	GL_EXT_pixel_transform
*/
#define GL_PIXEL_TRANSFORM_2D_EXT											0x8330
#define GL_PIXEL_MAG_FILTER_EXT												0x8331
#define GL_PIXEL_MIN_FILTER_EXT												0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT											0x8333
#define GL_CUBIC_EXT														0x8334
#define GL_AVERAGE_EXT														0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT								0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT							0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT									0x8338

/*
	GL_EXT_point_parameters
*/
#define GL_POINT_SIZE_MIN_EXT												0x8126
#define GL_POINT_SIZE_MAX_EXT												0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT									0x8128
#define GL_DISTANCE_ATTENUATION_EXT											0x8129

/*
	GL_EXT_polygon_offset
*/
#define GL_POLYGON_OFFSET_EXT												0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT										0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT											0x8039

/*
	GL_EXT_polygon_offset_clamp
*/
#define GL_POLYGON_OFFSET_CLAMP_EXT											0x8E1B

/*
	GL_EXT_provoking_vertex
*/
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT						0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT										0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT										0x8E4E
#define GL_PROVOKING_VERTEX_EXT												0x8E4F

/*
	GL_EXT_pvrtc_sRGB
*/
#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT									0x8A54
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT									0x8A55
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT							0x8A56
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT							0x8A57

/*
	GL_EXT_raster_multisample
*/
#define GL_COLOR_SAMPLES_NV													0x8E20
#define GL_RASTER_MULTISAMPLE_EXT											0x9327
#define GL_RASTER_SAMPLES_EXT												0x9328
#define GL_MAX_RASTER_SAMPLES_EXT											0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT								0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT							0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT										0x932C
#define GL_DEPTH_SAMPLES_NV													0x932D
#define GL_STENCIL_SAMPLES_NV												0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV									0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV								0x9330
#define GL_COVERAGE_MODULATION_TABLE_NV										0x9331
#define GL_COVERAGE_MODULATION_NV											0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV								0x9333

/*
	GL_EXT_read_format_bgra
*/
#define GL_BGRA_EXT															0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT									0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT									0x8366

/*
	GL_EXT_render_snorm
*/
#define GL_BYTE																0x1400
#define GL_SHORT															0x1402
#define GL_R8_SNORM															0x8F94
#define GL_RG8_SNORM														0x8F95
#define GL_RGBA8_SNORM														0x8F97
#define GL_R16_SNORM_EXT													0x8F98
#define GL_RG16_SNORM_EXT													0x8F99
#define GL_RGBA16_SNORM_EXT													0x8F9B

/*
	GL_EXT_rescale_normal
*/
#define GL_RESCALE_NORMAL_EXT												0x803A

/*
	GL_EXT_sRGB
*/
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT						0x8210
#define GL_SRGB_EXT															0x8C40
#define GL_SRGB_ALPHA_EXT													0x8C42
#define GL_SRGB8_ALPHA8_EXT													0x8C43

/*
	GL_EXT_sRGB_write_control
*/
#define GL_FRAMEBUFFER_SRGB_EXT												0x8DB9

/*
	GL_EXT_secondary_color
*/
#define GL_COLOR_SUM_EXT													0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT										0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT									0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT									0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT									0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT								0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT										0x845E

/*
	GL_EXT_separate_shader_objects
*/
#define GL_ACTIVE_PROGRAM_EXT												0x8B8D

/*
	GL_EXT_separate_specular_color
*/
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT									0x81F8
#define GL_SINGLE_COLOR_EXT													0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT										0x81FA

/*
	GL_EXT_shader_framebuffer_fetch
*/
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT								0x8A52

/*
	GL_EXT_shader_image_load_store
*/
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT								0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT									0x00000002
#define GL_UNIFORM_BARRIER_BIT_EXT											0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT									0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT								0x00000020
#define GL_COMMAND_BARRIER_BIT_EXT											0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT										0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT									0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT									0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT										0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT								0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT									0x00001000
#define GL_MAX_IMAGE_UNITS_EXT												0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT				0x8F39
#define GL_IMAGE_BINDING_NAME_EXT											0x8F3A
#define GL_IMAGE_BINDING_LEVEL_EXT											0x8F3B
#define GL_IMAGE_BINDING_LAYERED_EXT										0x8F3C
#define GL_IMAGE_BINDING_LAYER_EXT											0x8F3D
#define GL_IMAGE_BINDING_ACCESS_EXT											0x8F3E
#define GL_IMAGE_1D_EXT														0x904C
#define GL_IMAGE_2D_EXT														0x904D
#define GL_IMAGE_3D_EXT														0x904E
#define GL_IMAGE_2D_RECT_EXT												0x904F
#define GL_IMAGE_CUBE_EXT													0x9050
#define GL_IMAGE_BUFFER_EXT													0x9051
#define GL_IMAGE_1D_ARRAY_EXT												0x9052
#define GL_IMAGE_2D_ARRAY_EXT												0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT											0x9054
#define GL_IMAGE_2D_MULTISAMPLE_EXT											0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT									0x9056
#define GL_INT_IMAGE_1D_EXT													0x9057
#define GL_INT_IMAGE_2D_EXT													0x9058
#define GL_INT_IMAGE_3D_EXT													0x9059
#define GL_INT_IMAGE_2D_RECT_EXT											0x905A
#define GL_INT_IMAGE_CUBE_EXT												0x905B
#define GL_INT_IMAGE_BUFFER_EXT												0x905C
#define GL_INT_IMAGE_1D_ARRAY_EXT											0x905D
#define GL_INT_IMAGE_2D_ARRAY_EXT											0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT										0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT										0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT								0x9061
#define GL_UNSIGNED_INT_IMAGE_1D_EXT										0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_EXT										0x9063
#define GL_UNSIGNED_INT_IMAGE_3D_EXT										0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT									0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT										0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT									0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT									0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT									0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT							0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT							0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT						0x906C
#define GL_MAX_IMAGE_SAMPLES_EXT											0x906D
#define GL_IMAGE_BINDING_FORMAT_EXT											0x906E
#define GL_ALL_BARRIER_BITS_EXT												0xFFFFFFFF

/*
	GL_EXT_shader_pixel_local_storage
*/
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT						0x8F63
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT									0x8F64
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT							0x8F67

/*
	GL_EXT_shader_pixel_local_storage2
*/
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT					0x9650
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT						0x9651
#define GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT	0x9652

/*
	GL_EXT_shadow_samplers
*/
#define GL_TEXTURE_COMPARE_MODE_EXT											0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT											0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT										0x884E
#define GL_SAMPLER_2D_SHADOW_EXT											0x8B62

/*
	GL_EXT_shared_texture_palette
*/
#define GL_SHARED_TEXTURE_PALETTE_EXT										0x81FB

/*
	GL_EXT_sparse_texture
*/
#define GL_TEXTURE_2D														0x0DE1
#define GL_TEXTURE_3D														0x806F
#define GL_TEXTURE_CUBE_MAP													0x8513
#define GL_TEXTURE_2D_ARRAY													0x8C1A
#define GL_TEXTURE_CUBE_MAP_ARRAY_OES										0x9009
#define GL_VIRTUAL_PAGE_SIZE_X_EXT											0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_EXT											0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_EXT											0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_EXT										0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT									0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT								0x919A
#define GL_TEXTURE_SPARSE_EXT												0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_EXT										0x91A7
#define GL_NUM_VIRTUAL_PAGE_SIZES_EXT										0x91A8
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT						0x91A9
#define GL_NUM_SPARSE_LEVELS_EXT											0x91AA

/*
	GL_EXT_stencil_clear_tag
*/
#define GL_STENCIL_TAG_BITS_EXT												0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT										0x88F3

/*
	GL_EXT_stencil_two_side
*/
#define GL_STENCIL_TEST_TWO_SIDE_EXT										0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT											0x8911

/*
	GL_EXT_stencil_wrap
*/
#define GL_INCR_WRAP_EXT													0x8507
#define GL_DECR_WRAP_EXT													0x8508

/*
	GL_EXT_texture
*/
#define GL_ALPHA4_EXT														0x803B
#define GL_ALPHA8_EXT														0x803C
#define GL_ALPHA12_EXT														0x803D
#define GL_ALPHA16_EXT														0x803E
#define GL_LUMINANCE4_EXT													0x803F
#define GL_LUMINANCE8_EXT													0x8040
#define GL_LUMINANCE12_EXT													0x8041
#define GL_LUMINANCE16_EXT													0x8042
#define GL_LUMINANCE4_ALPHA4_EXT											0x8043
#define GL_LUMINANCE6_ALPHA2_EXT											0x8044
#define GL_LUMINANCE8_ALPHA8_EXT											0x8045
#define GL_LUMINANCE12_ALPHA4_EXT											0x8046
#define GL_LUMINANCE12_ALPHA12_EXT											0x8047
#define GL_LUMINANCE16_ALPHA16_EXT											0x8048
#define GL_INTENSITY_EXT													0x8049
#define GL_INTENSITY4_EXT													0x804A
#define GL_INTENSITY8_EXT													0x804B
#define GL_INTENSITY12_EXT													0x804C
#define GL_INTENSITY16_EXT													0x804D
#define GL_RGB2_EXT															0x804E
#define GL_RGB4_EXT															0x804F
#define GL_RGB5_EXT															0x8050
#define GL_RGB8_EXT															0x8051
#define GL_RGB10_EXT														0x8052
#define GL_RGB12_EXT														0x8053
#define GL_RGB16_EXT														0x8054
#define GL_RGBA2_EXT														0x8055
#define GL_RGBA4_EXT														0x8056
#define GL_RGB5_A1_EXT														0x8057
#define GL_RGBA8_EXT														0x8058
#define GL_RGB10_A2_EXT														0x8059
#define GL_RGBA12_EXT														0x805A
#define GL_RGBA16_EXT														0x805B
#define GL_TEXTURE_RED_SIZE_EXT												0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT											0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT											0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT											0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT										0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT										0x8061
#define GL_REPLACE_EXT														0x8062
#define GL_PROXY_TEXTURE_1D_EXT												0x8063
#define GL_PROXY_TEXTURE_2D_EXT												0x8064

/*
	GL_EXT_texture3D
*/
#define GL_PACK_SKIP_IMAGES_EXT												0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT											0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT											0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT											0x806E
#define GL_TEXTURE_3D_EXT													0x806F
#define GL_PROXY_TEXTURE_3D_EXT												0x8070
#define GL_TEXTURE_DEPTH_EXT												0x8071
#define GL_TEXTURE_WRAP_R_EXT												0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT											0x8073

/*
	GL_EXT_texture_array
*/
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT									0x884E
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT										0x88FF
#define GL_TEXTURE_1D_ARRAY_EXT												0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT										0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT												0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT										0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT										0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT										0x8C1D

/*
	GL_EXT_texture_buffer_object
*/
#define GL_TEXTURE_BUFFER_EXT												0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT										0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT										0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT							0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT										0x8C2E

/*
	GL_EXT_texture_compression_astc_decode_mode
*/
#define GL_TEXTURE_ASTC_DECODE_PRECISION_EXT								0x8F69

/*
	GL_EXT_texture_compression_astc_decode_mode_rgb9e5
*/
#define GL_TEXTURE_ASTC_DECODE_PRECISION_EXT								0x8F69

/*
	GL_EXT_texture_compression_bptc
*/
#define GL_COMPRESSED_RGBA_BPTC_UNORM_EXT									0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT								0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT								0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT							0x8E8F

/*
	GL_EXT_texture_compression_latc
*/
#define GL_COMPRESSED_LUMINANCE_LATC1_EXT									0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT							0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT								0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT						0x8C73

/*
	GL_EXT_texture_compression_rgtc
*/
#define GL_COMPRESSED_RED_RGTC1_EXT											0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT									0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT									0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT							0x8DBE

/*
	GL_EXT_texture_compression_s3tc
*/
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT										0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT									0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT									0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT									0x83F3

/*
	GL_EXT_texture_cube_map
*/
#define GL_NORMAL_MAP_EXT													0x8511
#define GL_REFLECTION_MAP_EXT												0x8512
#define GL_TEXTURE_CUBE_MAP_EXT												0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT										0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT									0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT									0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT									0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT									0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT									0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT									0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT										0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT									0x851C

/*
	GL_EXT_texture_cube_map_array
*/
#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT										0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT								0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT										0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT								0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT									0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT							0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT											0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT										0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT							0x906A

/*
	GL_EXT_texture_edge_clamp
*/
#define GL_CLAMP_TO_EDGE_EXT												0x812F

/*
	GL_EXT_texture_env_combine
*/
#define GL_COMBINE_EXT														0x8570
#define GL_COMBINE_RGB_EXT													0x8571
#define GL_COMBINE_ALPHA_EXT												0x8572
#define GL_RGB_SCALE_EXT													0x8573
#define GL_ADD_SIGNED_EXT													0x8574
#define GL_INTERPOLATE_EXT													0x8575
#define GL_CONSTANT_EXT														0x8576
#define GL_PRIMARY_COLOR_EXT												0x8577
#define GL_PREVIOUS_EXT														0x8578
#define GL_SOURCE0_RGB_EXT													0x8580
#define GL_SOURCE1_RGB_EXT													0x8581
#define GL_SOURCE2_RGB_EXT													0x8582
#define GL_SOURCE0_ALPHA_EXT												0x8588
#define GL_SOURCE1_ALPHA_EXT												0x8589
#define GL_SOURCE2_ALPHA_EXT												0x858A
#define GL_OPERAND0_RGB_EXT													0x8590
#define GL_OPERAND1_RGB_EXT													0x8591
#define GL_OPERAND2_RGB_EXT													0x8592
#define GL_OPERAND0_ALPHA_EXT												0x8598
#define GL_OPERAND1_ALPHA_EXT												0x8599
#define GL_OPERAND2_ALPHA_EXT												0x859A

/*
	GL_EXT_texture_env_dot3
*/
#define GL_DOT3_RGB_EXT														0x8740
#define GL_DOT3_RGBA_EXT													0x8741

/*
	GL_EXT_texture_filter_anisotropic
*/
#define GL_TEXTURE_MAX_ANISOTROPY_EXT										0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT									0x84FF

/*
	GL_EXT_texture_filter_minmax
*/
#define GL_TEXTURE_REDUCTION_MODE_EXT										0x9366
#define GL_WEIGHTED_AVERAGE_EXT												0x9367

/*
	GL_EXT_texture_format_BGRA8888
*/
#define GL_BGRA_EXT															0x80E1

/*
	GL_EXT_texture_integer
*/
#define GL_RGBA32UI_EXT														0x8D70
#define GL_RGB32UI_EXT														0x8D71
#define GL_ALPHA32UI_EXT													0x8D72
#define GL_INTENSITY32UI_EXT												0x8D73
#define GL_LUMINANCE32UI_EXT												0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT											0x8D75
#define GL_RGBA16UI_EXT														0x8D76
#define GL_RGB16UI_EXT														0x8D77
#define GL_ALPHA16UI_EXT													0x8D78
#define GL_INTENSITY16UI_EXT												0x8D79
#define GL_LUMINANCE16UI_EXT												0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT											0x8D7B
#define GL_RGBA8UI_EXT														0x8D7C
#define GL_RGB8UI_EXT														0x8D7D
#define GL_ALPHA8UI_EXT														0x8D7E
#define GL_INTENSITY8UI_EXT													0x8D7F
#define GL_LUMINANCE8UI_EXT													0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT											0x8D81
#define GL_RGBA32I_EXT														0x8D82
#define GL_RGB32I_EXT														0x8D83
#define GL_ALPHA32I_EXT														0x8D84
#define GL_INTENSITY32I_EXT													0x8D85
#define GL_LUMINANCE32I_EXT													0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT											0x8D87
#define GL_RGBA16I_EXT														0x8D88
#define GL_RGB16I_EXT														0x8D89
#define GL_ALPHA16I_EXT														0x8D8A
#define GL_INTENSITY16I_EXT													0x8D8B
#define GL_LUMINANCE16I_EXT													0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT											0x8D8D
#define GL_RGBA8I_EXT														0x8D8E
#define GL_RGB8I_EXT														0x8D8F
#define GL_ALPHA8I_EXT														0x8D90
#define GL_INTENSITY8I_EXT													0x8D91
#define GL_LUMINANCE8I_EXT													0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT											0x8D93
#define GL_RED_INTEGER_EXT													0x8D94
#define GL_GREEN_INTEGER_EXT												0x8D95
#define GL_BLUE_INTEGER_EXT													0x8D96
#define GL_ALPHA_INTEGER_EXT												0x8D97
#define GL_RGB_INTEGER_EXT													0x8D98
#define GL_RGBA_INTEGER_EXT													0x8D99
#define GL_BGR_INTEGER_EXT													0x8D9A
#define GL_BGRA_INTEGER_EXT													0x8D9B
#define GL_LUMINANCE_INTEGER_EXT											0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT										0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT											0x8D9E

/*
	GL_EXT_texture_lod_bias
*/
#define GL_MAX_TEXTURE_LOD_BIAS_EXT											0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT										0x8500
#define GL_TEXTURE_LOD_BIAS_EXT												0x8501

/*
	GL_EXT_texture_mirror_clamp
*/
#define GL_MIRROR_CLAMP_EXT													0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_EXT											0x8743
#define GL_MIRROR_CLAMP_TO_BORDER_EXT										0x8912

/*
	GL_EXT_texture_norm16
*/
#define GL_RGB16_EXT														0x8054
#define GL_RGBA16_EXT														0x805B
#define GL_R16_EXT															0x822A
#define GL_RG16_EXT															0x822C
#define GL_R16_SNORM_EXT													0x8F98
#define GL_RG16_SNORM_EXT													0x8F99
#define GL_RGB16_SNORM_EXT													0x8F9A
#define GL_RGBA16_SNORM_EXT													0x8F9B

/*
	GL_EXT_texture_object
*/
#define GL_TEXTURE_PRIORITY_EXT												0x8066
#define GL_TEXTURE_RESIDENT_EXT												0x8067
#define GL_TEXTURE_1D_BINDING_EXT											0x8068
#define GL_TEXTURE_2D_BINDING_EXT											0x8069
#define GL_TEXTURE_3D_BINDING_EXT											0x806A

/*
	GL_EXT_texture_perturb_normal
*/
#define GL_PERTURB_EXT														0x85AE
#define GL_TEXTURE_NORMAL_EXT												0x85AF

/*
	GL_EXT_texture_rectangle
*/
#define GL_TEXTURE_RECTANGLE_EXT											0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_EXT									0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_EXT										0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT									0x84F8

/*
	GL_EXT_texture_rg
*/
#define GL_RED_EXT															0x1903
#define GL_RG_EXT															0x8227
#define GL_R8_EXT															0x8229
#define GL_RG8_EXT															0x822B

/*
	GL_EXT_texture_sRGB
*/
#define GL_SRGB_EXT															0x8C40
#define GL_SRGB8_EXT														0x8C41
#define GL_SRGB_ALPHA_EXT													0x8C42
#define GL_SRGB8_ALPHA8_EXT													0x8C43
#define GL_SLUMINANCE_ALPHA_EXT												0x8C44
#define GL_SLUMINANCE8_ALPHA8_EXT											0x8C45
#define GL_SLUMINANCE_EXT													0x8C46
#define GL_SLUMINANCE8_EXT													0x8C47
#define GL_COMPRESSED_SRGB_EXT												0x8C48
#define GL_COMPRESSED_SRGB_ALPHA_EXT										0x8C49
#define GL_COMPRESSED_SLUMINANCE_EXT										0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT									0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT									0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT								0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT								0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT								0x8C4F

/*
	GL_EXT_texture_sRGB_R8
*/
#define GL_SR8_EXT															0x8FBD

/*
	GL_EXT_texture_sRGB_RG8
*/
#define GL_SRG8_EXT															0x8FBE

/*
	GL_EXT_texture_sRGB_decode
*/
#define GL_TEXTURE_SRGB_DECODE_EXT											0x8A48
#define GL_DECODE_EXT														0x8A49
#define GL_SKIP_DECODE_EXT													0x8A4A

/*
	GL_EXT_texture_shared_exponent
*/
#define GL_RGB9_E5_EXT														0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT										0x8C3E
#define GL_TEXTURE_SHARED_SIZE_EXT											0x8C3F

/*
	GL_EXT_texture_snorm
*/
#define GL_RED_SNORM														0x8F90
#define GL_RG_SNORM															0x8F91
#define GL_RGB_SNORM														0x8F92
#define GL_RGBA_SNORM														0x8F93
#define GL_R8_SNORM															0x8F94
#define GL_RG8_SNORM														0x8F95
#define GL_RGB8_SNORM														0x8F96
#define GL_RGBA8_SNORM														0x8F97
#define GL_R16_SNORM														0x8F98
#define GL_RG16_SNORM														0x8F99
#define GL_RGB16_SNORM														0x8F9A
#define GL_RGBA16_SNORM														0x8F9B
#define GL_SIGNED_NORMALIZED												0x8F9C
#define GL_ALPHA_SNORM														0x9010
#define GL_LUMINANCE_SNORM													0x9011
#define GL_LUMINANCE_ALPHA_SNORM											0x9012
#define GL_INTENSITY_SNORM													0x9013
#define GL_ALPHA8_SNORM														0x9014
#define GL_LUMINANCE8_SNORM													0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM											0x9016
#define GL_INTENSITY8_SNORM													0x9017
#define GL_ALPHA16_SNORM													0x9018
#define GL_LUMINANCE16_SNORM												0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM										0x901A
#define GL_INTENSITY16_SNORM												0x901B

/*
	GL_EXT_texture_storage
*/
#define GL_ALPHA8_EXT														0x803C
#define GL_LUMINANCE8_EXT													0x8040
#define GL_LUMINANCE8_ALPHA8_EXT											0x8045
#define GL_RGB10_EXT														0x8052
#define GL_RGB10_A2_EXT														0x8059
#define GL_R8_EXT															0x8229
#define GL_RG8_EXT															0x822B
#define GL_R16F_EXT															0x822D
#define GL_R32F_EXT															0x822E
#define GL_RG16F_EXT														0x822F
#define GL_RG32F_EXT														0x8230
#define GL_RGBA32F_EXT														0x8814
#define GL_RGB32F_EXT														0x8815
#define GL_ALPHA32F_EXT														0x8816
#define GL_LUMINANCE32F_EXT													0x8818
#define GL_LUMINANCE_ALPHA32F_EXT											0x8819
#define GL_RGBA16F_EXT														0x881A
#define GL_RGB16F_EXT														0x881B
#define GL_ALPHA16F_EXT														0x881C
#define GL_LUMINANCE16F_EXT													0x881E
#define GL_LUMINANCE_ALPHA16F_EXT											0x881F
#define GL_RGB_RAW_422_APPLE												0x8A51
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT										0x912F
#define GL_BGRA8_EXT														0x93A1

/*
	GL_EXT_texture_swizzle
*/
#define GL_TEXTURE_SWIZZLE_R_EXT											0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT											0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT											0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT											0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT											0x8E46

/*
	GL_EXT_texture_type_2_10_10_10_REV
*/
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT									0x8368

/*
	GL_EXT_texture_view
*/
#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT										0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT										0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT										0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT										0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS											0x82DF

/*
	GL_EXT_timer_query
*/
#define GL_TIME_ELAPSED_EXT													0x88BF

/*
	GL_EXT_transform_feedback
*/
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT						0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT								0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT					0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT									0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT								0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT								0x8C85
#define GL_PRIMITIVES_GENERATED_EXT											0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT						0x8C88
#define GL_RASTERIZER_DISCARD_EXT											0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT				0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT						0x8C8B
#define GL_INTERLEAVED_ATTRIBS_EXT											0x8C8C
#define GL_SEPARATE_ATTRIBS_EXT												0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT									0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT							0x8C8F

/*
	GL_EXT_unpack_subimage
*/
#define GL_UNPACK_ROW_LENGTH_EXT											0x0CF2
#define GL_UNPACK_SKIP_ROWS_EXT												0x0CF3
#define GL_UNPACK_SKIP_PIXELS_EXT											0x0CF4

/*
	GL_EXT_vertex_array
*/
#define GL_DOUBLE_EXT														0x140A
#define GL_VERTEX_ARRAY_EXT													0x8074
#define GL_NORMAL_ARRAY_EXT													0x8075
#define GL_COLOR_ARRAY_EXT													0x8076
#define GL_INDEX_ARRAY_EXT													0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT											0x8078
#define GL_EDGE_FLAG_ARRAY_EXT												0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT											0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT											0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT											0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT											0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT											0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT											0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT											0x8080
#define GL_COLOR_ARRAY_SIZE_EXT												0x8081
#define GL_COLOR_ARRAY_TYPE_EXT												0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT											0x8083
#define GL_COLOR_ARRAY_COUNT_EXT											0x8084
#define GL_INDEX_ARRAY_TYPE_EXT												0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT											0x8086
#define GL_INDEX_ARRAY_COUNT_EXT											0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT										0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT										0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT									0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT									0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT										0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT										0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT											0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT											0x808F
#define GL_COLOR_ARRAY_POINTER_EXT											0x8090
#define GL_INDEX_ARRAY_POINTER_EXT											0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT									0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT										0x8093

/*
	GL_EXT_vertex_array_bgra
*/
#define GL_BGRA																0x80E1

/*
	GL_EXT_vertex_attrib_64bit
*/
#define GL_DOUBLE_MAT2_EXT													0x8F46
#define GL_DOUBLE_MAT3_EXT													0x8F47
#define GL_DOUBLE_MAT4_EXT													0x8F48
#define GL_DOUBLE_MAT2x3_EXT												0x8F49
#define GL_DOUBLE_MAT2x4_EXT												0x8F4A
#define GL_DOUBLE_MAT3x2_EXT												0x8F4B
#define GL_DOUBLE_MAT3x4_EXT												0x8F4C
#define GL_DOUBLE_MAT4x2_EXT												0x8F4D
#define GL_DOUBLE_MAT4x3_EXT												0x8F4E
#define GL_DOUBLE_VEC2_EXT													0x8FFC
#define GL_DOUBLE_VEC3_EXT													0x8FFD
#define GL_DOUBLE_VEC4_EXT													0x8FFE

/*
	GL_EXT_vertex_shader
*/
#define GL_VERTEX_SHADER_EXT												0x8780
#define GL_VERTEX_SHADER_BINDING_EXT										0x8781
#define GL_OP_INDEX_EXT														0x8782
#define GL_OP_NEGATE_EXT													0x8783
#define GL_OP_DOT3_EXT														0x8784
#define GL_OP_DOT4_EXT														0x8785
#define GL_OP_MUL_EXT														0x8786
#define GL_OP_ADD_EXT														0x8787
#define GL_OP_MADD_EXT														0x8788
#define GL_OP_FRAC_EXT														0x8789
#define GL_OP_MAX_EXT														0x878A
#define GL_OP_MIN_EXT														0x878B
#define GL_OP_SET_GE_EXT													0x878C
#define GL_OP_SET_LT_EXT													0x878D
#define GL_OP_CLAMP_EXT														0x878E
#define GL_OP_FLOOR_EXT														0x878F
#define GL_OP_ROUND_EXT														0x8790
#define GL_OP_EXP_BASE_2_EXT												0x8791
#define GL_OP_LOG_BASE_2_EXT												0x8792
#define GL_OP_POWER_EXT														0x8793
#define GL_OP_RECIP_EXT														0x8794
#define GL_OP_RECIP_SQRT_EXT												0x8795
#define GL_OP_SUB_EXT														0x8796
#define GL_OP_CROSS_PRODUCT_EXT												0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT											0x8798
#define GL_OP_MOV_EXT														0x8799
#define GL_OUTPUT_VERTEX_EXT												0x879A
#define GL_OUTPUT_COLOR0_EXT												0x879B
#define GL_OUTPUT_COLOR1_EXT												0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT										0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT										0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT										0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT										0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT										0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT										0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT										0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT										0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT										0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT										0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT										0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT										0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT										0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT										0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT										0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT										0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT										0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT										0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT										0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT										0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT										0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT										0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT										0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT										0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT										0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT										0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT										0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT										0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT										0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT										0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT										0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT										0x87BC
#define GL_OUTPUT_FOG_EXT													0x87BD
#define GL_SCALAR_EXT														0x87BE
#define GL_VECTOR_EXT														0x87BF
#define GL_MATRIX_EXT														0x87C0
#define GL_VARIANT_EXT														0x87C1
#define GL_INVARIANT_EXT													0x87C2
#define GL_LOCAL_CONSTANT_EXT												0x87C3
#define GL_LOCAL_EXT														0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT								0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT									0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT									0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT							0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT										0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT						0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT							0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT						0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT					0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT							0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT									0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT										0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT										0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT								0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT											0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT										0x87D4
#define GL_X_EXT															0x87D5
#define GL_Y_EXT															0x87D6
#define GL_Z_EXT															0x87D7
#define GL_W_EXT															0x87D8
#define GL_NEGATIVE_X_EXT													0x87D9
#define GL_NEGATIVE_Y_EXT													0x87DA
#define GL_NEGATIVE_Z_EXT													0x87DB
#define GL_NEGATIVE_W_EXT													0x87DC
#define GL_ZERO_EXT															0x87DD
#define GL_ONE_EXT															0x87DE
#define GL_NEGATIVE_ONE_EXT													0x87DF
#define GL_NORMALIZED_RANGE_EXT												0x87E0
#define GL_FULL_RANGE_EXT													0x87E1
#define GL_CURRENT_VERTEX_EXT												0x87E2
#define GL_MVP_MATRIX_EXT													0x87E3
#define GL_VARIANT_VALUE_EXT												0x87E4
#define GL_VARIANT_DATATYPE_EXT												0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT											0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT											0x87E7
#define GL_VARIANT_ARRAY_EXT												0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT										0x87E9
#define GL_INVARIANT_VALUE_EXT												0x87EA
#define GL_INVARIANT_DATATYPE_EXT											0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT											0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT										0x87ED

/*
	GL_EXT_vertex_weighting
*/
#define GL_MODELVIEW0_STACK_DEPTH_EXT										0x0BA3
#define GL_MODELVIEW0_MATRIX_EXT											0x0BA6
#define GL_MODELVIEW0_EXT													0x1700
#define GL_MODELVIEW1_STACK_DEPTH_EXT										0x8502
#define GL_MODELVIEW1_MATRIX_EXT											0x8506
#define GL_VERTEX_WEIGHTING_EXT												0x8509
#define GL_MODELVIEW1_EXT													0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT										0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT											0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT										0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT										0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT									0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT									0x8510

/*
	GL_EXT_window_rectangles
*/
#define GL_INCLUSIVE_EXT													0x8F10
#define GL_EXCLUSIVE_EXT													0x8F11
#define GL_WINDOW_RECTANGLE_EXT												0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT										0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT										0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT										0x8F15

/*
	GL_EXT_x11_sync_object
*/
#define GL_SYNC_X11_FENCE_EXT												0x90E1

/*
	GL_IBM_cull_vertex
*/
#define GL_CULL_VERTEX_IBM													103050

/*
	GL_IBM_rasterpos_clip
*/
#define GL_RASTER_POSITION_UNCLIPPED_IBM									103010

/*
	GL_IBM_static_data
*/
#define GL_ALL_STATIC_DATA_IBM												103060
#define GL_STATIC_VERTEX_ARRAY_IBM											103061

/*
	GL_IBM_texture_mirrored_repeat
*/
#define GL_MIRRORED_REPEAT_IBM												0x8370

/*
	GL_IBM_vertex_array_lists
*/
#define GL_VERTEX_ARRAY_LIST_IBM											103070
#define GL_NORMAL_ARRAY_LIST_IBM											103071
#define GL_COLOR_ARRAY_LIST_IBM												103072
#define GL_INDEX_ARRAY_LIST_IBM												103073
#define GL_TEXTURE_COORD_ARRAY_LIST_IBM										103074
#define GL_EDGE_FLAG_ARRAY_LIST_IBM											103075
#define GL_FOG_COORDINATE_ARRAY_LIST_IBM									103076
#define GL_SECONDARY_COLOR_ARRAY_LIST_IBM									103077
#define GL_VERTEX_ARRAY_LIST_STRIDE_IBM										103080
#define GL_NORMAL_ARRAY_LIST_STRIDE_IBM										103081
#define GL_COLOR_ARRAY_LIST_STRIDE_IBM										103082
#define GL_INDEX_ARRAY_LIST_STRIDE_IBM										103083
#define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM								103084
#define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM									103085
#define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM								103086
#define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM							103087

/*
	GL_INGR_color_clamp
*/
#define GL_RED_MIN_CLAMP_INGR												0x8560
#define GL_GREEN_MIN_CLAMP_INGR												0x8561
#define GL_BLUE_MIN_CLAMP_INGR												0x8562
#define GL_ALPHA_MIN_CLAMP_INGR												0x8563
#define GL_RED_MAX_CLAMP_INGR												0x8564
#define GL_GREEN_MAX_CLAMP_INGR												0x8565
#define GL_BLUE_MAX_CLAMP_INGR												0x8566
#define GL_ALPHA_MAX_CLAMP_INGR												0x8567

/*
	GL_INGR_interlace_read
*/
#define GL_INTERLACE_READ_INGR												0x8568

/*
	GL_INTEL_conservative_rasterization
*/
#define GL_CONSERVATIVE_RASTERIZATION_INTEL									0x83FE

/*
	GL_INTEL_map_texture
*/
#define GL_LAYOUT_DEFAULT_INTEL												0
#define GL_LAYOUT_LINEAR_INTEL												1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL									2
#define GL_TEXTURE_MEMORY_LAYOUT_INTEL										0x83FF

/*
	GL_INTEL_parallel_arrays
*/
#define GL_PARALLEL_ARRAYS_INTEL											0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL								0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL								0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL								0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL						0x83F8

/*
	GL_INTEL_performance_query
*/
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL									0x0000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL									0x0001
#define GL_PERFQUERY_DONOT_FLUSH_INTEL										0x83F9
#define GL_PERFQUERY_FLUSH_INTEL											0x83FA
#define GL_PERFQUERY_WAIT_INTEL												0x83FB
#define GL_PERFQUERY_COUNTER_EVENT_INTEL									0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL							0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL								0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL								0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL										0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL								0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL								0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL								0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL								0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL								0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL								0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL							0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL							0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL							0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL							0x9500

/*
	GL_KHR_blend_equation_advanced
*/
#define GL_BLEND_ADVANCED_COHERENT_KHR										0x9285
#define GL_MULTIPLY_KHR														0x9294
#define GL_SCREEN_KHR														0x9295
#define GL_OVERLAY_KHR														0x9296
#define GL_DARKEN_KHR														0x9297
#define GL_LIGHTEN_KHR														0x9298
#define GL_COLORDODGE_KHR													0x9299
#define GL_COLORBURN_KHR													0x929A
#define GL_HARDLIGHT_KHR													0x929B
#define GL_SOFTLIGHT_KHR													0x929C
#define GL_DIFFERENCE_KHR													0x929E
#define GL_EXCLUSION_KHR													0x92A0
#define GL_HSL_HUE_KHR														0x92AD
#define GL_HSL_SATURATION_KHR												0x92AE
#define GL_HSL_COLOR_KHR													0x92AF
#define GL_HSL_LUMINOSITY_KHR												0x92B0

/*
	GL_KHR_debug
*/
#define GL_CONTEXT_FLAG_DEBUG_BIT											0x00000002
#define GL_STACK_OVERFLOW													0x0503
#define GL_STACK_UNDERFLOW													0x0504
#define GL_DEBUG_OUTPUT_SYNCHRONOUS											0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH									0x8243
#define GL_DEBUG_CALLBACK_FUNCTION											0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM										0x8245
#define GL_DEBUG_SOURCE_API													0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM										0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER										0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY											0x8249
#define GL_DEBUG_SOURCE_APPLICATION											0x824A
#define GL_DEBUG_SOURCE_OTHER												0x824B
#define GL_DEBUG_TYPE_ERROR													0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR									0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR									0x824E
#define GL_DEBUG_TYPE_PORTABILITY											0x824F
#define GL_DEBUG_TYPE_PERFORMANCE											0x8250
#define GL_DEBUG_TYPE_OTHER													0x8251
#define GL_DEBUG_TYPE_MARKER												0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP											0x8269
#define GL_DEBUG_TYPE_POP_GROUP												0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION										0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH										0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH											0x826D
#define GL_BUFFER															0x82E0
#define GL_SHADER															0x82E1
#define GL_PROGRAM															0x82E2
#define GL_QUERY															0x82E3
#define GL_PROGRAM_PIPELINE													0x82E4
#define GL_SAMPLER															0x82E6
#define GL_DISPLAY_LIST														0x82E7
#define GL_MAX_LABEL_LENGTH													0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH											0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES										0x9144
#define GL_DEBUG_LOGGED_MESSAGES											0x9145
#define GL_DEBUG_SEVERITY_HIGH												0x9146
#define GL_DEBUG_SEVERITY_MEDIUM											0x9147
#define GL_DEBUG_SEVERITY_LOW												0x9148
#define GL_DEBUG_OUTPUT														0x92E0

/*
	GL_KHR_no_error
*/
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR									0x00000008

/*
	GL_KHR_parallel_shader_compile
*/
#define GL_MAX_SHADER_COMPILER_THREADS_KHR									0x91B0
#define GL_COMPLETION_STATUS_KHR											0x91B1

/*
	GL_KHR_robustness
*/
#define GL_CONTEXT_LOST														0x0507
#define GL_LOSE_CONTEXT_ON_RESET											0x8252
#define GL_GUILTY_CONTEXT_RESET												0x8253
#define GL_INNOCENT_CONTEXT_RESET											0x8254
#define GL_UNKNOWN_CONTEXT_RESET											0x8255
#define GL_RESET_NOTIFICATION_STRATEGY										0x8256
#define GL_NO_RESET_NOTIFICATION											0x8261
#define GL_CONTEXT_ROBUST_ACCESS											0x90F3

/*
	GL_KHR_texture_compression_astc_hdr
*/
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR										0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR										0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR										0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR										0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR										0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR										0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR										0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR										0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR									0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR									0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR									0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR									0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR									0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR									0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR								0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR								0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR								0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR								0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR								0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR								0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR								0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR								0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR							0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR							0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR							0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR							0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR							0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR							0x93DD

/*
	GL_KHR_texture_compression_astc_ldr
*/
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR										0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR										0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR										0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR										0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR										0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR										0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR										0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR										0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR									0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR									0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR									0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR									0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR									0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR									0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR								0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR								0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR								0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR								0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR								0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR								0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR								0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR								0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR							0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR							0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR							0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR							0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR							0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR							0x93DD

/*
	GL_KTX_buffer_region
*/
#define GL_KTX_FRONT_REGION													0x0
#define GL_KTX_BACK_REGION													0x1
#define GL_KTX_Z_REGION														0x2
#define GL_KTX_STENCIL_REGION												0x3

/*
	GL_MESAX_texture_stack
*/
#define GL_TEXTURE_1D_STACK_MESAX											0x8759
#define GL_TEXTURE_2D_STACK_MESAX											0x875A
#define GL_PROXY_TEXTURE_1D_STACK_MESAX										0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX										0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX									0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX									0x875E

/*
	GL_MESA_pack_invert
*/
#define GL_PACK_INVERT_MESA													0x8758

/*
	GL_MESA_ycbcr_texture
*/
#define GL_UNSIGNED_SHORT_8_8_MESA											0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA										0x85BB
#define GL_YCBCR_MESA														0x8757

/*
	GL_NVX_gpu_memory_info
*/
#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX								0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX						0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX						0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX								0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX								0x904B

/*
	GL_NVX_linked_gpu_multicast
*/
#define GL_LGPU_SEPARATE_STORAGE_BIT_NVX									0x0800
#define GL_MAX_LGPU_GPUS_NVX												0x92BA

/*
	GL_NV_3dvision_settings
*/
#define GL_3DVISION_STEREO_NV												0x90F4
#define GL_STEREO_SEPARATION_NV												0x90F5
#define GL_STEREO_CONVERGENCE_NV											0x90F6
#define GL_STEREO_CUTOFF_NV													0x90F7
#define GL_STEREO_PROJECTION_NV												0x90F8
#define GL_STEREO_PROJECTION_PERSPECTIVE_NV									0x90F9
#define GL_STEREO_PROJECTION_ORTHO_NV										0x90FA

/*
	GL_NV_EGL_stream_consumer_external
*/
#define GL_TEXTURE_EXTERNAL_OES												0x8D65
#define GL_SAMPLER_EXTERNAL_OES												0x8D66
#define GL_TEXTURE_BINDING_EXTERNAL_OES										0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES									0x8D68

/*
	GL_NV_alpha_to_coverage_dither_control
*/
#define GL_ALPHA_TO_COVERAGE_DITHER_MODE_NV									0x92BF
#define GL_ALPHA_TO_COVERAGE_DITHER_DEFAULT_NV								0x934D
#define GL_ALPHA_TO_COVERAGE_DITHER_ENABLE_NV								0x934E
#define GL_ALPHA_TO_COVERAGE_DITHER_DISABLE_NV								0x934F

/*
	GL_NV_bgr
*/
#define GL_BGR_NV															0x80E0

/*
	GL_NV_blend_equation_advanced
*/
#define GL_XOR_NV															0x1506
#define GL_RED_NV															0x1903
#define GL_GREEN_NV															0x1904
#define GL_BLUE_NV															0x1905
#define GL_BLEND_PREMULTIPLIED_SRC_NV										0x9280
#define GL_BLEND_OVERLAP_NV													0x9281
#define GL_UNCORRELATED_NV													0x9282
#define GL_DISJOINT_NV														0x9283
#define GL_CONJOINT_NV														0x9284
#define GL_BLEND_ADVANCED_COHERENT_NV										0x9285
#define GL_SRC_NV															0x9286
#define GL_DST_NV															0x9287
#define GL_SRC_OVER_NV														0x9288
#define GL_DST_OVER_NV														0x9289
#define GL_SRC_IN_NV														0x928A
#define GL_DST_IN_NV														0x928B
#define GL_SRC_OUT_NV														0x928C
#define GL_DST_OUT_NV														0x928D
#define GL_SRC_ATOP_NV														0x928E
#define GL_DST_ATOP_NV														0x928F
#define GL_PLUS_NV															0x9291
#define GL_PLUS_DARKER_NV													0x9292
#define GL_MULTIPLY_NV														0x9294
#define GL_SCREEN_NV														0x9295
#define GL_OVERLAY_NV														0x9296
#define GL_DARKEN_NV														0x9297
#define GL_LIGHTEN_NV														0x9298
#define GL_COLORDODGE_NV													0x9299
#define GL_COLORBURN_NV														0x929A
#define GL_HARDLIGHT_NV														0x929B
#define GL_SOFTLIGHT_NV														0x929C
#define GL_DIFFERENCE_NV													0x929E
#define GL_MINUS_NV															0x929F
#define GL_EXCLUSION_NV														0x92A0
#define GL_CONTRAST_NV														0x92A1
#define GL_INVERT_RGB_NV													0x92A3
#define GL_LINEARDODGE_NV													0x92A4
#define GL_LINEARBURN_NV													0x92A5
#define GL_VIVIDLIGHT_NV													0x92A6
#define GL_LINEARLIGHT_NV													0x92A7
#define GL_PINLIGHT_NV														0x92A8
#define GL_HARDMIX_NV														0x92A9
#define GL_HSL_HUE_NV														0x92AD
#define GL_HSL_SATURATION_NV												0x92AE
#define GL_HSL_COLOR_NV														0x92AF
#define GL_HSL_LUMINOSITY_NV												0x92B0
#define GL_PLUS_CLAMPED_NV													0x92B1
#define GL_PLUS_CLAMPED_ALPHA_NV											0x92B2
#define GL_MINUS_CLAMPED_NV													0x92B3
#define GL_INVERT_OVG_NV													0x92B4

/*
	GL_NV_blend_minmax_factor
*/
#define GL_FACTOR_MIN_AMD													0x901C
#define GL_FACTOR_MAX_AMD													0x901D

/*
	GL_NV_clip_space_w_scaling
*/
#define GL_VIEWPORT_POSITION_W_SCALE_NV										0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV								0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV								0x937E

/*
	GL_NV_command_list
*/
#define GL_TERMINATE_SEQUENCE_COMMAND_NV									0x0000
#define GL_NOP_COMMAND_NV													0x0001
#define GL_DRAW_ELEMENTS_COMMAND_NV											0x0002
#define GL_DRAW_ARRAYS_COMMAND_NV											0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV									0x0004
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV										0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV								0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV									0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV										0x0008
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV										0x0009
#define GL_UNIFORM_ADDRESS_COMMAND_NV										0x000a
#define GL_BLEND_COLOR_COMMAND_NV											0x000b
#define GL_STENCIL_REF_COMMAND_NV											0x000c
#define GL_LINE_WIDTH_COMMAND_NV											0x000d
#define GL_POLYGON_OFFSET_COMMAND_NV										0x000e
#define GL_ALPHA_REF_COMMAND_NV												0x000f
#define GL_VIEWPORT_COMMAND_NV												0x0010
#define GL_SCISSOR_COMMAND_NV												0x0011
#define GL_FRONT_FACE_COMMAND_NV											0x0012

/*
	GL_NV_compute_program5
*/
#define GL_COMPUTE_PROGRAM_NV												0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV								0x90FC

/*
	GL_NV_conditional_render
*/
#define GL_QUERY_WAIT_NV													0x8E13
#define GL_QUERY_NO_WAIT_NV													0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV											0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV										0x8E16

/*
	GL_NV_conservative_raster
*/
#define GL_CONSERVATIVE_RASTERIZATION_NV									0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV								0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV								0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV								0x9349

/*
	GL_NV_conservative_raster_dilate
*/
#define GL_CONSERVATIVE_RASTER_DILATE_NV									0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV								0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV						0x937B

/*
	GL_NV_conservative_raster_pre_snap_triangles
*/
#define GL_CONSERVATIVE_RASTER_MODE_NV										0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV							0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV					0x954F

/*
	GL_NV_copy_buffer
*/
#define GL_COPY_READ_BUFFER_NV												0x8F36
#define GL_COPY_WRITE_BUFFER_NV												0x8F37

/*
	GL_NV_copy_depth_to_color
*/
#define GL_DEPTH_STENCIL_TO_RGBA_NV											0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV											0x886F

/*
	GL_NV_deep_texture3D
*/
#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV								0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV										0x90D1

/*
	GL_NV_depth_buffer_float
*/
#define GL_DEPTH_COMPONENT32F_NV											0x8DAB
#define GL_DEPTH32F_STENCIL8_NV												0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV								0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV										0x8DAF

/*
	GL_NV_depth_clamp
*/
#define GL_DEPTH_CLAMP_NV													0x864F

/*
	GL_NV_depth_range_unclamped
*/
#define GL_SAMPLE_COUNT_BITS_NV												0x8864
#define GL_CURRENT_SAMPLE_COUNT_QUERY_NV									0x8865
#define GL_QUERY_RESULT_NV													0x8866
#define GL_QUERY_RESULT_AVAILABLE_NV										0x8867
#define GL_SAMPLE_COUNT_NV													0x8914

/*
	GL_NV_draw_buffers
*/
#define GL_MAX_DRAW_BUFFERS_NV												0x8824
#define GL_DRAW_BUFFER0_NV													0x8825
#define GL_DRAW_BUFFER1_NV													0x8826
#define GL_DRAW_BUFFER2_NV													0x8827
#define GL_DRAW_BUFFER3_NV													0x8828
#define GL_DRAW_BUFFER4_NV													0x8829
#define GL_DRAW_BUFFER5_NV													0x882A
#define GL_DRAW_BUFFER6_NV													0x882B
#define GL_DRAW_BUFFER7_NV													0x882C
#define GL_DRAW_BUFFER8_NV													0x882D
#define GL_DRAW_BUFFER9_NV													0x882E
#define GL_DRAW_BUFFER10_NV													0x882F
#define GL_DRAW_BUFFER11_NV													0x8830
#define GL_DRAW_BUFFER12_NV													0x8831
#define GL_DRAW_BUFFER13_NV													0x8832
#define GL_DRAW_BUFFER14_NV													0x8833
#define GL_DRAW_BUFFER15_NV													0x8834
#define GL_COLOR_ATTACHMENT0_NV												0x8CE0
#define GL_COLOR_ATTACHMENT1_NV												0x8CE1
#define GL_COLOR_ATTACHMENT2_NV												0x8CE2
#define GL_COLOR_ATTACHMENT3_NV												0x8CE3
#define GL_COLOR_ATTACHMENT4_NV												0x8CE4
#define GL_COLOR_ATTACHMENT5_NV												0x8CE5
#define GL_COLOR_ATTACHMENT6_NV												0x8CE6
#define GL_COLOR_ATTACHMENT7_NV												0x8CE7
#define GL_COLOR_ATTACHMENT8_NV												0x8CE8
#define GL_COLOR_ATTACHMENT9_NV												0x8CE9
#define GL_COLOR_ATTACHMENT10_NV											0x8CEA
#define GL_COLOR_ATTACHMENT11_NV											0x8CEB
#define GL_COLOR_ATTACHMENT12_NV											0x8CEC
#define GL_COLOR_ATTACHMENT13_NV											0x8CED
#define GL_COLOR_ATTACHMENT14_NV											0x8CEE
#define GL_COLOR_ATTACHMENT15_NV											0x8CEF

/*
	GL_NV_evaluators
*/
#define GL_EVAL_2D_NV														0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV											0x86C1
#define GL_MAP_TESSELLATION_NV												0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV											0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV											0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV									0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV											0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV											0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV											0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV											0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV											0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV											0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV											0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV											0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV											0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV											0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV											0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV											0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV											0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV											0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV											0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV											0x86D5
#define GL_MAX_MAP_TESSELLATION_NV											0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV										0x86D7

/*
	GL_NV_explicit_multisample
*/
#define GL_SAMPLE_POSITION_NV												0x8E50
#define GL_SAMPLE_MASK_NV													0x8E51
#define GL_SAMPLE_MASK_VALUE_NV												0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV									0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV						0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV											0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV											0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV										0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV								0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS_NV											0x8E59

/*
	GL_NV_fbo_color_attachments
*/
#define GL_MAX_COLOR_ATTACHMENTS_NV											0x8CDF
#define GL_COLOR_ATTACHMENT0_NV												0x8CE0
#define GL_COLOR_ATTACHMENT1_NV												0x8CE1
#define GL_COLOR_ATTACHMENT2_NV												0x8CE2
#define GL_COLOR_ATTACHMENT3_NV												0x8CE3
#define GL_COLOR_ATTACHMENT4_NV												0x8CE4
#define GL_COLOR_ATTACHMENT5_NV												0x8CE5
#define GL_COLOR_ATTACHMENT6_NV												0x8CE6
#define GL_COLOR_ATTACHMENT7_NV												0x8CE7
#define GL_COLOR_ATTACHMENT8_NV												0x8CE8
#define GL_COLOR_ATTACHMENT9_NV												0x8CE9
#define GL_COLOR_ATTACHMENT10_NV											0x8CEA
#define GL_COLOR_ATTACHMENT11_NV											0x8CEB
#define GL_COLOR_ATTACHMENT12_NV											0x8CEC
#define GL_COLOR_ATTACHMENT13_NV											0x8CED
#define GL_COLOR_ATTACHMENT14_NV											0x8CEE
#define GL_COLOR_ATTACHMENT15_NV											0x8CEF

/*
	GL_NV_fence
*/
#define GL_ALL_COMPLETED_NV													0x84F2
#define GL_FENCE_STATUS_NV													0x84F3
#define GL_FENCE_CONDITION_NV												0x84F4

/*
	GL_NV_fill_rectangle
*/
#define GL_FILL_RECTANGLE_NV												0x933C

/*
	GL_NV_float_buffer
*/
#define GL_FLOAT_R_NV														0x8880
#define GL_FLOAT_RG_NV														0x8881
#define GL_FLOAT_RGB_NV														0x8882
#define GL_FLOAT_RGBA_NV													0x8883
#define GL_FLOAT_R16_NV														0x8884
#define GL_FLOAT_R32_NV														0x8885
#define GL_FLOAT_RG16_NV													0x8886
#define GL_FLOAT_RG32_NV													0x8887
#define GL_FLOAT_RGB16_NV													0x8888
#define GL_FLOAT_RGB32_NV													0x8889
#define GL_FLOAT_RGBA16_NV													0x888A
#define GL_FLOAT_RGBA32_NV													0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV										0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV										0x888D
#define GL_FLOAT_RGBA_MODE_NV												0x888E

/*
	GL_NV_fog_distance
*/
#define GL_FOG_DISTANCE_MODE_NV												0x855A
#define GL_EYE_RADIAL_NV													0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV											0x855C

/*
	GL_NV_fragment_coverage_to_color
*/
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV									0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV										0x92DE

/*
	GL_NV_fragment_program
*/
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV							0x8868
#define GL_FRAGMENT_PROGRAM_NV												0x8870
#define GL_MAX_TEXTURE_COORDS_NV											0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV										0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV										0x8873
#define GL_PROGRAM_ERROR_STRING_NV											0x8874

/*
	GL_NV_fragment_program2
*/
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV									0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV										0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV											0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV										0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV										0x88F8

/*
	GL_NV_framebuffer_blit
*/
#define GL_DRAW_FRAMEBUFFER_BINDING_NV										0x8CA6
#define GL_READ_FRAMEBUFFER_NV												0x8CA8
#define GL_DRAW_FRAMEBUFFER_NV												0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING_NV										0x8CAA

/*
	GL_NV_framebuffer_mixed_samples
*/
#define GL_COLOR_SAMPLES_NV													0x8E20
#define GL_RASTER_MULTISAMPLE_EXT											0x9327
#define GL_RASTER_SAMPLES_EXT												0x9328
#define GL_MAX_RASTER_SAMPLES_EXT											0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT								0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT							0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT										0x932C
#define GL_DEPTH_SAMPLES_NV													0x932D
#define GL_STENCIL_SAMPLES_NV												0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV									0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV								0x9330
#define GL_COVERAGE_MODULATION_TABLE_NV										0x9331
#define GL_COVERAGE_MODULATION_NV											0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV								0x9333

/*
	GL_NV_framebuffer_multisample
*/
#define GL_RENDERBUFFER_SAMPLES_NV											0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV							0x8D56
#define GL_MAX_SAMPLES_NV													0x8D57

/*
	GL_NV_framebuffer_multisample_coverage
*/
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV									0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV									0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV								0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV									0x8E12

/*
	GL_NV_geometry_program4
*/
#define GL_GEOMETRY_PROGRAM_NV												0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV									0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV							0x8C28

/*
	GL_NV_gpu_multicast
*/
#define GL_PER_GPU_STORAGE_BIT_NV											0x0800
#define GL_MULTICAST_GPUS_NV												0x92BA
#define GL_PER_GPU_STORAGE_NV												0x9548
#define GL_MULTICAST_PROGRAMMABLE_SAMPLE_LOCATION_NV						0x9549
#define GL_RENDER_GPU_MASK_NV												0x9558

/*
	GL_NV_gpu_program4
*/
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV										0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV										0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV										0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV										0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV									0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV									0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV									0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV									0x8DA6

/*
	GL_NV_gpu_program5
*/
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV								0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV								0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV								0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV					0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV								0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV								0x8E5F

/*
	GL_NV_gpu_shader5
*/
#define GL_INT64_NV															0x140E
#define GL_UNSIGNED_INT64_NV												0x140F
#define GL_INT8_NV															0x8FE0
#define GL_INT8_VEC2_NV														0x8FE1
#define GL_INT8_VEC3_NV														0x8FE2
#define GL_INT8_VEC4_NV														0x8FE3
#define GL_INT16_NV															0x8FE4
#define GL_INT16_VEC2_NV													0x8FE5
#define GL_INT16_VEC3_NV													0x8FE6
#define GL_INT16_VEC4_NV													0x8FE7
#define GL_INT64_VEC2_NV													0x8FE9
#define GL_INT64_VEC3_NV													0x8FEA
#define GL_INT64_VEC4_NV													0x8FEB
#define GL_UNSIGNED_INT8_NV													0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV											0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV											0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV											0x8FEF
#define GL_UNSIGNED_INT16_NV												0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV											0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV											0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV											0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV											0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV											0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV											0x8FF7
#define GL_FLOAT16_NV														0x8FF8
#define GL_FLOAT16_VEC2_NV													0x8FF9
#define GL_FLOAT16_VEC3_NV													0x8FFA
#define GL_FLOAT16_VEC4_NV													0x8FFB

/*
	GL_NV_half_float
*/
#define GL_HALF_FLOAT_NV													0x140B

/*
	GL_NV_instanced_arrays
*/
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV									0x88FE

/*
	GL_NV_internalformat_sample_query
*/
#define GL_MULTISAMPLES_NV													0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV											0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV											0x9373
#define GL_CONFORMANT_NV													0x9374

/*
	GL_NV_light_max_exponent
*/
#define GL_MAX_SHININESS_NV													0x8504
#define GL_MAX_SPOT_EXPONENT_NV												0x8505

/*
	GL_NV_multisample_coverage
*/
#define GL_COLOR_SAMPLES_NV													0x8E20

/*
	GL_NV_multisample_filter_hint
*/
#define GL_MULTISAMPLE_FILTER_HINT_NV										0x8534

/*
	GL_NV_non_square_matrices
*/
#define GL_FLOAT_MAT2x3_NV													0x8B65
#define GL_FLOAT_MAT2x4_NV													0x8B66
#define GL_FLOAT_MAT3x2_NV													0x8B67
#define GL_FLOAT_MAT3x4_NV													0x8B68
#define GL_FLOAT_MAT4x2_NV													0x8B69
#define GL_FLOAT_MAT4x3_NV													0x8B6A

/*
	GL_NV_occlusion_query
*/
#define GL_PIXEL_COUNTER_BITS_NV											0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV									0x8865
#define GL_PIXEL_COUNT_NV													0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV											0x8867

/*
	GL_NV_pack_subimage
*/
#define GL_PACK_ROW_LENGTH_NV												0x0D02
#define GL_PACK_SKIP_ROWS_NV												0x0D03
#define GL_PACK_SKIP_PIXELS_NV												0x0D04

/*
	GL_NV_packed_depth_stencil
*/
#define GL_DEPTH_STENCIL_NV													0x84F9
#define GL_UNSIGNED_INT_24_8_NV												0x84FA

/*
	GL_NV_packed_float
*/
#define GL_R11F_G11F_B10F_NV												0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_NV									0x8C3B

/*
	GL_NV_packed_float_linear
*/
#define GL_R11F_G11F_B10F_NV												0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_NV									0x8C3B

/*
	GL_NV_parameter_buffer_object
*/
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV							0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV								0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV								0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV								0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV								0x8DA4

/*
	GL_NV_path_rendering
*/
#define GL_CLOSE_PATH_NV													0x00
#define GL_BOLD_BIT_NV														0x01
#define GL_GLYPH_WIDTH_BIT_NV												0x01
#define GL_GLYPH_HEIGHT_BIT_NV												0x02
#define GL_ITALIC_BIT_NV													0x02
#define GL_MOVE_TO_NV														0x02
#define GL_RELATIVE_MOVE_TO_NV												0x03
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV								0x04
#define GL_LINE_TO_NV														0x04
#define GL_RELATIVE_LINE_TO_NV												0x05
#define GL_HORIZONTAL_LINE_TO_NV											0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV									0x07
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV								0x08
#define GL_VERTICAL_LINE_TO_NV												0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV										0x09
#define GL_QUADRATIC_CURVE_TO_NV											0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV									0x0B
#define GL_CUBIC_CURVE_TO_NV												0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV										0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV										0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV							0x0F
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV							0x10
#define GL_SMOOTH_CUBIC_CURVE_TO_NV											0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV								0x11
#define GL_SMALL_CCW_ARC_TO_NV												0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV										0x13
#define GL_SMALL_CW_ARC_TO_NV												0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV										0x15
#define GL_LARGE_CCW_ARC_TO_NV												0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV										0x17
#define GL_LARGE_CW_ARC_TO_NV												0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV										0x19
#define GL_CONIC_CURVE_TO_NV												0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV										0x1B
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV									0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV									0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV							0x80
#define GL_ROUNDED_RECT_NV													0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV											0xE9
#define GL_ROUNDED_RECT2_NV													0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV										0xEB
#define GL_ROUNDED_RECT4_NV													0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV										0xED
#define GL_ROUNDED_RECT8_NV													0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV										0xEF
#define GL_RESTART_PATH_NV													0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV										0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV										0xF4
#define GL_RECT_NV															0xF6
#define GL_RELATIVE_RECT_NV													0xF7
#define GL_CIRCULAR_CCW_ARC_TO_NV											0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV											0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV										0xFC
#define GL_ARC_TO_NV														0xFE
#define GL_RELATIVE_ARC_TO_NV												0xFF
#define GL_GLYPH_HAS_KERNING_BIT_NV											0x100
#define GL_PRIMARY_COLOR_NV													0x852C
#define GL_SECONDARY_COLOR_NV												0x852D
#define GL_PRIMARY_COLOR													0x8577
#define GL_PATH_FORMAT_SVG_NV												0x9070
#define GL_PATH_FORMAT_PS_NV												0x9071
#define GL_STANDARD_FONT_NAME_NV											0x9072
#define GL_SYSTEM_FONT_NAME_NV												0x9073
#define GL_FILE_NAME_NV														0x9074
#define GL_PATH_STROKE_WIDTH_NV												0x9075
#define GL_PATH_END_CAPS_NV													0x9076
#define GL_PATH_INITIAL_END_CAP_NV											0x9077
#define GL_PATH_TERMINAL_END_CAP_NV											0x9078
#define GL_PATH_JOIN_STYLE_NV												0x9079
#define GL_PATH_MITER_LIMIT_NV												0x907A
#define GL_PATH_DASH_CAPS_NV												0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV											0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV										0x907D
#define GL_PATH_DASH_OFFSET_NV												0x907E
#define GL_PATH_CLIENT_LENGTH_NV											0x907F
#define GL_PATH_FILL_MODE_NV												0x9080
#define GL_PATH_FILL_MASK_NV												0x9081
#define GL_PATH_FILL_COVER_MODE_NV											0x9082
#define GL_PATH_STROKE_COVER_MODE_NV										0x9083
#define GL_PATH_STROKE_MASK_NV												0x9084
#define GL_PATH_STROKE_BOUND_NV												0x9086
#define GL_COUNT_UP_NV														0x9088
#define GL_COUNT_DOWN_NV													0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV										0x908A
#define GL_CONVEX_HULL_NV													0x908B
#define GL_BOUNDING_BOX_NV													0x908D
#define GL_TRANSLATE_X_NV													0x908E
#define GL_TRANSLATE_Y_NV													0x908F
#define GL_TRANSLATE_2D_NV													0x9090
#define GL_TRANSLATE_3D_NV													0x9091
#define GL_AFFINE_2D_NV														0x9092
#define GL_AFFINE_3D_NV														0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV											0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV											0x9098
#define GL_UTF8_NV															0x909A
#define GL_UTF16_NV															0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV								0x909C
#define GL_PATH_COMMAND_COUNT_NV											0x909D
#define GL_PATH_COORD_COUNT_NV												0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV											0x909F
#define GL_PATH_COMPUTED_LENGTH_NV											0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV										0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV										0x90A2
#define GL_SQUARE_NV														0x90A3
#define GL_ROUND_NV															0x90A4
#define GL_TRIANGULAR_NV													0x90A5
#define GL_BEVEL_NV															0x90A6
#define GL_MITER_REVERT_NV													0x90A7
#define GL_MITER_TRUNCATE_NV												0x90A8
#define GL_SKIP_MISSING_GLYPH_NV											0x90A9
#define GL_USE_MISSING_GLYPH_NV												0x90AA
#define GL_PATH_ERROR_POSITION_NV											0x90AB
#define GL_PATH_FOG_GEN_MODE_NV												0x90AC
#define GL_ACCUM_ADJACENT_PAIRS_NV											0x90AD
#define GL_ADJACENT_PAIRS_NV												0x90AE
#define GL_FIRST_TO_REST_NV													0x90AF
#define GL_PATH_GEN_MODE_NV													0x90B0
#define GL_PATH_GEN_COEFF_NV												0x90B1
#define GL_PATH_GEN_COLOR_FORMAT_NV											0x90B2
#define GL_PATH_GEN_COMPONENTS_NV											0x90B3
#define GL_PATH_DASH_OFFSET_RESET_NV										0x90B4
#define GL_MOVE_TO_RESETS_NV												0x90B5
#define GL_MOVE_TO_CONTINUES_NV												0x90B6
#define GL_PATH_STENCIL_FUNC_NV												0x90B7
#define GL_PATH_STENCIL_REF_NV												0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV										0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV								0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV								0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV											0x90BF
#define GL_FONT_GLYPHS_AVAILABLE_NV											0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV										0x9369
#define GL_FONT_UNAVAILABLE_NV												0x936A
#define GL_FONT_UNINTELLIGIBLE_NV											0x936B
#define GL_STANDARD_FONT_FORMAT_NV											0x936C
#define GL_FRAGMENT_INPUT_NV												0x936D
#define GL_FONT_X_MIN_BOUNDS_BIT_NV											0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV											0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV											0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV											0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV											0x00100000
#define GL_FONT_ASCENDER_BIT_NV												0x00200000
#define GL_FONT_DESCENDER_BIT_NV											0x00400000
#define GL_FONT_HEIGHT_BIT_NV												0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV									0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV									0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV									0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV									0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV											0x10000000
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV									0x20000000

/*
	GL_NV_path_rendering_shared_edge
*/
#define GL_SHARED_EDGE_NV													0xC0

/*
	GL_NV_pixel_buffer_object
*/
#define GL_PIXEL_PACK_BUFFER_NV												0x88EB
#define GL_PIXEL_UNPACK_BUFFER_NV											0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_NV										0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_NV									0x88EF

/*
	GL_NV_pixel_data_range
*/
#define GL_WRITE_PIXEL_DATA_RANGE_NV										0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV											0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV									0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV									0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV								0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV									0x887D

/*
	GL_NV_platform_binary
*/
#define GL_NVIDIA_PLATFORM_BINARY_NV										0x890B

/*
	GL_NV_point_sprite
*/
#define GL_POINT_SPRITE_NV													0x8861
#define GL_COORD_REPLACE_NV													0x8862
#define GL_POINT_SPRITE_R_MODE_NV											0x8863

/*
	GL_NV_polygon_mode
*/
#define GL_POLYGON_MODE_NV													0x0B40
#define GL_POINT_NV															0x1B00
#define GL_LINE_NV															0x1B01
#define GL_FILL_NV															0x1B02
#define GL_POLYGON_OFFSET_POINT_NV											0x2A01
#define GL_POLYGON_OFFSET_LINE_NV											0x2A02

/*
	GL_NV_present_video
*/
#define GL_FRAME_NV															0x8E26
#define GL_FIELDS_NV														0x8E27
#define GL_CURRENT_TIME_NV													0x8E28
#define GL_NUM_FILL_STREAMS_NV												0x8E29
#define GL_PRESENT_TIME_NV													0x8E2A
#define GL_PRESENT_DURATION_NV												0x8E2B

/*
	GL_NV_primitive_restart
*/
#define GL_PRIMITIVE_RESTART_NV												0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV										0x8559

/*
	GL_NV_register_combiners
*/
#define GL_REGISTER_COMBINERS_NV											0x8522
#define GL_VARIABLE_A_NV													0x8523
#define GL_VARIABLE_B_NV													0x8524
#define GL_VARIABLE_C_NV													0x8525
#define GL_VARIABLE_D_NV													0x8526
#define GL_VARIABLE_E_NV													0x8527
#define GL_VARIABLE_F_NV													0x8528
#define GL_VARIABLE_G_NV													0x8529
#define GL_CONSTANT_COLOR0_NV												0x852A
#define GL_CONSTANT_COLOR1_NV												0x852B
#define GL_PRIMARY_COLOR_NV													0x852C
#define GL_SECONDARY_COLOR_NV												0x852D
#define GL_SPARE0_NV														0x852E
#define GL_SPARE1_NV														0x852F
#define GL_DISCARD_NV														0x8530
#define GL_E_TIMES_F_NV														0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV									0x8532
#define GL_UNSIGNED_IDENTITY_NV												0x8536
#define GL_UNSIGNED_INVERT_NV												0x8537
#define GL_EXPAND_NORMAL_NV													0x8538
#define GL_EXPAND_NEGATE_NV													0x8539
#define GL_HALF_BIAS_NORMAL_NV												0x853A
#define GL_HALF_BIAS_NEGATE_NV												0x853B
#define GL_SIGNED_IDENTITY_NV												0x853C
#define GL_SIGNED_NEGATE_NV													0x853D
#define GL_SCALE_BY_TWO_NV													0x853E
#define GL_SCALE_BY_FOUR_NV													0x853F
#define GL_SCALE_BY_ONE_HALF_NV												0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV										0x8541
#define GL_COMBINER_INPUT_NV												0x8542
#define GL_COMBINER_MAPPING_NV												0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV										0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV										0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV										0x8546
#define GL_COMBINER_MUX_SUM_NV												0x8547
#define GL_COMBINER_SCALE_NV												0x8548
#define GL_COMBINER_BIAS_NV													0x8549
#define GL_COMBINER_AB_OUTPUT_NV											0x854A
#define GL_COMBINER_CD_OUTPUT_NV											0x854B
#define GL_COMBINER_SUM_OUTPUT_NV											0x854C
#define GL_MAX_GENERAL_COMBINERS_NV											0x854D
#define GL_NUM_GENERAL_COMBINERS_NV											0x854E
#define GL_COLOR_SUM_CLAMP_NV												0x854F
#define GL_COMBINER0_NV														0x8550
#define GL_COMBINER1_NV														0x8551
#define GL_COMBINER2_NV														0x8552
#define GL_COMBINER3_NV														0x8553
#define GL_COMBINER4_NV														0x8554
#define GL_COMBINER5_NV														0x8555
#define GL_COMBINER6_NV														0x8556
#define GL_COMBINER7_NV														0x8557

/*
	GL_NV_register_combiners2
*/
#define GL_PER_STAGE_CONSTANTS_NV											0x8535

/*
	GL_NV_robustness_video_memory_purge
*/
#define GL_EGL_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV						0x334C
#define GL_PURGED_CONTEXT_RESET_NV											0x92BB

/*
	GL_NV_sRGB_formats
*/
#define GL_ETC1_SRGB8_NV													0x88EE
#define GL_SRGB8_NV															0x8C41
#define GL_SLUMINANCE_ALPHA_NV												0x8C44
#define GL_SLUMINANCE8_ALPHA8_NV											0x8C45
#define GL_SLUMINANCE_NV													0x8C46
#define GL_SLUMINANCE8_NV													0x8C47
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV										0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV								0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV								0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV								0x8C4F

/*
	GL_NV_sample_locations
*/
#define GL_SAMPLE_LOCATION_NV												0x8E50
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV									0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV								0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV								0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV						0x9340
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV									0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV						0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV						0x9343

/*
	GL_NV_shader_buffer_load
*/
#define GL_BUFFER_GPU_ADDRESS_NV											0x8F1D
#define GL_GPU_ADDRESS_NV													0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV										0x8F35

/*
	GL_NV_shader_thread_group
*/
#define GL_WARP_SIZE_NV														0x9339
#define GL_WARPS_PER_SM_NV													0x933A
#define GL_SM_COUNT_NV														0x933B

/*
	GL_NV_shadow_samplers_array
*/
#define GL_SAMPLER_2D_ARRAY_SHADOW_NV										0x8DC4

/*
	GL_NV_shadow_samplers_cube
*/
#define GL_SAMPLER_CUBE_SHADOW_NV											0x8DC5

/*
	GL_NV_tessellation_program5
*/
#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV										0x86D8
#define GL_TESS_CONTROL_PROGRAM_NV											0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV										0x891F
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV							0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV						0x8C75

/*
	GL_NV_texgen_emboss
*/
#define GL_EMBOSS_LIGHT_NV													0x855D
#define GL_EMBOSS_CONSTANT_NV												0x855E
#define GL_EMBOSS_MAP_NV													0x855F

/*
	GL_NV_texgen_reflection
*/
#define GL_NORMAL_MAP_NV													0x8511
#define GL_REFLECTION_MAP_NV												0x8512

/*
	GL_NV_texture_array
*/
#define GL_UNPACK_SKIP_IMAGES_NV											0x806D
#define GL_UNPACK_IMAGE_HEIGHT_NV											0x806E
#define GL_MAX_ARRAY_TEXTURE_LAYERS_NV										0x88FF
#define GL_TEXTURE_2D_ARRAY_NV												0x8C1A
#define GL_TEXTURE_BINDING_2D_ARRAY_NV										0x8C1D
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_NV							0x8CD4
#define GL_SAMPLER_2D_ARRAY_NV												0x8DC1

/*
	GL_NV_texture_border_clamp
*/
#define GL_TEXTURE_BORDER_COLOR_NV											0x1004
#define GL_CLAMP_TO_BORDER_NV												0x812D

/*
	GL_NV_texture_compression_latc
*/
#define GL_COMPRESSED_LUMINANCE_LATC1_NV									0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_NV								0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_NV								0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_NV						0x8C73

/*
	GL_NV_texture_compression_s3tc
*/
#define GL_COMPRESSED_RGB_S3TC_DXT1_NV										0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_NV										0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_NV										0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_NV										0x83F3

/*
	GL_NV_texture_env_combine4
*/
#define GL_COMBINE4_NV														0x8503
#define GL_SOURCE3_RGB_NV													0x8583
#define GL_SOURCE3_ALPHA_NV													0x858B
#define GL_OPERAND3_RGB_NV													0x8593
#define GL_OPERAND3_ALPHA_NV												0x859B

/*
	GL_NV_texture_expand_normal
*/
#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV									0x888F

/*
	GL_NV_texture_multisample
*/
#define GL_TEXTURE_COVERAGE_SAMPLES_NV										0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV											0x9046

/*
	GL_NV_texture_rectangle
*/
#define GL_TEXTURE_RECTANGLE_NV												0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV										0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV										0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV									0x84F8

/*
	GL_NV_texture_shader
*/
#define GL_OFFSET_TEXTURE_RECTANGLE_NV										0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV								0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV									0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV								0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV										0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV									0x86DB
#define GL_DSDT_MAG_INTENSITY_NV											0x86DC
#define GL_SHADER_CONSISTENT_NV												0x86DD
#define GL_TEXTURE_SHADER_NV												0x86DE
#define GL_SHADER_OPERATION_NV												0x86DF
#define GL_CULL_MODES_NV													0x86E0
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV										0x86E1
#define GL_OFFSET_TEXTURE_MATRIX_NV											0x86E1
#define GL_OFFSET_TEXTURE_2D_SCALE_NV										0x86E2
#define GL_OFFSET_TEXTURE_SCALE_NV											0x86E2
#define GL_OFFSET_TEXTURE_2D_BIAS_NV										0x86E3
#define GL_OFFSET_TEXTURE_BIAS_NV											0x86E3
#define GL_PREVIOUS_TEXTURE_INPUT_NV										0x86E4
#define GL_CONST_EYE_NV														0x86E5
#define GL_PASS_THROUGH_NV													0x86E6
#define GL_CULL_FRAGMENT_NV													0x86E7
#define GL_OFFSET_TEXTURE_2D_NV												0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV										0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV										0x86EA
#define GL_DOT_PRODUCT_NV													0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV										0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV										0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV									0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV									0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV									0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV						0x86F3
#define GL_HILO_NV															0x86F4
#define GL_DSDT_NV															0x86F5
#define GL_DSDT_MAG_NV														0x86F6
#define GL_DSDT_MAG_VIB_NV													0x86F7
#define GL_HILO16_NV														0x86F8
#define GL_SIGNED_HILO_NV													0x86F9
#define GL_SIGNED_HILO16_NV													0x86FA
#define GL_SIGNED_RGBA_NV													0x86FB
#define GL_SIGNED_RGBA8_NV													0x86FC
#define GL_SIGNED_RGB_NV													0x86FE
#define GL_SIGNED_RGB8_NV													0x86FF
#define GL_SIGNED_LUMINANCE_NV												0x8701
#define GL_SIGNED_LUMINANCE8_NV												0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV										0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV										0x8704
#define GL_SIGNED_ALPHA_NV													0x8705
#define GL_SIGNED_ALPHA8_NV													0x8706
#define GL_SIGNED_INTENSITY_NV												0x8707
#define GL_SIGNED_INTENSITY8_NV												0x8708
#define GL_DSDT8_NV															0x8709
#define GL_DSDT8_MAG8_NV													0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV											0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV										0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV									0x870D
#define GL_HI_SCALE_NV														0x870E
#define GL_LO_SCALE_NV														0x870F
#define GL_DS_SCALE_NV														0x8710
#define GL_DT_SCALE_NV														0x8711
#define GL_MAGNITUDE_SCALE_NV												0x8712
#define GL_VIBRANCE_SCALE_NV												0x8713
#define GL_HI_BIAS_NV														0x8714
#define GL_LO_BIAS_NV														0x8715
#define GL_DS_BIAS_NV														0x8716
#define GL_DT_BIAS_NV														0x8717
#define GL_MAGNITUDE_BIAS_NV												0x8718
#define GL_VIBRANCE_BIAS_NV													0x8719
#define GL_TEXTURE_BORDER_VALUES_NV											0x871A
#define GL_TEXTURE_HI_SIZE_NV												0x871B
#define GL_TEXTURE_LO_SIZE_NV												0x871C
#define GL_TEXTURE_DS_SIZE_NV												0x871D
#define GL_TEXTURE_DT_SIZE_NV												0x871E
#define GL_TEXTURE_MAG_SIZE_NV												0x871F

/*
	GL_NV_texture_shader2
*/
#define GL_UNSIGNED_INT_S8_S8_8_8_NV										0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV									0x86DB
#define GL_DSDT_MAG_INTENSITY_NV											0x86DC
#define GL_DOT_PRODUCT_TEXTURE_3D_NV										0x86EF
#define GL_HILO_NV															0x86F4
#define GL_DSDT_NV															0x86F5
#define GL_DSDT_MAG_NV														0x86F6
#define GL_DSDT_MAG_VIB_NV													0x86F7
#define GL_HILO16_NV														0x86F8
#define GL_SIGNED_HILO_NV													0x86F9
#define GL_SIGNED_HILO16_NV													0x86FA
#define GL_SIGNED_RGBA_NV													0x86FB
#define GL_SIGNED_RGBA8_NV													0x86FC
#define GL_SIGNED_RGB_NV													0x86FE
#define GL_SIGNED_RGB8_NV													0x86FF
#define GL_SIGNED_LUMINANCE_NV												0x8701
#define GL_SIGNED_LUMINANCE8_NV												0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV										0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV										0x8704
#define GL_SIGNED_ALPHA_NV													0x8705
#define GL_SIGNED_ALPHA8_NV													0x8706
#define GL_SIGNED_INTENSITY_NV												0x8707
#define GL_SIGNED_INTENSITY8_NV												0x8708
#define GL_DSDT8_NV															0x8709
#define GL_DSDT8_MAG8_NV													0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV											0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV										0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV									0x870D

/*
	GL_NV_texture_shader3
*/
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV									0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV							0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV							0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV						0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV										0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV									0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV								0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV						0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV										0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV										0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV								0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV										0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV										0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV								0x885D
#define GL_HILO8_NV															0x885E
#define GL_SIGNED_HILO8_NV													0x885F
#define GL_FORCE_BLUE_TO_ONE_NV												0x8860

/*
	GL_NV_transform_feedback
*/
#define GL_BACK_PRIMARY_COLOR_NV											0x8C77
#define GL_BACK_SECONDARY_COLOR_NV											0x8C78
#define GL_TEXTURE_COORD_NV													0x8C79
#define GL_CLIP_DISTANCE_NV													0x8C7A
#define GL_VERTEX_ID_NV														0x8C7B
#define GL_PRIMITIVE_ID_NV													0x8C7C
#define GL_GENERIC_ATTRIB_NV												0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV									0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV								0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV					0x8C80
#define GL_ACTIVE_VARYINGS_NV												0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV										0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV									0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV								0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV								0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV										0x8C86
#define GL_PRIMITIVES_GENERATED_NV											0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV							0x8C88
#define GL_RASTERIZER_DISCARD_NV											0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV					0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV						0x8C8B
#define GL_INTERLEAVED_ATTRIBS_NV											0x8C8C
#define GL_SEPARATE_ATTRIBS_NV												0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV										0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV								0x8C8F

/*
	GL_NV_transform_feedback2
*/
#define GL_TRANSFORM_FEEDBACK_NV											0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV								0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV								0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV									0x8E25

/*
	GL_NV_uniform_buffer_unified_memory
*/
#define GL_UNIFORM_BUFFER_UNIFIED_NV										0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV										0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV											0x9370

/*
	GL_NV_vdpau_interop
*/
#define GL_SURFACE_STATE_NV													0x86EB
#define GL_SURFACE_REGISTERED_NV											0x86FD
#define GL_SURFACE_MAPPED_NV												0x8700
#define GL_WRITE_DISCARD_NV													0x88BE

/*
	GL_NV_vertex_array_range
*/
#define GL_VERTEX_ARRAY_RANGE_NV											0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV										0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV										0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV								0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV									0x8521

/*
	GL_NV_vertex_array_range2
*/
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV								0x8533

/*
	GL_NV_vertex_attrib_integer_64bit
*/
#define GL_INT64_NV															0x140E
#define GL_UNSIGNED_INT64_NV												0x140F

/*
	GL_NV_vertex_buffer_unified_memory
*/
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV									0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV											0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV									0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV											0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV											0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV											0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV											0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV									0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV										0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV									0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV										0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV											0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV									0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV											0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV											0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV											0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV											0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV									0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV										0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV									0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV										0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV											0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV											0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV											0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV											0x8F42

/*
	GL_NV_vertex_program
*/
#define GL_VERTEX_PROGRAM_NV												0x8620
#define GL_VERTEX_STATE_PROGRAM_NV											0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV												0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV											0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV												0x8625
#define GL_CURRENT_ATTRIB_NV												0x8626
#define GL_PROGRAM_LENGTH_NV												0x8627
#define GL_PROGRAM_STRING_NV												0x8628
#define GL_MODELVIEW_PROJECTION_NV											0x8629
#define GL_IDENTITY_NV														0x862A
#define GL_INVERSE_NV														0x862B
#define GL_TRANSPOSE_NV														0x862C
#define GL_INVERSE_TRANSPOSE_NV												0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV									0x862E
#define GL_MAX_TRACK_MATRICES_NV											0x862F
#define GL_MATRIX0_NV														0x8630
#define GL_MATRIX1_NV														0x8631
#define GL_MATRIX2_NV														0x8632
#define GL_MATRIX3_NV														0x8633
#define GL_MATRIX4_NV														0x8634
#define GL_MATRIX5_NV														0x8635
#define GL_MATRIX6_NV														0x8636
#define GL_MATRIX7_NV														0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV									0x8640
#define GL_CURRENT_MATRIX_NV												0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV										0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV										0x8643
#define GL_PROGRAM_PARAMETER_NV												0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV											0x8645
#define GL_PROGRAM_TARGET_NV												0x8646
#define GL_PROGRAM_RESIDENT_NV												0x8647
#define GL_TRACK_MATRIX_NV													0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV										0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV										0x864A
#define GL_PROGRAM_ERROR_POSITION_NV										0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV											0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV											0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV											0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV											0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV											0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV											0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV											0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV											0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV											0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV											0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV											0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV											0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV											0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV											0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV											0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV											0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV											0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV											0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV											0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV											0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV											0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV											0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV											0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV											0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV											0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV											0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV										0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV										0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV										0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV										0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV										0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV										0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV											0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV											0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV											0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV											0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV											0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV											0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV											0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV											0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV											0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV											0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV										0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV										0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV										0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV										0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV										0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV										0x867F

/*
	GL_NV_vertex_program2_option
*/
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV									0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV										0x88F5

/*
	GL_NV_vertex_program4
*/
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV									0x88FD

/*
	GL_NV_video_capture
*/
#define GL_VIDEO_BUFFER_NV													0x9020
#define GL_VIDEO_BUFFER_BINDING_NV											0x9021
#define GL_FIELD_UPPER_NV													0x9022
#define GL_FIELD_LOWER_NV													0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV										0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV								0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV								0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV										0x9027
#define GL_VIDEO_BUFFER_PITCH_NV											0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV									0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV									0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV									0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV									0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV									0x902D
#define GL_PARTIAL_SUCCESS_NV												0x902E
#define GL_SUCCESS_NV														0x902F
#define GL_FAILURE_NV														0x9030
#define GL_YCBYCR8_422_NV													0x9031
#define GL_YCBAYCR8A_4224_NV												0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV									0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV							0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV									0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV							0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV											0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV										0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV									0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV								0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV								0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV									0x903C

/*
	GL_NV_viewport_array
*/
#define GL_DEPTH_RANGE														0x0B70
#define GL_VIEWPORT															0x0BA2
#define GL_SCISSOR_BOX														0x0C10
#define GL_SCISSOR_TEST														0x0C11
#define GL_MAX_VIEWPORTS_NV													0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_NV										0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_NV											0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV								0x825F

/*
	GL_NV_viewport_swizzle
*/
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV									0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV									0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV									0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV									0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV									0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV									0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV									0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV									0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV											0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV											0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV											0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV											0x935B

/*
	GL_OML_interlace
*/
#define GL_INTERLACE_OML													0x8980
#define GL_INTERLACE_READ_OML												0x8981

/*
	GL_OML_resample
*/
#define GL_PACK_RESAMPLE_OML												0x8984
#define GL_UNPACK_RESAMPLE_OML												0x8985
#define GL_RESAMPLE_REPLICATE_OML											0x8986
#define GL_RESAMPLE_ZERO_FILL_OML											0x8987
#define GL_RESAMPLE_AVERAGE_OML												0x8988
#define GL_RESAMPLE_DECIMATE_OML											0x8989

/*
	GL_OML_subsample
*/
#define GL_FORMAT_SUBSAMPLE_24_24_OML										0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML										0x8983

/*
	GL_OVR_multiview
*/
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR						0x9630
#define GL_MAX_VIEWS_OVR													0x9631
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR				0x9632
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR							0x9633

/*
	GL_PGI_misc_hints
*/
#define GL_PREFER_DOUBLEBUFFER_HINT_PGI										107000
#define GL_CONSERVE_MEMORY_HINT_PGI											107005
#define GL_RECLAIM_MEMORY_HINT_PGI											107006
#define GL_NATIVE_GRAPHICS_HANDLE_PGI										107010
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI									107011
#define GL_NATIVE_GRAPHICS_END_HINT_PGI										107012
#define GL_ALWAYS_FAST_HINT_PGI												107020
#define GL_ALWAYS_SOFT_HINT_PGI												107021
#define GL_ALLOW_DRAW_OBJ_HINT_PGI											107022
#define GL_ALLOW_DRAW_WIN_HINT_PGI											107023
#define GL_ALLOW_DRAW_FRG_HINT_PGI											107024
#define GL_ALLOW_DRAW_MEM_HINT_PGI											107025
#define GL_STRICT_DEPTHFUNC_HINT_PGI										107030
#define GL_STRICT_LIGHTING_HINT_PGI											107031
#define GL_STRICT_SCISSOR_HINT_PGI											107032
#define GL_FULL_STIPPLE_HINT_PGI											107033
#define GL_CLIP_NEAR_HINT_PGI												107040
#define GL_CLIP_FAR_HINT_PGI												107041
#define GL_WIDE_LINE_HINT_PGI												107042
#define GL_BACK_NORMALS_HINT_PGI											107043

/*
	GL_PGI_vertex_hints
*/
#define GL_VERTEX23_BIT_PGI													0x00000004
#define GL_VERTEX4_BIT_PGI													0x00000008
#define GL_COLOR3_BIT_PGI													0x00010000
#define GL_COLOR4_BIT_PGI													0x00020000
#define GL_EDGEFLAG_BIT_PGI													0x00040000
#define GL_INDEX_BIT_PGI													0x00080000
#define GL_MAT_AMBIENT_BIT_PGI												0x00100000
#define GL_VERTEX_DATA_HINT_PGI												107050
#define GL_VERTEX_CONSISTENT_HINT_PGI										107051
#define GL_MATERIAL_SIDE_HINT_PGI											107052
#define GL_MAX_VERTEX_HINT_PGI												107053
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI									0x00200000
#define GL_MAT_DIFFUSE_BIT_PGI												0x00400000
#define GL_MAT_EMISSION_BIT_PGI												0x00800000
#define GL_MAT_COLOR_INDEXES_BIT_PGI										0x01000000
#define GL_MAT_SHININESS_BIT_PGI											0x02000000
#define GL_MAT_SPECULAR_BIT_PGI												0x04000000
#define GL_NORMAL_BIT_PGI													0x08000000
#define GL_TEXCOORD1_BIT_PGI												0x10000000
#define GL_TEXCOORD2_BIT_PGI												0x20000000
#define GL_TEXCOORD3_BIT_PGI												0x40000000
#define GL_TEXCOORD4_BIT_PGI												0x80000000

/*
	GL_QCOM_alpha_test
*/
#define GL_ALPHA_TEST_QCOM													0x0BC0
#define GL_ALPHA_TEST_FUNC_QCOM												0x0BC1
#define GL_ALPHA_TEST_REF_QCOM												0x0BC2

/*
	GL_QCOM_binning_control
*/
#define GL_DONT_CARE														0x1100
#define GL_BINNING_CONTROL_HINT_QCOM										0x8FB0
#define GL_CPU_OPTIMIZED_QCOM												0x8FB1
#define GL_GPU_OPTIMIZED_QCOM												0x8FB2
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM								0x8FB3

/*
	GL_QCOM_extended_get
*/
#define GL_TEXTURE_WIDTH_QCOM												0x8BD2
#define GL_TEXTURE_HEIGHT_QCOM												0x8BD3
#define GL_TEXTURE_DEPTH_QCOM												0x8BD4
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM										0x8BD5
#define GL_TEXTURE_FORMAT_QCOM												0x8BD6
#define GL_TEXTURE_TYPE_QCOM												0x8BD7
#define GL_TEXTURE_IMAGE_VALID_QCOM											0x8BD8
#define GL_TEXTURE_NUM_LEVELS_QCOM											0x8BD9
#define GL_TEXTURE_TARGET_QCOM												0x8BDA
#define GL_TEXTURE_OBJECT_VALID_QCOM										0x8BDB
#define GL_STATE_RESTORE													0x8BDC

/*
	GL_QCOM_framebuffer_foveated
*/
#define GL_FOVEATION_ENABLE_BIT_QCOM										0x1
#define GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM								0x2

/*
	GL_QCOM_perfmon_global_mode
*/
#define GL_PERFMON_GLOBAL_MODE_QCOM											0x8FA0

/*
	GL_QCOM_shader_framebuffer_fetch_noncoherent
*/
#define GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM								0x96A2

/*
	GL_QCOM_tiled_rendering
*/
#define GL_COLOR_BUFFER_BIT0_QCOM											0x00000001
#define GL_COLOR_BUFFER_BIT1_QCOM											0x00000002
#define GL_COLOR_BUFFER_BIT2_QCOM											0x00000004
#define GL_COLOR_BUFFER_BIT3_QCOM											0x00000008
#define GL_COLOR_BUFFER_BIT4_QCOM											0x00000010
#define GL_COLOR_BUFFER_BIT5_QCOM											0x00000020
#define GL_COLOR_BUFFER_BIT6_QCOM											0x00000040
#define GL_COLOR_BUFFER_BIT7_QCOM											0x00000080
#define GL_DEPTH_BUFFER_BIT0_QCOM											0x00000100
#define GL_DEPTH_BUFFER_BIT1_QCOM											0x00000200
#define GL_DEPTH_BUFFER_BIT2_QCOM											0x00000400
#define GL_DEPTH_BUFFER_BIT3_QCOM											0x00000800
#define GL_DEPTH_BUFFER_BIT4_QCOM											0x00001000
#define GL_DEPTH_BUFFER_BIT5_QCOM											0x00002000
#define GL_DEPTH_BUFFER_BIT6_QCOM											0x00004000
#define GL_DEPTH_BUFFER_BIT7_QCOM											0x00008000
#define GL_STENCIL_BUFFER_BIT0_QCOM											0x00010000
#define GL_STENCIL_BUFFER_BIT1_QCOM											0x00020000
#define GL_STENCIL_BUFFER_BIT2_QCOM											0x00040000
#define GL_STENCIL_BUFFER_BIT3_QCOM											0x00080000
#define GL_STENCIL_BUFFER_BIT4_QCOM											0x00100000
#define GL_STENCIL_BUFFER_BIT5_QCOM											0x00200000
#define GL_STENCIL_BUFFER_BIT6_QCOM											0x00400000
#define GL_STENCIL_BUFFER_BIT7_QCOM											0x00800000
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM										0x01000000
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM										0x02000000
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM										0x04000000
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM										0x08000000
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM										0x10000000
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM										0x20000000
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM										0x40000000
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM										0x80000000

/*
	GL_QCOM_writeonly_rendering
*/
#define GL_WRITEONLY_RENDERING_QCOM											0x8823

/*
	GL_REGAL_enable
*/
#define GL_ERROR_REGAL														0x9322
#define GL_DEBUG_REGAL														0x9323
#define GL_LOG_REGAL														0x9324
#define GL_EMULATION_REGAL													0x9325
#define GL_DRIVER_REGAL														0x9326
#define GL_MISSING_REGAL													0x9360
#define GL_TRACE_REGAL														0x9361
#define GL_CACHE_REGAL														0x9362
#define GL_CODE_REGAL														0x9363
#define GL_STATISTICS_REGAL													0x9364

/*
	GL_REGAL_log
*/
#define GL_LOG_ERROR_REGAL													0x9319
#define GL_LOG_WARNING_REGAL												0x931A
#define GL_LOG_INFO_REGAL													0x931B
#define GL_LOG_APP_REGAL													0x931C
#define GL_LOG_DRIVER_REGAL													0x931D
#define GL_LOG_INTERNAL_REGAL												0x931E
#define GL_LOG_DEBUG_REGAL													0x931F
#define GL_LOG_STATUS_REGAL													0x9320
#define GL_LOG_HTTP_REGAL													0x9321

/*
	GL_REND_screen_coordinates
*/
#define GL_SCREEN_COORDINATES_REND											0x8490
#define GL_INVERTED_SCREEN_W_REND											0x8491

/*
	GL_S3_s3tc
*/
#define GL_RGB_S3TC															0x83A0
#define GL_RGB4_S3TC														0x83A1
#define GL_RGBA_S3TC														0x83A2
#define GL_RGBA4_S3TC														0x83A3
#define GL_RGBA_DXT5_S3TC													0x83A4
#define GL_RGBA4_DXT5_S3TC													0x83A5

/*
	GL_SGIS_color_range
*/
#define GL_EXTENDED_RANGE_SGIS												0x85A5
#define GL_MIN_RED_SGIS														0x85A6
#define GL_MAX_RED_SGIS														0x85A7
#define GL_MIN_GREEN_SGIS													0x85A8
#define GL_MAX_GREEN_SGIS													0x85A9
#define GL_MIN_BLUE_SGIS													0x85AA
#define GL_MAX_BLUE_SGIS													0x85AB
#define GL_MIN_ALPHA_SGIS													0x85AC
#define GL_MAX_ALPHA_SGIS													0x85AD

/*
	GL_SGIS_generate_mipmap
*/
#define GL_GENERATE_MIPMAP_SGIS												0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS										0x8192

/*
	GL_SGIS_multisample
*/
#define GL_MULTISAMPLE_SGIS													0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS										0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS											0x809F
#define GL_SAMPLE_MASK_SGIS													0x80A0
#define GL_1PASS_SGIS														0x80A1
#define GL_2PASS_0_SGIS														0x80A2
#define GL_2PASS_1_SGIS														0x80A3
#define GL_4PASS_0_SGIS														0x80A4
#define GL_4PASS_1_SGIS														0x80A5
#define GL_4PASS_2_SGIS														0x80A6
#define GL_4PASS_3_SGIS														0x80A7
#define GL_SAMPLE_BUFFERS_SGIS												0x80A8
#define GL_SAMPLES_SGIS														0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS											0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS											0x80AB
#define GL_SAMPLE_PATTERN_SGIS												0x80AC

/*
	GL_SGIS_multitexture
*/
#define GL_SELECTED_TEXTURE_SGIS											0x83C0
#define GL_SELECTED_TEXTURE_COORD_SET_SGIS									0x83C1
#define GL_SELECTED_TEXTURE_TRANSFORM_SGIS									0x83C2
#define GL_MAX_TEXTURES_SGIS												0x83C3
#define GL_MAX_TEXTURE_COORD_SETS_SGIS										0x83C4
#define GL_TEXTURE_COORD_SET_INTERLEAVE_FACTOR_SGIS							0x83C5
#define GL_TEXTURE_ENV_COORD_SET_SGIS										0x83C6
#define GL_TEXTURE0_SGIS													0x83C7
#define GL_TEXTURE1_SGIS													0x83C8
#define GL_TEXTURE2_SGIS													0x83C9
#define GL_TEXTURE3_SGIS													0x83CA

/*
	GL_SGIS_point_line_texgen
*/
#define GL_EYE_DISTANCE_TO_POINT_SGIS										0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS									0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS										0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS										0x81F3
#define GL_EYE_POINT_SGIS													0x81F4
#define GL_OBJECT_POINT_SGIS												0x81F5
#define GL_EYE_LINE_SGIS													0x81F6
#define GL_OBJECT_LINE_SGIS													0x81F7

/*
	GL_SGIS_texture_border_clamp
*/
#define GL_CLAMP_TO_BORDER_SGIS												0x812D

/*
	GL_SGIS_texture_edge_clamp
*/
#define GL_CLAMP_TO_EDGE_SGIS												0x812F

/*
	GL_SGIS_texture_lod
*/
#define GL_TEXTURE_MIN_LOD_SGIS												0x813A
#define GL_TEXTURE_MAX_LOD_SGIS												0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS											0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS											0x813D

/*
	GL_SGIX_async
*/
#define GL_ASYNC_MARKER_SGIX												0x8329

/*
	GL_SGIX_async_histogram
*/
#define GL_ASYNC_HISTOGRAM_SGIX												0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX											0x832D

/*
	GL_SGIX_async_pixel
*/
#define GL_ASYNC_TEX_IMAGE_SGIX												0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX											0x835D
#define GL_ASYNC_READ_PIXELS_SGIX											0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX											0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX										0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX										0x8361

/*
	GL_SGIX_bali_g_instruments
*/
#define GL_BALI_NUM_TRIS_CULLED_INSTRUMENT									0x6080
#define GL_BALI_NUM_PRIMS_CLIPPED_INSTRUMENT								0x6081
#define GL_BALI_NUM_PRIMS_REJECT_INSTRUMENT									0x6082
#define GL_BALI_NUM_PRIMS_CLIP_RESULT_INSTRUMENT							0x6083

/*
	GL_SGIX_bali_r_instruments
*/
#define GL_BALI_FRAGMENTS_GENERATED_INSTRUMENT								0x6090
#define GL_BALI_DEPTH_PASS_INSTRUMENT										0x6091
#define GL_BALI_R_CHIP_COUNT												0x6092

/*
	GL_SGIX_blend_alpha_minmax
*/
#define GL_ALPHA_MIN_SGIX													0x8320
#define GL_ALPHA_MAX_SGIX													0x8321

/*
	GL_SGIX_blend_cadd
*/
#define GL_FUNC_COMPLEX_ADD_EXT												0x601C

/*
	GL_SGIX_blend_cmultiply
*/
#define GL_FUNC_COMPLEX_MULTIPLY_EXT										0x601B

/*
	GL_SGIX_color_matrix_accuracy
*/
#define GL_COLOR_MATRIX_HINT												0x8317

/*
	GL_SGIX_convolution_accuracy
*/
#define GL_CONVOLUTION_HINT_SGIX											0x8316

/*
	GL_SGIX_cube_map
*/
#define GL_ENV_MAP_SGIX														0x8340
#define GL_CUBE_MAP_SGIX													0x8341
#define GL_CUBE_MAP_ZP_SGIX													0x8342
#define GL_CUBE_MAP_ZN_SGIX													0x8343
#define GL_CUBE_MAP_XN_SGIX													0x8344
#define GL_CUBE_MAP_XP_SGIX													0x8345
#define GL_CUBE_MAP_YN_SGIX													0x8346
#define GL_CUBE_MAP_YP_SGIX													0x8347
#define GL_CUBE_MAP_BINDING_SGIX											0x8348

/*
	GL_SGIX_datapipe
*/
#define GL_GEOMETRY_BIT														0x1
#define GL_IMAGE_BIT														0x2

/*
	GL_SGIX_depth_pass_instrument
*/
#define GL_DEPTH_PASS_INSTRUMENT_SGIX										0x8310
#define GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX								0x8311
#define GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX									0x8312

/*
	GL_SGIX_depth_texture
*/
#define GL_DEPTH_COMPONENT16_SGIX											0x81A5
#define GL_DEPTH_COMPONENT24_SGIX											0x81A6
#define GL_DEPTH_COMPONENT32_SGIX											0x81A7

/*
	GL_SGIX_fog_blend
*/
#define GL_FOG_BLEND_ALPHA_SGIX												0x81FE
#define GL_FOG_BLEND_COLOR_SGIX												0x81FF

/*
	GL_SGIX_fog_layers
*/
#define GL_FOG_TYPE_SGIX													0x8323
#define GL_UNIFORM_SGIX														0x8324
#define GL_LAYERED_SGIX														0x8325
#define GL_FOG_GROUND_PLANE_SGIX											0x8326
#define GL_FOG_LAYERS_POINTS_SGIX											0x8327
#define GL_MAX_FOG_LAYERS_POINTS_SGIX										0x8328

/*
	GL_SGIX_fog_offset
*/
#define GL_FOG_OFFSET_SGIX													0x8198
#define GL_FOG_OFFSET_VALUE_SGIX											0x8199

/*
	GL_SGIX_fog_scale
*/
#define GL_FOG_SCALE_SGIX													0x81FC
#define GL_FOG_SCALE_VALUE_SGIX												0x81FD

/*
	GL_SGIX_fragment_lighting_space
*/
#define GL_EYE_SPACE_SGIX													0x8436
#define GL_TANGENT_SPACE_SGIX												0x8437
#define GL_OBJECT_SPACE_SGIX												0x8438
#define GL_FRAGMENT_LIGHT_SPACE_SGIX										0x843D

/*
	GL_SGIX_fragments_instrument
*/
#define GL_FRAGMENTS_INSTRUMENT_SGIX										0x8313
#define GL_FRAGMENTS_INSTRUMENT_COUNTERS_SGIX								0x8314
#define GL_FRAGMENTS_INSTRUMENT_MAX_SGIX									0x8315

/*
	GL_SGIX_icc_texture
*/
#define GL_RGB_ICC_SGIX														0x8460
#define GL_RGBA_ICC_SGIX													0x8461
#define GL_ALPHA_ICC_SGIX													0x8462
#define GL_LUMINANCE_ICC_SGIX												0x8463
#define GL_INTENSITY_ICC_SGIX												0x8464
#define GL_LUMINANCE_ALPHA_ICC_SGIX											0x8465
#define GL_R5_G6_B5_ICC_SGIX												0x8466
#define GL_R5_G6_B5_A8_ICC_SGIX												0x8467
#define GL_ALPHA16_ICC_SGIX													0x8468
#define GL_LUMINANCE16_ICC_SGIX												0x8469
#define GL_INTENSITY16_ICC_SGIX												0x846A
#define GL_LUMINANCE16_ALPHA8_ICC_SGIX										0x846B

/*
	GL_SGIX_igloo_interface
*/
#define GL_IGLOO_FULLSCREEN_SGIX											0x819E
#define GL_IGLOO_VIEWPORT_OFFSET_SGIX										0x819F
#define GL_IGLOO_SWAPTMESH_SGIX												0x81A0
#define GL_IGLOO_COLORNORMAL_SGIX											0x81A1
#define GL_IGLOO_IRISGL_MODE_SGIX											0x81A2
#define GL_IGLOO_LMC_COLOR_SGIX												0x81A3
#define GL_IGLOO_TMESHMODE_SGIX												0x81A4
#define GL_LIGHT31															0xBEAD

/*
	GL_SGIX_interlace
*/
#define GL_INTERLACE_SGIX													0x8094

/*
	GL_SGIX_line_quality_hint
*/
#define GL_LINE_QUALITY_HINT_SGIX											0x835B

/*
	GL_SGIX_nurbs_eval
*/
#define GL_MAP1_VERTEX_3_NURBS_SGIX											0x81CB
#define GL_MAP1_VERTEX_4_NURBS_SGIX											0x81CC
#define GL_MAP1_INDEX_NURBS_SGIX											0x81CD
#define GL_MAP1_COLOR_4_NURBS_SGIX											0x81CE
#define GL_MAP1_NORMAL_NURBS_SGIX											0x81CF
#define GL_MAP1_TEXTURE_COORD_1_NURBS_SGIX									0x81E0
#define GL_MAP1_TEXTURE_COORD_2_NURBS_SGIX									0x81E1
#define GL_MAP1_TEXTURE_COORD_3_NURBS_SGIX									0x81E2
#define GL_MAP1_TEXTURE_COORD_4_NURBS_SGIX									0x81E3
#define GL_MAP2_VERTEX_3_NURBS_SGIX											0x81E4
#define GL_MAP2_VERTEX_4_NURBS_SGIX											0x81E5
#define GL_MAP2_INDEX_NURBS_SGIX											0x81E6
#define GL_MAP2_COLOR_4_NURBS_SGIX											0x81E7
#define GL_MAP2_NORMAL_NURBS_SGIX											0x81E8
#define GL_MAP2_TEXTURE_COORD_1_NURBS_SGIX									0x81E9
#define GL_MAP2_TEXTURE_COORD_2_NURBS_SGIX									0x81EA
#define GL_MAP2_TEXTURE_COORD_3_NURBS_SGIX									0x81EB
#define GL_MAP2_TEXTURE_COORD_4_NURBS_SGIX									0x81EC
#define GL_NURBS_KNOT_COUNT_SGIX											0x81ED
#define GL_NURBS_KNOT_VECTOR_SGIX											0x81EE

/*
	GL_SGIX_occlusion_instrument
*/
#define GL_OCCLUSION_INSTRUMENT_SGIX										0x6060

/*
	GL_SGIX_polynomial_ffd
*/
#define GL_TEXTURE_DEFORMATION_BIT_SGIX										0x1
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX									0x2

/*
	GL_SGIX_resample
*/
#define GL_PACK_RESAMPLE_SGIX												0x842E
#define GL_UNPACK_RESAMPLE_SGIX												0x842F
#define GL_RESAMPLE_DECIMATE_SGIX											0x8430
#define GL_RESAMPLE_REPLICATE_SGIX											0x8433
#define GL_RESAMPLE_ZERO_FILL_SGIX											0x8434

/*
	GL_SGIX_scalebias_hint
*/
#define GL_SCALEBIAS_HINT_SGIX												0x8322

/*
	GL_SGIX_shadow
*/
#define GL_TEXTURE_COMPARE_SGIX												0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX									0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX											0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX											0x819D

/*
	GL_SGIX_shadow_ambient
*/
#define GL_SHADOW_AMBIENT_SGIX												0x80BF

/*
	GL_SGIX_slim
*/
#define GL_PACK_MAX_COMPRESSED_SIZE_SGIX									0x831B
#define GL_SLIM8U_SGIX														0x831D
#define GL_SLIM10U_SGIX														0x831E
#define GL_SLIM12S_SGIX														0x831F

/*
	GL_SGIX_spotlight_cutoff
*/
#define GL_SPOT_CUTOFF_DELTA_SGIX											0x8193

/*
	GL_SGIX_subsample
*/
#define GL_PACK_SUBSAMPLE_RATE_SGIX											0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX										0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX										0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX										0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX										0x85A4

/*
	GL_SGIX_texture_coordinate_clamp
*/
#define GL_TEXTURE_MAX_CLAMP_S_SGIX											0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX											0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX											0x836B

/*
	GL_SGIX_texture_mipmap_anisotropic
*/
#define GL_TEXTURE_MIPMAP_ANISOTROPY_SGIX									0x832E
#define GL_MAX_MIPMAP_ANISOTROPY_SGIX										0x832F

/*
	GL_SGIX_texture_multi_buffer
*/
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX									0x812E

/*
	GL_SGIX_texture_phase
*/
#define GL_PHASE_SGIX														0x832A

/*
	GL_SGIX_texture_range
*/
#define GL_RGB_SIGNED_SGIX													0x85E0
#define GL_RGBA_SIGNED_SGIX													0x85E1
#define GL_ALPHA_SIGNED_SGIX												0x85E2
#define GL_LUMINANCE_SIGNED_SGIX											0x85E3
#define GL_INTENSITY_SIGNED_SGIX											0x85E4
#define GL_LUMINANCE_ALPHA_SIGNED_SGIX										0x85E5
#define GL_RGB16_SIGNED_SGIX												0x85E6
#define GL_RGBA16_SIGNED_SGIX												0x85E7
#define GL_ALPHA16_SIGNED_SGIX												0x85E8
#define GL_LUMINANCE16_SIGNED_SGIX											0x85E9
#define GL_INTENSITY16_SIGNED_SGIX											0x85EA
#define GL_LUMINANCE16_ALPHA16_SIGNED_SGIX									0x85EB
#define GL_RGB_EXTENDED_RANGE_SGIX											0x85EC
#define GL_RGBA_EXTENDED_RANGE_SGIX											0x85ED
#define GL_ALPHA_EXTENDED_RANGE_SGIX										0x85EE
#define GL_LUMINANCE_EXTENDED_RANGE_SGIX									0x85EF
#define GL_INTENSITY_EXTENDED_RANGE_SGIX									0x85F0
#define GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX								0x85F1
#define GL_RGB16_EXTENDED_RANGE_SGIX										0x85F2
#define GL_RGBA16_EXTENDED_RANGE_SGIX										0x85F3
#define GL_ALPHA16_EXTENDED_RANGE_SGIX										0x85F4
#define GL_LUMINANCE16_EXTENDED_RANGE_SGIX									0x85F5
#define GL_INTENSITY16_EXTENDED_RANGE_SGIX									0x85F6
#define GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX							0x85F7
#define GL_MIN_LUMINANCE_SGIS												0x85F8
#define GL_MAX_LUMINANCE_SGIS												0x85F9
#define GL_MIN_INTENSITY_SGIS												0x85FA
#define GL_MAX_INTENSITY_SGIS												0x85FB

/*
	GL_SGIX_texture_scale_bias
*/
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX									0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX									0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX								0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX								0x817C

/*
	GL_SGIX_vertex_preclip
*/
#define GL_VERTEX_PRECLIP_SGIX												0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX											0x83EF

/*
	GL_SGIX_vertex_preclip_hint
*/
#define GL_VERTEX_PRECLIP_SGIX												0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX											0x83EF

/*
	GL_SGIX_ycrcba
*/
#define GL_YCRCB_SGIX														0x8318
#define GL_YCRCBA_SGIX														0x8319

/*
	GL_SGI_color_matrix
*/
#define GL_COLOR_MATRIX_SGI													0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI										0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI									0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI									0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI								0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI									0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI								0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI									0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI									0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI									0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI									0x80BB

/*
	GL_SGI_color_table
*/
#define GL_COLOR_TABLE_SGI													0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI									0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI								0x80D2
#define GL_PROXY_COLOR_TABLE_SGI											0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI							0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI							0x80D5
#define GL_COLOR_TABLE_SCALE_SGI											0x80D6
#define GL_COLOR_TABLE_BIAS_SGI												0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI											0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI											0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI											0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI										0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI										0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI										0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI									0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI									0x80DF

/*
	GL_SGI_complex_type
*/
#define GL_COMPLEX_UNSIGNED_BYTE_SGI										0x81BD
#define GL_COMPLEX_BYTE_SGI													0x81BE
#define GL_COMPLEX_UNSIGNED_SHORT_SGI										0x81BF
#define GL_COMPLEX_SHORT_SGI												0x81C0
#define GL_COMPLEX_UNSIGNED_INT_SGI											0x81C1
#define GL_COMPLEX_INT_SGI													0x81C2
#define GL_COMPLEX_FLOAT_SGI												0x81C3

/*
	GL_SGI_fft
*/
#define GL_PIXEL_TRANSFORM_OPERATOR_SGI										0x81C4
#define GL_CONVOLUTION_SGI													0x81C5
#define GL_FFT_1D_SGI														0x81C6
#define GL_PIXEL_TRANSFORM_SGI												0x81C7
#define GL_MAX_FFT_WIDTH_SGI												0x81C8

/*
	GL_SGI_texture_color_table
*/
#define GL_TEXTURE_COLOR_TABLE_SGI											0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI									0x80BD

/*
	GL_SUNX_constant_data
*/
#define GL_UNPACK_CONSTANT_DATA_SUNX										0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX										0x81D6

/*
	GL_SUN_convolution_border_modes
*/
#define GL_WRAP_BORDER_SUN													0x81D4

/*
	GL_SUN_global_alpha
*/
#define GL_GLOBAL_ALPHA_SUN													0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN											0x81DA

/*
	GL_SUN_mesh_array
*/
#define GL_QUAD_MESH_SUN													0x8614
#define GL_TRIANGLE_MESH_SUN												0x8615

/*
	GL_SUN_slice_accum
*/
#define GL_SLICE_ACCUM_SUN													0x85CC

/*
	GL_SUN_triangle_list
*/
#define GL_RESTART_SUN														0x01
#define GL_REPLACE_MIDDLE_SUN												0x02
#define GL_REPLACE_OLDEST_SUN												0x03
#define GL_TRIANGLE_LIST_SUN												0x81D7
#define GL_REPLACEMENT_CODE_SUN												0x81D8
#define GL_REPLACEMENT_CODE_ARRAY_SUN										0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN									0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN								0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN								0x85C3
#define GL_R1UI_V3F_SUN														0x85C4
#define GL_R1UI_C4UB_V3F_SUN												0x85C5
#define GL_R1UI_C3F_V3F_SUN													0x85C6
#define GL_R1UI_N3F_V3F_SUN													0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN												0x85C8
#define GL_R1UI_T2F_V3F_SUN													0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN												0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN											0x85CB

/*
	GL_WIN_phong_shading
*/
#define GL_PHONG_WIN														0x80EA
#define GL_PHONG_HINT_WIN													0x80EB

/*
	GL_WIN_specular_fog
*/
#define GL_FOG_SPECULAR_TEXTURE_WIN											0x80EC


extern "C"
{
#ifndef GLAPI

#if __COMPOUND_OS_WINDOWS

#define GLAPI __declspec(dllimport)

#endif

#endif

	/*
		GL_VERSION_1_1
	*/
	GLAPI void glAccum(GLenum op, GLfloat value);
	GLAPI void glAlphaFunc(GLenum func, GLclampf ref);
	GLAPI GLboolean glAreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences);
	GLAPI void glArrayElement(GLint i);
	GLAPI void glBegin(GLenum mode);
	GLAPI void glBindTexture(GLenum target, GLuint texture);
	GLAPI void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
	GLAPI void glBlendFunc(GLenum sfactor, GLenum dfactor);
	GLAPI void glCallList(GLuint list);
	GLAPI void glCallLists(GLsizei n, GLenum type, const void *lists);
	GLAPI void glClear(GLbitfield mask);
	GLAPI void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	GLAPI void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	GLAPI void glClearDepth(GLclampd depth);
	GLAPI void glClearIndex(GLfloat c);
	GLAPI void glClearStencil(GLint s);
	GLAPI void glClipPlane(GLenum plane, const GLdouble *equation);
	GLAPI void glColor3b(GLbyte red, GLbyte green, GLbyte blue);
	GLAPI void glColor3bv(const GLbyte *v);
	GLAPI void glColor3d(GLdouble red, GLdouble green, GLdouble blue);
	GLAPI void glColor3dv(const GLdouble *v);
	GLAPI void glColor3f(GLfloat red, GLfloat green, GLfloat blue);
	GLAPI void glColor3fv(const GLfloat *v);
	GLAPI void glColor3i(GLint red, GLint green, GLint blue);
	GLAPI void glColor3iv(const GLint *v);
	GLAPI void glColor3s(GLshort red, GLshort green, GLshort blue);
	GLAPI void glColor3sv(const GLshort *v);
	GLAPI void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);
	GLAPI void glColor3ubv(const GLubyte *v);
	GLAPI void glColor3ui(GLuint red, GLuint green, GLuint blue);
	GLAPI void glColor3uiv(const GLuint *v);
	GLAPI void glColor3us(GLushort red, GLushort green, GLushort blue);
	GLAPI void glColor3usv(const GLushort *v);
	GLAPI void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
	GLAPI void glColor4bv(const GLbyte *v);
	GLAPI void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
	GLAPI void glColor4dv(const GLdouble *v);
	GLAPI void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	GLAPI void glColor4fv(const GLfloat *v);
	GLAPI void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);
	GLAPI void glColor4iv(const GLint *v);
	GLAPI void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
	GLAPI void glColor4sv(const GLshort *v);
	GLAPI void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
	GLAPI void glColor4ubv(const GLubyte *v);
	GLAPI void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
	GLAPI void glColor4uiv(const GLuint *v);
	GLAPI void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
	GLAPI void glColor4usv(const GLushort *v);
	GLAPI void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	GLAPI void glColorMaterial(GLenum face, GLenum mode);
	GLAPI void glColorPointer(GLint size, GLenum type, GLsizei stride, const void *pointer);
	GLAPI void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
	GLAPI void glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
	GLAPI void glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	GLAPI void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	GLAPI void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	GLAPI void glCullFace(GLenum mode);
	GLAPI void glDeleteLists(GLuint list, GLsizei range);
	GLAPI void glDeleteTextures(GLsizei n, const GLuint *textures);
	GLAPI void glDepthFunc(GLenum func);
	GLAPI void glDepthMask(GLboolean flag);
	GLAPI void glDepthRange(GLclampd zNear, GLclampd zFar);
	GLAPI void glDisable(GLenum cap);
	GLAPI void glDisableClientState(GLenum array);
	GLAPI void glDrawArrays(GLenum mode, GLint first, GLsizei count);
	GLAPI void glDrawBuffer(GLenum mode);
	GLAPI void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices);
	GLAPI void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	GLAPI void glEdgeFlag(GLboolean flag);
	GLAPI void glEdgeFlagPointer(GLsizei stride, const void *pointer);
	GLAPI void glEdgeFlagv(const GLboolean *flag);
	GLAPI void glEnable(GLenum cap);
	GLAPI void glEnableClientState(GLenum array);
	GLAPI void glEnd(void);
	GLAPI void glEndList(void);
	GLAPI void glEvalCoord1d(GLdouble u);
	GLAPI void glEvalCoord1dv(const GLdouble *u);
	GLAPI void glEvalCoord1f(GLfloat u);
	GLAPI void glEvalCoord1fv(const GLfloat *u);
	GLAPI void glEvalCoord2d(GLdouble u, GLdouble v);
	GLAPI void glEvalCoord2dv(const GLdouble *u);
	GLAPI void glEvalCoord2f(GLfloat u, GLfloat v);
	GLAPI void glEvalCoord2fv(const GLfloat *u);
	GLAPI void glEvalMesh1(GLenum mode, GLint i1, GLint i2);
	GLAPI void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
	GLAPI void glEvalPoint1(GLint i);
	GLAPI void glEvalPoint2(GLint i, GLint j);
	GLAPI void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);
	GLAPI void glFinish(void);
	GLAPI void glFlush(void);
	GLAPI void glFogf(GLenum pname, GLfloat param);
	GLAPI void glFogfv(GLenum pname, const GLfloat *params);
	GLAPI void glFogi(GLenum pname, GLint param);
	GLAPI void glFogiv(GLenum pname, const GLint *params);
	GLAPI void glFrontFace(GLenum mode);
	GLAPI void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	GLAPI GLuint glGenLists(GLsizei range);
	GLAPI void glGenTextures(GLsizei n, GLuint *textures);
	GLAPI void glGetBooleanv(GLenum pname, GLboolean *params);
	GLAPI void glGetClipPlane(GLenum plane, GLdouble *equation);
	GLAPI void glGetDoublev(GLenum pname, GLdouble *params);
	GLAPI GLenum glGetError(void);
	GLAPI void glGetFloatv(GLenum pname, GLfloat *params);
	GLAPI void glGetIntegerv(GLenum pname, GLint *params);
	GLAPI void glGetLightfv(GLenum light, GLenum pname, GLfloat *params);
	GLAPI void glGetLightiv(GLenum light, GLenum pname, GLint *params);
	GLAPI void glGetMapdv(GLenum target, GLenum query, GLdouble *v);
	GLAPI void glGetMapfv(GLenum target, GLenum query, GLfloat *v);
	GLAPI void glGetMapiv(GLenum target, GLenum query, GLint *v);
	GLAPI void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params);
	GLAPI void glGetMaterialiv(GLenum face, GLenum pname, GLint *params);
	GLAPI void glGetPixelMapfv(GLenum map, GLfloat *values);
	GLAPI void glGetPixelMapuiv(GLenum map, GLuint *values);
	GLAPI void glGetPixelMapusv(GLenum map, GLushort *values);
	GLAPI void glGetPointerv(GLenum pname, void* *params);
	GLAPI void glGetPolygonStipple(GLubyte *mask);
	GLAPI const GLubyte * glGetString(GLenum name);
	GLAPI void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params);
	GLAPI void glGetTexEnviv(GLenum target, GLenum pname, GLint *params);
	GLAPI void glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params);
	GLAPI void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params);
	GLAPI void glGetTexGeniv(GLenum coord, GLenum pname, GLint *params);
	GLAPI void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
	GLAPI void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
	GLAPI void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
	GLAPI void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
	GLAPI void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params);
	GLAPI void glHint(GLenum target, GLenum mode);
	GLAPI void glIndexMask(GLuint mask);
	GLAPI void glIndexPointer(GLenum type, GLsizei stride, const void *pointer);
	GLAPI void glIndexd(GLdouble c);
	GLAPI void glIndexdv(const GLdouble *c);
	GLAPI void glIndexf(GLfloat c);
	GLAPI void glIndexfv(const GLfloat *c);
	GLAPI void glIndexi(GLint c);
	GLAPI void glIndexiv(const GLint *c);
	GLAPI void glIndexs(GLshort c);
	GLAPI void glIndexsv(const GLshort *c);
	GLAPI void glIndexub(GLubyte c);
	GLAPI void glIndexubv(const GLubyte *c);
	GLAPI void glInitNames(void);
	GLAPI void glInterleavedArrays(GLenum format, GLsizei stride, const void *pointer);
	GLAPI GLboolean glIsEnabled(GLenum cap);
	GLAPI GLboolean glIsList(GLuint list);
	GLAPI GLboolean glIsTexture(GLuint texture);
	GLAPI void glLightModelf(GLenum pname, GLfloat param);
	GLAPI void glLightModelfv(GLenum pname, const GLfloat *params);
	GLAPI void glLightModeli(GLenum pname, GLint param);
	GLAPI void glLightModeliv(GLenum pname, const GLint *params);
	GLAPI void glLightf(GLenum light, GLenum pname, GLfloat param);
	GLAPI void glLightfv(GLenum light, GLenum pname, const GLfloat *params);
	GLAPI void glLighti(GLenum light, GLenum pname, GLint param);
	GLAPI void glLightiv(GLenum light, GLenum pname, const GLint *params);
	GLAPI void glLineStipple(GLint factor, GLushort pattern);
	GLAPI void glLineWidth(GLfloat width);
	GLAPI void glListBase(GLuint base);
	GLAPI void glLoadIdentity(void);
	GLAPI void glLoadMatrixd(const GLdouble *m);
	GLAPI void glLoadMatrixf(const GLfloat *m);
	GLAPI void glLoadName(GLuint name);
	GLAPI void glLogicOp(GLenum opcode);
	GLAPI void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
	GLAPI void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
	GLAPI void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
	GLAPI void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
	GLAPI void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);
	GLAPI void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);
	GLAPI void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
	GLAPI void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
	GLAPI void glMaterialf(GLenum face, GLenum pname, GLfloat param);
	GLAPI void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params);
	GLAPI void glMateriali(GLenum face, GLenum pname, GLint param);
	GLAPI void glMaterialiv(GLenum face, GLenum pname, const GLint *params);
	GLAPI void glMatrixMode(GLenum mode);
	GLAPI void glMultMatrixd(const GLdouble *m);
	GLAPI void glMultMatrixf(const GLfloat *m);
	GLAPI void glNewList(GLuint list, GLenum mode);
	GLAPI void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);
	GLAPI void glNormal3bv(const GLbyte *v);
	GLAPI void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);
	GLAPI void glNormal3dv(const GLdouble *v);
	GLAPI void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
	GLAPI void glNormal3fv(const GLfloat *v);
	GLAPI void glNormal3i(GLint nx, GLint ny, GLint nz);
	GLAPI void glNormal3iv(const GLint *v);
	GLAPI void glNormal3s(GLshort nx, GLshort ny, GLshort nz);
	GLAPI void glNormal3sv(const GLshort *v);
	GLAPI void glNormalPointer(GLenum type, GLsizei stride, const void *pointer);
	GLAPI void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	GLAPI void glPassThrough(GLfloat token);
	GLAPI void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values);
	GLAPI void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values);
	GLAPI void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values);
	GLAPI void glPixelStoref(GLenum pname, GLfloat param);
	GLAPI void glPixelStorei(GLenum pname, GLint param);
	GLAPI void glPixelTransferf(GLenum pname, GLfloat param);
	GLAPI void glPixelTransferi(GLenum pname, GLint param);
	GLAPI void glPixelZoom(GLfloat xfactor, GLfloat yfactor);
	GLAPI void glPointSize(GLfloat size);
	GLAPI void glPolygonMode(GLenum face, GLenum mode);
	GLAPI void glPolygonOffset(GLfloat factor, GLfloat units);
	GLAPI void glPolygonStipple(const GLubyte *mask);
	GLAPI void glPopAttrib(void);
	GLAPI void glPopClientAttrib(void);
	GLAPI void glPopMatrix(void);
	GLAPI void glPopName(void);
	GLAPI void glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities);
	GLAPI void glPushAttrib(GLbitfield mask);
	GLAPI void glPushClientAttrib(GLbitfield mask);
	GLAPI void glPushMatrix(void);
	GLAPI void glPushName(GLuint name);
	GLAPI void glRasterPos2d(GLdouble x, GLdouble y);
	GLAPI void glRasterPos2dv(const GLdouble *v);
	GLAPI void glRasterPos2f(GLfloat x, GLfloat y);
	GLAPI void glRasterPos2fv(const GLfloat *v);
	GLAPI void glRasterPos2i(GLint x, GLint y);
	GLAPI void glRasterPos2iv(const GLint *v);
	GLAPI void glRasterPos2s(GLshort x, GLshort y);
	GLAPI void glRasterPos2sv(const GLshort *v);
	GLAPI void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);
	GLAPI void glRasterPos3dv(const GLdouble *v);
	GLAPI void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
	GLAPI void glRasterPos3fv(const GLfloat *v);
	GLAPI void glRasterPos3i(GLint x, GLint y, GLint z);
	GLAPI void glRasterPos3iv(const GLint *v);
	GLAPI void glRasterPos3s(GLshort x, GLshort y, GLshort z);
	GLAPI void glRasterPos3sv(const GLshort *v);
	GLAPI void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	GLAPI void glRasterPos4dv(const GLdouble *v);
	GLAPI void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	GLAPI void glRasterPos4fv(const GLfloat *v);
	GLAPI void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);
	GLAPI void glRasterPos4iv(const GLint *v);
	GLAPI void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
	GLAPI void glRasterPos4sv(const GLshort *v);
	GLAPI void glReadBuffer(GLenum mode);
	GLAPI void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
	GLAPI void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
	GLAPI void glRectdv(const GLdouble *v1, const GLdouble *v2);
	GLAPI void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
	GLAPI void glRectfv(const GLfloat *v1, const GLfloat *v2);
	GLAPI void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);
	GLAPI void glRectiv(const GLint *v1, const GLint *v2);
	GLAPI void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
	GLAPI void glRectsv(const GLshort *v1, const GLshort *v2);
	GLAPI GLint glRenderMode(GLenum mode);
	GLAPI void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
	GLAPI void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	GLAPI void glScaled(GLdouble x, GLdouble y, GLdouble z);
	GLAPI void glScalef(GLfloat x, GLfloat y, GLfloat z);
	GLAPI void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
	GLAPI void glSelectBuffer(GLsizei size, GLuint *buffer);
	GLAPI void glShadeModel(GLenum mode);
	GLAPI void glStencilFunc(GLenum func, GLint ref, GLuint mask);
	GLAPI void glStencilMask(GLuint mask);
	GLAPI void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
	GLAPI void glTexCoord1d(GLdouble s);
	GLAPI void glTexCoord1dv(const GLdouble *v);
	GLAPI void glTexCoord1f(GLfloat s);
	GLAPI void glTexCoord1fv(const GLfloat *v);
	GLAPI void glTexCoord1i(GLint s);
	GLAPI void glTexCoord1iv(const GLint *v);
	GLAPI void glTexCoord1s(GLshort s);
	GLAPI void glTexCoord1sv(const GLshort *v);
	GLAPI void glTexCoord2d(GLdouble s, GLdouble t);
	GLAPI void glTexCoord2dv(const GLdouble *v);
	GLAPI void glTexCoord2f(GLfloat s, GLfloat t);
	GLAPI void glTexCoord2fv(const GLfloat *v);
	GLAPI void glTexCoord2i(GLint s, GLint t);
	GLAPI void glTexCoord2iv(const GLint *v);
	GLAPI void glTexCoord2s(GLshort s, GLshort t);
	GLAPI void glTexCoord2sv(const GLshort *v);
	GLAPI void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);
	GLAPI void glTexCoord3dv(const GLdouble *v);
	GLAPI void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);
	GLAPI void glTexCoord3fv(const GLfloat *v);
	GLAPI void glTexCoord3i(GLint s, GLint t, GLint r);
	GLAPI void glTexCoord3iv(const GLint *v);
	GLAPI void glTexCoord3s(GLshort s, GLshort t, GLshort r);
	GLAPI void glTexCoord3sv(const GLshort *v);
	GLAPI void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	GLAPI void glTexCoord4dv(const GLdouble *v);
	GLAPI void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	GLAPI void glTexCoord4fv(const GLfloat *v);
	GLAPI void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);
	GLAPI void glTexCoord4iv(const GLint *v);
	GLAPI void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
	GLAPI void glTexCoord4sv(const GLshort *v);
	GLAPI void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void *pointer);
	GLAPI void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
	GLAPI void glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params);
	GLAPI void glTexEnvi(GLenum target, GLenum pname, GLint param);
	GLAPI void glTexEnviv(GLenum target, GLenum pname, const GLint *params);
	GLAPI void glTexGend(GLenum coord, GLenum pname, GLdouble param);
	GLAPI void glTexGendv(GLenum coord, GLenum pname, const GLdouble *params);
	GLAPI void glTexGenf(GLenum coord, GLenum pname, GLfloat param);
	GLAPI void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params);
	GLAPI void glTexGeni(GLenum coord, GLenum pname, GLint param);
	GLAPI void glTexGeniv(GLenum coord, GLenum pname, const GLint *params);
	GLAPI void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
	GLAPI void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
	GLAPI void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
	GLAPI void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
	GLAPI void glTexParameteri(GLenum target, GLenum pname, GLint param);
	GLAPI void glTexParameteriv(GLenum target, GLenum pname, const GLint *params);
	GLAPI void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	GLAPI void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	GLAPI void glTranslated(GLdouble x, GLdouble y, GLdouble z);
	GLAPI void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
	GLAPI void glVertex2d(GLdouble x, GLdouble y);
	GLAPI void glVertex2dv(const GLdouble *v);
	GLAPI void glVertex2f(GLfloat x, GLfloat y);
	GLAPI void glVertex2fv(const GLfloat *v);
	GLAPI void glVertex2i(GLint x, GLint y);
	GLAPI void glVertex2iv(const GLint *v);
	GLAPI void glVertex2s(GLshort x, GLshort y);
	GLAPI void glVertex2sv(const GLshort *v);
	GLAPI void glVertex3d(GLdouble x, GLdouble y, GLdouble z);
	GLAPI void glVertex3dv(const GLdouble *v);
	GLAPI void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
	GLAPI void glVertex3fv(const GLfloat *v);
	GLAPI void glVertex3i(GLint x, GLint y, GLint z);
	GLAPI void glVertex3iv(const GLint *v);
	GLAPI void glVertex3s(GLshort x, GLshort y, GLshort z);
	GLAPI void glVertex3sv(const GLshort *v);
	GLAPI void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	GLAPI void glVertex4dv(const GLdouble *v);
	GLAPI void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	GLAPI void glVertex4fv(const GLfloat *v);
	GLAPI void glVertex4i(GLint x, GLint y, GLint z, GLint w);
	GLAPI void glVertex4iv(const GLint *v);
	GLAPI void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
	GLAPI void glVertex4sv(const GLshort *v);
	GLAPI void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void *pointer);
	GLAPI void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
}

namespace Compound::Render::Backend
{
	class __OpenGLExtension final
	{
	public:
		/*
	GL_VERSION_1_2
*/
		using PFNGLCOPYTEXSUBIMAGE3DPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLDRAWRANGEELEMENTSPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
		using PFNGLTEXIMAGE3DPROC = void(__stdcall *) (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXSUBIMAGE3DPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);

		/*
			GL_VERSION_1_3
		*/
		using PFNGLACTIVETEXTUREPROC = void(__stdcall *) (GLenum texture);
		using PFNGLCLIENTACTIVETEXTUREPROC = void(__stdcall *) (GLenum texture);
		using PFNGLCOMPRESSEDTEXIMAGE1DPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXIMAGE2DPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXIMAGE3DPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLGETCOMPRESSEDTEXIMAGEPROC = void(__stdcall *) (GLenum target, GLint lod, void *img);
		using PFNGLLOADTRANSPOSEMATRIXDPROC = void(__stdcall *) (const GLdouble m[16]);
		using PFNGLLOADTRANSPOSEMATRIXFPROC = void(__stdcall *) (const GLfloat m[16]);
		using PFNGLMULTTRANSPOSEMATRIXDPROC = void(__stdcall *) (const GLdouble m[16]);
		using PFNGLMULTTRANSPOSEMATRIXFPROC = void(__stdcall *) (const GLfloat m[16]);
		using PFNGLMULTITEXCOORD1DPROC = void(__stdcall *) (GLenum target, GLdouble s);
		using PFNGLMULTITEXCOORD1DVPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD1FPROC = void(__stdcall *) (GLenum target, GLfloat s);
		using PFNGLMULTITEXCOORD1FVPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD1IPROC = void(__stdcall *) (GLenum target, GLint s);
		using PFNGLMULTITEXCOORD1IVPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD1SPROC = void(__stdcall *) (GLenum target, GLshort s);
		using PFNGLMULTITEXCOORD1SVPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD2DPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t);
		using PFNGLMULTITEXCOORD2DVPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD2FPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t);
		using PFNGLMULTITEXCOORD2FVPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD2IPROC = void(__stdcall *) (GLenum target, GLint s, GLint t);
		using PFNGLMULTITEXCOORD2IVPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD2SPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t);
		using PFNGLMULTITEXCOORD2SVPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD3DPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
		using PFNGLMULTITEXCOORD3DVPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD3FPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
		using PFNGLMULTITEXCOORD3FVPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD3IPROC = void(__stdcall *) (GLenum target, GLint s, GLint t, GLint r);
		using PFNGLMULTITEXCOORD3IVPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD3SPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t, GLshort r);
		using PFNGLMULTITEXCOORD3SVPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD4DPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
		using PFNGLMULTITEXCOORD4DVPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD4FPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
		using PFNGLMULTITEXCOORD4FVPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD4IPROC = void(__stdcall *) (GLenum target, GLint s, GLint t, GLint r, GLint q);
		using PFNGLMULTITEXCOORD4IVPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD4SPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
		using PFNGLMULTITEXCOORD4SVPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLSAMPLECOVERAGEPROC = void(__stdcall *) (GLclampf value, GLboolean invert);

		/*
			GL_VERSION_1_4
		*/
		using PFNGLBLENDCOLORPROC = void(__stdcall *) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
		using PFNGLBLENDEQUATIONPROC = void(__stdcall *) (GLenum mode);
		using PFNGLBLENDFUNCSEPARATEPROC = void(__stdcall *) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
		using PFNGLFOGCOORDPOINTERPROC = void(__stdcall *) (GLenum type, GLsizei stride, const void *pointer);
		using PFNGLFOGCOORDDPROC = void(__stdcall *) (GLdouble coord);
		using PFNGLFOGCOORDDVPROC = void(__stdcall *) (const GLdouble *coord);
		using PFNGLFOGCOORDFPROC = void(__stdcall *) (GLfloat coord);
		using PFNGLFOGCOORDFVPROC = void(__stdcall *) (const GLfloat *coord);
		using PFNGLMULTIDRAWARRAYSPROC = void(__stdcall *) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
		using PFNGLMULTIDRAWELEMENTSPROC = void(__stdcall *) (GLenum mode, const GLsizei *count, GLenum type, const void *const* indices, GLsizei drawcount);
		using PFNGLPOINTPARAMETERFPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLPOINTPARAMETERFVPROC = void(__stdcall *) (GLenum pname, const GLfloat *params);
		using PFNGLPOINTPARAMETERIPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLPOINTPARAMETERIVPROC = void(__stdcall *) (GLenum pname, const GLint *params);
		using PFNGLSECONDARYCOLOR3BPROC = void(__stdcall *) (GLbyte red, GLbyte green, GLbyte blue);
		using PFNGLSECONDARYCOLOR3BVPROC = void(__stdcall *) (const GLbyte *v);
		using PFNGLSECONDARYCOLOR3DPROC = void(__stdcall *) (GLdouble red, GLdouble green, GLdouble blue);
		using PFNGLSECONDARYCOLOR3DVPROC = void(__stdcall *) (const GLdouble *v);
		using PFNGLSECONDARYCOLOR3FPROC = void(__stdcall *) (GLfloat red, GLfloat green, GLfloat blue);
		using PFNGLSECONDARYCOLOR3FVPROC = void(__stdcall *) (const GLfloat *v);
		using PFNGLSECONDARYCOLOR3IPROC = void(__stdcall *) (GLint red, GLint green, GLint blue);
		using PFNGLSECONDARYCOLOR3IVPROC = void(__stdcall *) (const GLint *v);
		using PFNGLSECONDARYCOLOR3SPROC = void(__stdcall *) (GLshort red, GLshort green, GLshort blue);
		using PFNGLSECONDARYCOLOR3SVPROC = void(__stdcall *) (const GLshort *v);
		using PFNGLSECONDARYCOLOR3UBPROC = void(__stdcall *) (GLubyte red, GLubyte green, GLubyte blue);
		using PFNGLSECONDARYCOLOR3UBVPROC = void(__stdcall *) (const GLubyte *v);
		using PFNGLSECONDARYCOLOR3UIPROC = void(__stdcall *) (GLuint red, GLuint green, GLuint blue);
		using PFNGLSECONDARYCOLOR3UIVPROC = void(__stdcall *) (const GLuint *v);
		using PFNGLSECONDARYCOLOR3USPROC = void(__stdcall *) (GLushort red, GLushort green, GLushort blue);
		using PFNGLSECONDARYCOLOR3USVPROC = void(__stdcall *) (const GLushort *v);
		using PFNGLSECONDARYCOLORPOINTERPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, const void *pointer);
		using PFNGLWINDOWPOS2DPROC = void(__stdcall *) (GLdouble x, GLdouble y);
		using PFNGLWINDOWPOS2DVPROC = void(__stdcall *) (const GLdouble *p);
		using PFNGLWINDOWPOS2FPROC = void(__stdcall *) (GLfloat x, GLfloat y);
		using PFNGLWINDOWPOS2FVPROC = void(__stdcall *) (const GLfloat *p);
		using PFNGLWINDOWPOS2IPROC = void(__stdcall *) (GLint x, GLint y);
		using PFNGLWINDOWPOS2IVPROC = void(__stdcall *) (const GLint *p);
		using PFNGLWINDOWPOS2SPROC = void(__stdcall *) (GLshort x, GLshort y);
		using PFNGLWINDOWPOS2SVPROC = void(__stdcall *) (const GLshort *p);
		using PFNGLWINDOWPOS3DPROC = void(__stdcall *) (GLdouble x, GLdouble y, GLdouble z);
		using PFNGLWINDOWPOS3DVPROC = void(__stdcall *) (const GLdouble *p);
		using PFNGLWINDOWPOS3FPROC = void(__stdcall *) (GLfloat x, GLfloat y, GLfloat z);
		using PFNGLWINDOWPOS3FVPROC = void(__stdcall *) (const GLfloat *p);
		using PFNGLWINDOWPOS3IPROC = void(__stdcall *) (GLint x, GLint y, GLint z);
		using PFNGLWINDOWPOS3IVPROC = void(__stdcall *) (const GLint *p);
		using PFNGLWINDOWPOS3SPROC = void(__stdcall *) (GLshort x, GLshort y, GLshort z);
		using PFNGLWINDOWPOS3SVPROC = void(__stdcall *) (const GLshort *p);

		/*
			GL_VERSION_1_5
		*/
		using PFNGLBEGINQUERYPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLBINDBUFFERPROC = void(__stdcall *) (GLenum target, GLuint buffer);
		using PFNGLBUFFERDATAPROC = void(__stdcall *) (GLenum target, GLsizeiptr size, const void* data, GLenum usage);
		using PFNGLBUFFERSUBDATAPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
		using PFNGLDELETEBUFFERSPROC = void(__stdcall *) (GLsizei n, const GLuint* buffers);
		using PFNGLDELETEQUERIESPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLENDQUERYPROC = void(__stdcall *) (GLenum target);
		using PFNGLGENBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* buffers);
		using PFNGLGENQUERIESPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLGETBUFFERPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETBUFFERPOINTERVPROC = void(__stdcall *) (GLenum target, GLenum pname, void** params);
		using PFNGLGETBUFFERSUBDATAPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr size, void* data);
		using PFNGLGETQUERYOBJECTIVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLGETQUERYOBJECTUIVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint* params);
		using PFNGLGETQUERYIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLISBUFFERPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLISQUERYPROC = GLboolean(__stdcall *) (GLuint id);
		using PFNGLMAPBUFFERPROC = void* (__stdcall *) (GLenum target, GLenum access);
		using PFNGLUNMAPBUFFERPROC = GLboolean(__stdcall *) (GLenum target);

		/*
			GL_VERSION_2_0
		*/
		using PFNGLATTACHSHADERPROC = void(__stdcall *) (GLuint program, GLuint shader);
		using PFNGLBINDATTRIBLOCATIONPROC = void(__stdcall *) (GLuint program, GLuint index, const GLchar* name);
		using PFNGLBLENDEQUATIONSEPARATEPROC = void(__stdcall *) (GLenum modeRGB, GLenum modeAlpha);
		using PFNGLCOMPILESHADERPROC = void(__stdcall *) (GLuint shader);
		using PFNGLCREATEPROGRAMPROC = GLuint(__stdcall *) (void);
		using PFNGLCREATESHADERPROC = GLuint(__stdcall *) (GLenum type);
		using PFNGLDELETEPROGRAMPROC = void(__stdcall *) (GLuint program);
		using PFNGLDELETESHADERPROC = void(__stdcall *) (GLuint shader);
		using PFNGLDETACHSHADERPROC = void(__stdcall *) (GLuint program, GLuint shader);
		using PFNGLDISABLEVERTEXATTRIBARRAYPROC = void(__stdcall *) (GLuint index);
		using PFNGLDRAWBUFFERSPROC = void(__stdcall *) (GLsizei n, const GLenum* bufs);
		using PFNGLENABLEVERTEXATTRIBARRAYPROC = void(__stdcall *) (GLuint index);
		using PFNGLGETACTIVEATTRIBPROC = void(__stdcall *) (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
		using PFNGLGETACTIVEUNIFORMPROC = void(__stdcall *) (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
		using PFNGLGETATTACHEDSHADERSPROC = void(__stdcall *) (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
		using PFNGLGETATTRIBLOCATIONPROC = GLint(__stdcall *) (GLuint program, const GLchar* name);
		using PFNGLGETPROGRAMINFOLOGPROC = void(__stdcall *) (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
		using PFNGLGETPROGRAMIVPROC = void(__stdcall *) (GLuint program, GLenum pname, GLint* param);
		using PFNGLGETSHADERINFOLOGPROC = void(__stdcall *) (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
		using PFNGLGETSHADERSOURCEPROC = void(__stdcall *) (GLuint obj, GLsizei maxLength, GLsizei* length, GLchar* source);
		using PFNGLGETSHADERIVPROC = void(__stdcall *) (GLuint shader, GLenum pname, GLint* param);
		using PFNGLGETUNIFORMLOCATIONPROC = GLint(__stdcall *) (GLuint program, const GLchar* name);
		using PFNGLGETUNIFORMFVPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat* params);
		using PFNGLGETUNIFORMIVPROC = void(__stdcall *) (GLuint program, GLint location, GLint* params);
		using PFNGLGETVERTEXATTRIBPOINTERVPROC = void(__stdcall *) (GLuint index, GLenum pname, void** pointer);
		using PFNGLGETVERTEXATTRIBDVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLdouble* params);
		using PFNGLGETVERTEXATTRIBFVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETVERTEXATTRIBIVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint* params);
		using PFNGLISPROGRAMPROC = GLboolean(__stdcall *) (GLuint program);
		using PFNGLISSHADERPROC = GLboolean(__stdcall *) (GLuint shader);
		using PFNGLLINKPROGRAMPROC = void(__stdcall *) (GLuint program);
		using PFNGLSHADERSOURCEPROC = void(__stdcall *) (GLuint shader, GLsizei count, const GLchar *const* string, const GLint* length);
		using PFNGLSTENCILFUNCSEPARATEPROC = void(__stdcall *) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
		using PFNGLSTENCILMASKSEPARATEPROC = void(__stdcall *) (GLenum face, GLuint mask);
		using PFNGLSTENCILOPSEPARATEPROC = void(__stdcall *) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
		using PFNGLUNIFORM1FPROC = void(__stdcall *) (GLint location, GLfloat v0);
		using PFNGLUNIFORM1FVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM1IPROC = void(__stdcall *) (GLint location, GLint v0);
		using PFNGLUNIFORM1IVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM2FPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1);
		using PFNGLUNIFORM2FVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM2IPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1);
		using PFNGLUNIFORM2IVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM3FPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		using PFNGLUNIFORM3FVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM3IPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1, GLint v2);
		using PFNGLUNIFORM3IVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM4FPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		using PFNGLUNIFORM4FVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM4IPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		using PFNGLUNIFORM4IVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORMMATRIX2FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX3FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX4FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUSEPROGRAMPROC = void(__stdcall *) (GLuint program);
		using PFNGLVALIDATEPROGRAMPROC = void(__stdcall *) (GLuint program);
		using PFNGLVERTEXATTRIB1DPROC = void(__stdcall *) (GLuint index, GLdouble x);
		using PFNGLVERTEXATTRIB1DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB1FPROC = void(__stdcall *) (GLuint index, GLfloat x);
		using PFNGLVERTEXATTRIB1FVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB1SPROC = void(__stdcall *) (GLuint index, GLshort x);
		using PFNGLVERTEXATTRIB1SVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB2DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y);
		using PFNGLVERTEXATTRIB2DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB2FPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y);
		using PFNGLVERTEXATTRIB2FVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB2SPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y);
		using PFNGLVERTEXATTRIB2SVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB3DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXATTRIB3DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB3FPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLVERTEXATTRIB3FVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB3SPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z);
		using PFNGLVERTEXATTRIB3SVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4NBVPROC = void(__stdcall *) (GLuint index, const GLbyte* v);
		using PFNGLVERTEXATTRIB4NIVPROC = void(__stdcall *) (GLuint index, const GLint* v);
		using PFNGLVERTEXATTRIB4NSVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4NUBPROC = void(__stdcall *) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
		using PFNGLVERTEXATTRIB4NUBVPROC = void(__stdcall *) (GLuint index, const GLubyte* v);
		using PFNGLVERTEXATTRIB4NUIVPROC = void(__stdcall *) (GLuint index, const GLuint* v);
		using PFNGLVERTEXATTRIB4NUSVPROC = void(__stdcall *) (GLuint index, const GLushort* v);
		using PFNGLVERTEXATTRIB4BVPROC = void(__stdcall *) (GLuint index, const GLbyte* v);
		using PFNGLVERTEXATTRIB4DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXATTRIB4DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB4FPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLVERTEXATTRIB4FVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB4IVPROC = void(__stdcall *) (GLuint index, const GLint* v);
		using PFNGLVERTEXATTRIB4SPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
		using PFNGLVERTEXATTRIB4SVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4UBVPROC = void(__stdcall *) (GLuint index, const GLubyte* v);
		using PFNGLVERTEXATTRIB4UIVPROC = void(__stdcall *) (GLuint index, const GLuint* v);
		using PFNGLVERTEXATTRIB4USVPROC = void(__stdcall *) (GLuint index, const GLushort* v);
		using PFNGLVERTEXATTRIBPOINTERPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);

		/*
			GL_VERSION_2_1
		*/
		using PFNGLUNIFORMMATRIX2X3FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		using PFNGLUNIFORMMATRIX2X4FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		using PFNGLUNIFORMMATRIX3X2FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		using PFNGLUNIFORMMATRIX3X4FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		using PFNGLUNIFORMMATRIX4X2FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
		using PFNGLUNIFORMMATRIX4X3FVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

		/*
			GL_VERSION_3_0
		*/
		using PFNGLBEGINCONDITIONALRENDERPROC = void(__stdcall *) (GLuint id, GLenum mode);
		using PFNGLBEGINTRANSFORMFEEDBACKPROC = void(__stdcall *) (GLenum primitiveMode);
		using PFNGLBINDFRAGDATALOCATIONPROC = void(__stdcall *) (GLuint program, GLuint colorNumber, const GLchar* name);
		using PFNGLCLAMPCOLORPROC = void(__stdcall *) (GLenum target, GLenum clamp);
		using PFNGLCLEARBUFFERFIPROC = void(__stdcall *) (GLenum buffer, GLint drawBuffer, GLfloat depth, GLint stencil);
		using PFNGLCLEARBUFFERFVPROC = void(__stdcall *) (GLenum buffer, GLint drawBuffer, const GLfloat* value);
		using PFNGLCLEARBUFFERIVPROC = void(__stdcall *) (GLenum buffer, GLint drawBuffer, const GLint* value);
		using PFNGLCLEARBUFFERUIVPROC = void(__stdcall *) (GLenum buffer, GLint drawBuffer, const GLuint* value);
		using PFNGLCOLORMASKIPROC = void(__stdcall *) (GLuint buf, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
		using PFNGLDISABLEIPROC = void(__stdcall *) (GLenum cap, GLuint index);
		using PFNGLENABLEIPROC = void(__stdcall *) (GLenum cap, GLuint index);
		using PFNGLENDCONDITIONALRENDERPROC = void(__stdcall *) (void);
		using PFNGLENDTRANSFORMFEEDBACKPROC = void(__stdcall *) (void);
		using PFNGLGETBOOLEANI_VPROC = void(__stdcall *) (GLenum pname, GLuint index, GLboolean* data);
		using PFNGLGETFRAGDATALOCATIONPROC = GLint(__stdcall *) (GLuint program, const GLchar* name);
		using PFNGLGETSTRINGIPROC = const GLubyte* (__stdcall *) (GLenum name, GLuint index);
		using PFNGLGETTEXPARAMETERIIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETTEXPARAMETERIUIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLuint* params);
		using PFNGLGETTRANSFORMFEEDBACKVARYINGPROC = void(__stdcall *) (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
		using PFNGLGETUNIFORMUIVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint* params);
		using PFNGLGETVERTEXATTRIBIIVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint* params);
		using PFNGLGETVERTEXATTRIBIUIVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLuint* params);
		using PFNGLISENABLEDIPROC = GLboolean(__stdcall *) (GLenum cap, GLuint index);
		using PFNGLTEXPARAMETERIIVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLTEXPARAMETERIUIVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLuint* params);
		using PFNGLTRANSFORMFEEDBACKVARYINGSPROC = void(__stdcall *) (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
		using PFNGLUNIFORM1UIPROC = void(__stdcall *) (GLint location, GLuint v0);
		using PFNGLUNIFORM1UIVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint* value);
		using PFNGLUNIFORM2UIPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1);
		using PFNGLUNIFORM2UIVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint* value);
		using PFNGLUNIFORM3UIPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1, GLuint v2);
		using PFNGLUNIFORM3UIVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint* value);
		using PFNGLUNIFORM4UIPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		using PFNGLUNIFORM4UIVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint* value);
		using PFNGLVERTEXATTRIBI1IPROC = void(__stdcall *) (GLuint index, GLint v0);
		using PFNGLVERTEXATTRIBI1IVPROC = void(__stdcall *) (GLuint index, const GLint* v0);
		using PFNGLVERTEXATTRIBI1UIPROC = void(__stdcall *) (GLuint index, GLuint v0);
		using PFNGLVERTEXATTRIBI1UIVPROC = void(__stdcall *) (GLuint index, const GLuint* v0);
		using PFNGLVERTEXATTRIBI2IPROC = void(__stdcall *) (GLuint index, GLint v0, GLint v1);
		using PFNGLVERTEXATTRIBI2IVPROC = void(__stdcall *) (GLuint index, const GLint* v0);
		using PFNGLVERTEXATTRIBI2UIPROC = void(__stdcall *) (GLuint index, GLuint v0, GLuint v1);
		using PFNGLVERTEXATTRIBI2UIVPROC = void(__stdcall *) (GLuint index, const GLuint* v0);
		using PFNGLVERTEXATTRIBI3IPROC = void(__stdcall *) (GLuint index, GLint v0, GLint v1, GLint v2);
		using PFNGLVERTEXATTRIBI3IVPROC = void(__stdcall *) (GLuint index, const GLint* v0);
		using PFNGLVERTEXATTRIBI3UIPROC = void(__stdcall *) (GLuint index, GLuint v0, GLuint v1, GLuint v2);
		using PFNGLVERTEXATTRIBI3UIVPROC = void(__stdcall *) (GLuint index, const GLuint* v0);
		using PFNGLVERTEXATTRIBI4BVPROC = void(__stdcall *) (GLuint index, const GLbyte* v0);
		using PFNGLVERTEXATTRIBI4IPROC = void(__stdcall *) (GLuint index, GLint v0, GLint v1, GLint v2, GLint v3);
		using PFNGLVERTEXATTRIBI4IVPROC = void(__stdcall *) (GLuint index, const GLint* v0);
		using PFNGLVERTEXATTRIBI4SVPROC = void(__stdcall *) (GLuint index, const GLshort* v0);
		using PFNGLVERTEXATTRIBI4UBVPROC = void(__stdcall *) (GLuint index, const GLubyte* v0);
		using PFNGLVERTEXATTRIBI4UIPROC = void(__stdcall *) (GLuint index, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		using PFNGLVERTEXATTRIBI4UIVPROC = void(__stdcall *) (GLuint index, const GLuint* v0);
		using PFNGLVERTEXATTRIBI4USVPROC = void(__stdcall *) (GLuint index, const GLushort* v0);
		using PFNGLVERTEXATTRIBIPOINTERPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride, const void*pointer);

		/*
			GL_VERSION_3_1
		*/
		using PFNGLDRAWARRAYSINSTANCEDPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
		using PFNGLDRAWELEMENTSINSTANCEDPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount);
		using PFNGLPRIMITIVERESTARTINDEXPROC = void(__stdcall *) (GLuint buffer);
		using PFNGLTEXBUFFERPROC = void(__stdcall *) (GLenum target, GLenum internalFormat, GLuint buffer);

		/*
			GL_VERSION_3_2
		*/
		using PFNGLFRAMEBUFFERTEXTUREPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level);
		using PFNGLGETBUFFERPARAMETERI64VPROC = void(__stdcall *) (GLenum target, GLenum value, GLint64 * data);
		using PFNGLGETINTEGER64I_VPROC = void(__stdcall *) (GLenum pname, GLuint index, GLint64 * data);

		/*
			GL_VERSION_3_3
		*/
		using PFNGLVERTEXATTRIBDIVISORPROC = void(__stdcall *) (GLuint index, GLuint divisor);

		/*
			GL_VERSION_4_0
		*/
		using PFNGLBLENDEQUATIONSEPARATEIPROC = void(__stdcall *) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		using PFNGLBLENDEQUATIONIPROC = void(__stdcall *) (GLuint buf, GLenum mode);
		using PFNGLBLENDFUNCSEPARATEIPROC = void(__stdcall *) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
		using PFNGLBLENDFUNCIPROC = void(__stdcall *) (GLuint buf, GLenum src, GLenum dst);
		using PFNGLMINSAMPLESHADINGPROC = void(__stdcall *) (GLclampf value);

		/*
			GL_VERSION_4_5
		*/
		using PFNGLGETGRAPHICSRESETSTATUSPROC = GLenum(__stdcall *) (void);
		using PFNGLGETNCOMPRESSEDTEXIMAGEPROC = void(__stdcall *) (GLenum target, GLint lod, GLsizei bufSize, GLvoid *pixels);
		using PFNGLGETNTEXIMAGEPROC = void(__stdcall *) (GLenum tex, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *pixels);
		using PFNGLGETNUNIFORMDVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);

		/*
			GL_VERSION_4_6
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC = void(__stdcall *) (GLenum mode, const GLvoid *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		using PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC = void(__stdcall *) (GLenum mode, GLenum type, const GLvoid *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		using PFNGLSPECIALIZESHADERPROC = void(__stdcall *) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);

		/*
			GL_3DFX_tbuffer
		*/
		using PFNGLTBUFFERMASK3DFXPROC = void(__stdcall *) (GLuint mask);

		/*
			GL_AMD_debug_output
		*/
		using GLDEBUGPROCAMD = void(__stdcall *) (GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar* message, void* userParam);
		using PFNGLDEBUGMESSAGECALLBACKAMDPROC = void(__stdcall *) (GLDEBUGPROCAMD callback, void *userParam);
		using PFNGLDEBUGMESSAGEENABLEAMDPROC = void(__stdcall *) (GLenum category, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
		using PFNGLDEBUGMESSAGEINSERTAMDPROC = void(__stdcall *) (GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar* buf);
		using PFNGLGETDEBUGMESSAGELOGAMDPROC = GLuint(__stdcall *) (GLuint count, GLsizei bufsize, GLenum* categories, GLuint* severities, GLuint* ids, GLsizei* lengths, GLchar* message);

		/*
			GL_AMD_draw_buffers_blend
		*/
		using PFNGLBLENDEQUATIONINDEXEDAMDPROC = void(__stdcall *) (GLuint buf, GLenum mode);
		using PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC = void(__stdcall *) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		using PFNGLBLENDFUNCINDEXEDAMDPROC = void(__stdcall *) (GLuint buf, GLenum src, GLenum dst);
		using PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC = void(__stdcall *) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

		/*
			GL_AMD_framebuffer_sample_positions
		*/
		using PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC = void(__stdcall *) (GLenum target, GLuint numsamples, GLuint pixelindex, const GLfloat* values);
		using PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC = void(__stdcall *) (GLenum target, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat* values);
		using PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat* values);
		using PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC = void(__stdcall *) (GLuint framebuffer, GLuint numsamples, GLuint pixelindex, const GLfloat* values);

		/*
			GL_AMD_interleaved_elements
		*/
		using PFNGLVERTEXATTRIBPARAMETERIAMDPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint param);

		/*
			GL_AMD_multi_draw_indirect
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride);
		using PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride);

		/*
			GL_AMD_name_gen_delete
		*/
		using PFNGLDELETENAMESAMDPROC = void(__stdcall *) (GLenum identifier, GLuint num, const GLuint* names);
		using PFNGLGENNAMESAMDPROC = void(__stdcall *) (GLenum identifier, GLuint num, GLuint* names);
		using PFNGLISNAMEAMDPROC = GLboolean(__stdcall *) (GLenum identifier, GLuint name);

		/*
			GL_AMD_occlusion_query_event
		*/
		using PFNGLQUERYOBJECTPARAMETERUIAMDPROC = void(__stdcall *) (GLenum target, GLuint id, GLenum pname, GLuint param);

		/*
			GL_AMD_performance_monitor
		*/
		using PFNGLBEGINPERFMONITORAMDPROC = void(__stdcall *) (GLuint monitor);
		using PFNGLDELETEPERFMONITORSAMDPROC = void(__stdcall *) (GLsizei n, GLuint* monitors);
		using PFNGLENDPERFMONITORAMDPROC = void(__stdcall *) (GLuint monitor);
		using PFNGLGENPERFMONITORSAMDPROC = void(__stdcall *) (GLsizei n, GLuint* monitors);
		using PFNGLGETPERFMONITORCOUNTERDATAAMDPROC = void(__stdcall *) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint *bytesWritten);
		using PFNGLGETPERFMONITORCOUNTERINFOAMDPROC = void(__stdcall *) (GLuint group, GLuint counter, GLenum pname, void *data);
		using PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC = void(__stdcall *) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, GLchar *counterString);
		using PFNGLGETPERFMONITORCOUNTERSAMDPROC = void(__stdcall *) (GLuint group, GLint* numCounters, GLint *maxActiveCounters, GLsizei countersSize, GLuint *counters);
		using PFNGLGETPERFMONITORGROUPSTRINGAMDPROC = void(__stdcall *) (GLuint group, GLsizei bufSize, GLsizei* length, GLchar *groupString);
		using PFNGLGETPERFMONITORGROUPSAMDPROC = void(__stdcall *) (GLint* numGroups, GLsizei groupsSize, GLuint *groups);
		using PFNGLSELECTPERFMONITORCOUNTERSAMDPROC = void(__stdcall *) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList);

		/*
			GL_AMD_sample_positions
		*/
		using PFNGLSETMULTISAMPLEFVAMDPROC = void(__stdcall *) (GLenum pname, GLuint index, const GLfloat* val);

		/*
			GL_AMD_sparse_texture
		*/
		using PFNGLTEXSTORAGESPARSEAMDPROC = void(__stdcall *) (GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
		using PFNGLTEXTURESTORAGESPARSEAMDPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);

		/*
			GL_AMD_stencil_operation_extended
		*/
		using PFNGLSTENCILOPVALUEAMDPROC = void(__stdcall *) (GLenum face, GLuint value);

		/*
			GL_AMD_vertex_shader_tessellator
		*/
		using PFNGLTESSELLATIONFACTORAMDPROC = void(__stdcall *) (GLfloat factor);
		using PFNGLTESSELLATIONMODEAMDPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_ANGLE_framebuffer_blit
		*/
		using PFNGLBLITFRAMEBUFFERANGLEPROC = void(__stdcall *) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

		/*
			GL_ANGLE_framebuffer_multisample
		*/
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_ANGLE_instanced_arrays
		*/
		using PFNGLDRAWARRAYSINSTANCEDANGLEPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
		using PFNGLDRAWELEMENTSINSTANCEDANGLEPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
		using PFNGLVERTEXATTRIBDIVISORANGLEPROC = void(__stdcall *) (GLuint index, GLuint divisor);

		/*
			GL_ANGLE_timer_query
		*/
		using PFNGLBEGINQUERYANGLEPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLDELETEQUERIESANGLEPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLENDQUERYANGLEPROC = void(__stdcall *) (GLenum target);
		using PFNGLGENQUERIESANGLEPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLGETQUERYOBJECTI64VANGLEPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint64* params);
		using PFNGLGETQUERYOBJECTIVANGLEPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLGETQUERYOBJECTUI64VANGLEPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint64* params);
		using PFNGLGETQUERYOBJECTUIVANGLEPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint* params);
		using PFNGLGETQUERYIVANGLEPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLISQUERYANGLEPROC = GLboolean(__stdcall *) (GLuint id);
		using PFNGLQUERYCOUNTERANGLEPROC = void(__stdcall *) (GLuint id, GLenum target);

		/*
			GL_ANGLE_translated_shader_source
		*/
		using PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC = void(__stdcall *) (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);

		/*
			GL_APPLE_copy_texture_levels
		*/
		using PFNGLCOPYTEXTURELEVELSAPPLEPROC = void(__stdcall *) (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);

		/*
			GL_APPLE_element_array
		*/
		using PFNGLDRAWELEMENTARRAYAPPLEPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count);
		using PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
		using PFNGLELEMENTPOINTERAPPLEPROC = void(__stdcall *) (GLenum type, const void *pointer);
		using PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC = void(__stdcall *) (GLenum mode, const GLint* first, const GLsizei *count, GLsizei primcount);
		using PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, const GLint* first, const GLsizei *count, GLsizei primcount);

		/*
			GL_APPLE_fence
		*/
		using PFNGLDELETEFENCESAPPLEPROC = void(__stdcall *) (GLsizei n, const GLuint* fences);
		using PFNGLFINISHFENCEAPPLEPROC = void(__stdcall *) (GLuint fence);
		using PFNGLFINISHOBJECTAPPLEPROC = void(__stdcall *) (GLenum object, GLint name);
		using PFNGLGENFENCESAPPLEPROC = void(__stdcall *) (GLsizei n, GLuint* fences);
		using PFNGLISFENCEAPPLEPROC = GLboolean(__stdcall *) (GLuint fence);
		using PFNGLSETFENCEAPPLEPROC = void(__stdcall *) (GLuint fence);
		using PFNGLTESTFENCEAPPLEPROC = GLboolean(__stdcall *) (GLuint fence);
		using PFNGLTESTOBJECTAPPLEPROC = GLboolean(__stdcall *) (GLenum object, GLuint name);

		/*
			GL_APPLE_flush_buffer_range
		*/
		using PFNGLBUFFERPARAMETERIAPPLEPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint param);
		using PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr size);

		/*
			GL_APPLE_framebuffer_multisample
		*/
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC = void(__stdcall *) (void);

		/*
			GL_APPLE_object_purgeable
		*/
		using PFNGLGETOBJECTPARAMETERIVAPPLEPROC = void(__stdcall *) (GLenum objectType, GLuint name, GLenum pname, GLint* params);
		using PFNGLOBJECTPURGEABLEAPPLEPROC = GLenum(__stdcall *) (GLenum objectType, GLuint name, GLenum option);
		using PFNGLOBJECTUNPURGEABLEAPPLEPROC = GLenum(__stdcall *) (GLenum objectType, GLuint name, GLenum option);

		/*
			GL_APPLE_sync
		*/
		using PFNGLCLIENTWAITSYNCAPPLEPROC = GLenum(__stdcall *) (GLsync GLsync, GLbitfield flags, GLuint64 timeout);
		using PFNGLDELETESYNCAPPLEPROC = void(__stdcall *) (GLsync GLsync);
		using PFNGLFENCESYNCAPPLEPROC = GLsync(__stdcall *) (GLenum condition, GLbitfield flags);
		using PFNGLGETINTEGER64VAPPLEPROC = void(__stdcall *) (GLenum pname, GLint64* params);
		using PFNGLGETSYNCIVAPPLEPROC = void(__stdcall *) (GLsync GLsync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint *values);
		using PFNGLISSYNCAPPLEPROC = GLboolean(__stdcall *) (GLsync GLsync);
		using PFNGLWAITSYNCAPPLEPROC = void(__stdcall *) (GLsync GLsync, GLbitfield flags, GLuint64 timeout);

		/*
			GL_APPLE_texture_range
		*/
		using PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC = void(__stdcall *) (GLenum target, GLenum pname, void **params);
		using PFNGLTEXTURERANGEAPPLEPROC = void(__stdcall *) (GLenum target, GLsizei length, void *pointer);

		/*
			GL_APPLE_vertex_array_object
		*/
		using PFNGLBINDVERTEXARRAYAPPLEPROC = void(__stdcall *) (GLuint array);
		using PFNGLDELETEVERTEXARRAYSAPPLEPROC = void(__stdcall *) (GLsizei n, const GLuint* arrays);
		using PFNGLGENVERTEXARRAYSAPPLEPROC = void(__stdcall *) (GLsizei n, const GLuint* arrays);
		using PFNGLISVERTEXARRAYAPPLEPROC = GLboolean(__stdcall *) (GLuint array);

		/*
			GL_APPLE_vertex_array_range
		*/
		using PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC = void(__stdcall *) (GLsizei length, void *pointer);
		using PFNGLVERTEXARRAYPARAMETERIAPPLEPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLVERTEXARRAYRANGEAPPLEPROC = void(__stdcall *) (GLsizei length, void *pointer);

		/*
			GL_APPLE_vertex_program_evaluators
		*/
		using PFNGLDISABLEVERTEXATTRIBAPPLEPROC = void(__stdcall *) (GLuint index, GLenum pname);
		using PFNGLENABLEVERTEXATTRIBAPPLEPROC = void(__stdcall *) (GLuint index, GLenum pname);
		using PFNGLISVERTEXATTRIBENABLEDAPPLEPROC = GLboolean(__stdcall *) (GLuint index, GLenum pname);
		using PFNGLMAPVERTEXATTRIB1DAPPLEPROC = void(__stdcall *) (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
		using PFNGLMAPVERTEXATTRIB1FAPPLEPROC = void(__stdcall *) (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
		using PFNGLMAPVERTEXATTRIB2DAPPLEPROC = void(__stdcall *) (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
		using PFNGLMAPVERTEXATTRIB2FAPPLEPROC = void(__stdcall *) (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);

		/*
			GL_ARB_ES2_compatibility
		*/
		using PFNGLCLEARDEPTHFPROC = void(__stdcall *) (GLclampf d);
		using PFNGLDEPTHRANGEFPROC = void(__stdcall *) (GLclampf n, GLclampf f);
		using PFNGLGETSHADERPRECISIONFORMATPROC = void(__stdcall *) (GLenum shadertype, GLenum precisiontype, GLint* range, GLint *precision);
		using PFNGLRELEASESHADERCOMPILERPROC = void(__stdcall *) (void);
		using PFNGLSHADERBINARYPROC = void(__stdcall *) (GLsizei count, const GLuint* shaders, GLenum binaryformat, const void*binary, GLsizei length);

		/*
			GL_ARB_ES3_1_compatibility
		*/
		using PFNGLMEMORYBARRIERBYREGIONPROC = void(__stdcall *) (GLbitfield barriers);

		/*
			GL_ARB_ES3_2_compatibility
		*/
		using PFNGLPRIMITIVEBOUNDINGBOXARBPROC = void(__stdcall *) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

		/*
			GL_ARB_base_instance
		*/
		using PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance);
		using PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance);
		using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance);

		/*
			GL_ARB_bindless_texture
		*/
		using PFNGLGETIMAGEHANDLEARBPROC = GLuint64(__stdcall *) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
		using PFNGLGETTEXTUREHANDLEARBPROC = GLuint64(__stdcall *) (GLuint texture);
		using PFNGLGETTEXTURESAMPLERHANDLEARBPROC = GLuint64(__stdcall *) (GLuint texture, GLuint sampler);
		using PFNGLGETVERTEXATTRIBLUI64VARBPROC = void(__stdcall *) (GLuint index, GLenum pname, GLuint64EXT* params);
		using PFNGLISIMAGEHANDLERESIDENTARBPROC = GLboolean(__stdcall *) (GLuint64 handle);
		using PFNGLISTEXTUREHANDLERESIDENTARBPROC = GLboolean(__stdcall *) (GLuint64 handle);
		using PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLMAKEIMAGEHANDLERESIDENTARBPROC = void(__stdcall *) (GLuint64 handle, GLenum access);
		using PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLMAKETEXTUREHANDLERESIDENTARBPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 value);
		using PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* values);
		using PFNGLUNIFORMHANDLEUI64ARBPROC = void(__stdcall *) (GLint location, GLuint64 value);
		using PFNGLUNIFORMHANDLEUI64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);
		using PFNGLVERTEXATTRIBL1UI64ARBPROC = void(__stdcall *) (GLuint index, GLuint64EXT x);
		using PFNGLVERTEXATTRIBL1UI64VARBPROC = void(__stdcall *) (GLuint index, const GLuint64EXT* v);

		/*
			GL_ARB_blend_func_extended
		*/
		using PFNGLBINDFRAGDATALOCATIONINDEXEDPROC = void(__stdcall *) (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
		using PFNGLGETFRAGDATAINDEXPROC = GLint(__stdcall *) (GLuint program, const GLchar * name);

		/*
			GL_ARB_buffer_storage
		*/
		using PFNGLBUFFERSTORAGEPROC = void(__stdcall *) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);

		/*
			GL_ARB_cl_event
		*/
		using PFNGLCREATESYNCFROMCLEVENTARBPROC = GLsync(__stdcall *) (cl_context context, cl_event event, GLbitfield flags);

		/*
			GL_ARB_clear_buffer_object
		*/
		using PFNGLCLEARBUFFERDATAPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARBUFFERSUBDATAPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARNAMEDBUFFERDATAEXTPROC = void(__stdcall *) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC = void(__stdcall *) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);

		/*
			GL_ARB_clear_texture
		*/
		using PFNGLCLEARTEXIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARTEXSUBIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);

		/*
			GL_ARB_clip_control
		*/
		using PFNGLCLIPCONTROLPROC = void(__stdcall *) (GLenum origin, GLenum depth);

		/*
			GL_ARB_color_buffer_float
		*/
		using PFNGLCLAMPCOLORARBPROC = void(__stdcall *) (GLenum target, GLenum clamp);

		/*
			GL_ARB_compute_shader
		*/
		using PFNGLDISPATCHCOMPUTEPROC = void(__stdcall *) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
		using PFNGLDISPATCHCOMPUTEINDIRECTPROC = void(__stdcall *) (GLintptr indirect);

		/*
			GL_ARB_compute_variable_group_size
		*/
		using PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC = void(__stdcall *) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);

		/*
			GL_ARB_copy_buffer
		*/
		using PFNGLCOPYBUFFERSUBDATAPROC = void(__stdcall *) (GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size);

		/*
			GL_ARB_copy_image
		*/
		using PFNGLCOPYIMAGESUBDATAPROC = void(__stdcall *) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

		/*
			GL_ARB_debug_output
		*/
		using GLDEBUGPROCARB = void(__stdcall *) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
		using PFNGLDEBUGMESSAGECALLBACKARBPROC = void(__stdcall *) (GLDEBUGPROCARB callback, const void *userParam);
		using PFNGLDEBUGMESSAGECONTROLARBPROC = void(__stdcall *) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
		using PFNGLDEBUGMESSAGEINSERTARBPROC = void(__stdcall *) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf);
		using PFNGLGETDEBUGMESSAGELOGARBPROC = GLuint(__stdcall *) (GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog);

		/*
			GL_ARB_direct_state_access
		*/
		using PFNGLBINDTEXTUREUNITPROC = void(__stdcall *) (GLuint unit, GLuint texture);
		using PFNGLBLITNAMEDFRAMEBUFFERPROC = void(__stdcall *) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		using PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC = GLenum(__stdcall *) (GLuint framebuffer, GLenum target);
		using PFNGLCLEARNAMEDBUFFERDATAPROC = void(__stdcall *) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARNAMEDBUFFERSUBDATAPROC = void(__stdcall *) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARNAMEDFRAMEBUFFERFIPROC = void(__stdcall *) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
		using PFNGLCLEARNAMEDFRAMEBUFFERFVPROC = void(__stdcall *) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat* value);
		using PFNGLCLEARNAMEDFRAMEBUFFERIVPROC = void(__stdcall *) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint* value);
		using PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC = void(__stdcall *) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint* value);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOPYNAMEDBUFFERSUBDATAPROC = void(__stdcall *) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		using PFNGLCOPYTEXTURESUBIMAGE1DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYTEXTURESUBIMAGE2DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCOPYTEXTURESUBIMAGE3DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCREATEBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* buffers);
		using PFNGLCREATEFRAMEBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* framebuffers);
		using PFNGLCREATEPROGRAMPIPELINESPROC = void(__stdcall *) (GLsizei n, GLuint* pipelines);
		using PFNGLCREATEQUERIESPROC = void(__stdcall *) (GLenum target, GLsizei n, GLuint* ids);
		using PFNGLCREATERENDERBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* renderbuffers);
		using PFNGLCREATESAMPLERSPROC = void(__stdcall *) (GLsizei n, GLuint* samplers);
		using PFNGLCREATETEXTURESPROC = void(__stdcall *) (GLenum target, GLsizei n, GLuint* textures);
		using PFNGLCREATETRANSFORMFEEDBACKSPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLCREATEVERTEXARRAYSPROC = void(__stdcall *) (GLsizei n, GLuint* arrays);
		using PFNGLDISABLEVERTEXARRAYATTRIBPROC = void(__stdcall *) (GLuint vaobj, GLuint index);
		using PFNGLENABLEVERTEXARRAYATTRIBPROC = void(__stdcall *) (GLuint vaobj, GLuint index);
		using PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr length);
		using PFNGLGENERATETEXTUREMIPMAPPROC = void(__stdcall *) (GLuint texture);
		using PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
		using PFNGLGETNAMEDBUFFERPARAMETERI64VPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLint64* params);
		using PFNGLGETNAMEDBUFFERPARAMETERIVPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLint* params);
		using PFNGLGETNAMEDBUFFERPOINTERVPROC = void(__stdcall *) (GLuint buffer, GLenum pname, void** params);
		using PFNGLGETNAMEDBUFFERSUBDATAPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
		using PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
		using PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLint* param);
		using PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC = void(__stdcall *) (GLuint renderbuffer, GLenum pname, GLint* params);
		using PFNGLGETQUERYBUFFEROBJECTI64VPROC = void(__stdcall *) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		using PFNGLGETQUERYBUFFEROBJECTIVPROC = void(__stdcall *) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		using PFNGLGETQUERYBUFFEROBJECTUI64VPROC = void(__stdcall *) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		using PFNGLGETQUERYBUFFEROBJECTUIVPROC = void(__stdcall *) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
		using PFNGLGETTEXTUREIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
		using PFNGLGETTEXTURELEVELPARAMETERFVPROC = void(__stdcall *) (GLuint texture, GLint level, GLenum pname, GLfloat* params);
		using PFNGLGETTEXTURELEVELPARAMETERIVPROC = void(__stdcall *) (GLuint texture, GLint level, GLenum pname, GLint* params);
		using PFNGLGETTEXTUREPARAMETERIIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLint* params);
		using PFNGLGETTEXTUREPARAMETERIUIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLuint* params);
		using PFNGLGETTEXTUREPARAMETERFVPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLfloat* params);
		using PFNGLGETTEXTUREPARAMETERIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLint* params);
		using PFNGLGETTRANSFORMFEEDBACKI64_VPROC = void(__stdcall *) (GLuint xfb, GLenum pname, GLuint index, GLint64* param);
		using PFNGLGETTRANSFORMFEEDBACKI_VPROC = void(__stdcall *) (GLuint xfb, GLenum pname, GLuint index, GLint* param);
		using PFNGLGETTRANSFORMFEEDBACKIVPROC = void(__stdcall *) (GLuint xfb, GLenum pname, GLint* param);
		using PFNGLGETVERTEXARRAYINDEXED64IVPROC = void(__stdcall *) (GLuint vaobj, GLuint index, GLenum pname, GLint64* param);
		using PFNGLGETVERTEXARRAYINDEXEDIVPROC = void(__stdcall *) (GLuint vaobj, GLuint index, GLenum pname, GLint* param);
		using PFNGLGETVERTEXARRAYIVPROC = void(__stdcall *) (GLuint vaobj, GLenum pname, GLint* param);
		using PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC = void(__stdcall *) (GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments);
		using PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC = void(__stdcall *) (GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLMAPNAMEDBUFFERPROC = void * (__stdcall *) (GLuint buffer, GLenum access);
		using PFNGLMAPNAMEDBUFFERRANGEPROC = void * (__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
		using PFNGLNAMEDBUFFERDATAPROC = void(__stdcall *) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
		using PFNGLNAMEDBUFFERSTORAGEPROC = void(__stdcall *) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
		using PFNGLNAMEDBUFFERSUBDATAPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
		using PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC = void(__stdcall *) (GLuint framebuffer, GLenum mode);
		using PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC = void(__stdcall *) (GLuint framebuffer, GLsizei n, const GLenum* bufs);
		using PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLint param);
		using PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC = void(__stdcall *) (GLuint framebuffer, GLenum mode);
		using PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		using PFNGLNAMEDFRAMEBUFFERTEXTUREPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
		using PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
		using PFNGLNAMEDRENDERBUFFERSTORAGEPROC = void(__stdcall *) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC = void(__stdcall *) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLTEXTUREBUFFERPROC = void(__stdcall *) (GLuint texture, GLenum internalformat, GLuint buffer);
		using PFNGLTEXTUREBUFFERRANGEPROC = void(__stdcall *) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLTEXTUREPARAMETERIIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, const GLint* params);
		using PFNGLTEXTUREPARAMETERIUIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, const GLuint* params);
		using PFNGLTEXTUREPARAMETERFPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLfloat param);
		using PFNGLTEXTUREPARAMETERFVPROC = void(__stdcall *) (GLuint texture, GLenum pname, const GLfloat* param);
		using PFNGLTEXTUREPARAMETERIPROC = void(__stdcall *) (GLuint texture, GLenum pname, GLint param);
		using PFNGLTEXTUREPARAMETERIVPROC = void(__stdcall *) (GLuint texture, GLenum pname, const GLint* param);
		using PFNGLTEXTURESTORAGE1DPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
		using PFNGLTEXTURESTORAGE2DPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC = void(__stdcall *) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		using PFNGLTEXTURESTORAGE3DPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		using PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC = void(__stdcall *) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		using PFNGLTEXTURESUBIMAGE1DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTURESUBIMAGE2DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTURESUBIMAGE3DPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		using PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC = void(__stdcall *) (GLuint xfb, GLuint index, GLuint buffer);
		using PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC = void(__stdcall *) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLUNMAPNAMEDBUFFERPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLVERTEXARRAYATTRIBBINDINGPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
		using PFNGLVERTEXARRAYATTRIBFORMATPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		using PFNGLVERTEXARRAYATTRIBIFORMATPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXARRAYATTRIBLFORMATPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXARRAYBINDINGDIVISORPROC = void(__stdcall *) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
		using PFNGLVERTEXARRAYELEMENTBUFFERPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer);
		using PFNGLVERTEXARRAYVERTEXBUFFERPROC = void(__stdcall *) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		using PFNGLVERTEXARRAYVERTEXBUFFERSPROC = void(__stdcall *) (GLuint vaobj, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr *offsets, const GLsizei *strides);

		/*
			GL_ARB_draw_buffers
		*/
		using PFNGLDRAWBUFFERSARBPROC = void(__stdcall *) (GLsizei n, const GLenum* bufs);

		/*
			GL_ARB_draw_buffers_blend
		*/
		using PFNGLBLENDEQUATIONSEPARATEIARBPROC = void(__stdcall *) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		using PFNGLBLENDEQUATIONIARBPROC = void(__stdcall *) (GLuint buf, GLenum mode);
		using PFNGLBLENDFUNCSEPARATEIARBPROC = void(__stdcall *) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
		using PFNGLBLENDFUNCIARBPROC = void(__stdcall *) (GLuint buf, GLenum src, GLenum dst);

		/*
			GL_ARB_draw_elements_base_vertex
		*/
		using PFNGLDRAWELEMENTSBASEVERTEXPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, void *indices, GLint basevertex);
		using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex);
		using PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void *indices, GLint basevertex);
		using PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC = void(__stdcall *) (GLenum mode, GLsizei* count, GLenum type, void**indices, GLsizei primcount, GLint *basevertex);

		/*
			GL_ARB_draw_indirect
		*/
		using PFNGLDRAWARRAYSINDIRECTPROC = void(__stdcall *) (GLenum mode, const void *indirect);
		using PFNGLDRAWELEMENTSINDIRECTPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect);

		/*
			GL_ARB_framebuffer_no_attachments
		*/
		using PFNGLFRAMEBUFFERPARAMETERIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint param);
		using PFNGLGETFRAMEBUFFERPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLint* params);
		using PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLint param);

		/*
			GL_ARB_framebuffer_object
		*/
		using PFNGLBINDFRAMEBUFFERPROC = void(__stdcall *) (GLenum target, GLuint framebuffer);
		using PFNGLBINDRENDERBUFFERPROC = void(__stdcall *) (GLenum target, GLuint renderbuffer);
		using PFNGLBLITFRAMEBUFFERPROC = void(__stdcall *) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		using PFNGLCHECKFRAMEBUFFERSTATUSPROC = GLenum(__stdcall *) (GLenum target);
		using PFNGLDELETEFRAMEBUFFERSPROC = void(__stdcall *) (GLsizei n, const GLuint* framebuffers);
		using PFNGLDELETERENDERBUFFERSPROC = void(__stdcall *) (GLsizei n, const GLuint* renderbuffers);
		using PFNGLFRAMEBUFFERRENDERBUFFERPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		using PFNGLFRAMEBUFFERTEXTURE1DPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTURE2DPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTURE3DPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer);
		using PFNGLFRAMEBUFFERTEXTURELAYERPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
		using PFNGLGENFRAMEBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* framebuffers);
		using PFNGLGENRENDERBUFFERSPROC = void(__stdcall *) (GLsizei n, GLuint* renderbuffers);
		using PFNGLGENERATEMIPMAPPROC = void(__stdcall *) (GLenum target);
		using PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum pname, GLint* params);
		using PFNGLGETRENDERBUFFERPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLISFRAMEBUFFERPROC = GLboolean(__stdcall *) (GLuint framebuffer);
		using PFNGLISRENDERBUFFERPROC = GLboolean(__stdcall *) (GLuint renderbuffer);
		using PFNGLRENDERBUFFERSTORAGEPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_ARB_geometry_shader4
		*/
		using PFNGLFRAMEBUFFERTEXTUREARBPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTUREFACEARBPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
		using PFNGLFRAMEBUFFERTEXTURELAYERARBPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
		using PFNGLPROGRAMPARAMETERIARBPROC = void(__stdcall *) (GLuint program, GLenum pname, GLint value);

		/*
			GL_ARB_get_program_binary
		*/
		using PFNGLGETPROGRAMBINARYPROC = void(__stdcall *) (GLuint program, GLsizei bufSize, GLsizei* length, GLenum *binaryFormat, void*binary);
		using PFNGLPROGRAMBINARYPROC = void(__stdcall *) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
		using PFNGLPROGRAMPARAMETERIPROC = void(__stdcall *) (GLuint program, GLenum pname, GLint value);

		/*
			GL_ARB_get_texture_sub_image
		*/
		using PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
		using PFNGLGETTEXTURESUBIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);

		/*
			GL_ARB_gl_spirv
		*/
		using PFNGLSPECIALIZESHADERARBPROC = void(__stdcall *) (GLuint shader, const GLchar* pEntryPoint, GLuint numSpecializationConstants, const GLuint* pConstantIndex, const GLuint* pConstantValue);

		/*
			GL_ARB_gpu_shader_fp64
		*/
		using PFNGLGETUNIFORMDVPROC = void(__stdcall *) (GLuint program, GLint location, GLdouble* params);
		using PFNGLUNIFORM1DPROC = void(__stdcall *) (GLint location, GLdouble x);
		using PFNGLUNIFORM1DVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLdouble* value);
		using PFNGLUNIFORM2DPROC = void(__stdcall *) (GLint location, GLdouble x, GLdouble y);
		using PFNGLUNIFORM2DVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLdouble* value);
		using PFNGLUNIFORM3DPROC = void(__stdcall *) (GLint location, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLUNIFORM3DVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLdouble* value);
		using PFNGLUNIFORM4DPROC = void(__stdcall *) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLUNIFORM4DVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLdouble* value);
		using PFNGLUNIFORMMATRIX2DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX2X3DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX2X4DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX3DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX3X2DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX3X4DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX4DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX4X2DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLUNIFORMMATRIX4X3DVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);

		/*
			GL_ARB_gpu_shader_int64
		*/
		using PFNGLGETUNIFORMI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLint64* params);
		using PFNGLGETUNIFORMUI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64* params);
		using PFNGLGETNUNIFORMI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLint64* params);
		using PFNGLGETNUNIFORMUI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLuint64* params);
		using PFNGLPROGRAMUNIFORM1I64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLint64 x);
		using PFNGLPROGRAMUNIFORM1I64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64* value);
		using PFNGLPROGRAMUNIFORM1UI64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 x);
		using PFNGLPROGRAMUNIFORM1UI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* value);
		using PFNGLPROGRAMUNIFORM2I64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLint64 x, GLint64 y);
		using PFNGLPROGRAMUNIFORM2I64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64* value);
		using PFNGLPROGRAMUNIFORM2UI64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 x, GLuint64 y);
		using PFNGLPROGRAMUNIFORM2UI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* value);
		using PFNGLPROGRAMUNIFORM3I64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
		using PFNGLPROGRAMUNIFORM3I64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64* value);
		using PFNGLPROGRAMUNIFORM3UI64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
		using PFNGLPROGRAMUNIFORM3UI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* value);
		using PFNGLPROGRAMUNIFORM4I64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
		using PFNGLPROGRAMUNIFORM4I64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64* value);
		using PFNGLPROGRAMUNIFORM4UI64ARBPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
		using PFNGLPROGRAMUNIFORM4UI64VARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* value);
		using PFNGLUNIFORM1I64ARBPROC = void(__stdcall *) (GLint location, GLint64 x);
		using PFNGLUNIFORM1I64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64* value);
		using PFNGLUNIFORM1UI64ARBPROC = void(__stdcall *) (GLint location, GLuint64 x);
		using PFNGLUNIFORM1UI64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);
		using PFNGLUNIFORM2I64ARBPROC = void(__stdcall *) (GLint location, GLint64 x, GLint64 y);
		using PFNGLUNIFORM2I64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64* value);
		using PFNGLUNIFORM2UI64ARBPROC = void(__stdcall *) (GLint location, GLuint64 x, GLuint64 y);
		using PFNGLUNIFORM2UI64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);
		using PFNGLUNIFORM3I64ARBPROC = void(__stdcall *) (GLint location, GLint64 x, GLint64 y, GLint64 z);
		using PFNGLUNIFORM3I64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64* value);
		using PFNGLUNIFORM3UI64ARBPROC = void(__stdcall *) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
		using PFNGLUNIFORM3UI64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);
		using PFNGLUNIFORM4I64ARBPROC = void(__stdcall *) (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
		using PFNGLUNIFORM4I64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64* value);
		using PFNGLUNIFORM4UI64ARBPROC = void(__stdcall *) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
		using PFNGLUNIFORM4UI64VARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);

		/*
			GL_ARB_imaging
		*/
		using PFNGLCOLORSUBTABLEPROC = void(__stdcall *) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
		using PFNGLCOLORTABLEPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
		using PFNGLCOLORTABLEPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat *params);
		using PFNGLCOLORTABLEPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint *params);
		using PFNGLCONVOLUTIONFILTER1DPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
		using PFNGLCONVOLUTIONFILTER2DPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
		using PFNGLCONVOLUTIONPARAMETERFPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat params);
		using PFNGLCONVOLUTIONPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat *params);
		using PFNGLCONVOLUTIONPARAMETERIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint params);
		using PFNGLCONVOLUTIONPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint *params);
		using PFNGLCOPYCOLORSUBTABLEPROC = void(__stdcall *) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYCOLORTABLEPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYCONVOLUTIONFILTER1DPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYCONVOLUTIONFILTER2DPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLGETCOLORTABLEPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *table);
		using PFNGLGETCOLORTABLEPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat *params);
		using PFNGLGETCOLORTABLEPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint *params);
		using PFNGLGETCONVOLUTIONFILTERPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *image);
		using PFNGLGETCONVOLUTIONPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat *params);
		using PFNGLGETCONVOLUTIONPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint *params);
		using PFNGLGETHISTOGRAMPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
		using PFNGLGETHISTOGRAMPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat *params);
		using PFNGLGETHISTOGRAMPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint *params);
		using PFNGLGETMINMAXPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum types, void *values);
		using PFNGLGETMINMAXPARAMETERFVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat *params);
		using PFNGLGETMINMAXPARAMETERIVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint *params);
		using PFNGLGETSEPARABLEFILTERPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
		using PFNGLHISTOGRAMPROC = void(__stdcall *) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
		using PFNGLMINMAXPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLboolean sink);
		using PFNGLRESETHISTOGRAMPROC = void(__stdcall *) (GLenum target);
		using PFNGLRESETMINMAXPROC = void(__stdcall *) (GLenum target);
		using PFNGLSEPARABLEFILTER2DPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);

		/*
			GL_ARB_indirect_parameters
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
		using PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

		/*
			GL_ARB_instanced_arrays
		*/
		using PFNGLDRAWARRAYSINSTANCEDARBPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
		using PFNGLDRAWELEMENTSINSTANCEDARBPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount);
		using PFNGLVERTEXATTRIBDIVISORARBPROC = void(__stdcall *) (GLuint index, GLuint divisor);

		/*
			GL_ARB_internalformat_query
		*/
		using PFNGLGETINTERNALFORMATIVPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);

		/*
			GL_ARB_internalformat_query2
		*/
		using PFNGLGETINTERNALFORMATI64VPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64* params);

		/*
			GL_ARB_invalidate_subdata
		*/
		using PFNGLINVALIDATEBUFFERDATAPROC = void(__stdcall *) (GLuint buffer);
		using PFNGLINVALIDATEBUFFERSUBDATAPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr length);
		using PFNGLINVALIDATEFRAMEBUFFERPROC = void(__stdcall *) (GLenum target, GLsizei numAttachments, const GLenum* attachments);
		using PFNGLINVALIDATESUBFRAMEBUFFERPROC = void(__stdcall *) (GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLINVALIDATETEXIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level);
		using PFNGLINVALIDATETEXSUBIMAGEPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);

		/*
			GL_ARB_map_buffer_range
		*/
		using PFNGLFLUSHMAPPEDBUFFERRANGEPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr length);
		using PFNGLMAPBUFFERRANGEPROC = void * (__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

		/*
			GL_ARB_matrix_palette
		*/
		using PFNGLCURRENTPALETTEMATRIXARBPROC = void(__stdcall *) (GLint index);
		using PFNGLMATRIXINDEXPOINTERARBPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, void *pointer);
		using PFNGLMATRIXINDEXUBVARBPROC = void(__stdcall *) (GLint size, GLubyte *indices);
		using PFNGLMATRIXINDEXUIVARBPROC = void(__stdcall *) (GLint size, GLuint *indices);
		using PFNGLMATRIXINDEXUSVARBPROC = void(__stdcall *) (GLint size, GLushort *indices);

		/*
			GL_ARB_multi_bind
		*/
		using PFNGLBINDBUFFERSBASEPROC = void(__stdcall *) (GLenum target, GLuint first, GLsizei count, const GLuint* buffers);
		using PFNGLBINDBUFFERSRANGEPROC = void(__stdcall *) (GLenum target, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
		using PFNGLBINDIMAGETEXTURESPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLuint* textures);
		using PFNGLBINDSAMPLERSPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLuint* samplers);
		using PFNGLBINDTEXTURESPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLuint* textures);
		using PFNGLBINDVERTEXBUFFERSPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLuint* buffers, const GLintptr *offsets, const GLsizei *strides);

		/*
			GL_ARB_multi_draw_indirect
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride);
		using PFNGLMULTIDRAWELEMENTSINDIRECTPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride);

		/*
			GL_ARB_multisample
		*/
		using PFNGLSAMPLECOVERAGEARBPROC = void(__stdcall *) (GLclampf value, GLboolean invert);

		/*
			GL_ARB_multitexture
		*/
		using PFNGLACTIVETEXTUREARBPROC = void(__stdcall *) (GLenum texture);
		using PFNGLCLIENTACTIVETEXTUREARBPROC = void(__stdcall *) (GLenum texture);
		using PFNGLMULTITEXCOORD1DARBPROC = void(__stdcall *) (GLenum target, GLdouble s);
		using PFNGLMULTITEXCOORD1DVARBPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD1FARBPROC = void(__stdcall *) (GLenum target, GLfloat s);
		using PFNGLMULTITEXCOORD1FVARBPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD1IARBPROC = void(__stdcall *) (GLenum target, GLint s);
		using PFNGLMULTITEXCOORD1IVARBPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD1SARBPROC = void(__stdcall *) (GLenum target, GLshort s);
		using PFNGLMULTITEXCOORD1SVARBPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD2DARBPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t);
		using PFNGLMULTITEXCOORD2DVARBPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD2FARBPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t);
		using PFNGLMULTITEXCOORD2FVARBPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD2IARBPROC = void(__stdcall *) (GLenum target, GLint s, GLint t);
		using PFNGLMULTITEXCOORD2IVARBPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD2SARBPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t);
		using PFNGLMULTITEXCOORD2SVARBPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD3DARBPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
		using PFNGLMULTITEXCOORD3DVARBPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD3FARBPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
		using PFNGLMULTITEXCOORD3FVARBPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD3IARBPROC = void(__stdcall *) (GLenum target, GLint s, GLint t, GLint r);
		using PFNGLMULTITEXCOORD3IVARBPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD3SARBPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t, GLshort r);
		using PFNGLMULTITEXCOORD3SVARBPROC = void(__stdcall *) (GLenum target, const GLshort *v);
		using PFNGLMULTITEXCOORD4DARBPROC = void(__stdcall *) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
		using PFNGLMULTITEXCOORD4DVARBPROC = void(__stdcall *) (GLenum target, const GLdouble *v);
		using PFNGLMULTITEXCOORD4FARBPROC = void(__stdcall *) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
		using PFNGLMULTITEXCOORD4FVARBPROC = void(__stdcall *) (GLenum target, const GLfloat *v);
		using PFNGLMULTITEXCOORD4IARBPROC = void(__stdcall *) (GLenum target, GLint s, GLint t, GLint r, GLint q);
		using PFNGLMULTITEXCOORD4IVARBPROC = void(__stdcall *) (GLenum target, const GLint *v);
		using PFNGLMULTITEXCOORD4SARBPROC = void(__stdcall *) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
		using PFNGLMULTITEXCOORD4SVARBPROC = void(__stdcall *) (GLenum target, const GLshort *v);

		/*
			GL_ARB_occlusion_query
		*/
		using PFNGLBEGINQUERYARBPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLDELETEQUERIESARBPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLENDQUERYARBPROC = void(__stdcall *) (GLenum target);
		using PFNGLGENQUERIESARBPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLGETQUERYOBJECTIVARBPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLGETQUERYOBJECTUIVARBPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint* params);
		using PFNGLGETQUERYIVARBPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLISQUERYARBPROC = GLboolean(__stdcall *) (GLuint id);

		/*
			GL_ARB_parallel_shader_compile
		*/
		using PFNGLMAXSHADERCOMPILERTHREADSARBPROC = void(__stdcall *) (GLuint count);

		/*
			GL_ARB_point_parameters
		*/
		using PFNGLPOINTPARAMETERFARBPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLPOINTPARAMETERFVARBPROC = void(__stdcall *) (GLenum pname, const GLfloat* params);

		/*
			GL_ARB_polygon_offset_clamp
		*/
		using PFNGLPOLYGONOFFSETCLAMPPROC = void(__stdcall *) (GLfloat factor, GLfloat units, GLfloat clamp);

		/*
			GL_ARB_program_interface_query
		*/
		using PFNGLGETPROGRAMINTERFACEIVPROC = void(__stdcall *) (GLuint program, GLenum programInterface, GLenum pname, GLint* params);
		using PFNGLGETPROGRAMRESOURCEINDEXPROC = GLuint(__stdcall *) (GLuint program, GLenum programInterface, const GLchar* name);
		using PFNGLGETPROGRAMRESOURCELOCATIONPROC = GLint(__stdcall *) (GLuint program, GLenum programInterface, const GLchar* name);
		using PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC = GLint(__stdcall *) (GLuint program, GLenum programInterface, const GLchar* name);
		using PFNGLGETPROGRAMRESOURCENAMEPROC = void(__stdcall *) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar *name);
		using PFNGLGETPROGRAMRESOURCEIVPROC = void(__stdcall *) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei *length, GLint *params);

		/*
			GL_ARB_provoking_vertex
		*/
		using PFNGLPROVOKINGVERTEXPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_ARB_robustness
		*/
		using PFNGLGETGRAPHICSRESETSTATUSARBPROC = GLenum(__stdcall *) (void);
		using PFNGLGETNCOLORTABLEARBPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table);
		using PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC = void(__stdcall *) (GLenum target, GLint lod, GLsizei bufSize, void* img);
		using PFNGLGETNCONVOLUTIONFILTERARBPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image);
		using PFNGLGETNHISTOGRAMARBPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
		using PFNGLGETNMAPDVARBPROC = void(__stdcall *) (GLenum target, GLenum query, GLsizei bufSize, GLdouble* v);
		using PFNGLGETNMAPFVARBPROC = void(__stdcall *) (GLenum target, GLenum query, GLsizei bufSize, GLfloat* v);
		using PFNGLGETNMAPIVARBPROC = void(__stdcall *) (GLenum target, GLenum query, GLsizei bufSize, GLint* v);
		using PFNGLGETNMINMAXARBPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
		using PFNGLGETNPIXELMAPFVARBPROC = void(__stdcall *) (GLenum map, GLsizei bufSize, GLfloat* values);
		using PFNGLGETNPIXELMAPUIVARBPROC = void(__stdcall *) (GLenum map, GLsizei bufSize, GLuint* values);
		using PFNGLGETNPIXELMAPUSVARBPROC = void(__stdcall *) (GLenum map, GLsizei bufSize, GLushort* values);
		using PFNGLGETNPOLYGONSTIPPLEARBPROC = void(__stdcall *) (GLsizei bufSize, GLubyte* pattern);
		using PFNGLGETNSEPARABLEFILTERARBPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void*column, void*span);
		using PFNGLGETNTEXIMAGEARBPROC = void(__stdcall *) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* img);
		using PFNGLGETNUNIFORMDVARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLdouble* params);
		using PFNGLGETNUNIFORMFVARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
		using PFNGLGETNUNIFORMIVARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLint* params);
		using PFNGLGETNUNIFORMUIVARBPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLuint* params);
		using PFNGLREADNPIXELSARBPROC = void(__stdcall *) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data);

		/*
			GL_ARB_sample_locations
		*/
		using PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC = void(__stdcall *) (GLenum target, GLuint start, GLsizei count, const GLfloat* v);
		using PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC = void(__stdcall *) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat* v);

		/*
			GL_ARB_sample_shading
		*/
		using PFNGLMINSAMPLESHADINGARBPROC = void(__stdcall *) (GLclampf value);

		/*
			GL_ARB_sampler_objects
		*/
		using PFNGLBINDSAMPLERPROC = void(__stdcall *) (GLuint unit, GLuint sampler);
		using PFNGLDELETESAMPLERSPROC = void(__stdcall *) (GLsizei count, const GLuint * samplers);
		using PFNGLGENSAMPLERSPROC = void(__stdcall *) (GLsizei count, GLuint* samplers);
		using PFNGLGETSAMPLERPARAMETERIIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLint* params);
		using PFNGLGETSAMPLERPARAMETERIUIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLuint* params);
		using PFNGLGETSAMPLERPARAMETERFVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLfloat* params);
		using PFNGLGETSAMPLERPARAMETERIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLint* params);
		using PFNGLISSAMPLERPROC = GLboolean(__stdcall *) (GLuint sampler);
		using PFNGLSAMPLERPARAMETERIIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, const GLint* params);
		using PFNGLSAMPLERPARAMETERIUIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, const GLuint* params);
		using PFNGLSAMPLERPARAMETERFPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLfloat param);
		using PFNGLSAMPLERPARAMETERFVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, const GLfloat* params);
		using PFNGLSAMPLERPARAMETERIPROC = void(__stdcall *) (GLuint sampler, GLenum pname, GLint param);
		using PFNGLSAMPLERPARAMETERIVPROC = void(__stdcall *) (GLuint sampler, GLenum pname, const GLint* params);

		/*
			GL_ARB_separate_shader_objects
		*/
		using PFNGLACTIVESHADERPROGRAMPROC = void(__stdcall *) (GLuint pipeline, GLuint program);
		using PFNGLBINDPROGRAMPIPELINEPROC = void(__stdcall *) (GLuint pipeline);
		using PFNGLCREATESHADERPROGRAMVPROC = GLuint(__stdcall *) (GLenum type, GLsizei count, const GLchar * const * strings);
		using PFNGLDELETEPROGRAMPIPELINESPROC = void(__stdcall *) (GLsizei n, const GLuint* pipelines);
		using PFNGLGENPROGRAMPIPELINESPROC = void(__stdcall *) (GLsizei n, GLuint* pipelines);
		using PFNGLGETPROGRAMPIPELINEINFOLOGPROC = void(__stdcall *) (GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar *infoLog);
		using PFNGLGETPROGRAMPIPELINEIVPROC = void(__stdcall *) (GLuint pipeline, GLenum pname, GLint* params);
		using PFNGLISPROGRAMPIPELINEPROC = GLboolean(__stdcall *) (GLuint pipeline);
		using PFNGLPROGRAMUNIFORM1DPROC = void(__stdcall *) (GLuint program, GLint location, GLdouble x);
		using PFNGLPROGRAMUNIFORM1DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLdouble* value);
		using PFNGLPROGRAMUNIFORM1FPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat x);
		using PFNGLPROGRAMUNIFORM1FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM1IPROC = void(__stdcall *) (GLuint program, GLint location, GLint x);
		using PFNGLPROGRAMUNIFORM1IVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM1UIPROC = void(__stdcall *) (GLuint program, GLint location, GLuint x);
		using PFNGLPROGRAMUNIFORM1UIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM2DPROC = void(__stdcall *) (GLuint program, GLint location, GLdouble x, GLdouble y);
		using PFNGLPROGRAMUNIFORM2DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLdouble* value);
		using PFNGLPROGRAMUNIFORM2FPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat x, GLfloat y);
		using PFNGLPROGRAMUNIFORM2FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM2IPROC = void(__stdcall *) (GLuint program, GLint location, GLint x, GLint y);
		using PFNGLPROGRAMUNIFORM2IVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM2UIPROC = void(__stdcall *) (GLuint program, GLint location, GLuint x, GLuint y);
		using PFNGLPROGRAMUNIFORM2UIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM3DPROC = void(__stdcall *) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLPROGRAMUNIFORM3DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLdouble* value);
		using PFNGLPROGRAMUNIFORM3FPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLPROGRAMUNIFORM3FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM3IPROC = void(__stdcall *) (GLuint program, GLint location, GLint x, GLint y, GLint z);
		using PFNGLPROGRAMUNIFORM3IVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM3UIPROC = void(__stdcall *) (GLuint program, GLint location, GLuint x, GLuint y, GLuint z);
		using PFNGLPROGRAMUNIFORM3UIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM4DPROC = void(__stdcall *) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLPROGRAMUNIFORM4DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLdouble* value);
		using PFNGLPROGRAMUNIFORM4FPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLPROGRAMUNIFORM4FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM4IPROC = void(__stdcall *) (GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w);
		using PFNGLPROGRAMUNIFORM4IVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM4UIPROC = void(__stdcall *) (GLuint program, GLint location, GLuint x, GLuint y, GLuint z, GLuint w);
		using PFNGLPROGRAMUNIFORM4UIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORMMATRIX2DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX2FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX3FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX4FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUSEPROGRAMSTAGESPROC = void(__stdcall *) (GLuint pipeline, GLbitfield stages, GLuint program);
		using PFNGLVALIDATEPROGRAMPIPELINEPROC = void(__stdcall *) (GLuint pipeline);

		/*
			GL_ARB_shader_atomic_counters
		*/
		using PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC = void(__stdcall *) (GLuint program, GLuint bufferIndex, GLenum pname, GLint* params);

		/*
			GL_ARB_shader_image_load_store
		*/
		using PFNGLBINDIMAGETEXTUREPROC = void(__stdcall *) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
		using PFNGLMEMORYBARRIERPROC = void(__stdcall *) (GLbitfield barriers);

		/*
			GL_ARB_shader_objects
		*/
		using PFNGLATTACHOBJECTARBPROC = void(__stdcall *) (GLhandleARB containerObj, GLhandleARB obj);
		using PFNGLCOMPILESHADERARBPROC = void(__stdcall *) (GLhandleARB shaderObj);
		using PFNGLCREATEPROGRAMOBJECTARBPROC = GLhandleARB(__stdcall *) (void);
		using PFNGLCREATESHADEROBJECTARBPROC = GLhandleARB(__stdcall *) (GLenum shaderType);
		using PFNGLDELETEOBJECTARBPROC = void(__stdcall *) (GLhandleARB obj);
		using PFNGLDETACHOBJECTARBPROC = void(__stdcall *) (GLhandleARB containerObj, GLhandleARB attachedObj);
		using PFNGLGETACTIVEUNIFORMARBPROC = void(__stdcall *) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint *size, GLenum *type, GLcharARB *name);
		using PFNGLGETATTACHEDOBJECTSARBPROC = void(__stdcall *) (GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB *obj);
		using PFNGLGETHANDLEARBPROC = GLhandleARB(__stdcall *) (GLenum pname);
		using PFNGLGETINFOLOGARBPROC = void(__stdcall *) (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB *infoLog);
		using PFNGLGETOBJECTPARAMETERFVARBPROC = void(__stdcall *) (GLhandleARB obj, GLenum pname, GLfloat* params);
		using PFNGLGETOBJECTPARAMETERIVARBPROC = void(__stdcall *) (GLhandleARB obj, GLenum pname, GLint* params);
		using PFNGLGETSHADERSOURCEARBPROC = void(__stdcall *) (GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB *source);
		using PFNGLGETUNIFORMLOCATIONARBPROC = GLint(__stdcall *) (GLhandleARB programObj, const GLcharARB* name);
		using PFNGLGETUNIFORMFVARBPROC = void(__stdcall *) (GLhandleARB programObj, GLint location, GLfloat* params);
		using PFNGLGETUNIFORMIVARBPROC = void(__stdcall *) (GLhandleARB programObj, GLint location, GLint* params);
		using PFNGLLINKPROGRAMARBPROC = void(__stdcall *) (GLhandleARB programObj);
		using PFNGLSHADERSOURCEARBPROC = void(__stdcall *) (GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint *length);
		using PFNGLUNIFORM1FARBPROC = void(__stdcall *) (GLint location, GLfloat v0);
		using PFNGLUNIFORM1FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM1IARBPROC = void(__stdcall *) (GLint location, GLint v0);
		using PFNGLUNIFORM1IVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM2FARBPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1);
		using PFNGLUNIFORM2FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM2IARBPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1);
		using PFNGLUNIFORM2IVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM3FARBPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		using PFNGLUNIFORM3FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM3IARBPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1, GLint v2);
		using PFNGLUNIFORM3IVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORM4FARBPROC = void(__stdcall *) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		using PFNGLUNIFORM4FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLfloat* value);
		using PFNGLUNIFORM4IARBPROC = void(__stdcall *) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		using PFNGLUNIFORM4IVARBPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint* value);
		using PFNGLUNIFORMMATRIX2FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX3FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX4FVARBPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUSEPROGRAMOBJECTARBPROC = void(__stdcall *) (GLhandleARB programObj);
		using PFNGLVALIDATEPROGRAMARBPROC = void(__stdcall *) (GLhandleARB programObj);

		/*
			GL_ARB_shader_storage_buffer_object
		*/
		using PFNGLSHADERSTORAGEBLOCKBINDINGPROC = void(__stdcall *) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);

		/*
			GL_ARB_shader_subroutine
		*/
		using PFNGLGETACTIVESUBROUTINENAMEPROC = void(__stdcall *) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar *name);
		using PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC = void(__stdcall *) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar *name);
		using PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC = void(__stdcall *) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
		using PFNGLGETPROGRAMSTAGEIVPROC = void(__stdcall *) (GLuint program, GLenum shadertype, GLenum pname, GLint* values);
		using PFNGLGETSUBROUTINEINDEXPROC = GLuint(__stdcall *) (GLuint program, GLenum shadertype, const GLchar* name);
		using PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC = GLint(__stdcall *) (GLuint program, GLenum shadertype, const GLchar* name);
		using PFNGLGETUNIFORMSUBROUTINEUIVPROC = void(__stdcall *) (GLenum shadertype, GLint location, GLuint* params);
		using PFNGLUNIFORMSUBROUTINESUIVPROC = void(__stdcall *) (GLenum shadertype, GLsizei count, const GLuint* indices);

		/*
			GL_ARB_shading_language_include
		*/
		using PFNGLCOMPILESHADERINCLUDEARBPROC = void(__stdcall *) (GLuint shader, GLsizei count, const GLchar* const *path, const GLint *length);
		using PFNGLDELETENAMEDSTRINGARBPROC = void(__stdcall *) (GLint namelen, const GLchar* name);
		using PFNGLGETNAMEDSTRINGARBPROC = void(__stdcall *) (GLint namelen, const GLchar* name, GLsizei bufSize, GLint *stringlen, GLchar *string);
		using PFNGLGETNAMEDSTRINGIVARBPROC = void(__stdcall *) (GLint namelen, const GLchar* name, GLenum pname, GLint *params);
		using PFNGLISNAMEDSTRINGARBPROC = GLboolean(__stdcall *) (GLint namelen, const GLchar* name);
		using PFNGLNAMEDSTRINGARBPROC = void(__stdcall *) (GLenum type, GLint namelen, const GLchar* name, GLint stringlen, const GLchar *string);

		/*
			GL_ARB_sparse_buffer
		*/
		using PFNGLBUFFERPAGECOMMITMENTARBPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);

		/*
			GL_ARB_sparse_texture
		*/
		using PFNGLTEXPAGECOMMITMENTARBPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

		/*
			GL_ARB_sync
		*/
		using PFNGLCLIENTWAITSYNCPROC = GLenum(__stdcall *) (GLsync GLsync, GLbitfield flags, GLuint64 timeout);
		using PFNGLDELETESYNCPROC = void(__stdcall *) (GLsync GLsync);
		using PFNGLFENCESYNCPROC = GLsync(__stdcall *) (GLenum condition, GLbitfield flags);
		using PFNGLGETINTEGER64VPROC = void(__stdcall *) (GLenum pname, GLint64* params);
		using PFNGLGETSYNCIVPROC = void(__stdcall *) (GLsync GLsync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint *values);
		using PFNGLISSYNCPROC = GLboolean(__stdcall *) (GLsync GLsync);
		using PFNGLWAITSYNCPROC = void(__stdcall *) (GLsync GLsync, GLbitfield flags, GLuint64 timeout);

		/*
			GL_ARB_tessellation_shader
		*/
		using PFNGLPATCHPARAMETERFVPROC = void(__stdcall *) (GLenum pname, const GLfloat* values);
		using PFNGLPATCHPARAMETERIPROC = void(__stdcall *) (GLenum pname, GLint value);

		/*
			GL_ARB_texture_barrier
		*/
		using PFNGLTEXTUREBARRIERPROC = void(__stdcall *) (void);

		/*
			GL_ARB_texture_buffer_object
		*/
		using PFNGLTEXBUFFERARBPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLuint buffer);

		/*
			GL_ARB_texture_buffer_range
		*/
		using PFNGLTEXBUFFERRANGEPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLTEXTUREBUFFERRANGEEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

		/*
			GL_ARB_texture_compression
		*/
		using PFNGLCOMPRESSEDTEXIMAGE1DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXIMAGE2DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXIMAGE3DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLGETCOMPRESSEDTEXIMAGEARBPROC = void(__stdcall *) (GLenum target, GLint lod, void *img);

		/*
			GL_ARB_texture_multisample
		*/
		using PFNGLGETMULTISAMPLEFVPROC = void(__stdcall *) (GLenum pname, GLuint index, GLfloat* val);
		using PFNGLSAMPLEMASKIPROC = void(__stdcall *) (GLuint index, GLbitfield mask);
		using PFNGLTEXIMAGE2DMULTISAMPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		using PFNGLTEXIMAGE3DMULTISAMPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

		/*
			GL_ARB_texture_storage
		*/
		using PFNGLTEXSTORAGE1DPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		using PFNGLTEXSTORAGE2DPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLTEXSTORAGE3DPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

		/*
			GL_ARB_texture_storage_multisample
		*/
		using PFNGLTEXSTORAGE2DMULTISAMPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		using PFNGLTEXSTORAGE3DMULTISAMPLEPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
		using PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
		using PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

		/*
			GL_ARB_texture_view
		*/
		using PFNGLTEXTUREVIEWPROC = void(__stdcall *) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

		/*
			GL_ARB_timer_query
		*/
		using PFNGLGETQUERYOBJECTI64VPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint64* params);
		using PFNGLGETQUERYOBJECTUI64VPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint64* params);
		using PFNGLQUERYCOUNTERPROC = void(__stdcall *) (GLuint id, GLenum target);

		/*
			GL_ARB_transform_feedback2
		*/
		using PFNGLBINDTRANSFORMFEEDBACKPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLDELETETRANSFORMFEEDBACKSPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLDRAWTRANSFORMFEEDBACKPROC = void(__stdcall *) (GLenum mode, GLuint id);
		using PFNGLGENTRANSFORMFEEDBACKSPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLISTRANSFORMFEEDBACKPROC = GLboolean(__stdcall *) (GLuint id);
		using PFNGLPAUSETRANSFORMFEEDBACKPROC = void(__stdcall *) (void);
		using PFNGLRESUMETRANSFORMFEEDBACKPROC = void(__stdcall *) (void);

		/*
			GL_ARB_transform_feedback3
		*/
		using PFNGLBEGINQUERYINDEXEDPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint id);
		using PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC = void(__stdcall *) (GLenum mode, GLuint id, GLuint stream);
		using PFNGLENDQUERYINDEXEDPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLGETQUERYINDEXEDIVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum pname, GLint* params);

		/*
			GL_ARB_transform_feedback_instanced
		*/
		using PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC = void(__stdcall *) (GLenum mode, GLuint id, GLsizei primcount);
		using PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC = void(__stdcall *) (GLenum mode, GLuint id, GLuint stream, GLsizei primcount);

		/*
			GL_ARB_transpose_matrix
		*/
		using PFNGLLOADTRANSPOSEMATRIXDARBPROC = void(__stdcall *) (GLdouble m[16]);
		using PFNGLLOADTRANSPOSEMATRIXFARBPROC = void(__stdcall *) (GLfloat m[16]);
		using PFNGLMULTTRANSPOSEMATRIXDARBPROC = void(__stdcall *) (GLdouble m[16]);
		using PFNGLMULTTRANSPOSEMATRIXFARBPROC = void(__stdcall *) (GLfloat m[16]);

		/*
			GL_ARB_uniform_buffer_object
		*/
		using PFNGLBINDBUFFERBASEPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer);
		using PFNGLBINDBUFFERRANGEPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC = void(__stdcall *) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
		using PFNGLGETACTIVEUNIFORMBLOCKIVPROC = void(__stdcall *) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
		using PFNGLGETACTIVEUNIFORMNAMEPROC = void(__stdcall *) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName);
		using PFNGLGETACTIVEUNIFORMSIVPROC = void(__stdcall *) (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
		using PFNGLGETINTEGERI_VPROC = void(__stdcall *) (GLenum target, GLuint index, GLint* data);
		using PFNGLGETUNIFORMBLOCKINDEXPROC = GLuint(__stdcall *) (GLuint program, const GLchar* uniformBlockName);
		using PFNGLGETUNIFORMINDICESPROC = void(__stdcall *) (GLuint program, GLsizei uniformCount, const GLchar* const * uniformNames, GLuint* uniformIndices);
		using PFNGLUNIFORMBLOCKBINDINGPROC = void(__stdcall *) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

		/*
			GL_ARB_vertex_array_object
		*/
		using PFNGLBINDVERTEXARRAYPROC = void(__stdcall *) (GLuint array);
		using PFNGLDELETEVERTEXARRAYSPROC = void(__stdcall *) (GLsizei n, const GLuint* arrays);
		using PFNGLGENVERTEXARRAYSPROC = void(__stdcall *) (GLsizei n, GLuint* arrays);
		using PFNGLISVERTEXARRAYPROC = GLboolean(__stdcall *) (GLuint array);

		/*
			GL_ARB_vertex_attrib_64bit
		*/
		using PFNGLGETVERTEXATTRIBLDVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLdouble* params);
		using PFNGLVERTEXATTRIBL1DPROC = void(__stdcall *) (GLuint index, GLdouble x);
		using PFNGLVERTEXATTRIBL1DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL2DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y);
		using PFNGLVERTEXATTRIBL2DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL3DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXATTRIBL3DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL4DPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXATTRIBL4DVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBLPOINTERPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);

		/*
			GL_ARB_vertex_attrib_binding
		*/
		using PFNGLBINDVERTEXBUFFERPROC = void(__stdcall *) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		using PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC = void(__stdcall *) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
		using PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
		using PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		using PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC = void(__stdcall *) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
		using PFNGLVERTEXATTRIBBINDINGPROC = void(__stdcall *) (GLuint attribindex, GLuint bindingindex);
		using PFNGLVERTEXATTRIBFORMATPROC = void(__stdcall *) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
		using PFNGLVERTEXATTRIBIFORMATPROC = void(__stdcall *) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXATTRIBLFORMATPROC = void(__stdcall *) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
		using PFNGLVERTEXBINDINGDIVISORPROC = void(__stdcall *) (GLuint bindingindex, GLuint divisor);

		/*
			GL_ARB_vertex_blend
		*/
		using PFNGLVERTEXBLENDARBPROC = void(__stdcall *) (GLint count);
		using PFNGLWEIGHTPOINTERARBPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, void *pointer);
		using PFNGLWEIGHTBVARBPROC = void(__stdcall *) (GLint size, GLbyte *weights);
		using PFNGLWEIGHTDVARBPROC = void(__stdcall *) (GLint size, GLdouble *weights);
		using PFNGLWEIGHTFVARBPROC = void(__stdcall *) (GLint size, GLfloat *weights);
		using PFNGLWEIGHTIVARBPROC = void(__stdcall *) (GLint size, GLint *weights);
		using PFNGLWEIGHTSVARBPROC = void(__stdcall *) (GLint size, GLshort *weights);
		using PFNGLWEIGHTUBVARBPROC = void(__stdcall *) (GLint size, GLubyte *weights);
		using PFNGLWEIGHTUIVARBPROC = void(__stdcall *) (GLint size, GLuint *weights);
		using PFNGLWEIGHTUSVARBPROC = void(__stdcall *) (GLint size, GLushort *weights);

		/*
			GL_ARB_vertex_buffer_object
		*/
		using PFNGLBINDBUFFERARBPROC = void(__stdcall *) (GLenum target, GLuint buffer);
		using PFNGLBUFFERDATAARBPROC = void(__stdcall *) (GLenum target, GLsizeiptrARB size, const void *data, GLenum usage);
		using PFNGLBUFFERSUBDATAARBPROC = void(__stdcall *) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data);
		using PFNGLDELETEBUFFERSARBPROC = void(__stdcall *) (GLsizei n, const GLuint* buffers);
		using PFNGLGENBUFFERSARBPROC = void(__stdcall *) (GLsizei n, GLuint* buffers);
		using PFNGLGETBUFFERPARAMETERIVARBPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETBUFFERPOINTERVARBPROC = void(__stdcall *) (GLenum target, GLenum pname, void** params);
		using PFNGLGETBUFFERSUBDATAARBPROC = void(__stdcall *) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data);
		using PFNGLISBUFFERARBPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLMAPBUFFERARBPROC = void * (__stdcall *) (GLenum target, GLenum access);
		using PFNGLUNMAPBUFFERARBPROC = GLboolean(__stdcall *) (GLenum target);

		/*
			GL_ARB_vertex_program
		*/
		using PFNGLBINDPROGRAMARBPROC = void(__stdcall *) (GLenum target, GLuint program);
		using PFNGLDELETEPROGRAMSARBPROC = void(__stdcall *) (GLsizei n, const GLuint* programs);
		using PFNGLDISABLEVERTEXATTRIBARRAYARBPROC = void(__stdcall *) (GLuint index);
		using PFNGLENABLEVERTEXATTRIBARRAYARBPROC = void(__stdcall *) (GLuint index);
		using PFNGLGENPROGRAMSARBPROC = void(__stdcall *) (GLsizei n, GLuint* programs);
		using PFNGLGETPROGRAMENVPARAMETERDVARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble* params);
		using PFNGLGETPROGRAMENVPARAMETERFVARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat* params);
		using PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble* params);
		using PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat* params);
		using PFNGLGETPROGRAMSTRINGARBPROC = void(__stdcall *) (GLenum target, GLenum pname, void *string);
		using PFNGLGETPROGRAMIVARBPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETVERTEXATTRIBPOINTERVARBPROC = void(__stdcall *) (GLuint index, GLenum pname, void** pointer);
		using PFNGLGETVERTEXATTRIBDVARBPROC = void(__stdcall *) (GLuint index, GLenum pname, GLdouble* params);
		using PFNGLGETVERTEXATTRIBFVARBPROC = void(__stdcall *) (GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETVERTEXATTRIBIVARBPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint* params);
		using PFNGLISPROGRAMARBPROC = GLboolean(__stdcall *) (GLuint program);
		using PFNGLPROGRAMENVPARAMETER4DARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLPROGRAMENVPARAMETER4DVARBPROC = void(__stdcall *) (GLenum target, GLuint index, const GLdouble* params);
		using PFNGLPROGRAMENVPARAMETER4FARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLPROGRAMENVPARAMETER4FVARBPROC = void(__stdcall *) (GLenum target, GLuint index, const GLfloat* params);
		using PFNGLPROGRAMLOCALPARAMETER4DARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLPROGRAMLOCALPARAMETER4DVARBPROC = void(__stdcall *) (GLenum target, GLuint index, const GLdouble* params);
		using PFNGLPROGRAMLOCALPARAMETER4FARBPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLPROGRAMLOCALPARAMETER4FVARBPROC = void(__stdcall *) (GLenum target, GLuint index, const GLfloat* params);
		using PFNGLPROGRAMSTRINGARBPROC = void(__stdcall *) (GLenum target, GLenum format, GLsizei len, const void *string);
		using PFNGLVERTEXATTRIB1DARBPROC = void(__stdcall *) (GLuint index, GLdouble x);
		using PFNGLVERTEXATTRIB1DVARBPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB1FARBPROC = void(__stdcall *) (GLuint index, GLfloat x);
		using PFNGLVERTEXATTRIB1FVARBPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB1SARBPROC = void(__stdcall *) (GLuint index, GLshort x);
		using PFNGLVERTEXATTRIB1SVARBPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB2DARBPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y);
		using PFNGLVERTEXATTRIB2DVARBPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB2FARBPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y);
		using PFNGLVERTEXATTRIB2FVARBPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB2SARBPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y);
		using PFNGLVERTEXATTRIB2SVARBPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB3DARBPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXATTRIB3DVARBPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB3FARBPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLVERTEXATTRIB3FVARBPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB3SARBPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z);
		using PFNGLVERTEXATTRIB3SVARBPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4NBVARBPROC = void(__stdcall *) (GLuint index, const GLbyte* v);
		using PFNGLVERTEXATTRIB4NIVARBPROC = void(__stdcall *) (GLuint index, const GLint* v);
		using PFNGLVERTEXATTRIB4NSVARBPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4NUBARBPROC = void(__stdcall *) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
		using PFNGLVERTEXATTRIB4NUBVARBPROC = void(__stdcall *) (GLuint index, const GLubyte* v);
		using PFNGLVERTEXATTRIB4NUIVARBPROC = void(__stdcall *) (GLuint index, const GLuint* v);
		using PFNGLVERTEXATTRIB4NUSVARBPROC = void(__stdcall *) (GLuint index, const GLushort* v);
		using PFNGLVERTEXATTRIB4BVARBPROC = void(__stdcall *) (GLuint index, const GLbyte* v);
		using PFNGLVERTEXATTRIB4DARBPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXATTRIB4DVARBPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB4FARBPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLVERTEXATTRIB4FVARBPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB4IVARBPROC = void(__stdcall *) (GLuint index, const GLint* v);
		using PFNGLVERTEXATTRIB4SARBPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
		using PFNGLVERTEXATTRIB4SVARBPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4UBVARBPROC = void(__stdcall *) (GLuint index, const GLubyte* v);
		using PFNGLVERTEXATTRIB4UIVARBPROC = void(__stdcall *) (GLuint index, const GLuint* v);
		using PFNGLVERTEXATTRIB4USVARBPROC = void(__stdcall *) (GLuint index, const GLushort* v);
		using PFNGLVERTEXATTRIBPOINTERARBPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);

		/*
			GL_ARB_vertex_shader
		*/
		using PFNGLBINDATTRIBLOCATIONARBPROC = void(__stdcall *) (GLhandleARB programObj, GLuint index, const GLcharARB* name);
		using PFNGLGETACTIVEATTRIBARBPROC = void(__stdcall *) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint *size, GLenum *type, GLcharARB *name);
		using PFNGLGETATTRIBLOCATIONARBPROC = GLint(__stdcall *) (GLhandleARB programObj, const GLcharARB* name);

		/*
			GL_ARB_vertex_type_2_10_10_10_rev
		*/
		using PFNGLCOLORP3UIPROC = void(__stdcall *) (GLenum type, GLuint color);
		using PFNGLCOLORP3UIVPROC = void(__stdcall *) (GLenum type, const GLuint* color);
		using PFNGLCOLORP4UIPROC = void(__stdcall *) (GLenum type, GLuint color);
		using PFNGLCOLORP4UIVPROC = void(__stdcall *) (GLenum type, const GLuint* color);
		using PFNGLMULTITEXCOORDP1UIPROC = void(__stdcall *) (GLenum texture, GLenum type, GLuint coords);
		using PFNGLMULTITEXCOORDP1UIVPROC = void(__stdcall *) (GLenum texture, GLenum type, const GLuint* coords);
		using PFNGLMULTITEXCOORDP2UIPROC = void(__stdcall *) (GLenum texture, GLenum type, GLuint coords);
		using PFNGLMULTITEXCOORDP2UIVPROC = void(__stdcall *) (GLenum texture, GLenum type, const GLuint* coords);
		using PFNGLMULTITEXCOORDP3UIPROC = void(__stdcall *) (GLenum texture, GLenum type, GLuint coords);
		using PFNGLMULTITEXCOORDP3UIVPROC = void(__stdcall *) (GLenum texture, GLenum type, const GLuint* coords);
		using PFNGLMULTITEXCOORDP4UIPROC = void(__stdcall *) (GLenum texture, GLenum type, GLuint coords);
		using PFNGLMULTITEXCOORDP4UIVPROC = void(__stdcall *) (GLenum texture, GLenum type, const GLuint* coords);
		using PFNGLNORMALP3UIPROC = void(__stdcall *) (GLenum type, GLuint coords);
		using PFNGLNORMALP3UIVPROC = void(__stdcall *) (GLenum type, const GLuint* coords);
		using PFNGLSECONDARYCOLORP3UIPROC = void(__stdcall *) (GLenum type, GLuint color);
		using PFNGLSECONDARYCOLORP3UIVPROC = void(__stdcall *) (GLenum type, const GLuint* color);
		using PFNGLTEXCOORDP1UIPROC = void(__stdcall *) (GLenum type, GLuint coords);
		using PFNGLTEXCOORDP1UIVPROC = void(__stdcall *) (GLenum type, const GLuint* coords);
		using PFNGLTEXCOORDP2UIPROC = void(__stdcall *) (GLenum type, GLuint coords);
		using PFNGLTEXCOORDP2UIVPROC = void(__stdcall *) (GLenum type, const GLuint* coords);
		using PFNGLTEXCOORDP3UIPROC = void(__stdcall *) (GLenum type, GLuint coords);
		using PFNGLTEXCOORDP3UIVPROC = void(__stdcall *) (GLenum type, const GLuint* coords);
		using PFNGLTEXCOORDP4UIPROC = void(__stdcall *) (GLenum type, GLuint coords);
		using PFNGLTEXCOORDP4UIVPROC = void(__stdcall *) (GLenum type, const GLuint* coords);
		using PFNGLVERTEXATTRIBP1UIPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
		using PFNGLVERTEXATTRIBP1UIVPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
		using PFNGLVERTEXATTRIBP2UIPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
		using PFNGLVERTEXATTRIBP2UIVPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
		using PFNGLVERTEXATTRIBP3UIPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
		using PFNGLVERTEXATTRIBP3UIVPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
		using PFNGLVERTEXATTRIBP4UIPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
		using PFNGLVERTEXATTRIBP4UIVPROC = void(__stdcall *) (GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
		using PFNGLVERTEXP2UIPROC = void(__stdcall *) (GLenum type, GLuint value);
		using PFNGLVERTEXP2UIVPROC = void(__stdcall *) (GLenum type, const GLuint* value);
		using PFNGLVERTEXP3UIPROC = void(__stdcall *) (GLenum type, GLuint value);
		using PFNGLVERTEXP3UIVPROC = void(__stdcall *) (GLenum type, const GLuint* value);
		using PFNGLVERTEXP4UIPROC = void(__stdcall *) (GLenum type, GLuint value);
		using PFNGLVERTEXP4UIVPROC = void(__stdcall *) (GLenum type, const GLuint* value);

		/*
			GL_ARB_viewport_array
		*/
		using PFNGLDEPTHRANGEARRAYVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLclampd * v);
		using PFNGLDEPTHRANGEINDEXEDPROC = void(__stdcall *) (GLuint index, GLclampd n, GLclampd f);
		using PFNGLGETDOUBLEI_VPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble* data);
		using PFNGLGETFLOATI_VPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat* data);
		using PFNGLSCISSORARRAYVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLint * v);
		using PFNGLSCISSORINDEXEDPROC = void(__stdcall *) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
		using PFNGLSCISSORINDEXEDVPROC = void(__stdcall *) (GLuint index, const GLint * v);
		using PFNGLVIEWPORTARRAYVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLfloat * v);
		using PFNGLVIEWPORTINDEXEDFPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
		using PFNGLVIEWPORTINDEXEDFVPROC = void(__stdcall *) (GLuint index, const GLfloat * v);

		/*
			GL_ARB_window_pos
		*/
		using PFNGLWINDOWPOS2DARBPROC = void(__stdcall *) (GLdouble x, GLdouble y);
		using PFNGLWINDOWPOS2DVARBPROC = void(__stdcall *) (const GLdouble* p);
		using PFNGLWINDOWPOS2FARBPROC = void(__stdcall *) (GLfloat x, GLfloat y);
		using PFNGLWINDOWPOS2FVARBPROC = void(__stdcall *) (const GLfloat* p);
		using PFNGLWINDOWPOS2IARBPROC = void(__stdcall *) (GLint x, GLint y);
		using PFNGLWINDOWPOS2IVARBPROC = void(__stdcall *) (const GLint* p);
		using PFNGLWINDOWPOS2SARBPROC = void(__stdcall *) (GLshort x, GLshort y);
		using PFNGLWINDOWPOS2SVARBPROC = void(__stdcall *) (const GLshort* p);
		using PFNGLWINDOWPOS3DARBPROC = void(__stdcall *) (GLdouble x, GLdouble y, GLdouble z);
		using PFNGLWINDOWPOS3DVARBPROC = void(__stdcall *) (const GLdouble* p);
		using PFNGLWINDOWPOS3FARBPROC = void(__stdcall *) (GLfloat x, GLfloat y, GLfloat z);
		using PFNGLWINDOWPOS3FVARBPROC = void(__stdcall *) (const GLfloat* p);
		using PFNGLWINDOWPOS3IARBPROC = void(__stdcall *) (GLint x, GLint y, GLint z);
		using PFNGLWINDOWPOS3IVARBPROC = void(__stdcall *) (const GLint* p);
		using PFNGLWINDOWPOS3SARBPROC = void(__stdcall *) (GLshort x, GLshort y, GLshort z);
		using PFNGLWINDOWPOS3SVARBPROC = void(__stdcall *) (const GLshort* p);

		/*
			GL_ATI_draw_buffers
		*/
		using PFNGLDRAWBUFFERSATIPROC = void(__stdcall *) (GLsizei n, const GLenum* bufs);

		/*
			GL_ATI_element_array
		*/
		using PFNGLDRAWELEMENTARRAYATIPROC = void(__stdcall *) (GLenum mode, GLsizei count);
		using PFNGLDRAWRANGEELEMENTARRAYATIPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLsizei count);
		using PFNGLELEMENTPOINTERATIPROC = void(__stdcall *) (GLenum type, const void *pointer);

		/*
			GL_ATI_envmap_bumpmap
		*/
		using PFNGLGETTEXBUMPPARAMETERFVATIPROC = void(__stdcall *) (GLenum pname, GLfloat *param);
		using PFNGLGETTEXBUMPPARAMETERIVATIPROC = void(__stdcall *) (GLenum pname, GLint *param);
		using PFNGLTEXBUMPPARAMETERFVATIPROC = void(__stdcall *) (GLenum pname, GLfloat *param);
		using PFNGLTEXBUMPPARAMETERIVATIPROC = void(__stdcall *) (GLenum pname, GLint *param);

		/*
			GL_ATI_fragment_shader
		*/
		using PFNGLALPHAFRAGMENTOP1ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
		using PFNGLALPHAFRAGMENTOP2ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
		using PFNGLALPHAFRAGMENTOP3ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
		using PFNGLBEGINFRAGMENTSHADERATIPROC = void(__stdcall *) (void);
		using PFNGLBINDFRAGMENTSHADERATIPROC = void(__stdcall *) (GLuint id);
		using PFNGLCOLORFRAGMENTOP1ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
		using PFNGLCOLORFRAGMENTOP2ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
		using PFNGLCOLORFRAGMENTOP3ATIPROC = void(__stdcall *) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
		using PFNGLDELETEFRAGMENTSHADERATIPROC = void(__stdcall *) (GLuint id);
		using PFNGLENDFRAGMENTSHADERATIPROC = void(__stdcall *) (void);
		using PFNGLGENFRAGMENTSHADERSATIPROC = GLuint(__stdcall *) (GLuint range);
		using PFNGLPASSTEXCOORDATIPROC = void(__stdcall *) (GLuint dst, GLuint coord, GLenum swizzle);
		using PFNGLSAMPLEMAPATIPROC = void(__stdcall *) (GLuint dst, GLuint interp, GLenum swizzle);
		using PFNGLSETFRAGMENTSHADERCONSTANTATIPROC = void(__stdcall *) (GLuint dst, const GLfloat* value);

		/*
			GL_ATI_map_object_buffer
		*/
		using PFNGLMAPOBJECTBUFFERATIPROC = void * (__stdcall *) (GLuint buffer);
		using PFNGLUNMAPOBJECTBUFFERATIPROC = void(__stdcall *) (GLuint buffer);

		/*
			GL_ATI_pn_triangles
		*/
		using PFNGLPNTRIANGLESFATIPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLPNTRIANGLESIATIPROC = void(__stdcall *) (GLenum pname, GLint param);

		/*
			GL_ATI_separate_stencil
		*/
		using PFNGLSTENCILFUNCSEPARATEATIPROC = void(__stdcall *) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
		using PFNGLSTENCILOPSEPARATEATIPROC = void(__stdcall *) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);

		/*
			GL_ATI_vertex_array_object
		*/
		using PFNGLARRAYOBJECTATIPROC = void(__stdcall *) (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
		using PFNGLFREEOBJECTBUFFERATIPROC = void(__stdcall *) (GLuint buffer);
		using PFNGLGETARRAYOBJECTFVATIPROC = void(__stdcall *) (GLenum array, GLenum pname, GLfloat* params);
		using PFNGLGETARRAYOBJECTIVATIPROC = void(__stdcall *) (GLenum array, GLenum pname, GLint* params);
		using PFNGLGETOBJECTBUFFERFVATIPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLfloat* params);
		using PFNGLGETOBJECTBUFFERIVATIPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLint* params);
		using PFNGLGETVARIANTARRAYOBJECTFVATIPROC = void(__stdcall *) (GLuint id, GLenum pname, GLfloat* params);
		using PFNGLGETVARIANTARRAYOBJECTIVATIPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLISOBJECTBUFFERATIPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLNEWOBJECTBUFFERATIPROC = GLuint(__stdcall *) (GLsizei size, const void *pointer, GLenum usage);
		using PFNGLUPDATEOBJECTBUFFERATIPROC = void(__stdcall *) (GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve);
		using PFNGLVARIANTARRAYOBJECTATIPROC = void(__stdcall *) (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);

		/*
			GL_ATI_vertex_attrib_array_object
		*/
		using PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC = void(__stdcall *) (GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint* params);
		using PFNGLVERTEXATTRIBARRAYOBJECTATIPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);

		/*
			GL_ATI_vertex_streams
		*/
		using PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC = void(__stdcall *) (GLenum stream);
		using PFNGLNORMALSTREAM3BATIPROC = void(__stdcall *) (GLenum stream, GLbyte x, GLbyte y, GLbyte z);
		using PFNGLNORMALSTREAM3BVATIPROC = void(__stdcall *) (GLenum stream, const GLbyte *coords);
		using PFNGLNORMALSTREAM3DATIPROC = void(__stdcall *) (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLNORMALSTREAM3DVATIPROC = void(__stdcall *) (GLenum stream, const GLdouble *coords);
		using PFNGLNORMALSTREAM3FATIPROC = void(__stdcall *) (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLNORMALSTREAM3FVATIPROC = void(__stdcall *) (GLenum stream, const GLfloat *coords);
		using PFNGLNORMALSTREAM3IATIPROC = void(__stdcall *) (GLenum stream, GLint x, GLint y, GLint z);
		using PFNGLNORMALSTREAM3IVATIPROC = void(__stdcall *) (GLenum stream, const GLint *coords);
		using PFNGLNORMALSTREAM3SATIPROC = void(__stdcall *) (GLenum stream, GLshort x, GLshort y, GLshort z);
		using PFNGLNORMALSTREAM3SVATIPROC = void(__stdcall *) (GLenum stream, const GLshort *coords);
		using PFNGLVERTEXBLENDENVFATIPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLVERTEXBLENDENVIATIPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLVERTEXSTREAM1DATIPROC = void(__stdcall *) (GLenum stream, GLdouble x);
		using PFNGLVERTEXSTREAM1DVATIPROC = void(__stdcall *) (GLenum stream, const GLdouble *coords);
		using PFNGLVERTEXSTREAM1FATIPROC = void(__stdcall *) (GLenum stream, GLfloat x);
		using PFNGLVERTEXSTREAM1FVATIPROC = void(__stdcall *) (GLenum stream, const GLfloat *coords);
		using PFNGLVERTEXSTREAM1IATIPROC = void(__stdcall *) (GLenum stream, GLint x);
		using PFNGLVERTEXSTREAM1IVATIPROC = void(__stdcall *) (GLenum stream, const GLint *coords);
		using PFNGLVERTEXSTREAM1SATIPROC = void(__stdcall *) (GLenum stream, GLshort x);
		using PFNGLVERTEXSTREAM1SVATIPROC = void(__stdcall *) (GLenum stream, const GLshort *coords);
		using PFNGLVERTEXSTREAM2DATIPROC = void(__stdcall *) (GLenum stream, GLdouble x, GLdouble y);
		using PFNGLVERTEXSTREAM2DVATIPROC = void(__stdcall *) (GLenum stream, const GLdouble *coords);
		using PFNGLVERTEXSTREAM2FATIPROC = void(__stdcall *) (GLenum stream, GLfloat x, GLfloat y);
		using PFNGLVERTEXSTREAM2FVATIPROC = void(__stdcall *) (GLenum stream, const GLfloat *coords);
		using PFNGLVERTEXSTREAM2IATIPROC = void(__stdcall *) (GLenum stream, GLint x, GLint y);
		using PFNGLVERTEXSTREAM2IVATIPROC = void(__stdcall *) (GLenum stream, const GLint *coords);
		using PFNGLVERTEXSTREAM2SATIPROC = void(__stdcall *) (GLenum stream, GLshort x, GLshort y);
		using PFNGLVERTEXSTREAM2SVATIPROC = void(__stdcall *) (GLenum stream, const GLshort *coords);
		using PFNGLVERTEXSTREAM3DATIPROC = void(__stdcall *) (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXSTREAM3DVATIPROC = void(__stdcall *) (GLenum stream, const GLdouble *coords);
		using PFNGLVERTEXSTREAM3FATIPROC = void(__stdcall *) (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLVERTEXSTREAM3FVATIPROC = void(__stdcall *) (GLenum stream, const GLfloat *coords);
		using PFNGLVERTEXSTREAM3IATIPROC = void(__stdcall *) (GLenum stream, GLint x, GLint y, GLint z);
		using PFNGLVERTEXSTREAM3IVATIPROC = void(__stdcall *) (GLenum stream, const GLint *coords);
		using PFNGLVERTEXSTREAM3SATIPROC = void(__stdcall *) (GLenum stream, GLshort x, GLshort y, GLshort z);
		using PFNGLVERTEXSTREAM3SVATIPROC = void(__stdcall *) (GLenum stream, const GLshort *coords);
		using PFNGLVERTEXSTREAM4DATIPROC = void(__stdcall *) (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXSTREAM4DVATIPROC = void(__stdcall *) (GLenum stream, const GLdouble *coords);
		using PFNGLVERTEXSTREAM4FATIPROC = void(__stdcall *) (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLVERTEXSTREAM4FVATIPROC = void(__stdcall *) (GLenum stream, const GLfloat *coords);
		using PFNGLVERTEXSTREAM4IATIPROC = void(__stdcall *) (GLenum stream, GLint x, GLint y, GLint z, GLint w);
		using PFNGLVERTEXSTREAM4IVATIPROC = void(__stdcall *) (GLenum stream, const GLint *coords);
		using PFNGLVERTEXSTREAM4SATIPROC = void(__stdcall *) (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
		using PFNGLVERTEXSTREAM4SVATIPROC = void(__stdcall *) (GLenum stream, const GLshort *coords);

		/*
			GL_EXT_base_instance
		*/
		using PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
		using PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
		using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

		/*
			GL_EXT_bindable_uniform
		*/
		using PFNGLGETUNIFORMBUFFERSIZEEXTPROC = GLint(__stdcall *) (GLuint program, GLint location);
		using PFNGLGETUNIFORMOFFSETEXTPROC = GLintptr(__stdcall *) (GLuint program, GLint location);
		using PFNGLUNIFORMBUFFEREXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint buffer);

		/*
			GL_EXT_blend_color
		*/
		using PFNGLBLENDCOLOREXTPROC = void(__stdcall *) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

		/*
			GL_EXT_blend_equation_separate
		*/
		using PFNGLBLENDEQUATIONSEPARATEEXTPROC = void(__stdcall *) (GLenum modeRGB, GLenum modeAlpha);

		/*
			GL_EXT_blend_func_extended
		*/
		using PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC = void(__stdcall *) (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
		using PFNGLGETFRAGDATAINDEXEXTPROC = GLint(__stdcall *) (GLuint program, const GLchar * name);
		using PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC = GLint(__stdcall *) (GLuint program, GLenum programInterface, const GLchar* name);

		/*
			GL_EXT_blend_func_separate
		*/
		using PFNGLBLENDFUNCSEPARATEEXTPROC = void(__stdcall *) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

		/*
			GL_EXT_blend_minmax
		*/
		using PFNGLBLENDEQUATIONEXTPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_EXT_buffer_storage
		*/
		using PFNGLBUFFERSTORAGEEXTPROC = void(__stdcall *) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
		using PFNGLNAMEDBUFFERSTORAGEEXTPROC = void(__stdcall *) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);

		/*
			GL_EXT_clear_texture
		*/
		using PFNGLCLEARTEXIMAGEEXTPROC = void(__stdcall *) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
		using PFNGLCLEARTEXSUBIMAGEEXTPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);

		/*
			GL_EXT_color_subtable
		*/
		using PFNGLCOLORSUBTABLEEXTPROC = void(__stdcall *) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
		using PFNGLCOPYCOLORSUBTABLEEXTPROC = void(__stdcall *) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);

		/*
			GL_EXT_compiled_vertex_array
		*/
		using PFNGLLOCKARRAYSEXTPROC = void(__stdcall *) (GLint first, GLsizei count);
		using PFNGLUNLOCKARRAYSEXTPROC = void(__stdcall *) (void);

		/*
			GL_EXT_convolution
		*/
		using PFNGLCONVOLUTIONFILTER1DEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
		using PFNGLCONVOLUTIONFILTER2DEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
		using PFNGLCONVOLUTIONPARAMETERFEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat param);
		using PFNGLCONVOLUTIONPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLCONVOLUTIONPARAMETERIEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint param);
		using PFNGLCONVOLUTIONPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLGETCONVOLUTIONFILTEREXTPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *image);
		using PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETSEPARABLEFILTEREXTPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
		using PFNGLSEPARABLEFILTER2DEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);

		/*
			GL_EXT_coordinate_frame
		*/
		using PFNGLBINORMALPOINTEREXTPROC = void(__stdcall *) (GLenum type, GLsizei stride, void *pointer);
		using PFNGLTANGENTPOINTEREXTPROC = void(__stdcall *) (GLenum type, GLsizei stride, void *pointer);

		/*
			GL_EXT_copy_image
		*/
		using PFNGLCOPYIMAGESUBDATAEXTPROC = void(__stdcall *) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

		/*
			GL_EXT_copy_texture
		*/
		using PFNGLCOPYTEXIMAGE1DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		using PFNGLCOPYTEXIMAGE2DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		using PFNGLCOPYTEXSUBIMAGE1DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYTEXSUBIMAGE2DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCOPYTEXSUBIMAGE3DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

		/*
			GL_EXT_cull_vertex
		*/
		using PFNGLCULLPARAMETERDVEXTPROC = void(__stdcall *) (GLenum pname, GLdouble* params);
		using PFNGLCULLPARAMETERFVEXTPROC = void(__stdcall *) (GLenum pname, GLfloat* params);

		/*
			GL_EXT_debug_label
		*/
		using PFNGLGETOBJECTLABELEXTPROC = void(__stdcall *) (GLenum type, GLuint object, GLsizei bufSize, GLsizei* length, GLchar *label);
		using PFNGLLABELOBJECTEXTPROC = void(__stdcall *) (GLenum type, GLuint object, GLsizei length, const GLchar* label);

		/*
			GL_EXT_debug_marker
		*/
		using PFNGLINSERTEVENTMARKEREXTPROC = void(__stdcall *) (GLsizei length, const GLchar* marker);
		using PFNGLPOPGROUPMARKEREXTPROC = void(__stdcall *) (void);
		using PFNGLPUSHGROUPMARKEREXTPROC = void(__stdcall *) (GLsizei length, const GLchar* marker);

		/*
			GL_EXT_depth_bounds_test
		*/
		using PFNGLDEPTHBOUNDSEXTPROC = void(__stdcall *) (GLclampd zmin, GLclampd zmax);

		/*
			GL_EXT_direct_state_access
		*/
		using PFNGLBINDMULTITEXTUREEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLuint texture);
		using PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC = GLenum(__stdcall *) (GLuint framebuffer, GLenum target);
		using PFNGLCLIENTATTRIBDEFAULTEXTPROC = void(__stdcall *) (GLbitfield mask);
		using PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOPYMULTITEXIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		using PFNGLCOPYMULTITEXIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		using PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCOPYTEXTUREIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
		using PFNGLCOPYTEXTUREIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
		using PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
		using PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC = void(__stdcall *) (GLenum array, GLuint index);
		using PFNGLDISABLECLIENTSTATEIEXTPROC = void(__stdcall *) (GLenum array, GLuint index);
		using PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint index);
		using PFNGLDISABLEVERTEXARRAYEXTPROC = void(__stdcall *) (GLuint vaobj, GLenum array);
		using PFNGLENABLECLIENTSTATEINDEXEDEXTPROC = void(__stdcall *) (GLenum array, GLuint index);
		using PFNGLENABLECLIENTSTATEIEXTPROC = void(__stdcall *) (GLenum array, GLuint index);
		using PFNGLENABLEVERTEXARRAYATTRIBEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint index);
		using PFNGLENABLEVERTEXARRAYEXTPROC = void(__stdcall *) (GLuint vaobj, GLenum array);
		using PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr length);
		using PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum mode);
		using PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC = void(__stdcall *) (GLuint framebuffer, GLsizei n, const GLenum* bufs);
		using PFNGLFRAMEBUFFERREADBUFFEREXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum mode);
		using PFNGLGENERATEMULTITEXMIPMAPEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target);
		using PFNGLGENERATETEXTUREMIPMAPEXTPROC = void(__stdcall *) (GLuint texture, GLenum target);
		using PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, void *img);
		using PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, void *img);
		using PFNGLGETDOUBLEINDEXEDVEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble* params);
		using PFNGLGETDOUBLEI_VEXTPROC = void(__stdcall *) (GLenum pname, GLuint index, GLdouble* params);
		using PFNGLGETFLOATINDEXEDVEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat* params);
		using PFNGLGETFLOATI_VEXTPROC = void(__stdcall *) (GLenum pname, GLuint index, GLfloat* params);
		using PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum pname, GLint* param);
		using PFNGLGETMULTITEXENVFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETMULTITEXENVIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETMULTITEXGENDVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLdouble* params);
		using PFNGLGETMULTITEXGENFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLfloat* params);
		using PFNGLGETMULTITEXGENIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLint* params);
		using PFNGLGETMULTITEXIMAGEEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
		using PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat* params);
		using PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint* params);
		using PFNGLGETMULTITEXPARAMETERIIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETMULTITEXPARAMETERIUIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLuint* params);
		using PFNGLGETMULTITEXPARAMETERFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETMULTITEXPARAMETERIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLint* params);
		using PFNGLGETNAMEDBUFFERPOINTERVEXTPROC = void(__stdcall *) (GLuint buffer, GLenum pname, void** params);
		using PFNGLGETNAMEDBUFFERSUBDATAEXTPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
		using PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
		using PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLint* params);
		using PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLuint* params);
		using PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLdouble* params);
		using PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLfloat* params);
		using PFNGLGETNAMEDPROGRAMSTRINGEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLenum pname, void *string);
		using PFNGLGETNAMEDPROGRAMIVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC = void(__stdcall *) (GLuint renderbuffer, GLenum pname, GLint* params);
		using PFNGLGETPOINTERINDEXEDVEXTPROC = void(__stdcall *) (GLenum target, GLuint index, void** params);
		using PFNGLGETPOINTERI_VEXTPROC = void(__stdcall *) (GLenum pname, GLuint index, void** params);
		using PFNGLGETTEXTUREIMAGEEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
		using PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat* params);
		using PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLenum pname, GLint* params);
		using PFNGLGETTEXTUREPARAMETERIIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETTEXTUREPARAMETERIUIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLuint* params);
		using PFNGLGETTEXTUREPARAMETERFVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETTEXTUREPARAMETERIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLint* params);
		using PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint index, GLenum pname, GLint* param);
		using PFNGLGETVERTEXARRAYINTEGERVEXTPROC = void(__stdcall *) (GLuint vaobj, GLenum pname, GLint* param);
		using PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint index, GLenum pname, void** param);
		using PFNGLGETVERTEXARRAYPOINTERVEXTPROC = void(__stdcall *) (GLuint vaobj, GLenum pname, void** param);
		using PFNGLMAPNAMEDBUFFEREXTPROC = void * (__stdcall *) (GLuint buffer, GLenum access);
		using PFNGLMAPNAMEDBUFFERRANGEEXTPROC = void * (__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
		using PFNGLMATRIXFRUSTUMEXTPROC = void(__stdcall *) (GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
		using PFNGLMATRIXLOADIDENTITYEXTPROC = void(__stdcall *) (GLenum matrixMode);
		using PFNGLMATRIXLOADTRANSPOSEDEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLdouble* m);
		using PFNGLMATRIXLOADTRANSPOSEFEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXLOADDEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLdouble* m);
		using PFNGLMATRIXLOADFEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXMULTTRANSPOSEDEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLdouble* m);
		using PFNGLMATRIXMULTTRANSPOSEFEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXMULTDEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLdouble* m);
		using PFNGLMATRIXMULTFEXTPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXORTHOEXTPROC = void(__stdcall *) (GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
		using PFNGLMATRIXPOPEXTPROC = void(__stdcall *) (GLenum matrixMode);
		using PFNGLMATRIXPUSHEXTPROC = void(__stdcall *) (GLenum matrixMode);
		using PFNGLMATRIXROTATEDEXTPROC = void(__stdcall *) (GLenum matrixMode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLMATRIXROTATEFEXTPROC = void(__stdcall *) (GLenum matrixMode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLMATRIXSCALEDEXTPROC = void(__stdcall *) (GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLMATRIXSCALEFEXTPROC = void(__stdcall *) (GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLMATRIXTRANSLATEDEXTPROC = void(__stdcall *) (GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLMATRIXTRANSLATEFEXTPROC = void(__stdcall *) (GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLMULTITEXBUFFEREXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
		using PFNGLMULTITEXCOORDPOINTEREXTPROC = void(__stdcall *) (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
		using PFNGLMULTITEXENVFEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
		using PFNGLMULTITEXENVFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLMULTITEXENVIEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLint param);
		using PFNGLMULTITEXENVIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLint* params);
		using PFNGLMULTITEXGENDEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
		using PFNGLMULTITEXGENDVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, const GLdouble* params);
		using PFNGLMULTITEXGENFEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
		using PFNGLMULTITEXGENFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, const GLfloat* params);
		using PFNGLMULTITEXGENIEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, GLint param);
		using PFNGLMULTITEXGENIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum coord, GLenum pname, const GLint* params);
		using PFNGLMULTITEXIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLMULTITEXIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLMULTITEXIMAGE3DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLMULTITEXPARAMETERIIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLint* params);
		using PFNGLMULTITEXPARAMETERIUIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLuint* params);
		using PFNGLMULTITEXPARAMETERFEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
		using PFNGLMULTITEXPARAMETERFVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLfloat* param);
		using PFNGLMULTITEXPARAMETERIEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, GLint param);
		using PFNGLMULTITEXPARAMETERIVEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLenum pname, const GLint* param);
		using PFNGLMULTITEXRENDERBUFFEREXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLuint renderbuffer);
		using PFNGLMULTITEXSUBIMAGE1DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		using PFNGLMULTITEXSUBIMAGE2DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		using PFNGLMULTITEXSUBIMAGE3DEXTPROC = void(__stdcall *) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		using PFNGLNAMEDBUFFERDATAEXTPROC = void(__stdcall *) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
		using PFNGLNAMEDBUFFERSUBDATAEXTPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
		using PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC = void(__stdcall *) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		using PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		using PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
		using PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
		using PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
		using PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC = void(__stdcall *) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
		using PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, const GLdouble* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, const GLfloat* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, const GLint* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, const GLuint* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint* params);
		using PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint* params);
		using PFNGLNAMEDPROGRAMSTRINGEXTPROC = void(__stdcall *) (GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
		using PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC = void(__stdcall *) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC = void(__stdcall *) (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC = void(__stdcall *) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLPROGRAMUNIFORM1FEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat v0);
		using PFNGLPROGRAMUNIFORM1FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM1IEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLint v0);
		using PFNGLPROGRAMUNIFORM1IVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM1UIEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint v0);
		using PFNGLPROGRAMUNIFORM1UIVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM2FEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
		using PFNGLPROGRAMUNIFORM2FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM2IEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLint v0, GLint v1);
		using PFNGLPROGRAMUNIFORM2IVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM2UIEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint v0, GLuint v1);
		using PFNGLPROGRAMUNIFORM2UIVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM3FEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
		using PFNGLPROGRAMUNIFORM3FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM3IEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
		using PFNGLPROGRAMUNIFORM3IVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM3UIEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
		using PFNGLPROGRAMUNIFORM3UIVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORM4FEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
		using PFNGLPROGRAMUNIFORM4FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLfloat* value);
		using PFNGLPROGRAMUNIFORM4IEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
		using PFNGLPROGRAMUNIFORM4IVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint* value);
		using PFNGLPROGRAMUNIFORM4UIEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		using PFNGLPROGRAMUNIFORM4UIVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint* value);
		using PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC = void(__stdcall *) (GLbitfield mask);
		using PFNGLTEXTUREBUFFEREXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
		using PFNGLTEXTUREIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTUREIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTUREIMAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTUREPARAMETERIIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, const GLint* params);
		using PFNGLTEXTUREPARAMETERIUIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, const GLuint* params);
		using PFNGLTEXTUREPARAMETERFEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLfloat param);
		using PFNGLTEXTUREPARAMETERFVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, const GLfloat* param);
		using PFNGLTEXTUREPARAMETERIEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, GLint param);
		using PFNGLTEXTUREPARAMETERIVEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLenum pname, const GLint* param);
		using PFNGLTEXTURERENDERBUFFEREXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLuint renderbuffer);
		using PFNGLTEXTURESUBIMAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTURESUBIMAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXTURESUBIMAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
		using PFNGLUNMAPNAMEDBUFFEREXTPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLVERTEXARRAYCOLOROFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYINDEXOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYNORMALOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC = void(__stdcall *) (GLuint vaobj, GLuint index, GLuint divisor);
		using PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);

		/*
			GL_EXT_discard_framebuffer
		*/
		using PFNGLDISCARDFRAMEBUFFEREXTPROC = void(__stdcall *) (GLenum target, GLsizei numAttachments, const GLenum* attachments);

		/*
			GL_EXT_draw_buffers
		*/
		using PFNGLDRAWBUFFERSEXTPROC = void(__stdcall *) (GLsizei n, const GLenum* bufs);

		/*
			GL_EXT_draw_buffers2
		*/
		using PFNGLCOLORMASKINDEXEDEXTPROC = void(__stdcall *) (GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
		using PFNGLDISABLEINDEXEDEXTPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLENABLEINDEXEDEXTPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLGETBOOLEANINDEXEDVEXTPROC = void(__stdcall *) (GLenum value, GLuint index, GLboolean* data);
		using PFNGLGETINTEGERINDEXEDVEXTPROC = void(__stdcall *) (GLenum value, GLuint index, GLint* data);
		using PFNGLISENABLEDINDEXEDEXTPROC = GLboolean(__stdcall *) (GLenum target, GLuint index);

		/*
			GL_EXT_draw_buffers_indexed
		*/
		using PFNGLBLENDEQUATIONSEPARATEIEXTPROC = void(__stdcall *) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
		using PFNGLBLENDEQUATIONIEXTPROC = void(__stdcall *) (GLuint buf, GLenum mode);
		using PFNGLBLENDFUNCSEPARATEIEXTPROC = void(__stdcall *) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
		using PFNGLBLENDFUNCIEXTPROC = void(__stdcall *) (GLuint buf, GLenum src, GLenum dst);
		using PFNGLCOLORMASKIEXTPROC = void(__stdcall *) (GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
		using PFNGLDISABLEIEXTPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLENABLEIEXTPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLISENABLEDIEXTPROC = GLboolean(__stdcall *) (GLenum target, GLuint index);

		/*
			GL_EXT_draw_elements_base_vertex
		*/
		using PFNGLDRAWELEMENTSBASEVERTEXEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
		using PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
		using PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
		using PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC = void(__stdcall *) (GLenum mode, const GLsizei* count, GLenum type, const void *const *indices, GLsizei primcount, const GLint *basevertex);

		/*
			GL_EXT_draw_instanced
		*/
		using PFNGLDRAWARRAYSINSTANCEDEXTPROC = void(__stdcall *) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
		using PFNGLDRAWELEMENTSINSTANCEDEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);

		/*
			GL_EXT_draw_range_elements
		*/
		using PFNGLDRAWRANGEELEMENTSEXTPROC = void(__stdcall *) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);

		/*
			GL_EXT_external_buffer
		*/
		using PFNGLBUFFERSTORAGEEXTERNALEXTPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
		using PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC = void(__stdcall *) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);

		/*
			GL_EXT_fog_coord
		*/
		using PFNGLFOGCOORDPOINTEREXTPROC = void(__stdcall *) (GLenum type, GLsizei stride, const void *pointer);
		using PFNGLFOGCOORDDEXTPROC = void(__stdcall *) (GLdouble coord);
		using PFNGLFOGCOORDDVEXTPROC = void(__stdcall *) (const GLdouble *coord);
		using PFNGLFOGCOORDFEXTPROC = void(__stdcall *) (GLfloat coord);
		using PFNGLFOGCOORDFVEXTPROC = void(__stdcall *) (const GLfloat *coord);

		/*
			GL_EXT_fragment_lighting
		*/
		using PFNGLFRAGMENTCOLORMATERIALEXTPROC = void(__stdcall *) (GLenum face, GLenum mode);
		using PFNGLFRAGMENTLIGHTMODELFEXTPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLFRAGMENTLIGHTMODELFVEXTPROC = void(__stdcall *) (GLenum pname, GLfloat* params);
		using PFNGLFRAGMENTLIGHTMODELIEXTPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLFRAGMENTLIGHTMODELIVEXTPROC = void(__stdcall *) (GLenum pname, GLint* params);
		using PFNGLFRAGMENTLIGHTFEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfloat param);
		using PFNGLFRAGMENTLIGHTFVEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfloat* params);
		using PFNGLFRAGMENTLIGHTIEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint param);
		using PFNGLFRAGMENTLIGHTIVEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint* params);
		using PFNGLFRAGMENTMATERIALFEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat param);
		using PFNGLFRAGMENTMATERIALFVEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat* params);
		using PFNGLFRAGMENTMATERIALIEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint param);
		using PFNGLFRAGMENTMATERIALIVEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint* params);
		using PFNGLGETFRAGMENTLIGHTFVEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfloat* params);
		using PFNGLGETFRAGMENTLIGHTIVEXTPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint* params);
		using PFNGLGETFRAGMENTMATERIALFVEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat* params);
		using PFNGLGETFRAGMENTMATERIALIVEXTPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint* params);
		using PFNGLLIGHTENVIEXTPROC = void(__stdcall *) (GLenum pname, GLint param);

		/*
			GL_EXT_framebuffer_blit
		*/
		using PFNGLBLITFRAMEBUFFEREXTPROC = void(__stdcall *) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

		/*
			GL_EXT_framebuffer_multisample
		*/
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_EXT_framebuffer_object
		*/
		using PFNGLBINDFRAMEBUFFEREXTPROC = void(__stdcall *) (GLenum target, GLuint framebuffer);
		using PFNGLBINDRENDERBUFFEREXTPROC = void(__stdcall *) (GLenum target, GLuint renderbuffer);
		using PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC = GLenum(__stdcall *) (GLenum target);
		using PFNGLDELETEFRAMEBUFFERSEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* framebuffers);
		using PFNGLDELETERENDERBUFFERSEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* renderbuffers);
		using PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
		using PFNGLFRAMEBUFFERTEXTURE1DEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTURE2DEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTURE3DEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
		using PFNGLGENFRAMEBUFFERSEXTPROC = void(__stdcall *) (GLsizei n, GLuint* framebuffers);
		using PFNGLGENRENDERBUFFERSEXTPROC = void(__stdcall *) (GLsizei n, GLuint* renderbuffers);
		using PFNGLGENERATEMIPMAPEXTPROC = void(__stdcall *) (GLenum target);
		using PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum pname, GLint* params);
		using PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLISFRAMEBUFFEREXTPROC = GLboolean(__stdcall *) (GLuint framebuffer);
		using PFNGLISRENDERBUFFEREXTPROC = GLboolean(__stdcall *) (GLuint renderbuffer);
		using PFNGLRENDERBUFFERSTORAGEEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_EXT_geometry_shader4
		*/
		using PFNGLFRAMEBUFFERTEXTUREEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level);
		using PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
		using PFNGLPROGRAMPARAMETERIEXTPROC = void(__stdcall *) (GLuint program, GLenum pname, GLint value);

		/*
			GL_EXT_gpu_program_parameters
		*/
		using PFNGLPROGRAMENVPARAMETERS4FVEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLfloat* params);
		using PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLfloat* params);

		/*
			GL_EXT_gpu_shader4
		*/
		using PFNGLBINDFRAGDATALOCATIONEXTPROC = void(__stdcall *) (GLuint program, GLuint color, const GLchar *name);
		using PFNGLGETFRAGDATALOCATIONEXTPROC = GLint(__stdcall *) (GLuint program, const GLchar *name);
		using PFNGLGETUNIFORMUIVEXTPROC = void(__stdcall *) (GLuint program, GLint location, GLuint *params);
		using PFNGLGETVERTEXATTRIBIIVEXTPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint *params);
		using PFNGLGETVERTEXATTRIBIUIVEXTPROC = void(__stdcall *) (GLuint index, GLenum pname, GLuint *params);
		using PFNGLUNIFORM1UIEXTPROC = void(__stdcall *) (GLint location, GLuint v0);
		using PFNGLUNIFORM1UIVEXTPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint *value);
		using PFNGLUNIFORM2UIEXTPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1);
		using PFNGLUNIFORM2UIVEXTPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint *value);
		using PFNGLUNIFORM3UIEXTPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1, GLuint v2);
		using PFNGLUNIFORM3UIVEXTPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint *value);
		using PFNGLUNIFORM4UIEXTPROC = void(__stdcall *) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
		using PFNGLUNIFORM4UIVEXTPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint *value);
		using PFNGLVERTEXATTRIBI1IEXTPROC = void(__stdcall *) (GLuint index, GLint x);
		using PFNGLVERTEXATTRIBI1IVEXTPROC = void(__stdcall *) (GLuint index, const GLint *v);
		using PFNGLVERTEXATTRIBI1UIEXTPROC = void(__stdcall *) (GLuint index, GLuint x);
		using PFNGLVERTEXATTRIBI1UIVEXTPROC = void(__stdcall *) (GLuint index, const GLuint *v);
		using PFNGLVERTEXATTRIBI2IEXTPROC = void(__stdcall *) (GLuint index, GLint x, GLint y);
		using PFNGLVERTEXATTRIBI2IVEXTPROC = void(__stdcall *) (GLuint index, const GLint *v);
		using PFNGLVERTEXATTRIBI2UIEXTPROC = void(__stdcall *) (GLuint index, GLuint x, GLuint y);
		using PFNGLVERTEXATTRIBI2UIVEXTPROC = void(__stdcall *) (GLuint index, const GLuint *v);
		using PFNGLVERTEXATTRIBI3IEXTPROC = void(__stdcall *) (GLuint index, GLint x, GLint y, GLint z);
		using PFNGLVERTEXATTRIBI3IVEXTPROC = void(__stdcall *) (GLuint index, const GLint *v);
		using PFNGLVERTEXATTRIBI3UIEXTPROC = void(__stdcall *) (GLuint index, GLuint x, GLuint y, GLuint z);
		using PFNGLVERTEXATTRIBI3UIVEXTPROC = void(__stdcall *) (GLuint index, const GLuint *v);
		using PFNGLVERTEXATTRIBI4BVEXTPROC = void(__stdcall *) (GLuint index, const GLbyte *v);
		using PFNGLVERTEXATTRIBI4IEXTPROC = void(__stdcall *) (GLuint index, GLint x, GLint y, GLint z, GLint w);
		using PFNGLVERTEXATTRIBI4IVEXTPROC = void(__stdcall *) (GLuint index, const GLint *v);
		using PFNGLVERTEXATTRIBI4SVEXTPROC = void(__stdcall *) (GLuint index, const GLshort *v);
		using PFNGLVERTEXATTRIBI4UBVEXTPROC = void(__stdcall *) (GLuint index, const GLubyte *v);
		using PFNGLVERTEXATTRIBI4UIEXTPROC = void(__stdcall *) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		using PFNGLVERTEXATTRIBI4UIVEXTPROC = void(__stdcall *) (GLuint index, const GLuint *v);
		using PFNGLVERTEXATTRIBI4USVEXTPROC = void(__stdcall *) (GLuint index, const GLushort *v);
		using PFNGLVERTEXATTRIBIPOINTEREXTPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);

		/*
			GL_EXT_histogram
		*/
		using PFNGLGETHISTOGRAMEXTPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
		using PFNGLGETHISTOGRAMPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETHISTOGRAMPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETMINMAXEXTPROC = void(__stdcall *) (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
		using PFNGLGETMINMAXPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETMINMAXPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLHISTOGRAMEXTPROC = void(__stdcall *) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
		using PFNGLMINMAXEXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLboolean sink);
		using PFNGLRESETHISTOGRAMEXTPROC = void(__stdcall *) (GLenum target);
		using PFNGLRESETMINMAXEXTPROC = void(__stdcall *) (GLenum target);

		/*
			GL_EXT_index_func
		*/
		using PFNGLINDEXFUNCEXTPROC = void(__stdcall *) (GLenum func, GLfloat ref);

		/*
			GL_EXT_index_material
		*/
		using PFNGLINDEXMATERIALEXTPROC = void(__stdcall *) (GLenum face, GLenum mode);

		/*
			GL_EXT_instanced_arrays
		*/
		using PFNGLVERTEXATTRIBDIVISOREXTPROC = void(__stdcall *) (GLuint index, GLuint divisor);

		/*
			GL_EXT_light_texture
		*/
		using PFNGLAPPLYTEXTUREEXTPROC = void(__stdcall *) (GLenum mode);
		using PFNGLTEXTURELIGHTEXTPROC = void(__stdcall *) (GLenum pname);
		using PFNGLTEXTUREMATERIALEXTPROC = void(__stdcall *) (GLenum face, GLenum mode);

		/*
			GL_EXT_map_buffer_range
		*/
		using PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC = void(__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr length);
		using PFNGLMAPBUFFERRANGEEXTPROC = void * (__stdcall *) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

		/*
			GL_EXT_memory_object
		*/
		using PFNGLBUFFERSTORAGEMEMEXTPROC = void(__stdcall *) (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
		using PFNGLCREATEMEMORYOBJECTSEXTPROC = void(__stdcall *) (GLsizei n, GLuint* memoryObjects);
		using PFNGLDELETEMEMORYOBJECTSEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* memoryObjects);
		using PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC = void(__stdcall *) (GLuint memoryObject, GLenum pname, GLint* params);
		using PFNGLGETUNSIGNEDBYTEI_VEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLubyte* data);
		using PFNGLGETUNSIGNEDBYTEVEXTPROC = void(__stdcall *) (GLenum pname, GLubyte* data);
		using PFNGLISMEMORYOBJECTEXTPROC = GLboolean(__stdcall *) (GLuint memoryObject);
		using PFNGLMEMORYOBJECTPARAMETERIVEXTPROC = void(__stdcall *) (GLuint memoryObject, GLenum pname, const GLint* params);
		using PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC = void(__stdcall *) (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
		using PFNGLTEXSTORAGEMEM1DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
		using PFNGLTEXSTORAGEMEM2DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
		using PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
		using PFNGLTEXSTORAGEMEM3DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
		using PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
		using PFNGLTEXTURESTORAGEMEM1DEXTPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
		using PFNGLTEXTURESTORAGEMEM2DEXTPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
		using PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC = void(__stdcall *) (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
		using PFNGLTEXTURESTORAGEMEM3DEXTPROC = void(__stdcall *) (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
		using PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC = void(__stdcall *) (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);

		/*
			GL_EXT_memory_object_fd
		*/
		using PFNGLIMPORTMEMORYFDEXTPROC = void(__stdcall *) (GLuint memory, GLuint64 size, GLenum handleType, GLint fd);

		/*
			GL_EXT_memory_object_win32
		*/
		using PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC = void(__stdcall *) (GLuint memory, GLuint64 size, GLenum handleType, void *handle);
		using PFNGLIMPORTMEMORYWIN32NAMEEXTPROC = void(__stdcall *) (GLuint memory, GLuint64 size, GLenum handleType, const void *name);

		/*
			GL_EXT_multi_draw_arrays
		*/
		using PFNGLMULTIDRAWARRAYSEXTPROC = void(__stdcall *) (GLenum mode, const GLint* first, const GLsizei *count, GLsizei primcount);
		using PFNGLMULTIDRAWELEMENTSEXTPROC = void(__stdcall *) (GLenum mode, GLsizei* count, GLenum type, const void *const *indices, GLsizei primcount);

		/*
			GL_EXT_multi_draw_indirect
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
		using PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);

		/*
			GL_EXT_multisample
		*/
		using PFNGLSAMPLEMASKEXTPROC = void(__stdcall *) (GLclampf value, GLboolean invert);
		using PFNGLSAMPLEPATTERNEXTPROC = void(__stdcall *) (GLenum pattern);

		/*
			GL_EXT_multisampled_render_to_texture
		*/
		using PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

		/*
			GL_EXT_multiview_draw_buffers
		*/
		using PFNGLDRAWBUFFERSINDEXEDEXTPROC = void(__stdcall *) (GLint n, const GLenum* location, const GLint *indices);
		using PFNGLGETINTEGERI_VEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLint* data);
		using PFNGLREADBUFFERINDEXEDEXTPROC = void(__stdcall *) (GLenum src, GLint index);

		/*
			GL_EXT_paletted_texture
		*/
		using PFNGLCOLORTABLEEXTPROC = void(__stdcall *) (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *data);
		using PFNGLGETCOLORTABLEEXTPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *data);
		using PFNGLGETCOLORTABLEPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETCOLORTABLEPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);

		/*
			GL_EXT_pixel_transform
		*/
		using PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLPIXELTRANSFORMPARAMETERFEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat param);
		using PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLPIXELTRANSFORMPARAMETERIEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint param);
		using PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);

		/*
			GL_EXT_point_parameters
		*/
		using PFNGLPOINTPARAMETERFEXTPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLPOINTPARAMETERFVEXTPROC = void(__stdcall *) (GLenum pname, const GLfloat* params);

		/*
			GL_EXT_polygon_offset
		*/
		using PFNGLPOLYGONOFFSETEXTPROC = void(__stdcall *) (GLfloat factor, GLfloat bias);

		/*
			GL_EXT_polygon_offset_clamp
		*/
		using PFNGLPOLYGONOFFSETCLAMPEXTPROC = void(__stdcall *) (GLfloat factor, GLfloat units, GLfloat clamp);

		/*
			GL_EXT_provoking_vertex
		*/
		using PFNGLPROVOKINGVERTEXEXTPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_EXT_raster_multisample
		*/
		using PFNGLCOVERAGEMODULATIONNVPROC = void(__stdcall *) (GLenum components);
		using PFNGLCOVERAGEMODULATIONTABLENVPROC = void(__stdcall *) (GLsizei n, const GLfloat* v);
		using PFNGLGETCOVERAGEMODULATIONTABLENVPROC = void(__stdcall *) (GLsizei bufsize, GLfloat* v);
		using PFNGLRASTERSAMPLESEXTPROC = void(__stdcall *) (GLuint samples, GLboolean fixedsamplelocations);

		/*
			GL_EXT_scene_marker
		*/
		using PFNGLBEGINSCENEEXTPROC = void(__stdcall *) (void);
		using PFNGLENDSCENEEXTPROC = void(__stdcall *) (void);

		/*
			GL_EXT_secondary_color
		*/
		using PFNGLSECONDARYCOLOR3BEXTPROC = void(__stdcall *) (GLbyte red, GLbyte green, GLbyte blue);
		using PFNGLSECONDARYCOLOR3BVEXTPROC = void(__stdcall *) (const GLbyte *v);
		using PFNGLSECONDARYCOLOR3DEXTPROC = void(__stdcall *) (GLdouble red, GLdouble green, GLdouble blue);
		using PFNGLSECONDARYCOLOR3DVEXTPROC = void(__stdcall *) (const GLdouble *v);
		using PFNGLSECONDARYCOLOR3FEXTPROC = void(__stdcall *) (GLfloat red, GLfloat green, GLfloat blue);
		using PFNGLSECONDARYCOLOR3FVEXTPROC = void(__stdcall *) (const GLfloat *v);
		using PFNGLSECONDARYCOLOR3IEXTPROC = void(__stdcall *) (GLint red, GLint green, GLint blue);
		using PFNGLSECONDARYCOLOR3IVEXTPROC = void(__stdcall *) (const GLint *v);
		using PFNGLSECONDARYCOLOR3SEXTPROC = void(__stdcall *) (GLshort red, GLshort green, GLshort blue);
		using PFNGLSECONDARYCOLOR3SVEXTPROC = void(__stdcall *) (const GLshort *v);
		using PFNGLSECONDARYCOLOR3UBEXTPROC = void(__stdcall *) (GLubyte red, GLubyte green, GLubyte blue);
		using PFNGLSECONDARYCOLOR3UBVEXTPROC = void(__stdcall *) (const GLubyte *v);
		using PFNGLSECONDARYCOLOR3UIEXTPROC = void(__stdcall *) (GLuint red, GLuint green, GLuint blue);
		using PFNGLSECONDARYCOLOR3UIVEXTPROC = void(__stdcall *) (const GLuint *v);
		using PFNGLSECONDARYCOLOR3USEXTPROC = void(__stdcall *) (GLushort red, GLushort green, GLushort blue);
		using PFNGLSECONDARYCOLOR3USVEXTPROC = void(__stdcall *) (const GLushort *v);
		using PFNGLSECONDARYCOLORPOINTEREXTPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, const void *pointer);

		/*
			GL_EXT_semaphore
		*/
		using PFNGLDELETESEMAPHORESEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* semaphores);
		using PFNGLGENSEMAPHORESEXTPROC = void(__stdcall *) (GLsizei n, GLuint* semaphores);
		using PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC = void(__stdcall *) (GLuint semaphore, GLenum pname, GLuint64* params);
		using PFNGLISSEMAPHOREEXTPROC = GLboolean(__stdcall *) (GLuint semaphore);
		using PFNGLSEMAPHOREPARAMETERUI64VEXTPROC = void(__stdcall *) (GLuint semaphore, GLenum pname, const GLuint64* params);
		using PFNGLSIGNALSEMAPHOREEXTPROC = void(__stdcall *) (GLuint semaphore, GLuint numBufferBarriers, const GLuint* buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *dstLayouts);
		using PFNGLWAITSEMAPHOREEXTPROC = void(__stdcall *) (GLuint semaphore, GLuint numBufferBarriers, const GLuint* buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *srcLayouts);

		/*
			GL_EXT_semaphore_fd
		*/
		using PFNGLIMPORTSEMAPHOREFDEXTPROC = void(__stdcall *) (GLuint semaphore, GLenum handleType, GLint fd);

		/*
			GL_EXT_semaphore_win32
		*/
		using PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC = void(__stdcall *) (GLuint semaphore, GLenum handleType, void *handle);
		using PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC = void(__stdcall *) (GLuint semaphore, GLenum handleType, const void *name);

		/*
			GL_EXT_separate_shader_objects
		*/
		using PFNGLACTIVEPROGRAMEXTPROC = void(__stdcall *) (GLuint program);
		using PFNGLCREATESHADERPROGRAMEXTPROC = GLuint(__stdcall *) (GLenum type, const GLchar* string);
		using PFNGLUSESHADERPROGRAMEXTPROC = void(__stdcall *) (GLenum type, GLuint program);

		/*
			GL_EXT_shader_image_load_store
		*/
		using PFNGLBINDIMAGETEXTUREEXTPROC = void(__stdcall *) (GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
		using PFNGLMEMORYBARRIEREXTPROC = void(__stdcall *) (GLbitfield barriers);

		/*
			GL_EXT_shader_pixel_local_storage2
		*/
		using PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC = void(__stdcall *) (GLsizei offset, GLsizei n, const GLuint* values);
		using PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC = void(__stdcall *) (GLuint target, GLsizei size);
		using PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC = GLsizei(__stdcall *) (GLuint target);

		/*
			GL_EXT_sparse_texture
		*/
		using PFNGLTEXPAGECOMMITMENTEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
		using PFNGLTEXTUREPAGECOMMITMENTEXTPROC = void(__stdcall *) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

		/*
			GL_EXT_stencil_two_side
		*/
		using PFNGLACTIVESTENCILFACEEXTPROC = void(__stdcall *) (GLenum face);

		/*
			GL_EXT_subtexture
		*/
		using PFNGLTEXSUBIMAGE1DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXSUBIMAGE2DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXSUBIMAGE3DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);

		/*
			GL_EXT_texture3D
		*/
		using PFNGLTEXIMAGE3DEXTPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);

		/*
			GL_EXT_texture_array
		*/
		using PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

		/*
			GL_EXT_texture_buffer_object
		*/
		using PFNGLTEXBUFFEREXTPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLuint buffer);

		/*
			GL_EXT_texture_integer
		*/
		using PFNGLCLEARCOLORIIEXTPROC = void(__stdcall *) (GLint red, GLint green, GLint blue, GLint alpha);
		using PFNGLCLEARCOLORIUIEXTPROC = void(__stdcall *) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
		using PFNGLGETTEXPARAMETERIIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint *params);
		using PFNGLGETTEXPARAMETERIUIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, GLuint *params);
		using PFNGLTEXPARAMETERIIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint *params);
		using PFNGLTEXPARAMETERIUIVEXTPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLuint *params);

		/*
			GL_EXT_texture_object
		*/
		using PFNGLARETEXTURESRESIDENTEXTPROC = GLboolean(__stdcall *) (GLsizei n, const GLuint* textures, GLboolean* residences);
		using PFNGLBINDTEXTUREEXTPROC = void(__stdcall *) (GLenum target, GLuint texture);
		using PFNGLDELETETEXTURESEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* textures);
		using PFNGLGENTEXTURESEXTPROC = void(__stdcall *) (GLsizei n, GLuint* textures);
		using PFNGLISTEXTUREEXTPROC = GLboolean(__stdcall *) (GLuint texture);
		using PFNGLPRIORITIZETEXTURESEXTPROC = void(__stdcall *) (GLsizei n, const GLuint* textures, const GLclampf* priorities);

		/*
			GL_EXT_texture_perturb_normal
		*/
		using PFNGLTEXTURENORMALEXTPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_EXT_texture_storage
		*/
		using PFNGLTEXSTORAGE1DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		using PFNGLTEXSTORAGE2DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLTEXSTORAGE3DEXTPROC = void(__stdcall *) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
		using PFNGLTEXTURESTORAGE1DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
		using PFNGLTEXTURESTORAGE2DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
		using PFNGLTEXTURESTORAGE3DEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

		/*
			GL_EXT_texture_view
		*/
		using PFNGLTEXTUREVIEWEXTPROC = void(__stdcall *) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

		/*
			GL_EXT_timer_query
		*/
		using PFNGLGETQUERYOBJECTI64VEXTPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint64EXT *params);
		using PFNGLGETQUERYOBJECTUI64VEXTPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint64EXT *params);

		/*
			GL_EXT_transform_feedback
		*/
		using PFNGLBEGINTRANSFORMFEEDBACKEXTPROC = void(__stdcall *) (GLenum primitiveMode);
		using PFNGLBINDBUFFERBASEEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer);
		using PFNGLBINDBUFFEROFFSETEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
		using PFNGLBINDBUFFERRANGEEXTPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLENDTRANSFORMFEEDBACKEXTPROC = void(__stdcall *) (void);
		using PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC = void(__stdcall *) (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei *size, GLenum *type, GLchar *name);
		using PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC = void(__stdcall *) (GLuint program, GLsizei count, const GLchar * const* varyings, GLenum bufferMode);

		/*
			GL_EXT_vertex_array
		*/
		using PFNGLARRAYELEMENTEXTPROC = void(__stdcall *) (GLint i);
		using PFNGLCOLORPOINTEREXTPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
		using PFNGLDRAWARRAYSEXTPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count);
		using PFNGLEDGEFLAGPOINTEREXTPROC = void(__stdcall *) (GLsizei stride, GLsizei count, const GLboolean* pointer);
		using PFNGLINDEXPOINTEREXTPROC = void(__stdcall *) (GLenum type, GLsizei stride, GLsizei count, const void *pointer);
		using PFNGLNORMALPOINTEREXTPROC = void(__stdcall *) (GLenum type, GLsizei stride, GLsizei count, const void *pointer);
		using PFNGLTEXCOORDPOINTEREXTPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
		using PFNGLVERTEXPOINTEREXTPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);

		/*
			GL_EXT_vertex_array_setXXX
		*/
		using PFNGLBINDARRAYSETEXTPROC = void(__stdcall *) (const void *arrayset);
		using PFNGLCREATEARRAYSETEXTPROC = const void * (__stdcall *) (void);
		using PFNGLDELETEARRAYSETSEXTPROC = void(__stdcall *) (GLsizei n, const void *arrayset[]);

		/*
			GL_EXT_vertex_attrib_64bit
		*/
		using PFNGLGETVERTEXATTRIBLDVEXTPROC = void(__stdcall *) (GLuint index, GLenum pname, GLdouble* params);
		using PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC = void(__stdcall *) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
		using PFNGLVERTEXATTRIBL1DEXTPROC = void(__stdcall *) (GLuint index, GLdouble x);
		using PFNGLVERTEXATTRIBL1DVEXTPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL2DEXTPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y);
		using PFNGLVERTEXATTRIBL2DVEXTPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL3DEXTPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXATTRIBL3DVEXTPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBL4DEXTPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXATTRIBL4DVEXTPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIBLPOINTEREXTPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);

		/*
			GL_EXT_vertex_shader
		*/
		using PFNGLBEGINVERTEXSHADEREXTPROC = void(__stdcall *) (void);
		using PFNGLBINDLIGHTPARAMETEREXTPROC = GLuint(__stdcall *) (GLenum light, GLenum value);
		using PFNGLBINDMATERIALPARAMETEREXTPROC = GLuint(__stdcall *) (GLenum face, GLenum value);
		using PFNGLBINDPARAMETEREXTPROC = GLuint(__stdcall *) (GLenum value);
		using PFNGLBINDTEXGENPARAMETEREXTPROC = GLuint(__stdcall *) (GLenum unit, GLenum coord, GLenum value);
		using PFNGLBINDTEXTUREUNITPARAMETEREXTPROC = GLuint(__stdcall *) (GLenum unit, GLenum value);
		using PFNGLBINDVERTEXSHADEREXTPROC = void(__stdcall *) (GLuint id);
		using PFNGLDELETEVERTEXSHADEREXTPROC = void(__stdcall *) (GLuint id);
		using PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC = void(__stdcall *) (GLuint id);
		using PFNGLENABLEVARIANTCLIENTSTATEEXTPROC = void(__stdcall *) (GLuint id);
		using PFNGLENDVERTEXSHADEREXTPROC = void(__stdcall *) (void);
		using PFNGLEXTRACTCOMPONENTEXTPROC = void(__stdcall *) (GLuint res, GLuint src, GLuint num);
		using PFNGLGENSYMBOLSEXTPROC = GLuint(__stdcall *) (GLenum dataType, GLenum storageType, GLenum range, GLuint components);
		using PFNGLGENVERTEXSHADERSEXTPROC = GLuint(__stdcall *) (GLuint range);
		using PFNGLGETINVARIANTBOOLEANVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLboolean *data);
		using PFNGLGETINVARIANTFLOATVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLfloat *data);
		using PFNGLGETINVARIANTINTEGERVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLint *data);
		using PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLboolean *data);
		using PFNGLGETLOCALCONSTANTFLOATVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLfloat *data);
		using PFNGLGETLOCALCONSTANTINTEGERVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLint *data);
		using PFNGLGETVARIANTBOOLEANVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLboolean *data);
		using PFNGLGETVARIANTFLOATVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLfloat *data);
		using PFNGLGETVARIANTINTEGERVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, GLint *data);
		using PFNGLGETVARIANTPOINTERVEXTPROC = void(__stdcall *) (GLuint id, GLenum value, void **data);
		using PFNGLINSERTCOMPONENTEXTPROC = void(__stdcall *) (GLuint res, GLuint src, GLuint num);
		using PFNGLISVARIANTENABLEDEXTPROC = GLboolean(__stdcall *) (GLuint id, GLenum cap);
		using PFNGLSETINVARIANTEXTPROC = void(__stdcall *) (GLuint id, GLenum type, void *addr);
		using PFNGLSETLOCALCONSTANTEXTPROC = void(__stdcall *) (GLuint id, GLenum type, void *addr);
		using PFNGLSHADEROP1EXTPROC = void(__stdcall *) (GLenum op, GLuint res, GLuint arg1);
		using PFNGLSHADEROP2EXTPROC = void(__stdcall *) (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
		using PFNGLSHADEROP3EXTPROC = void(__stdcall *) (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
		using PFNGLSWIZZLEEXTPROC = void(__stdcall *) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
		using PFNGLVARIANTPOINTEREXTPROC = void(__stdcall *) (GLuint id, GLenum type, GLuint stride, void *addr);
		using PFNGLVARIANTBVEXTPROC = void(__stdcall *) (GLuint id, GLbyte *addr);
		using PFNGLVARIANTDVEXTPROC = void(__stdcall *) (GLuint id, GLdouble *addr);
		using PFNGLVARIANTFVEXTPROC = void(__stdcall *) (GLuint id, GLfloat *addr);
		using PFNGLVARIANTIVEXTPROC = void(__stdcall *) (GLuint id, GLint *addr);
		using PFNGLVARIANTSVEXTPROC = void(__stdcall *) (GLuint id, GLshort *addr);
		using PFNGLVARIANTUBVEXTPROC = void(__stdcall *) (GLuint id, GLubyte *addr);
		using PFNGLVARIANTUIVEXTPROC = void(__stdcall *) (GLuint id, GLuint *addr);
		using PFNGLVARIANTUSVEXTPROC = void(__stdcall *) (GLuint id, GLushort *addr);
		using PFNGLWRITEMASKEXTPROC = void(__stdcall *) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);

		/*
			GL_EXT_vertex_weighting
		*/
		using PFNGLVERTEXWEIGHTPOINTEREXTPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride, void *pointer);
		using PFNGLVERTEXWEIGHTFEXTPROC = void(__stdcall *) (GLfloat weight);
		using PFNGLVERTEXWEIGHTFVEXTPROC = void(__stdcall *) (GLfloat* weight);

		/*
			GL_EXT_win32_keyed_mutex
		*/
		using PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC = GLboolean(__stdcall *) (GLuint memory, GLuint64 key, GLuint timeout);
		using PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC = GLboolean(__stdcall *) (GLuint memory, GLuint64 key);

		/*
			GL_EXT_window_rectangles
		*/
		using PFNGLWINDOWRECTANGLESEXTPROC = void(__stdcall *) (GLenum mode, GLsizei count, const GLint box[]);

		/*
			GL_EXT_x11_sync_object
		*/
		using PFNGLIMPORTSYNCEXTPROC = GLsync(__stdcall *) (GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);

		/*
			GL_GREMEDY_frame_terminator
		*/
		using PFNGLFRAMETERMINATORGREMEDYPROC = void(__stdcall *) (void);

		/*
			GL_GREMEDY_string_marker
		*/
		using PFNGLSTRINGMARKERGREMEDYPROC = void(__stdcall *) (GLsizei len, const void *string);

		/*
			GL_HP_image_transform
		*/
		using PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLIMAGETRANSFORMPARAMETERFHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat param);
		using PFNGLIMAGETRANSFORMPARAMETERFVHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLIMAGETRANSFORMPARAMETERIHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint param);
		using PFNGLIMAGETRANSFORMPARAMETERIVHPPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);

		/*
			GL_IBM_multimode_draw_arrays
		*/
		using PFNGLMULTIMODEDRAWARRAYSIBMPROC = void(__stdcall *) (const GLenum* mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
		using PFNGLMULTIMODEDRAWELEMENTSIBMPROC = void(__stdcall *) (const GLenum* mode, const GLsizei *count, GLenum type, const void *const *indices, GLsizei primcount, GLint modestride);

		/*
			GL_IBM_vertex_array_lists
		*/
		using PFNGLCOLORPOINTERLISTIBMPROC = void(__stdcall *) (GLint size, GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLEDGEFLAGPOINTERLISTIBMPROC = void(__stdcall *) (GLint stride, const GLboolean ** pointer, GLint ptrstride);
		using PFNGLFOGCOORDPOINTERLISTIBMPROC = void(__stdcall *) (GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLINDEXPOINTERLISTIBMPROC = void(__stdcall *) (GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLNORMALPOINTERLISTIBMPROC = void(__stdcall *) (GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLSECONDARYCOLORPOINTERLISTIBMPROC = void(__stdcall *) (GLint size, GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLTEXCOORDPOINTERLISTIBMPROC = void(__stdcall *) (GLint size, GLenum type, GLint stride, const void** pointer, GLint ptrstride);
		using PFNGLVERTEXPOINTERLISTIBMPROC = void(__stdcall *) (GLint size, GLenum type, GLint stride, const void** pointer, GLint ptrstride);

		/*
			GL_INTEL_map_texture
		*/
		using PFNGLMAPTEXTURE2DINTELPROC = void * (__stdcall *) (GLuint texture, GLint level, GLbitfield access, GLint* stride, GLenum *layout);
		using PFNGLSYNCTEXTUREINTELPROC = void(__stdcall *) (GLuint texture);
		using PFNGLUNMAPTEXTURE2DINTELPROC = void(__stdcall *) (GLuint texture, GLint level);

		/*
			GL_INTEL_parallel_arrays
		*/
		using PFNGLCOLORPOINTERVINTELPROC = void(__stdcall *) (GLint size, GLenum type, const void** pointer);
		using PFNGLNORMALPOINTERVINTELPROC = void(__stdcall *) (GLenum type, const void** pointer);
		using PFNGLTEXCOORDPOINTERVINTELPROC = void(__stdcall *) (GLint size, GLenum type, const void** pointer);
		using PFNGLVERTEXPOINTERVINTELPROC = void(__stdcall *) (GLint size, GLenum type, const void** pointer);

		/*
			GL_INTEL_performance_query
		*/
		using PFNGLBEGINPERFQUERYINTELPROC = void(__stdcall *) (GLuint queryHandle);
		using PFNGLCREATEPERFQUERYINTELPROC = void(__stdcall *) (GLuint queryId, GLuint* queryHandle);
		using PFNGLDELETEPERFQUERYINTELPROC = void(__stdcall *) (GLuint queryHandle);
		using PFNGLENDPERFQUERYINTELPROC = void(__stdcall *) (GLuint queryHandle);
		using PFNGLGETFIRSTPERFQUERYIDINTELPROC = void(__stdcall *) (GLuint* queryId);
		using PFNGLGETNEXTPERFQUERYIDINTELPROC = void(__stdcall *) (GLuint queryId, GLuint* nextQueryId);
		using PFNGLGETPERFCOUNTERINFOINTELPROC = void(__stdcall *) (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar* counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
		using PFNGLGETPERFQUERYDATAINTELPROC = void(__stdcall *) (GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
		using PFNGLGETPERFQUERYIDBYNAMEINTELPROC = void(__stdcall *) (GLchar* queryName, GLuint *queryId);
		using PFNGLGETPERFQUERYINFOINTELPROC = void(__stdcall *) (GLuint queryId, GLuint queryNameLength, GLchar* queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);

		/*
			GL_INTEL_texture_scissor
		*/
		using PFNGLTEXSCISSORFUNCINTELPROC = void(__stdcall *) (GLenum target, GLenum lfunc, GLenum hfunc);
		using PFNGLTEXSCISSORINTELPROC = void(__stdcall *) (GLenum target, GLclampf tlow, GLclampf thigh);

		/*
			GL_KHR_blend_equation_advanced
		*/
		using PFNGLBLENDBARRIERKHRPROC = void(__stdcall *) (void);

		/*
			GL_KHR_debug
		*/
		using GLDEBUGPROC = void(__stdcall *) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
		using PFNGLDEBUGMESSAGECALLBACKPROC = void(__stdcall *) (GLDEBUGPROC callback, const void *userParam);
		using PFNGLDEBUGMESSAGECONTROLPROC = void(__stdcall *) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
		using PFNGLDEBUGMESSAGEINSERTPROC = void(__stdcall *) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf);
		using PFNGLGETDEBUGMESSAGELOGPROC = GLuint(__stdcall *) (GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog);
		using PFNGLGETOBJECTLABELPROC = void(__stdcall *) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar *label);
		using PFNGLGETOBJECTPTRLABELPROC = void(__stdcall *) (void* ptr, GLsizei bufSize, GLsizei* length, GLchar *label);
		using PFNGLOBJECTLABELPROC = void(__stdcall *) (GLenum identifier, GLuint name, GLsizei length, const GLchar* label);
		using PFNGLOBJECTPTRLABELPROC = void(__stdcall *) (void* ptr, GLsizei length, const GLchar* label);
		using PFNGLPOPDEBUGGROUPPROC = void(__stdcall *) (void);
		using PFNGLPUSHDEBUGGROUPPROC = void(__stdcall *) (GLenum source, GLuint id, GLsizei length, const GLchar * message);

		/*
			GL_KHR_parallel_shader_compile
		*/
		using PFNGLMAXSHADERCOMPILERTHREADSKHRPROC = void(__stdcall *) (GLuint count);

		/*
			GL_KHR_robustness
		*/
		using PFNGLGETNUNIFORMFVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
		using PFNGLGETNUNIFORMIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLint* params);
		using PFNGLGETNUNIFORMUIVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei bufSize, GLuint* params);
		using PFNGLREADNPIXELSPROC = void(__stdcall *) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);

		/*
			GL_KTX_buffer_region
		*/
		using PFNGLBUFFERREGIONENABLEDPROC = GLuint(__stdcall *) (void);
		using PFNGLDELETEBUFFERREGIONPROC = void(__stdcall *) (GLenum region);
		using PFNGLDRAWBUFFERREGIONPROC = void(__stdcall *) (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height, GLint xDest, GLint yDest);
		using PFNGLNEWBUFFERREGIONPROC = GLuint(__stdcall *) (GLenum region);
		using PFNGLREADBUFFERREGIONPROC = void(__stdcall *) (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height);

		/*
			GL_MESA_resize_buffers
		*/
		using PFNGLRESIZEBUFFERSMESAPROC = void(__stdcall *) (void);

		/*
			GL_MESA_window_pos
		*/
		using PFNGLWINDOWPOS2DMESAPROC = void(__stdcall *) (GLdouble x, GLdouble y);
		using PFNGLWINDOWPOS2DVMESAPROC = void(__stdcall *) (const GLdouble* p);
		using PFNGLWINDOWPOS2FMESAPROC = void(__stdcall *) (GLfloat x, GLfloat y);
		using PFNGLWINDOWPOS2FVMESAPROC = void(__stdcall *) (const GLfloat* p);
		using PFNGLWINDOWPOS2IMESAPROC = void(__stdcall *) (GLint x, GLint y);
		using PFNGLWINDOWPOS2IVMESAPROC = void(__stdcall *) (const GLint* p);
		using PFNGLWINDOWPOS2SMESAPROC = void(__stdcall *) (GLshort x, GLshort y);
		using PFNGLWINDOWPOS2SVMESAPROC = void(__stdcall *) (const GLshort* p);
		using PFNGLWINDOWPOS3DMESAPROC = void(__stdcall *) (GLdouble x, GLdouble y, GLdouble z);
		using PFNGLWINDOWPOS3DVMESAPROC = void(__stdcall *) (const GLdouble* p);
		using PFNGLWINDOWPOS3FMESAPROC = void(__stdcall *) (GLfloat x, GLfloat y, GLfloat z);
		using PFNGLWINDOWPOS3FVMESAPROC = void(__stdcall *) (const GLfloat* p);
		using PFNGLWINDOWPOS3IMESAPROC = void(__stdcall *) (GLint x, GLint y, GLint z);
		using PFNGLWINDOWPOS3IVMESAPROC = void(__stdcall *) (const GLint* p);
		using PFNGLWINDOWPOS3SMESAPROC = void(__stdcall *) (GLshort x, GLshort y, GLshort z);
		using PFNGLWINDOWPOS3SVMESAPROC = void(__stdcall *) (const GLshort* p);
		using PFNGLWINDOWPOS4DMESAPROC = void(__stdcall *) (GLdouble x, GLdouble y, GLdouble z, GLdouble);
		using PFNGLWINDOWPOS4DVMESAPROC = void(__stdcall *) (const GLdouble* p);
		using PFNGLWINDOWPOS4FMESAPROC = void(__stdcall *) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLWINDOWPOS4FVMESAPROC = void(__stdcall *) (const GLfloat* p);
		using PFNGLWINDOWPOS4IMESAPROC = void(__stdcall *) (GLint x, GLint y, GLint z, GLint w);
		using PFNGLWINDOWPOS4IVMESAPROC = void(__stdcall *) (const GLint* p);
		using PFNGLWINDOWPOS4SMESAPROC = void(__stdcall *) (GLshort x, GLshort y, GLshort z, GLshort w);
		using PFNGLWINDOWPOS4SVMESAPROC = void(__stdcall *) (const GLshort* p);

		/*
			GL_NVX_conditional_render
		*/
		using PFNGLBEGINCONDITIONALRENDERNVXPROC = void(__stdcall *) (GLuint id);
		using PFNGLENDCONDITIONALRENDERNVXPROC = void(__stdcall *) (void);

		/*
			GL_NVX_linked_gpu_multicast
		*/
		using PFNGLLGPUCOPYIMAGESUBDATANVXPROC = void(__stdcall *) (GLuint sourceGpu, GLbitfield destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
		using PFNGLLGPUINTERLOCKNVXPROC = void(__stdcall *) (void);
		using PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC = void(__stdcall *) (GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);

		/*
			GL_NV_3dvision_settings
		*/
		using PFNGLSTEREOPARAMETERFNVPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLSTEREOPARAMETERINVPROC = void(__stdcall *) (GLenum pname, GLint param);

		/*
			GL_NV_bindless_multi_draw_indirect
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
		using PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);

		/*
			GL_NV_bindless_multi_draw_indirect_count
		*/
		using PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC = void(__stdcall *) (GLenum mode, const void *indirect, GLintptr drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
		using PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC = void(__stdcall *) (GLenum mode, GLenum type, const void *indirect, GLintptr drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);

		/*
			GL_NV_bindless_texture
		*/
		using PFNGLGETIMAGEHANDLENVPROC = GLuint64(__stdcall *) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
		using PFNGLGETTEXTUREHANDLENVPROC = GLuint64(__stdcall *) (GLuint texture);
		using PFNGLGETTEXTURESAMPLERHANDLENVPROC = GLuint64(__stdcall *) (GLuint texture, GLuint sampler);
		using PFNGLISIMAGEHANDLERESIDENTNVPROC = GLboolean(__stdcall *) (GLuint64 handle);
		using PFNGLISTEXTUREHANDLERESIDENTNVPROC = GLboolean(__stdcall *) (GLuint64 handle);
		using PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLMAKEIMAGEHANDLERESIDENTNVPROC = void(__stdcall *) (GLuint64 handle, GLenum access);
		using PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLMAKETEXTUREHANDLERESIDENTNVPROC = void(__stdcall *) (GLuint64 handle);
		using PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64 value);
		using PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64* values);
		using PFNGLUNIFORMHANDLEUI64NVPROC = void(__stdcall *) (GLint location, GLuint64 value);
		using PFNGLUNIFORMHANDLEUI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64* value);

		/*
			GL_NV_blend_equation_advanced
		*/
		using PFNGLBLENDBARRIERNVPROC = void(__stdcall *) (void);
		using PFNGLBLENDPARAMETERINVPROC = void(__stdcall *) (GLenum pname, GLint value);

		/*
			GL_NV_clip_space_w_scaling
		*/
		using PFNGLVIEWPORTPOSITIONWSCALENVPROC = void(__stdcall *) (GLuint index, GLfloat xcoeff, GLfloat ycoeff);

		/*
			GL_NV_command_list
		*/
		using PFNGLCALLCOMMANDLISTNVPROC = void(__stdcall *) (GLuint list);
		using PFNGLCOMMANDLISTSEGMENTSNVPROC = void(__stdcall *) (GLuint list, GLuint segments);
		using PFNGLCOMPILECOMMANDLISTNVPROC = void(__stdcall *) (GLuint list);
		using PFNGLCREATECOMMANDLISTSNVPROC = void(__stdcall *) (GLsizei n, GLuint* lists);
		using PFNGLCREATESTATESNVPROC = void(__stdcall *) (GLsizei n, GLuint* states);
		using PFNGLDELETECOMMANDLISTSNVPROC = void(__stdcall *) (GLsizei n, const GLuint* lists);
		using PFNGLDELETESTATESNVPROC = void(__stdcall *) (GLsizei n, const GLuint* states);
		using PFNGLDRAWCOMMANDSADDRESSNVPROC = void(__stdcall *) (GLenum primitiveMode, const GLuint64* indirects, const GLsizei* sizes, GLuint count);
		using PFNGLDRAWCOMMANDSNVPROC = void(__stdcall *) (GLenum primitiveMode, GLuint buffer, const GLintptr* indirects, const GLsizei* sizes, GLuint count);
		using PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC = void(__stdcall *) (const GLuint64* indirects, const GLsizei* sizes, const GLuint* states, const GLuint* fbos, GLuint count);
		using PFNGLDRAWCOMMANDSSTATESNVPROC = void(__stdcall *) (GLuint buffer, const GLintptr* indirects, const GLsizei* sizes, const GLuint* states, const GLuint* fbos, GLuint count);
		using PFNGLGETCOMMANDHEADERNVPROC = GLuint(__stdcall *) (GLenum tokenID, GLuint size);
		using PFNGLGETSTAGEINDEXNVPROC = GLushort(__stdcall *) (GLenum shadertype);
		using PFNGLISCOMMANDLISTNVPROC = GLboolean(__stdcall *) (GLuint list);
		using PFNGLISSTATENVPROC = GLboolean(__stdcall *) (GLuint state);
		using PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC = void(__stdcall *) (GLuint list, GLuint segment, const void** indirects, const GLsizei* sizes, const GLuint* states, const GLuint* fbos, GLuint count);
		using PFNGLSTATECAPTURENVPROC = void(__stdcall *) (GLuint state, GLenum mode);

		/*
			GL_NV_conditional_render
		*/
		using PFNGLBEGINCONDITIONALRENDERNVPROC = void(__stdcall *) (GLuint id, GLenum mode);
		using PFNGLENDCONDITIONALRENDERNVPROC = void(__stdcall *) (void);

		/*
			GL_NV_conservative_raster
		*/
		using PFNGLSUBPIXELPRECISIONBIASNVPROC = void(__stdcall *) (GLuint xbits, GLuint ybits);

		/*
			GL_NV_conservative_raster_dilate
		*/
		using PFNGLCONSERVATIVERASTERPARAMETERFNVPROC = void(__stdcall *) (GLenum pname, GLfloat value);

		/*
			GL_NV_conservative_raster_pre_snap_triangles
		*/
		using PFNGLCONSERVATIVERASTERPARAMETERINVPROC = void(__stdcall *) (GLenum pname, GLint param);

		/*
			GL_NV_copy_buffer
		*/
		using PFNGLCOPYBUFFERSUBDATANVPROC = void(__stdcall *) (GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size);

		/*
			GL_NV_copy_image
		*/
		using PFNGLCOPYIMAGESUBDATANVPROC = void(__stdcall *) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

		/*
			GL_NV_depth_buffer_float
		*/
		using PFNGLCLEARDEPTHDNVPROC = void(__stdcall *) (GLdouble depth);
		using PFNGLDEPTHBOUNDSDNVPROC = void(__stdcall *) (GLdouble zmin, GLdouble zmax);
		using PFNGLDEPTHRANGEDNVPROC = void(__stdcall *) (GLdouble zNear, GLdouble zFar);

		/*
			GL_NV_draw_buffers
		*/
		using PFNGLDRAWBUFFERSNVPROC = void(__stdcall *) (GLsizei n, const GLenum* bufs);

		/*
			GL_NV_draw_instanced
		*/
		using PFNGLDRAWARRAYSINSTANCEDNVPROC = void(__stdcall *) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
		using PFNGLDRAWELEMENTSINSTANCEDNVPROC = void(__stdcall *) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);

		/*
			GL_NV_draw_texture
		*/
		using PFNGLDRAWTEXTURENVPROC = void(__stdcall *) (GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);

		/*
			GL_NV_draw_vulkan_image
		*/
		using GLVULKANPROCNV = void(__stdcall *) (void);
		using PFNGLDRAWVKIMAGENVPROC = void(__stdcall *) (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
		using PFNGLGETVKPROCADDRNVPROC = GLVULKANPROCNV(__stdcall *) (const GLchar* name);
		using PFNGLSIGNALVKFENCENVPROC = void(__stdcall *) (GLuint64 vkFence);
		using PFNGLSIGNALVKSEMAPHORENVPROC = void(__stdcall *) (GLuint64 vkSemaphore);
		using PFNGLWAITVKSEMAPHORENVPROC = void(__stdcall *) (GLuint64 vkSemaphore);

		/*
			GL_NV_evaluators
		*/
		using PFNGLEVALMAPSNVPROC = void(__stdcall *) (GLenum target, GLenum mode);
		using PFNGLGETMAPATTRIBPARAMETERFVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETMAPATTRIBPARAMETERIVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum pname, GLint* params);
		using PFNGLGETMAPCONTROLPOINTSNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points);
		using PFNGLGETMAPPARAMETERFVNVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETMAPPARAMETERIVNVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLMAPCONTROLPOINTSNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points);
		using PFNGLMAPPARAMETERFVNVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLMAPPARAMETERIVNVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);

		/*
			GL_NV_explicit_multisample
		*/
		using PFNGLGETMULTISAMPLEFVNVPROC = void(__stdcall *) (GLenum pname, GLuint index, GLfloat* val);
		using PFNGLSAMPLEMASKINDEXEDNVPROC = void(__stdcall *) (GLuint index, GLbitfield mask);
		using PFNGLTEXRENDERBUFFERNVPROC = void(__stdcall *) (GLenum target, GLuint renderbuffer);

		/*
			GL_NV_fence
		*/
		using PFNGLDELETEFENCESNVPROC = void(__stdcall *) (GLsizei n, const GLuint* fences);
		using PFNGLFINISHFENCENVPROC = void(__stdcall *) (GLuint fence);
		using PFNGLGENFENCESNVPROC = void(__stdcall *) (GLsizei n, GLuint* fences);
		using PFNGLGETFENCEIVNVPROC = void(__stdcall *) (GLuint fence, GLenum pname, GLint* params);
		using PFNGLISFENCENVPROC = GLboolean(__stdcall *) (GLuint fence);
		using PFNGLSETFENCENVPROC = void(__stdcall *) (GLuint fence, GLenum condition);
		using PFNGLTESTFENCENVPROC = GLboolean(__stdcall *) (GLuint fence);

		/*
			GL_NV_fragment_coverage_to_color
		*/
		using PFNGLFRAGMENTCOVERAGECOLORNVPROC = void(__stdcall *) (GLuint color);

		/*
			GL_NV_fragment_program
		*/
		using PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, GLdouble *params);
		using PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, GLfloat *params);
		using PFNGLPROGRAMNAMEDPARAMETER4DNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, const GLdouble v[]);
		using PFNGLPROGRAMNAMEDPARAMETER4FNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC = void(__stdcall *) (GLuint id, GLsizei len, const GLubyte* name, const GLfloat v[]);

		/*
			GL_NV_framebuffer_blit
		*/
		using PFNGLBLITFRAMEBUFFERNVPROC = void(__stdcall *) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

		/*
			GL_NV_framebuffer_multisample
		*/
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC = void(__stdcall *) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_NV_framebuffer_multisample_coverage
		*/
		using PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC = void(__stdcall *) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);

		/*
			GL_NV_geometry_program4
		*/
		using PFNGLPROGRAMVERTEXLIMITNVPROC = void(__stdcall *) (GLenum target, GLint limit);

		/*
			GL_NV_gpu_multicast
		*/
		using PFNGLMULTICASTBARRIERNVPROC = void(__stdcall *) (void);
		using PFNGLMULTICASTBLITFRAMEBUFFERNVPROC = void(__stdcall *) (GLuint srcGpu, GLuint dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
		using PFNGLMULTICASTBUFFERSUBDATANVPROC = void(__stdcall *) (GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
		using PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC = void(__stdcall *) (GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
		using PFNGLMULTICASTCOPYIMAGESUBDATANVPROC = void(__stdcall *) (GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
		using PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC = void(__stdcall *) (GLuint gpu, GLuint framebuffer, GLuint start, GLsizei count, const GLfloat* v);
		using PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC = void(__stdcall *) (GLuint gpu, GLuint id, GLenum pname, GLint64* params);
		using PFNGLMULTICASTGETQUERYOBJECTIVNVPROC = void(__stdcall *) (GLuint gpu, GLuint id, GLenum pname, GLint* params);
		using PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC = void(__stdcall *) (GLuint gpu, GLuint id, GLenum pname, GLuint64* params);
		using PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC = void(__stdcall *) (GLuint gpu, GLuint id, GLenum pname, GLuint* params);
		using PFNGLMULTICASTWAITSYNCNVPROC = void(__stdcall *) (GLuint signalGpu, GLbitfield waitGpuMask);
		using PFNGLRENDERGPUMASKNVPROC = void(__stdcall *) (GLbitfield mask);

		/*
			GL_NV_gpu_program4
		*/
		using PFNGLPROGRAMENVPARAMETERI4INVPROC = void(__stdcall *) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
		using PFNGLPROGRAMENVPARAMETERI4IVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLint *params);
		using PFNGLPROGRAMENVPARAMETERI4UINVPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		using PFNGLPROGRAMENVPARAMETERI4UIVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLuint *params);
		using PFNGLPROGRAMENVPARAMETERSI4IVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLint *params);
		using PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLuint *params);
		using PFNGLPROGRAMLOCALPARAMETERI4INVPROC = void(__stdcall *) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
		using PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLint *params);
		using PFNGLPROGRAMLOCALPARAMETERI4UINVPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
		using PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLuint *params);
		using PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLint *params);
		using PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei count, const GLuint *params);

		/*
			GL_NV_gpu_shader5
		*/
		using PFNGLGETUNIFORMI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLint64EXT* params);
		using PFNGLGETUNIFORMUI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT* params);
		using PFNGLPROGRAMUNIFORM1I64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLint64EXT x);
		using PFNGLPROGRAMUNIFORM1I64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLPROGRAMUNIFORM1UI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT x);
		using PFNGLPROGRAMUNIFORM1UI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLPROGRAMUNIFORM2I64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
		using PFNGLPROGRAMUNIFORM2I64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLPROGRAMUNIFORM2UI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
		using PFNGLPROGRAMUNIFORM2UI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLPROGRAMUNIFORM3I64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		using PFNGLPROGRAMUNIFORM3I64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLPROGRAMUNIFORM3UI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		using PFNGLPROGRAMUNIFORM3UI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLPROGRAMUNIFORM4I64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		using PFNGLPROGRAMUNIFORM4I64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLPROGRAMUNIFORM4UI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		using PFNGLPROGRAMUNIFORM4UI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLUNIFORM1I64NVPROC = void(__stdcall *) (GLint location, GLint64EXT x);
		using PFNGLUNIFORM1I64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLUNIFORM1UI64NVPROC = void(__stdcall *) (GLint location, GLuint64EXT x);
		using PFNGLUNIFORM1UI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLUNIFORM2I64NVPROC = void(__stdcall *) (GLint location, GLint64EXT x, GLint64EXT y);
		using PFNGLUNIFORM2I64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLUNIFORM2UI64NVPROC = void(__stdcall *) (GLint location, GLuint64EXT x, GLuint64EXT y);
		using PFNGLUNIFORM2UI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLUNIFORM3I64NVPROC = void(__stdcall *) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		using PFNGLUNIFORM3I64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLUNIFORM3UI64NVPROC = void(__stdcall *) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		using PFNGLUNIFORM3UI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLUNIFORM4I64NVPROC = void(__stdcall *) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		using PFNGLUNIFORM4I64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLint64EXT* value);
		using PFNGLUNIFORM4UI64NVPROC = void(__stdcall *) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		using PFNGLUNIFORM4UI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64EXT* value);

		/*
			GL_NV_half_float
		*/
		using PFNGLCOLOR3HNVPROC = void(__stdcall *) (GLhalf red, GLhalf green, GLhalf blue);
		using PFNGLCOLOR3HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLCOLOR4HNVPROC = void(__stdcall *) (GLhalf red, GLhalf green, GLhalf blue, GLhalf alpha);
		using PFNGLCOLOR4HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLFOGCOORDHNVPROC = void(__stdcall *) (GLhalf fog);
		using PFNGLFOGCOORDHVNVPROC = void(__stdcall *) (const GLhalf* fog);
		using PFNGLMULTITEXCOORD1HNVPROC = void(__stdcall *) (GLenum target, GLhalf s);
		using PFNGLMULTITEXCOORD1HVNVPROC = void(__stdcall *) (GLenum target, const GLhalf* v);
		using PFNGLMULTITEXCOORD2HNVPROC = void(__stdcall *) (GLenum target, GLhalf s, GLhalf t);
		using PFNGLMULTITEXCOORD2HVNVPROC = void(__stdcall *) (GLenum target, const GLhalf* v);
		using PFNGLMULTITEXCOORD3HNVPROC = void(__stdcall *) (GLenum target, GLhalf s, GLhalf t, GLhalf r);
		using PFNGLMULTITEXCOORD3HVNVPROC = void(__stdcall *) (GLenum target, const GLhalf* v);
		using PFNGLMULTITEXCOORD4HNVPROC = void(__stdcall *) (GLenum target, GLhalf s, GLhalf t, GLhalf r, GLhalf q);
		using PFNGLMULTITEXCOORD4HVNVPROC = void(__stdcall *) (GLenum target, const GLhalf* v);
		using PFNGLNORMAL3HNVPROC = void(__stdcall *) (GLhalf nx, GLhalf ny, GLhalf nz);
		using PFNGLNORMAL3HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLSECONDARYCOLOR3HNVPROC = void(__stdcall *) (GLhalf red, GLhalf green, GLhalf blue);
		using PFNGLSECONDARYCOLOR3HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLTEXCOORD1HNVPROC = void(__stdcall *) (GLhalf s);
		using PFNGLTEXCOORD1HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLTEXCOORD2HNVPROC = void(__stdcall *) (GLhalf s, GLhalf t);
		using PFNGLTEXCOORD2HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLTEXCOORD3HNVPROC = void(__stdcall *) (GLhalf s, GLhalf t, GLhalf r);
		using PFNGLTEXCOORD3HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLTEXCOORD4HNVPROC = void(__stdcall *) (GLhalf s, GLhalf t, GLhalf r, GLhalf q);
		using PFNGLTEXCOORD4HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLVERTEX2HNVPROC = void(__stdcall *) (GLhalf x, GLhalf y);
		using PFNGLVERTEX2HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLVERTEX3HNVPROC = void(__stdcall *) (GLhalf x, GLhalf y, GLhalf z);
		using PFNGLVERTEX3HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLVERTEX4HNVPROC = void(__stdcall *) (GLhalf x, GLhalf y, GLhalf z, GLhalf w);
		using PFNGLVERTEX4HVNVPROC = void(__stdcall *) (const GLhalf* v);
		using PFNGLVERTEXATTRIB1HNVPROC = void(__stdcall *) (GLuint index, GLhalf x);
		using PFNGLVERTEXATTRIB1HVNVPROC = void(__stdcall *) (GLuint index, const GLhalf* v);
		using PFNGLVERTEXATTRIB2HNVPROC = void(__stdcall *) (GLuint index, GLhalf x, GLhalf y);
		using PFNGLVERTEXATTRIB2HVNVPROC = void(__stdcall *) (GLuint index, const GLhalf* v);
		using PFNGLVERTEXATTRIB3HNVPROC = void(__stdcall *) (GLuint index, GLhalf x, GLhalf y, GLhalf z);
		using PFNGLVERTEXATTRIB3HVNVPROC = void(__stdcall *) (GLuint index, const GLhalf* v);
		using PFNGLVERTEXATTRIB4HNVPROC = void(__stdcall *) (GLuint index, GLhalf x, GLhalf y, GLhalf z, GLhalf w);
		using PFNGLVERTEXATTRIB4HVNVPROC = void(__stdcall *) (GLuint index, const GLhalf* v);
		using PFNGLVERTEXATTRIBS1HVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLhalf* v);
		using PFNGLVERTEXATTRIBS2HVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLhalf* v);
		using PFNGLVERTEXATTRIBS3HVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLhalf* v);
		using PFNGLVERTEXATTRIBS4HVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLhalf* v);
		using PFNGLVERTEXWEIGHTHNVPROC = void(__stdcall *) (GLhalf weight);
		using PFNGLVERTEXWEIGHTHVNVPROC = void(__stdcall *) (const GLhalf* weight);

		/*
			GL_NV_instanced_arrays
		*/
		using PFNGLVERTEXATTRIBDIVISORNVPROC = void(__stdcall *) (GLuint index, GLuint divisor);

		/*
			GL_NV_internalformat_sample_query
		*/
		using PFNGLGETINTERNALFORMATSAMPLEIVNVPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint* params);

		/*
			GL_NV_non_square_matrices
		*/
		using PFNGLUNIFORMMATRIX2X3FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX2X4FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX3X2FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX3X4FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX4X2FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
		using PFNGLUNIFORMMATRIX4X3FVNVPROC = void(__stdcall *) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);

		/*
			GL_NV_occlusion_query
		*/
		using PFNGLBEGINOCCLUSIONQUERYNVPROC = void(__stdcall *) (GLuint id);
		using PFNGLDELETEOCCLUSIONQUERIESNVPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLENDOCCLUSIONQUERYNVPROC = void(__stdcall *) (void);
		using PFNGLGENOCCLUSIONQUERIESNVPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLGETOCCLUSIONQUERYIVNVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLGETOCCLUSIONQUERYUIVNVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLuint* params);
		using PFNGLISOCCLUSIONQUERYNVPROC = GLboolean(__stdcall *) (GLuint id);

		/*
			GL_NV_parameter_buffer_object
		*/
		using PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC = void(__stdcall *) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params);
		using PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC = void(__stdcall *) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params);
		using PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC = void(__stdcall *) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params);

		/*
			GL_NV_path_rendering
		*/
		using PFNGLCOPYPATHNVPROC = void(__stdcall *) (GLuint resultPath, GLuint srcPath);
		using PFNGLCOVERFILLPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		using PFNGLCOVERFILLPATHNVPROC = void(__stdcall *) (GLuint path, GLenum coverMode);
		using PFNGLCOVERSTROKEPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		using PFNGLCOVERSTROKEPATHNVPROC = void(__stdcall *) (GLuint path, GLenum coverMode);
		using PFNGLDELETEPATHSNVPROC = void(__stdcall *) (GLuint path, GLsizei range);
		using PFNGLGENPATHSNVPROC = GLuint(__stdcall *) (GLsizei range);
		using PFNGLGETPATHCOLORGENFVNVPROC = void(__stdcall *) (GLenum color, GLenum pname, GLfloat* value);
		using PFNGLGETPATHCOLORGENIVNVPROC = void(__stdcall *) (GLenum color, GLenum pname, GLint* value);
		using PFNGLGETPATHCOMMANDSNVPROC = void(__stdcall *) (GLuint path, GLubyte* commands);
		using PFNGLGETPATHCOORDSNVPROC = void(__stdcall *) (GLuint path, GLfloat* coords);
		using PFNGLGETPATHDASHARRAYNVPROC = void(__stdcall *) (GLuint path, GLfloat* dashArray);
		using PFNGLGETPATHLENGTHNVPROC = GLfloat(__stdcall *) (GLuint path, GLsizei startSegment, GLsizei numSegments);
		using PFNGLGETPATHMETRICRANGENVPROC = void(__stdcall *) (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat* metrics);
		using PFNGLGETPATHMETRICSNVPROC = void(__stdcall *) (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
		using PFNGLGETPATHPARAMETERFVNVPROC = void(__stdcall *) (GLuint path, GLenum pname, GLfloat* value);
		using PFNGLGETPATHPARAMETERIVNVPROC = void(__stdcall *) (GLuint path, GLenum pname, GLint* value);
		using PFNGLGETPATHSPACINGNVPROC = void(__stdcall *) (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
		using PFNGLGETPATHTEXGENFVNVPROC = void(__stdcall *) (GLenum texCoordSet, GLenum pname, GLfloat* value);
		using PFNGLGETPATHTEXGENIVNVPROC = void(__stdcall *) (GLenum texCoordSet, GLenum pname, GLint* value);
		using PFNGLGETPROGRAMRESOURCEFVNVPROC = void(__stdcall *) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei *length, GLfloat *params);
		using PFNGLINTERPOLATEPATHSNVPROC = void(__stdcall *) (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
		using PFNGLISPATHNVPROC = GLboolean(__stdcall *) (GLuint path);
		using PFNGLISPOINTINFILLPATHNVPROC = GLboolean(__stdcall *) (GLuint path, GLuint mask, GLfloat x, GLfloat y);
		using PFNGLISPOINTINSTROKEPATHNVPROC = GLboolean(__stdcall *) (GLuint path, GLfloat x, GLfloat y);
		using PFNGLMATRIXLOAD3X2FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXLOAD3X3FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXMULT3X2FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXMULT3X3FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC = void(__stdcall *) (GLenum matrixMode, const GLfloat* m);
		using PFNGLPATHCOLORGENNVPROC = void(__stdcall *) (GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat* coeffs);
		using PFNGLPATHCOMMANDSNVPROC = void(__stdcall *) (GLuint path, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const void*coords);
		using PFNGLPATHCOORDSNVPROC = void(__stdcall *) (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
		using PFNGLPATHCOVERDEPTHFUNCNVPROC = void(__stdcall *) (GLenum zfunc);
		using PFNGLPATHDASHARRAYNVPROC = void(__stdcall *) (GLuint path, GLsizei dashCount, const GLfloat* dashArray);
		using PFNGLPATHFOGGENNVPROC = void(__stdcall *) (GLenum genMode);
		using PFNGLPATHGLYPHINDEXARRAYNVPROC = GLenum(__stdcall *) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		using PFNGLPATHGLYPHINDEXRANGENVPROC = GLenum(__stdcall *) (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
		using PFNGLPATHGLYPHRANGENVPROC = void(__stdcall *) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		using PFNGLPATHGLYPHSNVPROC = void(__stdcall *) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void*charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		using PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC = GLenum(__stdcall *) (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
		using PFNGLPATHPARAMETERFNVPROC = void(__stdcall *) (GLuint path, GLenum pname, GLfloat value);
		using PFNGLPATHPARAMETERFVNVPROC = void(__stdcall *) (GLuint path, GLenum pname, const GLfloat* value);
		using PFNGLPATHPARAMETERINVPROC = void(__stdcall *) (GLuint path, GLenum pname, GLint value);
		using PFNGLPATHPARAMETERIVNVPROC = void(__stdcall *) (GLuint path, GLenum pname, const GLint* value);
		using PFNGLPATHSTENCILDEPTHOFFSETNVPROC = void(__stdcall *) (GLfloat factor, GLfloat units);
		using PFNGLPATHSTENCILFUNCNVPROC = void(__stdcall *) (GLenum func, GLint ref, GLuint mask);
		using PFNGLPATHSTRINGNVPROC = void(__stdcall *) (GLuint path, GLenum format, GLsizei length, const void *pathString);
		using PFNGLPATHSUBCOMMANDSNVPROC = void(__stdcall *) (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const void*coords);
		using PFNGLPATHSUBCOORDSNVPROC = void(__stdcall *) (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
		using PFNGLPATHTEXGENNVPROC = void(__stdcall *) (GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat* coeffs);
		using PFNGLPOINTALONGPATHNVPROC = GLboolean(__stdcall *) (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat* x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
		using PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC = void(__stdcall *) (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat* coeffs);
		using PFNGLSTENCILFILLPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
		using PFNGLSTENCILFILLPATHNVPROC = void(__stdcall *) (GLuint path, GLenum fillMode, GLuint mask);
		using PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
		using PFNGLSTENCILSTROKEPATHNVPROC = void(__stdcall *) (GLuint path, GLint reference, GLuint mask);
		using PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		using PFNGLSTENCILTHENCOVERFILLPATHNVPROC = void(__stdcall *) (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
		using PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC = void(__stdcall *) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
		using PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC = void(__stdcall *) (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
		using PFNGLTRANSFORMPATHNVPROC = void(__stdcall *) (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat* transformValues);
		using PFNGLWEIGHTPATHSNVPROC = void(__stdcall *) (GLuint resultPath, GLsizei numPaths, const GLuint paths[], const GLfloat weights[]);

		/*
			GL_NV_pixel_data_range
		*/
		using PFNGLFLUSHPIXELDATARANGENVPROC = void(__stdcall *) (GLenum target);
		using PFNGLPIXELDATARANGENVPROC = void(__stdcall *) (GLenum target, GLsizei length, void *pointer);

		/*
			GL_NV_point_sprite
		*/
		using PFNGLPOINTPARAMETERINVPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLPOINTPARAMETERIVNVPROC = void(__stdcall *) (GLenum pname, const GLint* params);

		/*
			GL_NV_polygon_mode
		*/
		using PFNGLPOLYGONMODENVPROC = void(__stdcall *) (GLenum face, GLenum mode);

		/*
			GL_NV_present_video
		*/
		using PFNGLGETVIDEOI64VNVPROC = void(__stdcall *) (GLuint video_slot, GLenum pname, GLint64EXT* params);
		using PFNGLGETVIDEOIVNVPROC = void(__stdcall *) (GLuint video_slot, GLenum pname, GLint* params);
		using PFNGLGETVIDEOUI64VNVPROC = void(__stdcall *) (GLuint video_slot, GLenum pname, GLuint64EXT* params);
		using PFNGLGETVIDEOUIVNVPROC = void(__stdcall *) (GLuint video_slot, GLenum pname, GLuint* params);
		using PFNGLPRESENTFRAMEDUALFILLNVPROC = void(__stdcall *) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
		using PFNGLPRESENTFRAMEKEYEDNVPROC = void(__stdcall *) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);

		/*
			GL_NV_primitive_restart
		*/
		using PFNGLPRIMITIVERESTARTINDEXNVPROC = void(__stdcall *) (GLuint index);
		using PFNGLPRIMITIVERESTARTNVPROC = void(__stdcall *) (void);

		/*
			GL_NV_register_combiners
		*/
		using PFNGLCOMBINERINPUTNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
		using PFNGLCOMBINEROUTPUTNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
		using PFNGLCOMBINERPARAMETERFNVPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLCOMBINERPARAMETERFVNVPROC = void(__stdcall *) (GLenum pname, const GLfloat* params);
		using PFNGLCOMBINERPARAMETERINVPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLCOMBINERPARAMETERIVNVPROC = void(__stdcall *) (GLenum pname, const GLint* params);
		using PFNGLFINALCOMBINERINPUTNVPROC = void(__stdcall *) (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
		using PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat* params);
		using PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint* params);
		using PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum pname, GLfloat* params);
		using PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC = void(__stdcall *) (GLenum stage, GLenum portion, GLenum pname, GLint* params);
		using PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC = void(__stdcall *) (GLenum variable, GLenum pname, GLfloat* params);
		using PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC = void(__stdcall *) (GLenum variable, GLenum pname, GLint* params);

		/*
			GL_NV_register_combiners2
		*/
		using PFNGLCOMBINERSTAGEPARAMETERFVNVPROC = void(__stdcall *) (GLenum stage, GLenum pname, const GLfloat* params);
		using PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC = void(__stdcall *) (GLenum stage, GLenum pname, GLfloat* params);

		/*
			GL_NV_sample_locations
		*/
		using PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC = void(__stdcall *) (GLenum target, GLuint start, GLsizei count, const GLfloat* v);
		using PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC = void(__stdcall *) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat* v);

		/*
			GL_NV_shader_buffer_load
		*/
		using PFNGLGETBUFFERPARAMETERUI64VNVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLuint64EXT* params);
		using PFNGLGETINTEGERUI64VNVPROC = void(__stdcall *) (GLenum value, GLuint64EXT* result);
		using PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC = void(__stdcall *) (GLuint buffer, GLenum pname, GLuint64EXT* params);
		using PFNGLISBUFFERRESIDENTNVPROC = GLboolean(__stdcall *) (GLenum target);
		using PFNGLISNAMEDBUFFERRESIDENTNVPROC = GLboolean(__stdcall *) (GLuint buffer);
		using PFNGLMAKEBUFFERNONRESIDENTNVPROC = void(__stdcall *) (GLenum target);
		using PFNGLMAKEBUFFERRESIDENTNVPROC = void(__stdcall *) (GLenum target, GLenum access);
		using PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC = void(__stdcall *) (GLuint buffer);
		using PFNGLMAKENAMEDBUFFERRESIDENTNVPROC = void(__stdcall *) (GLuint buffer, GLenum access);
		using PFNGLPROGRAMUNIFORMUI64NVPROC = void(__stdcall *) (GLuint program, GLint location, GLuint64EXT value);
		using PFNGLPROGRAMUNIFORMUI64VNVPROC = void(__stdcall *) (GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
		using PFNGLUNIFORMUI64NVPROC = void(__stdcall *) (GLint location, GLuint64EXT value);
		using PFNGLUNIFORMUI64VNVPROC = void(__stdcall *) (GLint location, GLsizei count, const GLuint64EXT* value);

		/*
			GL_NV_texture_array
		*/
		using PFNGLCOMPRESSEDTEXIMAGE3DNVPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
		using PFNGLCOMPRESSEDTEXSUBIMAGE3DNVPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
		using PFNGLCOPYTEXSUBIMAGE3DNVPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
		using PFNGLFRAMEBUFFERTEXTURELAYERNVPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
		using PFNGLTEXIMAGE3DNVPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXSUBIMAGE3DNVPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);

		/*
			GL_NV_texture_barrier
		*/
		using PFNGLTEXTUREBARRIERNVPROC = void(__stdcall *) (void);

		/*
			GL_NV_texture_multisample
		*/
		using PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC = void(__stdcall *) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
		using PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC = void(__stdcall *) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
		using PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
		using PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
		using PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
		using PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC = void(__stdcall *) (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);

		/*
			GL_NV_transform_feedback
		*/
		using PFNGLACTIVEVARYINGNVPROC = void(__stdcall *) (GLuint program, const GLchar *name);
		using PFNGLBEGINTRANSFORMFEEDBACKNVPROC = void(__stdcall *) (GLenum primitiveMode);
		using PFNGLBINDBUFFERBASENVPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer);
		using PFNGLBINDBUFFEROFFSETNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
		using PFNGLBINDBUFFERRANGENVPROC = void(__stdcall *) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
		using PFNGLENDTRANSFORMFEEDBACKNVPROC = void(__stdcall *) (void);
		using PFNGLGETACTIVEVARYINGNVPROC = void(__stdcall *) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
		using PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC = void(__stdcall *) (GLuint program, GLuint index, GLint *location);
		using PFNGLGETVARYINGLOCATIONNVPROC = GLint(__stdcall *) (GLuint program, const GLchar *name);
		using PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC = void(__stdcall *) (GLuint count, const GLint *attribs, GLenum bufferMode);
		using PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC = void(__stdcall *) (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);

		/*
			GL_NV_transform_feedback2
		*/
		using PFNGLBINDTRANSFORMFEEDBACKNVPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLDELETETRANSFORMFEEDBACKSNVPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLDRAWTRANSFORMFEEDBACKNVPROC = void(__stdcall *) (GLenum mode, GLuint id);
		using PFNGLGENTRANSFORMFEEDBACKSNVPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLISTRANSFORMFEEDBACKNVPROC = GLboolean(__stdcall *) (GLuint id);
		using PFNGLPAUSETRANSFORMFEEDBACKNVPROC = void(__stdcall *) (void);
		using PFNGLRESUMETRANSFORMFEEDBACKNVPROC = void(__stdcall *) (void);

		/*
			GL_NV_vdpau_interop
		*/
		using PFNGLVDPAUFININVPROC = void(__stdcall *) (void);
		using PFNGLVDPAUGETSURFACEIVNVPROC = void(__stdcall *) (GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei* length, GLint *values);
		using PFNGLVDPAUINITNVPROC = void(__stdcall *) (const void* vdpDevice, const void*getProcAddress);
		using PFNGLVDPAUISSURFACENVPROC = void(__stdcall *) (GLvdpauSurfaceNV surface);
		using PFNGLVDPAUMAPSURFACESNVPROC = void(__stdcall *) (GLsizei numSurfaces, const GLvdpauSurfaceNV* surfaces);
		using PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC = GLvdpauSurfaceNV(__stdcall *) (const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
		using PFNGLVDPAUREGISTERVIDEOSURFACENVPROC = GLvdpauSurfaceNV(__stdcall *) (const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
		using PFNGLVDPAUSURFACEACCESSNVPROC = void(__stdcall *) (GLvdpauSurfaceNV surface, GLenum access);
		using PFNGLVDPAUUNMAPSURFACESNVPROC = void(__stdcall *) (GLsizei numSurface, const GLvdpauSurfaceNV* surfaces);
		using PFNGLVDPAUUNREGISTERSURFACENVPROC = void(__stdcall *) (GLvdpauSurfaceNV surface);

		/*
			GL_NV_vertex_array_range
		*/
		using PFNGLFLUSHVERTEXARRAYRANGENVPROC = void(__stdcall *) (void);
		using PFNGLVERTEXARRAYRANGENVPROC = void(__stdcall *) (GLsizei length, void *pointer);

		/*
			GL_NV_vertex_attrib_integer_64bit
		*/
		using PFNGLGETVERTEXATTRIBLI64VNVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint64EXT* params);
		using PFNGLGETVERTEXATTRIBLUI64VNVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLuint64EXT* params);
		using PFNGLVERTEXATTRIBL1I64NVPROC = void(__stdcall *) (GLuint index, GLint64EXT x);
		using PFNGLVERTEXATTRIBL1I64VNVPROC = void(__stdcall *) (GLuint index, const GLint64EXT* v);
		using PFNGLVERTEXATTRIBL1UI64NVPROC = void(__stdcall *) (GLuint index, GLuint64EXT x);
		using PFNGLVERTEXATTRIBL1UI64VNVPROC = void(__stdcall *) (GLuint index, const GLuint64EXT* v);
		using PFNGLVERTEXATTRIBL2I64NVPROC = void(__stdcall *) (GLuint index, GLint64EXT x, GLint64EXT y);
		using PFNGLVERTEXATTRIBL2I64VNVPROC = void(__stdcall *) (GLuint index, const GLint64EXT* v);
		using PFNGLVERTEXATTRIBL2UI64NVPROC = void(__stdcall *) (GLuint index, GLuint64EXT x, GLuint64EXT y);
		using PFNGLVERTEXATTRIBL2UI64VNVPROC = void(__stdcall *) (GLuint index, const GLuint64EXT* v);
		using PFNGLVERTEXATTRIBL3I64NVPROC = void(__stdcall *) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
		using PFNGLVERTEXATTRIBL3I64VNVPROC = void(__stdcall *) (GLuint index, const GLint64EXT* v);
		using PFNGLVERTEXATTRIBL3UI64NVPROC = void(__stdcall *) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
		using PFNGLVERTEXATTRIBL3UI64VNVPROC = void(__stdcall *) (GLuint index, const GLuint64EXT* v);
		using PFNGLVERTEXATTRIBL4I64NVPROC = void(__stdcall *) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
		using PFNGLVERTEXATTRIBL4I64VNVPROC = void(__stdcall *) (GLuint index, const GLint64EXT* v);
		using PFNGLVERTEXATTRIBL4UI64NVPROC = void(__stdcall *) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
		using PFNGLVERTEXATTRIBL4UI64VNVPROC = void(__stdcall *) (GLuint index, const GLuint64EXT* v);
		using PFNGLVERTEXATTRIBLFORMATNVPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride);

		/*
			GL_NV_vertex_buffer_unified_memory
		*/
		using PFNGLBUFFERADDRESSRANGENVPROC = void(__stdcall *) (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
		using PFNGLCOLORFORMATNVPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride);
		using PFNGLEDGEFLAGFORMATNVPROC = void(__stdcall *) (GLsizei stride);
		using PFNGLFOGCOORDFORMATNVPROC = void(__stdcall *) (GLenum type, GLsizei stride);
		using PFNGLGETINTEGERUI64I_VNVPROC = void(__stdcall *) (GLenum value, GLuint index, GLuint64EXT result[]);
		using PFNGLINDEXFORMATNVPROC = void(__stdcall *) (GLenum type, GLsizei stride);
		using PFNGLNORMALFORMATNVPROC = void(__stdcall *) (GLenum type, GLsizei stride);
		using PFNGLSECONDARYCOLORFORMATNVPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride);
		using PFNGLTEXCOORDFORMATNVPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride);
		using PFNGLVERTEXATTRIBFORMATNVPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
		using PFNGLVERTEXATTRIBIFORMATNVPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride);
		using PFNGLVERTEXFORMATNVPROC = void(__stdcall *) (GLint size, GLenum type, GLsizei stride);

		/*
			GL_NV_vertex_program
		*/
		using PFNGLAREPROGRAMSRESIDENTNVPROC = GLboolean(__stdcall *) (GLsizei n, const GLuint* ids, GLboolean *residences);
		using PFNGLBINDPROGRAMNVPROC = void(__stdcall *) (GLenum target, GLuint id);
		using PFNGLDELETEPROGRAMSNVPROC = void(__stdcall *) (GLsizei n, const GLuint* ids);
		using PFNGLEXECUTEPROGRAMNVPROC = void(__stdcall *) (GLenum target, GLuint id, const GLfloat* params);
		using PFNGLGENPROGRAMSNVPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLGETPROGRAMPARAMETERDVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum pname, GLdouble* params);
		using PFNGLGETPROGRAMPARAMETERFVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETPROGRAMSTRINGNVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLubyte* program);
		using PFNGLGETPROGRAMIVNVPROC = void(__stdcall *) (GLuint id, GLenum pname, GLint* params);
		using PFNGLGETTRACKMATRIXIVNVPROC = void(__stdcall *) (GLenum target, GLuint address, GLenum pname, GLint* params);
		using PFNGLGETVERTEXATTRIBPOINTERVNVPROC = void(__stdcall *) (GLuint index, GLenum pname, void** pointer);
		using PFNGLGETVERTEXATTRIBDVNVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLdouble* params);
		using PFNGLGETVERTEXATTRIBFVNVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLfloat* params);
		using PFNGLGETVERTEXATTRIBIVNVPROC = void(__stdcall *) (GLuint index, GLenum pname, GLint* params);
		using PFNGLISPROGRAMNVPROC = GLboolean(__stdcall *) (GLuint id);
		using PFNGLLOADPROGRAMNVPROC = void(__stdcall *) (GLenum target, GLuint id, GLsizei len, const GLubyte* program);
		using PFNGLPROGRAMPARAMETER4DNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLPROGRAMPARAMETER4DVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLdouble* params);
		using PFNGLPROGRAMPARAMETER4FNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLPROGRAMPARAMETER4FVNVPROC = void(__stdcall *) (GLenum target, GLuint index, const GLfloat* params);
		using PFNGLPROGRAMPARAMETERS4DVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei num, const GLdouble* params);
		using PFNGLPROGRAMPARAMETERS4FVNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLsizei num, const GLfloat* params);
		using PFNGLREQUESTRESIDENTPROGRAMSNVPROC = void(__stdcall *) (GLsizei n, GLuint* ids);
		using PFNGLTRACKMATRIXNVPROC = void(__stdcall *) (GLenum target, GLuint address, GLenum matrix, GLenum transform);
		using PFNGLVERTEXATTRIB1DNVPROC = void(__stdcall *) (GLuint index, GLdouble x);
		using PFNGLVERTEXATTRIB1DVNVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB1FNVPROC = void(__stdcall *) (GLuint index, GLfloat x);
		using PFNGLVERTEXATTRIB1FVNVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB1SNVPROC = void(__stdcall *) (GLuint index, GLshort x);
		using PFNGLVERTEXATTRIB1SVNVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB2DNVPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y);
		using PFNGLVERTEXATTRIB2DVNVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB2FNVPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y);
		using PFNGLVERTEXATTRIB2FVNVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB2SNVPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y);
		using PFNGLVERTEXATTRIB2SVNVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB3DNVPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
		using PFNGLVERTEXATTRIB3DVNVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB3FNVPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLVERTEXATTRIB3FVNVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB3SNVPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z);
		using PFNGLVERTEXATTRIB3SVNVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4DNVPROC = void(__stdcall *) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
		using PFNGLVERTEXATTRIB4DVNVPROC = void(__stdcall *) (GLuint index, const GLdouble* v);
		using PFNGLVERTEXATTRIB4FNVPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLVERTEXATTRIB4FVNVPROC = void(__stdcall *) (GLuint index, const GLfloat* v);
		using PFNGLVERTEXATTRIB4SNVPROC = void(__stdcall *) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
		using PFNGLVERTEXATTRIB4SVNVPROC = void(__stdcall *) (GLuint index, const GLshort* v);
		using PFNGLVERTEXATTRIB4UBNVPROC = void(__stdcall *) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
		using PFNGLVERTEXATTRIB4UBVNVPROC = void(__stdcall *) (GLuint index, const GLubyte* v);
		using PFNGLVERTEXATTRIBPOINTERNVPROC = void(__stdcall *) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
		using PFNGLVERTEXATTRIBS1DVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLdouble* v);
		using PFNGLVERTEXATTRIBS1FVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLfloat* v);
		using PFNGLVERTEXATTRIBS1SVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLshort* v);
		using PFNGLVERTEXATTRIBS2DVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLdouble* v);
		using PFNGLVERTEXATTRIBS2FVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLfloat* v);
		using PFNGLVERTEXATTRIBS2SVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLshort* v);
		using PFNGLVERTEXATTRIBS3DVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLdouble* v);
		using PFNGLVERTEXATTRIBS3FVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLfloat* v);
		using PFNGLVERTEXATTRIBS3SVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLshort* v);
		using PFNGLVERTEXATTRIBS4DVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLdouble* v);
		using PFNGLVERTEXATTRIBS4FVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLfloat* v);
		using PFNGLVERTEXATTRIBS4SVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLshort* v);
		using PFNGLVERTEXATTRIBS4UBVNVPROC = void(__stdcall *) (GLuint index, GLsizei n, const GLubyte* v);

		/*
			GL_NV_video_capture
		*/
		using PFNGLBEGINVIDEOCAPTURENVPROC = void(__stdcall *) (GLuint video_capture_slot);
		using PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
		using PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
		using PFNGLENDVIDEOCAPTURENVPROC = void(__stdcall *) (GLuint video_capture_slot);
		using PFNGLGETVIDEOCAPTURESTREAMDVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble* params);
		using PFNGLGETVIDEOCAPTURESTREAMFVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat* params);
		using PFNGLGETVIDEOCAPTURESTREAMIVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLint* params);
		using PFNGLGETVIDEOCAPTUREIVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLenum pname, GLint* params);
		using PFNGLVIDEOCAPTURENVPROC = GLenum(__stdcall *) (GLuint video_capture_slot, GLuint* sequence_num, GLuint64EXT *capture_time);
		using PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble* params);
		using PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat* params);
		using PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC = void(__stdcall *) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint* params);

		/*
			GL_NV_viewport_array
		*/
		using PFNGLDEPTHRANGEARRAYFVNVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLfloat * v);
		using PFNGLDEPTHRANGEINDEXEDFNVPROC = void(__stdcall *) (GLuint index, GLfloat n, GLfloat f);
		using PFNGLDISABLEINVPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLENABLEINVPROC = void(__stdcall *) (GLenum target, GLuint index);
		using PFNGLGETFLOATI_VNVPROC = void(__stdcall *) (GLenum target, GLuint index, GLfloat* data);
		using PFNGLISENABLEDINVPROC = GLboolean(__stdcall *) (GLenum target, GLuint index);
		using PFNGLSCISSORARRAYVNVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLint * v);
		using PFNGLSCISSORINDEXEDNVPROC = void(__stdcall *) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
		using PFNGLSCISSORINDEXEDVNVPROC = void(__stdcall *) (GLuint index, const GLint * v);
		using PFNGLVIEWPORTARRAYVNVPROC = void(__stdcall *) (GLuint first, GLsizei count, const GLfloat * v);
		using PFNGLVIEWPORTINDEXEDFNVPROC = void(__stdcall *) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
		using PFNGLVIEWPORTINDEXEDFVNVPROC = void(__stdcall *) (GLuint index, const GLfloat * v);

		/*
			GL_NV_viewport_swizzle
		*/
		using PFNGLVIEWPORTSWIZZLENVPROC = void(__stdcall *) (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);

		/*
			GL_OVR_multiview
		*/
		using PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);

		/*
			GL_OVR_multiview_multisampled_render_to_texture
		*/
		using PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC = void(__stdcall *) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews);

		/*
			GL_QCOM_alpha_test
		*/
		using PFNGLALPHAFUNCQCOMPROC = void(__stdcall *) (GLenum func, GLclampf ref);

		/*
			GL_QCOM_driver_control
		*/
		using PFNGLDISABLEDRIVERCONTROLQCOMPROC = void(__stdcall *) (GLuint driverControl);
		using PFNGLENABLEDRIVERCONTROLQCOMPROC = void(__stdcall *) (GLuint driverControl);
		using PFNGLGETDRIVERCONTROLSTRINGQCOMPROC = void(__stdcall *) (GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar *driverControlString);
		using PFNGLGETDRIVERCONTROLSQCOMPROC = void(__stdcall *) (GLint* num, GLsizei size, GLuint *driverControls);

		/*
			GL_QCOM_extended_get
		*/
		using PFNGLEXTGETBUFFERPOINTERVQCOMPROC = void(__stdcall *) (GLenum target, void** params);
		using PFNGLEXTGETBUFFERSQCOMPROC = void(__stdcall *) (GLuint* buffers, GLint maxBuffers, GLint* numBuffers);
		using PFNGLEXTGETFRAMEBUFFERSQCOMPROC = void(__stdcall *) (GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers);
		using PFNGLEXTGETRENDERBUFFERSQCOMPROC = void(__stdcall *) (GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers);
		using PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC = void(__stdcall *) (GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params);
		using PFNGLEXTGETTEXSUBIMAGEQCOMPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels);
		using PFNGLEXTGETTEXTURESQCOMPROC = void(__stdcall *) (GLuint* textures, GLint maxTextures, GLint* numTextures);
		using PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint param);

		/*
			GL_QCOM_extended_get2
		*/
		using PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC = void(__stdcall *) (GLuint program, GLenum shadertype, GLchar* source, GLint* length);
		using PFNGLEXTGETPROGRAMSQCOMPROC = void(__stdcall *) (GLuint* programs, GLint maxPrograms, GLint* numPrograms);
		using PFNGLEXTGETSHADERSQCOMPROC = void(__stdcall *) (GLuint* shaders, GLint maxShaders, GLint* numShaders);
		using PFNGLEXTISPROGRAMBINARYQCOMPROC = GLboolean(__stdcall *) (GLuint program);

		/*
			GL_QCOM_framebuffer_foveated
		*/
		using PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC = void(__stdcall *) (GLuint fbo, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint* providedFeatures);
		using PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC = void(__stdcall *) (GLuint fbo, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);

		/*
			GL_QCOM_shader_framebuffer_fetch_noncoherent
		*/
		using PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC = void(__stdcall *) (void);

		/*
			GL_QCOM_tiled_rendering
		*/
		using PFNGLENDTILINGQCOMPROC = void(__stdcall *) (GLbitfield preserveMask);
		using PFNGLSTARTTILINGQCOMPROC = void(__stdcall *) (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);

		/*
			GL_REGAL_ES1_0_compatibility
		*/
		using PFNGLALPHAFUNCXPROC = void(__stdcall *) (GLenum func, GLclampx ref);
		using PFNGLCLEARCOLORXPROC = void(__stdcall *) (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
		using PFNGLCLEARDEPTHXPROC = void(__stdcall *) (GLclampx depth);
		using PFNGLCOLOR4XPROC = void(__stdcall *) (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
		using PFNGLDEPTHRANGEXPROC = void(__stdcall *) (GLclampx zNear, GLclampx zFar);
		using PFNGLFOGXPROC = void(__stdcall *) (GLenum pname, GLfixed param);
		using PFNGLFOGXVPROC = void(__stdcall *) (GLenum pname, const GLfixed* params);
		using PFNGLFRUSTUMFPROC = void(__stdcall *) (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
		using PFNGLFRUSTUMXPROC = void(__stdcall *) (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
		using PFNGLLIGHTMODELXPROC = void(__stdcall *) (GLenum pname, GLfixed param);
		using PFNGLLIGHTMODELXVPROC = void(__stdcall *) (GLenum pname, const GLfixed* params);
		using PFNGLLIGHTXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfixed param);
		using PFNGLLIGHTXVPROC = void(__stdcall *) (GLenum light, GLenum pname, const GLfixed* params);
		using PFNGLLINEWIDTHXPROC = void(__stdcall *) (GLfixed width);
		using PFNGLLOADMATRIXXPROC = void(__stdcall *) (const GLfixed* m);
		using PFNGLMATERIALXPROC = void(__stdcall *) (GLenum face, GLenum pname, GLfixed param);
		using PFNGLMATERIALXVPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfixed* params);
		using PFNGLMULTMATRIXXPROC = void(__stdcall *) (const GLfixed* m);
		using PFNGLMULTITEXCOORD4XPROC = void(__stdcall *) (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
		using PFNGLNORMAL3XPROC = void(__stdcall *) (GLfixed nx, GLfixed ny, GLfixed nz);
		using PFNGLORTHOFPROC = void(__stdcall *) (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
		using PFNGLORTHOXPROC = void(__stdcall *) (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
		using PFNGLPOINTSIZEXPROC = void(__stdcall *) (GLfixed size);
		using PFNGLPOLYGONOFFSETXPROC = void(__stdcall *) (GLfixed factor, GLfixed units);
		using PFNGLROTATEXPROC = void(__stdcall *) (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
		using PFNGLSAMPLECOVERAGEXPROC = void(__stdcall *) (GLclampx value, GLboolean invert);
		using PFNGLSCALEXPROC = void(__stdcall *) (GLfixed x, GLfixed y, GLfixed z);
		using PFNGLTEXENVXPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfixed param);
		using PFNGLTEXENVXVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfixed* params);
		using PFNGLTEXPARAMETERXPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfixed param);
		using PFNGLTRANSLATEXPROC = void(__stdcall *) (GLfixed x, GLfixed y, GLfixed z);

		/*
			GL_REGAL_ES1_1_compatibility
		*/
		using PFNGLCLIPPLANEFPROC = void(__stdcall *) (GLenum plane, const GLfloat* equation);
		using PFNGLCLIPPLANEXPROC = void(__stdcall *) (GLenum plane, const GLfixed* equation);
		using PFNGLGETCLIPPLANEFPROC = void(__stdcall *) (GLenum pname, GLfloat eqn[4]);
		using PFNGLGETCLIPPLANEXPROC = void(__stdcall *) (GLenum pname, GLfixed eqn[4]);
		using PFNGLGETFIXEDVPROC = void(__stdcall *) (GLenum pname, GLfixed* params);
		using PFNGLGETLIGHTXVPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfixed* params);
		using PFNGLGETMATERIALXVPROC = void(__stdcall *) (GLenum face, GLenum pname, GLfixed* params);
		using PFNGLGETTEXENVXVPROC = void(__stdcall *) (GLenum env, GLenum pname, GLfixed* params);
		using PFNGLGETTEXPARAMETERXVPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfixed* params);
		using PFNGLPOINTPARAMETERXPROC = void(__stdcall *) (GLenum pname, GLfixed param);
		using PFNGLPOINTPARAMETERXVPROC = void(__stdcall *) (GLenum pname, const GLfixed* params);
		using PFNGLPOINTSIZEPOINTEROESPROC = void(__stdcall *) (GLenum type, GLsizei stride, const void *pointer);
		using PFNGLTEXPARAMETERXVPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfixed* params);

		/*
			GL_REGAL_error_string
		*/
		using PFNGLERRORSTRINGREGALPROC = const GLchar* (__stdcall *) (GLenum error);

		/*
			GL_REGAL_extension_query
		*/
		using PFNGLGETEXTENSIONREGALPROC = GLboolean(__stdcall *) (const GLchar* ext);
		using PFNGLISSUPPORTEDREGALPROC = GLboolean(__stdcall *) (const GLchar* ext);

		/*
			GL_REGAL_log
		*/
		using GLLOGPROCREGAL = void(__stdcall *) (GLenum stream, GLsizei length, const GLchar *message, void *context);
		using PFNGLLOGMESSAGECALLBACKREGALPROC = void(__stdcall *) (GLLOGPROCREGAL callback);

		/*
			GL_REGAL_proc_address
		*/
		using PFNGLGETPROCADDRESSREGALPROC = void * (__stdcall *) (const GLchar *name);

		/*
			GL_SGIS_detail_texture
		*/
		using PFNGLDETAILTEXFUNCSGISPROC = void(__stdcall *) (GLenum target, GLsizei n, const GLfloat* points);
		using PFNGLGETDETAILTEXFUNCSGISPROC = void(__stdcall *) (GLenum target, GLfloat* points);

		/*
			GL_SGIS_fog_function
		*/
		using PFNGLFOGFUNCSGISPROC = void(__stdcall *) (GLsizei n, const GLfloat* points);
		using PFNGLGETFOGFUNCSGISPROC = void(__stdcall *) (GLfloat* points);

		/*
			GL_SGIS_multisample
		*/
		using PFNGLSAMPLEMASKSGISPROC = void(__stdcall *) (GLclampf value, GLboolean invert);
		using PFNGLSAMPLEPATTERNSGISPROC = void(__stdcall *) (GLenum pattern);

		/*
			GL_SGIS_multitexture
		*/
		using PFNGLINTERLEAVEDTEXTURECOORDSETSSGISPROC = void(__stdcall *) (GLint factor);
		using PFNGLSELECTTEXTURECOORDSETSGISPROC = void(__stdcall *) (GLenum target);
		using PFNGLSELECTTEXTURESGISPROC = void(__stdcall *) (GLenum target);
		using PFNGLSELECTTEXTURETRANSFORMSGISPROC = void(__stdcall *) (GLenum target);

		/*
			GL_SGIS_shared_multisample
		*/
		using PFNGLMULTISAMPLESUBRECTPOSSGISPROC = void(__stdcall *) (GLint x, GLint y);

		/*
			GL_SGIS_sharpen_texture
		*/
		using PFNGLGETSHARPENTEXFUNCSGISPROC = void(__stdcall *) (GLenum target, GLfloat* points);
		using PFNGLSHARPENTEXFUNCSGISPROC = void(__stdcall *) (GLenum target, GLsizei n, const GLfloat* points);

		/*
			GL_SGIS_texture4D
		*/
		using PFNGLTEXIMAGE4DSGISPROC = void(__stdcall *) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei extent, GLint border, GLenum format, GLenum type, const void *pixels);
		using PFNGLTEXSUBIMAGE4DSGISPROC = void(__stdcall *) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei extent, GLenum format, GLenum type, const void *pixels);

		/*
			GL_SGIS_texture_filter4
		*/
		using PFNGLGETTEXFILTERFUNCSGISPROC = void(__stdcall *) (GLenum target, GLenum filter, GLfloat* weights);
		using PFNGLTEXFILTERFUNCSGISPROC = void(__stdcall *) (GLenum target, GLenum filter, GLsizei n, const GLfloat* weights);

		/*
			GL_SGIX_async
		*/
		using PFNGLASYNCMARKERSGIXPROC = void(__stdcall *) (GLuint marker);
		using PFNGLDELETEASYNCMARKERSSGIXPROC = void(__stdcall *) (GLuint marker, GLsizei range);
		using PFNGLFINISHASYNCSGIXPROC = GLint(__stdcall *) (GLuint* markerp);
		using PFNGLGENASYNCMARKERSSGIXPROC = GLuint(__stdcall *) (GLsizei range);
		using PFNGLISASYNCMARKERSGIXPROC = GLboolean(__stdcall *) (GLuint marker);
		using PFNGLPOLLASYNCSGIXPROC = GLint(__stdcall *) (GLuint* markerp);

		/*
			GL_SGIX_datapipe
		*/
		using PFNGLADDRESSSPACEPROC = void(__stdcall *) (GLenum space, GLbitfield mask);
		using PFNGLDATAPIPEPROC = GLint(__stdcall *) (GLenum space);

		/*
			GL_SGIX_flush_raster
		*/
		using PFNGLFLUSHRASTERSGIXPROC = void(__stdcall *) (void);

		/*
			GL_SGIX_fog_layers
		*/
		using PFNGLFOGLAYERSSGIXPROC = void(__stdcall *) (GLsizei n, const GLfloat* points);
		using PFNGLGETFOGLAYERSSGIXPROC = void(__stdcall *) (GLfloat* points);

		/*
			GL_SGIX_fog_texture
		*/
		using PFNGLTEXTUREFOGSGIXPROC = void(__stdcall *) (GLenum pname);

		/*
			GL_SGIX_fragment_specular_lighting
		*/
		using PFNGLFRAGMENTCOLORMATERIALSGIXPROC = void(__stdcall *) (GLenum face, GLenum mode);
		using PFNGLFRAGMENTLIGHTMODELFSGIXPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLFRAGMENTLIGHTMODELFVSGIXPROC = void(__stdcall *) (GLenum pname, GLfloat* params);
		using PFNGLFRAGMENTLIGHTMODELISGIXPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLFRAGMENTLIGHTMODELIVSGIXPROC = void(__stdcall *) (GLenum pname, GLint* params);
		using PFNGLFRAGMENTLIGHTFSGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfloat param);
		using PFNGLFRAGMENTLIGHTFVSGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLfloat* params);
		using PFNGLFRAGMENTLIGHTISGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint param);
		using PFNGLFRAGMENTLIGHTIVSGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint* params);
		using PFNGLFRAGMENTMATERIALFSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat param);
		using PFNGLFRAGMENTMATERIALFVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat* params);
		using PFNGLFRAGMENTMATERIALISGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint param);
		using PFNGLFRAGMENTMATERIALIVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint* params);
		using PFNGLGETFRAGMENTLIGHTFVSGIXPROC = void(__stdcall *) (GLenum light, GLenum value, GLfloat* data);
		using PFNGLGETFRAGMENTLIGHTIVSGIXPROC = void(__stdcall *) (GLenum light, GLenum value, GLint* data);
		using PFNGLGETFRAGMENTMATERIALFVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLfloat* data);
		using PFNGLGETFRAGMENTMATERIALIVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, const GLint* data);

		/*
			GL_SGIX_framezoom
		*/
		using PFNGLFRAMEZOOMSGIXPROC = void(__stdcall *) (GLint factor);

		/*
			GL_SGIX_igloo_interface
		*/
		using PFNGLIGLOOINTERFACESGIXPROC = void(__stdcall *) (GLenum pname, void *param);

		/*
			GL_SGIX_mpeg1
		*/
		using PFNGLALLOCMPEGPREDICTORSSGIXPROC = void(__stdcall *) (GLsizei width, GLsizei height, GLsizei n, GLuint* predictors);
		using PFNGLDELETEMPEGPREDICTORSSGIXPROC = void(__stdcall *) (GLsizei n, GLuint* predictors);
		using PFNGLGENMPEGPREDICTORSSGIXPROC = void(__stdcall *) (GLsizei n, GLuint* predictors);
		using PFNGLGETMPEGPARAMETERFVSGIXPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETMPEGPARAMETERIVSGIXPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETMPEGPREDICTORSGIXPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *pixels);
		using PFNGLGETMPEGQUANTTABLEUBVPROC = void(__stdcall *) (GLenum target, GLubyte* values);
		using PFNGLISMPEGPREDICTORSGIXPROC = GLboolean(__stdcall *) (GLuint predictor);
		using PFNGLMPEGPREDICTORSGIXPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *pixels);
		using PFNGLMPEGQUANTTABLEUBVPROC = void(__stdcall *) (GLenum target, GLubyte* values);
		using PFNGLSWAPMPEGPREDICTORSSGIXPROC = void(__stdcall *) (GLenum target0, GLenum target1);

		/*
			GL_SGIX_nonlinear_lighting_pervertex
		*/
		using PFNGLGETNONLINLIGHTFVSGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint* terms, GLfloat *data);
		using PFNGLGETNONLINMATERIALFVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, GLint* terms, const GLfloat *data);
		using PFNGLNONLINLIGHTFVSGIXPROC = void(__stdcall *) (GLenum light, GLenum pname, GLint terms, GLfloat* params);
		using PFNGLNONLINMATERIALFVSGIXPROC = void(__stdcall *) (GLenum face, GLenum pname, GLint terms, const GLfloat* params);

		/*
			GL_SGIX_pixel_texture
		*/
		using PFNGLPIXELTEXGENSGIXPROC = void(__stdcall *) (GLenum mode);

		/*
			GL_SGIX_polynomial_ffd
		*/
		using PFNGLDEFORMSGIXPROC = void(__stdcall *) (GLbitfield mask);
		using PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC = void(__stdcall *) (GLbitfield mask);

		/*
			GL_SGIX_quad_mesh
		*/
		using PFNGLMESHBREADTHSGIXPROC = void(__stdcall *) (GLint breadth);
		using PFNGLMESHSTRIDESGIXPROC = void(__stdcall *) (GLint stride);

		/*
			GL_SGIX_reference_plane
		*/
		using PFNGLREFERENCEPLANESGIXPROC = void(__stdcall *) (const GLdouble* equation);

		/*
			GL_SGIX_sprite
		*/
		using PFNGLSPRITEPARAMETERFSGIXPROC = void(__stdcall *) (GLenum pname, GLfloat param);
		using PFNGLSPRITEPARAMETERFVSGIXPROC = void(__stdcall *) (GLenum pname, GLfloat* params);
		using PFNGLSPRITEPARAMETERISGIXPROC = void(__stdcall *) (GLenum pname, GLint param);
		using PFNGLSPRITEPARAMETERIVSGIXPROC = void(__stdcall *) (GLenum pname, GLint* params);

		/*
			GL_SGIX_tag_sample_buffer
		*/
		using PFNGLTAGSAMPLEBUFFERSGIXPROC = void(__stdcall *) (void);

		/*
			GL_SGIX_vector_ops
		*/
		using PFNGLGETVECTOROPERATIONSGIXPROC = void(__stdcall *) (GLenum operation);
		using PFNGLVECTOROPERATIONSGIXPROC = void(__stdcall *) (GLenum operation);

		/*
			GL_SGIX_vertex_array_object
		*/
		using PFNGLAREVERTEXARRAYSRESIDENTSGIXPROC = GLboolean(__stdcall *) (GLsizei n, const GLuint* arrays, GLboolean* residences);
		using PFNGLBINDVERTEXARRAYSGIXPROC = void(__stdcall *) (GLuint array);
		using PFNGLDELETEVERTEXARRAYSSGIXPROC = void(__stdcall *) (GLsizei n, const GLuint* arrays);
		using PFNGLGENVERTEXARRAYSSGIXPROC = void(__stdcall *) (GLsizei n, GLuint* arrays);
		using PFNGLISVERTEXARRAYSGIXPROC = GLboolean(__stdcall *) (GLuint array);
		using PFNGLPRIORITIZEVERTEXARRAYSSGIXPROC = void(__stdcall *) (GLsizei n, const GLuint* arrays, const GLclampf* priorities);

		/*
			GL_SGI_color_table
		*/
		using PFNGLCOLORTABLEPARAMETERFVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLCOLORTABLEPARAMETERIVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLCOLORTABLESGIPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
		using PFNGLCOPYCOLORTABLESGIPROC = void(__stdcall *) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
		using PFNGLGETCOLORTABLEPARAMETERFVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETCOLORTABLEPARAMETERIVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLGETCOLORTABLESGIPROC = void(__stdcall *) (GLenum target, GLenum format, GLenum type, void *table);

		/*
			GL_SGI_fft
		*/
		using PFNGLGETPIXELTRANSFORMPARAMETERFVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat* params);
		using PFNGLGETPIXELTRANSFORMPARAMETERIVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint* params);
		using PFNGLPIXELTRANSFORMPARAMETERFSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLfloat param);
		using PFNGLPIXELTRANSFORMPARAMETERFVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLfloat* params);
		using PFNGLPIXELTRANSFORMPARAMETERISGIPROC = void(__stdcall *) (GLenum target, GLenum pname, GLint param);
		using PFNGLPIXELTRANSFORMPARAMETERIVSGIPROC = void(__stdcall *) (GLenum target, GLenum pname, const GLint* params);
		using PFNGLPIXELTRANSFORMSGIPROC = void(__stdcall *) (GLenum target);

		/*
			GL_SUNX_constant_data
		*/
		using PFNGLFINISHTEXTURESUNXPROC = void(__stdcall *) (void);

		/*
			GL_SUN_global_alpha
		*/
		using PFNGLGLOBALALPHAFACTORBSUNPROC = void(__stdcall *) (GLbyte factor);
		using PFNGLGLOBALALPHAFACTORDSUNPROC = void(__stdcall *) (GLdouble factor);
		using PFNGLGLOBALALPHAFACTORFSUNPROC = void(__stdcall *) (GLfloat factor);
		using PFNGLGLOBALALPHAFACTORISUNPROC = void(__stdcall *) (GLint factor);
		using PFNGLGLOBALALPHAFACTORSSUNPROC = void(__stdcall *) (GLshort factor);
		using PFNGLGLOBALALPHAFACTORUBSUNPROC = void(__stdcall *) (GLubyte factor);
		using PFNGLGLOBALALPHAFACTORUISUNPROC = void(__stdcall *) (GLuint factor);
		using PFNGLGLOBALALPHAFACTORUSSUNPROC = void(__stdcall *) (GLushort factor);

		/*
			GL_SUN_read_video_pixels
		*/
		using PFNGLREADVIDEOPIXELSSUNPROC = void(__stdcall *) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);

		/*
			GL_SUN_triangle_list
		*/
		using PFNGLREPLACEMENTCODEPOINTERSUNPROC = void(__stdcall *) (GLenum type, GLsizei stride, const void *pointer);
		using PFNGLREPLACEMENTCODEUBSUNPROC = void(__stdcall *) (GLubyte code);
		using PFNGLREPLACEMENTCODEUBVSUNPROC = void(__stdcall *) (const GLubyte* code);
		using PFNGLREPLACEMENTCODEUISUNPROC = void(__stdcall *) (GLuint code);
		using PFNGLREPLACEMENTCODEUIVSUNPROC = void(__stdcall *) (const GLuint* code);
		using PFNGLREPLACEMENTCODEUSSUNPROC = void(__stdcall *) (GLushort code);
		using PFNGLREPLACEMENTCODEUSVSUNPROC = void(__stdcall *) (const GLushort* code);

		/*
			GL_SUN_vertex
		*/
		using PFNGLCOLOR3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLCOLOR3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* c, const GLfloat *v);
		using PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* c, const GLfloat *n, const GLfloat *v);
		using PFNGLCOLOR4UBVERTEX2FSUNPROC = void(__stdcall *) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
		using PFNGLCOLOR4UBVERTEX2FVSUNPROC = void(__stdcall *) (const GLubyte* c, const GLfloat *v);
		using PFNGLCOLOR4UBVERTEX3FSUNPROC = void(__stdcall *) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLCOLOR4UBVERTEX3FVSUNPROC = void(__stdcall *) (const GLubyte* c, const GLfloat *v);
		using PFNGLNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* n, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *c, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLubyte *c, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *n, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *tc, const GLfloat *v);
		using PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC = void(__stdcall *) (GLuint rc, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC = void(__stdcall *) (const GLuint* rc, const GLfloat *v);
		using PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *c, const GLfloat *v);
		using PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
		using PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLubyte *c, const GLfloat *v);
		using PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *n, const GLfloat *v);
		using PFNGLTEXCOORD2FVERTEX3FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
		using PFNGLTEXCOORD2FVERTEX3FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *v);
		using PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
		using PFNGLTEXCOORD4FVERTEX4FSUNPROC = void(__stdcall *) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
		using PFNGLTEXCOORD4FVERTEX4FVSUNPROC = void(__stdcall *) (const GLfloat* tc, const GLfloat *v);

		/*
			GL_WIN_swap_hint
		*/
		using PFNGLADDSWAPHINTRECTWINPROC = void(__stdcall *) (GLint x, GLint y, GLsizei width, GLsizei height);

	public:
		/*
			GL_VERSION_1_2
		*/
		PFNGLCOPYTEXSUBIMAGE3DPROC											glCopyTexSubImage3D;
		PFNGLDRAWRANGEELEMENTSPROC											glDrawRangeElements;
		PFNGLTEXIMAGE3DPROC													glTexImage3D;
		PFNGLTEXSUBIMAGE3DPROC												glTexSubImage3D;

		/*
			GL_VERSION_1_3
		*/
		PFNGLACTIVETEXTUREPROC												glActiveTexture;
		PFNGLCLIENTACTIVETEXTUREPROC										glClientActiveTexture;
		PFNGLCOMPRESSEDTEXIMAGE1DPROC										glCompressedTexImage1D;
		PFNGLCOMPRESSEDTEXIMAGE2DPROC										glCompressedTexImage2D;
		PFNGLCOMPRESSEDTEXIMAGE3DPROC										glCompressedTexImage3D;
		PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC									glCompressedTexSubImage1D;
		PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC									glCompressedTexSubImage2D;
		PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC									glCompressedTexSubImage3D;
		PFNGLGETCOMPRESSEDTEXIMAGEPROC										glGetCompressedTexImage;
		PFNGLLOADTRANSPOSEMATRIXDPROC										glLoadTransposeMatrixd;
		PFNGLLOADTRANSPOSEMATRIXFPROC										glLoadTransposeMatrixf;
		PFNGLMULTTRANSPOSEMATRIXDPROC										glMultTransposeMatrixd;
		PFNGLMULTTRANSPOSEMATRIXFPROC										glMultTransposeMatrixf;
		PFNGLMULTITEXCOORD1DPROC											glMultiTexCoord1d;
		PFNGLMULTITEXCOORD1DVPROC											glMultiTexCoord1dv;
		PFNGLMULTITEXCOORD1FPROC											glMultiTexCoord1f;
		PFNGLMULTITEXCOORD1FVPROC											glMultiTexCoord1fv;
		PFNGLMULTITEXCOORD1IPROC											glMultiTexCoord1i;
		PFNGLMULTITEXCOORD1IVPROC											glMultiTexCoord1iv;
		PFNGLMULTITEXCOORD1SPROC											glMultiTexCoord1s;
		PFNGLMULTITEXCOORD1SVPROC											glMultiTexCoord1sv;
		PFNGLMULTITEXCOORD2DPROC											glMultiTexCoord2d;
		PFNGLMULTITEXCOORD2DVPROC											glMultiTexCoord2dv;
		PFNGLMULTITEXCOORD2FPROC											glMultiTexCoord2f;
		PFNGLMULTITEXCOORD2FVPROC											glMultiTexCoord2fv;
		PFNGLMULTITEXCOORD2IPROC											glMultiTexCoord2i;
		PFNGLMULTITEXCOORD2IVPROC											glMultiTexCoord2iv;
		PFNGLMULTITEXCOORD2SPROC											glMultiTexCoord2s;
		PFNGLMULTITEXCOORD2SVPROC											glMultiTexCoord2sv;
		PFNGLMULTITEXCOORD3DPROC											glMultiTexCoord3d;
		PFNGLMULTITEXCOORD3DVPROC											glMultiTexCoord3dv;
		PFNGLMULTITEXCOORD3FPROC											glMultiTexCoord3f;
		PFNGLMULTITEXCOORD3FVPROC											glMultiTexCoord3fv;
		PFNGLMULTITEXCOORD3IPROC											glMultiTexCoord3i;
		PFNGLMULTITEXCOORD3IVPROC											glMultiTexCoord3iv;
		PFNGLMULTITEXCOORD3SPROC											glMultiTexCoord3s;
		PFNGLMULTITEXCOORD3SVPROC											glMultiTexCoord3sv;
		PFNGLMULTITEXCOORD4DPROC											glMultiTexCoord4d;
		PFNGLMULTITEXCOORD4DVPROC											glMultiTexCoord4dv;
		PFNGLMULTITEXCOORD4FPROC											glMultiTexCoord4f;
		PFNGLMULTITEXCOORD4FVPROC											glMultiTexCoord4fv;
		PFNGLMULTITEXCOORD4IPROC											glMultiTexCoord4i;
		PFNGLMULTITEXCOORD4IVPROC											glMultiTexCoord4iv;
		PFNGLMULTITEXCOORD4SPROC											glMultiTexCoord4s;
		PFNGLMULTITEXCOORD4SVPROC											glMultiTexCoord4sv;
		PFNGLSAMPLECOVERAGEPROC												glSampleCoverage;

		/*
			GL_VERSION_1_4
		*/
		PFNGLBLENDCOLORPROC													glBlendColor;
		PFNGLBLENDEQUATIONPROC												glBlendEquation;
		PFNGLBLENDFUNCSEPARATEPROC											glBlendFuncSeparate;
		PFNGLFOGCOORDPOINTERPROC											glFogCoordPointer;
		PFNGLFOGCOORDDPROC													glFogCoordd;
		PFNGLFOGCOORDDVPROC													glFogCoorddv;
		PFNGLFOGCOORDFPROC													glFogCoordf;
		PFNGLFOGCOORDFVPROC													glFogCoordfv;
		PFNGLMULTIDRAWARRAYSPROC											glMultiDrawArrays;
		PFNGLMULTIDRAWELEMENTSPROC											glMultiDrawElements;
		PFNGLPOINTPARAMETERFPROC											glPointParameterf;
		PFNGLPOINTPARAMETERFVPROC											glPointParameterfv;
		PFNGLPOINTPARAMETERIPROC											glPointParameteri;
		PFNGLPOINTPARAMETERIVPROC											glPointParameteriv;
		PFNGLSECONDARYCOLOR3BPROC											glSecondaryColor3b;
		PFNGLSECONDARYCOLOR3BVPROC											glSecondaryColor3bv;
		PFNGLSECONDARYCOLOR3DPROC											glSecondaryColor3d;
		PFNGLSECONDARYCOLOR3DVPROC											glSecondaryColor3dv;
		PFNGLSECONDARYCOLOR3FPROC											glSecondaryColor3f;
		PFNGLSECONDARYCOLOR3FVPROC											glSecondaryColor3fv;
		PFNGLSECONDARYCOLOR3IPROC											glSecondaryColor3i;
		PFNGLSECONDARYCOLOR3IVPROC											glSecondaryColor3iv;
		PFNGLSECONDARYCOLOR3SPROC											glSecondaryColor3s;
		PFNGLSECONDARYCOLOR3SVPROC											glSecondaryColor3sv;
		PFNGLSECONDARYCOLOR3UBPROC											glSecondaryColor3ub;
		PFNGLSECONDARYCOLOR3UBVPROC											glSecondaryColor3ubv;
		PFNGLSECONDARYCOLOR3UIPROC											glSecondaryColor3ui;
		PFNGLSECONDARYCOLOR3UIVPROC											glSecondaryColor3uiv;
		PFNGLSECONDARYCOLOR3USPROC											glSecondaryColor3us;
		PFNGLSECONDARYCOLOR3USVPROC											glSecondaryColor3usv;
		PFNGLSECONDARYCOLORPOINTERPROC										glSecondaryColorPointer;
		PFNGLWINDOWPOS2DPROC												glWindowPos2d;
		PFNGLWINDOWPOS2DVPROC												glWindowPos2dv;
		PFNGLWINDOWPOS2FPROC												glWindowPos2f;
		PFNGLWINDOWPOS2FVPROC												glWindowPos2fv;
		PFNGLWINDOWPOS2IPROC												glWindowPos2i;
		PFNGLWINDOWPOS2IVPROC												glWindowPos2iv;
		PFNGLWINDOWPOS2SPROC												glWindowPos2s;
		PFNGLWINDOWPOS2SVPROC												glWindowPos2sv;
		PFNGLWINDOWPOS3DPROC												glWindowPos3d;
		PFNGLWINDOWPOS3DVPROC												glWindowPos3dv;
		PFNGLWINDOWPOS3FPROC												glWindowPos3f;
		PFNGLWINDOWPOS3FVPROC												glWindowPos3fv;
		PFNGLWINDOWPOS3IPROC												glWindowPos3i;
		PFNGLWINDOWPOS3IVPROC												glWindowPos3iv;
		PFNGLWINDOWPOS3SPROC												glWindowPos3s;
		PFNGLWINDOWPOS3SVPROC												glWindowPos3sv;

		/*
			GL_VERSION_1_5
		*/
		PFNGLBEGINQUERYPROC													glBeginQuery;
		PFNGLBINDBUFFERPROC													glBindBuffer;
		PFNGLBUFFERDATAPROC													glBufferData;
		PFNGLBUFFERSUBDATAPROC												glBufferSubData;
		PFNGLDELETEBUFFERSPROC												glDeleteBuffers;
		PFNGLDELETEQUERIESPROC												glDeleteQueries;
		PFNGLENDQUERYPROC													glEndQuery;
		PFNGLGENBUFFERSPROC													glGenBuffers;
		PFNGLGENQUERIESPROC													glGenQueries;
		PFNGLGETBUFFERPARAMETERIVPROC										glGetBufferParameteriv;
		PFNGLGETBUFFERPOINTERVPROC											glGetBufferPointerv;
		PFNGLGETBUFFERSUBDATAPROC											glGetBufferSubData;
		PFNGLGETQUERYOBJECTIVPROC											glGetQueryObjectiv;
		PFNGLGETQUERYOBJECTUIVPROC											glGetQueryObjectuiv;
		PFNGLGETQUERYIVPROC													glGetQueryiv;
		PFNGLISBUFFERPROC													glIsBuffer;
		PFNGLISQUERYPROC													glIsQuery;
		PFNGLMAPBUFFERPROC													glMapBuffer;
		PFNGLUNMAPBUFFERPROC												glUnmapBuffer;

		/*
			GL_VERSION_2_0
		*/
		PFNGLATTACHSHADERPROC												glAttachShader;
		PFNGLBINDATTRIBLOCATIONPROC											glBindAttribLocation;
		PFNGLBLENDEQUATIONSEPARATEPROC										glBlendEquationSeparate;
		PFNGLCOMPILESHADERPROC												glCompileShader;
		PFNGLCREATEPROGRAMPROC												glCreateProgram;
		PFNGLCREATESHADERPROC												glCreateShader;
		PFNGLDELETEPROGRAMPROC												glDeleteProgram;
		PFNGLDELETESHADERPROC												glDeleteShader;
		PFNGLDETACHSHADERPROC												glDetachShader;
		PFNGLDISABLEVERTEXATTRIBARRAYPROC									glDisableVertexAttribArray;
		PFNGLDRAWBUFFERSPROC												glDrawBuffers;
		PFNGLENABLEVERTEXATTRIBARRAYPROC									glEnableVertexAttribArray;
		PFNGLGETACTIVEATTRIBPROC											glGetActiveAttrib;
		PFNGLGETACTIVEUNIFORMPROC											glGetActiveUniform;
		PFNGLGETATTACHEDSHADERSPROC											glGetAttachedShaders;
		PFNGLGETATTRIBLOCATIONPROC											glGetAttribLocation;
		PFNGLGETPROGRAMINFOLOGPROC											glGetProgramInfoLog;
		PFNGLGETPROGRAMIVPROC												glGetProgramiv;
		PFNGLGETSHADERINFOLOGPROC											glGetShaderInfoLog;
		PFNGLGETSHADERSOURCEPROC											glGetShaderSource;
		PFNGLGETSHADERIVPROC												glGetShaderiv;
		PFNGLGETUNIFORMLOCATIONPROC											glGetUniformLocation;
		PFNGLGETUNIFORMFVPROC												glGetUniformfv;
		PFNGLGETUNIFORMIVPROC												glGetUniformiv;
		PFNGLGETVERTEXATTRIBPOINTERVPROC									glGetVertexAttribPointerv;
		PFNGLGETVERTEXATTRIBDVPROC											glGetVertexAttribdv;
		PFNGLGETVERTEXATTRIBFVPROC											glGetVertexAttribfv;
		PFNGLGETVERTEXATTRIBIVPROC											glGetVertexAttribiv;
		PFNGLISPROGRAMPROC													glIsProgram;
		PFNGLISSHADERPROC													glIsShader;
		PFNGLLINKPROGRAMPROC												glLinkProgram;
		PFNGLSHADERSOURCEPROC												glShaderSource;
		PFNGLSTENCILFUNCSEPARATEPROC										glStencilFuncSeparate;
		PFNGLSTENCILMASKSEPARATEPROC										glStencilMaskSeparate;
		PFNGLSTENCILOPSEPARATEPROC											glStencilOpSeparate;
		PFNGLUNIFORM1FPROC													glUniform1f;
		PFNGLUNIFORM1FVPROC													glUniform1fv;
		PFNGLUNIFORM1IPROC													glUniform1i;
		PFNGLUNIFORM1IVPROC													glUniform1iv;
		PFNGLUNIFORM2FPROC													glUniform2f;
		PFNGLUNIFORM2FVPROC													glUniform2fv;
		PFNGLUNIFORM2IPROC													glUniform2i;
		PFNGLUNIFORM2IVPROC													glUniform2iv;
		PFNGLUNIFORM3FPROC													glUniform3f;
		PFNGLUNIFORM3FVPROC													glUniform3fv;
		PFNGLUNIFORM3IPROC													glUniform3i;
		PFNGLUNIFORM3IVPROC													glUniform3iv;
		PFNGLUNIFORM4FPROC													glUniform4f;
		PFNGLUNIFORM4FVPROC													glUniform4fv;
		PFNGLUNIFORM4IPROC													glUniform4i;
		PFNGLUNIFORM4IVPROC													glUniform4iv;
		PFNGLUNIFORMMATRIX2FVPROC											glUniformMatrix2fv;
		PFNGLUNIFORMMATRIX3FVPROC											glUniformMatrix3fv;
		PFNGLUNIFORMMATRIX4FVPROC											glUniformMatrix4fv;
		PFNGLUSEPROGRAMPROC													glUseProgram;
		PFNGLVALIDATEPROGRAMPROC											glValidateProgram;
		PFNGLVERTEXATTRIB1DPROC												glVertexAttrib1d;
		PFNGLVERTEXATTRIB1DVPROC											glVertexAttrib1dv;
		PFNGLVERTEXATTRIB1FPROC												glVertexAttrib1f;
		PFNGLVERTEXATTRIB1FVPROC											glVertexAttrib1fv;
		PFNGLVERTEXATTRIB1SPROC												glVertexAttrib1s;
		PFNGLVERTEXATTRIB1SVPROC											glVertexAttrib1sv;
		PFNGLVERTEXATTRIB2DPROC												glVertexAttrib2d;
		PFNGLVERTEXATTRIB2DVPROC											glVertexAttrib2dv;
		PFNGLVERTEXATTRIB2FPROC												glVertexAttrib2f;
		PFNGLVERTEXATTRIB2FVPROC											glVertexAttrib2fv;
		PFNGLVERTEXATTRIB2SPROC												glVertexAttrib2s;
		PFNGLVERTEXATTRIB2SVPROC											glVertexAttrib2sv;
		PFNGLVERTEXATTRIB3DPROC												glVertexAttrib3d;
		PFNGLVERTEXATTRIB3DVPROC											glVertexAttrib3dv;
		PFNGLVERTEXATTRIB3FPROC												glVertexAttrib3f;
		PFNGLVERTEXATTRIB3FVPROC											glVertexAttrib3fv;
		PFNGLVERTEXATTRIB3SPROC												glVertexAttrib3s;
		PFNGLVERTEXATTRIB3SVPROC											glVertexAttrib3sv;
		PFNGLVERTEXATTRIB4NBVPROC											glVertexAttrib4Nbv;
		PFNGLVERTEXATTRIB4NIVPROC											glVertexAttrib4Niv;
		PFNGLVERTEXATTRIB4NSVPROC											glVertexAttrib4Nsv;
		PFNGLVERTEXATTRIB4NUBPROC											glVertexAttrib4Nub;
		PFNGLVERTEXATTRIB4NUBVPROC											glVertexAttrib4Nubv;
		PFNGLVERTEXATTRIB4NUIVPROC											glVertexAttrib4Nuiv;
		PFNGLVERTEXATTRIB4NUSVPROC											glVertexAttrib4Nusv;
		PFNGLVERTEXATTRIB4BVPROC											glVertexAttrib4bv;
		PFNGLVERTEXATTRIB4DPROC												glVertexAttrib4d;
		PFNGLVERTEXATTRIB4DVPROC											glVertexAttrib4dv;
		PFNGLVERTEXATTRIB4FPROC												glVertexAttrib4f;
		PFNGLVERTEXATTRIB4FVPROC											glVertexAttrib4fv;
		PFNGLVERTEXATTRIB4IVPROC											glVertexAttrib4iv;
		PFNGLVERTEXATTRIB4SPROC												glVertexAttrib4s;
		PFNGLVERTEXATTRIB4SVPROC											glVertexAttrib4sv;
		PFNGLVERTEXATTRIB4UBVPROC											glVertexAttrib4ubv;
		PFNGLVERTEXATTRIB4UIVPROC											glVertexAttrib4uiv;
		PFNGLVERTEXATTRIB4USVPROC											glVertexAttrib4usv;
		PFNGLVERTEXATTRIBPOINTERPROC										glVertexAttribPointer;

		/*
			GL_VERSION_2_1
		*/
		PFNGLUNIFORMMATRIX2X3FVPROC											glUniformMatrix2x3fv;
		PFNGLUNIFORMMATRIX2X4FVPROC											glUniformMatrix2x4fv;
		PFNGLUNIFORMMATRIX3X2FVPROC											glUniformMatrix3x2fv;
		PFNGLUNIFORMMATRIX3X4FVPROC											glUniformMatrix3x4fv;
		PFNGLUNIFORMMATRIX4X2FVPROC											glUniformMatrix4x2fv;
		PFNGLUNIFORMMATRIX4X3FVPROC											glUniformMatrix4x3fv;

		/*
			GL_VERSION_3_0
		*/
		PFNGLBEGINCONDITIONALRENDERPROC										glBeginConditionalRender;
		PFNGLBEGINTRANSFORMFEEDBACKPROC										glBeginTransformFeedback;
		PFNGLBINDFRAGDATALOCATIONPROC										glBindFragDataLocation;
		PFNGLCLAMPCOLORPROC													glClampColor;
		PFNGLCLEARBUFFERFIPROC												glClearBufferfi;
		PFNGLCLEARBUFFERFVPROC												glClearBufferfv;
		PFNGLCLEARBUFFERIVPROC												glClearBufferiv;
		PFNGLCLEARBUFFERUIVPROC												glClearBufferuiv;
		PFNGLCOLORMASKIPROC													glColorMaski;
		PFNGLDISABLEIPROC													glDisablei;
		PFNGLENABLEIPROC													glEnablei;
		PFNGLENDCONDITIONALRENDERPROC										glEndConditionalRender;
		PFNGLENDTRANSFORMFEEDBACKPROC										glEndTransformFeedback;
		PFNGLGETBOOLEANI_VPROC												glGetBooleani_v;
		PFNGLGETFRAGDATALOCATIONPROC										glGetFragDataLocation;
		PFNGLGETSTRINGIPROC													glGetStringi;
		PFNGLGETTEXPARAMETERIIVPROC											glGetTexParameterIiv;
		PFNGLGETTEXPARAMETERIUIVPROC										glGetTexParameterIuiv;
		PFNGLGETTRANSFORMFEEDBACKVARYINGPROC								glGetTransformFeedbackVarying;
		PFNGLGETUNIFORMUIVPROC												glGetUniformuiv;
		PFNGLGETVERTEXATTRIBIIVPROC											glGetVertexAttribIiv;
		PFNGLGETVERTEXATTRIBIUIVPROC										glGetVertexAttribIuiv;
		PFNGLISENABLEDIPROC													glIsEnabledi;
		PFNGLTEXPARAMETERIIVPROC											glTexParameterIiv;
		PFNGLTEXPARAMETERIUIVPROC											glTexParameterIuiv;
		PFNGLTRANSFORMFEEDBACKVARYINGSPROC									glTransformFeedbackVaryings;
		PFNGLUNIFORM1UIPROC													glUniform1ui;
		PFNGLUNIFORM1UIVPROC												glUniform1uiv;
		PFNGLUNIFORM2UIPROC													glUniform2ui;
		PFNGLUNIFORM2UIVPROC												glUniform2uiv;
		PFNGLUNIFORM3UIPROC													glUniform3ui;
		PFNGLUNIFORM3UIVPROC												glUniform3uiv;
		PFNGLUNIFORM4UIPROC													glUniform4ui;
		PFNGLUNIFORM4UIVPROC												glUniform4uiv;
		PFNGLVERTEXATTRIBI1IPROC											glVertexAttribI1i;
		PFNGLVERTEXATTRIBI1IVPROC											glVertexAttribI1iv;
		PFNGLVERTEXATTRIBI1UIPROC											glVertexAttribI1ui;
		PFNGLVERTEXATTRIBI1UIVPROC											glVertexAttribI1uiv;
		PFNGLVERTEXATTRIBI2IPROC											glVertexAttribI2i;
		PFNGLVERTEXATTRIBI2IVPROC											glVertexAttribI2iv;
		PFNGLVERTEXATTRIBI2UIPROC											glVertexAttribI2ui;
		PFNGLVERTEXATTRIBI2UIVPROC											glVertexAttribI2uiv;
		PFNGLVERTEXATTRIBI3IPROC											glVertexAttribI3i;
		PFNGLVERTEXATTRIBI3IVPROC											glVertexAttribI3iv;
		PFNGLVERTEXATTRIBI3UIPROC											glVertexAttribI3ui;
		PFNGLVERTEXATTRIBI3UIVPROC											glVertexAttribI3uiv;
		PFNGLVERTEXATTRIBI4BVPROC											glVertexAttribI4bv;
		PFNGLVERTEXATTRIBI4IPROC											glVertexAttribI4i;
		PFNGLVERTEXATTRIBI4IVPROC											glVertexAttribI4iv;
		PFNGLVERTEXATTRIBI4SVPROC											glVertexAttribI4sv;
		PFNGLVERTEXATTRIBI4UBVPROC											glVertexAttribI4ubv;
		PFNGLVERTEXATTRIBI4UIPROC											glVertexAttribI4ui;
		PFNGLVERTEXATTRIBI4UIVPROC											glVertexAttribI4uiv;
		PFNGLVERTEXATTRIBI4USVPROC											glVertexAttribI4usv;
		PFNGLVERTEXATTRIBIPOINTERPROC										glVertexAttribIPointer;

		/*
			GL_VERSION_3_1
		*/
		PFNGLDRAWARRAYSINSTANCEDPROC										glDrawArraysInstanced;
		PFNGLDRAWELEMENTSINSTANCEDPROC										glDrawElementsInstanced;
		PFNGLPRIMITIVERESTARTINDEXPROC										glPrimitiveRestartIndex;
		PFNGLTEXBUFFERPROC													glTexBuffer;

		/*
			GL_VERSION_3_2
		*/
		PFNGLFRAMEBUFFERTEXTUREPROC											glFramebufferTexture;
		PFNGLGETBUFFERPARAMETERI64VPROC										glGetBufferParameteri64v;
		PFNGLGETINTEGER64I_VPROC											glGetInteger64i_v;

		/*
			GL_VERSION_3_3
		*/
		PFNGLVERTEXATTRIBDIVISORPROC										glVertexAttribDivisor;

		/*
			GL_VERSION_4_0
		*/
		PFNGLBLENDEQUATIONSEPARATEIPROC										glBlendEquationSeparatei;
		PFNGLBLENDEQUATIONIPROC												glBlendEquationi;
		PFNGLBLENDFUNCSEPARATEIPROC											glBlendFuncSeparatei;
		PFNGLBLENDFUNCIPROC													glBlendFunci;
		PFNGLMINSAMPLESHADINGPROC											glMinSampleShading;

		/*
			GL_VERSION_4_5
		*/
		PFNGLGETGRAPHICSRESETSTATUSPROC										glGetGraphicsResetStatus;
		PFNGLGETNCOMPRESSEDTEXIMAGEPROC										glGetnCompressedTexImage;
		PFNGLGETNTEXIMAGEPROC												glGetnTexImage;
		PFNGLGETNUNIFORMDVPROC												glGetnUniformdv;

		/*
			GL_VERSION_4_6
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC								glMultiDrawArraysIndirectCount;
		PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC								glMultiDrawElementsIndirectCount;
		PFNGLSPECIALIZESHADERPROC											glSpecializeShader;

		/*
			GL_3DFX_tbuffer
		*/
		PFNGLTBUFFERMASK3DFXPROC											glTbufferMask3DFX;

		/*
			GL_AMD_debug_output
		*/
		PFNGLDEBUGMESSAGECALLBACKAMDPROC									glDebugMessageCallbackAMD;
		PFNGLDEBUGMESSAGEENABLEAMDPROC										glDebugMessageEnableAMD;
		PFNGLDEBUGMESSAGEINSERTAMDPROC										glDebugMessageInsertAMD;
		PFNGLGETDEBUGMESSAGELOGAMDPROC										glGetDebugMessageLogAMD;

		/*
			GL_AMD_draw_buffers_blend
		*/
		PFNGLBLENDEQUATIONINDEXEDAMDPROC									glBlendEquationIndexedAMD;
		PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC							glBlendEquationSeparateIndexedAMD;
		PFNGLBLENDFUNCINDEXEDAMDPROC										glBlendFuncIndexedAMD;
		PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC								glBlendFuncSeparateIndexedAMD;

		/*
			GL_AMD_framebuffer_sample_positions
		*/
		PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC							glFramebufferSamplePositionsfvAMD;
		PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC								glGetFramebufferParameterfvAMD;
		PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC							glGetNamedFramebufferParameterfvAMD;
		PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC						glNamedFramebufferSamplePositionsfvAMD;

		/*
			GL_AMD_interleaved_elements
		*/
		PFNGLVERTEXATTRIBPARAMETERIAMDPROC									glVertexAttribParameteriAMD;

		/*
			GL_AMD_multi_draw_indirect
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC									glMultiDrawArraysIndirectAMD;
		PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC								glMultiDrawElementsIndirectAMD;

		/*
			GL_AMD_name_gen_delete
		*/
		PFNGLDELETENAMESAMDPROC												glDeleteNamesAMD;
		PFNGLGENNAMESAMDPROC												glGenNamesAMD;
		PFNGLISNAMEAMDPROC													glIsNameAMD;

		/*
			GL_AMD_occlusion_query_event
		*/
		PFNGLQUERYOBJECTPARAMETERUIAMDPROC									glQueryObjectParameteruiAMD;

		/*
			GL_AMD_performance_monitor
		*/
		PFNGLBEGINPERFMONITORAMDPROC										glBeginPerfMonitorAMD;
		PFNGLDELETEPERFMONITORSAMDPROC										glDeletePerfMonitorsAMD;
		PFNGLENDPERFMONITORAMDPROC											glEndPerfMonitorAMD;
		PFNGLGENPERFMONITORSAMDPROC											glGenPerfMonitorsAMD;
		PFNGLGETPERFMONITORCOUNTERDATAAMDPROC								glGetPerfMonitorCounterDataAMD;
		PFNGLGETPERFMONITORCOUNTERINFOAMDPROC								glGetPerfMonitorCounterInfoAMD;
		PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC								glGetPerfMonitorCounterStringAMD;
		PFNGLGETPERFMONITORCOUNTERSAMDPROC									glGetPerfMonitorCountersAMD;
		PFNGLGETPERFMONITORGROUPSTRINGAMDPROC								glGetPerfMonitorGroupStringAMD;
		PFNGLGETPERFMONITORGROUPSAMDPROC									glGetPerfMonitorGroupsAMD;
		PFNGLSELECTPERFMONITORCOUNTERSAMDPROC								glSelectPerfMonitorCountersAMD;

		/*
			GL_AMD_sample_positions
		*/
		PFNGLSETMULTISAMPLEFVAMDPROC										glSetMultisamplefvAMD;

		/*
			GL_AMD_sparse_texture
		*/
		PFNGLTEXSTORAGESPARSEAMDPROC										glTexStorageSparseAMD;
		PFNGLTEXTURESTORAGESPARSEAMDPROC									glTextureStorageSparseAMD;

		/*
			GL_AMD_stencil_operation_extended
		*/
		PFNGLSTENCILOPVALUEAMDPROC											glStencilOpValueAMD;

		/*
			GL_AMD_vertex_shader_tessellator
		*/
		PFNGLTESSELLATIONFACTORAMDPROC										glTessellationFactorAMD;
		PFNGLTESSELLATIONMODEAMDPROC										glTessellationModeAMD;

		/*
			GL_ANGLE_framebuffer_blit
		*/
		PFNGLBLITFRAMEBUFFERANGLEPROC										glBlitFramebufferANGLE;

		/*
			GL_ANGLE_framebuffer_multisample
		*/
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC						glRenderbufferStorageMultisampleANGLE;

		/*
			GL_ANGLE_instanced_arrays
		*/
		PFNGLDRAWARRAYSINSTANCEDANGLEPROC									glDrawArraysInstancedANGLE;
		PFNGLDRAWELEMENTSINSTANCEDANGLEPROC									glDrawElementsInstancedANGLE;
		PFNGLVERTEXATTRIBDIVISORANGLEPROC									glVertexAttribDivisorANGLE;

		/*
			GL_ANGLE_timer_query
		*/
		PFNGLBEGINQUERYANGLEPROC											glBeginQueryANGLE;
		PFNGLDELETEQUERIESANGLEPROC											glDeleteQueriesANGLE;
		PFNGLENDQUERYANGLEPROC												glEndQueryANGLE;
		PFNGLGENQUERIESANGLEPROC											glGenQueriesANGLE;
		PFNGLGETQUERYOBJECTI64VANGLEPROC									glGetQueryObjecti64vANGLE;
		PFNGLGETQUERYOBJECTIVANGLEPROC										glGetQueryObjectivANGLE;
		PFNGLGETQUERYOBJECTUI64VANGLEPROC									glGetQueryObjectui64vANGLE;
		PFNGLGETQUERYOBJECTUIVANGLEPROC										glGetQueryObjectuivANGLE;
		PFNGLGETQUERYIVANGLEPROC											glGetQueryivANGLE;
		PFNGLISQUERYANGLEPROC												glIsQueryANGLE;
		PFNGLQUERYCOUNTERANGLEPROC											glQueryCounterANGLE;

		/*
			GL_ANGLE_translated_shader_source
		*/
		PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC								glGetTranslatedShaderSourceANGLE;

		/*
			GL_APPLE_copy_texture_levels
		*/
		PFNGLCOPYTEXTURELEVELSAPPLEPROC										glCopyTextureLevelsAPPLE;

		/*
			GL_APPLE_element_array
		*/
		PFNGLDRAWELEMENTARRAYAPPLEPROC										glDrawElementArrayAPPLE;
		PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC									glDrawRangeElementArrayAPPLE;
		PFNGLELEMENTPOINTERAPPLEPROC										glElementPointerAPPLE;
		PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC									glMultiDrawElementArrayAPPLE;
		PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC							glMultiDrawRangeElementArrayAPPLE;

		/*
			GL_APPLE_fence
		*/
		PFNGLDELETEFENCESAPPLEPROC											glDeleteFencesAPPLE;
		PFNGLFINISHFENCEAPPLEPROC											glFinishFenceAPPLE;
		PFNGLFINISHOBJECTAPPLEPROC											glFinishObjectAPPLE;
		PFNGLGENFENCESAPPLEPROC												glGenFencesAPPLE;
		PFNGLISFENCEAPPLEPROC												glIsFenceAPPLE;
		PFNGLSETFENCEAPPLEPROC												glSetFenceAPPLE;
		PFNGLTESTFENCEAPPLEPROC												glTestFenceAPPLE;
		PFNGLTESTOBJECTAPPLEPROC											glTestObjectAPPLE;

		/*
			GL_APPLE_flush_buffer_range
		*/
		PFNGLBUFFERPARAMETERIAPPLEPROC										glBufferParameteriAPPLE;
		PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC								glFlushMappedBufferRangeAPPLE;

		/*
			GL_APPLE_framebuffer_multisample
		*/
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC						glRenderbufferStorageMultisampleAPPLE;
		PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC							glResolveMultisampleFramebufferAPPLE;

		/*
			GL_APPLE_object_purgeable
		*/
		PFNGLGETOBJECTPARAMETERIVAPPLEPROC									glGetObjectParameterivAPPLE;
		PFNGLOBJECTPURGEABLEAPPLEPROC										glObjectPurgeableAPPLE;
		PFNGLOBJECTUNPURGEABLEAPPLEPROC										glObjectUnpurgeableAPPLE;

		/*
			GL_APPLE_sync
		*/
		PFNGLCLIENTWAITSYNCAPPLEPROC										glClientWaitSyncAPPLE;
		PFNGLDELETESYNCAPPLEPROC											glDeleteSyncAPPLE;
		PFNGLFENCESYNCAPPLEPROC												glFenceSyncAPPLE;
		PFNGLGETINTEGER64VAPPLEPROC											glGetInteger64vAPPLE;
		PFNGLGETSYNCIVAPPLEPROC												glGetSyncivAPPLE;
		PFNGLISSYNCAPPLEPROC												glIsSyncAPPLE;
		PFNGLWAITSYNCAPPLEPROC												glWaitSyncAPPLE;

		/*
			GL_APPLE_texture_range
		*/
		PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC								glGetTexParameterPointervAPPLE;
		PFNGLTEXTURERANGEAPPLEPROC											glTextureRangeAPPLE;

		/*
			GL_APPLE_vertex_array_object
		*/
		PFNGLBINDVERTEXARRAYAPPLEPROC										glBindVertexArrayAPPLE;
		PFNGLDELETEVERTEXARRAYSAPPLEPROC									glDeleteVertexArraysAPPLE;
		PFNGLGENVERTEXARRAYSAPPLEPROC										glGenVertexArraysAPPLE;
		PFNGLISVERTEXARRAYAPPLEPROC											glIsVertexArrayAPPLE;

		/*
			GL_APPLE_vertex_array_range
		*/
		PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC									glFlushVertexArrayRangeAPPLE;
		PFNGLVERTEXARRAYPARAMETERIAPPLEPROC									glVertexArrayParameteriAPPLE;
		PFNGLVERTEXARRAYRANGEAPPLEPROC										glVertexArrayRangeAPPLE;

		/*
			GL_APPLE_vertex_program_evaluators
		*/
		PFNGLDISABLEVERTEXATTRIBAPPLEPROC									glDisableVertexAttribAPPLE;
		PFNGLENABLEVERTEXATTRIBAPPLEPROC									glEnableVertexAttribAPPLE;
		PFNGLISVERTEXATTRIBENABLEDAPPLEPROC									glIsVertexAttribEnabledAPPLE;
		PFNGLMAPVERTEXATTRIB1DAPPLEPROC										glMapVertexAttrib1dAPPLE;
		PFNGLMAPVERTEXATTRIB1FAPPLEPROC										glMapVertexAttrib1fAPPLE;
		PFNGLMAPVERTEXATTRIB2DAPPLEPROC										glMapVertexAttrib2dAPPLE;
		PFNGLMAPVERTEXATTRIB2FAPPLEPROC										glMapVertexAttrib2fAPPLE;

		/*
			GL_ARB_ES2_compatibility
		*/
		PFNGLCLEARDEPTHFPROC												glClearDepthf;
		PFNGLDEPTHRANGEFPROC												glDepthRangef;
		PFNGLGETSHADERPRECISIONFORMATPROC									glGetShaderPrecisionFormat;
		PFNGLRELEASESHADERCOMPILERPROC										glReleaseShaderCompiler;
		PFNGLSHADERBINARYPROC												glShaderBinary;

		/*
			GL_ARB_ES3_1_compatibility
		*/
		PFNGLMEMORYBARRIERBYREGIONPROC										glMemoryBarrierByRegion;

		/*
			GL_ARB_ES3_2_compatibility
		*/
		PFNGLPRIMITIVEBOUNDINGBOXARBPROC									glPrimitiveBoundingBoxARB;

		/*
			GL_ARB_base_instance
		*/
		PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC							glDrawArraysInstancedBaseInstance;
		PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC							glDrawElementsInstancedBaseInstance;
		PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC				glDrawElementsInstancedBaseVertexBaseInstance;

		/*
			GL_ARB_bindless_texture
		*/
		PFNGLGETIMAGEHANDLEARBPROC											glGetImageHandleARB;
		PFNGLGETTEXTUREHANDLEARBPROC										glGetTextureHandleARB;
		PFNGLGETTEXTURESAMPLERHANDLEARBPROC									glGetTextureSamplerHandleARB;
		PFNGLGETVERTEXATTRIBLUI64VARBPROC									glGetVertexAttribLui64vARB;
		PFNGLISIMAGEHANDLERESIDENTARBPROC									glIsImageHandleResidentARB;
		PFNGLISTEXTUREHANDLERESIDENTARBPROC									glIsTextureHandleResidentARB;
		PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC								glMakeImageHandleNonResidentARB;
		PFNGLMAKEIMAGEHANDLERESIDENTARBPROC									glMakeImageHandleResidentARB;
		PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC							glMakeTextureHandleNonResidentARB;
		PFNGLMAKETEXTUREHANDLERESIDENTARBPROC								glMakeTextureHandleResidentARB;
		PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC								glProgramUniformHandleui64ARB;
		PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC								glProgramUniformHandleui64vARB;
		PFNGLUNIFORMHANDLEUI64ARBPROC										glUniformHandleui64ARB;
		PFNGLUNIFORMHANDLEUI64VARBPROC										glUniformHandleui64vARB;
		PFNGLVERTEXATTRIBL1UI64ARBPROC										glVertexAttribL1ui64ARB;
		PFNGLVERTEXATTRIBL1UI64VARBPROC										glVertexAttribL1ui64vARB;

		/*
			GL_ARB_blend_func_extended
		*/
		PFNGLBINDFRAGDATALOCATIONINDEXEDPROC								glBindFragDataLocationIndexed;
		PFNGLGETFRAGDATAINDEXPROC											glGetFragDataIndex;

		/*
			GL_ARB_buffer_storage
		*/
		PFNGLBUFFERSTORAGEPROC												glBufferStorage;

		/*
			GL_ARB_cl_event
		*/
		PFNGLCREATESYNCFROMCLEVENTARBPROC									glCreateSyncFromCLeventARB;

		/*
			GL_ARB_clear_buffer_object
		*/
		PFNGLCLEARBUFFERDATAPROC											glClearBufferData;
		PFNGLCLEARBUFFERSUBDATAPROC											glClearBufferSubData;
		PFNGLCLEARNAMEDBUFFERDATAEXTPROC									glClearNamedBufferDataEXT;
		PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC									glClearNamedBufferSubDataEXT;

		/*
			GL_ARB_clear_texture
		*/
		PFNGLCLEARTEXIMAGEPROC												glClearTexImage;
		PFNGLCLEARTEXSUBIMAGEPROC											glClearTexSubImage;

		/*
			GL_ARB_clip_control
		*/
		PFNGLCLIPCONTROLPROC												glClipControl;

		/*
			GL_ARB_color_buffer_float
		*/
		PFNGLCLAMPCOLORARBPROC												glClampColorARB;

		/*
			GL_ARB_compute_shader
		*/
		PFNGLDISPATCHCOMPUTEPROC											glDispatchCompute;
		PFNGLDISPATCHCOMPUTEINDIRECTPROC									glDispatchComputeIndirect;

		/*
			GL_ARB_compute_variable_group_size
		*/
		PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC								glDispatchComputeGroupSizeARB;

		/*
			GL_ARB_copy_buffer
		*/
		PFNGLCOPYBUFFERSUBDATAPROC											glCopyBufferSubData;

		/*
			GL_ARB_copy_image
		*/
		PFNGLCOPYIMAGESUBDATAPROC											glCopyImageSubData;

		/*
			GL_ARB_debug_output
		*/
		PFNGLDEBUGMESSAGECALLBACKARBPROC									glDebugMessageCallbackARB;
		PFNGLDEBUGMESSAGECONTROLARBPROC										glDebugMessageControlARB;
		PFNGLDEBUGMESSAGEINSERTARBPROC										glDebugMessageInsertARB;
		PFNGLGETDEBUGMESSAGELOGARBPROC										glGetDebugMessageLogARB;

		/*
			GL_ARB_direct_state_access
		*/
		PFNGLBINDTEXTUREUNITPROC											glBindTextureUnit;
		PFNGLBLITNAMEDFRAMEBUFFERPROC										glBlitNamedFramebuffer;
		PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC								glCheckNamedFramebufferStatus;
		PFNGLCLEARNAMEDBUFFERDATAPROC										glClearNamedBufferData;
		PFNGLCLEARNAMEDBUFFERSUBDATAPROC									glClearNamedBufferSubData;
		PFNGLCLEARNAMEDFRAMEBUFFERFIPROC									glClearNamedFramebufferfi;
		PFNGLCLEARNAMEDFRAMEBUFFERFVPROC									glClearNamedFramebufferfv;
		PFNGLCLEARNAMEDFRAMEBUFFERIVPROC									glClearNamedFramebufferiv;
		PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC									glClearNamedFramebufferuiv;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC								glCompressedTextureSubImage1D;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC								glCompressedTextureSubImage2D;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC								glCompressedTextureSubImage3D;
		PFNGLCOPYNAMEDBUFFERSUBDATAPROC										glCopyNamedBufferSubData;
		PFNGLCOPYTEXTURESUBIMAGE1DPROC										glCopyTextureSubImage1D;
		PFNGLCOPYTEXTURESUBIMAGE2DPROC										glCopyTextureSubImage2D;
		PFNGLCOPYTEXTURESUBIMAGE3DPROC										glCopyTextureSubImage3D;
		PFNGLCREATEBUFFERSPROC												glCreateBuffers;
		PFNGLCREATEFRAMEBUFFERSPROC											glCreateFramebuffers;
		PFNGLCREATEPROGRAMPIPELINESPROC										glCreateProgramPipelines;
		PFNGLCREATEQUERIESPROC												glCreateQueries;
		PFNGLCREATERENDERBUFFERSPROC										glCreateRenderbuffers;
		PFNGLCREATESAMPLERSPROC												glCreateSamplers;
		PFNGLCREATETEXTURESPROC												glCreateTextures;
		PFNGLCREATETRANSFORMFEEDBACKSPROC									glCreateTransformFeedbacks;
		PFNGLCREATEVERTEXARRAYSPROC											glCreateVertexArrays;
		PFNGLDISABLEVERTEXARRAYATTRIBPROC									glDisableVertexArrayAttrib;
		PFNGLENABLEVERTEXARRAYATTRIBPROC									glEnableVertexArrayAttrib;
		PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC								glFlushMappedNamedBufferRange;
		PFNGLGENERATETEXTUREMIPMAPPROC										glGenerateTextureMipmap;
		PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC									glGetCompressedTextureImage;
		PFNGLGETNAMEDBUFFERPARAMETERI64VPROC								glGetNamedBufferParameteri64v;
		PFNGLGETNAMEDBUFFERPARAMETERIVPROC									glGetNamedBufferParameteriv;
		PFNGLGETNAMEDBUFFERPOINTERVPROC										glGetNamedBufferPointerv;
		PFNGLGETNAMEDBUFFERSUBDATAPROC										glGetNamedBufferSubData;
		PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC					glGetNamedFramebufferAttachmentParameteriv;
		PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC								glGetNamedFramebufferParameteriv;
		PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC							glGetNamedRenderbufferParameteriv;
		PFNGLGETQUERYBUFFEROBJECTI64VPROC									glGetQueryBufferObjecti64v;
		PFNGLGETQUERYBUFFEROBJECTIVPROC										glGetQueryBufferObjectiv;
		PFNGLGETQUERYBUFFEROBJECTUI64VPROC									glGetQueryBufferObjectui64v;
		PFNGLGETQUERYBUFFEROBJECTUIVPROC									glGetQueryBufferObjectuiv;
		PFNGLGETTEXTUREIMAGEPROC											glGetTextureImage;
		PFNGLGETTEXTURELEVELPARAMETERFVPROC									glGetTextureLevelParameterfv;
		PFNGLGETTEXTURELEVELPARAMETERIVPROC									glGetTextureLevelParameteriv;
		PFNGLGETTEXTUREPARAMETERIIVPROC										glGetTextureParameterIiv;
		PFNGLGETTEXTUREPARAMETERIUIVPROC									glGetTextureParameterIuiv;
		PFNGLGETTEXTUREPARAMETERFVPROC										glGetTextureParameterfv;
		PFNGLGETTEXTUREPARAMETERIVPROC										glGetTextureParameteriv;
		PFNGLGETTRANSFORMFEEDBACKI64_VPROC									glGetTransformFeedbacki64_v;
		PFNGLGETTRANSFORMFEEDBACKI_VPROC									glGetTransformFeedbacki_v;
		PFNGLGETTRANSFORMFEEDBACKIVPROC										glGetTransformFeedbackiv;
		PFNGLGETVERTEXARRAYINDEXED64IVPROC									glGetVertexArrayIndexed64iv;
		PFNGLGETVERTEXARRAYINDEXEDIVPROC									glGetVertexArrayIndexediv;
		PFNGLGETVERTEXARRAYIVPROC											glGetVertexArrayiv;
		PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC								glInvalidateNamedFramebufferData;
		PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC							glInvalidateNamedFramebufferSubData;
		PFNGLMAPNAMEDBUFFERPROC												glMapNamedBuffer;
		PFNGLMAPNAMEDBUFFERRANGEPROC										glMapNamedBufferRange;
		PFNGLNAMEDBUFFERDATAPROC											glNamedBufferData;
		PFNGLNAMEDBUFFERSTORAGEPROC											glNamedBufferStorage;
		PFNGLNAMEDBUFFERSUBDATAPROC											glNamedBufferSubData;
		PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC									glNamedFramebufferDrawBuffer;
		PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC								glNamedFramebufferDrawBuffers;
		PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC									glNamedFramebufferParameteri;
		PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC									glNamedFramebufferReadBuffer;
		PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC								glNamedFramebufferRenderbuffer;
		PFNGLNAMEDFRAMEBUFFERTEXTUREPROC									glNamedFramebufferTexture;
		PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC								glNamedFramebufferTextureLayer;
		PFNGLNAMEDRENDERBUFFERSTORAGEPROC									glNamedRenderbufferStorage;
		PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC						glNamedRenderbufferStorageMultisample;
		PFNGLTEXTUREBUFFERPROC												glTextureBuffer;
		PFNGLTEXTUREBUFFERRANGEPROC											glTextureBufferRange;
		PFNGLTEXTUREPARAMETERIIVPROC										glTextureParameterIiv;
		PFNGLTEXTUREPARAMETERIUIVPROC										glTextureParameterIuiv;
		PFNGLTEXTUREPARAMETERFPROC											glTextureParameterf;
		PFNGLTEXTUREPARAMETERFVPROC											glTextureParameterfv;
		PFNGLTEXTUREPARAMETERIPROC											glTextureParameteri;
		PFNGLTEXTUREPARAMETERIVPROC											glTextureParameteriv;
		PFNGLTEXTURESTORAGE1DPROC											glTextureStorage1D;
		PFNGLTEXTURESTORAGE2DPROC											glTextureStorage2D;
		PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC								glTextureStorage2DMultisample;
		PFNGLTEXTURESTORAGE3DPROC											glTextureStorage3D;
		PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC								glTextureStorage3DMultisample;
		PFNGLTEXTURESUBIMAGE1DPROC											glTextureSubImage1D;
		PFNGLTEXTURESUBIMAGE2DPROC											glTextureSubImage2D;
		PFNGLTEXTURESUBIMAGE3DPROC											glTextureSubImage3D;
		PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC								glTransformFeedbackBufferBase;
		PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC								glTransformFeedbackBufferRange;
		PFNGLUNMAPNAMEDBUFFERPROC											glUnmapNamedBuffer;
		PFNGLVERTEXARRAYATTRIBBINDINGPROC									glVertexArrayAttribBinding;
		PFNGLVERTEXARRAYATTRIBFORMATPROC									glVertexArrayAttribFormat;
		PFNGLVERTEXARRAYATTRIBIFORMATPROC									glVertexArrayAttribIFormat;
		PFNGLVERTEXARRAYATTRIBLFORMATPROC									glVertexArrayAttribLFormat;
		PFNGLVERTEXARRAYBINDINGDIVISORPROC									glVertexArrayBindingDivisor;
		PFNGLVERTEXARRAYELEMENTBUFFERPROC									glVertexArrayElementBuffer;
		PFNGLVERTEXARRAYVERTEXBUFFERPROC									glVertexArrayVertexBuffer;
		PFNGLVERTEXARRAYVERTEXBUFFERSPROC									glVertexArrayVertexBuffers;

		/*
			GL_ARB_draw_buffers
		*/
		PFNGLDRAWBUFFERSARBPROC												glDrawBuffersARB;

		/*
			GL_ARB_draw_buffers_blend
		*/
		PFNGLBLENDEQUATIONSEPARATEIARBPROC									glBlendEquationSeparateiARB;
		PFNGLBLENDEQUATIONIARBPROC											glBlendEquationiARB;
		PFNGLBLENDFUNCSEPARATEIARBPROC										glBlendFuncSeparateiARB;
		PFNGLBLENDFUNCIARBPROC												glBlendFunciARB;

		/*
			GL_ARB_draw_elements_base_vertex
		*/
		PFNGLDRAWELEMENTSBASEVERTEXPROC										glDrawElementsBaseVertex;
		PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC							glDrawElementsInstancedBaseVertex;
		PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC								glDrawRangeElementsBaseVertex;
		PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC								glMultiDrawElementsBaseVertex;

		/*
			GL_ARB_draw_indirect
		*/
		PFNGLDRAWARRAYSINDIRECTPROC											glDrawArraysIndirect;
		PFNGLDRAWELEMENTSINDIRECTPROC										glDrawElementsIndirect;

		/*
			GL_ARB_framebuffer_no_attachments
		*/
		PFNGLFRAMEBUFFERPARAMETERIPROC										glFramebufferParameteri;
		PFNGLGETFRAMEBUFFERPARAMETERIVPROC									glGetFramebufferParameteriv;
		PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC							glGetNamedFramebufferParameterivEXT;
		PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC								glNamedFramebufferParameteriEXT;

		/*
			GL_ARB_framebuffer_object
		*/
		PFNGLBINDFRAMEBUFFERPROC											glBindFramebuffer;
		PFNGLBINDRENDERBUFFERPROC											glBindRenderbuffer;
		PFNGLBLITFRAMEBUFFERPROC											glBlitFramebuffer;
		PFNGLCHECKFRAMEBUFFERSTATUSPROC										glCheckFramebufferStatus;
		PFNGLDELETEFRAMEBUFFERSPROC											glDeleteFramebuffers;
		PFNGLDELETERENDERBUFFERSPROC										glDeleteRenderbuffers;
		PFNGLFRAMEBUFFERRENDERBUFFERPROC									glFramebufferRenderbuffer;
		PFNGLFRAMEBUFFERTEXTURE1DPROC										glFramebufferTexture1D;
		PFNGLFRAMEBUFFERTEXTURE2DPROC										glFramebufferTexture2D;
		PFNGLFRAMEBUFFERTEXTURE3DPROC										glFramebufferTexture3D;
		PFNGLFRAMEBUFFERTEXTURELAYERPROC									glFramebufferTextureLayer;
		PFNGLGENFRAMEBUFFERSPROC											glGenFramebuffers;
		PFNGLGENRENDERBUFFERSPROC											glGenRenderbuffers;
		PFNGLGENERATEMIPMAPPROC												glGenerateMipmap;
		PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC						glGetFramebufferAttachmentParameteriv;
		PFNGLGETRENDERBUFFERPARAMETERIVPROC									glGetRenderbufferParameteriv;
		PFNGLISFRAMEBUFFERPROC												glIsFramebuffer;
		PFNGLISRENDERBUFFERPROC												glIsRenderbuffer;
		PFNGLRENDERBUFFERSTORAGEPROC										glRenderbufferStorage;
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC								glRenderbufferStorageMultisample;

		/*
			GL_ARB_geometry_shader4
		*/
		PFNGLFRAMEBUFFERTEXTUREARBPROC										glFramebufferTextureARB;
		PFNGLFRAMEBUFFERTEXTUREFACEARBPROC									glFramebufferTextureFaceARB;
		PFNGLFRAMEBUFFERTEXTURELAYERARBPROC									glFramebufferTextureLayerARB;
		PFNGLPROGRAMPARAMETERIARBPROC										glProgramParameteriARB;

		/*
			GL_ARB_get_program_binary
		*/
		PFNGLGETPROGRAMBINARYPROC											glGetProgramBinary;
		PFNGLPROGRAMBINARYPROC												glProgramBinary;
		PFNGLPROGRAMPARAMETERIPROC											glProgramParameteri;

		/*
			GL_ARB_get_texture_sub_image
		*/
		PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC								glGetCompressedTextureSubImage;
		PFNGLGETTEXTURESUBIMAGEPROC											glGetTextureSubImage;

		/*
			GL_ARB_gl_spirv
		*/
		PFNGLSPECIALIZESHADERARBPROC										glSpecializeShaderARB;

		/*
			GL_ARB_gpu_shader_fp64
		*/
		PFNGLGETUNIFORMDVPROC												glGetUniformdv;
		PFNGLUNIFORM1DPROC													glUniform1d;
		PFNGLUNIFORM1DVPROC													glUniform1dv;
		PFNGLUNIFORM2DPROC													glUniform2d;
		PFNGLUNIFORM2DVPROC													glUniform2dv;
		PFNGLUNIFORM3DPROC													glUniform3d;
		PFNGLUNIFORM3DVPROC													glUniform3dv;
		PFNGLUNIFORM4DPROC													glUniform4d;
		PFNGLUNIFORM4DVPROC													glUniform4dv;
		PFNGLUNIFORMMATRIX2DVPROC											glUniformMatrix2dv;
		PFNGLUNIFORMMATRIX2X3DVPROC											glUniformMatrix2x3dv;
		PFNGLUNIFORMMATRIX2X4DVPROC											glUniformMatrix2x4dv;
		PFNGLUNIFORMMATRIX3DVPROC											glUniformMatrix3dv;
		PFNGLUNIFORMMATRIX3X2DVPROC											glUniformMatrix3x2dv;
		PFNGLUNIFORMMATRIX3X4DVPROC											glUniformMatrix3x4dv;
		PFNGLUNIFORMMATRIX4DVPROC											glUniformMatrix4dv;
		PFNGLUNIFORMMATRIX4X2DVPROC											glUniformMatrix4x2dv;
		PFNGLUNIFORMMATRIX4X3DVPROC											glUniformMatrix4x3dv;

		/*
			GL_ARB_gpu_shader_int64
		*/
		PFNGLGETUNIFORMI64VARBPROC											glGetUniformi64vARB;
		PFNGLGETUNIFORMUI64VARBPROC											glGetUniformui64vARB;
		PFNGLGETNUNIFORMI64VARBPROC											glGetnUniformi64vARB;
		PFNGLGETNUNIFORMUI64VARBPROC										glGetnUniformui64vARB;
		PFNGLPROGRAMUNIFORM1I64ARBPROC										glProgramUniform1i64ARB;
		PFNGLPROGRAMUNIFORM1I64VARBPROC										glProgramUniform1i64vARB;
		PFNGLPROGRAMUNIFORM1UI64ARBPROC										glProgramUniform1ui64ARB;
		PFNGLPROGRAMUNIFORM1UI64VARBPROC									glProgramUniform1ui64vARB;
		PFNGLPROGRAMUNIFORM2I64ARBPROC										glProgramUniform2i64ARB;
		PFNGLPROGRAMUNIFORM2I64VARBPROC										glProgramUniform2i64vARB;
		PFNGLPROGRAMUNIFORM2UI64ARBPROC										glProgramUniform2ui64ARB;
		PFNGLPROGRAMUNIFORM2UI64VARBPROC									glProgramUniform2ui64vARB;
		PFNGLPROGRAMUNIFORM3I64ARBPROC										glProgramUniform3i64ARB;
		PFNGLPROGRAMUNIFORM3I64VARBPROC										glProgramUniform3i64vARB;
		PFNGLPROGRAMUNIFORM3UI64ARBPROC										glProgramUniform3ui64ARB;
		PFNGLPROGRAMUNIFORM3UI64VARBPROC									glProgramUniform3ui64vARB;
		PFNGLPROGRAMUNIFORM4I64ARBPROC										glProgramUniform4i64ARB;
		PFNGLPROGRAMUNIFORM4I64VARBPROC										glProgramUniform4i64vARB;
		PFNGLPROGRAMUNIFORM4UI64ARBPROC										glProgramUniform4ui64ARB;
		PFNGLPROGRAMUNIFORM4UI64VARBPROC									glProgramUniform4ui64vARB;
		PFNGLUNIFORM1I64ARBPROC												glUniform1i64ARB;
		PFNGLUNIFORM1I64VARBPROC											glUniform1i64vARB;
		PFNGLUNIFORM1UI64ARBPROC											glUniform1ui64ARB;
		PFNGLUNIFORM1UI64VARBPROC											glUniform1ui64vARB;
		PFNGLUNIFORM2I64ARBPROC												glUniform2i64ARB;
		PFNGLUNIFORM2I64VARBPROC											glUniform2i64vARB;
		PFNGLUNIFORM2UI64ARBPROC											glUniform2ui64ARB;
		PFNGLUNIFORM2UI64VARBPROC											glUniform2ui64vARB;
		PFNGLUNIFORM3I64ARBPROC												glUniform3i64ARB;
		PFNGLUNIFORM3I64VARBPROC											glUniform3i64vARB;
		PFNGLUNIFORM3UI64ARBPROC											glUniform3ui64ARB;
		PFNGLUNIFORM3UI64VARBPROC											glUniform3ui64vARB;
		PFNGLUNIFORM4I64ARBPROC												glUniform4i64ARB;
		PFNGLUNIFORM4I64VARBPROC											glUniform4i64vARB;
		PFNGLUNIFORM4UI64ARBPROC											glUniform4ui64ARB;
		PFNGLUNIFORM4UI64VARBPROC											glUniform4ui64vARB;

		/*
			GL_ARB_imaging
		*/
		PFNGLCOLORSUBTABLEPROC												glColorSubTable;
		PFNGLCOLORTABLEPROC													glColorTable;
		PFNGLCOLORTABLEPARAMETERFVPROC										glColorTableParameterfv;
		PFNGLCOLORTABLEPARAMETERIVPROC										glColorTableParameteriv;
		PFNGLCONVOLUTIONFILTER1DPROC										glConvolutionFilter1D;
		PFNGLCONVOLUTIONFILTER2DPROC										glConvolutionFilter2D;
		PFNGLCONVOLUTIONPARAMETERFPROC										glConvolutionParameterf;
		PFNGLCONVOLUTIONPARAMETERFVPROC										glConvolutionParameterfv;
		PFNGLCONVOLUTIONPARAMETERIPROC										glConvolutionParameteri;
		PFNGLCONVOLUTIONPARAMETERIVPROC										glConvolutionParameteriv;
		PFNGLCOPYCOLORSUBTABLEPROC											glCopyColorSubTable;
		PFNGLCOPYCOLORTABLEPROC												glCopyColorTable;
		PFNGLCOPYCONVOLUTIONFILTER1DPROC									glCopyConvolutionFilter1D;
		PFNGLCOPYCONVOLUTIONFILTER2DPROC									glCopyConvolutionFilter2D;
		PFNGLGETCOLORTABLEPROC												glGetColorTable;
		PFNGLGETCOLORTABLEPARAMETERFVPROC									glGetColorTableParameterfv;
		PFNGLGETCOLORTABLEPARAMETERIVPROC									glGetColorTableParameteriv;
		PFNGLGETCONVOLUTIONFILTERPROC										glGetConvolutionFilter;
		PFNGLGETCONVOLUTIONPARAMETERFVPROC									glGetConvolutionParameterfv;
		PFNGLGETCONVOLUTIONPARAMETERIVPROC									glGetConvolutionParameteriv;
		PFNGLGETHISTOGRAMPROC												glGetHistogram;
		PFNGLGETHISTOGRAMPARAMETERFVPROC									glGetHistogramParameterfv;
		PFNGLGETHISTOGRAMPARAMETERIVPROC									glGetHistogramParameteriv;
		PFNGLGETMINMAXPROC													glGetMinmax;
		PFNGLGETMINMAXPARAMETERFVPROC										glGetMinmaxParameterfv;
		PFNGLGETMINMAXPARAMETERIVPROC										glGetMinmaxParameteriv;
		PFNGLGETSEPARABLEFILTERPROC											glGetSeparableFilter;
		PFNGLHISTOGRAMPROC													glHistogram;
		PFNGLMINMAXPROC														glMinmax;
		PFNGLRESETHISTOGRAMPROC												glResetHistogram;
		PFNGLRESETMINMAXPROC												glResetMinmax;
		PFNGLSEPARABLEFILTER2DPROC											glSeparableFilter2D;

		/*
			GL_ARB_indirect_parameters
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC							glMultiDrawArraysIndirectCountARB;
		PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC							glMultiDrawElementsIndirectCountARB;

		/*
			GL_ARB_instanced_arrays
		*/
		PFNGLDRAWARRAYSINSTANCEDARBPROC										glDrawArraysInstancedARB;
		PFNGLDRAWELEMENTSINSTANCEDARBPROC									glDrawElementsInstancedARB;
		PFNGLVERTEXATTRIBDIVISORARBPROC										glVertexAttribDivisorARB;

		/*
			GL_ARB_internalformat_query
		*/
		PFNGLGETINTERNALFORMATIVPROC										glGetInternalformativ;

		/*
			GL_ARB_internalformat_query2
		*/
		PFNGLGETINTERNALFORMATI64VPROC										glGetInternalformati64v;

		/*
			GL_ARB_invalidate_subdata
		*/
		PFNGLINVALIDATEBUFFERDATAPROC										glInvalidateBufferData;
		PFNGLINVALIDATEBUFFERSUBDATAPROC									glInvalidateBufferSubData;
		PFNGLINVALIDATEFRAMEBUFFERPROC										glInvalidateFramebuffer;
		PFNGLINVALIDATESUBFRAMEBUFFERPROC									glInvalidateSubFramebuffer;
		PFNGLINVALIDATETEXIMAGEPROC											glInvalidateTexImage;
		PFNGLINVALIDATETEXSUBIMAGEPROC										glInvalidateTexSubImage;

		/*
			GL_ARB_map_buffer_range
		*/
		PFNGLFLUSHMAPPEDBUFFERRANGEPROC										glFlushMappedBufferRange;
		PFNGLMAPBUFFERRANGEPROC												glMapBufferRange;

		/*
			GL_ARB_matrix_palette
		*/
		PFNGLCURRENTPALETTEMATRIXARBPROC									glCurrentPaletteMatrixARB;
		PFNGLMATRIXINDEXPOINTERARBPROC										glMatrixIndexPointerARB;
		PFNGLMATRIXINDEXUBVARBPROC											glMatrixIndexubvARB;
		PFNGLMATRIXINDEXUIVARBPROC											glMatrixIndexuivARB;
		PFNGLMATRIXINDEXUSVARBPROC											glMatrixIndexusvARB;

		/*
			GL_ARB_multi_bind
		*/
		PFNGLBINDBUFFERSBASEPROC											glBindBuffersBase;
		PFNGLBINDBUFFERSRANGEPROC											glBindBuffersRange;
		PFNGLBINDIMAGETEXTURESPROC											glBindImageTextures;
		PFNGLBINDSAMPLERSPROC												glBindSamplers;
		PFNGLBINDTEXTURESPROC												glBindTextures;
		PFNGLBINDVERTEXBUFFERSPROC											glBindVertexBuffers;

		/*
			GL_ARB_multi_draw_indirect
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTPROC									glMultiDrawArraysIndirect;
		PFNGLMULTIDRAWELEMENTSINDIRECTPROC									glMultiDrawElementsIndirect;

		/*
			GL_ARB_multisample
		*/
		PFNGLSAMPLECOVERAGEARBPROC											glSampleCoverageARB;

		/*
			GL_ARB_multitexture
		*/
		PFNGLACTIVETEXTUREARBPROC											glActiveTextureARB;
		PFNGLCLIENTACTIVETEXTUREARBPROC										glClientActiveTextureARB;
		PFNGLMULTITEXCOORD1DARBPROC											glMultiTexCoord1dARB;
		PFNGLMULTITEXCOORD1DVARBPROC										glMultiTexCoord1dvARB;
		PFNGLMULTITEXCOORD1FARBPROC											glMultiTexCoord1fARB;
		PFNGLMULTITEXCOORD1FVARBPROC										glMultiTexCoord1fvARB;
		PFNGLMULTITEXCOORD1IARBPROC											glMultiTexCoord1iARB;
		PFNGLMULTITEXCOORD1IVARBPROC										glMultiTexCoord1ivARB;
		PFNGLMULTITEXCOORD1SARBPROC											glMultiTexCoord1sARB;
		PFNGLMULTITEXCOORD1SVARBPROC										glMultiTexCoord1svARB;
		PFNGLMULTITEXCOORD2DARBPROC											glMultiTexCoord2dARB;
		PFNGLMULTITEXCOORD2DVARBPROC										glMultiTexCoord2dvARB;
		PFNGLMULTITEXCOORD2FARBPROC											glMultiTexCoord2fARB;
		PFNGLMULTITEXCOORD2FVARBPROC										glMultiTexCoord2fvARB;
		PFNGLMULTITEXCOORD2IARBPROC											glMultiTexCoord2iARB;
		PFNGLMULTITEXCOORD2IVARBPROC										glMultiTexCoord2ivARB;
		PFNGLMULTITEXCOORD2SARBPROC											glMultiTexCoord2sARB;
		PFNGLMULTITEXCOORD2SVARBPROC										glMultiTexCoord2svARB;
		PFNGLMULTITEXCOORD3DARBPROC											glMultiTexCoord3dARB;
		PFNGLMULTITEXCOORD3DVARBPROC										glMultiTexCoord3dvARB;
		PFNGLMULTITEXCOORD3FARBPROC											glMultiTexCoord3fARB;
		PFNGLMULTITEXCOORD3FVARBPROC										glMultiTexCoord3fvARB;
		PFNGLMULTITEXCOORD3IARBPROC											glMultiTexCoord3iARB;
		PFNGLMULTITEXCOORD3IVARBPROC										glMultiTexCoord3ivARB;
		PFNGLMULTITEXCOORD3SARBPROC											glMultiTexCoord3sARB;
		PFNGLMULTITEXCOORD3SVARBPROC										glMultiTexCoord3svARB;
		PFNGLMULTITEXCOORD4DARBPROC											glMultiTexCoord4dARB;
		PFNGLMULTITEXCOORD4DVARBPROC										glMultiTexCoord4dvARB;
		PFNGLMULTITEXCOORD4FARBPROC											glMultiTexCoord4fARB;
		PFNGLMULTITEXCOORD4FVARBPROC										glMultiTexCoord4fvARB;
		PFNGLMULTITEXCOORD4IARBPROC											glMultiTexCoord4iARB;
		PFNGLMULTITEXCOORD4IVARBPROC										glMultiTexCoord4ivARB;
		PFNGLMULTITEXCOORD4SARBPROC											glMultiTexCoord4sARB;
		PFNGLMULTITEXCOORD4SVARBPROC										glMultiTexCoord4svARB;

		/*
			GL_ARB_occlusion_query
		*/
		PFNGLBEGINQUERYARBPROC												glBeginQueryARB;
		PFNGLDELETEQUERIESARBPROC											glDeleteQueriesARB;
		PFNGLENDQUERYARBPROC												glEndQueryARB;
		PFNGLGENQUERIESARBPROC												glGenQueriesARB;
		PFNGLGETQUERYOBJECTIVARBPROC										glGetQueryObjectivARB;
		PFNGLGETQUERYOBJECTUIVARBPROC										glGetQueryObjectuivARB;
		PFNGLGETQUERYIVARBPROC												glGetQueryivARB;
		PFNGLISQUERYARBPROC													glIsQueryARB;

		/*
			GL_ARB_parallel_shader_compile
		*/
		PFNGLMAXSHADERCOMPILERTHREADSARBPROC								glMaxShaderCompilerThreadsARB;

		/*
			GL_ARB_point_parameters
		*/
		PFNGLPOINTPARAMETERFARBPROC											glPointParameterfARB;
		PFNGLPOINTPARAMETERFVARBPROC										glPointParameterfvARB;

		/*
			GL_ARB_polygon_offset_clamp
		*/
		PFNGLPOLYGONOFFSETCLAMPPROC											glPolygonOffsetClamp;

		/*
			GL_ARB_program_interface_query
		*/
		PFNGLGETPROGRAMINTERFACEIVPROC										glGetProgramInterfaceiv;
		PFNGLGETPROGRAMRESOURCEINDEXPROC									glGetProgramResourceIndex;
		PFNGLGETPROGRAMRESOURCELOCATIONPROC									glGetProgramResourceLocation;
		PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC							glGetProgramResourceLocationIndex;
		PFNGLGETPROGRAMRESOURCENAMEPROC										glGetProgramResourceName;
		PFNGLGETPROGRAMRESOURCEIVPROC										glGetProgramResourceiv;

		/*
			GL_ARB_provoking_vertex
		*/
		PFNGLPROVOKINGVERTEXPROC											glProvokingVertex;

		/*
			GL_ARB_robustness
		*/
		PFNGLGETGRAPHICSRESETSTATUSARBPROC									glGetGraphicsResetStatusARB;
		PFNGLGETNCOLORTABLEARBPROC											glGetnColorTableARB;
		PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC									glGetnCompressedTexImageARB;
		PFNGLGETNCONVOLUTIONFILTERARBPROC									glGetnConvolutionFilterARB;
		PFNGLGETNHISTOGRAMARBPROC											glGetnHistogramARB;
		PFNGLGETNMAPDVARBPROC												glGetnMapdvARB;
		PFNGLGETNMAPFVARBPROC												glGetnMapfvARB;
		PFNGLGETNMAPIVARBPROC												glGetnMapivARB;
		PFNGLGETNMINMAXARBPROC												glGetnMinmaxARB;
		PFNGLGETNPIXELMAPFVARBPROC											glGetnPixelMapfvARB;
		PFNGLGETNPIXELMAPUIVARBPROC											glGetnPixelMapuivARB;
		PFNGLGETNPIXELMAPUSVARBPROC											glGetnPixelMapusvARB;
		PFNGLGETNPOLYGONSTIPPLEARBPROC										glGetnPolygonStippleARB;
		PFNGLGETNSEPARABLEFILTERARBPROC										glGetnSeparableFilterARB;
		PFNGLGETNTEXIMAGEARBPROC											glGetnTexImageARB;
		PFNGLGETNUNIFORMDVARBPROC											glGetnUniformdvARB;
		PFNGLGETNUNIFORMFVARBPROC											glGetnUniformfvARB;
		PFNGLGETNUNIFORMIVARBPROC											glGetnUniformivARB;
		PFNGLGETNUNIFORMUIVARBPROC											glGetnUniformuivARB;
		PFNGLREADNPIXELSARBPROC												glReadnPixelsARB;

		/*
			GL_ARB_sample_locations
		*/
		PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC							glFramebufferSampleLocationsfvARB;
		PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC						glNamedFramebufferSampleLocationsfvARB;

		/*
			GL_ARB_sample_shading
		*/
		PFNGLMINSAMPLESHADINGARBPROC										glMinSampleShadingARB;

		/*
			GL_ARB_sampler_objects
		*/
		PFNGLBINDSAMPLERPROC												glBindSampler;
		PFNGLDELETESAMPLERSPROC												glDeleteSamplers;
		PFNGLGENSAMPLERSPROC												glGenSamplers;
		PFNGLGETSAMPLERPARAMETERIIVPROC										glGetSamplerParameterIiv;
		PFNGLGETSAMPLERPARAMETERIUIVPROC									glGetSamplerParameterIuiv;
		PFNGLGETSAMPLERPARAMETERFVPROC										glGetSamplerParameterfv;
		PFNGLGETSAMPLERPARAMETERIVPROC										glGetSamplerParameteriv;
		PFNGLISSAMPLERPROC													glIsSampler;
		PFNGLSAMPLERPARAMETERIIVPROC										glSamplerParameterIiv;
		PFNGLSAMPLERPARAMETERIUIVPROC										glSamplerParameterIuiv;
		PFNGLSAMPLERPARAMETERFPROC											glSamplerParameterf;
		PFNGLSAMPLERPARAMETERFVPROC											glSamplerParameterfv;
		PFNGLSAMPLERPARAMETERIPROC											glSamplerParameteri;
		PFNGLSAMPLERPARAMETERIVPROC											glSamplerParameteriv;

		/*
			GL_ARB_separate_shader_objects
		*/
		PFNGLACTIVESHADERPROGRAMPROC										glActiveShaderProgram;
		PFNGLBINDPROGRAMPIPELINEPROC										glBindProgramPipeline;
		PFNGLCREATESHADERPROGRAMVPROC										glCreateShaderProgramv;
		PFNGLDELETEPROGRAMPIPELINESPROC										glDeleteProgramPipelines;
		PFNGLGENPROGRAMPIPELINESPROC										glGenProgramPipelines;
		PFNGLGETPROGRAMPIPELINEINFOLOGPROC									glGetProgramPipelineInfoLog;
		PFNGLGETPROGRAMPIPELINEIVPROC										glGetProgramPipelineiv;
		PFNGLISPROGRAMPIPELINEPROC											glIsProgramPipeline;
		PFNGLPROGRAMUNIFORM1DPROC											glProgramUniform1d;
		PFNGLPROGRAMUNIFORM1DVPROC											glProgramUniform1dv;
		PFNGLPROGRAMUNIFORM1FPROC											glProgramUniform1f;
		PFNGLPROGRAMUNIFORM1FVPROC											glProgramUniform1fv;
		PFNGLPROGRAMUNIFORM1IPROC											glProgramUniform1i;
		PFNGLPROGRAMUNIFORM1IVPROC											glProgramUniform1iv;
		PFNGLPROGRAMUNIFORM1UIPROC											glProgramUniform1ui;
		PFNGLPROGRAMUNIFORM1UIVPROC											glProgramUniform1uiv;
		PFNGLPROGRAMUNIFORM2DPROC											glProgramUniform2d;
		PFNGLPROGRAMUNIFORM2DVPROC											glProgramUniform2dv;
		PFNGLPROGRAMUNIFORM2FPROC											glProgramUniform2f;
		PFNGLPROGRAMUNIFORM2FVPROC											glProgramUniform2fv;
		PFNGLPROGRAMUNIFORM2IPROC											glProgramUniform2i;
		PFNGLPROGRAMUNIFORM2IVPROC											glProgramUniform2iv;
		PFNGLPROGRAMUNIFORM2UIPROC											glProgramUniform2ui;
		PFNGLPROGRAMUNIFORM2UIVPROC											glProgramUniform2uiv;
		PFNGLPROGRAMUNIFORM3DPROC											glProgramUniform3d;
		PFNGLPROGRAMUNIFORM3DVPROC											glProgramUniform3dv;
		PFNGLPROGRAMUNIFORM3FPROC											glProgramUniform3f;
		PFNGLPROGRAMUNIFORM3FVPROC											glProgramUniform3fv;
		PFNGLPROGRAMUNIFORM3IPROC											glProgramUniform3i;
		PFNGLPROGRAMUNIFORM3IVPROC											glProgramUniform3iv;
		PFNGLPROGRAMUNIFORM3UIPROC											glProgramUniform3ui;
		PFNGLPROGRAMUNIFORM3UIVPROC											glProgramUniform3uiv;
		PFNGLPROGRAMUNIFORM4DPROC											glProgramUniform4d;
		PFNGLPROGRAMUNIFORM4DVPROC											glProgramUniform4dv;
		PFNGLPROGRAMUNIFORM4FPROC											glProgramUniform4f;
		PFNGLPROGRAMUNIFORM4FVPROC											glProgramUniform4fv;
		PFNGLPROGRAMUNIFORM4IPROC											glProgramUniform4i;
		PFNGLPROGRAMUNIFORM4IVPROC											glProgramUniform4iv;
		PFNGLPROGRAMUNIFORM4UIPROC											glProgramUniform4ui;
		PFNGLPROGRAMUNIFORM4UIVPROC											glProgramUniform4uiv;
		PFNGLPROGRAMUNIFORMMATRIX2DVPROC									glProgramUniformMatrix2dv;
		PFNGLPROGRAMUNIFORMMATRIX2FVPROC									glProgramUniformMatrix2fv;
		PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC									glProgramUniformMatrix2x3dv;
		PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC									glProgramUniformMatrix2x3fv;
		PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC									glProgramUniformMatrix2x4dv;
		PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC									glProgramUniformMatrix2x4fv;
		PFNGLPROGRAMUNIFORMMATRIX3DVPROC									glProgramUniformMatrix3dv;
		PFNGLPROGRAMUNIFORMMATRIX3FVPROC									glProgramUniformMatrix3fv;
		PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC									glProgramUniformMatrix3x2dv;
		PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC									glProgramUniformMatrix3x2fv;
		PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC									glProgramUniformMatrix3x4dv;
		PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC									glProgramUniformMatrix3x4fv;
		PFNGLPROGRAMUNIFORMMATRIX4DVPROC									glProgramUniformMatrix4dv;
		PFNGLPROGRAMUNIFORMMATRIX4FVPROC									glProgramUniformMatrix4fv;
		PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC									glProgramUniformMatrix4x2dv;
		PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC									glProgramUniformMatrix4x2fv;
		PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC									glProgramUniformMatrix4x3dv;
		PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC									glProgramUniformMatrix4x3fv;
		PFNGLUSEPROGRAMSTAGESPROC											glUseProgramStages;
		PFNGLVALIDATEPROGRAMPIPELINEPROC									glValidateProgramPipeline;

		/*
			GL_ARB_shader_atomic_counters
		*/
		PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC								glGetActiveAtomicCounterBufferiv;

		/*
			GL_ARB_shader_image_load_store
		*/
		PFNGLBINDIMAGETEXTUREPROC											glBindImageTexture;
		PFNGLMEMORYBARRIERPROC												glMemoryBarrier;

		/*
			GL_ARB_shader_objects
		*/
		PFNGLATTACHOBJECTARBPROC											glAttachObjectARB;
		PFNGLCOMPILESHADERARBPROC											glCompileShaderARB;
		PFNGLCREATEPROGRAMOBJECTARBPROC										glCreateProgramObjectARB;
		PFNGLCREATESHADEROBJECTARBPROC										glCreateShaderObjectARB;
		PFNGLDELETEOBJECTARBPROC											glDeleteObjectARB;
		PFNGLDETACHOBJECTARBPROC											glDetachObjectARB;
		PFNGLGETACTIVEUNIFORMARBPROC										glGetActiveUniformARB;
		PFNGLGETATTACHEDOBJECTSARBPROC										glGetAttachedObjectsARB;
		PFNGLGETHANDLEARBPROC												glGetHandleARB;
		PFNGLGETINFOLOGARBPROC												glGetInfoLogARB;
		PFNGLGETOBJECTPARAMETERFVARBPROC									glGetObjectParameterfvARB;
		PFNGLGETOBJECTPARAMETERIVARBPROC									glGetObjectParameterivARB;
		PFNGLGETSHADERSOURCEARBPROC											glGetShaderSourceARB;
		PFNGLGETUNIFORMLOCATIONARBPROC										glGetUniformLocationARB;
		PFNGLGETUNIFORMFVARBPROC											glGetUniformfvARB;
		PFNGLGETUNIFORMIVARBPROC											glGetUniformivARB;
		PFNGLLINKPROGRAMARBPROC												glLinkProgramARB;
		PFNGLSHADERSOURCEARBPROC											glShaderSourceARB;
		PFNGLUNIFORM1FARBPROC												glUniform1fARB;
		PFNGLUNIFORM1FVARBPROC												glUniform1fvARB;
		PFNGLUNIFORM1IARBPROC												glUniform1iARB;
		PFNGLUNIFORM1IVARBPROC												glUniform1ivARB;
		PFNGLUNIFORM2FARBPROC												glUniform2fARB;
		PFNGLUNIFORM2FVARBPROC												glUniform2fvARB;
		PFNGLUNIFORM2IARBPROC												glUniform2iARB;
		PFNGLUNIFORM2IVARBPROC												glUniform2ivARB;
		PFNGLUNIFORM3FARBPROC												glUniform3fARB;
		PFNGLUNIFORM3FVARBPROC												glUniform3fvARB;
		PFNGLUNIFORM3IARBPROC												glUniform3iARB;
		PFNGLUNIFORM3IVARBPROC												glUniform3ivARB;
		PFNGLUNIFORM4FARBPROC												glUniform4fARB;
		PFNGLUNIFORM4FVARBPROC												glUniform4fvARB;
		PFNGLUNIFORM4IARBPROC												glUniform4iARB;
		PFNGLUNIFORM4IVARBPROC												glUniform4ivARB;
		PFNGLUNIFORMMATRIX2FVARBPROC										glUniformMatrix2fvARB;
		PFNGLUNIFORMMATRIX3FVARBPROC										glUniformMatrix3fvARB;
		PFNGLUNIFORMMATRIX4FVARBPROC										glUniformMatrix4fvARB;
		PFNGLUSEPROGRAMOBJECTARBPROC										glUseProgramObjectARB;
		PFNGLVALIDATEPROGRAMARBPROC											glValidateProgramARB;

		/*
			GL_ARB_shader_storage_buffer_object
		*/
		PFNGLSHADERSTORAGEBLOCKBINDINGPROC									glShaderStorageBlockBinding;

		/*
			GL_ARB_shader_subroutine
		*/
		PFNGLGETACTIVESUBROUTINENAMEPROC									glGetActiveSubroutineName;
		PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC								glGetActiveSubroutineUniformName;
		PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC								glGetActiveSubroutineUniformiv;
		PFNGLGETPROGRAMSTAGEIVPROC											glGetProgramStageiv;
		PFNGLGETSUBROUTINEINDEXPROC											glGetSubroutineIndex;
		PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC								glGetSubroutineUniformLocation;
		PFNGLGETUNIFORMSUBROUTINEUIVPROC									glGetUniformSubroutineuiv;
		PFNGLUNIFORMSUBROUTINESUIVPROC										glUniformSubroutinesuiv;

		/*
			GL_ARB_shading_language_include
		*/
		PFNGLCOMPILESHADERINCLUDEARBPROC									glCompileShaderIncludeARB;
		PFNGLDELETENAMEDSTRINGARBPROC										glDeleteNamedStringARB;
		PFNGLGETNAMEDSTRINGARBPROC											glGetNamedStringARB;
		PFNGLGETNAMEDSTRINGIVARBPROC										glGetNamedStringivARB;
		PFNGLISNAMEDSTRINGARBPROC											glIsNamedStringARB;
		PFNGLNAMEDSTRINGARBPROC												glNamedStringARB;

		/*
			GL_ARB_sparse_buffer
		*/
		PFNGLBUFFERPAGECOMMITMENTARBPROC									glBufferPageCommitmentARB;

		/*
			GL_ARB_sparse_texture
		*/
		PFNGLTEXPAGECOMMITMENTARBPROC										glTexPageCommitmentARB;

		/*
			GL_ARB_sync
		*/
		PFNGLCLIENTWAITSYNCPROC												glClientWaitSync;
		PFNGLDELETESYNCPROC													glDeleteSync;
		PFNGLFENCESYNCPROC													glFenceSync;
		PFNGLGETINTEGER64VPROC												glGetInteger64v;
		PFNGLGETSYNCIVPROC													glGetSynciv;
		PFNGLISSYNCPROC														glIsSync;
		PFNGLWAITSYNCPROC													glWaitSync;

		/*
			GL_ARB_tessellation_shader
		*/
		PFNGLPATCHPARAMETERFVPROC											glPatchParameterfv;
		PFNGLPATCHPARAMETERIPROC											glPatchParameteri;

		/*
			GL_ARB_texture_barrier
		*/
		PFNGLTEXTUREBARRIERPROC												glTextureBarrier;

		/*
			GL_ARB_texture_buffer_object
		*/
		PFNGLTEXBUFFERARBPROC												glTexBufferARB;

		/*
			GL_ARB_texture_buffer_range
		*/
		PFNGLTEXBUFFERRANGEPROC												glTexBufferRange;
		PFNGLTEXTUREBUFFERRANGEEXTPROC										glTextureBufferRangeEXT;

		/*
			GL_ARB_texture_compression
		*/
		PFNGLCOMPRESSEDTEXIMAGE1DARBPROC									glCompressedTexImage1DARB;
		PFNGLCOMPRESSEDTEXIMAGE2DARBPROC									glCompressedTexImage2DARB;
		PFNGLCOMPRESSEDTEXIMAGE3DARBPROC									glCompressedTexImage3DARB;
		PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC									glCompressedTexSubImage1DARB;
		PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC									glCompressedTexSubImage2DARB;
		PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC									glCompressedTexSubImage3DARB;
		PFNGLGETCOMPRESSEDTEXIMAGEARBPROC									glGetCompressedTexImageARB;

		/*
			GL_ARB_texture_multisample
		*/
		PFNGLGETMULTISAMPLEFVPROC											glGetMultisamplefv;
		PFNGLSAMPLEMASKIPROC												glSampleMaski;
		PFNGLTEXIMAGE2DMULTISAMPLEPROC										glTexImage2DMultisample;
		PFNGLTEXIMAGE3DMULTISAMPLEPROC										glTexImage3DMultisample;

		/*
			GL_ARB_texture_storage
		*/
		PFNGLTEXSTORAGE1DPROC												glTexStorage1D;
		PFNGLTEXSTORAGE2DPROC												glTexStorage2D;
		PFNGLTEXSTORAGE3DPROC												glTexStorage3D;

		/*
			GL_ARB_texture_storage_multisample
		*/
		PFNGLTEXSTORAGE2DMULTISAMPLEPROC									glTexStorage2DMultisample;
		PFNGLTEXSTORAGE3DMULTISAMPLEPROC									glTexStorage3DMultisample;
		PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC								glTextureStorage2DMultisampleEXT;
		PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC								glTextureStorage3DMultisampleEXT;

		/*
			GL_ARB_texture_view
		*/
		PFNGLTEXTUREVIEWPROC												glTextureView;

		/*
			GL_ARB_timer_query
		*/
		PFNGLGETQUERYOBJECTI64VPROC											glGetQueryObjecti64v;
		PFNGLGETQUERYOBJECTUI64VPROC										glGetQueryObjectui64v;
		PFNGLQUERYCOUNTERPROC												glQueryCounter;

		/*
			GL_ARB_transform_feedback2
		*/
		PFNGLBINDTRANSFORMFEEDBACKPROC										glBindTransformFeedback;
		PFNGLDELETETRANSFORMFEEDBACKSPROC									glDeleteTransformFeedbacks;
		PFNGLDRAWTRANSFORMFEEDBACKPROC										glDrawTransformFeedback;
		PFNGLGENTRANSFORMFEEDBACKSPROC										glGenTransformFeedbacks;
		PFNGLISTRANSFORMFEEDBACKPROC										glIsTransformFeedback;
		PFNGLPAUSETRANSFORMFEEDBACKPROC										glPauseTransformFeedback;
		PFNGLRESUMETRANSFORMFEEDBACKPROC									glResumeTransformFeedback;

		/*
			GL_ARB_transform_feedback3
		*/
		PFNGLBEGINQUERYINDEXEDPROC											glBeginQueryIndexed;
		PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC								glDrawTransformFeedbackStream;
		PFNGLENDQUERYINDEXEDPROC											glEndQueryIndexed;
		PFNGLGETQUERYINDEXEDIVPROC											glGetQueryIndexediv;

		/*
			GL_ARB_transform_feedback_instanced
		*/
		PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC								glDrawTransformFeedbackInstanced;
		PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC						glDrawTransformFeedbackStreamInstanced;

		/*
			GL_ARB_transpose_matrix
		*/
		PFNGLLOADTRANSPOSEMATRIXDARBPROC									glLoadTransposeMatrixdARB;
		PFNGLLOADTRANSPOSEMATRIXFARBPROC									glLoadTransposeMatrixfARB;
		PFNGLMULTTRANSPOSEMATRIXDARBPROC									glMultTransposeMatrixdARB;
		PFNGLMULTTRANSPOSEMATRIXFARBPROC									glMultTransposeMatrixfARB;

		/*
			GL_ARB_uniform_buffer_object
		*/
		PFNGLBINDBUFFERBASEPROC												glBindBufferBase;
		PFNGLBINDBUFFERRANGEPROC											glBindBufferRange;
		PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC									glGetActiveUniformBlockName;
		PFNGLGETACTIVEUNIFORMBLOCKIVPROC									glGetActiveUniformBlockiv;
		PFNGLGETACTIVEUNIFORMNAMEPROC										glGetActiveUniformName;
		PFNGLGETACTIVEUNIFORMSIVPROC										glGetActiveUniformsiv;
		PFNGLGETINTEGERI_VPROC												glGetIntegeri_v;
		PFNGLGETUNIFORMBLOCKINDEXPROC										glGetUniformBlockIndex;
		PFNGLGETUNIFORMINDICESPROC											glGetUniformIndices;
		PFNGLUNIFORMBLOCKBINDINGPROC										glUniformBlockBinding;

		/*
			GL_ARB_vertex_array_object
		*/
		PFNGLBINDVERTEXARRAYPROC											glBindVertexArray;
		PFNGLDELETEVERTEXARRAYSPROC											glDeleteVertexArrays;
		PFNGLGENVERTEXARRAYSPROC											glGenVertexArrays;
		PFNGLISVERTEXARRAYPROC												glIsVertexArray;

		/*
			GL_ARB_vertex_attrib_64bit
		*/
		PFNGLGETVERTEXATTRIBLDVPROC											glGetVertexAttribLdv;
		PFNGLVERTEXATTRIBL1DPROC											glVertexAttribL1d;
		PFNGLVERTEXATTRIBL1DVPROC											glVertexAttribL1dv;
		PFNGLVERTEXATTRIBL2DPROC											glVertexAttribL2d;
		PFNGLVERTEXATTRIBL2DVPROC											glVertexAttribL2dv;
		PFNGLVERTEXATTRIBL3DPROC											glVertexAttribL3d;
		PFNGLVERTEXATTRIBL3DVPROC											glVertexAttribL3dv;
		PFNGLVERTEXATTRIBL4DPROC											glVertexAttribL4d;
		PFNGLVERTEXATTRIBL4DVPROC											glVertexAttribL4dv;
		PFNGLVERTEXATTRIBLPOINTERPROC										glVertexAttribLPointer;

		/*
			GL_ARB_vertex_attrib_binding
		*/
		PFNGLBINDVERTEXBUFFERPROC											glBindVertexBuffer;
		PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC								glVertexArrayBindVertexBufferEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC							glVertexArrayVertexAttribBindingEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC							glVertexArrayVertexAttribFormatEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC							glVertexArrayVertexAttribIFormatEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC							glVertexArrayVertexAttribLFormatEXT;
		PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC							glVertexArrayVertexBindingDivisorEXT;
		PFNGLVERTEXATTRIBBINDINGPROC										glVertexAttribBinding;
		PFNGLVERTEXATTRIBFORMATPROC											glVertexAttribFormat;
		PFNGLVERTEXATTRIBIFORMATPROC										glVertexAttribIFormat;
		PFNGLVERTEXATTRIBLFORMATPROC										glVertexAttribLFormat;
		PFNGLVERTEXBINDINGDIVISORPROC										glVertexBindingDivisor;

		/*
			GL_ARB_vertex_blend
		*/
		PFNGLVERTEXBLENDARBPROC												glVertexBlendARB;
		PFNGLWEIGHTPOINTERARBPROC											glWeightPointerARB;
		PFNGLWEIGHTBVARBPROC												glWeightbvARB;
		PFNGLWEIGHTDVARBPROC												glWeightdvARB;
		PFNGLWEIGHTFVARBPROC												glWeightfvARB;
		PFNGLWEIGHTIVARBPROC												glWeightivARB;
		PFNGLWEIGHTSVARBPROC												glWeightsvARB;
		PFNGLWEIGHTUBVARBPROC												glWeightubvARB;
		PFNGLWEIGHTUIVARBPROC												glWeightuivARB;
		PFNGLWEIGHTUSVARBPROC												glWeightusvARB;

		/*
			GL_ARB_vertex_buffer_object
		*/
		PFNGLBINDBUFFERARBPROC												glBindBufferARB;
		PFNGLBUFFERDATAARBPROC												glBufferDataARB;
		PFNGLBUFFERSUBDATAARBPROC											glBufferSubDataARB;
		PFNGLDELETEBUFFERSARBPROC											glDeleteBuffersARB;
		PFNGLGENBUFFERSARBPROC												glGenBuffersARB;
		PFNGLGETBUFFERPARAMETERIVARBPROC									glGetBufferParameterivARB;
		PFNGLGETBUFFERPOINTERVARBPROC										glGetBufferPointervARB;
		PFNGLGETBUFFERSUBDATAARBPROC										glGetBufferSubDataARB;
		PFNGLISBUFFERARBPROC												glIsBufferARB;
		PFNGLMAPBUFFERARBPROC												glMapBufferARB;
		PFNGLUNMAPBUFFERARBPROC												glUnmapBufferARB;

		/*
			GL_ARB_vertex_program
		*/
		PFNGLBINDPROGRAMARBPROC												glBindProgramARB;
		PFNGLDELETEPROGRAMSARBPROC											glDeleteProgramsARB;
		PFNGLDISABLEVERTEXATTRIBARRAYARBPROC								glDisableVertexAttribArrayARB;
		PFNGLENABLEVERTEXATTRIBARRAYARBPROC									glEnableVertexAttribArrayARB;
		PFNGLGENPROGRAMSARBPROC												glGenProgramsARB;
		PFNGLGETPROGRAMENVPARAMETERDVARBPROC								glGetProgramEnvParameterdvARB;
		PFNGLGETPROGRAMENVPARAMETERFVARBPROC								glGetProgramEnvParameterfvARB;
		PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC								glGetProgramLocalParameterdvARB;
		PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC								glGetProgramLocalParameterfvARB;
		PFNGLGETPROGRAMSTRINGARBPROC										glGetProgramStringARB;
		PFNGLGETPROGRAMIVARBPROC											glGetProgramivARB;
		PFNGLGETVERTEXATTRIBPOINTERVARBPROC									glGetVertexAttribPointervARB;
		PFNGLGETVERTEXATTRIBDVARBPROC										glGetVertexAttribdvARB;
		PFNGLGETVERTEXATTRIBFVARBPROC										glGetVertexAttribfvARB;
		PFNGLGETVERTEXATTRIBIVARBPROC										glGetVertexAttribivARB;
		PFNGLISPROGRAMARBPROC												glIsProgramARB;
		PFNGLPROGRAMENVPARAMETER4DARBPROC									glProgramEnvParameter4dARB;
		PFNGLPROGRAMENVPARAMETER4DVARBPROC									glProgramEnvParameter4dvARB;
		PFNGLPROGRAMENVPARAMETER4FARBPROC									glProgramEnvParameter4fARB;
		PFNGLPROGRAMENVPARAMETER4FVARBPROC									glProgramEnvParameter4fvARB;
		PFNGLPROGRAMLOCALPARAMETER4DARBPROC									glProgramLocalParameter4dARB;
		PFNGLPROGRAMLOCALPARAMETER4DVARBPROC								glProgramLocalParameter4dvARB;
		PFNGLPROGRAMLOCALPARAMETER4FARBPROC									glProgramLocalParameter4fARB;
		PFNGLPROGRAMLOCALPARAMETER4FVARBPROC								glProgramLocalParameter4fvARB;
		PFNGLPROGRAMSTRINGARBPROC											glProgramStringARB;
		PFNGLVERTEXATTRIB1DARBPROC											glVertexAttrib1dARB;
		PFNGLVERTEXATTRIB1DVARBPROC											glVertexAttrib1dvARB;
		PFNGLVERTEXATTRIB1FARBPROC											glVertexAttrib1fARB;
		PFNGLVERTEXATTRIB1FVARBPROC											glVertexAttrib1fvARB;
		PFNGLVERTEXATTRIB1SARBPROC											glVertexAttrib1sARB;
		PFNGLVERTEXATTRIB1SVARBPROC											glVertexAttrib1svARB;
		PFNGLVERTEXATTRIB2DARBPROC											glVertexAttrib2dARB;
		PFNGLVERTEXATTRIB2DVARBPROC											glVertexAttrib2dvARB;
		PFNGLVERTEXATTRIB2FARBPROC											glVertexAttrib2fARB;
		PFNGLVERTEXATTRIB2FVARBPROC											glVertexAttrib2fvARB;
		PFNGLVERTEXATTRIB2SARBPROC											glVertexAttrib2sARB;
		PFNGLVERTEXATTRIB2SVARBPROC											glVertexAttrib2svARB;
		PFNGLVERTEXATTRIB3DARBPROC											glVertexAttrib3dARB;
		PFNGLVERTEXATTRIB3DVARBPROC											glVertexAttrib3dvARB;
		PFNGLVERTEXATTRIB3FARBPROC											glVertexAttrib3fARB;
		PFNGLVERTEXATTRIB3FVARBPROC											glVertexAttrib3fvARB;
		PFNGLVERTEXATTRIB3SARBPROC											glVertexAttrib3sARB;
		PFNGLVERTEXATTRIB3SVARBPROC											glVertexAttrib3svARB;
		PFNGLVERTEXATTRIB4NBVARBPROC										glVertexAttrib4NbvARB;
		PFNGLVERTEXATTRIB4NIVARBPROC										glVertexAttrib4NivARB;
		PFNGLVERTEXATTRIB4NSVARBPROC										glVertexAttrib4NsvARB;
		PFNGLVERTEXATTRIB4NUBARBPROC										glVertexAttrib4NubARB;
		PFNGLVERTEXATTRIB4NUBVARBPROC										glVertexAttrib4NubvARB;
		PFNGLVERTEXATTRIB4NUIVARBPROC										glVertexAttrib4NuivARB;
		PFNGLVERTEXATTRIB4NUSVARBPROC										glVertexAttrib4NusvARB;
		PFNGLVERTEXATTRIB4BVARBPROC											glVertexAttrib4bvARB;
		PFNGLVERTEXATTRIB4DARBPROC											glVertexAttrib4dARB;
		PFNGLVERTEXATTRIB4DVARBPROC											glVertexAttrib4dvARB;
		PFNGLVERTEXATTRIB4FARBPROC											glVertexAttrib4fARB;
		PFNGLVERTEXATTRIB4FVARBPROC											glVertexAttrib4fvARB;
		PFNGLVERTEXATTRIB4IVARBPROC											glVertexAttrib4ivARB;
		PFNGLVERTEXATTRIB4SARBPROC											glVertexAttrib4sARB;
		PFNGLVERTEXATTRIB4SVARBPROC											glVertexAttrib4svARB;
		PFNGLVERTEXATTRIB4UBVARBPROC										glVertexAttrib4ubvARB;
		PFNGLVERTEXATTRIB4UIVARBPROC										glVertexAttrib4uivARB;
		PFNGLVERTEXATTRIB4USVARBPROC										glVertexAttrib4usvARB;
		PFNGLVERTEXATTRIBPOINTERARBPROC										glVertexAttribPointerARB;

		/*
			GL_ARB_vertex_shader
		*/
		PFNGLBINDATTRIBLOCATIONARBPROC										glBindAttribLocationARB;
		PFNGLGETACTIVEATTRIBARBPROC											glGetActiveAttribARB;
		PFNGLGETATTRIBLOCATIONARBPROC										glGetAttribLocationARB;

		/*
			GL_ARB_vertex_type_2_10_10_10_rev
		*/
		PFNGLCOLORP3UIPROC													glColorP3ui;
		PFNGLCOLORP3UIVPROC													glColorP3uiv;
		PFNGLCOLORP4UIPROC													glColorP4ui;
		PFNGLCOLORP4UIVPROC													glColorP4uiv;
		PFNGLMULTITEXCOORDP1UIPROC											glMultiTexCoordP1ui;
		PFNGLMULTITEXCOORDP1UIVPROC											glMultiTexCoordP1uiv;
		PFNGLMULTITEXCOORDP2UIPROC											glMultiTexCoordP2ui;
		PFNGLMULTITEXCOORDP2UIVPROC											glMultiTexCoordP2uiv;
		PFNGLMULTITEXCOORDP3UIPROC											glMultiTexCoordP3ui;
		PFNGLMULTITEXCOORDP3UIVPROC											glMultiTexCoordP3uiv;
		PFNGLMULTITEXCOORDP4UIPROC											glMultiTexCoordP4ui;
		PFNGLMULTITEXCOORDP4UIVPROC											glMultiTexCoordP4uiv;
		PFNGLNORMALP3UIPROC													glNormalP3ui;
		PFNGLNORMALP3UIVPROC												glNormalP3uiv;
		PFNGLSECONDARYCOLORP3UIPROC											glSecondaryColorP3ui;
		PFNGLSECONDARYCOLORP3UIVPROC										glSecondaryColorP3uiv;
		PFNGLTEXCOORDP1UIPROC												glTexCoordP1ui;
		PFNGLTEXCOORDP1UIVPROC												glTexCoordP1uiv;
		PFNGLTEXCOORDP2UIPROC												glTexCoordP2ui;
		PFNGLTEXCOORDP2UIVPROC												glTexCoordP2uiv;
		PFNGLTEXCOORDP3UIPROC												glTexCoordP3ui;
		PFNGLTEXCOORDP3UIVPROC												glTexCoordP3uiv;
		PFNGLTEXCOORDP4UIPROC												glTexCoordP4ui;
		PFNGLTEXCOORDP4UIVPROC												glTexCoordP4uiv;
		PFNGLVERTEXATTRIBP1UIPROC											glVertexAttribP1ui;
		PFNGLVERTEXATTRIBP1UIVPROC											glVertexAttribP1uiv;
		PFNGLVERTEXATTRIBP2UIPROC											glVertexAttribP2ui;
		PFNGLVERTEXATTRIBP2UIVPROC											glVertexAttribP2uiv;
		PFNGLVERTEXATTRIBP3UIPROC											glVertexAttribP3ui;
		PFNGLVERTEXATTRIBP3UIVPROC											glVertexAttribP3uiv;
		PFNGLVERTEXATTRIBP4UIPROC											glVertexAttribP4ui;
		PFNGLVERTEXATTRIBP4UIVPROC											glVertexAttribP4uiv;
		PFNGLVERTEXP2UIPROC													glVertexP2ui;
		PFNGLVERTEXP2UIVPROC												glVertexP2uiv;
		PFNGLVERTEXP3UIPROC													glVertexP3ui;
		PFNGLVERTEXP3UIVPROC												glVertexP3uiv;
		PFNGLVERTEXP4UIPROC													glVertexP4ui;
		PFNGLVERTEXP4UIVPROC												glVertexP4uiv;

		/*
			GL_ARB_viewport_array
		*/
		PFNGLDEPTHRANGEARRAYVPROC											glDepthRangeArrayv;
		PFNGLDEPTHRANGEINDEXEDPROC											glDepthRangeIndexed;
		PFNGLGETDOUBLEI_VPROC												glGetDoublei_v;
		PFNGLGETFLOATI_VPROC												glGetFloati_v;
		PFNGLSCISSORARRAYVPROC												glScissorArrayv;
		PFNGLSCISSORINDEXEDPROC												glScissorIndexed;
		PFNGLSCISSORINDEXEDVPROC											glScissorIndexedv;
		PFNGLVIEWPORTARRAYVPROC												glViewportArrayv;
		PFNGLVIEWPORTINDEXEDFPROC											glViewportIndexedf;
		PFNGLVIEWPORTINDEXEDFVPROC											glViewportIndexedfv;

		/*
			GL_ARB_window_pos
		*/
		PFNGLWINDOWPOS2DARBPROC												glWindowPos2dARB;
		PFNGLWINDOWPOS2DVARBPROC											glWindowPos2dvARB;
		PFNGLWINDOWPOS2FARBPROC												glWindowPos2fARB;
		PFNGLWINDOWPOS2FVARBPROC											glWindowPos2fvARB;
		PFNGLWINDOWPOS2IARBPROC												glWindowPos2iARB;
		PFNGLWINDOWPOS2IVARBPROC											glWindowPos2ivARB;
		PFNGLWINDOWPOS2SARBPROC												glWindowPos2sARB;
		PFNGLWINDOWPOS2SVARBPROC											glWindowPos2svARB;
		PFNGLWINDOWPOS3DARBPROC												glWindowPos3dARB;
		PFNGLWINDOWPOS3DVARBPROC											glWindowPos3dvARB;
		PFNGLWINDOWPOS3FARBPROC												glWindowPos3fARB;
		PFNGLWINDOWPOS3FVARBPROC											glWindowPos3fvARB;
		PFNGLWINDOWPOS3IARBPROC												glWindowPos3iARB;
		PFNGLWINDOWPOS3IVARBPROC											glWindowPos3ivARB;
		PFNGLWINDOWPOS3SARBPROC												glWindowPos3sARB;
		PFNGLWINDOWPOS3SVARBPROC											glWindowPos3svARB;

		/*
			GL_ATI_draw_buffers
		*/
		PFNGLDRAWBUFFERSATIPROC												glDrawBuffersATI;

		/*
			GL_ATI_element_array
		*/
		PFNGLDRAWELEMENTARRAYATIPROC										glDrawElementArrayATI;
		PFNGLDRAWRANGEELEMENTARRAYATIPROC									glDrawRangeElementArrayATI;
		PFNGLELEMENTPOINTERATIPROC											glElementPointerATI;

		/*
			GL_ATI_envmap_bumpmap
		*/
		PFNGLGETTEXBUMPPARAMETERFVATIPROC									glGetTexBumpParameterfvATI;
		PFNGLGETTEXBUMPPARAMETERIVATIPROC									glGetTexBumpParameterivATI;
		PFNGLTEXBUMPPARAMETERFVATIPROC										glTexBumpParameterfvATI;
		PFNGLTEXBUMPPARAMETERIVATIPROC										glTexBumpParameterivATI;

		/*
			GL_ATI_fragment_shader
		*/
		PFNGLALPHAFRAGMENTOP1ATIPROC										glAlphaFragmentOp1ATI;
		PFNGLALPHAFRAGMENTOP2ATIPROC										glAlphaFragmentOp2ATI;
		PFNGLALPHAFRAGMENTOP3ATIPROC										glAlphaFragmentOp3ATI;
		PFNGLBEGINFRAGMENTSHADERATIPROC										glBeginFragmentShaderATI;
		PFNGLBINDFRAGMENTSHADERATIPROC										glBindFragmentShaderATI;
		PFNGLCOLORFRAGMENTOP1ATIPROC										glColorFragmentOp1ATI;
		PFNGLCOLORFRAGMENTOP2ATIPROC										glColorFragmentOp2ATI;
		PFNGLCOLORFRAGMENTOP3ATIPROC										glColorFragmentOp3ATI;
		PFNGLDELETEFRAGMENTSHADERATIPROC									glDeleteFragmentShaderATI;
		PFNGLENDFRAGMENTSHADERATIPROC										glEndFragmentShaderATI;
		PFNGLGENFRAGMENTSHADERSATIPROC										glGenFragmentShadersATI;
		PFNGLPASSTEXCOORDATIPROC											glPassTexCoordATI;
		PFNGLSAMPLEMAPATIPROC												glSampleMapATI;
		PFNGLSETFRAGMENTSHADERCONSTANTATIPROC								glSetFragmentShaderConstantATI;

		/*
			GL_ATI_map_object_buffer
		*/
		PFNGLMAPOBJECTBUFFERATIPROC											glMapObjectBufferATI;
		PFNGLUNMAPOBJECTBUFFERATIPROC										glUnmapObjectBufferATI;

		/*
			GL_ATI_pn_triangles
		*/
		PFNGLPNTRIANGLESFATIPROC											glPNTrianglesfATI;
		PFNGLPNTRIANGLESIATIPROC											glPNTrianglesiATI;

		/*
			GL_ATI_separate_stencil
		*/
		PFNGLSTENCILFUNCSEPARATEATIPROC										glStencilFuncSeparateATI;
		PFNGLSTENCILOPSEPARATEATIPROC										glStencilOpSeparateATI;

		/*
			GL_ATI_vertex_array_object
		*/
		PFNGLARRAYOBJECTATIPROC												glArrayObjectATI;
		PFNGLFREEOBJECTBUFFERATIPROC										glFreeObjectBufferATI;
		PFNGLGETARRAYOBJECTFVATIPROC										glGetArrayObjectfvATI;
		PFNGLGETARRAYOBJECTIVATIPROC										glGetArrayObjectivATI;
		PFNGLGETOBJECTBUFFERFVATIPROC										glGetObjectBufferfvATI;
		PFNGLGETOBJECTBUFFERIVATIPROC										glGetObjectBufferivATI;
		PFNGLGETVARIANTARRAYOBJECTFVATIPROC									glGetVariantArrayObjectfvATI;
		PFNGLGETVARIANTARRAYOBJECTIVATIPROC									glGetVariantArrayObjectivATI;
		PFNGLISOBJECTBUFFERATIPROC											glIsObjectBufferATI;
		PFNGLNEWOBJECTBUFFERATIPROC											glNewObjectBufferATI;
		PFNGLUPDATEOBJECTBUFFERATIPROC										glUpdateObjectBufferATI;
		PFNGLVARIANTARRAYOBJECTATIPROC										glVariantArrayObjectATI;

		/*
			GL_ATI_vertex_attrib_array_object
		*/
		PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC							glGetVertexAttribArrayObjectfvATI;
		PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC							glGetVertexAttribArrayObjectivATI;
		PFNGLVERTEXATTRIBARRAYOBJECTATIPROC									glVertexAttribArrayObjectATI;

		/*
			GL_ATI_vertex_streams
		*/
		PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC								glClientActiveVertexStreamATI;
		PFNGLNORMALSTREAM3BATIPROC											glNormalStream3bATI;
		PFNGLNORMALSTREAM3BVATIPROC											glNormalStream3bvATI;
		PFNGLNORMALSTREAM3DATIPROC											glNormalStream3dATI;
		PFNGLNORMALSTREAM3DVATIPROC											glNormalStream3dvATI;
		PFNGLNORMALSTREAM3FATIPROC											glNormalStream3fATI;
		PFNGLNORMALSTREAM3FVATIPROC											glNormalStream3fvATI;
		PFNGLNORMALSTREAM3IATIPROC											glNormalStream3iATI;
		PFNGLNORMALSTREAM3IVATIPROC											glNormalStream3ivATI;
		PFNGLNORMALSTREAM3SATIPROC											glNormalStream3sATI;
		PFNGLNORMALSTREAM3SVATIPROC											glNormalStream3svATI;
		PFNGLVERTEXBLENDENVFATIPROC											glVertexBlendEnvfATI;
		PFNGLVERTEXBLENDENVIATIPROC											glVertexBlendEnviATI;
		PFNGLVERTEXSTREAM1DATIPROC											glVertexStream1dATI;
		PFNGLVERTEXSTREAM1DVATIPROC											glVertexStream1dvATI;
		PFNGLVERTEXSTREAM1FATIPROC											glVertexStream1fATI;
		PFNGLVERTEXSTREAM1FVATIPROC											glVertexStream1fvATI;
		PFNGLVERTEXSTREAM1IATIPROC											glVertexStream1iATI;
		PFNGLVERTEXSTREAM1IVATIPROC											glVertexStream1ivATI;
		PFNGLVERTEXSTREAM1SATIPROC											glVertexStream1sATI;
		PFNGLVERTEXSTREAM1SVATIPROC											glVertexStream1svATI;
		PFNGLVERTEXSTREAM2DATIPROC											glVertexStream2dATI;
		PFNGLVERTEXSTREAM2DVATIPROC											glVertexStream2dvATI;
		PFNGLVERTEXSTREAM2FATIPROC											glVertexStream2fATI;
		PFNGLVERTEXSTREAM2FVATIPROC											glVertexStream2fvATI;
		PFNGLVERTEXSTREAM2IATIPROC											glVertexStream2iATI;
		PFNGLVERTEXSTREAM2IVATIPROC											glVertexStream2ivATI;
		PFNGLVERTEXSTREAM2SATIPROC											glVertexStream2sATI;
		PFNGLVERTEXSTREAM2SVATIPROC											glVertexStream2svATI;
		PFNGLVERTEXSTREAM3DATIPROC											glVertexStream3dATI;
		PFNGLVERTEXSTREAM3DVATIPROC											glVertexStream3dvATI;
		PFNGLVERTEXSTREAM3FATIPROC											glVertexStream3fATI;
		PFNGLVERTEXSTREAM3FVATIPROC											glVertexStream3fvATI;
		PFNGLVERTEXSTREAM3IATIPROC											glVertexStream3iATI;
		PFNGLVERTEXSTREAM3IVATIPROC											glVertexStream3ivATI;
		PFNGLVERTEXSTREAM3SATIPROC											glVertexStream3sATI;
		PFNGLVERTEXSTREAM3SVATIPROC											glVertexStream3svATI;
		PFNGLVERTEXSTREAM4DATIPROC											glVertexStream4dATI;
		PFNGLVERTEXSTREAM4DVATIPROC											glVertexStream4dvATI;
		PFNGLVERTEXSTREAM4FATIPROC											glVertexStream4fATI;
		PFNGLVERTEXSTREAM4FVATIPROC											glVertexStream4fvATI;
		PFNGLVERTEXSTREAM4IATIPROC											glVertexStream4iATI;
		PFNGLVERTEXSTREAM4IVATIPROC											glVertexStream4ivATI;
		PFNGLVERTEXSTREAM4SATIPROC											glVertexStream4sATI;
		PFNGLVERTEXSTREAM4SVATIPROC											glVertexStream4svATI;

		/*
			GL_EXT_base_instance
		*/
		PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC							glDrawArraysInstancedBaseInstanceEXT;
		PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC						glDrawElementsInstancedBaseInstanceEXT;
		PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC				glDrawElementsInstancedBaseVertexBaseInstanceEXT;

		/*
			GL_EXT_bindable_uniform
		*/
		PFNGLGETUNIFORMBUFFERSIZEEXTPROC									glGetUniformBufferSizeEXT;
		PFNGLGETUNIFORMOFFSETEXTPROC										glGetUniformOffsetEXT;
		PFNGLUNIFORMBUFFEREXTPROC											glUniformBufferEXT;

		/*
			GL_EXT_blend_color
		*/
		PFNGLBLENDCOLOREXTPROC												glBlendColorEXT;

		/*
			GL_EXT_blend_equation_separate
		*/
		PFNGLBLENDEQUATIONSEPARATEEXTPROC									glBlendEquationSeparateEXT;

		/*
			GL_EXT_blend_func_extended
		*/
		PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC								glBindFragDataLocationIndexedEXT;
		PFNGLGETFRAGDATAINDEXEXTPROC										glGetFragDataIndexEXT;
		PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC							glGetProgramResourceLocationIndexEXT;

		/*
			GL_EXT_blend_func_separate
		*/
		PFNGLBLENDFUNCSEPARATEEXTPROC										glBlendFuncSeparateEXT;

		/*
			GL_EXT_blend_minmax
		*/
		PFNGLBLENDEQUATIONEXTPROC											glBlendEquationEXT;

		/*
			GL_EXT_buffer_storage
		*/
		PFNGLBUFFERSTORAGEEXTPROC											glBufferStorageEXT;
		PFNGLNAMEDBUFFERSTORAGEEXTPROC										glNamedBufferStorageEXT;

		/*
			GL_EXT_clear_texture
		*/
		PFNGLCLEARTEXIMAGEEXTPROC											glClearTexImageEXT;
		PFNGLCLEARTEXSUBIMAGEEXTPROC										glClearTexSubImageEXT;

		/*
			GL_EXT_color_subtable
		*/
		PFNGLCOLORSUBTABLEEXTPROC											glColorSubTableEXT;
		PFNGLCOPYCOLORSUBTABLEEXTPROC										glCopyColorSubTableEXT;

		/*
			GL_EXT_compiled_vertex_array
		*/
		PFNGLLOCKARRAYSEXTPROC												glLockArraysEXT;
		PFNGLUNLOCKARRAYSEXTPROC											glUnlockArraysEXT;

		/*
			GL_EXT_convolution
		*/
		PFNGLCONVOLUTIONFILTER1DEXTPROC										glConvolutionFilter1DEXT;
		PFNGLCONVOLUTIONFILTER2DEXTPROC										glConvolutionFilter2DEXT;
		PFNGLCONVOLUTIONPARAMETERFEXTPROC									glConvolutionParameterfEXT;
		PFNGLCONVOLUTIONPARAMETERFVEXTPROC									glConvolutionParameterfvEXT;
		PFNGLCONVOLUTIONPARAMETERIEXTPROC									glConvolutionParameteriEXT;
		PFNGLCONVOLUTIONPARAMETERIVEXTPROC									glConvolutionParameterivEXT;
		PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC									glCopyConvolutionFilter1DEXT;
		PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC									glCopyConvolutionFilter2DEXT;
		PFNGLGETCONVOLUTIONFILTEREXTPROC									glGetConvolutionFilterEXT;
		PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC								glGetConvolutionParameterfvEXT;
		PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC								glGetConvolutionParameterivEXT;
		PFNGLGETSEPARABLEFILTEREXTPROC										glGetSeparableFilterEXT;
		PFNGLSEPARABLEFILTER2DEXTPROC										glSeparableFilter2DEXT;

		/*
			GL_EXT_coordinate_frame
		*/
		PFNGLBINORMALPOINTEREXTPROC											glBinormalPointerEXT;
		PFNGLTANGENTPOINTEREXTPROC											glTangentPointerEXT;

		/*
			GL_EXT_copy_image
		*/
		PFNGLCOPYIMAGESUBDATAEXTPROC										glCopyImageSubDataEXT;

		/*
			GL_EXT_copy_texture
		*/
		PFNGLCOPYTEXIMAGE1DEXTPROC											glCopyTexImage1DEXT;
		PFNGLCOPYTEXIMAGE2DEXTPROC											glCopyTexImage2DEXT;
		PFNGLCOPYTEXSUBIMAGE1DEXTPROC										glCopyTexSubImage1DEXT;
		PFNGLCOPYTEXSUBIMAGE2DEXTPROC										glCopyTexSubImage2DEXT;
		PFNGLCOPYTEXSUBIMAGE3DEXTPROC										glCopyTexSubImage3DEXT;

		/*
			GL_EXT_cull_vertex
		*/
		PFNGLCULLPARAMETERDVEXTPROC											glCullParameterdvEXT;
		PFNGLCULLPARAMETERFVEXTPROC											glCullParameterfvEXT;

		/*
			GL_EXT_debug_label
		*/
		PFNGLGETOBJECTLABELEXTPROC											glGetObjectLabelEXT;
		PFNGLLABELOBJECTEXTPROC												glLabelObjectEXT;

		/*
			GL_EXT_debug_marker
		*/
		PFNGLINSERTEVENTMARKEREXTPROC										glInsertEventMarkerEXT;
		PFNGLPOPGROUPMARKEREXTPROC											glPopGroupMarkerEXT;
		PFNGLPUSHGROUPMARKEREXTPROC											glPushGroupMarkerEXT;

		/*
			GL_EXT_depth_bounds_test
		*/
		PFNGLDEPTHBOUNDSEXTPROC												glDepthBoundsEXT;

		/*
			GL_EXT_direct_state_access
		*/
		PFNGLBINDMULTITEXTUREEXTPROC										glBindMultiTextureEXT;
		PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC								glCheckNamedFramebufferStatusEXT;
		PFNGLCLIENTATTRIBDEFAULTEXTPROC										glClientAttribDefaultEXT;
		PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC								glCompressedMultiTexImage1DEXT;
		PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC								glCompressedMultiTexImage2DEXT;
		PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC								glCompressedMultiTexImage3DEXT;
		PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC							glCompressedMultiTexSubImage1DEXT;
		PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC							glCompressedMultiTexSubImage2DEXT;
		PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC							glCompressedMultiTexSubImage3DEXT;
		PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC								glCompressedTextureImage1DEXT;
		PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC								glCompressedTextureImage2DEXT;
		PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC								glCompressedTextureImage3DEXT;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC								glCompressedTextureSubImage1DEXT;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC								glCompressedTextureSubImage2DEXT;
		PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC								glCompressedTextureSubImage3DEXT;
		PFNGLCOPYMULTITEXIMAGE1DEXTPROC										glCopyMultiTexImage1DEXT;
		PFNGLCOPYMULTITEXIMAGE2DEXTPROC										glCopyMultiTexImage2DEXT;
		PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC									glCopyMultiTexSubImage1DEXT;
		PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC									glCopyMultiTexSubImage2DEXT;
		PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC									glCopyMultiTexSubImage3DEXT;
		PFNGLCOPYTEXTUREIMAGE1DEXTPROC										glCopyTextureImage1DEXT;
		PFNGLCOPYTEXTUREIMAGE2DEXTPROC										glCopyTextureImage2DEXT;
		PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC									glCopyTextureSubImage1DEXT;
		PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC									glCopyTextureSubImage2DEXT;
		PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC									glCopyTextureSubImage3DEXT;
		PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC								glDisableClientStateIndexedEXT;
		PFNGLDISABLECLIENTSTATEIEXTPROC										glDisableClientStateiEXT;
		PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC								glDisableVertexArrayAttribEXT;
		PFNGLDISABLEVERTEXARRAYEXTPROC										glDisableVertexArrayEXT;
		PFNGLENABLECLIENTSTATEINDEXEDEXTPROC								glEnableClientStateIndexedEXT;
		PFNGLENABLECLIENTSTATEIEXTPROC										glEnableClientStateiEXT;
		PFNGLENABLEVERTEXARRAYATTRIBEXTPROC									glEnableVertexArrayAttribEXT;
		PFNGLENABLEVERTEXARRAYEXTPROC										glEnableVertexArrayEXT;
		PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC								glFlushMappedNamedBufferRangeEXT;
		PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC									glFramebufferDrawBufferEXT;
		PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC									glFramebufferDrawBuffersEXT;
		PFNGLFRAMEBUFFERREADBUFFEREXTPROC									glFramebufferReadBufferEXT;
		PFNGLGENERATEMULTITEXMIPMAPEXTPROC									glGenerateMultiTexMipmapEXT;
		PFNGLGENERATETEXTUREMIPMAPEXTPROC									glGenerateTextureMipmapEXT;
		PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC								glGetCompressedMultiTexImageEXT;
		PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC								glGetCompressedTextureImageEXT;
		PFNGLGETDOUBLEINDEXEDVEXTPROC										glGetDoubleIndexedvEXT;
		PFNGLGETDOUBLEI_VEXTPROC											glGetDoublei_vEXT;
		PFNGLGETFLOATINDEXEDVEXTPROC										glGetFloatIndexedvEXT;
		PFNGLGETFLOATI_VEXTPROC												glGetFloati_vEXT;
		PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC								glGetFramebufferParameterivEXT;
		PFNGLGETMULTITEXENVFVEXTPROC										glGetMultiTexEnvfvEXT;
		PFNGLGETMULTITEXENVIVEXTPROC										glGetMultiTexEnvivEXT;
		PFNGLGETMULTITEXGENDVEXTPROC										glGetMultiTexGendvEXT;
		PFNGLGETMULTITEXGENFVEXTPROC										glGetMultiTexGenfvEXT;
		PFNGLGETMULTITEXGENIVEXTPROC										glGetMultiTexGenivEXT;
		PFNGLGETMULTITEXIMAGEEXTPROC										glGetMultiTexImageEXT;
		PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC								glGetMultiTexLevelParameterfvEXT;
		PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC								glGetMultiTexLevelParameterivEXT;
		PFNGLGETMULTITEXPARAMETERIIVEXTPROC									glGetMultiTexParameterIivEXT;
		PFNGLGETMULTITEXPARAMETERIUIVEXTPROC								glGetMultiTexParameterIuivEXT;
		PFNGLGETMULTITEXPARAMETERFVEXTPROC									glGetMultiTexParameterfvEXT;
		PFNGLGETMULTITEXPARAMETERIVEXTPROC									glGetMultiTexParameterivEXT;
		PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC								glGetNamedBufferParameterivEXT;
		PFNGLGETNAMEDBUFFERPOINTERVEXTPROC									glGetNamedBufferPointervEXT;
		PFNGLGETNAMEDBUFFERSUBDATAEXTPROC									glGetNamedBufferSubDataEXT;
		PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC				glGetNamedFramebufferAttachmentParameterivEXT;
		PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC						glGetNamedProgramLocalParameterIivEXT;
		PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC						glGetNamedProgramLocalParameterIuivEXT;
		PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC							glGetNamedProgramLocalParameterdvEXT;
		PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC							glGetNamedProgramLocalParameterfvEXT;
		PFNGLGETNAMEDPROGRAMSTRINGEXTPROC									glGetNamedProgramStringEXT;
		PFNGLGETNAMEDPROGRAMIVEXTPROC										glGetNamedProgramivEXT;
		PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC							glGetNamedRenderbufferParameterivEXT;
		PFNGLGETPOINTERINDEXEDVEXTPROC										glGetPointerIndexedvEXT;
		PFNGLGETPOINTERI_VEXTPROC											glGetPointeri_vEXT;
		PFNGLGETTEXTUREIMAGEEXTPROC											glGetTextureImageEXT;
		PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC								glGetTextureLevelParameterfvEXT;
		PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC								glGetTextureLevelParameterivEXT;
		PFNGLGETTEXTUREPARAMETERIIVEXTPROC									glGetTextureParameterIivEXT;
		PFNGLGETTEXTUREPARAMETERIUIVEXTPROC									glGetTextureParameterIuivEXT;
		PFNGLGETTEXTUREPARAMETERFVEXTPROC									glGetTextureParameterfvEXT;
		PFNGLGETTEXTUREPARAMETERIVEXTPROC									glGetTextureParameterivEXT;
		PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC								glGetVertexArrayIntegeri_vEXT;
		PFNGLGETVERTEXARRAYINTEGERVEXTPROC									glGetVertexArrayIntegervEXT;
		PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC								glGetVertexArrayPointeri_vEXT;
		PFNGLGETVERTEXARRAYPOINTERVEXTPROC									glGetVertexArrayPointervEXT;
		PFNGLMAPNAMEDBUFFEREXTPROC											glMapNamedBufferEXT;
		PFNGLMAPNAMEDBUFFERRANGEEXTPROC										glMapNamedBufferRangeEXT;
		PFNGLMATRIXFRUSTUMEXTPROC											glMatrixFrustumEXT;
		PFNGLMATRIXLOADIDENTITYEXTPROC										glMatrixLoadIdentityEXT;
		PFNGLMATRIXLOADTRANSPOSEDEXTPROC									glMatrixLoadTransposedEXT;
		PFNGLMATRIXLOADTRANSPOSEFEXTPROC									glMatrixLoadTransposefEXT;
		PFNGLMATRIXLOADDEXTPROC												glMatrixLoaddEXT;
		PFNGLMATRIXLOADFEXTPROC												glMatrixLoadfEXT;
		PFNGLMATRIXMULTTRANSPOSEDEXTPROC									glMatrixMultTransposedEXT;
		PFNGLMATRIXMULTTRANSPOSEFEXTPROC									glMatrixMultTransposefEXT;
		PFNGLMATRIXMULTDEXTPROC												glMatrixMultdEXT;
		PFNGLMATRIXMULTFEXTPROC												glMatrixMultfEXT;
		PFNGLMATRIXORTHOEXTPROC												glMatrixOrthoEXT;
		PFNGLMATRIXPOPEXTPROC												glMatrixPopEXT;
		PFNGLMATRIXPUSHEXTPROC												glMatrixPushEXT;
		PFNGLMATRIXROTATEDEXTPROC											glMatrixRotatedEXT;
		PFNGLMATRIXROTATEFEXTPROC											glMatrixRotatefEXT;
		PFNGLMATRIXSCALEDEXTPROC											glMatrixScaledEXT;
		PFNGLMATRIXSCALEFEXTPROC											glMatrixScalefEXT;
		PFNGLMATRIXTRANSLATEDEXTPROC										glMatrixTranslatedEXT;
		PFNGLMATRIXTRANSLATEFEXTPROC										glMatrixTranslatefEXT;
		PFNGLMULTITEXBUFFEREXTPROC											glMultiTexBufferEXT;
		PFNGLMULTITEXCOORDPOINTEREXTPROC									glMultiTexCoordPointerEXT;
		PFNGLMULTITEXENVFEXTPROC											glMultiTexEnvfEXT;
		PFNGLMULTITEXENVFVEXTPROC											glMultiTexEnvfvEXT;
		PFNGLMULTITEXENVIEXTPROC											glMultiTexEnviEXT;
		PFNGLMULTITEXENVIVEXTPROC											glMultiTexEnvivEXT;
		PFNGLMULTITEXGENDEXTPROC											glMultiTexGendEXT;
		PFNGLMULTITEXGENDVEXTPROC											glMultiTexGendvEXT;
		PFNGLMULTITEXGENFEXTPROC											glMultiTexGenfEXT;
		PFNGLMULTITEXGENFVEXTPROC											glMultiTexGenfvEXT;
		PFNGLMULTITEXGENIEXTPROC											glMultiTexGeniEXT;
		PFNGLMULTITEXGENIVEXTPROC											glMultiTexGenivEXT;
		PFNGLMULTITEXIMAGE1DEXTPROC											glMultiTexImage1DEXT;
		PFNGLMULTITEXIMAGE2DEXTPROC											glMultiTexImage2DEXT;
		PFNGLMULTITEXIMAGE3DEXTPROC											glMultiTexImage3DEXT;
		PFNGLMULTITEXPARAMETERIIVEXTPROC									glMultiTexParameterIivEXT;
		PFNGLMULTITEXPARAMETERIUIVEXTPROC									glMultiTexParameterIuivEXT;
		PFNGLMULTITEXPARAMETERFEXTPROC										glMultiTexParameterfEXT;
		PFNGLMULTITEXPARAMETERFVEXTPROC										glMultiTexParameterfvEXT;
		PFNGLMULTITEXPARAMETERIEXTPROC										glMultiTexParameteriEXT;
		PFNGLMULTITEXPARAMETERIVEXTPROC										glMultiTexParameterivEXT;
		PFNGLMULTITEXRENDERBUFFEREXTPROC									glMultiTexRenderbufferEXT;
		PFNGLMULTITEXSUBIMAGE1DEXTPROC										glMultiTexSubImage1DEXT;
		PFNGLMULTITEXSUBIMAGE2DEXTPROC										glMultiTexSubImage2DEXT;
		PFNGLMULTITEXSUBIMAGE3DEXTPROC										glMultiTexSubImage3DEXT;
		PFNGLNAMEDBUFFERDATAEXTPROC											glNamedBufferDataEXT;
		PFNGLNAMEDBUFFERSUBDATAEXTPROC										glNamedBufferSubDataEXT;
		PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC									glNamedCopyBufferSubDataEXT;
		PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC							glNamedFramebufferRenderbufferEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC								glNamedFramebufferTexture1DEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC								glNamedFramebufferTexture2DEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC								glNamedFramebufferTexture3DEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC									glNamedFramebufferTextureEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC								glNamedFramebufferTextureFaceEXT;
		PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC							glNamedFramebufferTextureLayerEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC							glNamedProgramLocalParameter4dEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC							glNamedProgramLocalParameter4dvEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC							glNamedProgramLocalParameter4fEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC							glNamedProgramLocalParameter4fvEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC							glNamedProgramLocalParameterI4iEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC							glNamedProgramLocalParameterI4ivEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC							glNamedProgramLocalParameterI4uiEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC							glNamedProgramLocalParameterI4uivEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC							glNamedProgramLocalParameters4fvEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC							glNamedProgramLocalParametersI4ivEXT;
		PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC						glNamedProgramLocalParametersI4uivEXT;
		PFNGLNAMEDPROGRAMSTRINGEXTPROC										glNamedProgramStringEXT;
		PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC								glNamedRenderbufferStorageEXT;
		PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC				glNamedRenderbufferStorageMultisampleCoverageEXT;
		PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC						glNamedRenderbufferStorageMultisampleEXT;
		PFNGLPROGRAMUNIFORM1FEXTPROC										glProgramUniform1fEXT;
		PFNGLPROGRAMUNIFORM1FVEXTPROC										glProgramUniform1fvEXT;
		PFNGLPROGRAMUNIFORM1IEXTPROC										glProgramUniform1iEXT;
		PFNGLPROGRAMUNIFORM1IVEXTPROC										glProgramUniform1ivEXT;
		PFNGLPROGRAMUNIFORM1UIEXTPROC										glProgramUniform1uiEXT;
		PFNGLPROGRAMUNIFORM1UIVEXTPROC										glProgramUniform1uivEXT;
		PFNGLPROGRAMUNIFORM2FEXTPROC										glProgramUniform2fEXT;
		PFNGLPROGRAMUNIFORM2FVEXTPROC										glProgramUniform2fvEXT;
		PFNGLPROGRAMUNIFORM2IEXTPROC										glProgramUniform2iEXT;
		PFNGLPROGRAMUNIFORM2IVEXTPROC										glProgramUniform2ivEXT;
		PFNGLPROGRAMUNIFORM2UIEXTPROC										glProgramUniform2uiEXT;
		PFNGLPROGRAMUNIFORM2UIVEXTPROC										glProgramUniform2uivEXT;
		PFNGLPROGRAMUNIFORM3FEXTPROC										glProgramUniform3fEXT;
		PFNGLPROGRAMUNIFORM3FVEXTPROC										glProgramUniform3fvEXT;
		PFNGLPROGRAMUNIFORM3IEXTPROC										glProgramUniform3iEXT;
		PFNGLPROGRAMUNIFORM3IVEXTPROC										glProgramUniform3ivEXT;
		PFNGLPROGRAMUNIFORM3UIEXTPROC										glProgramUniform3uiEXT;
		PFNGLPROGRAMUNIFORM3UIVEXTPROC										glProgramUniform3uivEXT;
		PFNGLPROGRAMUNIFORM4FEXTPROC										glProgramUniform4fEXT;
		PFNGLPROGRAMUNIFORM4FVEXTPROC										glProgramUniform4fvEXT;
		PFNGLPROGRAMUNIFORM4IEXTPROC										glProgramUniform4iEXT;
		PFNGLPROGRAMUNIFORM4IVEXTPROC										glProgramUniform4ivEXT;
		PFNGLPROGRAMUNIFORM4UIEXTPROC										glProgramUniform4uiEXT;
		PFNGLPROGRAMUNIFORM4UIVEXTPROC										glProgramUniform4uivEXT;
		PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC									glProgramUniformMatrix2fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC								glProgramUniformMatrix2x3fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC								glProgramUniformMatrix2x4fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC									glProgramUniformMatrix3fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC								glProgramUniformMatrix3x2fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC								glProgramUniformMatrix3x4fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC									glProgramUniformMatrix4fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC								glProgramUniformMatrix4x2fvEXT;
		PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC								glProgramUniformMatrix4x3fvEXT;
		PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC									glPushClientAttribDefaultEXT;
		PFNGLTEXTUREBUFFEREXTPROC											glTextureBufferEXT;
		PFNGLTEXTUREIMAGE1DEXTPROC											glTextureImage1DEXT;
		PFNGLTEXTUREIMAGE2DEXTPROC											glTextureImage2DEXT;
		PFNGLTEXTUREIMAGE3DEXTPROC											glTextureImage3DEXT;
		PFNGLTEXTUREPARAMETERIIVEXTPROC										glTextureParameterIivEXT;
		PFNGLTEXTUREPARAMETERIUIVEXTPROC									glTextureParameterIuivEXT;
		PFNGLTEXTUREPARAMETERFEXTPROC										glTextureParameterfEXT;
		PFNGLTEXTUREPARAMETERFVEXTPROC										glTextureParameterfvEXT;
		PFNGLTEXTUREPARAMETERIEXTPROC										glTextureParameteriEXT;
		PFNGLTEXTUREPARAMETERIVEXTPROC										glTextureParameterivEXT;
		PFNGLTEXTURERENDERBUFFEREXTPROC										glTextureRenderbufferEXT;
		PFNGLTEXTURESUBIMAGE1DEXTPROC										glTextureSubImage1DEXT;
		PFNGLTEXTURESUBIMAGE2DEXTPROC										glTextureSubImage2DEXT;
		PFNGLTEXTURESUBIMAGE3DEXTPROC										glTextureSubImage3DEXT;
		PFNGLUNMAPNAMEDBUFFEREXTPROC										glUnmapNamedBufferEXT;
		PFNGLVERTEXARRAYCOLOROFFSETEXTPROC									glVertexArrayColorOffsetEXT;
		PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC								glVertexArrayEdgeFlagOffsetEXT;
		PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC								glVertexArrayFogCoordOffsetEXT;
		PFNGLVERTEXARRAYINDEXOFFSETEXTPROC									glVertexArrayIndexOffsetEXT;
		PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC							glVertexArrayMultiTexCoordOffsetEXT;
		PFNGLVERTEXARRAYNORMALOFFSETEXTPROC									glVertexArrayNormalOffsetEXT;
		PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC							glVertexArraySecondaryColorOffsetEXT;
		PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC								glVertexArrayTexCoordOffsetEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC							glVertexArrayVertexAttribDivisorEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC							glVertexArrayVertexAttribIOffsetEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC							glVertexArrayVertexAttribOffsetEXT;
		PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC									glVertexArrayVertexOffsetEXT;

		/*
			GL_EXT_discard_framebuffer
		*/
		PFNGLDISCARDFRAMEBUFFEREXTPROC										glDiscardFramebufferEXT;

		/*
			GL_EXT_draw_buffers
		*/
		PFNGLDRAWBUFFERSEXTPROC												glDrawBuffersEXT;

		/*
			GL_EXT_draw_buffers2
		*/
		PFNGLCOLORMASKINDEXEDEXTPROC										glColorMaskIndexedEXT;
		PFNGLDISABLEINDEXEDEXTPROC											glDisableIndexedEXT;
		PFNGLENABLEINDEXEDEXTPROC											glEnableIndexedEXT;
		PFNGLGETBOOLEANINDEXEDVEXTPROC										glGetBooleanIndexedvEXT;
		PFNGLGETINTEGERINDEXEDVEXTPROC										glGetIntegerIndexedvEXT;
		PFNGLISENABLEDINDEXEDEXTPROC										glIsEnabledIndexedEXT;

		/*
			GL_EXT_draw_buffers_indexed
		*/
		PFNGLBLENDEQUATIONSEPARATEIEXTPROC									glBlendEquationSeparateiEXT;
		PFNGLBLENDEQUATIONIEXTPROC											glBlendEquationiEXT;
		PFNGLBLENDFUNCSEPARATEIEXTPROC										glBlendFuncSeparateiEXT;
		PFNGLBLENDFUNCIEXTPROC												glBlendFunciEXT;
		PFNGLCOLORMASKIEXTPROC												glColorMaskiEXT;
		PFNGLDISABLEIEXTPROC												glDisableiEXT;
		PFNGLENABLEIEXTPROC													glEnableiEXT;
		PFNGLISENABLEDIEXTPROC												glIsEnablediEXT;

		/*
			GL_EXT_draw_elements_base_vertex
		*/
		PFNGLDRAWELEMENTSBASEVERTEXEXTPROC									glDrawElementsBaseVertexEXT;
		PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC							glDrawElementsInstancedBaseVertexEXT;
		PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC								glDrawRangeElementsBaseVertexEXT;
		PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC								glMultiDrawElementsBaseVertexEXT;

		/*
			GL_EXT_draw_instanced
		*/
		PFNGLDRAWARRAYSINSTANCEDEXTPROC										glDrawArraysInstancedEXT;
		PFNGLDRAWELEMENTSINSTANCEDEXTPROC									glDrawElementsInstancedEXT;

		/*
			GL_EXT_draw_range_elements
		*/
		PFNGLDRAWRANGEELEMENTSEXTPROC										glDrawRangeElementsEXT;

		/*
			GL_EXT_external_buffer
		*/
		PFNGLBUFFERSTORAGEEXTERNALEXTPROC									glBufferStorageExternalEXT;
		PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC								glNamedBufferStorageExternalEXT;

		/*
			GL_EXT_fog_coord
		*/
		PFNGLFOGCOORDPOINTEREXTPROC											glFogCoordPointerEXT;
		PFNGLFOGCOORDDEXTPROC												glFogCoorddEXT;
		PFNGLFOGCOORDDVEXTPROC												glFogCoorddvEXT;
		PFNGLFOGCOORDFEXTPROC												glFogCoordfEXT;
		PFNGLFOGCOORDFVEXTPROC												glFogCoordfvEXT;

		/*
			GL_EXT_fragment_lighting
		*/
		PFNGLFRAGMENTCOLORMATERIALEXTPROC									glFragmentColorMaterialEXT;
		PFNGLFRAGMENTLIGHTMODELFEXTPROC										glFragmentLightModelfEXT;
		PFNGLFRAGMENTLIGHTMODELFVEXTPROC									glFragmentLightModelfvEXT;
		PFNGLFRAGMENTLIGHTMODELIEXTPROC										glFragmentLightModeliEXT;
		PFNGLFRAGMENTLIGHTMODELIVEXTPROC									glFragmentLightModelivEXT;
		PFNGLFRAGMENTLIGHTFEXTPROC											glFragmentLightfEXT;
		PFNGLFRAGMENTLIGHTFVEXTPROC											glFragmentLightfvEXT;
		PFNGLFRAGMENTLIGHTIEXTPROC											glFragmentLightiEXT;
		PFNGLFRAGMENTLIGHTIVEXTPROC											glFragmentLightivEXT;
		PFNGLFRAGMENTMATERIALFEXTPROC										glFragmentMaterialfEXT;
		PFNGLFRAGMENTMATERIALFVEXTPROC										glFragmentMaterialfvEXT;
		PFNGLFRAGMENTMATERIALIEXTPROC										glFragmentMaterialiEXT;
		PFNGLFRAGMENTMATERIALIVEXTPROC										glFragmentMaterialivEXT;
		PFNGLGETFRAGMENTLIGHTFVEXTPROC										glGetFragmentLightfvEXT;
		PFNGLGETFRAGMENTLIGHTIVEXTPROC										glGetFragmentLightivEXT;
		PFNGLGETFRAGMENTMATERIALFVEXTPROC									glGetFragmentMaterialfvEXT;
		PFNGLGETFRAGMENTMATERIALIVEXTPROC									glGetFragmentMaterialivEXT;
		PFNGLLIGHTENVIEXTPROC												glLightEnviEXT;

		/*
			GL_EXT_framebuffer_blit
		*/
		PFNGLBLITFRAMEBUFFEREXTPROC											glBlitFramebufferEXT;

		/*
			GL_EXT_framebuffer_multisample
		*/
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC							glRenderbufferStorageMultisampleEXT;

		/*
			GL_EXT_framebuffer_object
		*/
		PFNGLBINDFRAMEBUFFEREXTPROC											glBindFramebufferEXT;
		PFNGLBINDRENDERBUFFEREXTPROC										glBindRenderbufferEXT;
		PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC									glCheckFramebufferStatusEXT;
		PFNGLDELETEFRAMEBUFFERSEXTPROC										glDeleteFramebuffersEXT;
		PFNGLDELETERENDERBUFFERSEXTPROC										glDeleteRenderbuffersEXT;
		PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC									glFramebufferRenderbufferEXT;
		PFNGLFRAMEBUFFERTEXTURE1DEXTPROC									glFramebufferTexture1DEXT;
		PFNGLFRAMEBUFFERTEXTURE2DEXTPROC									glFramebufferTexture2DEXT;
		PFNGLFRAMEBUFFERTEXTURE3DEXTPROC									glFramebufferTexture3DEXT;
		PFNGLGENFRAMEBUFFERSEXTPROC											glGenFramebuffersEXT;
		PFNGLGENRENDERBUFFERSEXTPROC										glGenRenderbuffersEXT;
		PFNGLGENERATEMIPMAPEXTPROC											glGenerateMipmapEXT;
		PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC						glGetFramebufferAttachmentParameterivEXT;
		PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC								glGetRenderbufferParameterivEXT;
		PFNGLISFRAMEBUFFEREXTPROC											glIsFramebufferEXT;
		PFNGLISRENDERBUFFEREXTPROC											glIsRenderbufferEXT;
		PFNGLRENDERBUFFERSTORAGEEXTPROC										glRenderbufferStorageEXT;

		/*
			GL_EXT_geometry_shader4
		*/
		PFNGLFRAMEBUFFERTEXTUREEXTPROC										glFramebufferTextureEXT;
		PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC									glFramebufferTextureFaceEXT;
		PFNGLPROGRAMPARAMETERIEXTPROC										glProgramParameteriEXT;

		/*
			GL_EXT_gpu_program_parameters
		*/
		PFNGLPROGRAMENVPARAMETERS4FVEXTPROC									glProgramEnvParameters4fvEXT;
		PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC								glProgramLocalParameters4fvEXT;

		/*
			GL_EXT_gpu_shader4
		*/
		PFNGLBINDFRAGDATALOCATIONEXTPROC									glBindFragDataLocationEXT;
		PFNGLGETFRAGDATALOCATIONEXTPROC										glGetFragDataLocationEXT;
		PFNGLGETUNIFORMUIVEXTPROC											glGetUniformuivEXT;
		PFNGLGETVERTEXATTRIBIIVEXTPROC										glGetVertexAttribIivEXT;
		PFNGLGETVERTEXATTRIBIUIVEXTPROC										glGetVertexAttribIuivEXT;
		PFNGLUNIFORM1UIEXTPROC												glUniform1uiEXT;
		PFNGLUNIFORM1UIVEXTPROC												glUniform1uivEXT;
		PFNGLUNIFORM2UIEXTPROC												glUniform2uiEXT;
		PFNGLUNIFORM2UIVEXTPROC												glUniform2uivEXT;
		PFNGLUNIFORM3UIEXTPROC												glUniform3uiEXT;
		PFNGLUNIFORM3UIVEXTPROC												glUniform3uivEXT;
		PFNGLUNIFORM4UIEXTPROC												glUniform4uiEXT;
		PFNGLUNIFORM4UIVEXTPROC												glUniform4uivEXT;
		PFNGLVERTEXATTRIBI1IEXTPROC											glVertexAttribI1iEXT;
		PFNGLVERTEXATTRIBI1IVEXTPROC										glVertexAttribI1ivEXT;
		PFNGLVERTEXATTRIBI1UIEXTPROC										glVertexAttribI1uiEXT;
		PFNGLVERTEXATTRIBI1UIVEXTPROC										glVertexAttribI1uivEXT;
		PFNGLVERTEXATTRIBI2IEXTPROC											glVertexAttribI2iEXT;
		PFNGLVERTEXATTRIBI2IVEXTPROC										glVertexAttribI2ivEXT;
		PFNGLVERTEXATTRIBI2UIEXTPROC										glVertexAttribI2uiEXT;
		PFNGLVERTEXATTRIBI2UIVEXTPROC										glVertexAttribI2uivEXT;
		PFNGLVERTEXATTRIBI3IEXTPROC											glVertexAttribI3iEXT;
		PFNGLVERTEXATTRIBI3IVEXTPROC										glVertexAttribI3ivEXT;
		PFNGLVERTEXATTRIBI3UIEXTPROC										glVertexAttribI3uiEXT;
		PFNGLVERTEXATTRIBI3UIVEXTPROC										glVertexAttribI3uivEXT;
		PFNGLVERTEXATTRIBI4BVEXTPROC										glVertexAttribI4bvEXT;
		PFNGLVERTEXATTRIBI4IEXTPROC											glVertexAttribI4iEXT;
		PFNGLVERTEXATTRIBI4IVEXTPROC										glVertexAttribI4ivEXT;
		PFNGLVERTEXATTRIBI4SVEXTPROC										glVertexAttribI4svEXT;
		PFNGLVERTEXATTRIBI4UBVEXTPROC										glVertexAttribI4ubvEXT;
		PFNGLVERTEXATTRIBI4UIEXTPROC										glVertexAttribI4uiEXT;
		PFNGLVERTEXATTRIBI4UIVEXTPROC										glVertexAttribI4uivEXT;
		PFNGLVERTEXATTRIBI4USVEXTPROC										glVertexAttribI4usvEXT;
		PFNGLVERTEXATTRIBIPOINTEREXTPROC									glVertexAttribIPointerEXT;

		/*
			GL_EXT_histogram
		*/
		PFNGLGETHISTOGRAMEXTPROC											glGetHistogramEXT;
		PFNGLGETHISTOGRAMPARAMETERFVEXTPROC									glGetHistogramParameterfvEXT;
		PFNGLGETHISTOGRAMPARAMETERIVEXTPROC									glGetHistogramParameterivEXT;
		PFNGLGETMINMAXEXTPROC												glGetMinmaxEXT;
		PFNGLGETMINMAXPARAMETERFVEXTPROC									glGetMinmaxParameterfvEXT;
		PFNGLGETMINMAXPARAMETERIVEXTPROC									glGetMinmaxParameterivEXT;
		PFNGLHISTOGRAMEXTPROC												glHistogramEXT;
		PFNGLMINMAXEXTPROC													glMinmaxEXT;
		PFNGLRESETHISTOGRAMEXTPROC											glResetHistogramEXT;
		PFNGLRESETMINMAXEXTPROC												glResetMinmaxEXT;

		/*
			GL_EXT_index_func
		*/
		PFNGLINDEXFUNCEXTPROC												glIndexFuncEXT;

		/*
			GL_EXT_index_material
		*/
		PFNGLINDEXMATERIALEXTPROC											glIndexMaterialEXT;

		/*
			GL_EXT_instanced_arrays
		*/
		PFNGLVERTEXATTRIBDIVISOREXTPROC										glVertexAttribDivisorEXT;

		/*
			GL_EXT_light_texture
		*/
		PFNGLAPPLYTEXTUREEXTPROC											glApplyTextureEXT;
		PFNGLTEXTURELIGHTEXTPROC											glTextureLightEXT;
		PFNGLTEXTUREMATERIALEXTPROC											glTextureMaterialEXT;

		/*
			GL_EXT_map_buffer_range
		*/
		PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC									glFlushMappedBufferRangeEXT;
		PFNGLMAPBUFFERRANGEEXTPROC											glMapBufferRangeEXT;

		/*
			GL_EXT_memory_object
		*/
		PFNGLBUFFERSTORAGEMEMEXTPROC										glBufferStorageMemEXT;
		PFNGLCREATEMEMORYOBJECTSEXTPROC										glCreateMemoryObjectsEXT;
		PFNGLDELETEMEMORYOBJECTSEXTPROC										glDeleteMemoryObjectsEXT;
		PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC								glGetMemoryObjectParameterivEXT;
		PFNGLGETUNSIGNEDBYTEI_VEXTPROC										glGetUnsignedBytei_vEXT;
		PFNGLGETUNSIGNEDBYTEVEXTPROC										glGetUnsignedBytevEXT;
		PFNGLISMEMORYOBJECTEXTPROC											glIsMemoryObjectEXT;
		PFNGLMEMORYOBJECTPARAMETERIVEXTPROC									glMemoryObjectParameterivEXT;
		PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC									glNamedBufferStorageMemEXT;
		PFNGLTEXSTORAGEMEM1DEXTPROC											glTexStorageMem1DEXT;
		PFNGLTEXSTORAGEMEM2DEXTPROC											glTexStorageMem2DEXT;
		PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC								glTexStorageMem2DMultisampleEXT;
		PFNGLTEXSTORAGEMEM3DEXTPROC											glTexStorageMem3DEXT;
		PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC								glTexStorageMem3DMultisampleEXT;
		PFNGLTEXTURESTORAGEMEM1DEXTPROC										glTextureStorageMem1DEXT;
		PFNGLTEXTURESTORAGEMEM2DEXTPROC										glTextureStorageMem2DEXT;
		PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC							glTextureStorageMem2DMultisampleEXT;
		PFNGLTEXTURESTORAGEMEM3DEXTPROC										glTextureStorageMem3DEXT;
		PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC							glTextureStorageMem3DMultisampleEXT;

		/*
			GL_EXT_memory_object_fd
		*/
		PFNGLIMPORTMEMORYFDEXTPROC											glImportMemoryFdEXT;

		/*
			GL_EXT_memory_object_win32
		*/
		PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC									glImportMemoryWin32HandleEXT;
		PFNGLIMPORTMEMORYWIN32NAMEEXTPROC									glImportMemoryWin32NameEXT;

		/*
			GL_EXT_multi_draw_arrays
		*/
		PFNGLMULTIDRAWARRAYSEXTPROC											glMultiDrawArraysEXT;
		PFNGLMULTIDRAWELEMENTSEXTPROC										glMultiDrawElementsEXT;

		/*
			GL_EXT_multi_draw_indirect
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC									glMultiDrawArraysIndirectEXT;
		PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC								glMultiDrawElementsIndirectEXT;

		/*
			GL_EXT_multisample
		*/
		PFNGLSAMPLEMASKEXTPROC												glSampleMaskEXT;
		PFNGLSAMPLEPATTERNEXTPROC											glSamplePatternEXT;

		/*
			GL_EXT_multisampled_render_to_texture
		*/
		PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC							glFramebufferTexture2DMultisampleEXT;

		/*
			GL_EXT_multiview_draw_buffers
		*/
		PFNGLDRAWBUFFERSINDEXEDEXTPROC										glDrawBuffersIndexedEXT;
		PFNGLGETINTEGERI_VEXTPROC											glGetIntegeri_vEXT;
		PFNGLREADBUFFERINDEXEDEXTPROC										glReadBufferIndexedEXT;

		/*
			GL_EXT_paletted_texture
		*/
		PFNGLCOLORTABLEEXTPROC												glColorTableEXT;
		PFNGLGETCOLORTABLEEXTPROC											glGetColorTableEXT;
		PFNGLGETCOLORTABLEPARAMETERFVEXTPROC								glGetColorTableParameterfvEXT;
		PFNGLGETCOLORTABLEPARAMETERIVEXTPROC								glGetColorTableParameterivEXT;

		/*
			GL_EXT_pixel_transform
		*/
		PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC							glGetPixelTransformParameterfvEXT;
		PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC							glGetPixelTransformParameterivEXT;
		PFNGLPIXELTRANSFORMPARAMETERFEXTPROC								glPixelTransformParameterfEXT;
		PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC								glPixelTransformParameterfvEXT;
		PFNGLPIXELTRANSFORMPARAMETERIEXTPROC								glPixelTransformParameteriEXT;
		PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC								glPixelTransformParameterivEXT;

		/*
			GL_EXT_point_parameters
		*/
		PFNGLPOINTPARAMETERFEXTPROC											glPointParameterfEXT;
		PFNGLPOINTPARAMETERFVEXTPROC										glPointParameterfvEXT;

		/*
			GL_EXT_polygon_offset
		*/
		PFNGLPOLYGONOFFSETEXTPROC											glPolygonOffsetEXT;

		/*
			GL_EXT_polygon_offset_clamp
		*/
		PFNGLPOLYGONOFFSETCLAMPEXTPROC										glPolygonOffsetClampEXT;

		/*
			GL_EXT_provoking_vertex
		*/
		PFNGLPROVOKINGVERTEXEXTPROC											glProvokingVertexEXT;

		/*
			GL_EXT_raster_multisample
		*/
		PFNGLCOVERAGEMODULATIONNVPROC										glCoverageModulationNV;
		PFNGLCOVERAGEMODULATIONTABLENVPROC									glCoverageModulationTableNV;
		PFNGLGETCOVERAGEMODULATIONTABLENVPROC								glGetCoverageModulationTableNV;
		PFNGLRASTERSAMPLESEXTPROC											glRasterSamplesEXT;

		/*
			GL_EXT_scene_marker
		*/
		PFNGLBEGINSCENEEXTPROC												glBeginSceneEXT;
		PFNGLENDSCENEEXTPROC												glEndSceneEXT;

		/*
			GL_EXT_secondary_color
		*/
		PFNGLSECONDARYCOLOR3BEXTPROC										glSecondaryColor3bEXT;
		PFNGLSECONDARYCOLOR3BVEXTPROC										glSecondaryColor3bvEXT;
		PFNGLSECONDARYCOLOR3DEXTPROC										glSecondaryColor3dEXT;
		PFNGLSECONDARYCOLOR3DVEXTPROC										glSecondaryColor3dvEXT;
		PFNGLSECONDARYCOLOR3FEXTPROC										glSecondaryColor3fEXT;
		PFNGLSECONDARYCOLOR3FVEXTPROC										glSecondaryColor3fvEXT;
		PFNGLSECONDARYCOLOR3IEXTPROC										glSecondaryColor3iEXT;
		PFNGLSECONDARYCOLOR3IVEXTPROC										glSecondaryColor3ivEXT;
		PFNGLSECONDARYCOLOR3SEXTPROC										glSecondaryColor3sEXT;
		PFNGLSECONDARYCOLOR3SVEXTPROC										glSecondaryColor3svEXT;
		PFNGLSECONDARYCOLOR3UBEXTPROC										glSecondaryColor3ubEXT;
		PFNGLSECONDARYCOLOR3UBVEXTPROC										glSecondaryColor3ubvEXT;
		PFNGLSECONDARYCOLOR3UIEXTPROC										glSecondaryColor3uiEXT;
		PFNGLSECONDARYCOLOR3UIVEXTPROC										glSecondaryColor3uivEXT;
		PFNGLSECONDARYCOLOR3USEXTPROC										glSecondaryColor3usEXT;
		PFNGLSECONDARYCOLOR3USVEXTPROC										glSecondaryColor3usvEXT;
		PFNGLSECONDARYCOLORPOINTEREXTPROC									glSecondaryColorPointerEXT;

		/*
			GL_EXT_semaphore
		*/
		PFNGLDELETESEMAPHORESEXTPROC										glDeleteSemaphoresEXT;
		PFNGLGENSEMAPHORESEXTPROC											glGenSemaphoresEXT;
		PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC								glGetSemaphoreParameterui64vEXT;
		PFNGLISSEMAPHOREEXTPROC												glIsSemaphoreEXT;
		PFNGLSEMAPHOREPARAMETERUI64VEXTPROC									glSemaphoreParameterui64vEXT;
		PFNGLSIGNALSEMAPHOREEXTPROC											glSignalSemaphoreEXT;
		PFNGLWAITSEMAPHOREEXTPROC											glWaitSemaphoreEXT;

		/*
			GL_EXT_semaphore_fd
		*/
		PFNGLIMPORTSEMAPHOREFDEXTPROC										glImportSemaphoreFdEXT;

		/*
			GL_EXT_semaphore_win32
		*/
		PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC								glImportSemaphoreWin32HandleEXT;
		PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC								glImportSemaphoreWin32NameEXT;

		/*
			GL_EXT_separate_shader_objects
		*/
		PFNGLACTIVEPROGRAMEXTPROC											glActiveProgramEXT;
		PFNGLCREATESHADERPROGRAMEXTPROC										glCreateShaderProgramEXT;
		PFNGLUSESHADERPROGRAMEXTPROC										glUseShaderProgramEXT;

		/*
			GL_EXT_shader_image_load_store
		*/
		PFNGLBINDIMAGETEXTUREEXTPROC										glBindImageTextureEXT;
		PFNGLMEMORYBARRIEREXTPROC											glMemoryBarrierEXT;

		/*
			GL_EXT_shader_pixel_local_storage2
		*/
		PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC								glClearPixelLocalStorageuiEXT;
		PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC						glFramebufferPixelLocalStorageSizeEXT;
		PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC						glGetFramebufferPixelLocalStorageSizeEXT;

		/*
			GL_EXT_sparse_texture
		*/
		PFNGLTEXPAGECOMMITMENTEXTPROC										glTexPageCommitmentEXT;
		PFNGLTEXTUREPAGECOMMITMENTEXTPROC									glTexturePageCommitmentEXT;

		/*
			GL_EXT_stencil_two_side
		*/
		PFNGLACTIVESTENCILFACEEXTPROC										glActiveStencilFaceEXT;

		/*
			GL_EXT_subtexture
		*/
		PFNGLTEXSUBIMAGE1DEXTPROC											glTexSubImage1DEXT;
		PFNGLTEXSUBIMAGE2DEXTPROC											glTexSubImage2DEXT;
		PFNGLTEXSUBIMAGE3DEXTPROC											glTexSubImage3DEXT;

		/*
			GL_EXT_texture3D
		*/
		PFNGLTEXIMAGE3DEXTPROC												glTexImage3DEXT;

		/*
			GL_EXT_texture_array
		*/
		PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC									glFramebufferTextureLayerEXT;

		/*
			GL_EXT_texture_buffer_object
		*/
		PFNGLTEXBUFFEREXTPROC												glTexBufferEXT;

		/*
			GL_EXT_texture_integer
		*/
		PFNGLCLEARCOLORIIEXTPROC											glClearColorIiEXT;
		PFNGLCLEARCOLORIUIEXTPROC											glClearColorIuiEXT;
		PFNGLGETTEXPARAMETERIIVEXTPROC										glGetTexParameterIivEXT;
		PFNGLGETTEXPARAMETERIUIVEXTPROC										glGetTexParameterIuivEXT;
		PFNGLTEXPARAMETERIIVEXTPROC											glTexParameterIivEXT;
		PFNGLTEXPARAMETERIUIVEXTPROC										glTexParameterIuivEXT;

		/*
			GL_EXT_texture_object
		*/
		PFNGLARETEXTURESRESIDENTEXTPROC										glAreTexturesResidentEXT;
		PFNGLBINDTEXTUREEXTPROC												glBindTextureEXT;
		PFNGLDELETETEXTURESEXTPROC											glDeleteTexturesEXT;
		PFNGLGENTEXTURESEXTPROC												glGenTexturesEXT;
		PFNGLISTEXTUREEXTPROC												glIsTextureEXT;
		PFNGLPRIORITIZETEXTURESEXTPROC										glPrioritizeTexturesEXT;

		/*
			GL_EXT_texture_perturb_normal
		*/
		PFNGLTEXTURENORMALEXTPROC											glTextureNormalEXT;

		/*
			GL_EXT_texture_storage
		*/
		PFNGLTEXSTORAGE1DEXTPROC											glTexStorage1DEXT;
		PFNGLTEXSTORAGE2DEXTPROC											glTexStorage2DEXT;
		PFNGLTEXSTORAGE3DEXTPROC											glTexStorage3DEXT;
		PFNGLTEXTURESTORAGE1DEXTPROC										glTextureStorage1DEXT;
		PFNGLTEXTURESTORAGE2DEXTPROC										glTextureStorage2DEXT;
		PFNGLTEXTURESTORAGE3DEXTPROC										glTextureStorage3DEXT;

		/*
			GL_EXT_texture_view
		*/
		PFNGLTEXTUREVIEWEXTPROC												glTextureViewEXT;

		/*
			GL_EXT_timer_query
		*/
		PFNGLGETQUERYOBJECTI64VEXTPROC										glGetQueryObjecti64vEXT;
		PFNGLGETQUERYOBJECTUI64VEXTPROC										glGetQueryObjectui64vEXT;

		/*
			GL_EXT_transform_feedback
		*/
		PFNGLBEGINTRANSFORMFEEDBACKEXTPROC									glBeginTransformFeedbackEXT;
		PFNGLBINDBUFFERBASEEXTPROC											glBindBufferBaseEXT;
		PFNGLBINDBUFFEROFFSETEXTPROC										glBindBufferOffsetEXT;
		PFNGLBINDBUFFERRANGEEXTPROC											glBindBufferRangeEXT;
		PFNGLENDTRANSFORMFEEDBACKEXTPROC									glEndTransformFeedbackEXT;
		PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC								glGetTransformFeedbackVaryingEXT;
		PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC								glTransformFeedbackVaryingsEXT;

		/*
			GL_EXT_vertex_array
		*/
		PFNGLARRAYELEMENTEXTPROC											glArrayElementEXT;
		PFNGLCOLORPOINTEREXTPROC											glColorPointerEXT;
		PFNGLDRAWARRAYSEXTPROC												glDrawArraysEXT;
		PFNGLEDGEFLAGPOINTEREXTPROC											glEdgeFlagPointerEXT;
		PFNGLINDEXPOINTEREXTPROC											glIndexPointerEXT;
		PFNGLNORMALPOINTEREXTPROC											glNormalPointerEXT;
		PFNGLTEXCOORDPOINTEREXTPROC											glTexCoordPointerEXT;
		PFNGLVERTEXPOINTEREXTPROC											glVertexPointerEXT;

		/*
			GL_EXT_vertex_array_setXXX
		*/
		PFNGLBINDARRAYSETEXTPROC											glBindArraySetEXT;
		PFNGLCREATEARRAYSETEXTPROC											glCreateArraySetExt;
		PFNGLDELETEARRAYSETSEXTPROC											glDeleteArraySetsEXT;

		/*
			GL_EXT_vertex_attrib_64bit
		*/
		PFNGLGETVERTEXATTRIBLDVEXTPROC										glGetVertexAttribLdvEXT;
		PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC							glVertexArrayVertexAttribLOffsetEXT;
		PFNGLVERTEXATTRIBL1DEXTPROC											glVertexAttribL1dEXT;
		PFNGLVERTEXATTRIBL1DVEXTPROC										glVertexAttribL1dvEXT;
		PFNGLVERTEXATTRIBL2DEXTPROC											glVertexAttribL2dEXT;
		PFNGLVERTEXATTRIBL2DVEXTPROC										glVertexAttribL2dvEXT;
		PFNGLVERTEXATTRIBL3DEXTPROC											glVertexAttribL3dEXT;
		PFNGLVERTEXATTRIBL3DVEXTPROC										glVertexAttribL3dvEXT;
		PFNGLVERTEXATTRIBL4DEXTPROC											glVertexAttribL4dEXT;
		PFNGLVERTEXATTRIBL4DVEXTPROC										glVertexAttribL4dvEXT;
		PFNGLVERTEXATTRIBLPOINTEREXTPROC									glVertexAttribLPointerEXT;

		/*
			GL_EXT_vertex_shader
		*/
		PFNGLBEGINVERTEXSHADEREXTPROC										glBeginVertexShaderEXT;
		PFNGLBINDLIGHTPARAMETEREXTPROC										glBindLightParameterEXT;
		PFNGLBINDMATERIALPARAMETEREXTPROC									glBindMaterialParameterEXT;
		PFNGLBINDPARAMETEREXTPROC											glBindParameterEXT;
		PFNGLBINDTEXGENPARAMETEREXTPROC										glBindTexGenParameterEXT;
		PFNGLBINDTEXTUREUNITPARAMETEREXTPROC								glBindTextureUnitParameterEXT;
		PFNGLBINDVERTEXSHADEREXTPROC										glBindVertexShaderEXT;
		PFNGLDELETEVERTEXSHADEREXTPROC										glDeleteVertexShaderEXT;
		PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC								glDisableVariantClientStateEXT;
		PFNGLENABLEVARIANTCLIENTSTATEEXTPROC								glEnableVariantClientStateEXT;
		PFNGLENDVERTEXSHADEREXTPROC											glEndVertexShaderEXT;
		PFNGLEXTRACTCOMPONENTEXTPROC										glExtractComponentEXT;
		PFNGLGENSYMBOLSEXTPROC												glGenSymbolsEXT;
		PFNGLGENVERTEXSHADERSEXTPROC										glGenVertexShadersEXT;
		PFNGLGETINVARIANTBOOLEANVEXTPROC									glGetInvariantBooleanvEXT;
		PFNGLGETINVARIANTFLOATVEXTPROC										glGetInvariantFloatvEXT;
		PFNGLGETINVARIANTINTEGERVEXTPROC									glGetInvariantIntegervEXT;
		PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC								glGetLocalConstantBooleanvEXT;
		PFNGLGETLOCALCONSTANTFLOATVEXTPROC									glGetLocalConstantFloatvEXT;
		PFNGLGETLOCALCONSTANTINTEGERVEXTPROC								glGetLocalConstantIntegervEXT;
		PFNGLGETVARIANTBOOLEANVEXTPROC										glGetVariantBooleanvEXT;
		PFNGLGETVARIANTFLOATVEXTPROC										glGetVariantFloatvEXT;
		PFNGLGETVARIANTINTEGERVEXTPROC										glGetVariantIntegervEXT;
		PFNGLGETVARIANTPOINTERVEXTPROC										glGetVariantPointervEXT;
		PFNGLINSERTCOMPONENTEXTPROC											glInsertComponentEXT;
		PFNGLISVARIANTENABLEDEXTPROC										glIsVariantEnabledEXT;
		PFNGLSETINVARIANTEXTPROC											glSetInvariantEXT;
		PFNGLSETLOCALCONSTANTEXTPROC										glSetLocalConstantEXT;
		PFNGLSHADEROP1EXTPROC												glShaderOp1EXT;
		PFNGLSHADEROP2EXTPROC												glShaderOp2EXT;
		PFNGLSHADEROP3EXTPROC												glShaderOp3EXT;
		PFNGLSWIZZLEEXTPROC													glSwizzleEXT;
		PFNGLVARIANTPOINTEREXTPROC											glVariantPointerEXT;
		PFNGLVARIANTBVEXTPROC												glVariantbvEXT;
		PFNGLVARIANTDVEXTPROC												glVariantdvEXT;
		PFNGLVARIANTFVEXTPROC												glVariantfvEXT;
		PFNGLVARIANTIVEXTPROC												glVariantivEXT;
		PFNGLVARIANTSVEXTPROC												glVariantsvEXT;
		PFNGLVARIANTUBVEXTPROC												glVariantubvEXT;
		PFNGLVARIANTUIVEXTPROC												glVariantuivEXT;
		PFNGLVARIANTUSVEXTPROC												glVariantusvEXT;
		PFNGLWRITEMASKEXTPROC												glWriteMaskEXT;

		/*
			GL_EXT_vertex_weighting
		*/
		PFNGLVERTEXWEIGHTPOINTEREXTPROC										glVertexWeightPointerEXT;
		PFNGLVERTEXWEIGHTFEXTPROC											glVertexWeightfEXT;
		PFNGLVERTEXWEIGHTFVEXTPROC											glVertexWeightfvEXT;

		/*
			GL_EXT_win32_keyed_mutex
		*/
		PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC									glAcquireKeyedMutexWin32EXT;
		PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC									glReleaseKeyedMutexWin32EXT;

		/*
			GL_EXT_window_rectangles
		*/
		PFNGLWINDOWRECTANGLESEXTPROC										glWindowRectanglesEXT;

		/*
			GL_EXT_x11_sync_object
		*/
		PFNGLIMPORTSYNCEXTPROC												glImportSyncEXT;

		/*
			GL_GREMEDY_frame_terminator
		*/
		PFNGLFRAMETERMINATORGREMEDYPROC										glFrameTerminatorGREMEDY;

		/*
			GL_GREMEDY_string_marker
		*/
		PFNGLSTRINGMARKERGREMEDYPROC										glStringMarkerGREMEDY;

		/*
			GL_HP_image_transform
		*/
		PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC								glGetImageTransformParameterfvHP;
		PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC								glGetImageTransformParameterivHP;
		PFNGLIMAGETRANSFORMPARAMETERFHPPROC									glImageTransformParameterfHP;
		PFNGLIMAGETRANSFORMPARAMETERFVHPPROC								glImageTransformParameterfvHP;
		PFNGLIMAGETRANSFORMPARAMETERIHPPROC									glImageTransformParameteriHP;
		PFNGLIMAGETRANSFORMPARAMETERIVHPPROC								glImageTransformParameterivHP;

		/*
			GL_IBM_multimode_draw_arrays
		*/
		PFNGLMULTIMODEDRAWARRAYSIBMPROC										glMultiModeDrawArraysIBM;
		PFNGLMULTIMODEDRAWELEMENTSIBMPROC									glMultiModeDrawElementsIBM;

		/*
			GL_IBM_vertex_array_lists
		*/
		PFNGLCOLORPOINTERLISTIBMPROC										glColorPointerListIBM;
		PFNGLEDGEFLAGPOINTERLISTIBMPROC										glEdgeFlagPointerListIBM;
		PFNGLFOGCOORDPOINTERLISTIBMPROC										glFogCoordPointerListIBM;
		PFNGLINDEXPOINTERLISTIBMPROC										glIndexPointerListIBM;
		PFNGLNORMALPOINTERLISTIBMPROC										glNormalPointerListIBM;
		PFNGLSECONDARYCOLORPOINTERLISTIBMPROC								glSecondaryColorPointerListIBM;
		PFNGLTEXCOORDPOINTERLISTIBMPROC										glTexCoordPointerListIBM;
		PFNGLVERTEXPOINTERLISTIBMPROC										glVertexPointerListIBM;

		/*
			GL_INTEL_map_texture
		*/
		PFNGLMAPTEXTURE2DINTELPROC											glMapTexture2DINTEL;
		PFNGLSYNCTEXTUREINTELPROC											glSyncTextureINTEL;
		PFNGLUNMAPTEXTURE2DINTELPROC										glUnmapTexture2DINTEL;

		/*
			GL_INTEL_parallel_arrays
		*/
		PFNGLCOLORPOINTERVINTELPROC											glColorPointervINTEL;
		PFNGLNORMALPOINTERVINTELPROC										glNormalPointervINTEL;
		PFNGLTEXCOORDPOINTERVINTELPROC										glTexCoordPointervINTEL;
		PFNGLVERTEXPOINTERVINTELPROC										glVertexPointervINTEL;

		/*
			GL_INTEL_performance_query
		*/
		PFNGLBEGINPERFQUERYINTELPROC										glBeginPerfQueryINTEL;
		PFNGLCREATEPERFQUERYINTELPROC										glCreatePerfQueryINTEL;
		PFNGLDELETEPERFQUERYINTELPROC										glDeletePerfQueryINTEL;
		PFNGLENDPERFQUERYINTELPROC											glEndPerfQueryINTEL;
		PFNGLGETFIRSTPERFQUERYIDINTELPROC									glGetFirstPerfQueryIdINTEL;
		PFNGLGETNEXTPERFQUERYIDINTELPROC									glGetNextPerfQueryIdINTEL;
		PFNGLGETPERFCOUNTERINFOINTELPROC									glGetPerfCounterInfoINTEL;
		PFNGLGETPERFQUERYDATAINTELPROC										glGetPerfQueryDataINTEL;
		PFNGLGETPERFQUERYIDBYNAMEINTELPROC									glGetPerfQueryIdByNameINTEL;
		PFNGLGETPERFQUERYINFOINTELPROC										glGetPerfQueryInfoINTEL;

		/*
			GL_INTEL_texture_scissor
		*/
		PFNGLTEXSCISSORFUNCINTELPROC										glTexScissorFuncINTEL;
		PFNGLTEXSCISSORINTELPROC											glTexScissorINTEL;

		/*
			GL_KHR_blend_equation_advanced
		*/
		PFNGLBLENDBARRIERKHRPROC											glBlendBarrierKHR;

		/*
			GL_KHR_debug
		*/
		PFNGLDEBUGMESSAGECALLBACKPROC										glDebugMessageCallback;
		PFNGLDEBUGMESSAGECONTROLPROC										glDebugMessageControl;
		PFNGLDEBUGMESSAGEINSERTPROC											glDebugMessageInsert;
		PFNGLGETDEBUGMESSAGELOGPROC											glGetDebugMessageLog;
		PFNGLGETOBJECTLABELPROC												glGetObjectLabel;
		PFNGLGETOBJECTPTRLABELPROC											glGetObjectPtrLabel;
		PFNGLOBJECTLABELPROC												glObjectLabel;
		PFNGLOBJECTPTRLABELPROC												glObjectPtrLabel;
		PFNGLPOPDEBUGGROUPPROC												glPopDebugGroup;
		PFNGLPUSHDEBUGGROUPPROC												glPushDebugGroup;

		/*
			GL_KHR_parallel_shader_compile
		*/
		PFNGLMAXSHADERCOMPILERTHREADSKHRPROC								glMaxShaderCompilerThreadsKHR;

		/*
			GL_KHR_robustness
		*/
		PFNGLGETNUNIFORMFVPROC												glGetnUniformfv;
		PFNGLGETNUNIFORMIVPROC												glGetnUniformiv;
		PFNGLGETNUNIFORMUIVPROC												glGetnUniformuiv;
		PFNGLREADNPIXELSPROC												glReadnPixels;

		/*
			GL_KTX_buffer_region
		*/
		PFNGLBUFFERREGIONENABLEDPROC										glBufferRegionEnabled;
		PFNGLDELETEBUFFERREGIONPROC											glDeleteBufferRegion;
		PFNGLDRAWBUFFERREGIONPROC											glDrawBufferRegion;
		PFNGLNEWBUFFERREGIONPROC											glNewBufferRegion;
		PFNGLREADBUFFERREGIONPROC											glReadBufferRegion;

		/*
			GL_MESA_resize_buffers
		*/
		PFNGLRESIZEBUFFERSMESAPROC											glResizeBuffersMESA;

		/*
			GL_MESA_window_pos
		*/
		PFNGLWINDOWPOS2DMESAPROC											glWindowPos2dMESA;
		PFNGLWINDOWPOS2DVMESAPROC											glWindowPos2dvMESA;
		PFNGLWINDOWPOS2FMESAPROC											glWindowPos2fMESA;
		PFNGLWINDOWPOS2FVMESAPROC											glWindowPos2fvMESA;
		PFNGLWINDOWPOS2IMESAPROC											glWindowPos2iMESA;
		PFNGLWINDOWPOS2IVMESAPROC											glWindowPos2ivMESA;
		PFNGLWINDOWPOS2SMESAPROC											glWindowPos2sMESA;
		PFNGLWINDOWPOS2SVMESAPROC											glWindowPos2svMESA;
		PFNGLWINDOWPOS3DMESAPROC											glWindowPos3dMESA;
		PFNGLWINDOWPOS3DVMESAPROC											glWindowPos3dvMESA;
		PFNGLWINDOWPOS3FMESAPROC											glWindowPos3fMESA;
		PFNGLWINDOWPOS3FVMESAPROC											glWindowPos3fvMESA;
		PFNGLWINDOWPOS3IMESAPROC											glWindowPos3iMESA;
		PFNGLWINDOWPOS3IVMESAPROC											glWindowPos3ivMESA;
		PFNGLWINDOWPOS3SMESAPROC											glWindowPos3sMESA;
		PFNGLWINDOWPOS3SVMESAPROC											glWindowPos3svMESA;
		PFNGLWINDOWPOS4DMESAPROC											glWindowPos4dMESA;
		PFNGLWINDOWPOS4DVMESAPROC											glWindowPos4dvMESA;
		PFNGLWINDOWPOS4FMESAPROC											glWindowPos4fMESA;
		PFNGLWINDOWPOS4FVMESAPROC											glWindowPos4fvMESA;
		PFNGLWINDOWPOS4IMESAPROC											glWindowPos4iMESA;
		PFNGLWINDOWPOS4IVMESAPROC											glWindowPos4ivMESA;
		PFNGLWINDOWPOS4SMESAPROC											glWindowPos4sMESA;
		PFNGLWINDOWPOS4SVMESAPROC											glWindowPos4svMESA;

		/*
			GL_NVX_conditional_render
		*/
		PFNGLBEGINCONDITIONALRENDERNVXPROC									glBeginConditionalRenderNVX;
		PFNGLENDCONDITIONALRENDERNVXPROC									glEndConditionalRenderNVX;

		/*
			GL_NVX_linked_gpu_multicast
		*/
		PFNGLLGPUCOPYIMAGESUBDATANVXPROC									glLGPUCopyImageSubDataNVX;
		PFNGLLGPUINTERLOCKNVXPROC											glLGPUInterlockNVX;
		PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC									glLGPUNamedBufferSubDataNVX;

		/*
			GL_NV_3dvision_settings
		*/
		PFNGLSTEREOPARAMETERFNVPROC											glStereoParameterfNV;
		PFNGLSTEREOPARAMETERINVPROC											glStereoParameteriNV;

		/*
			GL_NV_bindless_multi_draw_indirect
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC							glMultiDrawArraysIndirectBindlessNV;
		PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC						glMultiDrawElementsIndirectBindlessNV;

		/*
			GL_NV_bindless_multi_draw_indirect_count
		*/
		PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC						glMultiDrawArraysIndirectBindlessCountNV;
		PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC					glMultiDrawElementsIndirectBindlessCountNV;

		/*
			GL_NV_bindless_texture
		*/
		PFNGLGETIMAGEHANDLENVPROC											glGetImageHandleNV;
		PFNGLGETTEXTUREHANDLENVPROC											glGetTextureHandleNV;
		PFNGLGETTEXTURESAMPLERHANDLENVPROC									glGetTextureSamplerHandleNV;
		PFNGLISIMAGEHANDLERESIDENTNVPROC									glIsImageHandleResidentNV;
		PFNGLISTEXTUREHANDLERESIDENTNVPROC									glIsTextureHandleResidentNV;
		PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC								glMakeImageHandleNonResidentNV;
		PFNGLMAKEIMAGEHANDLERESIDENTNVPROC									glMakeImageHandleResidentNV;
		PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC								glMakeTextureHandleNonResidentNV;
		PFNGLMAKETEXTUREHANDLERESIDENTNVPROC								glMakeTextureHandleResidentNV;
		PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC									glProgramUniformHandleui64NV;
		PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC								glProgramUniformHandleui64vNV;
		PFNGLUNIFORMHANDLEUI64NVPROC										glUniformHandleui64NV;
		PFNGLUNIFORMHANDLEUI64VNVPROC										glUniformHandleui64vNV;

		/*
			GL_NV_blend_equation_advanced
		*/
		PFNGLBLENDBARRIERNVPROC												glBlendBarrierNV;
		PFNGLBLENDPARAMETERINVPROC											glBlendParameteriNV;

		/*
			GL_NV_clip_space_w_scaling
		*/
		PFNGLVIEWPORTPOSITIONWSCALENVPROC									glViewportPositionWScaleNV;

		/*
			GL_NV_command_list
		*/
		PFNGLCALLCOMMANDLISTNVPROC											glCallCommandListNV;
		PFNGLCOMMANDLISTSEGMENTSNVPROC										glCommandListSegmentsNV;
		PFNGLCOMPILECOMMANDLISTNVPROC										glCompileCommandListNV;
		PFNGLCREATECOMMANDLISTSNVPROC										glCreateCommandListsNV;
		PFNGLCREATESTATESNVPROC												glCreateStatesNV;
		PFNGLDELETECOMMANDLISTSNVPROC										glDeleteCommandListsNV;
		PFNGLDELETESTATESNVPROC												glDeleteStatesNV;
		PFNGLDRAWCOMMANDSADDRESSNVPROC										glDrawCommandsAddressNV;
		PFNGLDRAWCOMMANDSNVPROC												glDrawCommandsNV;
		PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC								glDrawCommandsStatesAddressNV;
		PFNGLDRAWCOMMANDSSTATESNVPROC										glDrawCommandsStatesNV;
		PFNGLGETCOMMANDHEADERNVPROC											glGetCommandHeaderNV;
		PFNGLGETSTAGEINDEXNVPROC											glGetStageIndexNV;
		PFNGLISCOMMANDLISTNVPROC											glIsCommandListNV;
		PFNGLISSTATENVPROC													glIsStateNV;
		PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC								glListDrawCommandsStatesClientNV;
		PFNGLSTATECAPTURENVPROC												glStateCaptureNV;

		/*
			GL_NV_conditional_render
		*/
		PFNGLBEGINCONDITIONALRENDERNVPROC									glBeginConditionalRenderNV;
		PFNGLENDCONDITIONALRENDERNVPROC										glEndConditionalRenderNV;

		/*
			GL_NV_conservative_raster
		*/
		PFNGLSUBPIXELPRECISIONBIASNVPROC									glSubpixelPrecisionBiasNV;

		/*
			GL_NV_conservative_raster_dilate
		*/
		PFNGLCONSERVATIVERASTERPARAMETERFNVPROC								glConservativeRasterParameterfNV;

		/*
			GL_NV_conservative_raster_pre_snap_triangles
		*/
		PFNGLCONSERVATIVERASTERPARAMETERINVPROC								glConservativeRasterParameteriNV;

		/*
			GL_NV_copy_buffer
		*/
		PFNGLCOPYBUFFERSUBDATANVPROC										glCopyBufferSubDataNV;

		/*
			GL_NV_copy_image
		*/
		PFNGLCOPYIMAGESUBDATANVPROC											glCopyImageSubDataNV;

		/*
			GL_NV_depth_buffer_float
		*/
		PFNGLCLEARDEPTHDNVPROC												glClearDepthdNV;
		PFNGLDEPTHBOUNDSDNVPROC												glDepthBoundsdNV;
		PFNGLDEPTHRANGEDNVPROC												glDepthRangedNV;

		/*
			GL_NV_draw_buffers
		*/
		PFNGLDRAWBUFFERSNVPROC												glDrawBuffersNV;

		/*
			GL_NV_draw_instanced
		*/
		PFNGLDRAWARRAYSINSTANCEDNVPROC										glDrawArraysInstancedNV;
		PFNGLDRAWELEMENTSINSTANCEDNVPROC									glDrawElementsInstancedNV;

		/*
			GL_NV_draw_texture
		*/
		PFNGLDRAWTEXTURENVPROC												glDrawTextureNV;

		/*
			GL_NV_draw_vulkan_image
		*/
		PFNGLDRAWVKIMAGENVPROC												glDrawVkImageNV;
		PFNGLGETVKPROCADDRNVPROC											glGetVkProcAddrNV;
		PFNGLSIGNALVKFENCENVPROC											glSignalVkFenceNV;
		PFNGLSIGNALVKSEMAPHORENVPROC										glSignalVkSemaphoreNV;
		PFNGLWAITVKSEMAPHORENVPROC											glWaitVkSemaphoreNV;

		/*
			GL_NV_evaluators
		*/
		PFNGLEVALMAPSNVPROC													glEvalMapsNV;
		PFNGLGETMAPATTRIBPARAMETERFVNVPROC									glGetMapAttribParameterfvNV;
		PFNGLGETMAPATTRIBPARAMETERIVNVPROC									glGetMapAttribParameterivNV;
		PFNGLGETMAPCONTROLPOINTSNVPROC										glGetMapControlPointsNV;
		PFNGLGETMAPPARAMETERFVNVPROC										glGetMapParameterfvNV;
		PFNGLGETMAPPARAMETERIVNVPROC										glGetMapParameterivNV;
		PFNGLMAPCONTROLPOINTSNVPROC											glMapControlPointsNV;
		PFNGLMAPPARAMETERFVNVPROC											glMapParameterfvNV;
		PFNGLMAPPARAMETERIVNVPROC											glMapParameterivNV;

		/*
			GL_NV_explicit_multisample
		*/
		PFNGLGETMULTISAMPLEFVNVPROC											glGetMultisamplefvNV;
		PFNGLSAMPLEMASKINDEXEDNVPROC										glSampleMaskIndexedNV;
		PFNGLTEXRENDERBUFFERNVPROC											glTexRenderbufferNV;

		/*
			GL_NV_fence
		*/
		PFNGLDELETEFENCESNVPROC												glDeleteFencesNV;
		PFNGLFINISHFENCENVPROC												glFinishFenceNV;
		PFNGLGENFENCESNVPROC												glGenFencesNV;
		PFNGLGETFENCEIVNVPROC												glGetFenceivNV;
		PFNGLISFENCENVPROC													glIsFenceNV;
		PFNGLSETFENCENVPROC													glSetFenceNV;
		PFNGLTESTFENCENVPROC												glTestFenceNV;

		/*
			GL_NV_fragment_coverage_to_color
		*/
		PFNGLFRAGMENTCOVERAGECOLORNVPROC									glFragmentCoverageColorNV;

		/*
			GL_NV_fragment_program
		*/
		PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC								glGetProgramNamedParameterdvNV;
		PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC								glGetProgramNamedParameterfvNV;
		PFNGLPROGRAMNAMEDPARAMETER4DNVPROC									glProgramNamedParameter4dNV;
		PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC									glProgramNamedParameter4dvNV;
		PFNGLPROGRAMNAMEDPARAMETER4FNVPROC									glProgramNamedParameter4fNV;
		PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC									glProgramNamedParameter4fvNV;

		/*
			GL_NV_framebuffer_blit
		*/
		PFNGLBLITFRAMEBUFFERNVPROC											glBlitFramebufferNV;

		/*
			GL_NV_framebuffer_multisample
		*/
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC							glRenderbufferStorageMultisampleNV;

		/*
			GL_NV_framebuffer_multisample_coverage
		*/
		PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC					glRenderbufferStorageMultisampleCoverageNV;

		/*
			GL_NV_geometry_program4
		*/
		PFNGLPROGRAMVERTEXLIMITNVPROC										glProgramVertexLimitNV;

		/*
			GL_NV_gpu_multicast
		*/
		PFNGLMULTICASTBARRIERNVPROC											glMulticastBarrierNV;
		PFNGLMULTICASTBLITFRAMEBUFFERNVPROC									glMulticastBlitFramebufferNV;
		PFNGLMULTICASTBUFFERSUBDATANVPROC									glMulticastBufferSubDataNV;
		PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC								glMulticastCopyBufferSubDataNV;
		PFNGLMULTICASTCOPYIMAGESUBDATANVPROC								glMulticastCopyImageSubDataNV;
		PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC					glMulticastFramebufferSampleLocationsfvNV;
		PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC								glMulticastGetQueryObjecti64vNV;
		PFNGLMULTICASTGETQUERYOBJECTIVNVPROC								glMulticastGetQueryObjectivNV;
		PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC								glMulticastGetQueryObjectui64vNV;
		PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC								glMulticastGetQueryObjectuivNV;
		PFNGLMULTICASTWAITSYNCNVPROC										glMulticastWaitSyncNV;
		PFNGLRENDERGPUMASKNVPROC											glRenderGpuMaskNV;

		/*
			GL_NV_gpu_program4
		*/
		PFNGLPROGRAMENVPARAMETERI4INVPROC									glProgramEnvParameterI4iNV;
		PFNGLPROGRAMENVPARAMETERI4IVNVPROC									glProgramEnvParameterI4ivNV;
		PFNGLPROGRAMENVPARAMETERI4UINVPROC									glProgramEnvParameterI4uiNV;
		PFNGLPROGRAMENVPARAMETERI4UIVNVPROC									glProgramEnvParameterI4uivNV;
		PFNGLPROGRAMENVPARAMETERSI4IVNVPROC									glProgramEnvParametersI4ivNV;
		PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC								glProgramEnvParametersI4uivNV;
		PFNGLPROGRAMLOCALPARAMETERI4INVPROC									glProgramLocalParameterI4iNV;
		PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC								glProgramLocalParameterI4ivNV;
		PFNGLPROGRAMLOCALPARAMETERI4UINVPROC								glProgramLocalParameterI4uiNV;
		PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC								glProgramLocalParameterI4uivNV;
		PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC								glProgramLocalParametersI4ivNV;
		PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC								glProgramLocalParametersI4uivNV;

		/*
			GL_NV_gpu_shader5
		*/
		PFNGLGETUNIFORMI64VNVPROC											glGetUniformi64vNV;
		PFNGLGETUNIFORMUI64VNVPROC											glGetUniformui64vNV;
		PFNGLPROGRAMUNIFORM1I64NVPROC										glProgramUniform1i64NV;
		PFNGLPROGRAMUNIFORM1I64VNVPROC										glProgramUniform1i64vNV;
		PFNGLPROGRAMUNIFORM1UI64NVPROC										glProgramUniform1ui64NV;
		PFNGLPROGRAMUNIFORM1UI64VNVPROC										glProgramUniform1ui64vNV;
		PFNGLPROGRAMUNIFORM2I64NVPROC										glProgramUniform2i64NV;
		PFNGLPROGRAMUNIFORM2I64VNVPROC										glProgramUniform2i64vNV;
		PFNGLPROGRAMUNIFORM2UI64NVPROC										glProgramUniform2ui64NV;
		PFNGLPROGRAMUNIFORM2UI64VNVPROC										glProgramUniform2ui64vNV;
		PFNGLPROGRAMUNIFORM3I64NVPROC										glProgramUniform3i64NV;
		PFNGLPROGRAMUNIFORM3I64VNVPROC										glProgramUniform3i64vNV;
		PFNGLPROGRAMUNIFORM3UI64NVPROC										glProgramUniform3ui64NV;
		PFNGLPROGRAMUNIFORM3UI64VNVPROC										glProgramUniform3ui64vNV;
		PFNGLPROGRAMUNIFORM4I64NVPROC										glProgramUniform4i64NV;
		PFNGLPROGRAMUNIFORM4I64VNVPROC										glProgramUniform4i64vNV;
		PFNGLPROGRAMUNIFORM4UI64NVPROC										glProgramUniform4ui64NV;
		PFNGLPROGRAMUNIFORM4UI64VNVPROC										glProgramUniform4ui64vNV;
		PFNGLUNIFORM1I64NVPROC												glUniform1i64NV;
		PFNGLUNIFORM1I64VNVPROC												glUniform1i64vNV;
		PFNGLUNIFORM1UI64NVPROC												glUniform1ui64NV;
		PFNGLUNIFORM1UI64VNVPROC											glUniform1ui64vNV;
		PFNGLUNIFORM2I64NVPROC												glUniform2i64NV;
		PFNGLUNIFORM2I64VNVPROC												glUniform2i64vNV;
		PFNGLUNIFORM2UI64NVPROC												glUniform2ui64NV;
		PFNGLUNIFORM2UI64VNVPROC											glUniform2ui64vNV;
		PFNGLUNIFORM3I64NVPROC												glUniform3i64NV;
		PFNGLUNIFORM3I64VNVPROC												glUniform3i64vNV;
		PFNGLUNIFORM3UI64NVPROC												glUniform3ui64NV;
		PFNGLUNIFORM3UI64VNVPROC											glUniform3ui64vNV;
		PFNGLUNIFORM4I64NVPROC												glUniform4i64NV;
		PFNGLUNIFORM4I64VNVPROC												glUniform4i64vNV;
		PFNGLUNIFORM4UI64NVPROC												glUniform4ui64NV;
		PFNGLUNIFORM4UI64VNVPROC											glUniform4ui64vNV;

		/*
			GL_NV_half_float
		*/
		PFNGLCOLOR3HNVPROC													glColor3hNV;
		PFNGLCOLOR3HVNVPROC													glColor3hvNV;
		PFNGLCOLOR4HNVPROC													glColor4hNV;
		PFNGLCOLOR4HVNVPROC													glColor4hvNV;
		PFNGLFOGCOORDHNVPROC												glFogCoordhNV;
		PFNGLFOGCOORDHVNVPROC												glFogCoordhvNV;
		PFNGLMULTITEXCOORD1HNVPROC											glMultiTexCoord1hNV;
		PFNGLMULTITEXCOORD1HVNVPROC											glMultiTexCoord1hvNV;
		PFNGLMULTITEXCOORD2HNVPROC											glMultiTexCoord2hNV;
		PFNGLMULTITEXCOORD2HVNVPROC											glMultiTexCoord2hvNV;
		PFNGLMULTITEXCOORD3HNVPROC											glMultiTexCoord3hNV;
		PFNGLMULTITEXCOORD3HVNVPROC											glMultiTexCoord3hvNV;
		PFNGLMULTITEXCOORD4HNVPROC											glMultiTexCoord4hNV;
		PFNGLMULTITEXCOORD4HVNVPROC											glMultiTexCoord4hvNV;
		PFNGLNORMAL3HNVPROC													glNormal3hNV;
		PFNGLNORMAL3HVNVPROC												glNormal3hvNV;
		PFNGLSECONDARYCOLOR3HNVPROC											glSecondaryColor3hNV;
		PFNGLSECONDARYCOLOR3HVNVPROC										glSecondaryColor3hvNV;
		PFNGLTEXCOORD1HNVPROC												glTexCoord1hNV;
		PFNGLTEXCOORD1HVNVPROC												glTexCoord1hvNV;
		PFNGLTEXCOORD2HNVPROC												glTexCoord2hNV;
		PFNGLTEXCOORD2HVNVPROC												glTexCoord2hvNV;
		PFNGLTEXCOORD3HNVPROC												glTexCoord3hNV;
		PFNGLTEXCOORD3HVNVPROC												glTexCoord3hvNV;
		PFNGLTEXCOORD4HNVPROC												glTexCoord4hNV;
		PFNGLTEXCOORD4HVNVPROC												glTexCoord4hvNV;
		PFNGLVERTEX2HNVPROC													glVertex2hNV;
		PFNGLVERTEX2HVNVPROC												glVertex2hvNV;
		PFNGLVERTEX3HNVPROC													glVertex3hNV;
		PFNGLVERTEX3HVNVPROC												glVertex3hvNV;
		PFNGLVERTEX4HNVPROC													glVertex4hNV;
		PFNGLVERTEX4HVNVPROC												glVertex4hvNV;
		PFNGLVERTEXATTRIB1HNVPROC											glVertexAttrib1hNV;
		PFNGLVERTEXATTRIB1HVNVPROC											glVertexAttrib1hvNV;
		PFNGLVERTEXATTRIB2HNVPROC											glVertexAttrib2hNV;
		PFNGLVERTEXATTRIB2HVNVPROC											glVertexAttrib2hvNV;
		PFNGLVERTEXATTRIB3HNVPROC											glVertexAttrib3hNV;
		PFNGLVERTEXATTRIB3HVNVPROC											glVertexAttrib3hvNV;
		PFNGLVERTEXATTRIB4HNVPROC											glVertexAttrib4hNV;
		PFNGLVERTEXATTRIB4HVNVPROC											glVertexAttrib4hvNV;
		PFNGLVERTEXATTRIBS1HVNVPROC											glVertexAttribs1hvNV;
		PFNGLVERTEXATTRIBS2HVNVPROC											glVertexAttribs2hvNV;
		PFNGLVERTEXATTRIBS3HVNVPROC											glVertexAttribs3hvNV;
		PFNGLVERTEXATTRIBS4HVNVPROC											glVertexAttribs4hvNV;
		PFNGLVERTEXWEIGHTHNVPROC											glVertexWeighthNV;
		PFNGLVERTEXWEIGHTHVNVPROC											glVertexWeighthvNV;

		/*
			GL_NV_instanced_arrays
		*/
		PFNGLVERTEXATTRIBDIVISORNVPROC										glVertexAttribDivisorNV;

		/*
			GL_NV_internalformat_sample_query
		*/
		PFNGLGETINTERNALFORMATSAMPLEIVNVPROC								glGetInternalformatSampleivNV;

		/*
			GL_NV_non_square_matrices
		*/
		PFNGLUNIFORMMATRIX2X3FVNVPROC										glUniformMatrix2x3fvNV;
		PFNGLUNIFORMMATRIX2X4FVNVPROC										glUniformMatrix2x4fvNV;
		PFNGLUNIFORMMATRIX3X2FVNVPROC										glUniformMatrix3x2fvNV;
		PFNGLUNIFORMMATRIX3X4FVNVPROC										glUniformMatrix3x4fvNV;
		PFNGLUNIFORMMATRIX4X2FVNVPROC										glUniformMatrix4x2fvNV;
		PFNGLUNIFORMMATRIX4X3FVNVPROC										glUniformMatrix4x3fvNV;

		/*
			GL_NV_occlusion_query
		*/
		PFNGLBEGINOCCLUSIONQUERYNVPROC										glBeginOcclusionQueryNV;
		PFNGLDELETEOCCLUSIONQUERIESNVPROC									glDeleteOcclusionQueriesNV;
		PFNGLENDOCCLUSIONQUERYNVPROC										glEndOcclusionQueryNV;
		PFNGLGENOCCLUSIONQUERIESNVPROC										glGenOcclusionQueriesNV;
		PFNGLGETOCCLUSIONQUERYIVNVPROC										glGetOcclusionQueryivNV;
		PFNGLGETOCCLUSIONQUERYUIVNVPROC										glGetOcclusionQueryuivNV;
		PFNGLISOCCLUSIONQUERYNVPROC											glIsOcclusionQueryNV;

		/*
			GL_NV_parameter_buffer_object
		*/
		PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC								glProgramBufferParametersIivNV;
		PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC								glProgramBufferParametersIuivNV;
		PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC								glProgramBufferParametersfvNV;

		/*
			GL_NV_path_rendering
		*/
		PFNGLCOPYPATHNVPROC													glCopyPathNV;
		PFNGLCOVERFILLPATHINSTANCEDNVPROC									glCoverFillPathInstancedNV;
		PFNGLCOVERFILLPATHNVPROC											glCoverFillPathNV;
		PFNGLCOVERSTROKEPATHINSTANCEDNVPROC									glCoverStrokePathInstancedNV;
		PFNGLCOVERSTROKEPATHNVPROC											glCoverStrokePathNV;
		PFNGLDELETEPATHSNVPROC												glDeletePathsNV;
		PFNGLGENPATHSNVPROC													glGenPathsNV;
		PFNGLGETPATHCOLORGENFVNVPROC										glGetPathColorGenfvNV;
		PFNGLGETPATHCOLORGENIVNVPROC										glGetPathColorGenivNV;
		PFNGLGETPATHCOMMANDSNVPROC											glGetPathCommandsNV;
		PFNGLGETPATHCOORDSNVPROC											glGetPathCoordsNV;
		PFNGLGETPATHDASHARRAYNVPROC											glGetPathDashArrayNV;
		PFNGLGETPATHLENGTHNVPROC											glGetPathLengthNV;
		PFNGLGETPATHMETRICRANGENVPROC										glGetPathMetricRangeNV;
		PFNGLGETPATHMETRICSNVPROC											glGetPathMetricsNV;
		PFNGLGETPATHPARAMETERFVNVPROC										glGetPathParameterfvNV;
		PFNGLGETPATHPARAMETERIVNVPROC										glGetPathParameterivNV;
		PFNGLGETPATHSPACINGNVPROC											glGetPathSpacingNV;
		PFNGLGETPATHTEXGENFVNVPROC											glGetPathTexGenfvNV;
		PFNGLGETPATHTEXGENIVNVPROC											glGetPathTexGenivNV;
		PFNGLGETPROGRAMRESOURCEFVNVPROC										glGetProgramResourcefvNV;
		PFNGLINTERPOLATEPATHSNVPROC											glInterpolatePathsNV;
		PFNGLISPATHNVPROC													glIsPathNV;
		PFNGLISPOINTINFILLPATHNVPROC										glIsPointInFillPathNV;
		PFNGLISPOINTINSTROKEPATHNVPROC										glIsPointInStrokePathNV;
		PFNGLMATRIXLOAD3X2FNVPROC											glMatrixLoad3x2fNV;
		PFNGLMATRIXLOAD3X3FNVPROC											glMatrixLoad3x3fNV;
		PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC									glMatrixLoadTranspose3x3fNV;
		PFNGLMATRIXMULT3X2FNVPROC											glMatrixMult3x2fNV;
		PFNGLMATRIXMULT3X3FNVPROC											glMatrixMult3x3fNV;
		PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC									glMatrixMultTranspose3x3fNV;
		PFNGLPATHCOLORGENNVPROC												glPathColorGenNV;
		PFNGLPATHCOMMANDSNVPROC												glPathCommandsNV;
		PFNGLPATHCOORDSNVPROC												glPathCoordsNV;
		PFNGLPATHCOVERDEPTHFUNCNVPROC										glPathCoverDepthFuncNV;
		PFNGLPATHDASHARRAYNVPROC											glPathDashArrayNV;
		PFNGLPATHFOGGENNVPROC												glPathFogGenNV;
		PFNGLPATHGLYPHINDEXARRAYNVPROC										glPathGlyphIndexArrayNV;
		PFNGLPATHGLYPHINDEXRANGENVPROC										glPathGlyphIndexRangeNV;
		PFNGLPATHGLYPHRANGENVPROC											glPathGlyphRangeNV;
		PFNGLPATHGLYPHSNVPROC												glPathGlyphsNV;
		PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC								glPathMemoryGlyphIndexArrayNV;
		PFNGLPATHPARAMETERFNVPROC											glPathParameterfNV;
		PFNGLPATHPARAMETERFVNVPROC											glPathParameterfvNV;
		PFNGLPATHPARAMETERINVPROC											glPathParameteriNV;
		PFNGLPATHPARAMETERIVNVPROC											glPathParameterivNV;
		PFNGLPATHSTENCILDEPTHOFFSETNVPROC									glPathStencilDepthOffsetNV;
		PFNGLPATHSTENCILFUNCNVPROC											glPathStencilFuncNV;
		PFNGLPATHSTRINGNVPROC												glPathStringNV;
		PFNGLPATHSUBCOMMANDSNVPROC											glPathSubCommandsNV;
		PFNGLPATHSUBCOORDSNVPROC											glPathSubCoordsNV;
		PFNGLPATHTEXGENNVPROC												glPathTexGenNV;
		PFNGLPOINTALONGPATHNVPROC											glPointAlongPathNV;
		PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC								glProgramPathFragmentInputGenNV;
		PFNGLSTENCILFILLPATHINSTANCEDNVPROC									glStencilFillPathInstancedNV;
		PFNGLSTENCILFILLPATHNVPROC											glStencilFillPathNV;
		PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC								glStencilStrokePathInstancedNV;
		PFNGLSTENCILSTROKEPATHNVPROC										glStencilStrokePathNV;
		PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC						glStencilThenCoverFillPathInstancedNV;
		PFNGLSTENCILTHENCOVERFILLPATHNVPROC									glStencilThenCoverFillPathNV;
		PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC						glStencilThenCoverStrokePathInstancedNV;
		PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC								glStencilThenCoverStrokePathNV;
		PFNGLTRANSFORMPATHNVPROC											glTransformPathNV;
		PFNGLWEIGHTPATHSNVPROC												glWeightPathsNV;

		/*
			GL_NV_pixel_data_range
		*/
		PFNGLFLUSHPIXELDATARANGENVPROC										glFlushPixelDataRangeNV;
		PFNGLPIXELDATARANGENVPROC											glPixelDataRangeNV;

		/*
			GL_NV_point_sprite
		*/
		PFNGLPOINTPARAMETERINVPROC											glPointParameteriNV;
		PFNGLPOINTPARAMETERIVNVPROC											glPointParameterivNV;

		/*
			GL_NV_polygon_mode
		*/
		PFNGLPOLYGONMODENVPROC												glPolygonModeNV;

		/*
			GL_NV_present_video
		*/
		PFNGLGETVIDEOI64VNVPROC												glGetVideoi64vNV;
		PFNGLGETVIDEOIVNVPROC												glGetVideoivNV;
		PFNGLGETVIDEOUI64VNVPROC											glGetVideoui64vNV;
		PFNGLGETVIDEOUIVNVPROC												glGetVideouivNV;
		PFNGLPRESENTFRAMEDUALFILLNVPROC										glPresentFrameDualFillNV;
		PFNGLPRESENTFRAMEKEYEDNVPROC										glPresentFrameKeyedNV;

		/*
			GL_NV_primitive_restart
		*/
		PFNGLPRIMITIVERESTARTINDEXNVPROC									glPrimitiveRestartIndexNV;
		PFNGLPRIMITIVERESTARTNVPROC											glPrimitiveRestartNV;

		/*
			GL_NV_register_combiners
		*/
		PFNGLCOMBINERINPUTNVPROC											glCombinerInputNV;
		PFNGLCOMBINEROUTPUTNVPROC											glCombinerOutputNV;
		PFNGLCOMBINERPARAMETERFNVPROC										glCombinerParameterfNV;
		PFNGLCOMBINERPARAMETERFVNVPROC										glCombinerParameterfvNV;
		PFNGLCOMBINERPARAMETERINVPROC										glCombinerParameteriNV;
		PFNGLCOMBINERPARAMETERIVNVPROC										glCombinerParameterivNV;
		PFNGLFINALCOMBINERINPUTNVPROC										glFinalCombinerInputNV;
		PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC								glGetCombinerInputParameterfvNV;
		PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC								glGetCombinerInputParameterivNV;
		PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC								glGetCombinerOutputParameterfvNV;
		PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC								glGetCombinerOutputParameterivNV;
		PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC							glGetFinalCombinerInputParameterfvNV;
		PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC							glGetFinalCombinerInputParameterivNV;

		/*
			GL_NV_register_combiners2
		*/
		PFNGLCOMBINERSTAGEPARAMETERFVNVPROC									glCombinerStageParameterfvNV;
		PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC								glGetCombinerStageParameterfvNV;

		/*
			GL_NV_sample_locations
		*/
		PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC								glFramebufferSampleLocationsfvNV;
		PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC						glNamedFramebufferSampleLocationsfvNV;

		/*
			GL_NV_shader_buffer_load
		*/
		PFNGLGETBUFFERPARAMETERUI64VNVPROC									glGetBufferParameterui64vNV;
		PFNGLGETINTEGERUI64VNVPROC											glGetIntegerui64vNV;
		PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC								glGetNamedBufferParameterui64vNV;
		PFNGLISBUFFERRESIDENTNVPROC											glIsBufferResidentNV;
		PFNGLISNAMEDBUFFERRESIDENTNVPROC									glIsNamedBufferResidentNV;
		PFNGLMAKEBUFFERNONRESIDENTNVPROC									glMakeBufferNonResidentNV;
		PFNGLMAKEBUFFERRESIDENTNVPROC										glMakeBufferResidentNV;
		PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC								glMakeNamedBufferNonResidentNV;
		PFNGLMAKENAMEDBUFFERRESIDENTNVPROC									glMakeNamedBufferResidentNV;
		PFNGLPROGRAMUNIFORMUI64NVPROC										glProgramUniformui64NV;
		PFNGLPROGRAMUNIFORMUI64VNVPROC										glProgramUniformui64vNV;
		PFNGLUNIFORMUI64NVPROC												glUniformui64NV;
		PFNGLUNIFORMUI64VNVPROC												glUniformui64vNV;

		/*
			GL_NV_texture_array
		*/
		PFNGLCOMPRESSEDTEXIMAGE3DNVPROC										glCompressedTexImage3DNV;
		PFNGLCOMPRESSEDTEXSUBIMAGE3DNVPROC									glCompressedTexSubImage3DNV;
		PFNGLCOPYTEXSUBIMAGE3DNVPROC										glCopyTexSubImage3DNV;
		PFNGLFRAMEBUFFERTEXTURELAYERNVPROC									glFramebufferTextureLayerNV;
		PFNGLTEXIMAGE3DNVPROC												glTexImage3DNV;
		PFNGLTEXSUBIMAGE3DNVPROC											glTexSubImage3DNV;

		/*
			GL_NV_texture_barrier
		*/
		PFNGLTEXTUREBARRIERNVPROC											glTextureBarrierNV;

		/*
			GL_NV_texture_multisample
		*/
		PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC							glTexImage2DMultisampleCoverageNV;
		PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC							glTexImage3DMultisampleCoverageNV;
		PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC						glTextureImage2DMultisampleCoverageNV;
		PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC								glTextureImage2DMultisampleNV;
		PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC						glTextureImage3DMultisampleCoverageNV;
		PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC								glTextureImage3DMultisampleNV;

		/*
			GL_NV_transform_feedback
		*/
		PFNGLACTIVEVARYINGNVPROC											glActiveVaryingNV;
		PFNGLBEGINTRANSFORMFEEDBACKNVPROC									glBeginTransformFeedbackNV;
		PFNGLBINDBUFFERBASENVPROC											glBindBufferBaseNV;
		PFNGLBINDBUFFEROFFSETNVPROC											glBindBufferOffsetNV;
		PFNGLBINDBUFFERRANGENVPROC											glBindBufferRangeNV;
		PFNGLENDTRANSFORMFEEDBACKNVPROC										glEndTransformFeedbackNV;
		PFNGLGETACTIVEVARYINGNVPROC											glGetActiveVaryingNV;
		PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC								glGetTransformFeedbackVaryingNV;
		PFNGLGETVARYINGLOCATIONNVPROC										glGetVaryingLocationNV;
		PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC									glTransformFeedbackAttribsNV;
		PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC								glTransformFeedbackVaryingsNV;

		/*
			GL_NV_transform_feedback2
		*/
		PFNGLBINDTRANSFORMFEEDBACKNVPROC									glBindTransformFeedbackNV;
		PFNGLDELETETRANSFORMFEEDBACKSNVPROC									glDeleteTransformFeedbacksNV;
		PFNGLDRAWTRANSFORMFEEDBACKNVPROC									glDrawTransformFeedbackNV;
		PFNGLGENTRANSFORMFEEDBACKSNVPROC									glGenTransformFeedbacksNV;
		PFNGLISTRANSFORMFEEDBACKNVPROC										glIsTransformFeedbackNV;
		PFNGLPAUSETRANSFORMFEEDBACKNVPROC									glPauseTransformFeedbackNV;
		PFNGLRESUMETRANSFORMFEEDBACKNVPROC									glResumeTransformFeedbackNV;

		/*
			GL_NV_vdpau_interop
		*/
		PFNGLVDPAUFININVPROC												glVDPAUFiniNV;
		PFNGLVDPAUGETSURFACEIVNVPROC										glVDPAUGetSurfaceivNV;
		PFNGLVDPAUINITNVPROC												glVDPAUInitNV;
		PFNGLVDPAUISSURFACENVPROC											glVDPAUIsSurfaceNV;
		PFNGLVDPAUMAPSURFACESNVPROC											glVDPAUMapSurfacesNV;
		PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC								glVDPAURegisterOutputSurfaceNV;
		PFNGLVDPAUREGISTERVIDEOSURFACENVPROC								glVDPAURegisterVideoSurfaceNV;
		PFNGLVDPAUSURFACEACCESSNVPROC										glVDPAUSurfaceAccessNV;
		PFNGLVDPAUUNMAPSURFACESNVPROC										glVDPAUUnmapSurfacesNV;
		PFNGLVDPAUUNREGISTERSURFACENVPROC									glVDPAUUnregisterSurfaceNV;

		/*
			GL_NV_vertex_array_range
		*/
		PFNGLFLUSHVERTEXARRAYRANGENVPROC									glFlushVertexArrayRangeNV;
		PFNGLVERTEXARRAYRANGENVPROC											glVertexArrayRangeNV;

		/*
			GL_NV_vertex_attrib_integer_64bit
		*/
		PFNGLGETVERTEXATTRIBLI64VNVPROC										glGetVertexAttribLi64vNV;
		PFNGLGETVERTEXATTRIBLUI64VNVPROC									glGetVertexAttribLui64vNV;
		PFNGLVERTEXATTRIBL1I64NVPROC										glVertexAttribL1i64NV;
		PFNGLVERTEXATTRIBL1I64VNVPROC										glVertexAttribL1i64vNV;
		PFNGLVERTEXATTRIBL1UI64NVPROC										glVertexAttribL1ui64NV;
		PFNGLVERTEXATTRIBL1UI64VNVPROC										glVertexAttribL1ui64vNV;
		PFNGLVERTEXATTRIBL2I64NVPROC										glVertexAttribL2i64NV;
		PFNGLVERTEXATTRIBL2I64VNVPROC										glVertexAttribL2i64vNV;
		PFNGLVERTEXATTRIBL2UI64NVPROC										glVertexAttribL2ui64NV;
		PFNGLVERTEXATTRIBL2UI64VNVPROC										glVertexAttribL2ui64vNV;
		PFNGLVERTEXATTRIBL3I64NVPROC										glVertexAttribL3i64NV;
		PFNGLVERTEXATTRIBL3I64VNVPROC										glVertexAttribL3i64vNV;
		PFNGLVERTEXATTRIBL3UI64NVPROC										glVertexAttribL3ui64NV;
		PFNGLVERTEXATTRIBL3UI64VNVPROC										glVertexAttribL3ui64vNV;
		PFNGLVERTEXATTRIBL4I64NVPROC										glVertexAttribL4i64NV;
		PFNGLVERTEXATTRIBL4I64VNVPROC										glVertexAttribL4i64vNV;
		PFNGLVERTEXATTRIBL4UI64NVPROC										glVertexAttribL4ui64NV;
		PFNGLVERTEXATTRIBL4UI64VNVPROC										glVertexAttribL4ui64vNV;
		PFNGLVERTEXATTRIBLFORMATNVPROC										glVertexAttribLFormatNV;

		/*
			GL_NV_vertex_buffer_unified_memory
		*/
		PFNGLBUFFERADDRESSRANGENVPROC										glBufferAddressRangeNV;
		PFNGLCOLORFORMATNVPROC												glColorFormatNV;
		PFNGLEDGEFLAGFORMATNVPROC											glEdgeFlagFormatNV;
		PFNGLFOGCOORDFORMATNVPROC											glFogCoordFormatNV;
		PFNGLGETINTEGERUI64I_VNVPROC										glGetIntegerui64i_vNV;
		PFNGLINDEXFORMATNVPROC												glIndexFormatNV;
		PFNGLNORMALFORMATNVPROC												glNormalFormatNV;
		PFNGLSECONDARYCOLORFORMATNVPROC										glSecondaryColorFormatNV;
		PFNGLTEXCOORDFORMATNVPROC											glTexCoordFormatNV;
		PFNGLVERTEXATTRIBFORMATNVPROC										glVertexAttribFormatNV;
		PFNGLVERTEXATTRIBIFORMATNVPROC										glVertexAttribIFormatNV;
		PFNGLVERTEXFORMATNVPROC												glVertexFormatNV;

		/*
			GL_NV_vertex_program
		*/
		PFNGLAREPROGRAMSRESIDENTNVPROC										glAreProgramsResidentNV;
		PFNGLBINDPROGRAMNVPROC												glBindProgramNV;
		PFNGLDELETEPROGRAMSNVPROC											glDeleteProgramsNV;
		PFNGLEXECUTEPROGRAMNVPROC											glExecuteProgramNV;
		PFNGLGENPROGRAMSNVPROC												glGenProgramsNV;
		PFNGLGETPROGRAMPARAMETERDVNVPROC									glGetProgramParameterdvNV;
		PFNGLGETPROGRAMPARAMETERFVNVPROC									glGetProgramParameterfvNV;
		PFNGLGETPROGRAMSTRINGNVPROC											glGetProgramStringNV;
		PFNGLGETPROGRAMIVNVPROC												glGetProgramivNV;
		PFNGLGETTRACKMATRIXIVNVPROC											glGetTrackMatrixivNV;
		PFNGLGETVERTEXATTRIBPOINTERVNVPROC									glGetVertexAttribPointervNV;
		PFNGLGETVERTEXATTRIBDVNVPROC										glGetVertexAttribdvNV;
		PFNGLGETVERTEXATTRIBFVNVPROC										glGetVertexAttribfvNV;
		PFNGLGETVERTEXATTRIBIVNVPROC										glGetVertexAttribivNV;
		PFNGLISPROGRAMNVPROC												glIsProgramNV;
		PFNGLLOADPROGRAMNVPROC												glLoadProgramNV;
		PFNGLPROGRAMPARAMETER4DNVPROC										glProgramParameter4dNV;
		PFNGLPROGRAMPARAMETER4DVNVPROC										glProgramParameter4dvNV;
		PFNGLPROGRAMPARAMETER4FNVPROC										glProgramParameter4fNV;
		PFNGLPROGRAMPARAMETER4FVNVPROC										glProgramParameter4fvNV;
		PFNGLPROGRAMPARAMETERS4DVNVPROC										glProgramParameters4dvNV;
		PFNGLPROGRAMPARAMETERS4FVNVPROC										glProgramParameters4fvNV;
		PFNGLREQUESTRESIDENTPROGRAMSNVPROC									glRequestResidentProgramsNV;
		PFNGLTRACKMATRIXNVPROC												glTrackMatrixNV;
		PFNGLVERTEXATTRIB1DNVPROC											glVertexAttrib1dNV;
		PFNGLVERTEXATTRIB1DVNVPROC											glVertexAttrib1dvNV;
		PFNGLVERTEXATTRIB1FNVPROC											glVertexAttrib1fNV;
		PFNGLVERTEXATTRIB1FVNVPROC											glVertexAttrib1fvNV;
		PFNGLVERTEXATTRIB1SNVPROC											glVertexAttrib1sNV;
		PFNGLVERTEXATTRIB1SVNVPROC											glVertexAttrib1svNV;
		PFNGLVERTEXATTRIB2DNVPROC											glVertexAttrib2dNV;
		PFNGLVERTEXATTRIB2DVNVPROC											glVertexAttrib2dvNV;
		PFNGLVERTEXATTRIB2FNVPROC											glVertexAttrib2fNV;
		PFNGLVERTEXATTRIB2FVNVPROC											glVertexAttrib2fvNV;
		PFNGLVERTEXATTRIB2SNVPROC											glVertexAttrib2sNV;
		PFNGLVERTEXATTRIB2SVNVPROC											glVertexAttrib2svNV;
		PFNGLVERTEXATTRIB3DNVPROC											glVertexAttrib3dNV;
		PFNGLVERTEXATTRIB3DVNVPROC											glVertexAttrib3dvNV;
		PFNGLVERTEXATTRIB3FNVPROC											glVertexAttrib3fNV;
		PFNGLVERTEXATTRIB3FVNVPROC											glVertexAttrib3fvNV;
		PFNGLVERTEXATTRIB3SNVPROC											glVertexAttrib3sNV;
		PFNGLVERTEXATTRIB3SVNVPROC											glVertexAttrib3svNV;
		PFNGLVERTEXATTRIB4DNVPROC											glVertexAttrib4dNV;
		PFNGLVERTEXATTRIB4DVNVPROC											glVertexAttrib4dvNV;
		PFNGLVERTEXATTRIB4FNVPROC											glVertexAttrib4fNV;
		PFNGLVERTEXATTRIB4FVNVPROC											glVertexAttrib4fvNV;
		PFNGLVERTEXATTRIB4SNVPROC											glVertexAttrib4sNV;
		PFNGLVERTEXATTRIB4SVNVPROC											glVertexAttrib4svNV;
		PFNGLVERTEXATTRIB4UBNVPROC											glVertexAttrib4ubNV;
		PFNGLVERTEXATTRIB4UBVNVPROC											glVertexAttrib4ubvNV;
		PFNGLVERTEXATTRIBPOINTERNVPROC										glVertexAttribPointerNV;
		PFNGLVERTEXATTRIBS1DVNVPROC											glVertexAttribs1dvNV;
		PFNGLVERTEXATTRIBS1FVNVPROC											glVertexAttribs1fvNV;
		PFNGLVERTEXATTRIBS1SVNVPROC											glVertexAttribs1svNV;
		PFNGLVERTEXATTRIBS2DVNVPROC											glVertexAttribs2dvNV;
		PFNGLVERTEXATTRIBS2FVNVPROC											glVertexAttribs2fvNV;
		PFNGLVERTEXATTRIBS2SVNVPROC											glVertexAttribs2svNV;
		PFNGLVERTEXATTRIBS3DVNVPROC											glVertexAttribs3dvNV;
		PFNGLVERTEXATTRIBS3FVNVPROC											glVertexAttribs3fvNV;
		PFNGLVERTEXATTRIBS3SVNVPROC											glVertexAttribs3svNV;
		PFNGLVERTEXATTRIBS4DVNVPROC											glVertexAttribs4dvNV;
		PFNGLVERTEXATTRIBS4FVNVPROC											glVertexAttribs4fvNV;
		PFNGLVERTEXATTRIBS4SVNVPROC											glVertexAttribs4svNV;
		PFNGLVERTEXATTRIBS4UBVNVPROC										glVertexAttribs4ubvNV;

		/*
			GL_NV_video_capture
		*/
		PFNGLBEGINVIDEOCAPTURENVPROC										glBeginVideoCaptureNV;
		PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC								glBindVideoCaptureStreamBufferNV;
		PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC							glBindVideoCaptureStreamTextureNV;
		PFNGLENDVIDEOCAPTURENVPROC											glEndVideoCaptureNV;
		PFNGLGETVIDEOCAPTURESTREAMDVNVPROC									glGetVideoCaptureStreamdvNV;
		PFNGLGETVIDEOCAPTURESTREAMFVNVPROC									glGetVideoCaptureStreamfvNV;
		PFNGLGETVIDEOCAPTURESTREAMIVNVPROC									glGetVideoCaptureStreamivNV;
		PFNGLGETVIDEOCAPTUREIVNVPROC										glGetVideoCaptureivNV;
		PFNGLVIDEOCAPTURENVPROC												glVideoCaptureNV;
		PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC							glVideoCaptureStreamParameterdvNV;
		PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC							glVideoCaptureStreamParameterfvNV;
		PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC							glVideoCaptureStreamParameterivNV;

		/*
			GL_NV_viewport_array
		*/
		PFNGLDEPTHRANGEARRAYFVNVPROC										glDepthRangeArrayfvNV;
		PFNGLDEPTHRANGEINDEXEDFNVPROC										glDepthRangeIndexedfNV;
		PFNGLDISABLEINVPROC													glDisableiNV;
		PFNGLENABLEINVPROC													glEnableiNV;
		PFNGLGETFLOATI_VNVPROC												glGetFloati_vNV;
		PFNGLISENABLEDINVPROC												glIsEnablediNV;
		PFNGLSCISSORARRAYVNVPROC											glScissorArrayvNV;
		PFNGLSCISSORINDEXEDNVPROC											glScissorIndexedNV;
		PFNGLSCISSORINDEXEDVNVPROC											glScissorIndexedvNV;
		PFNGLVIEWPORTARRAYVNVPROC											glViewportArrayvNV;
		PFNGLVIEWPORTINDEXEDFNVPROC											glViewportIndexedfNV;
		PFNGLVIEWPORTINDEXEDFVNVPROC										glViewportIndexedfvNV;

		/*
			GL_NV_viewport_swizzle
		*/
		PFNGLVIEWPORTSWIZZLENVPROC											glViewportSwizzleNV;

		/*
			GL_OVR_multiview
		*/
		PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC								glFramebufferTextureMultiviewOVR;

		/*
			GL_OVR_multiview_multisampled_render_to_texture
		*/
		PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC					glFramebufferTextureMultisampleMultiviewOVR;

		/*
			GL_QCOM_alpha_test
		*/
		PFNGLALPHAFUNCQCOMPROC												glAlphaFuncQCOM;

		/*
			GL_QCOM_driver_control
		*/
		PFNGLDISABLEDRIVERCONTROLQCOMPROC									glDisableDriverControlQCOM;
		PFNGLENABLEDRIVERCONTROLQCOMPROC									glEnableDriverControlQCOM;
		PFNGLGETDRIVERCONTROLSTRINGQCOMPROC									glGetDriverControlStringQCOM;
		PFNGLGETDRIVERCONTROLSQCOMPROC										glGetDriverControlsQCOM;

		/*
			GL_QCOM_extended_get
		*/
		PFNGLEXTGETBUFFERPOINTERVQCOMPROC									glExtGetBufferPointervQCOM;
		PFNGLEXTGETBUFFERSQCOMPROC											glExtGetBuffersQCOM;
		PFNGLEXTGETFRAMEBUFFERSQCOMPROC										glExtGetFramebuffersQCOM;
		PFNGLEXTGETRENDERBUFFERSQCOMPROC									glExtGetRenderbuffersQCOM;
		PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC								glExtGetTexLevelParameterivQCOM;
		PFNGLEXTGETTEXSUBIMAGEQCOMPROC										glExtGetTexSubImageQCOM;
		PFNGLEXTGETTEXTURESQCOMPROC											glExtGetTexturesQCOM;
		PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC								glExtTexObjectStateOverrideiQCOM;

		/*
			GL_QCOM_extended_get2
		*/
		PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC								glExtGetProgramBinarySourceQCOM;
		PFNGLEXTGETPROGRAMSQCOMPROC											glExtGetProgramsQCOM;
		PFNGLEXTGETSHADERSQCOMPROC											glExtGetShadersQCOM;
		PFNGLEXTISPROGRAMBINARYQCOMPROC										glExtIsProgramBinaryQCOM;

		/*
			GL_QCOM_framebuffer_foveated
		*/
		PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC								glFramebufferFoveationConfigQCOM;
		PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC							glFramebufferFoveationParametersQCOM;

		/*
			GL_QCOM_shader_framebuffer_fetch_noncoherent
		*/
		PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC								glFramebufferFetchBarrierQCOM;

		/*
			GL_QCOM_tiled_rendering
		*/
		PFNGLENDTILINGQCOMPROC												glEndTilingQCOM;
		PFNGLSTARTTILINGQCOMPROC											glStartTilingQCOM;

		/*
			GL_REGAL_ES1_0_compatibility
		*/
		PFNGLALPHAFUNCXPROC													glAlphaFuncx;
		PFNGLCLEARCOLORXPROC												glClearColorx;
		PFNGLCLEARDEPTHXPROC												glClearDepthx;
		PFNGLCOLOR4XPROC													glColor4x;
		PFNGLDEPTHRANGEXPROC												glDepthRangex;
		PFNGLFOGXPROC														glFogx;
		PFNGLFOGXVPROC														glFogxv;
		PFNGLFRUSTUMFPROC													glFrustumf;
		PFNGLFRUSTUMXPROC													glFrustumx;
		PFNGLLIGHTMODELXPROC												glLightModelx;
		PFNGLLIGHTMODELXVPROC												glLightModelxv;
		PFNGLLIGHTXPROC														glLightx;
		PFNGLLIGHTXVPROC													glLightxv;
		PFNGLLINEWIDTHXPROC													glLineWidthx;
		PFNGLLOADMATRIXXPROC												glLoadMatrixx;
		PFNGLMATERIALXPROC													glMaterialx;
		PFNGLMATERIALXVPROC													glMaterialxv;
		PFNGLMULTMATRIXXPROC												glMultMatrixx;
		PFNGLMULTITEXCOORD4XPROC											glMultiTexCoord4x;
		PFNGLNORMAL3XPROC													glNormal3x;
		PFNGLORTHOFPROC														glOrthof;
		PFNGLORTHOXPROC														glOrthox;
		PFNGLPOINTSIZEXPROC													glPointSizex;
		PFNGLPOLYGONOFFSETXPROC												glPolygonOffsetx;
		PFNGLROTATEXPROC													glRotatex;
		PFNGLSAMPLECOVERAGEXPROC											glSampleCoveragex;
		PFNGLSCALEXPROC														glScalex;
		PFNGLTEXENVXPROC													glTexEnvx;
		PFNGLTEXENVXVPROC													glTexEnvxv;
		PFNGLTEXPARAMETERXPROC												glTexParameterx;
		PFNGLTRANSLATEXPROC													glTranslatex;

		/*
			GL_REGAL_ES1_1_compatibility
		*/
		PFNGLCLIPPLANEFPROC													glClipPlanef;
		PFNGLCLIPPLANEXPROC													glClipPlanex;
		PFNGLGETCLIPPLANEFPROC												glGetClipPlanef;
		PFNGLGETCLIPPLANEXPROC												glGetClipPlanex;
		PFNGLGETFIXEDVPROC													glGetFixedv;
		PFNGLGETLIGHTXVPROC													glGetLightxv;
		PFNGLGETMATERIALXVPROC												glGetMaterialxv;
		PFNGLGETTEXENVXVPROC												glGetTexEnvxv;
		PFNGLGETTEXPARAMETERXVPROC											glGetTexParameterxv;
		PFNGLPOINTPARAMETERXPROC											glPointParameterx;
		PFNGLPOINTPARAMETERXVPROC											glPointParameterxv;
		PFNGLPOINTSIZEPOINTEROESPROC										glPointSizePointerOES;
		PFNGLTEXPARAMETERXVPROC												glTexParameterxv;

		/*
			GL_REGAL_error_string
		*/
		PFNGLERRORSTRINGREGALPROC											glErrorStringREGAL;

		/*
			GL_REGAL_extension_query
		*/
		PFNGLGETEXTENSIONREGALPROC											glGetExtensionREGAL;
		PFNGLISSUPPORTEDREGALPROC											glIsSupportedREGAL;

		/*
			GL_REGAL_log
		*/
		PFNGLLOGMESSAGECALLBACKREGALPROC									glLogMessageCallbackREGAL;

		/*
			GL_REGAL_proc_address
		*/
		PFNGLGETPROCADDRESSREGALPROC										glGetProcAddressREGAL;

		/*
			GL_SGIS_detail_texture
		*/
		PFNGLDETAILTEXFUNCSGISPROC											glDetailTexFuncSGIS;
		PFNGLGETDETAILTEXFUNCSGISPROC										glGetDetailTexFuncSGIS;

		/*
			GL_SGIS_fog_function
		*/
		PFNGLFOGFUNCSGISPROC												glFogFuncSGIS;
		PFNGLGETFOGFUNCSGISPROC												glGetFogFuncSGIS;

		/*
			GL_SGIS_multisample
		*/
		PFNGLSAMPLEMASKSGISPROC												glSampleMaskSGIS;
		PFNGLSAMPLEPATTERNSGISPROC											glSamplePatternSGIS;

		/*
			GL_SGIS_multitexture
		*/
		PFNGLINTERLEAVEDTEXTURECOORDSETSSGISPROC							glInterleavedTextureCoordSetsSGIS;
		PFNGLSELECTTEXTURECOORDSETSGISPROC									glSelectTextureCoordSetSGIS;
		PFNGLSELECTTEXTURESGISPROC											glSelectTextureSGIS;
		PFNGLSELECTTEXTURETRANSFORMSGISPROC									glSelectTextureTransformSGIS;

		/*
			GL_SGIS_shared_multisample
		*/
		PFNGLMULTISAMPLESUBRECTPOSSGISPROC									glMultisampleSubRectPosSGIS;

		/*
			GL_SGIS_sharpen_texture
		*/
		PFNGLGETSHARPENTEXFUNCSGISPROC										glGetSharpenTexFuncSGIS;
		PFNGLSHARPENTEXFUNCSGISPROC											glSharpenTexFuncSGIS;

		/*
			GL_SGIS_texture4D
		*/
		PFNGLTEXIMAGE4DSGISPROC												glTexImage4DSGIS;
		PFNGLTEXSUBIMAGE4DSGISPROC											glTexSubImage4DSGIS;

		/*
			GL_SGIS_texture_filter4
		*/
		PFNGLGETTEXFILTERFUNCSGISPROC										glGetTexFilterFuncSGIS;
		PFNGLTEXFILTERFUNCSGISPROC											glTexFilterFuncSGIS;

		/*
			GL_SGIX_async
		*/
		PFNGLASYNCMARKERSGIXPROC											glAsyncMarkerSGIX;
		PFNGLDELETEASYNCMARKERSSGIXPROC										glDeleteAsyncMarkersSGIX;
		PFNGLFINISHASYNCSGIXPROC											glFinishAsyncSGIX;
		PFNGLGENASYNCMARKERSSGIXPROC										glGenAsyncMarkersSGIX;
		PFNGLISASYNCMARKERSGIXPROC											glIsAsyncMarkerSGIX;
		PFNGLPOLLASYNCSGIXPROC												glPollAsyncSGIX;

		/*
			GL_SGIX_datapipe
		*/
		PFNGLADDRESSSPACEPROC												glAddressSpace;
		PFNGLDATAPIPEPROC													glDataPipe;

		/*
			GL_SGIX_flush_raster
		*/
		PFNGLFLUSHRASTERSGIXPROC											glFlushRasterSGIX;

		/*
			GL_SGIX_fog_layers
		*/
		PFNGLFOGLAYERSSGIXPROC												glFogLayersSGIX;
		PFNGLGETFOGLAYERSSGIXPROC											glGetFogLayersSGIX;

		/*
			GL_SGIX_fog_texture
		*/
		PFNGLTEXTUREFOGSGIXPROC												glTextureFogSGIX;

		/*
			GL_SGIX_fragment_specular_lighting
		*/
		PFNGLFRAGMENTCOLORMATERIALSGIXPROC									glFragmentColorMaterialSGIX;
		PFNGLFRAGMENTLIGHTMODELFSGIXPROC									glFragmentLightModelfSGIX;
		PFNGLFRAGMENTLIGHTMODELFVSGIXPROC									glFragmentLightModelfvSGIX;
		PFNGLFRAGMENTLIGHTMODELISGIXPROC									glFragmentLightModeliSGIX;
		PFNGLFRAGMENTLIGHTMODELIVSGIXPROC									glFragmentLightModelivSGIX;
		PFNGLFRAGMENTLIGHTFSGIXPROC											glFragmentLightfSGIX;
		PFNGLFRAGMENTLIGHTFVSGIXPROC										glFragmentLightfvSGIX;
		PFNGLFRAGMENTLIGHTISGIXPROC											glFragmentLightiSGIX;
		PFNGLFRAGMENTLIGHTIVSGIXPROC										glFragmentLightivSGIX;
		PFNGLFRAGMENTMATERIALFSGIXPROC										glFragmentMaterialfSGIX;
		PFNGLFRAGMENTMATERIALFVSGIXPROC										glFragmentMaterialfvSGIX;
		PFNGLFRAGMENTMATERIALISGIXPROC										glFragmentMaterialiSGIX;
		PFNGLFRAGMENTMATERIALIVSGIXPROC										glFragmentMaterialivSGIX;
		PFNGLGETFRAGMENTLIGHTFVSGIXPROC										glGetFragmentLightfvSGIX;
		PFNGLGETFRAGMENTLIGHTIVSGIXPROC										glGetFragmentLightivSGIX;
		PFNGLGETFRAGMENTMATERIALFVSGIXPROC									glGetFragmentMaterialfvSGIX;
		PFNGLGETFRAGMENTMATERIALIVSGIXPROC									glGetFragmentMaterialivSGIX;

		/*
			GL_SGIX_framezoom
		*/
		PFNGLFRAMEZOOMSGIXPROC												glFrameZoomSGIX;

		/*
			GL_SGIX_igloo_interface
		*/
		PFNGLIGLOOINTERFACESGIXPROC											glIglooInterfaceSGIX;

		/*
			GL_SGIX_mpeg1
		*/
		PFNGLALLOCMPEGPREDICTORSSGIXPROC									glAllocMPEGPredictorsSGIX;
		PFNGLDELETEMPEGPREDICTORSSGIXPROC									glDeleteMPEGPredictorsSGIX;
		PFNGLGENMPEGPREDICTORSSGIXPROC										glGenMPEGPredictorsSGIX;
		PFNGLGETMPEGPARAMETERFVSGIXPROC										glGetMPEGParameterfvSGIX;
		PFNGLGETMPEGPARAMETERIVSGIXPROC										glGetMPEGParameterivSGIX;
		PFNGLGETMPEGPREDICTORSGIXPROC										glGetMPEGPredictorSGIX;
		PFNGLGETMPEGQUANTTABLEUBVPROC										glGetMPEGQuantTableubv;
		PFNGLISMPEGPREDICTORSGIXPROC										glIsMPEGPredictorSGIX;
		PFNGLMPEGPREDICTORSGIXPROC											glMPEGPredictorSGIX;
		PFNGLMPEGQUANTTABLEUBVPROC											glMPEGQuantTableubv;
		PFNGLSWAPMPEGPREDICTORSSGIXPROC										glSwapMPEGPredictorsSGIX;

		/*
			GL_SGIX_nonlinear_lighting_pervertex
		*/
		PFNGLGETNONLINLIGHTFVSGIXPROC										glGetNonlinLightfvSGIX;
		PFNGLGETNONLINMATERIALFVSGIXPROC									glGetNonlinMaterialfvSGIX;
		PFNGLNONLINLIGHTFVSGIXPROC											glNonlinLightfvSGIX;
		PFNGLNONLINMATERIALFVSGIXPROC										glNonlinMaterialfvSGIX;

		/*
			GL_SGIX_pixel_texture
		*/
		PFNGLPIXELTEXGENSGIXPROC											glPixelTexGenSGIX;

		/*
			GL_SGIX_polynomial_ffd
		*/
		PFNGLDEFORMSGIXPROC													glDeformSGIX;
		PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC								glLoadIdentityDeformationMapSGIX;

		/*
			GL_SGIX_quad_mesh
		*/
		PFNGLMESHBREADTHSGIXPROC											glMeshBreadthSGIX;
		PFNGLMESHSTRIDESGIXPROC												glMeshStrideSGIX;

		/*
			GL_SGIX_reference_plane
		*/
		PFNGLREFERENCEPLANESGIXPROC											glReferencePlaneSGIX;

		/*
			GL_SGIX_sprite
		*/
		PFNGLSPRITEPARAMETERFSGIXPROC										glSpriteParameterfSGIX;
		PFNGLSPRITEPARAMETERFVSGIXPROC										glSpriteParameterfvSGIX;
		PFNGLSPRITEPARAMETERISGIXPROC										glSpriteParameteriSGIX;
		PFNGLSPRITEPARAMETERIVSGIXPROC										glSpriteParameterivSGIX;

		/*
			GL_SGIX_tag_sample_buffer
		*/
		PFNGLTAGSAMPLEBUFFERSGIXPROC										glTagSampleBufferSGIX;

		/*
			GL_SGIX_vector_ops
		*/
		PFNGLGETVECTOROPERATIONSGIXPROC										glGetVectorOperationSGIX;
		PFNGLVECTOROPERATIONSGIXPROC										glVectorOperationSGIX;

		/*
			GL_SGIX_vertex_array_object
		*/
		PFNGLAREVERTEXARRAYSRESIDENTSGIXPROC								glAreVertexArraysResidentSGIX;
		PFNGLBINDVERTEXARRAYSGIXPROC										glBindVertexArraySGIX;
		PFNGLDELETEVERTEXARRAYSSGIXPROC										glDeleteVertexArraysSGIX;
		PFNGLGENVERTEXARRAYSSGIXPROC										glGenVertexArraysSGIX;
		PFNGLISVERTEXARRAYSGIXPROC											glIsVertexArraySGIX;
		PFNGLPRIORITIZEVERTEXARRAYSSGIXPROC									glPrioritizeVertexArraysSGIX;

		/*
			GL_SGI_color_table
		*/
		PFNGLCOLORTABLEPARAMETERFVSGIPROC									glColorTableParameterfvSGI;
		PFNGLCOLORTABLEPARAMETERIVSGIPROC									glColorTableParameterivSGI;
		PFNGLCOLORTABLESGIPROC												glColorTableSGI;
		PFNGLCOPYCOLORTABLESGIPROC											glCopyColorTableSGI;
		PFNGLGETCOLORTABLEPARAMETERFVSGIPROC								glGetColorTableParameterfvSGI;
		PFNGLGETCOLORTABLEPARAMETERIVSGIPROC								glGetColorTableParameterivSGI;
		PFNGLGETCOLORTABLESGIPROC											glGetColorTableSGI;

		/*
			GL_SGI_fft
		*/
		PFNGLGETPIXELTRANSFORMPARAMETERFVSGIPROC							glGetPixelTransformParameterfvSGI;
		PFNGLGETPIXELTRANSFORMPARAMETERIVSGIPROC							glGetPixelTransformParameterivSGI;
		PFNGLPIXELTRANSFORMPARAMETERFSGIPROC								glPixelTransformParameterfSGI;
		PFNGLPIXELTRANSFORMPARAMETERFVSGIPROC								glPixelTransformParameterfvSGI;
		PFNGLPIXELTRANSFORMPARAMETERISGIPROC								glPixelTransformParameteriSGI;
		PFNGLPIXELTRANSFORMPARAMETERIVSGIPROC								glPixelTransformParameterivSGI;
		PFNGLPIXELTRANSFORMSGIPROC											glPixelTransformSGI;

		/*
			GL_SUNX_constant_data
		*/
		PFNGLFINISHTEXTURESUNXPROC											glFinishTextureSUNX;

		/*
			GL_SUN_global_alpha
		*/
		PFNGLGLOBALALPHAFACTORBSUNPROC										glGlobalAlphaFactorbSUN;
		PFNGLGLOBALALPHAFACTORDSUNPROC										glGlobalAlphaFactordSUN;
		PFNGLGLOBALALPHAFACTORFSUNPROC										glGlobalAlphaFactorfSUN;
		PFNGLGLOBALALPHAFACTORISUNPROC										glGlobalAlphaFactoriSUN;
		PFNGLGLOBALALPHAFACTORSSUNPROC										glGlobalAlphaFactorsSUN;
		PFNGLGLOBALALPHAFACTORUBSUNPROC										glGlobalAlphaFactorubSUN;
		PFNGLGLOBALALPHAFACTORUISUNPROC										glGlobalAlphaFactoruiSUN;
		PFNGLGLOBALALPHAFACTORUSSUNPROC										glGlobalAlphaFactorusSUN;

		/*
			GL_SUN_read_video_pixels
		*/
		PFNGLREADVIDEOPIXELSSUNPROC											glReadVideoPixelsSUN;

		/*
			GL_SUN_triangle_list
		*/
		PFNGLREPLACEMENTCODEPOINTERSUNPROC									glReplacementCodePointerSUN;
		PFNGLREPLACEMENTCODEUBSUNPROC										glReplacementCodeubSUN;
		PFNGLREPLACEMENTCODEUBVSUNPROC										glReplacementCodeubvSUN;
		PFNGLREPLACEMENTCODEUISUNPROC										glReplacementCodeuiSUN;
		PFNGLREPLACEMENTCODEUIVSUNPROC										glReplacementCodeuivSUN;
		PFNGLREPLACEMENTCODEUSSUNPROC										glReplacementCodeusSUN;
		PFNGLREPLACEMENTCODEUSVSUNPROC										glReplacementCodeusvSUN;

		/*
			GL_SUN_vertex
		*/
		PFNGLCOLOR3FVERTEX3FSUNPROC											glColor3fVertex3fSUN;
		PFNGLCOLOR3FVERTEX3FVSUNPROC										glColor3fVertex3fvSUN;
		PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC									glColor4fNormal3fVertex3fSUN;
		PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC								glColor4fNormal3fVertex3fvSUN;
		PFNGLCOLOR4UBVERTEX2FSUNPROC										glColor4ubVertex2fSUN;
		PFNGLCOLOR4UBVERTEX2FVSUNPROC										glColor4ubVertex2fvSUN;
		PFNGLCOLOR4UBVERTEX3FSUNPROC										glColor4ubVertex3fSUN;
		PFNGLCOLOR4UBVERTEX3FVSUNPROC										glColor4ubVertex3fvSUN;
		PFNGLNORMAL3FVERTEX3FSUNPROC										glNormal3fVertex3fSUN;
		PFNGLNORMAL3FVERTEX3FVSUNPROC										glNormal3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC						glReplacementCodeuiColor3fVertex3fSUN;
		PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC						glReplacementCodeuiColor3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC				glReplacementCodeuiColor4fNormal3fVertex3fSUN;
		PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC				glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC						glReplacementCodeuiColor4ubVertex3fSUN;
		PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC						glReplacementCodeuiColor4ubVertex3fvSUN;
		PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC						glReplacementCodeuiNormal3fVertex3fSUN;
		PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC						glReplacementCodeuiNormal3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC				glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC			glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC						glReplacementCodeuiTexCoord2fVertex3fSUN;
		PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC					glReplacementCodeuiTexCoord2fVertex3fvSUN;
		PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC								glReplacementCodeuiVertex3fSUN;
		PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC								glReplacementCodeuiVertex3fvSUN;
		PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC								glTexCoord2fColor3fVertex3fSUN;
		PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC								glTexCoord2fColor3fVertex3fvSUN;
		PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC						glTexCoord2fColor4fNormal3fVertex3fSUN;
		PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC						glTexCoord2fColor4fNormal3fVertex3fvSUN;
		PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC								glTexCoord2fColor4ubVertex3fSUN;
		PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC								glTexCoord2fColor4ubVertex3fvSUN;
		PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC								glTexCoord2fNormal3fVertex3fSUN;
		PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC								glTexCoord2fNormal3fVertex3fvSUN;
		PFNGLTEXCOORD2FVERTEX3FSUNPROC										glTexCoord2fVertex3fSUN;
		PFNGLTEXCOORD2FVERTEX3FVSUNPROC										glTexCoord2fVertex3fvSUN;
		PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC						glTexCoord4fColor4fNormal3fVertex4fSUN;
		PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC						glTexCoord4fColor4fNormal3fVertex4fvSUN;
		PFNGLTEXCOORD4FVERTEX4FSUNPROC										glTexCoord4fVertex4fSUN;
		PFNGLTEXCOORD4FVERTEX4FVSUNPROC										glTexCoord4fVertex4fvSUN;

		/*
			GL_WIN_swap_hint
		*/
		PFNGLADDSWAPHINTRECTWINPROC											glAddSwapHintRectWIN;

	public:
		__OpenGLExtension();
		__OpenGLExtension(const __OpenGLExtension &sSrc) = delete;
		~__OpenGLExtension() = default;

	public:
		__OpenGLExtension &operator=(const __OpenGLExtension &sSrc) = delete;
	};
}

#endif

#endif