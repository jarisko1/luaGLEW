//####glTextureRangeAPPLE
// void glTextureRangeAPPLE (GLenum target, GLsizei length, GLvoid *pointer)
static int luaglew_glTextureRangeAPPLE(lua_State *L) {
	glTextureRangeAPPLE(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glGetTexParameterPointervAPPLE
// void glGetTexParameterPointervAPPLE (GLenum target, GLenum pname, GLvoid **params)
static int luaglew_glGetTexParameterPointervAPPLE(lua_State *L) {
	GLvoid ** return_value;
	glGetTexParameterPointervAPPLE(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glColorTable
// void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
static int luaglew_glColorTable(lua_State *L) {
	glColorTable(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glColorSubTable
// void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
static int luaglew_glColorSubTable(lua_State *L) {
	glColorSubTable(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei)luaL_checklong(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glColorTableParameteriv
// void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params)
static int luaglew_glColorTableParameteriv(lua_State *L) {
	glColorTableParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glColorTableParameterfv
// void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params)
static int luaglew_glColorTableParameterfv(lua_State *L) {
	glColorTableParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glCopyColorSubTable
// void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
static int luaglew_glCopyColorSubTable(lua_State *L) {
	glCopyColorSubTable(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glCopyColorTable
// void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
static int luaglew_glCopyColorTable(lua_State *L) {
	glCopyColorTable(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glGetColorTable
// void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table)
static int luaglew_glGetColorTable(lua_State *L) {
	GLvoid * return_value;
	glGetColorTable(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetColorTableParameterfv
// void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetColorTableParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetColorTableParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetColorTableParameteriv
// void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetColorTableParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetColorTableParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glHistogram
// void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
static int luaglew_glHistogram(lua_State *L) {
	glHistogram(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLboolean)lua_toboolean(L, 4));
	return 0;
}
//####glResetHistogram
// void glResetHistogram (GLenum target)
static int luaglew_glResetHistogram(lua_State *L) {
	glResetHistogram(luaL_checkint(L, 1));
	return 0;
}
//####glGetHistogram
// void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
static int luaglew_glGetHistogram(lua_State *L) {
	GLvoid * return_value;
	glGetHistogram(luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetHistogramParameterfv
// void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetHistogramParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetHistogramParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetHistogramParameteriv
// void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetHistogramParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetHistogramParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glMinmax
// void glMinmax (GLenum target, GLenum internalformat, GLboolean sink)
static int luaglew_glMinmax(lua_State *L) {
	glMinmax(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLboolean)lua_toboolean(L, 3));
	return 0;
}
//####glResetMinmax
// void glResetMinmax (GLenum target)
static int luaglew_glResetMinmax(lua_State *L) {
	glResetMinmax(luaL_checkint(L, 1));
	return 0;
}
//####glGetMinmaxParameterfv
// void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetMinmaxParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetMinmaxParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetMinmaxParameteriv
// void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetMinmaxParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetMinmaxParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glConvolutionFilter1D
// void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
static int luaglew_glConvolutionFilter1D(lua_State *L) {
	glConvolutionFilter1D(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glConvolutionFilter2D
// void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
static int luaglew_glConvolutionFilter2D(lua_State *L) {
	glConvolutionFilter2D(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glConvolutionParameterf
// void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params)
static int luaglew_glConvolutionParameterf(lua_State *L) {
	glConvolutionParameterf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glConvolutionParameterfv
// void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params)
static int luaglew_glConvolutionParameterfv(lua_State *L) {
	glConvolutionParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glConvolutionParameteri
// void glConvolutionParameteri (GLenum target, GLenum pname, GLint params)
static int luaglew_glConvolutionParameteri(lua_State *L) {
	glConvolutionParameteri(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glConvolutionParameteriv
// void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params)
static int luaglew_glConvolutionParameteriv(lua_State *L) {
	glConvolutionParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glCopyConvolutionFilter1D
// void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
static int luaglew_glCopyConvolutionFilter1D(lua_State *L) {
	glCopyConvolutionFilter1D(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glCopyConvolutionFilter2D
// void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glCopyConvolutionFilter2D(lua_State *L) {
	glCopyConvolutionFilter2D(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
//####glGetConvolutionFilter
// void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image)
static int luaglew_glGetConvolutionFilter(lua_State *L) {
	GLvoid * return_value;
	glGetConvolutionFilter(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetConvolutionParameterfv
// void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetConvolutionParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetConvolutionParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetConvolutionParameteriv
// void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetConvolutionParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetConvolutionParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glSeparableFilter2D
// void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
static int luaglew_glSeparableFilter2D(lua_State *L) {
	glSeparableFilter2D(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
//####glGetSeparableFilter
// void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
static int luaglew_glGetSeparableFilter(lua_State *L) {
	GLvoid * return_value;
	glGetSeparableFilter(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetMinmax
// void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid *values)
static int luaglew_glGetMinmax(lua_State *L) {
	GLvoid * return_value;
	glGetMinmax(luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glCurrentPaletteMatrixARB
// void glCurrentPaletteMatrixARB (GLint index)
static int luaglew_glCurrentPaletteMatrixARB(lua_State *L) {
	glCurrentPaletteMatrixARB((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glMatrixIndexPointerARB
// void glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
static int luaglew_glMatrixIndexPointerARB(lua_State *L) {
	glMatrixIndexPointerARB((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glMatrixIndexubvARB
// void glMatrixIndexubvARB (GLint size, GLubyte *indices)
static int luaglew_glMatrixIndexubvARB(lua_State *L) {
	glMatrixIndexubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
//####glMatrixIndexusvARB
// void glMatrixIndexusvARB (GLint size, GLushort *indices)
static int luaglew_glMatrixIndexusvARB(lua_State *L) {
	glMatrixIndexusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMatrixIndexuivARB
// void glMatrixIndexuivARB (GLint size, GLuint *indices)
static int luaglew_glMatrixIndexuivARB(lua_State *L) {
	glMatrixIndexuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glActiveTextureARB
// void glActiveTextureARB (GLenum texture)
static int luaglew_glActiveTextureARB(lua_State *L) {
	glActiveTextureARB(luaL_checkint(L, 1));
	return 0;
}
//####glClientActiveTextureARB
// void glClientActiveTextureARB (GLenum texture)
static int luaglew_glClientActiveTextureARB(lua_State *L) {
	glClientActiveTextureARB(luaL_checkint(L, 1));
	return 0;
}
//####glMultiTexCoord1dARB
// void glMultiTexCoord1dARB (GLenum target, GLdouble s)
static int luaglew_glMultiTexCoord1dARB(lua_State *L) {
	glMultiTexCoord1dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1dvARB
// void glMultiTexCoord1dvARB (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord1dvARB(lua_State *L) {
	glMultiTexCoord1dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord1fARB
// void glMultiTexCoord1fARB (GLenum target, GLfloat s)
static int luaglew_glMultiTexCoord1fARB(lua_State *L) {
	glMultiTexCoord1fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1fvARB
// void glMultiTexCoord1fvARB (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord1fvARB(lua_State *L) {
	glMultiTexCoord1fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord1iARB
// void glMultiTexCoord1iARB (GLenum target, GLint s)
static int luaglew_glMultiTexCoord1iARB(lua_State *L) {
	glMultiTexCoord1iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glMultiTexCoord1ivARB
// void glMultiTexCoord1ivARB (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord1ivARB(lua_State *L) {
	glMultiTexCoord1ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord1sARB
// void glMultiTexCoord1sARB (GLenum target, GLshort s)
static int luaglew_glMultiTexCoord1sARB(lua_State *L) {
	glMultiTexCoord1sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glMultiTexCoord1svARB
// void glMultiTexCoord1svARB (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord1svARB(lua_State *L) {
	glMultiTexCoord1svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2dARB
// void glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t)
static int luaglew_glMultiTexCoord2dARB(lua_State *L) {
	glMultiTexCoord2dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2dvARB
// void glMultiTexCoord2dvARB (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord2dvARB(lua_State *L) {
	glMultiTexCoord2dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord2fARB
// void glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t)
static int luaglew_glMultiTexCoord2fARB(lua_State *L) {
	glMultiTexCoord2fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2fvARB
// void glMultiTexCoord2fvARB (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord2fvARB(lua_State *L) {
	glMultiTexCoord2fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord2iARB
// void glMultiTexCoord2iARB (GLenum target, GLint s, GLint t)
static int luaglew_glMultiTexCoord2iARB(lua_State *L) {
	glMultiTexCoord2iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glMultiTexCoord2ivARB
// void glMultiTexCoord2ivARB (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord2ivARB(lua_State *L) {
	glMultiTexCoord2ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2sARB
// void glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t)
static int luaglew_glMultiTexCoord2sARB(lua_State *L) {
	glMultiTexCoord2sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glMultiTexCoord2svARB
// void glMultiTexCoord2svARB (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord2svARB(lua_State *L) {
	glMultiTexCoord2svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3dARB
// void glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r)
static int luaglew_glMultiTexCoord3dARB(lua_State *L) {
	glMultiTexCoord3dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3dvARB
// void glMultiTexCoord3dvARB (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord3dvARB(lua_State *L) {
	glMultiTexCoord3dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord3fARB
// void glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r)
static int luaglew_glMultiTexCoord3fARB(lua_State *L) {
	glMultiTexCoord3fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3fvARB
// void glMultiTexCoord3fvARB (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord3fvARB(lua_State *L) {
	glMultiTexCoord3fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord3iARB
// void glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r)
static int luaglew_glMultiTexCoord3iARB(lua_State *L) {
	glMultiTexCoord3iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glMultiTexCoord3ivARB
// void glMultiTexCoord3ivARB (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord3ivARB(lua_State *L) {
	glMultiTexCoord3ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3sARB
// void glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r)
static int luaglew_glMultiTexCoord3sARB(lua_State *L) {
	glMultiTexCoord3sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glMultiTexCoord3svARB
// void glMultiTexCoord3svARB (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord3svARB(lua_State *L) {
	glMultiTexCoord3svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4dARB
// void glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
static int luaglew_glMultiTexCoord4dARB(lua_State *L) {
	glMultiTexCoord4dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4dvARB
// void glMultiTexCoord4dvARB (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord4dvARB(lua_State *L) {
	glMultiTexCoord4dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord4fARB
// void glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
static int luaglew_glMultiTexCoord4fARB(lua_State *L) {
	glMultiTexCoord4fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4fvARB
// void glMultiTexCoord4fvARB (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord4fvARB(lua_State *L) {
	glMultiTexCoord4fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord4iARB
// void glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q)
static int luaglew_glMultiTexCoord4iARB(lua_State *L) {
	glMultiTexCoord4iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glMultiTexCoord4ivARB
// void glMultiTexCoord4ivARB (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord4ivARB(lua_State *L) {
	glMultiTexCoord4ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4sARB
// void glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
static int luaglew_glMultiTexCoord4sARB(lua_State *L) {
	glMultiTexCoord4sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
//####glMultiTexCoord4svARB
// void glMultiTexCoord4svARB (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord4svARB(lua_State *L) {
	glMultiTexCoord4svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glPointParameterfARB
// void glPointParameterfARB (GLenum pname, GLfloat param)
static int luaglew_glPointParameterfARB(lua_State *L) {
	glPointParameterfARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPointParameterfvARB
// void glPointParameterfvARB (GLenum pname, const GLfloat* params)
static int luaglew_glPointParameterfvARB(lua_State *L) {
	glPointParameterfvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glWeightbvARB
// void glWeightbvARB (GLint size, GLbyte *weights)
static int luaglew_glWeightbvARB(lua_State *L) {
	glWeightbvARB((GLint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
//####glWeightsvARB
// void glWeightsvARB (GLint size, GLshort *weights)
static int luaglew_glWeightsvARB(lua_State *L) {
	glWeightsvARB((GLint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightivARB
// void glWeightivARB (GLint size, GLint *weights)
static int luaglew_glWeightivARB(lua_State *L) {
	glWeightivARB((GLint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightfvARB
// void glWeightfvARB (GLint size, GLfloat *weights)
static int luaglew_glWeightfvARB(lua_State *L) {
	glWeightfvARB((GLint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glWeightdvARB
// void glWeightdvARB (GLint size, GLdouble *weights)
static int luaglew_glWeightdvARB(lua_State *L) {
	glWeightdvARB((GLint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glWeightubvARB
// void glWeightubvARB (GLint size, GLubyte *weights)
static int luaglew_glWeightubvARB(lua_State *L) {
	glWeightubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
//####glWeightusvARB
// void glWeightusvARB (GLint size, GLushort *weights)
static int luaglew_glWeightusvARB(lua_State *L) {
	glWeightusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightuivARB
// void glWeightuivARB (GLint size, GLuint *weights)
static int luaglew_glWeightuivARB(lua_State *L) {
	glWeightuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightPointerARB
// void glWeightPointerARB (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
static int luaglew_glWeightPointerARB(lua_State *L) {
	glWeightPointerARB((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glVertexBlendARB
// void glVertexBlendARB (GLint count)
static int luaglew_glVertexBlendARB(lua_State *L) {
	glVertexBlendARB((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glTexBumpParameterivATI
// void glTexBumpParameterivATI (GLenum pname, GLint *param)
static int luaglew_glTexBumpParameterivATI(lua_State *L) {
	glTexBumpParameterivATI(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glTexBumpParameterfvATI
// void glTexBumpParameterfvATI (GLenum pname, GLfloat *param)
static int luaglew_glTexBumpParameterfvATI(lua_State *L) {
	glTexBumpParameterfvATI(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glGetTexBumpParameterivATI
// void glGetTexBumpParameterivATI (GLenum pname, GLint *param)
static int luaglew_glGetTexBumpParameterivATI(lua_State *L) {
	GLint return_value[16];
	glGetTexBumpParameterivATI(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexBumpParameterfvATI
// void glGetTexBumpParameterfvATI (GLenum pname, GLfloat *param)
static int luaglew_glGetTexBumpParameterfvATI(lua_State *L) {
	GLfloat return_value[16];
	glGetTexBumpParameterfvATI(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glMapObjectBufferATI
// void* glMapObjectBufferATI (GLuint buffer)
static int luaglew_glMapObjectBufferATI(lua_State *L) {
	void* return_value;
	return_value = glMapObjectBufferATI((GLuint)luaL_checkint(L, 1));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glUnmapObjectBufferATI
// void glUnmapObjectBufferATI (GLuint buffer)
static int luaglew_glUnmapObjectBufferATI(lua_State *L) {
	glUnmapObjectBufferATI((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glPNTrianglesiATI
// void glPNTrianglesiATI (GLenum pname, GLint param)
static int luaglew_glPNTrianglesiATI(lua_State *L) {
	glPNTrianglesiATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glPNTrianglesfATI
// void glPNTrianglesfATI (GLenum pname, GLfloat param)
static int luaglew_glPNTrianglesfATI(lua_State *L) {
	glPNTrianglesfATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glStencilOpSeparateATI
// void glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
static int luaglew_glStencilOpSeparateATI(lua_State *L) {
	glStencilOpSeparateATI(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glStencilFuncSeparateATI
// void glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
static int luaglew_glStencilFuncSeparateATI(lua_State *L) {
	glStencilFuncSeparateATI(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glClientActiveVertexStreamATI
// void glClientActiveVertexStreamATI (GLenum stream)
static int luaglew_glClientActiveVertexStreamATI(lua_State *L) {
	glClientActiveVertexStreamATI(luaL_checkint(L, 1));
	return 0;
}
//####glVertexBlendEnviATI
// void glVertexBlendEnviATI (GLenum pname, GLint param)
static int luaglew_glVertexBlendEnviATI(lua_State *L) {
	glVertexBlendEnviATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glVertexBlendEnvfATI
// void glVertexBlendEnvfATI (GLenum pname, GLfloat param)
static int luaglew_glVertexBlendEnvfATI(lua_State *L) {
	glVertexBlendEnvfATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glVertexStream2sATI
// void glVertexStream2sATI (GLenum stream, GLshort x, GLshort y)
static int luaglew_glVertexStream2sATI(lua_State *L) {
	glVertexStream2sATI(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glVertexStream2svATI
// void glVertexStream2svATI (GLenum stream, const GLshort *v)
static int luaglew_glVertexStream2svATI(lua_State *L) {
	glVertexStream2svATI(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream2iATI
// void glVertexStream2iATI (GLenum stream, GLint x, GLint y)
static int luaglew_glVertexStream2iATI(lua_State *L) {
	glVertexStream2iATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glVertexStream2ivATI
// void glVertexStream2ivATI (GLenum stream, const GLint *v)
static int luaglew_glVertexStream2ivATI(lua_State *L) {
	glVertexStream2ivATI(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream2fATI
// void glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat y)
static int luaglew_glVertexStream2fATI(lua_State *L) {
	glVertexStream2fATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glVertexStream2fvATI
// void glVertexStream2fvATI (GLenum stream, const GLfloat *v)
static int luaglew_glVertexStream2fvATI(lua_State *L) {
	glVertexStream2fvATI(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glVertexStream2dATI
// void glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble y)
static int luaglew_glVertexStream2dATI(lua_State *L) {
	glVertexStream2dATI(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glVertexStream2dvATI
// void glVertexStream2dvATI (GLenum stream, const GLdouble *v)
static int luaglew_glVertexStream2dvATI(lua_State *L) {
	glVertexStream2dvATI(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glVertexStream3sATI
// void glVertexStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z)
static int luaglew_glVertexStream3sATI(lua_State *L) {
	glVertexStream3sATI(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glVertexStream3svATI
// void glVertexStream3svATI (GLenum stream, const GLshort *v)
static int luaglew_glVertexStream3svATI(lua_State *L) {
	glVertexStream3svATI(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream3iATI
// void glVertexStream3iATI (GLenum stream, GLint x, GLint y, GLint z)
static int luaglew_glVertexStream3iATI(lua_State *L) {
	glVertexStream3iATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glVertexStream3ivATI
// void glVertexStream3ivATI (GLenum stream, const GLint *v)
static int luaglew_glVertexStream3ivATI(lua_State *L) {
	glVertexStream3ivATI(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream3fATI
// void glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glVertexStream3fATI(lua_State *L) {
	glVertexStream3fATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glVertexStream3fvATI
// void glVertexStream3fvATI (GLenum stream, const GLfloat *v)
static int luaglew_glVertexStream3fvATI(lua_State *L) {
	glVertexStream3fvATI(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glVertexStream3dATI
// void glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glVertexStream3dATI(lua_State *L) {
	glVertexStream3dATI(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glVertexStream3dvATI
// void glVertexStream3dvATI (GLenum stream, const GLdouble *v)
static int luaglew_glVertexStream3dvATI(lua_State *L) {
	glVertexStream3dvATI(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glVertexStream4sATI
// void glVertexStream4sATI (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
static int luaglew_glVertexStream4sATI(lua_State *L) {
	glVertexStream4sATI(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
//####glVertexStream4svATI
// void glVertexStream4svATI (GLenum stream, const GLshort *v)
static int luaglew_glVertexStream4svATI(lua_State *L) {
	glVertexStream4svATI(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream4iATI
// void glVertexStream4iATI (GLenum stream, GLint x, GLint y, GLint z, GLint w)
static int luaglew_glVertexStream4iATI(lua_State *L) {
	glVertexStream4iATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glVertexStream4ivATI
// void glVertexStream4ivATI (GLenum stream, const GLint *v)
static int luaglew_glVertexStream4ivATI(lua_State *L) {
	glVertexStream4ivATI(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVertexStream4fATI
// void glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
static int luaglew_glVertexStream4fATI(lua_State *L) {
	glVertexStream4fATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glVertexStream4fvATI
// void glVertexStream4fvATI (GLenum stream, const GLfloat *v)
static int luaglew_glVertexStream4fvATI(lua_State *L) {
	glVertexStream4fvATI(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glVertexStream4dATI
// void glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
static int luaglew_glVertexStream4dATI(lua_State *L) {
	glVertexStream4dATI(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
//####glVertexStream4dvATI
// void glVertexStream4dvATI (GLenum stream, const GLdouble *v)
static int luaglew_glVertexStream4dvATI(lua_State *L) {
	glVertexStream4dvATI(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glNormalStream3bATI
// void glNormalStream3bATI (GLenum stream, GLbyte x, GLbyte y, GLbyte z)
static int luaglew_glNormalStream3bATI(lua_State *L) {
	glNormalStream3bATI(luaL_checkint(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3), (GLbyte)luaL_checknumber(L, 4));
	return 0;
}
//####glNormalStream3bvATI
// void glNormalStream3bvATI (GLenum stream, const GLbyte *v)
static int luaglew_glNormalStream3bvATI(lua_State *L) {
	glNormalStream3bvATI(luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
//####glNormalStream3sATI
// void glNormalStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z)
static int luaglew_glNormalStream3sATI(lua_State *L) {
	glNormalStream3sATI(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glNormalStream3svATI
// void glNormalStream3svATI (GLenum stream, const GLshort *v)
static int luaglew_glNormalStream3svATI(lua_State *L) {
	glNormalStream3svATI(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glNormalStream3iATI
// void glNormalStream3iATI (GLenum stream, GLint x, GLint y, GLint z)
static int luaglew_glNormalStream3iATI(lua_State *L) {
	glNormalStream3iATI(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glNormalStream3ivATI
// void glNormalStream3ivATI (GLenum stream, const GLint *v)
static int luaglew_glNormalStream3ivATI(lua_State *L) {
	glNormalStream3ivATI(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glNormalStream3fATI
// void glNormalStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glNormalStream3fATI(lua_State *L) {
	glNormalStream3fATI(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glNormalStream3fvATI
// void glNormalStream3fvATI (GLenum stream, const GLfloat *v)
static int luaglew_glNormalStream3fvATI(lua_State *L) {
	glNormalStream3fvATI(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glNormalStream3dATI
// void glNormalStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glNormalStream3dATI(lua_State *L) {
	glNormalStream3dATI(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glNormalStream3dvATI
// void glNormalStream3dvATI (GLenum stream, const GLdouble *v)
static int luaglew_glNormalStream3dvATI(lua_State *L) {
	glNormalStream3dvATI(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glUniformBufferEXT
// void glUniformBufferEXT (GLuint program, GLint location, GLuint buffer)
static int luaglew_glUniformBufferEXT(lua_State *L) {
	glUniformBufferEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glGetUniformBufferSizeEXT
// GLint glGetUniformBufferSizeEXT (GLuint program, GLint location)
static int luaglew_glGetUniformBufferSizeEXT(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformBufferSizeEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetUniformOffsetEXT
// GLintptr glGetUniformOffsetEXT (GLuint program, GLint location)
static int luaglew_glGetUniformOffsetEXT(lua_State *L) {
	GLintptr return_value;
	return_value = glGetUniformOffsetEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glDepthBoundsEXT
// void glDepthBoundsEXT (GLclampd zmin, GLclampd zmax)
static int luaglew_glDepthBoundsEXT(lua_State *L) {
	glDepthBoundsEXT((GLclampd)luaL_checknumber(L, 1), (GLclampd)luaL_checknumber(L, 2));
	return 0;
}
//####glDrawArraysInstancedEXT
// void glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount)
static int luaglew_glDrawArraysInstancedEXT(lua_State *L) {
	glDrawArraysInstancedEXT(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glDrawElementsInstancedEXT
// void glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
static int luaglew_glDrawElementsInstancedEXT(lua_State *L) {
	glDrawElementsInstancedEXT(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glDrawRangeElementsEXT
// void glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
static int luaglew_glDrawRangeElementsEXT(lua_State *L) {
	glDrawRangeElementsEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glFogCoordfEXT
// void glFogCoordfEXT (GLfloat coord)
static int luaglew_glFogCoordfEXT(lua_State *L) {
	glFogCoordfEXT((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoordfvEXT
// void glFogCoordfvEXT (const GLfloat *coord)
static int luaglew_glFogCoordfvEXT(lua_State *L) {
	glFogCoordfvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glFogCoorddEXT
// void glFogCoorddEXT (GLdouble coord)
static int luaglew_glFogCoorddEXT(lua_State *L) {
	glFogCoorddEXT((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoorddvEXT
// void glFogCoorddvEXT (const GLdouble *coord)
static int luaglew_glFogCoorddvEXT(lua_State *L) {
	glFogCoorddvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glFogCoordPointerEXT
// void glFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glFogCoordPointerEXT(lua_State *L) {
	glFogCoordPointerEXT(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glProgramParameteriEXT
// void glProgramParameteriEXT (GLuint program, GLenum pname, GLint value)
static int luaglew_glProgramParameteriEXT(lua_State *L) {
	glProgramParameteriEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glFramebufferTextureEXT
// void glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level)
static int luaglew_glFramebufferTextureEXT(lua_State *L) {
	glFramebufferTextureEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glFramebufferTextureLayerEXT
// void glFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
static int luaglew_glFramebufferTextureLayerEXT(lua_State *L) {
	glFramebufferTextureLayerEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFramebufferTextureFaceEXT
// void glFramebufferTextureFaceEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
static int luaglew_glFramebufferTextureFaceEXT(lua_State *L) {
	glFramebufferTextureFaceEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), luaL_checkint(L, 5));
	return 0;
}
//####glProgramEnvParameters4fvEXT
// void glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat* params)
static int luaglew_glProgramEnvParameters4fvEXT(lua_State *L) {
	glProgramEnvParameters4fvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glProgramLocalParameters4fvEXT
// void glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat* params)
static int luaglew_glProgramLocalParameters4fvEXT(lua_State *L) {
	glProgramLocalParameters4fvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glGetUniformuivEXT
// void glGetUniformuivEXT (GLuint program, GLint location, GLuint *params)
static int luaglew_glGetUniformuivEXT(lua_State *L) {
	GLuint return_value[16];
	glGetUniformuivEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glBindFragDataLocationEXT
// void glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar *name)
static int luaglew_glBindFragDataLocationEXT(lua_State *L) {
	glBindFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glGetFragDataLocationEXT
// GLint glGetFragDataLocationEXT (GLuint program, const GLchar *name)
static int luaglew_glGetFragDataLocationEXT(lua_State *L) {
	GLint return_value;
	return_value = glGetFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glUniform1uiEXT
// void glUniform1uiEXT (GLint location, GLuint v0)
static int luaglew_glUniform1uiEXT(lua_State *L) {
	glUniform1uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glUniform2uiEXT
// void glUniform2uiEXT (GLint location, GLuint v0, GLuint v1)
static int luaglew_glUniform2uiEXT(lua_State *L) {
	glUniform2uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glUniform3uiEXT
// void glUniform3uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2)
static int luaglew_glUniform3uiEXT(lua_State *L) {
	glUniform3uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glUniform4uiEXT
// void glUniform4uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
static int luaglew_glUniform4uiEXT(lua_State *L) {
	glUniform4uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
//####glUniform1uivEXT
// void glUniform1uivEXT (GLint location, GLsizei count, const GLuint *value)
static int luaglew_glUniform1uivEXT(lua_State *L) {
	glUniform1uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform2uivEXT
// void glUniform2uivEXT (GLint location, GLsizei count, const GLuint *value)
static int luaglew_glUniform2uivEXT(lua_State *L) {
	glUniform2uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform3uivEXT
// void glUniform3uivEXT (GLint location, GLsizei count, const GLuint *value)
static int luaglew_glUniform3uivEXT(lua_State *L) {
	glUniform3uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform4uivEXT
// void glUniform4uivEXT (GLint location, GLsizei count, const GLuint *value)
static int luaglew_glUniform4uivEXT(lua_State *L) {
	glUniform4uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glGetVertexAttribIivEXT
// void glGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint *params)
static int luaglew_glGetVertexAttribIivEXT(lua_State *L) {
	GLint return_value[16];
	glGetVertexAttribIivEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribIuivEXT
// void glGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint *params)
static int luaglew_glGetVertexAttribIuivEXT(lua_State *L) {
	GLuint return_value[16];
	glGetVertexAttribIuivEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glPointParameterfEXT
// void glPointParameterfEXT (GLenum pname, GLfloat param)
static int luaglew_glPointParameterfEXT(lua_State *L) {
	glPointParameterfEXT(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPointParameterfvEXT
// void glPointParameterfvEXT (GLenum pname, const GLfloat* params)
static int luaglew_glPointParameterfvEXT(lua_State *L) {
	glPointParameterfvEXT(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glSecondaryColor3bEXT
// void glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue)
static int luaglew_glSecondaryColor3bEXT(lua_State *L) {
	glSecondaryColor3bEXT((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3bvEXT
// void glSecondaryColor3bvEXT (const GLbyte *v)
static int luaglew_glSecondaryColor3bvEXT(lua_State *L) {
	glSecondaryColor3bvEXT((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glSecondaryColor3dEXT
// void glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue)
static int luaglew_glSecondaryColor3dEXT(lua_State *L) {
	glSecondaryColor3dEXT((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3dvEXT
// void glSecondaryColor3dvEXT (const GLdouble *v)
static int luaglew_glSecondaryColor3dvEXT(lua_State *L) {
	glSecondaryColor3dvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glSecondaryColor3fEXT
// void glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue)
static int luaglew_glSecondaryColor3fEXT(lua_State *L) {
	glSecondaryColor3fEXT((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3fvEXT
// void glSecondaryColor3fvEXT (const GLfloat *v)
static int luaglew_glSecondaryColor3fvEXT(lua_State *L) {
	glSecondaryColor3fvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glSecondaryColor3iEXT
// void glSecondaryColor3iEXT (GLint red, GLint green, GLint blue)
static int luaglew_glSecondaryColor3iEXT(lua_State *L) {
	glSecondaryColor3iEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3ivEXT
// void glSecondaryColor3ivEXT (const GLint *v)
static int luaglew_glSecondaryColor3ivEXT(lua_State *L) {
	glSecondaryColor3ivEXT((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3sEXT
// void glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue)
static int luaglew_glSecondaryColor3sEXT(lua_State *L) {
	glSecondaryColor3sEXT((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3svEXT
// void glSecondaryColor3svEXT (const GLshort *v)
static int luaglew_glSecondaryColor3svEXT(lua_State *L) {
	glSecondaryColor3svEXT((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3ubEXT
// void glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue)
static int luaglew_glSecondaryColor3ubEXT(lua_State *L) {
	glSecondaryColor3ubEXT((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3ubvEXT
// void glSecondaryColor3ubvEXT (const GLubyte *v)
static int luaglew_glSecondaryColor3ubvEXT(lua_State *L) {
	glSecondaryColor3ubvEXT((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glSecondaryColor3uiEXT
// void glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue)
static int luaglew_glSecondaryColor3uiEXT(lua_State *L) {
	glSecondaryColor3uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3uivEXT
// void glSecondaryColor3uivEXT (const GLuint *v)
static int luaglew_glSecondaryColor3uivEXT(lua_State *L) {
	glSecondaryColor3uivEXT((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3usEXT
// void glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue)
static int luaglew_glSecondaryColor3usEXT(lua_State *L) {
	glSecondaryColor3usEXT((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3usvEXT
// void glSecondaryColor3usvEXT (const GLushort *v)
static int luaglew_glSecondaryColor3usvEXT(lua_State *L) {
	glSecondaryColor3usvEXT((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColorPointerEXT
// void glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
static int luaglew_glSecondaryColorPointerEXT(lua_State *L) {
	glSecondaryColorPointerEXT((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glTexBufferEXT
// void glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer)
static int luaglew_glTexBufferEXT(lua_State *L) {
	glTexBufferEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glTexParameterIivEXT
// void glTexParameterIivEXT (GLenum target, GLenum pname, const GLint *params)
static int luaglew_glTexParameterIivEXT(lua_State *L) {
	glTexParameterIivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexParameterIuivEXT
// void glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint *params)
static int luaglew_glTexParameterIuivEXT(lua_State *L) {
	glTexParameterIuivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glGetTexParameterIivEXT
// void glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetTexParameterIivEXT(lua_State *L) {
	GLint return_value[16];
	glGetTexParameterIivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexParameterIuivEXT
// void glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint *params)
static int luaglew_glGetTexParameterIuivEXT(lua_State *L) {
	GLuint return_value[16];
	glGetTexParameterIuivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glClearColorIiEXT
// void glClearColorIiEXT (GLint red, GLint green, GLint blue, GLint alpha)
static int luaglew_glClearColorIiEXT(lua_State *L) {
	glClearColorIiEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glClearColorIuiEXT
// void glClearColorIuiEXT (GLuint red, GLuint green, GLuint blue, GLuint alpha)
static int luaglew_glClearColorIuiEXT(lua_State *L) {
	glClearColorIuiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glGetQueryObjecti64vEXT
// void glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64EXT *params)
static int luaglew_glGetQueryObjecti64vEXT(lua_State *L) {
	GLint64EXT return_value[16];
	glGetQueryObjecti64vEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectui64vEXT
// void glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64EXT *params)
static int luaglew_glGetQueryObjectui64vEXT(lua_State *L) {
	GLuint64EXT return_value[16];
	glGetQueryObjectui64vEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glBeginVertexShaderEXT
// void glBeginVertexShaderEXT (void)
static int luaglew_glBeginVertexShaderEXT(lua_State *L) {
	glBeginVertexShaderEXT();
	return 0;
}
//####glEndVertexShaderEXT
// void glEndVertexShaderEXT (void)
static int luaglew_glEndVertexShaderEXT(lua_State *L) {
	glEndVertexShaderEXT();
	return 0;
}
//####glBindVertexShaderEXT
// void glBindVertexShaderEXT (GLuint id)
static int luaglew_glBindVertexShaderEXT(lua_State *L) {
	glBindVertexShaderEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glGenVertexShadersEXT
// GLuint glGenVertexShadersEXT (GLuint range)
static int luaglew_glGenVertexShadersEXT(lua_State *L) {
	GLuint return_value;
	return_value = glGenVertexShadersEXT((GLuint)luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glDeleteVertexShaderEXT
// void glDeleteVertexShaderEXT (GLuint id)
static int luaglew_glDeleteVertexShaderEXT(lua_State *L) {
	glDeleteVertexShaderEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glShaderOp1EXT
// void glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1)
static int luaglew_glShaderOp1EXT(lua_State *L) {
	glShaderOp1EXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glShaderOp2EXT
// void glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2)
static int luaglew_glShaderOp2EXT(lua_State *L) {
	glShaderOp2EXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glShaderOp3EXT
// void glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
static int luaglew_glShaderOp3EXT(lua_State *L) {
	glShaderOp3EXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
//####glSwizzleEXT
// void glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
static int luaglew_glSwizzleEXT(lua_State *L) {
	glSwizzleEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6));
	return 0;
}
//####glWriteMaskEXT
// void glWriteMaskEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
static int luaglew_glWriteMaskEXT(lua_State *L) {
	glWriteMaskEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6));
	return 0;
}
//####glInsertComponentEXT
// void glInsertComponentEXT (GLuint res, GLuint src, GLuint num)
static int luaglew_glInsertComponentEXT(lua_State *L) {
	glInsertComponentEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glExtractComponentEXT
// void glExtractComponentEXT (GLuint res, GLuint src, GLuint num)
static int luaglew_glExtractComponentEXT(lua_State *L) {
	glExtractComponentEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glGenSymbolsEXT
// GLuint glGenSymbolsEXT (GLenum dataType, GLenum storageType, GLenum range, GLuint components)
static int luaglew_glGenSymbolsEXT(lua_State *L) {
	GLuint return_value;
	return_value = glGenSymbolsEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glSetInvariantEXT
// void glSetInvariantEXT (GLuint id, GLenum type, GLvoid *addr)
static int luaglew_glSetInvariantEXT(lua_State *L) {
	glSetInvariantEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glSetLocalConstantEXT
// void glSetLocalConstantEXT (GLuint id, GLenum type, GLvoid *addr)
static int luaglew_glSetLocalConstantEXT(lua_State *L) {
	glSetLocalConstantEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glVariantbvEXT
// void glVariantbvEXT (GLuint id, GLbyte *addr)
static int luaglew_glVariantbvEXT(lua_State *L) {
	glVariantbvEXT((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
//####glVariantsvEXT
// void glVariantsvEXT (GLuint id, GLshort *addr)
static int luaglew_glVariantsvEXT(lua_State *L) {
	glVariantsvEXT((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVariantivEXT
// void glVariantivEXT (GLuint id, GLint *addr)
static int luaglew_glVariantivEXT(lua_State *L) {
	glVariantivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVariantfvEXT
// void glVariantfvEXT (GLuint id, GLfloat *addr)
static int luaglew_glVariantfvEXT(lua_State *L) {
	glVariantfvEXT((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glVariantdvEXT
// void glVariantdvEXT (GLuint id, GLdouble *addr)
static int luaglew_glVariantdvEXT(lua_State *L) {
	glVariantdvEXT((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glVariantubvEXT
// void glVariantubvEXT (GLuint id, GLubyte *addr)
static int luaglew_glVariantubvEXT(lua_State *L) {
	glVariantubvEXT((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
//####glVariantusvEXT
// void glVariantusvEXT (GLuint id, GLushort *addr)
static int luaglew_glVariantusvEXT(lua_State *L) {
	glVariantusvEXT((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVariantuivEXT
// void glVariantuivEXT (GLuint id, GLuint *addr)
static int luaglew_glVariantuivEXT(lua_State *L) {
	glVariantuivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glVariantPointerEXT
// void glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, GLvoid *addr)
static int luaglew_glVariantPointerEXT(lua_State *L) {
	glVariantPointerEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glEnableVariantClientStateEXT
// void glEnableVariantClientStateEXT (GLuint id)
static int luaglew_glEnableVariantClientStateEXT(lua_State *L) {
	glEnableVariantClientStateEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glDisableVariantClientStateEXT
// void glDisableVariantClientStateEXT (GLuint id)
static int luaglew_glDisableVariantClientStateEXT(lua_State *L) {
	glDisableVariantClientStateEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glBindLightParameterEXT
// GLuint glBindLightParameterEXT (GLenum light, GLenum value)
static int luaglew_glBindLightParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindLightParameterEXT(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glBindMaterialParameterEXT
// GLuint glBindMaterialParameterEXT (GLenum face, GLenum value)
static int luaglew_glBindMaterialParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindMaterialParameterEXT(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glBindTexGenParameterEXT
// GLuint glBindTexGenParameterEXT (GLenum unit, GLenum coord, GLenum value)
static int luaglew_glBindTexGenParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindTexGenParameterEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glBindTextureUnitParameterEXT
// GLuint glBindTextureUnitParameterEXT (GLenum unit, GLenum value)
static int luaglew_glBindTextureUnitParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindTextureUnitParameterEXT(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glBindParameterEXT
// GLuint glBindParameterEXT (GLenum value)
static int luaglew_glBindParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindParameterEXT(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glIsVariantEnabledEXT
// GLboolean glIsVariantEnabledEXT (GLuint id, GLenum cap)
static int luaglew_glIsVariantEnabledEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVariantEnabledEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glGetVariantBooleanvEXT
// void glGetVariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
static int luaglew_glGetVariantBooleanvEXT(lua_State *L) {
	GLboolean return_value[16];
	glGetVariantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glGetVariantIntegervEXT
// void glGetVariantIntegervEXT (GLuint id, GLenum value, GLint *data)
static int luaglew_glGetVariantIntegervEXT(lua_State *L) {
	GLint return_value[16];
	glGetVariantIntegervEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVariantFloatvEXT
// void glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
static int luaglew_glGetVariantFloatvEXT(lua_State *L) {
	GLfloat return_value[16];
	glGetVariantFloatvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetVariantPointervEXT
// void glGetVariantPointervEXT (GLuint id, GLenum value, GLvoid **data)
static int luaglew_glGetVariantPointervEXT(lua_State *L) {
	GLvoid ** return_value;
	glGetVariantPointervEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetInvariantBooleanvEXT
// void glGetInvariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
static int luaglew_glGetInvariantBooleanvEXT(lua_State *L) {
	GLboolean return_value[16];
	glGetInvariantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glGetInvariantIntegervEXT
// void glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint *data)
static int luaglew_glGetInvariantIntegervEXT(lua_State *L) {
	GLint return_value[16];
	glGetInvariantIntegervEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetInvariantFloatvEXT
// void glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
static int luaglew_glGetInvariantFloatvEXT(lua_State *L) {
	GLfloat return_value[16];
	glGetInvariantFloatvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetLocalConstantBooleanvEXT
// void glGetLocalConstantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
static int luaglew_glGetLocalConstantBooleanvEXT(lua_State *L) {
	GLboolean return_value[16];
	glGetLocalConstantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glGetLocalConstantIntegervEXT
// void glGetLocalConstantIntegervEXT (GLuint id, GLenum value, GLint *data)
static int luaglew_glGetLocalConstantIntegervEXT(lua_State *L) {
	GLint return_value[16];
	glGetLocalConstantIntegervEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetLocalConstantFloatvEXT
// void glGetLocalConstantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
static int luaglew_glGetLocalConstantFloatvEXT(lua_State *L) {
	GLfloat return_value[16];
	glGetLocalConstantFloatvEXT((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glBufferRegionEnabledEXT
// GLuint glBufferRegionEnabledEXT (void)
static int luaglew_glBufferRegionEnabledEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBufferRegionEnabledEXT();
	lua_pushinteger(L, return_value);
	return 1;
}
//####glNewBufferRegionEXT
// GLuint glNewBufferRegionEXT (GLenum region)
static int luaglew_glNewBufferRegionEXT(lua_State *L) {
	GLuint return_value;
	return_value = glNewBufferRegionEXT(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glDeleteBufferRegionEXT
// void glDeleteBufferRegionEXT (GLenum region)
static int luaglew_glDeleteBufferRegionEXT(lua_State *L) {
	glDeleteBufferRegionEXT(luaL_checkint(L, 1));
	return 0;
}
//####glReadBufferRegionEXT
// void glReadBufferRegionEXT (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glReadBufferRegionEXT(lua_State *L) {
	glReadBufferRegionEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glDrawBufferRegionEXT
// void glDrawBufferRegionEXT (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height, GLint xDest, GLint yDest)
static int luaglew_glDrawBufferRegionEXT(lua_State *L) {
	glDrawBufferRegionEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7));
	return 0;
}
//####glDepthRangedNV
// void glDepthRangedNV (GLdouble zNear, GLdouble zFar)
static int luaglew_glDepthRangedNV(lua_State *L) {
	glDepthRangedNV((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glClearDepthdNV
// void glClearDepthdNV (GLdouble depth)
static int luaglew_glClearDepthdNV(lua_State *L) {
	glClearDepthdNV((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glDepthBoundsdNV
// void glDepthBoundsdNV (GLdouble zmin, GLdouble zmax)
static int luaglew_glDepthBoundsdNV(lua_State *L) {
	glDepthBoundsdNV((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glRenderbufferStorageMultisampleCoverageNV
// void glRenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
static int luaglew_glRenderbufferStorageMultisampleCoverageNV(lua_State *L) {
	glRenderbufferStorageMultisampleCoverageNV(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei)luaL_checklong(L, 3), luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
//####glProgramVertexLimitNV
// void glProgramVertexLimitNV (GLenum target, GLint limit)
static int luaglew_glProgramVertexLimitNV(lua_State *L) {
	glProgramVertexLimitNV(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glProgramLocalParameterI4iNV
// void glProgramLocalParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
static int luaglew_glProgramLocalParameterI4iNV(lua_State *L) {
	glProgramLocalParameterI4iNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
//####glProgramLocalParameterI4ivNV
// void glProgramLocalParameterI4ivNV (GLenum target, GLuint index, const GLint *params)
static int luaglew_glProgramLocalParameterI4ivNV(lua_State *L) {
	glProgramLocalParameterI4ivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glProgramLocalParametersI4ivNV
// void glProgramLocalParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params)
static int luaglew_glProgramLocalParametersI4ivNV(lua_State *L) {
	glProgramLocalParametersI4ivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glProgramLocalParameterI4uiNV
// void glProgramLocalParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
static int luaglew_glProgramLocalParameterI4uiNV(lua_State *L) {
	glProgramLocalParameterI4uiNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5), (GLuint)luaL_checkint(L, 6));
	return 0;
}
//####glProgramLocalParameterI4uivNV
// void glProgramLocalParameterI4uivNV (GLenum target, GLuint index, const GLuint *params)
static int luaglew_glProgramLocalParameterI4uivNV(lua_State *L) {
	glProgramLocalParameterI4uivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glProgramLocalParametersI4uivNV
// void glProgramLocalParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params)
static int luaglew_glProgramLocalParametersI4uivNV(lua_State *L) {
	glProgramLocalParametersI4uivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glProgramEnvParameterI4iNV
// void glProgramEnvParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
static int luaglew_glProgramEnvParameterI4iNV(lua_State *L) {
	glProgramEnvParameterI4iNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
//####glProgramEnvParameterI4ivNV
// void glProgramEnvParameterI4ivNV (GLenum target, GLuint index, const GLint *params)
static int luaglew_glProgramEnvParameterI4ivNV(lua_State *L) {
	glProgramEnvParameterI4ivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glProgramEnvParametersI4ivNV
// void glProgramEnvParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params)
static int luaglew_glProgramEnvParametersI4ivNV(lua_State *L) {
	glProgramEnvParametersI4ivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glProgramEnvParameterI4uiNV
// void glProgramEnvParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
static int luaglew_glProgramEnvParameterI4uiNV(lua_State *L) {
	glProgramEnvParameterI4uiNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5), (GLuint)luaL_checkint(L, 6));
	return 0;
}
//####glProgramEnvParameterI4uivNV
// void glProgramEnvParameterI4uivNV (GLenum target, GLuint index, const GLuint *params)
static int luaglew_glProgramEnvParameterI4uivNV(lua_State *L) {
	glProgramEnvParameterI4uivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glProgramEnvParametersI4uivNV
// void glProgramEnvParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params)
static int luaglew_glProgramEnvParametersI4uivNV(lua_State *L) {
	glProgramEnvParametersI4uivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glProgramBufferParametersfvNV
// void glProgramBufferParametersfvNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params)
static int luaglew_glProgramBufferParametersfvNV(lua_State *L) {
	glProgramBufferParametersfvNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
//####glProgramBufferParametersIivNV
// void glProgramBufferParametersIivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params)
static int luaglew_glProgramBufferParametersIivNV(lua_State *L) {
	glProgramBufferParametersIivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint *)luaglew_checkarray_int(L, 5));
	return 0;
}
//####glProgramBufferParametersIuivNV
// void glProgramBufferParametersIuivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params)
static int luaglew_glProgramBufferParametersIuivNV(lua_State *L) {
	glProgramBufferParametersIuivNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLuint *)luaglew_checkarray_int(L, 5));
	return 0;
}
//####glGetVideoi64vNV
// void glGetVideoi64vNV (GLuint video_slot, GLenum pname, GLint64EXT* params)
static int luaglew_glGetVideoi64vNV(lua_State *L) {
	GLint64EXT return_value[16];
	glGetVideoi64vNV((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVideoivNV
// void glGetVideoivNV (GLuint video_slot, GLenum pname, GLint* params)
static int luaglew_glGetVideoivNV(lua_State *L) {
	GLint return_value[16];
	glGetVideoivNV((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVideoui64vNV
// void glGetVideoui64vNV (GLuint video_slot, GLenum pname, GLuint64EXT* params)
static int luaglew_glGetVideoui64vNV(lua_State *L) {
	GLuint64EXT return_value[16];
	glGetVideoui64vNV((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetVideouivNV
// void glGetVideouivNV (GLuint video_slot, GLenum pname, GLuint* params)
static int luaglew_glGetVideouivNV(lua_State *L) {
	GLuint return_value[16];
	glGetVideouivNV((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glPresentFrameDualFillNV
// void glPresentFrameDualFillNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
static int luaglew_glPresentFrameDualFillNV(lua_State *L) {
	glPresentFrameDualFillNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLuint)luaL_checkint(L, 7), luaL_checkint(L, 8), (GLuint)luaL_checkint(L, 9), luaL_checkint(L, 10), (GLuint)luaL_checkint(L, 11), luaL_checkint(L, 12), (GLuint)luaL_checkint(L, 13));
	return 0;
}
//####glPresentFrameKeyedNV
// void glPresentFrameKeyedNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
static int luaglew_glPresentFrameKeyedNV(lua_State *L) {
	glPresentFrameKeyedNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLuint)luaL_checkint(L, 7), (GLuint)luaL_checkint(L, 8), luaL_checkint(L, 9), (GLuint)luaL_checkint(L, 10), (GLuint)luaL_checkint(L, 11));
	return 0;
}
//####glBeginTransformFeedbackNV
// void glBeginTransformFeedbackNV (GLenum primitiveMode)
static int luaglew_glBeginTransformFeedbackNV(lua_State *L) {
	glBeginTransformFeedbackNV(luaL_checkint(L, 1));
	return 0;
}
//####glEndTransformFeedbackNV
// void glEndTransformFeedbackNV (void)
static int luaglew_glEndTransformFeedbackNV(lua_State *L) {
	glEndTransformFeedbackNV();
	return 0;
}
//####glTransformFeedbackAttribsNV
// void glTransformFeedbackAttribsNV (GLuint count, const GLint *attribs, GLenum bufferMode)
static int luaglew_glTransformFeedbackAttribsNV(lua_State *L) {
	glTransformFeedbackAttribsNV((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), luaL_checkint(L, 3));
	return 0;
}
//####glBindBufferRangeNV
// void glBindBufferRangeNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
static int luaglew_glBindBufferRangeNV(lua_State *L) {
	glBindBufferRangeNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLintptr)luaglew_checkarray_int(L, 4), (GLsizeiptr)luaglew_checkarray_long(L, 5));
	return 0;
}
//####glBindBufferOffsetNV
// void glBindBufferOffsetNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset)
static int luaglew_glBindBufferOffsetNV(lua_State *L) {
	glBindBufferOffsetNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLintptr)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glBindBufferBaseNV
// void glBindBufferBaseNV (GLenum target, GLuint index, GLuint buffer)
static int luaglew_glBindBufferBaseNV(lua_State *L) {
	glBindBufferBaseNV(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glTransformFeedbackVaryingsNV
// void glTransformFeedbackVaryingsNV (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode)
static int luaglew_glTransformFeedbackVaryingsNV(lua_State *L) {
	glTransformFeedbackVaryingsNV((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glActiveVaryingNV
// void glActiveVaryingNV (GLuint program, const GLchar *name)
static int luaglew_glActiveVaryingNV(lua_State *L) {
	glActiveVaryingNV((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	return 0;
}
//####glGetVaryingLocationNV
// GLint glGetVaryingLocationNV (GLuint program, const GLchar *name)
static int luaglew_glGetVaryingLocationNV(lua_State *L) {
	GLint return_value;
	return_value = glGetVaryingLocationNV((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetActiveVaryingNV
// void glGetActiveVaryingNV (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
static int luaglew_glGetActiveVaryingNV(lua_State *L) {
	GLchar return_value[16];
	glGetActiveVaryingNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetTransformFeedbackVaryingNV
// void glGetTransformFeedbackVaryingNV (GLuint program, GLuint index, GLint *location)
static int luaglew_glGetTransformFeedbackVaryingNV(lua_State *L) {
	GLint return_value[16];
	glGetTransformFeedbackVaryingNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glReadVideoPixelsSUN
// void glReadVideoPixelsSUN (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
static int luaglew_glReadVideoPixelsSUN(lua_State *L) {
	glReadVideoPixelsSUN((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glDrawRangeElements
// void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
static int luaglew_glDrawRangeElements(lua_State *L) {
	glDrawRangeElements(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glTexImage3D
// void glTexImage3D (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexImage3D(lua_State *L) {
	glTexImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), luaL_checkint(L, 8), luaL_checkint(L, 9), (GLvoid *)luaglew_checkarray_void(L, 10));
	return 0;
}
//####glTexSubImage3D
// void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexSubImage3D(lua_State *L) {
	glTexSubImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaL_checkint(L, 9), luaL_checkint(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
//####glCopyTexSubImage3D
// void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glCopyTexSubImage3D(lua_State *L) {
	glCopyTexSubImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLsizei)luaL_checklong(L, 9));
	return 0;
}
//####glActiveTexture
// void glActiveTexture (GLenum texture)
static int luaglew_glActiveTexture(lua_State *L) {
	glActiveTexture(luaL_checkint(L, 1));
	return 0;
}
//####glClientActiveTexture
// void glClientActiveTexture (GLenum texture)
static int luaglew_glClientActiveTexture(lua_State *L) {
	glClientActiveTexture(luaL_checkint(L, 1));
	return 0;
}
//####glCompressedTexImage1D
// void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexImage1D(lua_State *L) {
	glCompressedTexImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glCompressedTexImage2D
// void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexImage2D(lua_State *L) {
	glCompressedTexImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
//####glCompressedTexImage3D
// void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexImage3D(lua_State *L) {
	glCompressedTexImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glCompressedTexSubImage1D
// void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexSubImage1D(lua_State *L) {
	glCompressedTexSubImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glCompressedTexSubImage2D
// void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexSubImage2D(lua_State *L) {
	glCompressedTexSubImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glCompressedTexSubImage3D
// void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
static int luaglew_glCompressedTexSubImage3D(lua_State *L) {
	glCompressedTexSubImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaL_checkint(L, 9), (GLsizei)luaL_checklong(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
//####glGetCompressedTexImage
// void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img)
static int luaglew_glGetCompressedTexImage(lua_State *L) {
	GLvoid * return_value;
	glGetCompressedTexImage(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glLoadTransposeMatrixd
// void glLoadTransposeMatrixd (const GLdouble m[16])
static int luaglew_glLoadTransposeMatrixd(lua_State *L) {
	glLoadTransposeMatrixd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glLoadTransposeMatrixf
// void glLoadTransposeMatrixf (const GLfloat m[16])
static int luaglew_glLoadTransposeMatrixf(lua_State *L) {
	glLoadTransposeMatrixf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glMultTransposeMatrixd
// void glMultTransposeMatrixd (const GLdouble m[16])
static int luaglew_glMultTransposeMatrixd(lua_State *L) {
	glMultTransposeMatrixd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glMultTransposeMatrixf
// void glMultTransposeMatrixf (const GLfloat m[16])
static int luaglew_glMultTransposeMatrixf(lua_State *L) {
	glMultTransposeMatrixf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glMultiTexCoord1d
// void glMultiTexCoord1d (GLenum target, GLdouble s)
static int luaglew_glMultiTexCoord1d(lua_State *L) {
	glMultiTexCoord1d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1dv
// void glMultiTexCoord1dv (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord1dv(lua_State *L) {
	glMultiTexCoord1dv(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord1f
// void glMultiTexCoord1f (GLenum target, GLfloat s)
static int luaglew_glMultiTexCoord1f(lua_State *L) {
	glMultiTexCoord1f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1fv
// void glMultiTexCoord1fv (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord1fv(lua_State *L) {
	glMultiTexCoord1fv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord1i
// void glMultiTexCoord1i (GLenum target, GLint s)
static int luaglew_glMultiTexCoord1i(lua_State *L) {
	glMultiTexCoord1i(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glMultiTexCoord1iv
// void glMultiTexCoord1iv (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord1iv(lua_State *L) {
	glMultiTexCoord1iv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord1s
// void glMultiTexCoord1s (GLenum target, GLshort s)
static int luaglew_glMultiTexCoord1s(lua_State *L) {
	glMultiTexCoord1s(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glMultiTexCoord1sv
// void glMultiTexCoord1sv (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord1sv(lua_State *L) {
	glMultiTexCoord1sv(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2d
// void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t)
static int luaglew_glMultiTexCoord2d(lua_State *L) {
	glMultiTexCoord2d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2dv
// void glMultiTexCoord2dv (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord2dv(lua_State *L) {
	glMultiTexCoord2dv(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord2f
// void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t)
static int luaglew_glMultiTexCoord2f(lua_State *L) {
	glMultiTexCoord2f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2fv
// void glMultiTexCoord2fv (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord2fv(lua_State *L) {
	glMultiTexCoord2fv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord2i
// void glMultiTexCoord2i (GLenum target, GLint s, GLint t)
static int luaglew_glMultiTexCoord2i(lua_State *L) {
	glMultiTexCoord2i(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glMultiTexCoord2iv
// void glMultiTexCoord2iv (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord2iv(lua_State *L) {
	glMultiTexCoord2iv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2s
// void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t)
static int luaglew_glMultiTexCoord2s(lua_State *L) {
	glMultiTexCoord2s(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glMultiTexCoord2sv
// void glMultiTexCoord2sv (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord2sv(lua_State *L) {
	glMultiTexCoord2sv(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3d
// void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r)
static int luaglew_glMultiTexCoord3d(lua_State *L) {
	glMultiTexCoord3d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3dv
// void glMultiTexCoord3dv (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord3dv(lua_State *L) {
	glMultiTexCoord3dv(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord3f
// void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r)
static int luaglew_glMultiTexCoord3f(lua_State *L) {
	glMultiTexCoord3f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3fv
// void glMultiTexCoord3fv (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord3fv(lua_State *L) {
	glMultiTexCoord3fv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord3i
// void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r)
static int luaglew_glMultiTexCoord3i(lua_State *L) {
	glMultiTexCoord3i(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glMultiTexCoord3iv
// void glMultiTexCoord3iv (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord3iv(lua_State *L) {
	glMultiTexCoord3iv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3s
// void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r)
static int luaglew_glMultiTexCoord3s(lua_State *L) {
	glMultiTexCoord3s(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glMultiTexCoord3sv
// void glMultiTexCoord3sv (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord3sv(lua_State *L) {
	glMultiTexCoord3sv(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4d
// void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
static int luaglew_glMultiTexCoord4d(lua_State *L) {
	glMultiTexCoord4d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4dv
// void glMultiTexCoord4dv (GLenum target, const GLdouble *v)
static int luaglew_glMultiTexCoord4dv(lua_State *L) {
	glMultiTexCoord4dv(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord4f
// void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
static int luaglew_glMultiTexCoord4f(lua_State *L) {
	glMultiTexCoord4f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4fv
// void glMultiTexCoord4fv (GLenum target, const GLfloat *v)
static int luaglew_glMultiTexCoord4fv(lua_State *L) {
	glMultiTexCoord4fv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord4i
// void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q)
static int luaglew_glMultiTexCoord4i(lua_State *L) {
	glMultiTexCoord4i(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glMultiTexCoord4iv
// void glMultiTexCoord4iv (GLenum target, const GLint *v)
static int luaglew_glMultiTexCoord4iv(lua_State *L) {
	glMultiTexCoord4iv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4s
// void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
static int luaglew_glMultiTexCoord4s(lua_State *L) {
	glMultiTexCoord4s(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
//####glMultiTexCoord4sv
// void glMultiTexCoord4sv (GLenum target, const GLshort *v)
static int luaglew_glMultiTexCoord4sv(lua_State *L) {
	glMultiTexCoord4sv(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glSampleCoverage
// void glSampleCoverage (GLclampf value, GLboolean invert)
static int luaglew_glSampleCoverage(lua_State *L) {
	glSampleCoverage((GLclampf)luaL_checknumber(L, 1), (GLboolean)lua_toboolean(L, 2));
	return 0;
}
//####glBlendEquation
// void glBlendEquation (GLenum mode)
static int luaglew_glBlendEquation(lua_State *L) {
	glBlendEquation(luaL_checkint(L, 1));
	return 0;
}
//####glBlendColor
// void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
static int luaglew_glBlendColor(lua_State *L) {
	glBlendColor((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
//####glFogCoordf
// void glFogCoordf (GLfloat coord)
static int luaglew_glFogCoordf(lua_State *L) {
	glFogCoordf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoordfv
// void glFogCoordfv (const GLfloat *coord)
static int luaglew_glFogCoordfv(lua_State *L) {
	glFogCoordfv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glFogCoordd
// void glFogCoordd (GLdouble coord)
static int luaglew_glFogCoordd(lua_State *L) {
	glFogCoordd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoorddv
// void glFogCoorddv (const GLdouble *coord)
static int luaglew_glFogCoorddv(lua_State *L) {
	glFogCoorddv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glFogCoordPointer
// void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glFogCoordPointer(lua_State *L) {
	glFogCoordPointer(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glMultiDrawArrays
// void glMultiDrawArrays (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount)
static int luaglew_glMultiDrawArrays(lua_State *L) {
	glMultiDrawArrays(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glMultiDrawElements
// void glMultiDrawElements (GLenum mode, GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount)
static int luaglew_glMultiDrawElements(lua_State *L) {
	glMultiDrawElements(luaL_checkint(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaL_checkint(L, 3), luaglew_checkarray_2void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glPointParameteri
// void glPointParameteri (GLenum pname, GLint param)
static int luaglew_glPointParameteri(lua_State *L) {
	glPointParameteri(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glPointParameteriv
// void glPointParameteriv (GLenum pname, const GLint *params)
static int luaglew_glPointParameteriv(lua_State *L) {
	glPointParameteriv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glPointParameterf
// void glPointParameterf (GLenum pname, GLfloat param)
static int luaglew_glPointParameterf(lua_State *L) {
	glPointParameterf(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPointParameterfv
// void glPointParameterfv (GLenum pname, const GLfloat *params)
static int luaglew_glPointParameterfv(lua_State *L) {
	glPointParameterfv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glSecondaryColor3b
// void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue)
static int luaglew_glSecondaryColor3b(lua_State *L) {
	glSecondaryColor3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3bv
// void glSecondaryColor3bv (const GLbyte *v)
static int luaglew_glSecondaryColor3bv(lua_State *L) {
	glSecondaryColor3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glSecondaryColor3d
// void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue)
static int luaglew_glSecondaryColor3d(lua_State *L) {
	glSecondaryColor3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3dv
// void glSecondaryColor3dv (const GLdouble *v)
static int luaglew_glSecondaryColor3dv(lua_State *L) {
	glSecondaryColor3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glSecondaryColor3f
// void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue)
static int luaglew_glSecondaryColor3f(lua_State *L) {
	glSecondaryColor3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3fv
// void glSecondaryColor3fv (const GLfloat *v)
static int luaglew_glSecondaryColor3fv(lua_State *L) {
	glSecondaryColor3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glSecondaryColor3i
// void glSecondaryColor3i (GLint red, GLint green, GLint blue)
static int luaglew_glSecondaryColor3i(lua_State *L) {
	glSecondaryColor3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3iv
// void glSecondaryColor3iv (const GLint *v)
static int luaglew_glSecondaryColor3iv(lua_State *L) {
	glSecondaryColor3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3s
// void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue)
static int luaglew_glSecondaryColor3s(lua_State *L) {
	glSecondaryColor3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3sv
// void glSecondaryColor3sv (const GLshort *v)
static int luaglew_glSecondaryColor3sv(lua_State *L) {
	glSecondaryColor3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3ub
// void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue)
static int luaglew_glSecondaryColor3ub(lua_State *L) {
	glSecondaryColor3ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3ubv
// void glSecondaryColor3ubv (const GLubyte *v)
static int luaglew_glSecondaryColor3ubv(lua_State *L) {
	glSecondaryColor3ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glSecondaryColor3ui
// void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue)
static int luaglew_glSecondaryColor3ui(lua_State *L) {
	glSecondaryColor3ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3uiv
// void glSecondaryColor3uiv (const GLuint *v)
static int luaglew_glSecondaryColor3uiv(lua_State *L) {
	glSecondaryColor3uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3us
// void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue)
static int luaglew_glSecondaryColor3us(lua_State *L) {
	glSecondaryColor3us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3usv
// void glSecondaryColor3usv (const GLushort *v)
static int luaglew_glSecondaryColor3usv(lua_State *L) {
	glSecondaryColor3usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColorPointer
// void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
static int luaglew_glSecondaryColorPointer(lua_State *L) {
	glSecondaryColorPointer((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glBlendFuncSeparate
// void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
static int luaglew_glBlendFuncSeparate(lua_State *L) {
	glBlendFuncSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glWindowPos2d
// void glWindowPos2d (GLdouble x, GLdouble y)
static int luaglew_glWindowPos2d(lua_State *L) {
	glWindowPos2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glWindowPos2f
// void glWindowPos2f (GLfloat x, GLfloat y)
static int luaglew_glWindowPos2f(lua_State *L) {
	glWindowPos2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glWindowPos2i
// void glWindowPos2i (GLint x, GLint y)
static int luaglew_glWindowPos2i(lua_State *L) {
	glWindowPos2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glWindowPos2s
// void glWindowPos2s (GLshort x, GLshort y)
static int luaglew_glWindowPos2s(lua_State *L) {
	glWindowPos2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glWindowPos2dv
// void glWindowPos2dv (const GLdouble *p)
static int luaglew_glWindowPos2dv(lua_State *L) {
	glWindowPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos2fv
// void glWindowPos2fv (const GLfloat *p)
static int luaglew_glWindowPos2fv(lua_State *L) {
	glWindowPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos2iv
// void glWindowPos2iv (const GLint *p)
static int luaglew_glWindowPos2iv(lua_State *L) {
	glWindowPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos2sv
// void glWindowPos2sv (const GLshort *p)
static int luaglew_glWindowPos2sv(lua_State *L) {
	glWindowPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3d
// void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glWindowPos3d(lua_State *L) {
	glWindowPos3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glWindowPos3f
// void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glWindowPos3f(lua_State *L) {
	glWindowPos3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glWindowPos3i
// void glWindowPos3i (GLint x, GLint y, GLint z)
static int luaglew_glWindowPos3i(lua_State *L) {
	glWindowPos3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glWindowPos3s
// void glWindowPos3s (GLshort x, GLshort y, GLshort z)
static int luaglew_glWindowPos3s(lua_State *L) {
	glWindowPos3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glWindowPos3dv
// void glWindowPos3dv (const GLdouble *p)
static int luaglew_glWindowPos3dv(lua_State *L) {
	glWindowPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos3fv
// void glWindowPos3fv (const GLfloat *p)
static int luaglew_glWindowPos3fv(lua_State *L) {
	glWindowPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos3iv
// void glWindowPos3iv (const GLint *p)
static int luaglew_glWindowPos3iv(lua_State *L) {
	glWindowPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3sv
// void glWindowPos3sv (const GLshort *p)
static int luaglew_glWindowPos3sv(lua_State *L) {
	glWindowPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glGenQueries
// void glGenQueries (GLsizei n, GLuint* ids)
static int luaglew_glGenQueries(lua_State *L) {
	GLuint* return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint*) malloc(n*sizeof(GLuint));
	glGenQueries(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glDeleteQueries
// void glDeleteQueries (GLsizei n, const GLuint* ids)
static int luaglew_glDeleteQueries(lua_State *L) {
	glDeleteQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glIsQuery
// GLboolean glIsQuery (GLuint id)
static int luaglew_glIsQuery(lua_State *L) {
	GLboolean return_value;
	return_value = glIsQuery((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glBeginQuery
// void glBeginQuery (GLenum target, GLuint id)
static int luaglew_glBeginQuery(lua_State *L) {
	glBeginQuery(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glEndQuery
// void glEndQuery (GLenum target)
static int luaglew_glEndQuery(lua_State *L) {
	glEndQuery(luaL_checkint(L, 1));
	return 0;
}
//####glGetQueryiv
// void glGetQueryiv (GLenum target, GLenum pname, GLint* params)
static int luaglew_glGetQueryiv(lua_State *L) {
	GLint return_value[16];
	glGetQueryiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectiv
// void glGetQueryObjectiv (GLuint id, GLenum pname, GLint* params)
static int luaglew_glGetQueryObjectiv(lua_State *L) {
	GLint return_value[16];
	glGetQueryObjectiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectuiv
// void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint* params)
static int luaglew_glGetQueryObjectuiv(lua_State *L) {
	GLuint return_value[16];
	glGetQueryObjectuiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glBindBuffer
// void glBindBuffer (GLenum target, GLuint buffer)
static int luaglew_glBindBuffer(lua_State *L) {
	glBindBuffer(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glDeleteBuffers
// void glDeleteBuffers (GLsizei n, const GLuint* buffers)
static int luaglew_glDeleteBuffers(lua_State *L) {
	glDeleteBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glGenBuffers
// void glGenBuffers (GLsizei n, GLuint* buffers)
static int luaglew_glGenBuffers(lua_State *L) {
	GLuint* return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint*) malloc(n*sizeof(GLuint));
	glGenBuffers(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glIsBuffer
// GLboolean glIsBuffer (GLuint buffer)
static int luaglew_glIsBuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsBuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glBufferData
// void glBufferData (GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
static int luaglew_glBufferData(lua_State *L) {
	glBufferData(luaL_checkint(L, 1), (GLsizeiptr)luaglew_checkarray_long(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glBufferSubData
// void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
static int luaglew_glBufferSubData(lua_State *L) {
	glBufferSubData(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glGetBufferSubData
// void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data)
static int luaglew_glGetBufferSubData(lua_State *L) {
	GLvoid* return_value;
	glGetBufferSubData(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glMapBuffer
// GLvoid* glMapBuffer (GLenum target, GLenum access)
static int luaglew_glMapBuffer(lua_State *L) {
	GLvoid* return_value;
	return_value = glMapBuffer(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glUnmapBuffer
// GLboolean glUnmapBuffer (GLenum target)
static int luaglew_glUnmapBuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glUnmapBuffer(luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glGetBufferParameteriv
// void glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params)
static int luaglew_glGetBufferParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetBufferParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetBufferPointerv
// void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid** params)
static int luaglew_glGetBufferPointerv(lua_State *L) {
	GLvoid** return_value;
	glGetBufferPointerv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glBlendEquationSeparate
// void glBlendEquationSeparate (GLenum, GLenum)
static int luaglew_glBlendEquationSeparate(lua_State *L) {
	glBlendEquationSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glDrawBuffers
// void glDrawBuffers (GLsizei n, const GLenum* bufs)
static int luaglew_glDrawBuffers(lua_State *L) {
	glDrawBuffers((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
//####glStencilOpSeparate
// void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
static int luaglew_glStencilOpSeparate(lua_State *L) {
	glStencilOpSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glStencilFuncSeparate
// void glStencilFuncSeparate (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
static int luaglew_glStencilFuncSeparate(lua_State *L) {
	glStencilFuncSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glStencilMaskSeparate
// void glStencilMaskSeparate (GLenum, GLuint)
static int luaglew_glStencilMaskSeparate(lua_State *L) {
	glStencilMaskSeparate(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glAttachShader
// void glAttachShader (GLuint program, GLuint shader)
static int luaglew_glAttachShader(lua_State *L) {
	glAttachShader((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindAttribLocation
// void glBindAttribLocation (GLuint program, GLuint index, const GLchar* name)
static int luaglew_glBindAttribLocation(lua_State *L) {
	glBindAttribLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glCompileShader
// void glCompileShader (GLuint shader)
static int luaglew_glCompileShader(lua_State *L) {
	glCompileShader((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glCreateProgram
// GLuint glCreateProgram (void)
static int luaglew_glCreateProgram(lua_State *L) {
	GLuint return_value;
	return_value = glCreateProgram();
	lua_pushinteger(L, return_value);
	return 1;
}
//####glCreateShader
// GLuint glCreateShader (GLenum type)
static int luaglew_glCreateShader(lua_State *L) {
	GLuint return_value;
	return_value = glCreateShader(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glDeleteProgram
// void glDeleteProgram (GLuint program)
static int luaglew_glDeleteProgram(lua_State *L) {
	glDeleteProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glDeleteShader
// void glDeleteShader (GLuint shader)
static int luaglew_glDeleteShader(lua_State *L) {
	glDeleteShader((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glDetachShader
// void glDetachShader (GLuint program, GLuint shader)
static int luaglew_glDetachShader(lua_State *L) {
	glDetachShader((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glDisableVertexAttribArray
// void glDisableVertexAttribArray (GLuint)
static int luaglew_glDisableVertexAttribArray(lua_State *L) {
	glDisableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glEnableVertexAttribArray
// void glEnableVertexAttribArray (GLuint)
static int luaglew_glEnableVertexAttribArray(lua_State *L) {
	glEnableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glGetActiveAttrib
// void glGetActiveAttrib (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
static int luaglew_glGetActiveAttrib(lua_State *L) {
	GLchar return_value[16];
	glGetActiveAttrib((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniform
// void glGetActiveUniform (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
static int luaglew_glGetActiveUniform(lua_State *L) {
	GLchar return_value[16];
	glGetActiveUniform((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetAttachedShaders
// void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders)
static int luaglew_glGetAttachedShaders(lua_State *L) {
	GLuint return_value[16];
	glGetAttachedShaders((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetAttribLocation
// GLint glGetAttribLocation (GLuint program, const GLchar* name)
static int luaglew_glGetAttribLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetProgramiv
// void glGetProgramiv (GLuint program, GLenum pname, GLint* param)
static int luaglew_glGetProgramiv(lua_State *L) {
	GLint return_value[16];
	glGetProgramiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetProgramInfoLog
// void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
static int luaglew_glGetProgramInfoLog(lua_State *L) {
	GLchar return_value[16];
	glGetProgramInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetShaderiv
// void glGetShaderiv (GLuint shader, GLenum pname, GLint* param)
static int luaglew_glGetShaderiv(lua_State *L) {
	GLint return_value[16];
	glGetShaderiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetShaderInfoLog
// void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
static int luaglew_glGetShaderInfoLog(lua_State *L) {
	GLchar return_value[16];
	glGetShaderInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glShaderSource
// void glShaderSource (GLuint shader, GLsizei count, const GLchar** strings, const GLint* lengths)
static int luaglew_glShaderSource(lua_State *L) {
	glShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glGetUniformLocation
// GLint glGetUniformLocation (GLuint program, const GLchar* name)
static int luaglew_glGetUniformLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetUniformfv
// void glGetUniformfv (GLuint program, GLint location, GLfloat* params)
static int luaglew_glGetUniformfv(lua_State *L) {
	GLfloat return_value[16];
	glGetUniformfv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetUniformiv
// void glGetUniformiv (GLuint program, GLint location, GLint* params)
static int luaglew_glGetUniformiv(lua_State *L) {
	GLint return_value[16];
	glGetUniformiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribdv
// void glGetVertexAttribdv (GLuint, GLenum, GLdouble*)
static int luaglew_glGetVertexAttribdv(lua_State *L) {
	GLdouble return_value[16];
	glGetVertexAttribdv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribfv
// void glGetVertexAttribfv (GLuint, GLenum, GLfloat*)
static int luaglew_glGetVertexAttribfv(lua_State *L) {
	GLfloat return_value[16];
	glGetVertexAttribfv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribiv
// void glGetVertexAttribiv (GLuint, GLenum, GLint*)
static int luaglew_glGetVertexAttribiv(lua_State *L) {
	GLint return_value[16];
	glGetVertexAttribiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribPointerv
// void glGetVertexAttribPointerv (GLuint, GLenum, GLvoid*)
static int luaglew_glGetVertexAttribPointerv(lua_State *L) {
	GLvoid* return_value;
	glGetVertexAttribPointerv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glIsProgram
// GLboolean glIsProgram (GLuint program)
static int luaglew_glIsProgram(lua_State *L) {
	GLboolean return_value;
	return_value = glIsProgram((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsShader
// GLboolean glIsShader (GLuint shader)
static int luaglew_glIsShader(lua_State *L) {
	GLboolean return_value;
	return_value = glIsShader((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glLinkProgram
// void glLinkProgram (GLuint program)
static int luaglew_glLinkProgram(lua_State *L) {
	glLinkProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glGetShaderSource
// void glGetShaderSource (GLint obj, GLsizei maxLength, GLsizei* length, GLchar* source)
static int luaglew_glGetShaderSource(lua_State *L) {
	GLchar return_value[16];
	glGetShaderSource((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glUseProgram
// void glUseProgram (GLuint program)
static int luaglew_glUseProgram(lua_State *L) {
	glUseProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glUniform1f
// void glUniform1f (GLint location, GLfloat v0)
static int luaglew_glUniform1f(lua_State *L) {
	glUniform1f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glUniform1fv
// void glUniform1fv (GLint location, GLsizei count, const GLfloat* value)
static int luaglew_glUniform1fv(lua_State *L) {
	glUniform1fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform1i
// void glUniform1i (GLint location, GLint v0)
static int luaglew_glUniform1i(lua_State *L) {
	glUniform1i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glUniform1iv
// void glUniform1iv (GLint location, GLsizei count, const GLint* value)
static int luaglew_glUniform1iv(lua_State *L) {
	glUniform1iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform2f
// void glUniform2f (GLint location, GLfloat v0, GLfloat v1)
static int luaglew_glUniform2f(lua_State *L) {
	glUniform2f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glUniform2fv
// void glUniform2fv (GLint location, GLsizei count, const GLfloat* value)
static int luaglew_glUniform2fv(lua_State *L) {
	glUniform2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform2i
// void glUniform2i (GLint location, GLint v0, GLint v1)
static int luaglew_glUniform2i(lua_State *L) {
	glUniform2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glUniform2iv
// void glUniform2iv (GLint location, GLsizei count, const GLint* value)
static int luaglew_glUniform2iv(lua_State *L) {
	glUniform2iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform3f
// void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
static int luaglew_glUniform3f(lua_State *L) {
	glUniform3f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glUniform3fv
// void glUniform3fv (GLint location, GLsizei count, const GLfloat* value)
static int luaglew_glUniform3fv(lua_State *L) {
	glUniform3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform3i
// void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2)
static int luaglew_glUniform3i(lua_State *L) {
	glUniform3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glUniform3iv
// void glUniform3iv (GLint location, GLsizei count, const GLint* value)
static int luaglew_glUniform3iv(lua_State *L) {
	glUniform3iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform4f
// void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
static int luaglew_glUniform4f(lua_State *L) {
	glUniform4f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glUniform4fv
// void glUniform4fv (GLint location, GLsizei count, const GLfloat* value)
static int luaglew_glUniform4fv(lua_State *L) {
	glUniform4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform4i
// void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
static int luaglew_glUniform4i(lua_State *L) {
	glUniform4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glUniform4iv
// void glUniform4iv (GLint location, GLsizei count, const GLint* value)
static int luaglew_glUniform4iv(lua_State *L) {
	glUniform4iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniformMatrix2fv
// void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
static int luaglew_glUniformMatrix2fv(lua_State *L) {
	glUniformMatrix2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix3fv
// void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix4fv
// void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
static int luaglew_glUniformMatrix4fv(lua_State *L) {
	glUniformMatrix4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glValidateProgram
// void glValidateProgram (GLuint program)
static int luaglew_glValidateProgram(lua_State *L) {
	glValidateProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glUniformMatrix2x3fv
// void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix2x3fv(lua_State *L) {
	glUniformMatrix2x3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix3x2fv
// void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix3x2fv(lua_State *L) {
	glUniformMatrix3x2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix2x4fv
// void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix2x4fv(lua_State *L) {
	glUniformMatrix2x4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix4x2fv
// void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix4x2fv(lua_State *L) {
	glUniformMatrix4x2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix3x4fv
// void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix3x4fv(lua_State *L) {
	glUniformMatrix3x4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix4x3fv
// void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix4x3fv(lua_State *L) {
	glUniformMatrix4x3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glColorMaski
// void glColorMaski (GLuint param1, GLboolean param2, GLboolean param3, GLboolean param4, GLboolean param5)
static int luaglew_glColorMaski(lua_State *L) {
	glColorMaski((GLuint)luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4), (GLboolean)lua_toboolean(L, 5));
	return 0;
}
//####glGetBooleani_v
// void glGetBooleani_v (GLenum param1, GLuint param2, GLboolean* param3)
static int luaglew_glGetBooleani_v(lua_State *L) {
	GLboolean return_value[16];
	glGetBooleani_v(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glEnablei
// void glEnablei (GLenum param1, GLuint param2)
static int luaglew_glEnablei(lua_State *L) {
	glEnablei(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glDisablei
// void glDisablei (GLenum param1, GLuint param2)
static int luaglew_glDisablei(lua_State *L) {
	glDisablei(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glIsEnabledi
// GLboolean glIsEnabledi (GLenum param1, GLuint param2)
static int luaglew_glIsEnabledi(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabledi(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glBeginTransformFeedback
// void glBeginTransformFeedback (GLenum param1)
static int luaglew_glBeginTransformFeedback(lua_State *L) {
	glBeginTransformFeedback(luaL_checkint(L, 1));
	return 0;
}
//####glEndTransformFeedback
// void glEndTransformFeedback (void)
static int luaglew_glEndTransformFeedback(lua_State *L) {
	glEndTransformFeedback();
	return 0;
}
//####glTransformFeedbackVaryings
// void glTransformFeedbackVaryings (GLuint param1, GLsizei param2, const GLchar ** param3, GLenum param4)
static int luaglew_glTransformFeedbackVaryings(lua_State *L) {
	glTransformFeedbackVaryings((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glGetTransformFeedbackVarying
// void glGetTransformFeedbackVarying (GLuint param1, GLuint param2, GLint* param3)
static int luaglew_glGetTransformFeedbackVarying(lua_State *L) {
	GLint return_value[16];
	glGetTransformFeedbackVarying((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glClampColor
// void glClampColor (GLenum param1, GLenum param2)
static int luaglew_glClampColor(lua_State *L) {
	glClampColor(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBeginConditionalRender
// void glBeginConditionalRender (GLuint param1, GLenum param2)
static int luaglew_glBeginConditionalRender(lua_State *L) {
	glBeginConditionalRender((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glEndConditionalRender
// void glEndConditionalRender (void)
static int luaglew_glEndConditionalRender(lua_State *L) {
	glEndConditionalRender();
	return 0;
}
//####glGetVertexAttribIiv
// void glGetVertexAttribIiv (GLuint param1, GLenum param2, GLint* param3)
static int luaglew_glGetVertexAttribIiv(lua_State *L) {
	GLint return_value[16];
	glGetVertexAttribIiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribIuiv
// void glGetVertexAttribIuiv (GLuint param1, GLenum param2, GLuint* param3)
static int luaglew_glGetVertexAttribIuiv(lua_State *L) {
	GLuint return_value[16];
	glGetVertexAttribIuiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetUniformuiv
// void glGetUniformuiv (GLuint param1, GLint param2, GLuint* param3)
static int luaglew_glGetUniformuiv(lua_State *L) {
	GLuint return_value[16];
	glGetUniformuiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glBindFragDataLocation
// void glBindFragDataLocation (GLuint param1, GLuint param2, const GLchar* param3)
static int luaglew_glBindFragDataLocation(lua_State *L) {
	glBindFragDataLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glGetFragDataLocation
// GLint glGetFragDataLocation (GLuint param1, const GLchar* param2)
static int luaglew_glGetFragDataLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetFragDataLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glUniform1ui
// void glUniform1ui (GLint param1, GLuint param2)
static int luaglew_glUniform1ui(lua_State *L) {
	glUniform1ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glUniform2ui
// void glUniform2ui (GLint param1, GLuint param2, GLuint param3)
static int luaglew_glUniform2ui(lua_State *L) {
	glUniform2ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glUniform3ui
// void glUniform3ui (GLint param1, GLuint param2, GLuint param3, GLuint param4)
static int luaglew_glUniform3ui(lua_State *L) {
	glUniform3ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glUniform4ui
// void glUniform4ui (GLint param1, GLuint param2, GLuint param3, GLuint param4, GLuint param5)
static int luaglew_glUniform4ui(lua_State *L) {
	glUniform4ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
//####glUniform1uiv
// void glUniform1uiv (GLint param1, GLsizei param2, const GLuint* param3)
static int luaglew_glUniform1uiv(lua_State *L) {
	glUniform1uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform2uiv
// void glUniform2uiv (GLint param1, GLsizei param2, const GLuint* param3)
static int luaglew_glUniform2uiv(lua_State *L) {
	glUniform2uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform3uiv
// void glUniform3uiv (GLint param1, GLsizei param2, const GLuint* param3)
static int luaglew_glUniform3uiv(lua_State *L) {
	glUniform3uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform4uiv
// void glUniform4uiv (GLint param1, GLsizei param2, const GLuint* param3)
static int luaglew_glUniform4uiv(lua_State *L) {
	glUniform4uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexParameterIiv
// void glTexParameterIiv (GLenum param1, GLenum param2, const GLint* param3)
static int luaglew_glTexParameterIiv(lua_State *L) {
	glTexParameterIiv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexParameterIuiv
// void glTexParameterIuiv (GLenum param1, GLenum param2, const GLuint* param3)
static int luaglew_glTexParameterIuiv(lua_State *L) {
	glTexParameterIuiv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glGetTexParameterIiv
// void glGetTexParameterIiv (GLenum param1, GLenum param2, GLint* param3)
static int luaglew_glGetTexParameterIiv(lua_State *L) {
	GLint return_value[16];
	glGetTexParameterIiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexParameterIuiv
// void glGetTexParameterIuiv (GLenum param1, GLenum param2, GLuint* param3)
static int luaglew_glGetTexParameterIuiv(lua_State *L) {
	GLuint return_value[16];
	glGetTexParameterIuiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glClearBufferiv
// void glClearBufferiv (GLenum param1, GLint param2, const GLint* param3)
static int luaglew_glClearBufferiv(lua_State *L) {
	glClearBufferiv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glClearBufferuiv
// void glClearBufferuiv (GLenum param1, GLint param2, const GLuint* param3)
static int luaglew_glClearBufferuiv(lua_State *L) {
	glClearBufferuiv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glClearBufferfv
// void glClearBufferfv (GLenum param1, GLint param2, const GLfloat* param3)
static int luaglew_glClearBufferfv(lua_State *L) {
	glClearBufferfv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glClearBufferfi
// void glClearBufferfi (GLenum param1, GLint param2, GLfloat param3, GLint param4)
static int luaglew_glClearBufferfi(lua_State *L) {
	glClearBufferfi(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glGetStringi
// const GLubyte* glGetStringi (GLenum param1, GLuint param2)
static int luaglew_glGetStringi(lua_State *L) {
	GLubyte* return_value;
	return_value = glGetStringi(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushstring(L, return_value);
	return 1;
}
//####glDrawArraysInstanced
// void glDrawArraysInstanced (GLenum param1, GLint param2, GLsizei param3, GLsizei param4)
static int luaglew_glDrawArraysInstanced(lua_State *L) {
	glDrawArraysInstanced(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glDrawElementsInstanced
// void glDrawElementsInstanced (GLenum param1, GLsizei param2, GLenum param3, const GLvoid* param4, GLsizei param5)
static int luaglew_glDrawElementsInstanced(lua_State *L) {
	glDrawElementsInstanced(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glTexBuffer
// void glTexBuffer (GLenum param1, GLenum param2, GLuint param3)
static int luaglew_glTexBuffer(lua_State *L) {
	glTexBuffer(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glPrimitiveRestartIndex
// void glPrimitiveRestartIndex (GLuint param1)
static int luaglew_glPrimitiveRestartIndex(lua_State *L) {
	glPrimitiveRestartIndex((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glGetInteger64i_v
// void glGetInteger64i_v (GLenum param1, GLuint param2, GLint64 * param3)
static int luaglew_glGetInteger64i_v(lua_State *L) {
	GLint64 return_value[16];
	glGetInteger64i_v(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetBufferParameteri64v
// void glGetBufferParameteri64v (GLenum param1, GLenum param2, GLint64 * param3)
static int luaglew_glGetBufferParameteri64v(lua_State *L) {
	GLint64 return_value[16];
	glGetBufferParameteri64v(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glFramebufferTexture
// void glFramebufferTexture (GLenum param1, GLenum param2, GLuint param3, GLint param4)
static int luaglew_glFramebufferTexture(lua_State *L) {
	glFramebufferTexture(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glMinSampleShading
// void glMinSampleShading (GLclampf value)
static int luaglew_glMinSampleShading(lua_State *L) {
	glMinSampleShading((GLclampf)luaL_checknumber(L, 1));
	return 0;
}
//####glBlendEquationSeparatei
// void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
static int luaglew_glBlendEquationSeparatei(lua_State *L) {
	glBlendEquationSeparatei((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3));
	return 0;
}
//####glBlendEquationi
// void glBlendEquationi (GLuint buf, GLenum mode)
static int luaglew_glBlendEquationi(lua_State *L) {
	glBlendEquationi((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBlendFuncSeparatei
// void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
static int luaglew_glBlendFuncSeparatei(lua_State *L) {
	glBlendFuncSeparatei((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), luaL_checkint(L, 5));
	return 0;
}
//####glBlendFunci
// void glBlendFunci (GLuint buf, GLenum src, GLenum dst)
static int luaglew_glBlendFunci(lua_State *L) {
	glBlendFunci((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3));
	return 0;
}
//####glIsProgramARB
// 	GLboolean glIsProgramARB (GLuint program)
static int luaglew_glIsProgramARB(lua_State *L) {
		GLboolean return_value;
	return_value = glIsProgramARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glGetUniformLocation
// 	GLint glGetUniformLocation (GLuint program, const GLchar *name)
static int luaglew_glGetUniformLocation(lua_State *L) {
		GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glBlendColorEXT
// 	void glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf)
static int luaglew_glBlendColorEXT(lua_State *L) {
	glBlendColorEXT((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
//####glCompileShaderARB
// 	void glCompileShaderARB (GLhandleARB shaderObj)
static int luaglew_glCompileShaderARB(lua_State *L) {
	glCompileShaderARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glGetConvolutionFilter
// 	void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image)
static int luaglew_glGetConvolutionFilter(lua_State *L) {
	GLvoid * return_value;
	glGetConvolutionFilter(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glUniform4iARB
// 	void glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
static int luaglew_glUniform4iARB(lua_State *L) {
	glUniform4iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glUniformMatrix3fv
// 	void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glVertexArrayRangeAPPLE
// 	void glVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
static int luaglew_glVertexArrayRangeAPPLE(lua_State *L) {
	glVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
//####glAreTexturesResident
// GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences)
static int luaglew_glAreTexturesResident(lua_State *L) {
	GLboolean return_value;
	return_value = glAreTexturesResident((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsBufferARB
// GLboolean glIsBufferARB (GLuint buffer)
static int luaglew_glIsBufferARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsBufferARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsEnabled
// GLboolean glIsEnabled (GLenum cap)
static int luaglew_glIsEnabled(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabled(luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsEnabledIndexedEXT
// GLboolean glIsEnabledIndexedEXT (GLenum target, GLuint index)
static int luaglew_glIsEnabledIndexedEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabledIndexedEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsFenceAPPLE
// GLboolean glIsFenceAPPLE (GLuint fence)
static int luaglew_glIsFenceAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFenceAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsFramebuffer
// GLboolean glIsFramebuffer (GLuint)
static int luaglew_glIsFramebuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFramebuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsFramebufferEXT
// GLboolean glIsFramebufferEXT (GLuint framebuffer)
static int luaglew_glIsFramebufferEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFramebufferEXT((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsList
// GLboolean glIsList (GLuint list)
static int luaglew_glIsList(lua_State *L) {
	GLboolean return_value;
	return_value = glIsList((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsProgramARB
// GLboolean glIsProgramARB (GLuint program)
static int luaglew_glIsProgramARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsProgramARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsQueryARB
// GLboolean glIsQueryARB (GLuint id)
static int luaglew_glIsQueryARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsQueryARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsRenderbuffer
// GLboolean glIsRenderbuffer (GLuint)
static int luaglew_glIsRenderbuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsRenderbuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsRenderbufferEXT
// GLboolean glIsRenderbufferEXT (GLuint renderbuffer)
static int luaglew_glIsRenderbufferEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsRenderbufferEXT((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsTexture
// GLboolean glIsTexture (GLuint texture)
static int luaglew_glIsTexture(lua_State *L) {
	GLboolean return_value;
	return_value = glIsTexture((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsVertexArrayAPPLE
// GLboolean glIsVertexArrayAPPLE (GLuint id)
static int luaglew_glIsVertexArrayAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVertexArrayAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glIsVertexAttribEnabledAPPLE
// GLboolean glIsVertexAttribEnabledAPPLE (GLuint index, GLenum pname)
static int luaglew_glIsVertexAttribEnabledAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVertexAttribEnabledAPPLE((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glTestFenceAPPLE
// GLboolean glTestFenceAPPLE (GLuint fence)
static int luaglew_glTestFenceAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glTestFenceAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glTestObjectAPPLE
// GLboolean glTestObjectAPPLE (GLenum object, GLuint name)
static int luaglew_glTestObjectAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glTestObjectAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glUnmapBufferARB
// GLboolean glUnmapBufferARB (GLenum target)
static int luaglew_glUnmapBufferARB(lua_State *L) {
	GLboolean return_value;
	return_value = glUnmapBufferARB(luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
//####glCheckFramebufferStatus
// GLenum glCheckFramebufferStatus (GLenum)
static int luaglew_glCheckFramebufferStatus(lua_State *L) {
	GLenum return_value;
	return_value = glCheckFramebufferStatus(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glCheckFramebufferStatusEXT
// GLenum glCheckFramebufferStatusEXT (GLenum target)
static int luaglew_glCheckFramebufferStatusEXT(lua_State *L) {
	GLenum return_value;
	return_value = glCheckFramebufferStatusEXT(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetError
// GLenum glGetError (void)
static int luaglew_glGetError(lua_State *L) {
	GLenum return_value;
	return_value = glGetError();
	lua_pushinteger(L, return_value);
	return 1;
}
//####glObjectPurgeableAPPLE
// GLenum glObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
static int luaglew_glObjectPurgeableAPPLE(lua_State *L) {
	GLenum return_value;
	return_value = glObjectPurgeableAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glObjectUnpurgeableAPPLE
// GLenum glObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
static int luaglew_glObjectUnpurgeableAPPLE(lua_State *L) {
	GLenum return_value;
	return_value = glObjectUnpurgeableAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glCreateProgramObjectARB
// GLhandleARB glCreateProgramObjectARB (void)
static int luaglew_glCreateProgramObjectARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glCreateProgramObjectARB();
	lua_pushinteger(L, return_value);
	return 1;
}
//####glCreateShaderObjectARB
// GLhandleARB glCreateShaderObjectARB (GLenum shaderType)
static int luaglew_glCreateShaderObjectARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glCreateShaderObjectARB(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetHandleARB
// GLhandleARB glGetHandleARB (GLenum pname)
static int luaglew_glGetHandleARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glGetHandleARB(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetAttribLocation
// GLint glGetAttribLocation (GLuint program, const GLchar *name)
static int luaglew_glGetAttribLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetAttribLocationARB
// GLint glGetAttribLocationARB (GLhandleARB programObj, const GLcharARB *name)
static int luaglew_glGetAttribLocationARB(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetUniformLocation
// GLint glGetUniformLocation (GLuint program, const GLchar *name)
static int luaglew_glGetUniformLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetUniformLocationARB
// GLint glGetUniformLocationARB (GLhandleARB programObj, const GLcharARB *name)
static int luaglew_glGetUniformLocationARB(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glRenderMode
// GLint glRenderMode (GLenum mode)
static int luaglew_glRenderMode(lua_State *L) {
	GLint return_value;
	return_value = glRenderMode(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glRenderMode
// GLint glRenderMode (GLenum mode)	
static int luaglew_glRenderMode(lua_State *L) {
	GLint return_value;
	return_value = glRenderMode(luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGenLists
// GLuint glGenLists (GLsizei range)
static int luaglew_glGenLists(lua_State *L) {
	GLuint return_value;
	return_value = glGenLists((GLsizei)luaL_checklong(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glGetUniformBlockIndex
// GLuint glGetUniformBlockIndex (GLuint program, const GLchar* uniformBlockName)
static int luaglew_glGetUniformBlockIndex(lua_State *L) {
	GLuint return_value;
	return_value = glGetUniformBlockIndex((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
//####glMapBuffer
// GLvoid * glMapBuffer (GLenum target, GLenum access)
static int luaglew_glMapBuffer(lua_State *L) {
	GLvoid * return_value;
	return_value = glMapBuffer(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glMapBufferARB
// GLvoid * glMapBufferARB (GLenum target, GLenum access)
static int luaglew_glMapBufferARB(lua_State *L) {
	GLvoid * return_value;
	return_value = glMapBufferARB(luaL_checkint(L, 1), luaL_checkint(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetString
// const GLubyte * glGetString (GLenum name)
static int luaglew_glGetString(lua_State *L) {
	GLubyte * return_value;
	return_value = glGetString(luaL_checkint(L, 1));
	lua_pushstring(L, return_value);
	return 1;
}
//####glAccum
// void glAccum (GLenum op, GLfloat value)
static int luaglew_glAccum(lua_State *L) {
	glAccum(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glActiveStencilFaceEXT
// void glActiveStencilFaceEXT (GLenum face)
static int luaglew_glActiveStencilFaceEXT(lua_State *L) {
	glActiveStencilFaceEXT(luaL_checkint(L, 1));
	return 0;
}
//####glAlphaFunc
// void glAlphaFunc (GLenum func, GLclampf ref)
static int luaglew_glAlphaFunc(lua_State *L) {
	glAlphaFunc(luaL_checkint(L, 1), (GLclampf)luaL_checknumber(L, 2));
	return 0;
}
//####glArrayElement
// void glArrayElement (GLint i)
static int luaglew_glArrayElement(lua_State *L) {
	glArrayElement((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glAttachObjectARB
// void glAttachObjectARB (GLhandleARB containerObj, GLhandleARB obj)
static int luaglew_glAttachObjectARB(lua_State *L) {
	glAttachObjectARB((GLhandleARB)luaL_checkint(L, 1), (GLhandleARB)luaL_checkint(L, 2));
	return 0;
}
//####glBegin
// void glBegin (GLenum mode)
static int luaglew_glBegin(lua_State *L) {
	glBegin(luaL_checkint(L, 1));
	return 0;
}
//####glBeginConditionalRenderNV
// void glBeginConditionalRenderNV (GLuint id, GLenum mode)
static int luaglew_glBeginConditionalRenderNV(lua_State *L) {
	glBeginConditionalRenderNV((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBeginQueryARB
// void glBeginQueryARB (GLenum target, GLuint id)
static int luaglew_glBeginQueryARB(lua_State *L) {
	glBeginQueryARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBeginTransformFeedbackEXT
// void glBeginTransformFeedbackEXT (GLenum primitiveMode)
static int luaglew_glBeginTransformFeedbackEXT(lua_State *L) {
	glBeginTransformFeedbackEXT(luaL_checkint(L, 1));
	return 0;
}
//####glBindAttribLocation
// void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name)
static int luaglew_glBindAttribLocation(lua_State *L) {
	glBindAttribLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glBindAttribLocationARB
// void glBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB *name)
static int luaglew_glBindAttribLocationARB(lua_State *L) {
	glBindAttribLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glBindBufferARB
// void glBindBufferARB (GLenum target, GLuint buffer)
static int luaglew_glBindBufferARB(lua_State *L) {
	glBindBufferARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindBufferBase
// void glBindBufferBase (GLenum target, GLuint index, GLuint buffer)
static int luaglew_glBindBufferBase(lua_State *L) {
	glBindBufferBase(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glBindBufferBaseEXT
// void glBindBufferBaseEXT (GLenum target, GLuint index, GLuint buffer)
static int luaglew_glBindBufferBaseEXT(lua_State *L) {
	glBindBufferBaseEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glBindBufferOffsetEXT
// void glBindBufferOffsetEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset)
static int luaglew_glBindBufferOffsetEXT(lua_State *L) {
	glBindBufferOffsetEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLintptr)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glBindBufferRange
// void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
static int luaglew_glBindBufferRange(lua_State *L) {
	glBindBufferRange(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLintptr)luaglew_checkarray_int(L, 4), (GLsizeiptr)luaglew_checkarray_long(L, 5));
	return 0;
}
//####glBindBufferRangeEXT
// void glBindBufferRangeEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
static int luaglew_glBindBufferRangeEXT(lua_State *L) {
	glBindBufferRangeEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLintptr)luaglew_checkarray_int(L, 4), (GLsizeiptr)luaglew_checkarray_long(L, 5));
	return 0;
}
//####glBindFragDataLocationEXT
// void glBindFragDataLocationEXT (GLuint program, GLuint colorNumber, const GLchar *name)
static int luaglew_glBindFragDataLocationEXT(lua_State *L) {
	glBindFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
//####glBindFramebuffer
// void glBindFramebuffer (GLenum, GLuint)
static int luaglew_glBindFramebuffer(lua_State *L) {
	glBindFramebuffer(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindFramebufferEXT
// void glBindFramebufferEXT (GLenum target, GLuint framebuffer)
static int luaglew_glBindFramebufferEXT(lua_State *L) {
	glBindFramebufferEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindProgramARB
// void glBindProgramARB (GLenum target, GLuint program)
static int luaglew_glBindProgramARB(lua_State *L) {
	glBindProgramARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindRenderbuffer
// void glBindRenderbuffer (GLenum, GLuint)
static int luaglew_glBindRenderbuffer(lua_State *L) {
	glBindRenderbuffer(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindRenderbufferEXT
// void glBindRenderbufferEXT (GLenum target, GLuint renderbuffer)
static int luaglew_glBindRenderbufferEXT(lua_State *L) {
	glBindRenderbufferEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindTexture
// void glBindTexture (GLenum target, GLuint texture)
static int luaglew_glBindTexture(lua_State *L) {
	glBindTexture(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glBindVertexArrayAPPLE
// void glBindVertexArrayAPPLE (GLuint id)
static int luaglew_glBindVertexArrayAPPLE(lua_State *L) {
	glBindVertexArrayAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glBitmap
// void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
static int luaglew_glBitmap(lua_State *L) {
	glBitmap((GLsizei)luaL_checklong(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6), (GLubyte *)luaglew_checkarray_ubyte(L, 7));
	return 0;
}
//####glBlendColorEXT
// void glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf)
static int luaglew_glBlendColorEXT(lua_State *L) {
	glBlendColorEXT((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
//####glBlendEquationEXT
// void glBlendEquationEXT (GLenum)
static int luaglew_glBlendEquationEXT(lua_State *L) {
	glBlendEquationEXT(luaL_checkint(L, 1));
	return 0;
}
//####glBlendEquationSeparate
// void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha)
static int luaglew_glBlendEquationSeparate(lua_State *L) {
	glBlendEquationSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBlendEquationSeparateEXT
// void glBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha)
static int luaglew_glBlendEquationSeparateEXT(lua_State *L) {
	glBlendEquationSeparateEXT(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBlendFunc
// void glBlendFunc (GLenum sfactor, GLenum dfactor)
static int luaglew_glBlendFunc(lua_State *L) {
	glBlendFunc(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glBlendFuncSeparate
// void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
static int luaglew_glBlendFuncSeparate(lua_State *L) {
	glBlendFuncSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glBlendFuncSeparateEXT
// void glBlendFuncSeparateEXT (GLenum, GLenum, GLenum, GLenum)
static int luaglew_glBlendFuncSeparateEXT(lua_State *L) {
	glBlendFuncSeparateEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glBlitFramebuffer
// void glBlitFramebuffer (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
static int luaglew_glBlitFramebuffer(lua_State *L) {
	glBlitFramebuffer((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLint)luaL_checkint(L, 8), luaL_checkint(L, 9), luaL_checkint(L, 10));
	return 0;
}
//####glBlitFramebufferEXT
// void glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
static int luaglew_glBlitFramebufferEXT(lua_State *L) {
	glBlitFramebufferEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLint)luaL_checkint(L, 8), luaL_checkint(L, 9), luaL_checkint(L, 10));
	return 0;
}
//####glBufferData
// void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
static int luaglew_glBufferData(lua_State *L) {
	glBufferData(luaL_checkint(L, 1), (GLsizeiptr)luaglew_checkarray_long(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glBufferDataARB
// void glBufferDataARB (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
static int luaglew_glBufferDataARB(lua_State *L) {
	glBufferDataARB(luaL_checkint(L, 1), (GLsizeiptr)luaglew_checkarray_long(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glBufferParameteriAPPLE
// void glBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param)
static int luaglew_glBufferParameteriAPPLE(lua_State *L) {
	glBufferParameteriAPPLE(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glBufferSubData
// void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
static int luaglew_glBufferSubData(lua_State *L) {
	glBufferSubData(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glBufferSubDataARB
// void glBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
static int luaglew_glBufferSubDataARB(lua_State *L) {
	glBufferSubDataARB(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glCallList
// void glCallList (GLuint list)
static int luaglew_glCallList(lua_State *L) {
	glCallList((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glCallLists
// void glCallLists (GLsizei n, GLenum type, const GLvoid *lists)
static int luaglew_glCallLists(lua_State *L) {
	glCallLists((GLsizei)luaL_checklong(L, 1), luaL_checkint(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glClampColorARB
// void glClampColorARB (GLenum target, GLenum clamp)
static int luaglew_glClampColorARB(lua_State *L) {
	glClampColorARB(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glClear
// void glClear (GLbitfield mask)
static int luaglew_glClear(lua_State *L) {
	glClear(luaL_checkint(L, 1));
	return 0;
}
//####glClearAccum
// void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
static int luaglew_glClearAccum(lua_State *L) {
	glClearAccum((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glClearColor
// void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
static int luaglew_glClearColor(lua_State *L) {
	glClearColor((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
//####glClearColorIiEXT
// void glClearColorIiEXT ( GLint r, GLint g, GLint b, GLint a )
static int luaglew_glClearColorIiEXT(lua_State *L) {
	glClearColorIiEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glClearColorIuiEXT
// void glClearColorIuiEXT ( GLuint r, GLuint g, GLuint b, GLuint a )
static int luaglew_glClearColorIuiEXT(lua_State *L) {
	glClearColorIuiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glClearDepth
// void glClearDepth (GLclampd depth)
static int luaglew_glClearDepth(lua_State *L) {
	glClearDepth((GLclampd)luaL_checknumber(L, 1));
	return 0;
}
//####glClearIndex
// void glClearIndex (GLfloat c)
static int luaglew_glClearIndex(lua_State *L) {
	glClearIndex((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glClearStencil
// void glClearStencil (GLint s)
static int luaglew_glClearStencil(lua_State *L) {
	glClearStencil((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glClientActiveTextureARB
// void glClientActiveTextureARB (GLenum)
static int luaglew_glClientActiveTextureARB(lua_State *L) {
	glClientActiveTextureARB(luaL_checkint(L, 1));
	return 0;
}
//####glClipPlane
// void glClipPlane (GLenum plane, const GLdouble *equation)
static int luaglew_glClipPlane(lua_State *L) {
	glClipPlane(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glColor3b
// void glColor3b (GLbyte red, GLbyte green, GLbyte blue)
static int luaglew_glColor3b(lua_State *L) {
	glColor3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
//####glColor3bv
// void glColor3bv (const GLbyte *v)
static int luaglew_glColor3bv(lua_State *L) {
	glColor3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glColor3d
// void glColor3d (GLdouble red, GLdouble green, GLdouble blue)
static int luaglew_glColor3d(lua_State *L) {
	glColor3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glColor3dv
// void glColor3dv (const GLdouble *v)
static int luaglew_glColor3dv(lua_State *L) {
	glColor3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glColor3f
// void glColor3f (GLfloat red, GLfloat green, GLfloat blue)
static int luaglew_glColor3f(lua_State *L) {
	glColor3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glColor3fv
// void glColor3fv (const GLfloat *v)
static int luaglew_glColor3fv(lua_State *L) {
	glColor3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glColor3i
// void glColor3i (GLint red, GLint green, GLint blue)
static int luaglew_glColor3i(lua_State *L) {
	glColor3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glColor3iv
// void glColor3iv (const GLint *v)
static int luaglew_glColor3iv(lua_State *L) {
	glColor3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor3s
// void glColor3s (GLshort red, GLshort green, GLshort blue)
static int luaglew_glColor3s(lua_State *L) {
	glColor3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glColor3sv
// void glColor3sv (const GLshort *v)
static int luaglew_glColor3sv(lua_State *L) {
	glColor3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor3ub
// void glColor3ub (GLubyte red, GLubyte green, GLubyte blue)
static int luaglew_glColor3ub(lua_State *L) {
	glColor3ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
//####glColor3ubv
// void glColor3ubv (const GLubyte *v)
static int luaglew_glColor3ubv(lua_State *L) {
	glColor3ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glColor3ui
// void glColor3ui (GLuint red, GLuint green, GLuint blue)
static int luaglew_glColor3ui(lua_State *L) {
	glColor3ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glColor3uiv
// void glColor3uiv (const GLuint *v)
static int luaglew_glColor3uiv(lua_State *L) {
	glColor3uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor3us
// void glColor3us (GLushort red, GLushort green, GLushort blue)
static int luaglew_glColor3us(lua_State *L) {
	glColor3us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
//####glColor3usv
// void glColor3usv (const GLushort *v)
static int luaglew_glColor3usv(lua_State *L) {
	glColor3usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor4b
// void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
static int luaglew_glColor4b(lua_State *L) {
	glColor4b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3), (GLbyte)luaL_checknumber(L, 4));
	return 0;
}
//####glColor4bv
// void glColor4bv (const GLbyte *v)
static int luaglew_glColor4bv(lua_State *L) {
	glColor4bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glColor4d
// void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
static int luaglew_glColor4d(lua_State *L) {
	glColor4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glColor4dv
// void glColor4dv (const GLdouble *v)
static int luaglew_glColor4dv(lua_State *L) {
	glColor4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glColor4f
// void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
static int luaglew_glColor4f(lua_State *L) {
	glColor4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glColor4fv
// void glColor4fv (const GLfloat *v)
static int luaglew_glColor4fv(lua_State *L) {
	glColor4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glColor4i
// void glColor4i (GLint red, GLint green, GLint blue, GLint alpha)
static int luaglew_glColor4i(lua_State *L) {
	glColor4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glColor4iv
// void glColor4iv (const GLint *v)
static int luaglew_glColor4iv(lua_State *L) {
	glColor4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor4s
// void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha)
static int luaglew_glColor4s(lua_State *L) {
	glColor4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glColor4sv
// void glColor4sv (const GLshort *v)
static int luaglew_glColor4sv(lua_State *L) {
	glColor4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor4ub
// void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
static int luaglew_glColor4ub(lua_State *L) {
	glColor4ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3), (GLubyte)luaL_checknumber(L, 4));
	return 0;
}
//####glColor4ubv
// void glColor4ubv (const GLubyte *v)
static int luaglew_glColor4ubv(lua_State *L) {
	glColor4ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glColor4ui
// void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha)
static int luaglew_glColor4ui(lua_State *L) {
	glColor4ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glColor4uiv
// void glColor4uiv (const GLuint *v)
static int luaglew_glColor4uiv(lua_State *L) {
	glColor4uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColor4us
// void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha)
static int luaglew_glColor4us(lua_State *L) {
	glColor4us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3), (GLushort)luaL_checkinteger(L, 4));
	return 0;
}
//####glColor4usv
// void glColor4usv (const GLushort *v)
static int luaglew_glColor4usv(lua_State *L) {
	glColor4usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glColorMask
// void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
static int luaglew_glColorMask(lua_State *L) {
	glColorMask((GLboolean)lua_toboolean(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4));
	return 0;
}
//####glColorMaskIndexedEXT
// void glColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
static int luaglew_glColorMaskIndexedEXT(lua_State *L) {
	glColorMaskIndexedEXT((GLuint)luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4), (GLboolean)lua_toboolean(L, 5));
	return 0;
}
//####glColorMaterial
// void glColorMaterial (GLenum face, GLenum mode)
static int luaglew_glColorMaterial(lua_State *L) {
	glColorMaterial(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glColorPointer
// void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glColorPointer(lua_State *L) {
	glColorPointer((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glCompileShaderARB
// void glCompileShaderARB (GLhandleARB shaderObj)
static int luaglew_glCompileShaderARB(lua_State *L) {
	glCompileShaderARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glCompressedTexImage1DARB
// void glCompressedTexImage1DARB (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexImage1DARB(lua_State *L) {
	glCompressedTexImage1DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glCompressedTexImage2DARB
// void glCompressedTexImage2DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexImage2DARB(lua_State *L) {
	glCompressedTexImage2DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
//####glCompressedTexImage3DARB
// void glCompressedTexImage3DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexImage3DARB(lua_State *L) {
	glCompressedTexImage3DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glCompressedTexSubImage1DARB
// void glCompressedTexSubImage1DARB (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexSubImage1DARB(lua_State *L) {
	glCompressedTexSubImage1DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glCompressedTexSubImage2DARB
// void glCompressedTexSubImage2DARB (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexSubImage2DARB(lua_State *L) {
	glCompressedTexSubImage2DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glCompressedTexSubImage3DARB
// void glCompressedTexSubImage3DARB (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)
static int luaglew_glCompressedTexSubImage3DARB(lua_State *L) {
	glCompressedTexSubImage3DARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaL_checkint(L, 9), (GLsizei)luaL_checklong(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
//####glCopyPixels
// void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
static int luaglew_glCopyPixels(lua_State *L) {
	glCopyPixels((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5));
	return 0;
}
//####glCopyTexImage1D
// void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
static int luaglew_glCopyTexImage1D(lua_State *L) {
	glCopyTexImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7));
	return 0;
}
//####glCopyTexImage2D
// void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
static int luaglew_glCopyTexImage2D(lua_State *L) {
	glCopyTexImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLint)luaL_checkint(L, 8));
	return 0;
}
//####glCopyTexSubImage1D
// void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
static int luaglew_glCopyTexSubImage1D(lua_State *L) {
	glCopyTexSubImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
//####glCopyTexSubImage2D
// void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glCopyTexSubImage2D(lua_State *L) {
	glCopyTexSubImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8));
	return 0;
}
//####glCullFace
// void glCullFace (GLenum mode)
static int luaglew_glCullFace(lua_State *L) {
	glCullFace(luaL_checkint(L, 1));
	return 0;
}
//####glDeleteBuffers
// void glDeleteBuffers (GLsizei n, const GLuint *buffers)
static int luaglew_glDeleteBuffers(lua_State *L) {
	glDeleteBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteBuffersARB
// void glDeleteBuffersARB (GLsizei n, const GLuint *buffers)
static int luaglew_glDeleteBuffersARB(lua_State *L) {
	glDeleteBuffersARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteFencesAPPLE
// void glDeleteFencesAPPLE (GLsizei n, const GLuint *fences)
static int luaglew_glDeleteFencesAPPLE(lua_State *L) {
	glDeleteFencesAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteFramebuffers
// void glDeleteFramebuffers (GLsizei, const GLuint *)
static int luaglew_glDeleteFramebuffers(lua_State *L) {
	glDeleteFramebuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteFramebuffersEXT
// void glDeleteFramebuffersEXT (GLsizei n, const GLuint *framebuffers)
static int luaglew_glDeleteFramebuffersEXT(lua_State *L) {
	glDeleteFramebuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteLists
// void glDeleteLists (GLuint list, GLsizei range)
static int luaglew_glDeleteLists(lua_State *L) {
	glDeleteLists((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2));
	return 0;
}
//####glDeleteObjectARB
// void glDeleteObjectARB (GLhandleARB obj)
static int luaglew_glDeleteObjectARB(lua_State *L) {
	glDeleteObjectARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glDeleteProgramsARB
// void glDeleteProgramsARB (GLsizei n, const GLuint *programs)
static int luaglew_glDeleteProgramsARB(lua_State *L) {
	glDeleteProgramsARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteQueries
// void glDeleteQueries (GLsizei n, const GLuint *ids)
static int luaglew_glDeleteQueries(lua_State *L) {
	glDeleteQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteQueriesARB
// void glDeleteQueriesARB (GLsizei n, const GLuint *ids)
static int luaglew_glDeleteQueriesARB(lua_State *L) {
	glDeleteQueriesARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteRenderbuffers
// void glDeleteRenderbuffers (GLsizei, const GLuint *)
static int luaglew_glDeleteRenderbuffers(lua_State *L) {
	glDeleteRenderbuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteRenderbuffersEXT
// void glDeleteRenderbuffersEXT (GLsizei n, const GLuint *renderbuffers)
static int luaglew_glDeleteRenderbuffersEXT(lua_State *L) {
	glDeleteRenderbuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteTextures
// void glDeleteTextures (GLsizei n, const GLuint *textures)
static int luaglew_glDeleteTextures(lua_State *L) {
	glDeleteTextures((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDeleteVertexArraysAPPLE
// void glDeleteVertexArraysAPPLE (GLsizei n, const GLuint *ids)
static int luaglew_glDeleteVertexArraysAPPLE(lua_State *L) {
	glDeleteVertexArraysAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDepthFunc
// void glDepthFunc (GLenum func)
static int luaglew_glDepthFunc(lua_State *L) {
	glDepthFunc(luaL_checkint(L, 1));
	return 0;
}
//####glDepthMask
// void glDepthMask (GLboolean flag)
static int luaglew_glDepthMask(lua_State *L) {
	glDepthMask((GLboolean)lua_toboolean(L, 1));
	return 0;
}
//####glDepthRange
// void glDepthRange (GLclampd zNear, GLclampd zFar)
static int luaglew_glDepthRange(lua_State *L) {
	glDepthRange((GLclampd)luaL_checknumber(L, 1), (GLclampd)luaL_checknumber(L, 2));
	return 0;
}
//####glDetachObjectARB
// void glDetachObjectARB (GLhandleARB containerObj, GLhandleARB attachedObj)
static int luaglew_glDetachObjectARB(lua_State *L) {
	glDetachObjectARB((GLhandleARB)luaL_checkint(L, 1), (GLhandleARB)luaL_checkint(L, 2));
	return 0;
}
//####glDisable
// void glDisable (GLenum cap)
static int luaglew_glDisable(lua_State *L) {
	glDisable(luaL_checkint(L, 1));
	return 0;
}
//####glDisableClientState
// void glDisableClientState (GLenum array)
static int luaglew_glDisableClientState(lua_State *L) {
	glDisableClientState(luaL_checkint(L, 1));
	return 0;
}
//####glDisableIndexedEXT
// void glDisableIndexedEXT (GLenum target, GLuint index)
static int luaglew_glDisableIndexedEXT(lua_State *L) {
	glDisableIndexedEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glDisableVertexAttribAPPLE
// void glDisableVertexAttribAPPLE (GLuint index, GLenum pname)
static int luaglew_glDisableVertexAttribAPPLE(lua_State *L) {
	glDisableVertexAttribAPPLE((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glDisableVertexAttribArray
// void glDisableVertexAttribArray (GLuint index)
static int luaglew_glDisableVertexAttribArray(lua_State *L) {
	glDisableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glDisableVertexAttribArrayARB
// void glDisableVertexAttribArrayARB (GLuint index)
static int luaglew_glDisableVertexAttribArrayARB(lua_State *L) {
	glDisableVertexAttribArrayARB((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glDrawArrays
// void glDrawArrays (GLenum mode, GLint first, GLsizei count)
static int luaglew_glDrawArrays(lua_State *L) {
	glDrawArrays(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3));
	return 0;
}
//####glDrawArraysInstancedARB
// void glDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
static int luaglew_glDrawArraysInstancedARB(lua_State *L) {
	glDrawArraysInstancedARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glDrawBuffer
// void glDrawBuffer (GLenum mode)
static int luaglew_glDrawBuffer(lua_State *L) {
	glDrawBuffer(luaL_checkint(L, 1));
	return 0;
}
//####glDrawBuffers
// void glDrawBuffers (GLsizei n, const GLenum *bufs)
static int luaglew_glDrawBuffers(lua_State *L) {
	glDrawBuffers((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDrawBuffersARB
// void glDrawBuffersARB (GLsizei n, const GLenum *bufs)
static int luaglew_glDrawBuffersARB(lua_State *L) {
	glDrawBuffersARB((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
//####glDrawElementArrayAPPLE
// void glDrawElementArrayAPPLE (GLenum mode, GLint first, GLsizei count)
static int luaglew_glDrawElementArrayAPPLE(lua_State *L) {
	glDrawElementArrayAPPLE(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3));
	return 0;
}
//####glDrawElements
// void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
static int luaglew_glDrawElements(lua_State *L) {
	glDrawElements(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glDrawElementsInstancedARB
// void glDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
static int luaglew_glDrawElementsInstancedARB(lua_State *L) {
	glDrawElementsInstancedARB(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glDrawPixels
// void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glDrawPixels(lua_State *L) {
	glDrawPixels((GLsizei)luaL_checklong(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
//####glDrawRangeElementArrayAPPLE
// void glDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
static int luaglew_glDrawRangeElementArrayAPPLE(lua_State *L) {
	glDrawRangeElementArrayAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glDrawRangeElementsEXT
// void glDrawRangeElementsEXT (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *)
static int luaglew_glDrawRangeElementsEXT(lua_State *L) {
	glDrawRangeElementsEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
//####glEdgeFlag
// void glEdgeFlag (GLboolean flag)
static int luaglew_glEdgeFlag(lua_State *L) {
	glEdgeFlag((GLboolean)lua_toboolean(L, 1));
	return 0;
}
//####glEdgeFlagPointer
// void glEdgeFlagPointer (GLsizei stride, const GLvoid *pointer)
static int luaglew_glEdgeFlagPointer(lua_State *L) {
	glEdgeFlagPointer((GLsizei)luaL_checklong(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
//####glEdgeFlagv
// void glEdgeFlagv (const GLboolean *flag)
static int luaglew_glEdgeFlagv(lua_State *L) {
	glEdgeFlagv((GLboolean *)luaglew_checkarray_boolean(L, 1));
	return 0;
}
//####glElementPointerAPPLE
// void glElementPointerAPPLE (GLenum type, const GLvoid *pointer)
static int luaglew_glElementPointerAPPLE(lua_State *L) {
	glElementPointerAPPLE(luaL_checkint(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
//####glEnable
// void glEnable (GLenum cap)
static int luaglew_glEnable(lua_State *L) {
	glEnable(luaL_checkint(L, 1));
	return 0;
}
//####glEnableClientState
// void glEnableClientState (GLenum array)
static int luaglew_glEnableClientState(lua_State *L) {
	glEnableClientState(luaL_checkint(L, 1));
	return 0;
}
//####glEnableIndexedEXT
// void glEnableIndexedEXT (GLenum target, GLuint index)
static int luaglew_glEnableIndexedEXT(lua_State *L) {
	glEnableIndexedEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glEnableVertexAttribAPPLE
// void glEnableVertexAttribAPPLE (GLuint index, GLenum pname)
static int luaglew_glEnableVertexAttribAPPLE(lua_State *L) {
	glEnableVertexAttribAPPLE((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glEnableVertexAttribArray
// void glEnableVertexAttribArray (GLuint index)
static int luaglew_glEnableVertexAttribArray(lua_State *L) {
	glEnableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glEnableVertexAttribArrayARB
// void glEnableVertexAttribArrayARB (GLuint index)
static int luaglew_glEnableVertexAttribArrayARB(lua_State *L) {
	glEnableVertexAttribArrayARB((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glEnd
// void glEnd (void)
static int luaglew_glEnd(lua_State *L) {
	glEnd();
	return 0;
}
//####glEndConditionalRenderNV
// void glEndConditionalRenderNV (void)
static int luaglew_glEndConditionalRenderNV(lua_State *L) {
	glEndConditionalRenderNV();
	return 0;
}
//####glEndList
// void glEndList (void)
static int luaglew_glEndList(lua_State *L) {
	glEndList();
	return 0;
}
//####glEndQueryARB
// void glEndQueryARB (GLenum target)
static int luaglew_glEndQueryARB(lua_State *L) {
	glEndQueryARB(luaL_checkint(L, 1));
	return 0;
}
//####glEndTransformFeedbackEXT
// void glEndTransformFeedbackEXT (void)
static int luaglew_glEndTransformFeedbackEXT(lua_State *L) {
	glEndTransformFeedbackEXT();
	return 0;
}
//####glEvalCoord1d
// void glEvalCoord1d (GLdouble u)
static int luaglew_glEvalCoord1d(lua_State *L) {
	glEvalCoord1d((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glEvalCoord1dv
// void glEvalCoord1dv (const GLdouble *u)
static int luaglew_glEvalCoord1dv(lua_State *L) {
	glEvalCoord1dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glEvalCoord1f
// void glEvalCoord1f (GLfloat u)
static int luaglew_glEvalCoord1f(lua_State *L) {
	glEvalCoord1f((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glEvalCoord1fv
// void glEvalCoord1fv (const GLfloat *u)
static int luaglew_glEvalCoord1fv(lua_State *L) {
	glEvalCoord1fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glEvalCoord2d
// void glEvalCoord2d (GLdouble u, GLdouble v)
static int luaglew_glEvalCoord2d(lua_State *L) {
	glEvalCoord2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glEvalCoord2dv
// void glEvalCoord2dv (const GLdouble *u)
static int luaglew_glEvalCoord2dv(lua_State *L) {
	glEvalCoord2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glEvalCoord2f
// void glEvalCoord2f (GLfloat u, GLfloat v)
static int luaglew_glEvalCoord2f(lua_State *L) {
	glEvalCoord2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glEvalCoord2fv
// void glEvalCoord2fv (const GLfloat *u)
static int luaglew_glEvalCoord2fv(lua_State *L) {
	glEvalCoord2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glEvalMesh1
// void glEvalMesh1 (GLenum mode, GLint i1, GLint i2)
static int luaglew_glEvalMesh1(lua_State *L) {
	glEvalMesh1(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glEvalMesh2
// void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
static int luaglew_glEvalMesh2(lua_State *L) {
	glEvalMesh2(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glEvalPoint1
// void glEvalPoint1 (GLint i)
static int luaglew_glEvalPoint1(lua_State *L) {
	glEvalPoint1((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glEvalPoint2
// void glEvalPoint2 (GLint i, GLint j)
static int luaglew_glEvalPoint2(lua_State *L) {
	glEvalPoint2((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glFeedbackBuffer
// void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer)
static int luaglew_glFeedbackBuffer(lua_State *L) {
	glFeedbackBuffer((GLsizei)luaL_checklong(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glFinish
// void glFinish (void)
static int luaglew_glFinish(lua_State *L) {
	glFinish();
	return 0;
}
//####glFinishFenceAPPLE
// void glFinishFenceAPPLE (GLuint fence)
static int luaglew_glFinishFenceAPPLE(lua_State *L) {
	glFinishFenceAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glFinishObjectAPPLE
// void glFinishObjectAPPLE (GLenum object, GLuint name)
static int luaglew_glFinishObjectAPPLE(lua_State *L) {
	glFinishObjectAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glFlush
// void glFlush (void)
static int luaglew_glFlush(lua_State *L) {
	glFlush();
	return 0;
}
//####glFlushMappedBufferRangeAPPLE
// void glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size)
static int luaglew_glFlushMappedBufferRangeAPPLE(lua_State *L) {
	glFlushMappedBufferRangeAPPLE(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3));
	return 0;
}
//####glFlushVertexArrayRangeAPPLE
// void glFlushVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
static int luaglew_glFlushVertexArrayRangeAPPLE(lua_State *L) {
	glFlushVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
//####glFogCoordPointerEXT
// void glFogCoordPointerEXT (GLenum, GLsizei, const GLvoid *)
static int luaglew_glFogCoordPointerEXT(lua_State *L) {
	glFogCoordPointerEXT(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glFogCoorddEXT
// void glFogCoorddEXT (GLdouble)
static int luaglew_glFogCoorddEXT(lua_State *L) {
	glFogCoorddEXT((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoorddv
// void glFogCoorddv (const GLdouble * coord)
static int luaglew_glFogCoorddv(lua_State *L) {
	glFogCoorddv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glFogCoorddvEXT
// void glFogCoorddvEXT (const GLdouble *)
static int luaglew_glFogCoorddvEXT(lua_State *L) {
	glFogCoorddvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glFogCoordfEXT
// void glFogCoordfEXT (GLfloat)
static int luaglew_glFogCoordfEXT(lua_State *L) {
	glFogCoordfEXT((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glFogCoordfvEXT
// void glFogCoordfvEXT (const GLfloat *)
static int luaglew_glFogCoordfvEXT(lua_State *L) {
	glFogCoordfvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glFogf
// void glFogf (GLenum pname, GLfloat param)
static int luaglew_glFogf(lua_State *L) {
	glFogf(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glFogfv
// void glFogfv (GLenum pname, const GLfloat *params)
static int luaglew_glFogfv(lua_State *L) {
	glFogfv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glFogi
// void glFogi (GLenum pname, GLint param)
static int luaglew_glFogi(lua_State *L) {
	glFogi(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glFogiv
// void glFogiv (GLenum pname, const GLint *params)
static int luaglew_glFogiv(lua_State *L) {
	glFogiv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glFramebufferRenderbuffer
// void glFramebufferRenderbuffer (GLenum, GLenum, GLenum, GLuint)
static int luaglew_glFramebufferRenderbuffer(lua_State *L) {
	glFramebufferRenderbuffer(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glFramebufferRenderbufferEXT
// void glFramebufferRenderbufferEXT (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
static int luaglew_glFramebufferRenderbufferEXT(lua_State *L) {
	glFramebufferRenderbufferEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glFramebufferTexture1D
// void glFramebufferTexture1D (GLenum, GLenum, GLenum, GLuint, GLint)
static int luaglew_glFramebufferTexture1D(lua_State *L) {
	glFramebufferTexture1D(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFramebufferTexture1DEXT
// void glFramebufferTexture1DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
static int luaglew_glFramebufferTexture1DEXT(lua_State *L) {
	glFramebufferTexture1DEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFramebufferTexture2D
// void glFramebufferTexture2D (GLenum, GLenum, GLenum, GLuint, GLint)
static int luaglew_glFramebufferTexture2D(lua_State *L) {
	glFramebufferTexture2D(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFramebufferTexture2DEXT
// void glFramebufferTexture2DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
static int luaglew_glFramebufferTexture2DEXT(lua_State *L) {
	glFramebufferTexture2DEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFramebufferTexture3D
// void glFramebufferTexture3D (GLenum, GLenum, GLenum, GLuint, GLint, GLint)
static int luaglew_glFramebufferTexture3D(lua_State *L) {
	glFramebufferTexture3D(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
//####glFramebufferTexture3DEXT
// void glFramebufferTexture3DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
static int luaglew_glFramebufferTexture3DEXT(lua_State *L) {
	glFramebufferTexture3DEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
//####glFramebufferTextureLayer
// void glFramebufferTextureLayer (GLenum, GLenum, GLuint, GLint, GLint)
static int luaglew_glFramebufferTextureLayer(lua_State *L) {
	glFramebufferTextureLayer(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glFrontFace
// void glFrontFace (GLenum mode)
static int luaglew_glFrontFace(lua_State *L) {
	glFrontFace(luaL_checkint(L, 1));
	return 0;
}
//####glFrustum
// void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
static int luaglew_glFrustum(lua_State *L) {
	glFrustum((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
//####glGenBuffers
// void glGenBuffers (GLsizei n, GLuint *buffers)
static int luaglew_glGenBuffers(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenBuffers(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenBuffersARB
// void glGenBuffersARB (GLsizei n, GLuint *buffers)
static int luaglew_glGenBuffersARB(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenBuffersARB(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenFencesAPPLE
// void glGenFencesAPPLE (GLsizei n, GLuint *fences)
static int luaglew_glGenFencesAPPLE(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenFencesAPPLE(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenFramebuffers
// void glGenFramebuffers (GLsizei, GLuint *)
static int luaglew_glGenFramebuffers(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenFramebuffers(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenFramebuffersEXT
// void glGenFramebuffersEXT (GLsizei n, GLuint *framebuffers)
static int luaglew_glGenFramebuffersEXT(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenFramebuffersEXT(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenProgramsARB
// void glGenProgramsARB (GLsizei n, GLuint *programs)
static int luaglew_glGenProgramsARB(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenProgramsARB(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenQueries
// void glGenQueries (GLsizei n, GLuint *ids)
static int luaglew_glGenQueries(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenQueries(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenQueriesARB
// void glGenQueriesARB (GLsizei n, GLuint *ids)
static int luaglew_glGenQueriesARB(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenQueriesARB(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenRenderbuffers
// void glGenRenderbuffers (GLsizei, GLuint *)
static int luaglew_glGenRenderbuffers(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenRenderbuffers(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenRenderbuffersEXT
// void glGenRenderbuffersEXT (GLsizei n, GLuint *renderbuffers)
static int luaglew_glGenRenderbuffersEXT(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenRenderbuffersEXT(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenTextures
// void glGenTextures (GLsizei n, GLuint *textures)
static int luaglew_glGenTextures(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenTextures(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenVertexArraysAPPLE
// void glGenVertexArraysAPPLE (GLsizei n, GLuint *ids)
static int luaglew_glGenVertexArraysAPPLE(lua_State *L) {
	GLuint * return_value;
	GLsizei n = (GLsizei)luaL_checklong(L, 1);
	return_value = (GLuint *) malloc(n*sizeof(GLuint));
	glGenVertexArraysAPPLE(n, return_value);
	luaglew_pusharray_uint(L, return_value, n);
	return 1;
}
//####glGenerateMipmap
// void glGenerateMipmap (GLenum)
static int luaglew_glGenerateMipmap(lua_State *L) {
	glGenerateMipmap(luaL_checkint(L, 1));
	return 0;
}
//####glGenerateMipmapEXT
// void glGenerateMipmapEXT (GLenum target)
static int luaglew_glGenerateMipmapEXT(lua_State *L) {
	glGenerateMipmapEXT(luaL_checkint(L, 1));
	return 0;
}
//####glGetActiveAttrib
// void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
static int luaglew_glGetActiveAttrib(lua_State *L) {
	GLchar return_value[16];
	glGetActiveAttrib((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveAttribARB
// void glGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
static int luaglew_glGetActiveAttribARB(lua_State *L) {
	GLcharARB return_value[16];
	glGetActiveAttribARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniform
// void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
static int luaglew_glGetActiveUniform(lua_State *L) {
	GLchar return_value[16];
	glGetActiveUniform((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniformARB
// void glGetActiveUniformARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
static int luaglew_glGetActiveUniformARB(lua_State *L) {
	GLcharARB return_value[16];
	glGetActiveUniformARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniformBlockName
// void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName)
static int luaglew_glGetActiveUniformBlockName(lua_State *L) {
	GLchar return_value[16];
	glGetActiveUniformBlockName((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniformBlockiv
// void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params)
static int luaglew_glGetActiveUniformBlockiv(lua_State *L) {
	GLint return_value[16];
	glGetActiveUniformBlockiv((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetActiveUniformName
// void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName)
static int luaglew_glGetActiveUniformName(lua_State *L) {
	GLchar return_value[16];
	glGetActiveUniformName((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetActiveUniformsiv
// void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params)
static int luaglew_glGetActiveUniformsiv(lua_State *L) {
	GLint return_value[16];
	glGetActiveUniformsiv((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3), luaL_checkint(L, 4), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetAttachedShaders
// void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders)
static int luaglew_glGetAttachedShaders(lua_State *L) {
	GLuint return_value[16];
	glGetAttachedShaders((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetBooleanIndexedvEXT
// void glGetBooleanIndexedvEXT (GLenum param, GLuint index, GLboolean *values)
static int luaglew_glGetBooleanIndexedvEXT(lua_State *L) {
	GLboolean return_value[16];
	glGetBooleanIndexedvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glGetBooleanv
// void glGetBooleanv (GLenum pname, GLboolean *params)
static int luaglew_glGetBooleanv(lua_State *L) {
	GLboolean return_value[16];
	glGetBooleanv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_boolean(L, return_value, 16);
	return 1;
}
//####glGetBufferParameteriv
// void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetBufferParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetBufferParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetBufferParameterivARB
// void glGetBufferParameterivARB (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetBufferParameterivARB(lua_State *L) {
	GLint return_value[16];
	glGetBufferParameterivARB(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetBufferPointerv
// void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid **params)
static int luaglew_glGetBufferPointerv(lua_State *L) {
	GLvoid ** return_value;
	glGetBufferPointerv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetBufferPointervARB
// void glGetBufferPointervARB (GLenum target, GLenum pname, GLvoid **params)
static int luaglew_glGetBufferPointervARB(lua_State *L) {
	GLvoid ** return_value;
	glGetBufferPointervARB(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetBufferSubData
// void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
static int luaglew_glGetBufferSubData(lua_State *L) {
	GLvoid * return_value;
	glGetBufferSubData(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetBufferSubDataARB
// void glGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
static int luaglew_glGetBufferSubDataARB(lua_State *L) {
	GLvoid * return_value;
	glGetBufferSubDataARB(luaL_checkint(L, 1), (GLintptr)luaglew_checkarray_int(L, 2), (GLsizeiptr)luaglew_checkarray_long(L, 3), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetClipPlane
// void glGetClipPlane (GLenum plane, GLdouble *equation)
static int luaglew_glGetClipPlane(lua_State *L) {
	GLdouble return_value[16];
	glGetClipPlane(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetCompressedTexImageARB
// void glGetCompressedTexImageARB (GLenum, GLint, GLvoid *)
static int luaglew_glGetCompressedTexImageARB(lua_State *L) {
	GLvoid * return_value;
	glGetCompressedTexImageARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetDoublev
// void glGetDoublev (GLenum pname, GLdouble *params)
static int luaglew_glGetDoublev(lua_State *L) {
	GLdouble return_value[16];
	glGetDoublev(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetFloatv
// void glGetFloatv (GLenum pname, GLfloat *params)
static int luaglew_glGetFloatv(lua_State *L) {
	GLfloat return_value[16];
	glGetFloatv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetFramebufferAttachmentParameteriv
// void glGetFramebufferAttachmentParameteriv (GLenum, GLenum, GLenum, GLint *)
static int luaglew_glGetFramebufferAttachmentParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetFramebufferAttachmentParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetFramebufferAttachmentParameterivEXT
// void glGetFramebufferAttachmentParameterivEXT (GLenum target, GLenum attachment, GLenum pname, GLint *params)
static int luaglew_glGetFramebufferAttachmentParameterivEXT(lua_State *L) {
	GLint return_value[16];
	glGetFramebufferAttachmentParameterivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetInfoLogARB
// void glGetInfoLogARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
static int luaglew_glGetInfoLogARB(lua_State *L) {
	GLcharARB return_value[16];
	glGetInfoLogARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetIntegerIndexedvEXT
// void glGetIntegerIndexedvEXT (GLenum param, GLuint index, GLint *values)
static int luaglew_glGetIntegerIndexedvEXT(lua_State *L) {
	GLint return_value[16];
	glGetIntegerIndexedvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetIntegeri_v
// void glGetIntegeri_v (GLenum pname, GLuint index, GLint* data)
static int luaglew_glGetIntegeri_v(lua_State *L) {
	GLint return_value[16];
	glGetIntegeri_v(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetIntegerv
// void glGetIntegerv (GLenum pname, GLint *params)
static int luaglew_glGetIntegerv(lua_State *L) {
	GLint return_value[16];
	glGetIntegerv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetLightfv
// void glGetLightfv (GLenum light, GLenum pname, GLfloat *params)
static int luaglew_glGetLightfv(lua_State *L) {
	GLfloat return_value[16];
	glGetLightfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetLightiv
// void glGetLightiv (GLenum light, GLenum pname, GLint *params)
static int luaglew_glGetLightiv(lua_State *L) {
	GLint return_value[16];
	glGetLightiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetMapdv
// void glGetMapdv (GLenum target, GLenum query, GLdouble *v)
static int luaglew_glGetMapdv(lua_State *L) {
	GLdouble return_value[16];
	glGetMapdv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetMapfv
// void glGetMapfv (GLenum target, GLenum query, GLfloat *v)
static int luaglew_glGetMapfv(lua_State *L) {
	GLfloat return_value[16];
	glGetMapfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetMapiv
// void glGetMapiv (GLenum target, GLenum query, GLint *v)
static int luaglew_glGetMapiv(lua_State *L) {
	GLint return_value[16];
	glGetMapiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetMaterialfv
// void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params)
static int luaglew_glGetMaterialfv(lua_State *L) {
	GLfloat return_value[16];
	glGetMaterialfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetMaterialiv
// void glGetMaterialiv (GLenum face, GLenum pname, GLint *params)
static int luaglew_glGetMaterialiv(lua_State *L) {
	GLint return_value[16];
	glGetMaterialiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetMinmax
// void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
static int luaglew_glGetMinmax(lua_State *L) {
	GLvoid * return_value;
	glGetMinmax(luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetObjectParameterfvARB
// void glGetObjectParameterfvARB (GLhandleARB obj, GLenum pname, GLfloat *params)
static int luaglew_glGetObjectParameterfvARB(lua_State *L) {
	GLfloat return_value[16];
	glGetObjectParameterfvARB((GLhandleARB)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetObjectParameterivAPPLE
// void glGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint* params)
static int luaglew_glGetObjectParameterivAPPLE(lua_State *L) {
	GLint return_value[16];
	glGetObjectParameterivAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetObjectParameterivARB
// void glGetObjectParameterivARB (GLhandleARB obj, GLenum pname, GLint *params)
static int luaglew_glGetObjectParameterivARB(lua_State *L) {
	GLint return_value[16];
	glGetObjectParameterivARB((GLhandleARB)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetPixelMapfv
// void glGetPixelMapfv (GLenum map, GLfloat *values)
static int luaglew_glGetPixelMapfv(lua_State *L) {
	GLfloat return_value[16];
	glGetPixelMapfv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetPixelMapuiv
// void glGetPixelMapuiv (GLenum map, GLuint *values)
static int luaglew_glGetPixelMapuiv(lua_State *L) {
	GLuint return_value[16];
	glGetPixelMapuiv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetPixelMapusv
// void glGetPixelMapusv (GLenum map, GLushort *values)
static int luaglew_glGetPixelMapusv(lua_State *L) {
	GLushort return_value[16];
	glGetPixelMapusv(luaL_checkint(L, 1), return_value);
	luaglew_pusharray_ushort(L, return_value, 16);
	return 1;
}
//####glGetPointerv
// void glGetPointerv (GLenum pname, GLvoid* *params)
static int luaglew_glGetPointerv(lua_State *L) {
	GLvoid* return_value;
	glGetPointerv(luaL_checkint(L, 1), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetPolygonStipple
// void glGetPolygonStipple (GLubyte *mask)
static int luaglew_glGetPolygonStipple(lua_State *L) {
	GLubyte return_value[16];
	glGetPolygonStipple(return_value);
	lua_pushstring(L, return_value);
	return 1;
}
//####glGetProgramEnvParameterdvARB
// void glGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble *params)
static int luaglew_glGetProgramEnvParameterdvARB(lua_State *L) {
	GLdouble return_value[16];
	glGetProgramEnvParameterdvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetProgramEnvParameterfvARB
// void glGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat *params)
static int luaglew_glGetProgramEnvParameterfvARB(lua_State *L) {
	GLfloat return_value[16];
	glGetProgramEnvParameterfvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetProgramInfoLog
// void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
static int luaglew_glGetProgramInfoLog(lua_State *L) {
	GLchar return_value[16];
	glGetProgramInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetProgramLocalParameterdvARB
// void glGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble *params)
static int luaglew_glGetProgramLocalParameterdvARB(lua_State *L) {
	GLdouble return_value[16];
	glGetProgramLocalParameterdvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetProgramLocalParameterfvARB
// void glGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat *params)
static int luaglew_glGetProgramLocalParameterfvARB(lua_State *L) {
	GLfloat return_value[16];
	glGetProgramLocalParameterfvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetProgramStringARB
// void glGetProgramStringARB (GLenum target, GLenum pname, GLvoid *string)
static int luaglew_glGetProgramStringARB(lua_State *L) {
	GLvoid * return_value;
	glGetProgramStringARB(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetProgramiv
// void glGetProgramiv (GLuint program, GLenum pname, GLint *params)
static int luaglew_glGetProgramiv(lua_State *L) {
	GLint return_value[16];
	glGetProgramiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetProgramivARB
// void glGetProgramivARB (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetProgramivARB(lua_State *L) {
	GLint return_value[16];
	glGetProgramivARB(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectiv
// void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params)
static int luaglew_glGetQueryObjectiv(lua_State *L) {
	GLint return_value[16];
	glGetQueryObjectiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectivARB
// void glGetQueryObjectivARB (GLuint id, GLenum pname, GLint *params)
static int luaglew_glGetQueryObjectivARB(lua_State *L) {
	GLint return_value[16];
	glGetQueryObjectivARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectuiv
// void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params)
static int luaglew_glGetQueryObjectuiv(lua_State *L) {
	GLuint return_value[16];
	glGetQueryObjectuiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetQueryObjectuivARB
// void glGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint *params)
static int luaglew_glGetQueryObjectuivARB(lua_State *L) {
	GLuint return_value[16];
	glGetQueryObjectuivARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetQueryiv
// void glGetQueryiv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetQueryiv(lua_State *L) {
	GLint return_value[16];
	glGetQueryiv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetQueryivARB
// void glGetQueryivARB (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetQueryivARB(lua_State *L) {
	GLint return_value[16];
	glGetQueryivARB(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetRenderbufferParameteriv
// void glGetRenderbufferParameteriv (GLenum, GLenum, GLint *)
static int luaglew_glGetRenderbufferParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetRenderbufferParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetRenderbufferParameterivEXT
// void glGetRenderbufferParameterivEXT (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetRenderbufferParameterivEXT(lua_State *L) {
	GLint return_value[16];
	glGetRenderbufferParameterivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetSeparableFilter
// void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
static int luaglew_glGetSeparableFilter(lua_State *L) {
	GLvoid * return_value;
	glGetSeparableFilter(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetShaderInfoLog
// void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
static int luaglew_glGetShaderInfoLog(lua_State *L) {
	GLchar return_value[16];
	glGetShaderInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetShaderSource
// void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
static int luaglew_glGetShaderSource(lua_State *L) {
	GLchar return_value[16];
	glGetShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetShaderSourceARB
// void glGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source)
static int luaglew_glGetShaderSourceARB(lua_State *L) {
	GLcharARB return_value[16];
	glGetShaderSourceARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetShaderiv
// void glGetShaderiv (GLuint shader, GLenum pname, GLint *params)
static int luaglew_glGetShaderiv(lua_State *L) {
	GLint return_value[16];
	glGetShaderiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexEnvfv
// void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetTexEnvfv(lua_State *L) {
	GLfloat return_value[16];
	glGetTexEnvfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetTexEnviv
// void glGetTexEnviv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetTexEnviv(lua_State *L) {
	GLint return_value[16];
	glGetTexEnviv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexGendv
// void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params)
static int luaglew_glGetTexGendv(lua_State *L) {
	GLdouble return_value[16];
	glGetTexGendv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetTexGenfv
// void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params)
static int luaglew_glGetTexGenfv(lua_State *L) {
	GLfloat return_value[16];
	glGetTexGenfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetTexGeniv
// void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params)
static int luaglew_glGetTexGeniv(lua_State *L) {
	GLint return_value[16];
	glGetTexGeniv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexImage
// void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
static int luaglew_glGetTexImage(lua_State *L) {
	GLvoid * return_value;
	glGetTexImage(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetTexLevelParameterfv
// void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params)
static int luaglew_glGetTexLevelParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetTexLevelParameterfv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetTexLevelParameteriv
// void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params)
static int luaglew_glGetTexLevelParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetTexLevelParameteriv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexParameterIivEXT
// void glGetTexParameterIivEXT ( GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetTexParameterIivEXT(lua_State *L) {
	GLint return_value[16];
	glGetTexParameterIivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTexParameterIuivEXT
// void glGetTexParameterIuivEXT ( GLenum target, GLenum pname, GLuint *params)
static int luaglew_glGetTexParameterIuivEXT(lua_State *L) {
	GLuint return_value[16];
	glGetTexParameterIuivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetTexParameterfv
// void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params)
static int luaglew_glGetTexParameterfv(lua_State *L) {
	GLfloat return_value[16];
	glGetTexParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetTexParameteriv
// void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params)
static int luaglew_glGetTexParameteriv(lua_State *L) {
	GLint return_value[16];
	glGetTexParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetTransformFeedbackVaryingEXT
// void glGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
static int luaglew_glGetTransformFeedbackVaryingEXT(lua_State *L) {
	GLchar return_value[16];
	glGetTransformFeedbackVaryingEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), luaglew_checkarray_int(L, 6), return_value);
	lua_pushlstring(L, return_value, 1);
	return 1;
}
//####glGetUniformIndices
// void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices)
static int luaglew_glGetUniformIndices(lua_State *L) {
	GLuint return_value[16];
	glGetUniformIndices((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), return_value);
	luaglew_pusharray_uint(L, return_value, 16);
	return 1;
}
//####glGetUniformfv
// void glGetUniformfv (GLuint program, GLint location, GLfloat *params)
static int luaglew_glGetUniformfv(lua_State *L) {
	GLfloat return_value[16];
	glGetUniformfv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetUniformfvARB
// void glGetUniformfvARB (GLhandleARB programObj, GLint location, GLfloat *params)
static int luaglew_glGetUniformfvARB(lua_State *L) {
	GLfloat return_value[16];
	glGetUniformfvARB((GLhandleARB)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetUniformiv
// void glGetUniformiv (GLuint program, GLint location, GLint *params)
static int luaglew_glGetUniformiv(lua_State *L) {
	GLint return_value[16];
	glGetUniformiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetUniformivARB
// void glGetUniformivARB (GLhandleARB programObj, GLint location, GLint *params)
static int luaglew_glGetUniformivARB(lua_State *L) {
	GLint return_value[16];
	glGetUniformivARB((GLhandleARB)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribPointerv
// void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid* *pointer)
static int luaglew_glGetVertexAttribPointerv(lua_State *L) {
	GLvoid* return_value;
	glGetVertexAttribPointerv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetVertexAttribPointervARB
// void glGetVertexAttribPointervARB (GLuint index, GLenum pname, GLvoid **pointer)
static int luaglew_glGetVertexAttribPointervARB(lua_State *L) {
	GLvoid ** return_value;
	glGetVertexAttribPointervARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####glGetVertexAttribdv
// void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params)
static int luaglew_glGetVertexAttribdv(lua_State *L) {
	GLdouble return_value[16];
	glGetVertexAttribdv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribdvARB
// void glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params)
static int luaglew_glGetVertexAttribdvARB(lua_State *L) {
	GLdouble return_value[16];
	glGetVertexAttribdvARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_double(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribfv
// void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params)
static int luaglew_glGetVertexAttribfv(lua_State *L) {
	GLfloat return_value[16];
	glGetVertexAttribfv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribfvARB
// void glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params)
static int luaglew_glGetVertexAttribfvARB(lua_State *L) {
	GLfloat return_value[16];
	glGetVertexAttribfvARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_float(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribiv
// void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params)
static int luaglew_glGetVertexAttribiv(lua_State *L) {
	GLint return_value[16];
	glGetVertexAttribiv((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glGetVertexAttribivARB
// void glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params)
static int luaglew_glGetVertexAttribivARB(lua_State *L) {
	GLint return_value[16];
	glGetVertexAttribivARB((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2), return_value);
	luaglew_pusharray_int(L, return_value, 16);
	return 1;
}
//####glHint
// void glHint (GLenum target, GLenum mode)
static int luaglew_glHint(lua_State *L) {
	glHint(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glIndexMask
// void glIndexMask (GLuint mask)
static int luaglew_glIndexMask(lua_State *L) {
	glIndexMask((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glIndexPointer
// void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glIndexPointer(lua_State *L) {
	glIndexPointer(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glIndexd
// void glIndexd (GLdouble c)
static int luaglew_glIndexd(lua_State *L) {
	glIndexd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glIndexdv
// void glIndexdv (const GLdouble *c)
static int luaglew_glIndexdv(lua_State *L) {
	glIndexdv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glIndexf
// void glIndexf (GLfloat c)
static int luaglew_glIndexf(lua_State *L) {
	glIndexf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glIndexfv
// void glIndexfv (const GLfloat *c)
static int luaglew_glIndexfv(lua_State *L) {
	glIndexfv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glIndexi
// void glIndexi (GLint c)
static int luaglew_glIndexi(lua_State *L) {
	glIndexi((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glIndexiv
// void glIndexiv (const GLint *c)
static int luaglew_glIndexiv(lua_State *L) {
	glIndexiv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glIndexs
// void glIndexs (GLshort c)
static int luaglew_glIndexs(lua_State *L) {
	glIndexs((GLshort)luaL_checkinteger(L, 1));
	return 0;
}
//####glIndexsv
// void glIndexsv (const GLshort *c)
static int luaglew_glIndexsv(lua_State *L) {
	glIndexsv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glIndexub
// void glIndexub (GLubyte c)
static int luaglew_glIndexub(lua_State *L) {
	glIndexub((GLubyte)luaL_checknumber(L, 1));
	return 0;
}
//####glIndexubv
// void glIndexubv (const GLubyte *c)
static int luaglew_glIndexubv(lua_State *L) {
	glIndexubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glInitNames
// void glInitNames (void)
static int luaglew_glInitNames(lua_State *L) {
	glInitNames();
	return 0;
}
//####glInterleavedArrays
// void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer)
static int luaglew_glInterleavedArrays(lua_State *L) {
	glInterleavedArrays(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glLightModelf
// void glLightModelf (GLenum pname, GLfloat param)
static int luaglew_glLightModelf(lua_State *L) {
	glLightModelf(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glLightModelfv
// void glLightModelfv (GLenum pname, const GLfloat *params)
static int luaglew_glLightModelfv(lua_State *L) {
	glLightModelfv(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glLightModeli
// void glLightModeli (GLenum pname, GLint param)
static int luaglew_glLightModeli(lua_State *L) {
	glLightModeli(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glLightModeliv
// void glLightModeliv (GLenum pname, const GLint *params)
static int luaglew_glLightModeliv(lua_State *L) {
	glLightModeliv(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glLightf
// void glLightf (GLenum light, GLenum pname, GLfloat param)
static int luaglew_glLightf(lua_State *L) {
	glLightf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glLightfv
// void glLightfv (GLenum light, GLenum pname, const GLfloat *params)
static int luaglew_glLightfv(lua_State *L) {
	glLightfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glLighti
// void glLighti (GLenum light, GLenum pname, GLint param)
static int luaglew_glLighti(lua_State *L) {
	glLighti(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glLightiv
// void glLightiv (GLenum light, GLenum pname, const GLint *params)
static int luaglew_glLightiv(lua_State *L) {
	glLightiv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glLineStipple
// void glLineStipple (GLint factor, GLushort pattern)
static int luaglew_glLineStipple(lua_State *L) {
	glLineStipple((GLint)luaL_checkint(L, 1), (GLushort)luaL_checkinteger(L, 2));
	return 0;
}
//####glLineWidth
// void glLineWidth (GLfloat width)
static int luaglew_glLineWidth(lua_State *L) {
	glLineWidth((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glLinkProgramARB
// void glLinkProgramARB (GLhandleARB programObj)
static int luaglew_glLinkProgramARB(lua_State *L) {
	glLinkProgramARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glListBase
// void glListBase (GLuint base)
static int luaglew_glListBase(lua_State *L) {
	glListBase((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glLoadIdentity
// void glLoadIdentity (void)
static int luaglew_glLoadIdentity(lua_State *L) {
	glLoadIdentity();
	return 0;
}
//####glLoadMatrixd
// void glLoadMatrixd (const GLdouble *m)
static int luaglew_glLoadMatrixd(lua_State *L) {
	glLoadMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glLoadMatrixf
// void glLoadMatrixf (const GLfloat *m)
static int luaglew_glLoadMatrixf(lua_State *L) {
	glLoadMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glLoadName
// void glLoadName (GLuint name)
static int luaglew_glLoadName(lua_State *L) {
	glLoadName((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glLoadTransposeMatrixd
// void glLoadTransposeMatrixd (const GLdouble *m)
static int luaglew_glLoadTransposeMatrixd(lua_State *L) {
	glLoadTransposeMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glLoadTransposeMatrixdARB
// void glLoadTransposeMatrixdARB (const GLdouble *)
static int luaglew_glLoadTransposeMatrixdARB(lua_State *L) {
	glLoadTransposeMatrixdARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glLoadTransposeMatrixf
// void glLoadTransposeMatrixf (const GLfloat *m)
static int luaglew_glLoadTransposeMatrixf(lua_State *L) {
	glLoadTransposeMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glLoadTransposeMatrixfARB
// void glLoadTransposeMatrixfARB (const GLfloat *)
static int luaglew_glLoadTransposeMatrixfARB(lua_State *L) {
	glLoadTransposeMatrixfARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glLockArraysEXT
// void glLockArraysEXT (GLint, GLsizei)
static int luaglew_glLockArraysEXT(lua_State *L) {
	glLockArraysEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2));
	return 0;
}
//####glLogicOp
// void glLogicOp (GLenum opcode)
static int luaglew_glLogicOp(lua_State *L) {
	glLogicOp(luaL_checkint(L, 1));
	return 0;
}
//####glMap1d
// void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
static int luaglew_glMap1d(lua_State *L) {
	glMap1d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLdouble *)luaglew_checkarray_double(L, 6));
	return 0;
}
//####glMap1f
// void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
static int luaglew_glMap1f(lua_State *L) {
	glMap1f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLfloat *)luaglew_checkarray_float(L, 6));
	return 0;
}
//####glMap2d
// void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
static int luaglew_glMap2d(lua_State *L) {
	glMap2d(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLdouble)luaL_checknumber(L, 6), (GLdouble)luaL_checknumber(L, 7), (GLint)luaL_checkint(L, 8), (GLint)luaL_checkint(L, 9), (GLdouble *)luaglew_checkarray_double(L, 10));
	return 0;
}
//####glMap2f
// void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
static int luaglew_glMap2f(lua_State *L) {
	glMap2f(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLfloat)luaL_checknumber(L, 6), (GLfloat)luaL_checknumber(L, 7), (GLint)luaL_checkint(L, 8), (GLint)luaL_checkint(L, 9), (GLfloat *)luaglew_checkarray_float(L, 10));
	return 0;
}
//####glMapGrid1d
// void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2)
static int luaglew_glMapGrid1d(lua_State *L) {
	glMapGrid1d((GLint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glMapGrid1f
// void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2)
static int luaglew_glMapGrid1f(lua_State *L) {
	glMapGrid1f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glMapGrid2d
// void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
static int luaglew_glMapGrid2d(lua_State *L) {
	glMapGrid2d((GLint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
//####glMapGrid2f
// void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
static int luaglew_glMapGrid2f(lua_State *L) {
	glMapGrid2f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
//####glMapVertexAttrib1dAPPLE
// void glMapVertexAttrib1dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
static int luaglew_glMapVertexAttrib1dAPPLE(lua_State *L) {
	glMapVertexAttrib1dAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLdouble *)luaglew_checkarray_double(L, 7));
	return 0;
}
//####glMapVertexAttrib1fAPPLE
// void glMapVertexAttrib1fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
static int luaglew_glMapVertexAttrib1fAPPLE(lua_State *L) {
	glMapVertexAttrib1fAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLfloat *)luaglew_checkarray_float(L, 7));
	return 0;
}
//####glMapVertexAttrib2dAPPLE
// void glMapVertexAttrib2dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
static int luaglew_glMapVertexAttrib2dAPPLE(lua_State *L) {
	glMapVertexAttrib2dAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLdouble)luaL_checknumber(L, 7), (GLdouble)luaL_checknumber(L, 8), (GLint)luaL_checkint(L, 9), (GLint)luaL_checkint(L, 10), (GLdouble *)luaglew_checkarray_double(L, 11));
	return 0;
}
//####glMapVertexAttrib2fAPPLE
// void glMapVertexAttrib2fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
static int luaglew_glMapVertexAttrib2fAPPLE(lua_State *L) {
	glMapVertexAttrib2fAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLfloat)luaL_checknumber(L, 7), (GLfloat)luaL_checknumber(L, 8), (GLint)luaL_checkint(L, 9), (GLint)luaL_checkint(L, 10), (GLfloat *)luaglew_checkarray_float(L, 11));
	return 0;
}
//####glMaterialf
// void glMaterialf (GLenum face, GLenum pname, GLfloat param)
static int luaglew_glMaterialf(lua_State *L) {
	glMaterialf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glMaterialfv
// void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params)
static int luaglew_glMaterialfv(lua_State *L) {
	glMaterialfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glMateriali
// void glMateriali (GLenum face, GLenum pname, GLint param)
static int luaglew_glMateriali(lua_State *L) {
	glMateriali(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glMaterialiv
// void glMaterialiv (GLenum face, GLenum pname, const GLint *params)
static int luaglew_glMaterialiv(lua_State *L) {
	glMaterialiv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glMatrixMode
// void glMatrixMode (GLenum mode)
static int luaglew_glMatrixMode(lua_State *L) {
	glMatrixMode(luaL_checkint(L, 1));
	return 0;
}
//####glMinmax
// void glMinmax (GLenum target, GLenum internalformat, GLboolean sink)
static int luaglew_glMinmax(lua_State *L) {
	glMinmax(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLboolean)lua_toboolean(L, 3));
	return 0;
}
//####glMultMatrixd
// void glMultMatrixd (const GLdouble *m)
static int luaglew_glMultMatrixd(lua_State *L) {
	glMultMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glMultMatrixf
// void glMultMatrixf (const GLfloat *m)
static int luaglew_glMultMatrixf(lua_State *L) {
	glMultMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glMultTransposeMatrixd
// void glMultTransposeMatrixd (const GLdouble *m)
static int luaglew_glMultTransposeMatrixd(lua_State *L) {
	glMultTransposeMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glMultTransposeMatrixdARB
// void glMultTransposeMatrixdARB (const GLdouble *)
static int luaglew_glMultTransposeMatrixdARB(lua_State *L) {
	glMultTransposeMatrixdARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glMultTransposeMatrixf
// void glMultTransposeMatrixf (const GLfloat *m)
static int luaglew_glMultTransposeMatrixf(lua_State *L) {
	glMultTransposeMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glMultTransposeMatrixfARB
// void glMultTransposeMatrixfARB (const GLfloat *)
static int luaglew_glMultTransposeMatrixfARB(lua_State *L) {
	glMultTransposeMatrixfARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glMultiDrawArrays
// void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
static int luaglew_glMultiDrawArrays(lua_State *L) {
	glMultiDrawArrays(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glMultiDrawArraysEXT
// void glMultiDrawArraysEXT (GLenum, const GLint *, const GLsizei *, GLsizei)
static int luaglew_glMultiDrawArraysEXT(lua_State *L) {
	glMultiDrawArraysEXT(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glMultiDrawElementArrayAPPLE
// void glMultiDrawElementArrayAPPLE (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
static int luaglew_glMultiDrawElementArrayAPPLE(lua_State *L) {
	glMultiDrawElementArrayAPPLE(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glMultiDrawElements
// void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
static int luaglew_glMultiDrawElements(lua_State *L) {
	glMultiDrawElements(luaL_checkint(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glMultiDrawElementsEXT
// void glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei)
static int luaglew_glMultiDrawElementsEXT(lua_State *L) {
	glMultiDrawElementsEXT(luaL_checkint(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glMultiDrawRangeElementArrayAPPLE
// void glMultiDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
static int luaglew_glMultiDrawRangeElementArrayAPPLE(lua_State *L) {
	glMultiDrawRangeElementArrayAPPLE(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
//####glMultiTexCoord1dARB
// void glMultiTexCoord1dARB (GLenum, GLdouble)
static int luaglew_glMultiTexCoord1dARB(lua_State *L) {
	glMultiTexCoord1dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1dvARB
// void glMultiTexCoord1dvARB (GLenum, const GLdouble *)
static int luaglew_glMultiTexCoord1dvARB(lua_State *L) {
	glMultiTexCoord1dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord1fARB
// void glMultiTexCoord1fARB (GLenum, GLfloat)
static int luaglew_glMultiTexCoord1fARB(lua_State *L) {
	glMultiTexCoord1fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glMultiTexCoord1fvARB
// void glMultiTexCoord1fvARB (GLenum, const GLfloat *)
static int luaglew_glMultiTexCoord1fvARB(lua_State *L) {
	glMultiTexCoord1fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord1iARB
// void glMultiTexCoord1iARB (GLenum, GLint)
static int luaglew_glMultiTexCoord1iARB(lua_State *L) {
	glMultiTexCoord1iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glMultiTexCoord1ivARB
// void glMultiTexCoord1ivARB (GLenum, const GLint *)
static int luaglew_glMultiTexCoord1ivARB(lua_State *L) {
	glMultiTexCoord1ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord1sARB
// void glMultiTexCoord1sARB (GLenum, GLshort)
static int luaglew_glMultiTexCoord1sARB(lua_State *L) {
	glMultiTexCoord1sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glMultiTexCoord1svARB
// void glMultiTexCoord1svARB (GLenum, const GLshort *)
static int luaglew_glMultiTexCoord1svARB(lua_State *L) {
	glMultiTexCoord1svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2dARB
// void glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble)
static int luaglew_glMultiTexCoord2dARB(lua_State *L) {
	glMultiTexCoord2dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2dvARB
// void glMultiTexCoord2dvARB (GLenum, const GLdouble *)
static int luaglew_glMultiTexCoord2dvARB(lua_State *L) {
	glMultiTexCoord2dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord2fARB
// void glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat)
static int luaglew_glMultiTexCoord2fARB(lua_State *L) {
	glMultiTexCoord2fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glMultiTexCoord2fvARB
// void glMultiTexCoord2fvARB (GLenum, const GLfloat *)
static int luaglew_glMultiTexCoord2fvARB(lua_State *L) {
	glMultiTexCoord2fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord2iARB
// void glMultiTexCoord2iARB (GLenum, GLint, GLint)
static int luaglew_glMultiTexCoord2iARB(lua_State *L) {
	glMultiTexCoord2iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glMultiTexCoord2ivARB
// void glMultiTexCoord2ivARB (GLenum, const GLint *)
static int luaglew_glMultiTexCoord2ivARB(lua_State *L) {
	glMultiTexCoord2ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord2sARB
// void glMultiTexCoord2sARB (GLenum, GLshort, GLshort)
static int luaglew_glMultiTexCoord2sARB(lua_State *L) {
	glMultiTexCoord2sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glMultiTexCoord2svARB
// void glMultiTexCoord2svARB (GLenum, const GLshort *)
static int luaglew_glMultiTexCoord2svARB(lua_State *L) {
	glMultiTexCoord2svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3dARB
// void glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble)
static int luaglew_glMultiTexCoord3dARB(lua_State *L) {
	glMultiTexCoord3dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3dvARB
// void glMultiTexCoord3dvARB (GLenum, const GLdouble *)
static int luaglew_glMultiTexCoord3dvARB(lua_State *L) {
	glMultiTexCoord3dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord3fARB
// void glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat)
static int luaglew_glMultiTexCoord3fARB(lua_State *L) {
	glMultiTexCoord3fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glMultiTexCoord3fvARB
// void glMultiTexCoord3fvARB (GLenum, const GLfloat *)
static int luaglew_glMultiTexCoord3fvARB(lua_State *L) {
	glMultiTexCoord3fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord3iARB
// void glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint)
static int luaglew_glMultiTexCoord3iARB(lua_State *L) {
	glMultiTexCoord3iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glMultiTexCoord3ivARB
// void glMultiTexCoord3ivARB (GLenum, const GLint *)
static int luaglew_glMultiTexCoord3ivARB(lua_State *L) {
	glMultiTexCoord3ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord3sARB
// void glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort)
static int luaglew_glMultiTexCoord3sARB(lua_State *L) {
	glMultiTexCoord3sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glMultiTexCoord3svARB
// void glMultiTexCoord3svARB (GLenum, const GLshort *)
static int luaglew_glMultiTexCoord3svARB(lua_State *L) {
	glMultiTexCoord3svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4dARB
// void glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
static int luaglew_glMultiTexCoord4dARB(lua_State *L) {
	glMultiTexCoord4dARB(luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4dvARB
// void glMultiTexCoord4dvARB (GLenum, const GLdouble *)
static int luaglew_glMultiTexCoord4dvARB(lua_State *L) {
	glMultiTexCoord4dvARB(luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glMultiTexCoord4fARB
// void glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
static int luaglew_glMultiTexCoord4fARB(lua_State *L) {
	glMultiTexCoord4fARB(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glMultiTexCoord4fvARB
// void glMultiTexCoord4fvARB (GLenum, const GLfloat *)
static int luaglew_glMultiTexCoord4fvARB(lua_State *L) {
	glMultiTexCoord4fvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glMultiTexCoord4i
// void glMultiTexCoord4i (GLenum target, GLint, GLint s, GLint t, GLint r)
static int luaglew_glMultiTexCoord4i(lua_State *L) {
	glMultiTexCoord4i(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glMultiTexCoord4iARB
// void glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint)
static int luaglew_glMultiTexCoord4iARB(lua_State *L) {
	glMultiTexCoord4iARB(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glMultiTexCoord4ivARB
// void glMultiTexCoord4ivARB (GLenum, const GLint *)
static int luaglew_glMultiTexCoord4ivARB(lua_State *L) {
	glMultiTexCoord4ivARB(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glMultiTexCoord4sARB
// void glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort)
static int luaglew_glMultiTexCoord4sARB(lua_State *L) {
	glMultiTexCoord4sARB(luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
//####glMultiTexCoord4svARB
// void glMultiTexCoord4svARB (GLenum, const GLshort *)
static int luaglew_glMultiTexCoord4svARB(lua_State *L) {
	glMultiTexCoord4svARB(luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glNewList
// void glNewList (GLuint list, GLenum mode)
static int luaglew_glNewList(lua_State *L) {
	glNewList((GLuint)luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glNormal3b
// void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz)
static int luaglew_glNormal3b(lua_State *L) {
	glNormal3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
//####glNormal3bv
// void glNormal3bv (const GLbyte *v)
static int luaglew_glNormal3bv(lua_State *L) {
	glNormal3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glNormal3d
// void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz)
static int luaglew_glNormal3d(lua_State *L) {
	glNormal3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glNormal3dv
// void glNormal3dv (const GLdouble *v)
static int luaglew_glNormal3dv(lua_State *L) {
	glNormal3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glNormal3f
// void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz)
static int luaglew_glNormal3f(lua_State *L) {
	glNormal3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glNormal3fv
// void glNormal3fv (const GLfloat *v)
static int luaglew_glNormal3fv(lua_State *L) {
	glNormal3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glNormal3i
// void glNormal3i (GLint nx, GLint ny, GLint nz)
static int luaglew_glNormal3i(lua_State *L) {
	glNormal3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glNormal3iv
// void glNormal3iv (const GLint *v)
static int luaglew_glNormal3iv(lua_State *L) {
	glNormal3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glNormal3s
// void glNormal3s (GLshort nx, GLshort ny, GLshort nz)
static int luaglew_glNormal3s(lua_State *L) {
	glNormal3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glNormal3sv
// void glNormal3sv (const GLshort *v)
static int luaglew_glNormal3sv(lua_State *L) {
	glNormal3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glNormalPointer
// void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glNormalPointer(lua_State *L) {
	glNormalPointer(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glOrtho
// void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
static int luaglew_glOrtho(lua_State *L) {
	glOrtho((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
//####glPassThrough
// void glPassThrough (GLfloat token)
static int luaglew_glPassThrough(lua_State *L) {
	glPassThrough((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glPixelMapfv
// void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values)
static int luaglew_glPixelMapfv(lua_State *L) {
	glPixelMapfv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glPixelMapuiv
// void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values)
static int luaglew_glPixelMapuiv(lua_State *L) {
	glPixelMapuiv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glPixelMapusv
// void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values)
static int luaglew_glPixelMapusv(lua_State *L) {
	glPixelMapusv(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLushort *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glPixelStoref
// void glPixelStoref (GLenum pname, GLfloat param)
static int luaglew_glPixelStoref(lua_State *L) {
	glPixelStoref(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPixelStorei
// void glPixelStorei (GLenum pname, GLint param)
static int luaglew_glPixelStorei(lua_State *L) {
	glPixelStorei(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glPixelTransferf
// void glPixelTransferf (GLenum pname, GLfloat param)
static int luaglew_glPixelTransferf(lua_State *L) {
	glPixelTransferf(luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPixelTransferi
// void glPixelTransferi (GLenum pname, GLint param)
static int luaglew_glPixelTransferi(lua_State *L) {
	glPixelTransferi(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glPixelZoom
// void glPixelZoom (GLfloat xfactor, GLfloat yfactor)
static int luaglew_glPixelZoom(lua_State *L) {
	glPixelZoom((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPointParameterfvARB
// void glPointParameterfvARB (GLenum pname, const GLfloat *params)
static int luaglew_glPointParameterfvARB(lua_State *L) {
	glPointParameterfvARB(luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glPointParameteriNV
// void glPointParameteriNV (GLenum pname, GLint param)
static int luaglew_glPointParameteriNV(lua_State *L) {
	glPointParameteriNV(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glPointParameterivNV
// void glPointParameterivNV (GLenum pname, const GLint *params)
static int luaglew_glPointParameterivNV(lua_State *L) {
	glPointParameterivNV(luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glPointSize
// void glPointSize (GLfloat size)
static int luaglew_glPointSize(lua_State *L) {
	glPointSize((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glPolygonMode
// void glPolygonMode (GLenum face, GLenum mode)
static int luaglew_glPolygonMode(lua_State *L) {
	glPolygonMode(luaL_checkint(L, 1), luaL_checkint(L, 2));
	return 0;
}
//####glPolygonOffset
// void glPolygonOffset (GLfloat factor, GLfloat units)
static int luaglew_glPolygonOffset(lua_State *L) {
	glPolygonOffset((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glPolygonStipple
// void glPolygonStipple (const GLubyte *mask)
static int luaglew_glPolygonStipple(lua_State *L) {
	glPolygonStipple((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glPopAttrib
// void glPopAttrib (void)
static int luaglew_glPopAttrib(lua_State *L) {
	glPopAttrib();
	return 0;
}
//####glPopClientAttrib
// void glPopClientAttrib (void)
static int luaglew_glPopClientAttrib(lua_State *L) {
	glPopClientAttrib();
	return 0;
}
//####glPopMatrix
// void glPopMatrix (void)
static int luaglew_glPopMatrix(lua_State *L) {
	glPopMatrix();
	return 0;
}
//####glPopName
// void glPopName (void)
static int luaglew_glPopName(lua_State *L) {
	glPopName();
	return 0;
}
//####glProgramEnvParameter4dARB
// void glProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
static int luaglew_glProgramEnvParameter4dARB(lua_State *L) {
	glProgramEnvParameter4dARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
//####glProgramEnvParameter4dvARB
// void glProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble *params)
static int luaglew_glProgramEnvParameter4dvARB(lua_State *L) {
	glProgramEnvParameter4dvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
//####glProgramEnvParameter4fARB
// void glProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
static int luaglew_glProgramEnvParameter4fARB(lua_State *L) {
	glProgramEnvParameter4fARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
//####glProgramEnvParameter4fvARB
// void glProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat *params)
static int luaglew_glProgramEnvParameter4fvARB(lua_State *L) {
	glProgramEnvParameter4fvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glProgramEnvParameters4fvEXT
// void glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params)
static int luaglew_glProgramEnvParameters4fvEXT(lua_State *L) {
	glProgramEnvParameters4fvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glProgramLocalParameter4dARB
// void glProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
static int luaglew_glProgramLocalParameter4dARB(lua_State *L) {
	glProgramLocalParameter4dARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
//####glProgramLocalParameter4dvARB
// void glProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble *params)
static int luaglew_glProgramLocalParameter4dvARB(lua_State *L) {
	glProgramLocalParameter4dvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
//####glProgramLocalParameter4fARB
// void glProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
static int luaglew_glProgramLocalParameter4fARB(lua_State *L) {
	glProgramLocalParameter4fARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
//####glProgramLocalParameter4fvARB
// void glProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat *params)
static int luaglew_glProgramLocalParameter4fvARB(lua_State *L) {
	glProgramLocalParameter4fvARB(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glProgramLocalParameters4fvEXT
// void glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params)
static int luaglew_glProgramLocalParameters4fvEXT(lua_State *L) {
	glProgramLocalParameters4fvEXT(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glProgramStringARB
// void glProgramStringARB (GLenum target, GLenum format, GLsizei len, const GLvoid *string)
static int luaglew_glProgramStringARB(lua_State *L) {
	glProgramStringARB(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glProvokingVertexEXT
// void glProvokingVertexEXT (GLenum mode)
static int luaglew_glProvokingVertexEXT(lua_State *L) {
	glProvokingVertexEXT(luaL_checkint(L, 1));
	return 0;
}
//####glPushAttrib
// void glPushAttrib (GLbitfield mask)
static int luaglew_glPushAttrib(lua_State *L) {
	glPushAttrib(luaL_checkint(L, 1));
	return 0;
}
//####glPushClientAttrib
// void glPushClientAttrib (GLbitfield mask)
static int luaglew_glPushClientAttrib(lua_State *L) {
	glPushClientAttrib(luaL_checkint(L, 1));
	return 0;
}
//####glPushMatrix
// void glPushMatrix (void)
static int luaglew_glPushMatrix(lua_State *L) {
	glPushMatrix();
	return 0;
}
//####glPushName
// void glPushName (GLuint name)
static int luaglew_glPushName(lua_State *L) {
	glPushName((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glRasterPos2d
// void glRasterPos2d (GLdouble x, GLdouble y)
static int luaglew_glRasterPos2d(lua_State *L) {
	glRasterPos2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glRasterPos2dv
// void glRasterPos2dv (const GLdouble *v)
static int luaglew_glRasterPos2dv(lua_State *L) {
	glRasterPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glRasterPos2f
// void glRasterPos2f (GLfloat x, GLfloat y)
static int luaglew_glRasterPos2f(lua_State *L) {
	glRasterPos2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glRasterPos2fv
// void glRasterPos2fv (const GLfloat *v)
static int luaglew_glRasterPos2fv(lua_State *L) {
	glRasterPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glRasterPos2i
// void glRasterPos2i (GLint x, GLint y)
static int luaglew_glRasterPos2i(lua_State *L) {
	glRasterPos2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glRasterPos2iv
// void glRasterPos2iv (const GLint *v)
static int luaglew_glRasterPos2iv(lua_State *L) {
	glRasterPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glRasterPos2s
// void glRasterPos2s (GLshort x, GLshort y)
static int luaglew_glRasterPos2s(lua_State *L) {
	glRasterPos2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glRasterPos2sv
// void glRasterPos2sv (const GLshort *v)
static int luaglew_glRasterPos2sv(lua_State *L) {
	glRasterPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glRasterPos3d
// void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glRasterPos3d(lua_State *L) {
	glRasterPos3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glRasterPos3dv
// void glRasterPos3dv (const GLdouble *v)
static int luaglew_glRasterPos3dv(lua_State *L) {
	glRasterPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glRasterPos3f
// void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glRasterPos3f(lua_State *L) {
	glRasterPos3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glRasterPos3fv
// void glRasterPos3fv (const GLfloat *v)
static int luaglew_glRasterPos3fv(lua_State *L) {
	glRasterPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glRasterPos3i
// void glRasterPos3i (GLint x, GLint y, GLint z)
static int luaglew_glRasterPos3i(lua_State *L) {
	glRasterPos3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glRasterPos3iv
// void glRasterPos3iv (const GLint *v)
static int luaglew_glRasterPos3iv(lua_State *L) {
	glRasterPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glRasterPos3s
// void glRasterPos3s (GLshort x, GLshort y, GLshort z)
static int luaglew_glRasterPos3s(lua_State *L) {
	glRasterPos3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glRasterPos3sv
// void glRasterPos3sv (const GLshort *v)
static int luaglew_glRasterPos3sv(lua_State *L) {
	glRasterPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glRasterPos4d
// void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
static int luaglew_glRasterPos4d(lua_State *L) {
	glRasterPos4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glRasterPos4dv
// void glRasterPos4dv (const GLdouble *v)
static int luaglew_glRasterPos4dv(lua_State *L) {
	glRasterPos4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glRasterPos4f
// void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
static int luaglew_glRasterPos4f(lua_State *L) {
	glRasterPos4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glRasterPos4fv
// void glRasterPos4fv (const GLfloat *v)
static int luaglew_glRasterPos4fv(lua_State *L) {
	glRasterPos4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glRasterPos4i
// void glRasterPos4i (GLint x, GLint y, GLint z, GLint w)
static int luaglew_glRasterPos4i(lua_State *L) {
	glRasterPos4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glRasterPos4iv
// void glRasterPos4iv (const GLint *v)
static int luaglew_glRasterPos4iv(lua_State *L) {
	glRasterPos4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glRasterPos4s
// void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w)
static int luaglew_glRasterPos4s(lua_State *L) {
	glRasterPos4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glRasterPos4sv
// void glRasterPos4sv (const GLshort *v)
static int luaglew_glRasterPos4sv(lua_State *L) {
	glRasterPos4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glReadBuffer
// void glReadBuffer (GLenum mode)
static int luaglew_glReadBuffer(lua_State *L) {
	glReadBuffer(luaL_checkint(L, 1));
	return 0;
}
//####glReadPixels
// void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
static int luaglew_glReadPixels(lua_State *L) {
	glReadPixels((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glRectd
// void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
static int luaglew_glRectd(lua_State *L) {
	glRectd((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glRectdv
// void glRectdv (const GLdouble *v1, const GLdouble *v2)
static int luaglew_glRectdv(lua_State *L) {
	glRectdv((GLdouble *)luaglew_checkarray_double(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glRectf
// void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
static int luaglew_glRectf(lua_State *L) {
	glRectf((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glRectfv
// void glRectfv (const GLfloat *v1, const GLfloat *v2)
static int luaglew_glRectfv(lua_State *L) {
	glRectfv((GLfloat *)luaglew_checkarray_float(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glRecti
// void glRecti (GLint x1, GLint y1, GLint x2, GLint y2)
static int luaglew_glRecti(lua_State *L) {
	glRecti((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glRectiv
// void glRectiv (const GLint *v1, const GLint *v2)
static int luaglew_glRectiv(lua_State *L) {
	glRectiv((GLint *)luaglew_checkarray_int(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glRects
// void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2)
static int luaglew_glRects(lua_State *L) {
	glRects((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glRectsv
// void glRectsv (const GLshort *v1, const GLshort *v2)
static int luaglew_glRectsv(lua_State *L) {
	glRectsv((GLshort *)luaglew_checkarray_int(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glRenderbufferStorage
// void glRenderbufferStorage (GLenum, GLenum, GLsizei, GLsizei)
static int luaglew_glRenderbufferStorage(lua_State *L) {
	glRenderbufferStorage(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glRenderbufferStorageEXT
// void glRenderbufferStorageEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
static int luaglew_glRenderbufferStorageEXT(lua_State *L) {
	glRenderbufferStorageEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glRenderbufferStorageMultisample
// void glRenderbufferStorageMultisample (GLenum, GLsizei, GLenum, GLsizei, GLsizei)
static int luaglew_glRenderbufferStorageMultisample(lua_State *L) {
	glRenderbufferStorageMultisample(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glRenderbufferStorageMultisampleEXT
// void glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
static int luaglew_glRenderbufferStorageMultisampleEXT(lua_State *L) {
	glRenderbufferStorageMultisampleEXT(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
//####glRotated
// void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glRotated(lua_State *L) {
	glRotated((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glRotatef
// void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glRotatef(lua_State *L) {
	glRotatef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glSampleCoverageARB
// void glSampleCoverageARB (GLclampf, GLboolean)
static int luaglew_glSampleCoverageARB(lua_State *L) {
	glSampleCoverageARB((GLclampf)luaL_checknumber(L, 1), (GLboolean)lua_toboolean(L, 2));
	return 0;
}
//####glScaled
// void glScaled (GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glScaled(lua_State *L) {
	glScaled((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glScalef
// void glScalef (GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glScalef(lua_State *L) {
	glScalef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glScissor
// void glScissor (GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glScissor(lua_State *L) {
	glScissor((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glSecondaryColor3bEXT
// void glSecondaryColor3bEXT (GLbyte, GLbyte, GLbyte)
static int luaglew_glSecondaryColor3bEXT(lua_State *L) {
	glSecondaryColor3bEXT((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3bvEXT
// void glSecondaryColor3bvEXT (const GLbyte *)
static int luaglew_glSecondaryColor3bvEXT(lua_State *L) {
	glSecondaryColor3bvEXT((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
//####glSecondaryColor3dEXT
// void glSecondaryColor3dEXT (GLdouble, GLdouble, GLdouble)
static int luaglew_glSecondaryColor3dEXT(lua_State *L) {
	glSecondaryColor3dEXT((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3dvEXT
// void glSecondaryColor3dvEXT (const GLdouble *)
static int luaglew_glSecondaryColor3dvEXT(lua_State *L) {
	glSecondaryColor3dvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glSecondaryColor3fEXT
// void glSecondaryColor3fEXT (GLfloat, GLfloat, GLfloat)
static int luaglew_glSecondaryColor3fEXT(lua_State *L) {
	glSecondaryColor3fEXT((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3fvEXT
// void glSecondaryColor3fvEXT (const GLfloat *)
static int luaglew_glSecondaryColor3fvEXT(lua_State *L) {
	glSecondaryColor3fvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glSecondaryColor3iEXT
// void glSecondaryColor3iEXT (GLint, GLint, GLint)
static int luaglew_glSecondaryColor3iEXT(lua_State *L) {
	glSecondaryColor3iEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3ivEXT
// void glSecondaryColor3ivEXT (const GLint *)
static int luaglew_glSecondaryColor3ivEXT(lua_State *L) {
	glSecondaryColor3ivEXT((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3sEXT
// void glSecondaryColor3sEXT (GLshort, GLshort, GLshort)
static int luaglew_glSecondaryColor3sEXT(lua_State *L) {
	glSecondaryColor3sEXT((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3svEXT
// void glSecondaryColor3svEXT (const GLshort *)
static int luaglew_glSecondaryColor3svEXT(lua_State *L) {
	glSecondaryColor3svEXT((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3ubEXT
// void glSecondaryColor3ubEXT (GLubyte, GLubyte, GLubyte)
static int luaglew_glSecondaryColor3ubEXT(lua_State *L) {
	glSecondaryColor3ubEXT((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
//####glSecondaryColor3ubvEXT
// void glSecondaryColor3ubvEXT (const GLubyte *)
static int luaglew_glSecondaryColor3ubvEXT(lua_State *L) {
	glSecondaryColor3ubvEXT((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
//####glSecondaryColor3uiEXT
// void glSecondaryColor3uiEXT (GLuint, GLuint, GLuint)
static int luaglew_glSecondaryColor3uiEXT(lua_State *L) {
	glSecondaryColor3uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glSecondaryColor3uivEXT
// void glSecondaryColor3uivEXT (const GLuint *)
static int luaglew_glSecondaryColor3uivEXT(lua_State *L) {
	glSecondaryColor3uivEXT((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColor3usEXT
// void glSecondaryColor3usEXT (GLushort, GLushort, GLushort)
static int luaglew_glSecondaryColor3usEXT(lua_State *L) {
	glSecondaryColor3usEXT((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
//####glSecondaryColor3usvEXT
// void glSecondaryColor3usvEXT (const GLushort *)
static int luaglew_glSecondaryColor3usvEXT(lua_State *L) {
	glSecondaryColor3usvEXT((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glSecondaryColorPointer
// void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glSecondaryColorPointer(lua_State *L) {
	glSecondaryColorPointer((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glSecondaryColorPointerEXT
// void glSecondaryColorPointerEXT (GLint, GLenum, GLsizei, const GLvoid *)
static int luaglew_glSecondaryColorPointerEXT(lua_State *L) {
	glSecondaryColorPointerEXT((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glSelectBuffer
// void glSelectBuffer (GLsizei size, GLuint *buffer)
static int luaglew_glSelectBuffer(lua_State *L) {
	glSelectBuffer((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glSetFenceAPPLE
// void glSetFenceAPPLE (GLuint fence)
static int luaglew_glSetFenceAPPLE(lua_State *L) {
	glSetFenceAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glShadeModel
// void glShadeModel (GLenum mode)
static int luaglew_glShadeModel(lua_State *L) {
	glShadeModel(luaL_checkint(L, 1));
	return 0;
}
//####glShaderSource
// void glShaderSource (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length)
static int luaglew_glShaderSource(lua_State *L) {
	glShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar *)luaglew_checkarray_char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glShaderSourceARB
// void glShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length)
static int luaglew_glShaderSourceARB(lua_State *L) {
	glShaderSourceARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
//####glStencilFunc
// void glStencilFunc (GLenum func, GLint ref, GLuint mask)
static int luaglew_glStencilFunc(lua_State *L) {
	glStencilFunc(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glStencilFuncSeparate
// void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask)
static int luaglew_glStencilFuncSeparate(lua_State *L) {
	glStencilFuncSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
//####glStencilMask
// void glStencilMask (GLuint mask)
static int luaglew_glStencilMask(lua_State *L) {
	glStencilMask((GLuint)luaL_checkint(L, 1));
	return 0;
}
//####glStencilMaskSeparate
// void glStencilMaskSeparate (GLenum face, GLuint mask)
static int luaglew_glStencilMaskSeparate(lua_State *L) {
	glStencilMaskSeparate(luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
//####glStencilOp
// void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass)
static int luaglew_glStencilOp(lua_State *L) {
	glStencilOp(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3));
	return 0;
}
//####glStencilOpSeparate
// void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
static int luaglew_glStencilOpSeparate(lua_State *L) {
	glStencilOpSeparate(luaL_checkint(L, 1), luaL_checkint(L, 2), luaL_checkint(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glTexCoord1d
// void glTexCoord1d (GLdouble s)
static int luaglew_glTexCoord1d(lua_State *L) {
	glTexCoord1d((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
//####glTexCoord1dv
// void glTexCoord1dv (const GLdouble *v)
static int luaglew_glTexCoord1dv(lua_State *L) {
	glTexCoord1dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glTexCoord1f
// void glTexCoord1f (GLfloat s)
static int luaglew_glTexCoord1f(lua_State *L) {
	glTexCoord1f((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
//####glTexCoord1fv
// void glTexCoord1fv (const GLfloat *v)
static int luaglew_glTexCoord1fv(lua_State *L) {
	glTexCoord1fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glTexCoord1i
// void glTexCoord1i (GLint s)
static int luaglew_glTexCoord1i(lua_State *L) {
	glTexCoord1i((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glTexCoord1iv
// void glTexCoord1iv (const GLint *v)
static int luaglew_glTexCoord1iv(lua_State *L) {
	glTexCoord1iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord1s
// void glTexCoord1s (GLshort s)
static int luaglew_glTexCoord1s(lua_State *L) {
	glTexCoord1s((GLshort)luaL_checkinteger(L, 1));
	return 0;
}
//####glTexCoord1sv
// void glTexCoord1sv (const GLshort *v)
static int luaglew_glTexCoord1sv(lua_State *L) {
	glTexCoord1sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord2d
// void glTexCoord2d (GLdouble s, GLdouble t)
static int luaglew_glTexCoord2d(lua_State *L) {
	glTexCoord2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glTexCoord2dv
// void glTexCoord2dv (const GLdouble *v)
static int luaglew_glTexCoord2dv(lua_State *L) {
	glTexCoord2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glTexCoord2f
// void glTexCoord2f (GLfloat s, GLfloat t)
static int luaglew_glTexCoord2f(lua_State *L) {
	glTexCoord2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glTexCoord2fv
// void glTexCoord2fv (const GLfloat *v)
static int luaglew_glTexCoord2fv(lua_State *L) {
	glTexCoord2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glTexCoord2i
// void glTexCoord2i (GLint s, GLint t)
static int luaglew_glTexCoord2i(lua_State *L) {
	glTexCoord2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glTexCoord2iv
// void glTexCoord2iv (const GLint *v)
static int luaglew_glTexCoord2iv(lua_State *L) {
	glTexCoord2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord2s
// void glTexCoord2s (GLshort s, GLshort t)
static int luaglew_glTexCoord2s(lua_State *L) {
	glTexCoord2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glTexCoord2sv
// void glTexCoord2sv (const GLshort *v)
static int luaglew_glTexCoord2sv(lua_State *L) {
	glTexCoord2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord3d
// void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r)
static int luaglew_glTexCoord3d(lua_State *L) {
	glTexCoord3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glTexCoord3dv
// void glTexCoord3dv (const GLdouble *v)
static int luaglew_glTexCoord3dv(lua_State *L) {
	glTexCoord3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glTexCoord3f
// void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r)
static int luaglew_glTexCoord3f(lua_State *L) {
	glTexCoord3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glTexCoord3fv
// void glTexCoord3fv (const GLfloat *v)
static int luaglew_glTexCoord3fv(lua_State *L) {
	glTexCoord3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glTexCoord3i
// void glTexCoord3i (GLint s, GLint t, GLint r)
static int luaglew_glTexCoord3i(lua_State *L) {
	glTexCoord3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glTexCoord3iv
// void glTexCoord3iv (const GLint *v)
static int luaglew_glTexCoord3iv(lua_State *L) {
	glTexCoord3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord3s
// void glTexCoord3s (GLshort s, GLshort t, GLshort r)
static int luaglew_glTexCoord3s(lua_State *L) {
	glTexCoord3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glTexCoord3sv
// void glTexCoord3sv (const GLshort *v)
static int luaglew_glTexCoord3sv(lua_State *L) {
	glTexCoord3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord4d
// void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q)
static int luaglew_glTexCoord4d(lua_State *L) {
	glTexCoord4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glTexCoord4dv
// void glTexCoord4dv (const GLdouble *v)
static int luaglew_glTexCoord4dv(lua_State *L) {
	glTexCoord4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glTexCoord4f
// void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q)
static int luaglew_glTexCoord4f(lua_State *L) {
	glTexCoord4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glTexCoord4fv
// void glTexCoord4fv (const GLfloat *v)
static int luaglew_glTexCoord4fv(lua_State *L) {
	glTexCoord4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glTexCoord4i
// void glTexCoord4i (GLint s, GLint t, GLint r, GLint q)
static int luaglew_glTexCoord4i(lua_State *L) {
	glTexCoord4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glTexCoord4iv
// void glTexCoord4iv (const GLint *v)
static int luaglew_glTexCoord4iv(lua_State *L) {
	glTexCoord4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoord4s
// void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q)
static int luaglew_glTexCoord4s(lua_State *L) {
	glTexCoord4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glTexCoord4sv
// void glTexCoord4sv (const GLshort *v)
static int luaglew_glTexCoord4sv(lua_State *L) {
	glTexCoord4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glTexCoordPointer
// void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glTexCoordPointer(lua_State *L) {
	glTexCoordPointer((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glTexEnvf
// void glTexEnvf (GLenum target, GLenum pname, GLfloat param)
static int luaglew_glTexEnvf(lua_State *L) {
	glTexEnvf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glTexEnvfv
// void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params)
static int luaglew_glTexEnvfv(lua_State *L) {
	glTexEnvfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glTexEnvi
// void glTexEnvi (GLenum target, GLenum pname, GLint param)
static int luaglew_glTexEnvi(lua_State *L) {
	glTexEnvi(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glTexEnviv
// void glTexEnviv (GLenum target, GLenum pname, const GLint *params)
static int luaglew_glTexEnviv(lua_State *L) {
	glTexEnviv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexGend
// void glTexGend (GLenum coord, GLenum pname, GLdouble param)
static int luaglew_glTexGend(lua_State *L) {
	glTexGend(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glTexGendv
// void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params)
static int luaglew_glTexGendv(lua_State *L) {
	glTexGendv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
//####glTexGenf
// void glTexGenf (GLenum coord, GLenum pname, GLfloat param)
static int luaglew_glTexGenf(lua_State *L) {
	glTexGenf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glTexGenfv
// void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params)
static int luaglew_glTexGenfv(lua_State *L) {
	glTexGenfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glTexGeni
// void glTexGeni (GLenum coord, GLenum pname, GLint param)
static int luaglew_glTexGeni(lua_State *L) {
	glTexGeni(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glTexGeniv
// void glTexGeniv (GLenum coord, GLenum pname, const GLint *params)
static int luaglew_glTexGeniv(lua_State *L) {
	glTexGeniv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexImage1D
// void glTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexImage1D(lua_State *L) {
	glTexImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), luaL_checkint(L, 6), luaL_checkint(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
//####glTexImage2D
// void glTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexImage2D(lua_State *L) {
	glTexImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), luaL_checkint(L, 7), luaL_checkint(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glTexImage3D
// void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexImage3D(lua_State *L) {
	glTexImage3D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), luaL_checkint(L, 8), luaL_checkint(L, 9), (GLvoid *)luaglew_checkarray_void(L, 10));
	return 0;
}
//####glTexParameterIivEXT
// void glTexParameterIivEXT ( GLenum target, GLenum pname, GLint *params )
static int luaglew_glTexParameterIivEXT(lua_State *L) {
	glTexParameterIivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexParameterIuivEXT
// void glTexParameterIuivEXT ( GLenum target, GLenum pname, GLuint *params )
static int luaglew_glTexParameterIuivEXT(lua_State *L) {
	glTexParameterIuivEXT(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexParameterf
// void glTexParameterf (GLenum target, GLenum pname, GLfloat param)
static int luaglew_glTexParameterf(lua_State *L) {
	glTexParameterf(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glTexParameterfv
// void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params)
static int luaglew_glTexParameterfv(lua_State *L) {
	glTexParameterfv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glTexParameteri
// void glTexParameteri (GLenum target, GLenum pname, GLint param)
static int luaglew_glTexParameteri(lua_State *L) {
	glTexParameteri(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glTexParameteriv
// void glTexParameteriv (GLenum target, GLenum pname, const GLint *params)
static int luaglew_glTexParameteriv(lua_State *L) {
	glTexParameteriv(luaL_checkint(L, 1), luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glTexSubImage1D
// void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexSubImage1D(lua_State *L) {
	glTexSubImage1D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaL_checkint(L, 5), luaL_checkint(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
//####glTexSubImage2D
// void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
static int luaglew_glTexSubImage2D(lua_State *L) {
	glTexSubImage2D(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaL_checkint(L, 7), luaL_checkint(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
//####glTextureRangeAPPLE
// void glTextureRangeAPPLE (GLenum target, GLsizei length, const GLvoid *pointer)
static int luaglew_glTextureRangeAPPLE(lua_State *L) {
	glTextureRangeAPPLE(luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
//####glTransformFeedbackVaryingsEXT
// void glTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar **varyings, GLenum bufferMode)
static int luaglew_glTransformFeedbackVaryingsEXT(lua_State *L) {
	glTransformFeedbackVaryingsEXT((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), luaL_checkint(L, 4));
	return 0;
}
//####glTranslated
// void glTranslated (GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glTranslated(lua_State *L) {
	glTranslated((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glTranslatef
// void glTranslatef (GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glTranslatef(lua_State *L) {
	glTranslatef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glUniform1fARB
// void glUniform1fARB (GLint location, GLfloat v0)
static int luaglew_glUniform1fARB(lua_State *L) {
	glUniform1fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glUniform1fv
// void glUniform1fv (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform1fv(lua_State *L) {
	glUniform1fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform1fvARB
// void glUniform1fvARB (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform1fvARB(lua_State *L) {
	glUniform1fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform1iARB
// void glUniform1iARB (GLint location, GLint v0)
static int luaglew_glUniform1iARB(lua_State *L) {
	glUniform1iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glUniform1iv
// void glUniform1iv (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform1iv(lua_State *L) {
	glUniform1iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform1ivARB
// void glUniform1ivARB (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform1ivARB(lua_State *L) {
	glUniform1ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform2fARB
// void glUniform2fARB (GLint location, GLfloat v0, GLfloat v1)
static int luaglew_glUniform2fARB(lua_State *L) {
	glUniform2fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glUniform2fv
// void glUniform2fv (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform2fv(lua_State *L) {
	glUniform2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform2fvARB
// void glUniform2fvARB (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform2fvARB(lua_State *L) {
	glUniform2fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform2iARB
// void glUniform2iARB (GLint location, GLint v0, GLint v1)
static int luaglew_glUniform2iARB(lua_State *L) {
	glUniform2iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glUniform2ivARB
// void glUniform2ivARB (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform2ivARB(lua_State *L) {
	glUniform2ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform3fARB
// void glUniform3fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
static int luaglew_glUniform3fARB(lua_State *L) {
	glUniform3fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glUniform3fv
// void glUniform3fv (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform3fv(lua_State *L) {
	glUniform3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform3fvARB
// void glUniform3fvARB (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform3fvARB(lua_State *L) {
	glUniform3fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform3iARB
// void glUniform3iARB (GLint location, GLint v0, GLint v1, GLint v2)
static int luaglew_glUniform3iARB(lua_State *L) {
	glUniform3iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glUniform3iv
// void glUniform3iv (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform3iv(lua_State *L) {
	glUniform3iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform3ivARB
// void glUniform3ivARB (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform3ivARB(lua_State *L) {
	glUniform3ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform4fARB
// void glUniform4fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
static int luaglew_glUniform4fARB(lua_State *L) {
	glUniform4fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
//####glUniform4fv
// void glUniform4fv (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform4fv(lua_State *L) {
	glUniform4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform4fvARB
// void glUniform4fvARB (GLint location, GLsizei count, const GLfloat *value)
static int luaglew_glUniform4fvARB(lua_State *L) {
	glUniform4fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
//####glUniform4iARB
// void glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
static int luaglew_glUniform4iARB(lua_State *L) {
	glUniform4iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
//####glUniform4iv
// void glUniform4iv (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform4iv(lua_State *L) {
	glUniform4iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniform4ivARB
// void glUniform4ivARB (GLint location, GLsizei count, const GLint *value)
static int luaglew_glUniform4ivARB(lua_State *L) {
	glUniform4ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
//####glUniformBlockBinding
// void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
static int luaglew_glUniformBlockBinding(lua_State *L) {
	glUniformBlockBinding((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
//####glUniformMatrix2fv
// void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix2fv(lua_State *L) {
	glUniformMatrix2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix2fvARB
// void glUniformMatrix2fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix2fvARB(lua_State *L) {
	glUniformMatrix2fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix3fv
// void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix3fvARB
// void glUniformMatrix3fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix3fvARB(lua_State *L) {
	glUniformMatrix3fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix4fv
// void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix4fv(lua_State *L) {
	glUniformMatrix4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUniformMatrix4fvARB
// void glUniformMatrix4fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
static int luaglew_glUniformMatrix4fvARB(lua_State *L) {
	glUniformMatrix4fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
//####glUnlockArraysEXT
// void glUnlockArraysEXT (void)
static int luaglew_glUnlockArraysEXT(lua_State *L) {
	glUnlockArraysEXT();
	return 0;
}
//####glUseProgramObjectARB
// void glUseProgramObjectARB (GLhandleARB programObj)
static int luaglew_glUseProgramObjectARB(lua_State *L) {
	glUseProgramObjectARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glValidateProgramARB
// void glValidateProgramARB (GLhandleARB programObj)
static int luaglew_glValidateProgramARB(lua_State *L) {
	glValidateProgramARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
//####glVertex2d
// void glVertex2d (GLdouble x, GLdouble y)
static int luaglew_glVertex2d(lua_State *L) {
	glVertex2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glVertex2dv
// void glVertex2dv (const GLdouble *v)
static int luaglew_glVertex2dv(lua_State *L) {
	glVertex2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glVertex2f
// void glVertex2f (GLfloat x, GLfloat y)
static int luaglew_glVertex2f(lua_State *L) {
	glVertex2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glVertex2fv
// void glVertex2fv (const GLfloat *v)
static int luaglew_glVertex2fv(lua_State *L) {
	glVertex2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glVertex2i
// void glVertex2i (GLint x, GLint y)
static int luaglew_glVertex2i(lua_State *L) {
	glVertex2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glVertex2iv
// void glVertex2iv (const GLint *v)
static int luaglew_glVertex2iv(lua_State *L) {
	glVertex2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertex2s
// void glVertex2s (GLshort x, GLshort y)
static int luaglew_glVertex2s(lua_State *L) {
	glVertex2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glVertex2sv
// void glVertex2sv (const GLshort *v)
static int luaglew_glVertex2sv(lua_State *L) {
	glVertex2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertex3d
// void glVertex3d (GLdouble x, GLdouble y, GLdouble z)
static int luaglew_glVertex3d(lua_State *L) {
	glVertex3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glVertex3dv
// void glVertex3dv (const GLdouble *v)
static int luaglew_glVertex3dv(lua_State *L) {
	glVertex3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glVertex3f
// void glVertex3f (GLfloat x, GLfloat y, GLfloat z)
static int luaglew_glVertex3f(lua_State *L) {
	glVertex3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glVertex3fv
// void glVertex3fv (const GLfloat *v)
static int luaglew_glVertex3fv(lua_State *L) {
	glVertex3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glVertex3i
// void glVertex3i (GLint x, GLint y, GLint z)
static int luaglew_glVertex3i(lua_State *L) {
	glVertex3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glVertex3iv
// void glVertex3iv (const GLint *v)
static int luaglew_glVertex3iv(lua_State *L) {
	glVertex3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertex3s
// void glVertex3s (GLshort x, GLshort y, GLshort z)
static int luaglew_glVertex3s(lua_State *L) {
	glVertex3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glVertex3sv
// void glVertex3sv (const GLshort *v)
static int luaglew_glVertex3sv(lua_State *L) {
	glVertex3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertex4d
// void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
static int luaglew_glVertex4d(lua_State *L) {
	glVertex4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
//####glVertex4dv
// void glVertex4dv (const GLdouble *v)
static int luaglew_glVertex4dv(lua_State *L) {
	glVertex4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glVertex4f
// void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
static int luaglew_glVertex4f(lua_State *L) {
	glVertex4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
//####glVertex4fv
// void glVertex4fv (const GLfloat *v)
static int luaglew_glVertex4fv(lua_State *L) {
	glVertex4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glVertex4i
// void glVertex4i (GLint x, GLint y, GLint z, GLint w)
static int luaglew_glVertex4i(lua_State *L) {
	glVertex4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
//####glVertex4iv
// void glVertex4iv (const GLint *v)
static int luaglew_glVertex4iv(lua_State *L) {
	glVertex4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertex4s
// void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w)
static int luaglew_glVertex4s(lua_State *L) {
	glVertex4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
//####glVertex4sv
// void glVertex4sv (const GLshort *v)
static int luaglew_glVertex4sv(lua_State *L) {
	glVertex4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glVertexArrayParameteriAPPLE
// void glVertexArrayParameteriAPPLE (GLenum pname, GLint param)
static int luaglew_glVertexArrayParameteriAPPLE(lua_State *L) {
	glVertexArrayParameteriAPPLE(luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glVertexArrayRangeAPPLE
// void glVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
static int luaglew_glVertexArrayRangeAPPLE(lua_State *L) {
	glVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
//####glVertexBlendARB
// void glVertexBlendARB (GLint)
static int luaglew_glVertexBlendARB(lua_State *L) {
	glVertexBlendARB((GLint)luaL_checkint(L, 1));
	return 0;
}
//####glVertexPointer
// void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
static int luaglew_glVertexPointer(lua_State *L) {
	glVertexPointer((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glViewport
// void glViewport (GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glViewport(lua_State *L) {
	glViewport((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####glWeightPointerARB
// void glWeightPointerARB (GLint, GLenum, GLsizei, const GLvoid *)
static int luaglew_glWeightPointerARB(lua_State *L) {
	glWeightPointerARB((GLint)luaL_checkint(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
//####glWeightbvARB
// void glWeightbvARB (GLint, const GLbyte *)
static int luaglew_glWeightbvARB(lua_State *L) {
	glWeightbvARB((GLint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
//####glWeightdvARB
// void glWeightdvARB (GLint, const GLdouble *)
static int luaglew_glWeightdvARB(lua_State *L) {
	glWeightdvARB((GLint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
//####glWeightfvARB
// void glWeightfvARB (GLint, const GLfloat *)
static int luaglew_glWeightfvARB(lua_State *L) {
	glWeightfvARB((GLint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
//####glWeightivARB
// void glWeightivARB (GLint, const GLint *)
static int luaglew_glWeightivARB(lua_State *L) {
	glWeightivARB((GLint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightsvARB
// void glWeightsvARB (GLint, const GLshort *)
static int luaglew_glWeightsvARB(lua_State *L) {
	glWeightsvARB((GLint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightubvARB
// void glWeightubvARB (GLint, const GLubyte *)
static int luaglew_glWeightubvARB(lua_State *L) {
	glWeightubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
//####glWeightuivARB
// void glWeightuivARB (GLint, const GLuint *)
static int luaglew_glWeightuivARB(lua_State *L) {
	glWeightuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWeightusvARB
// void glWeightusvARB (GLint, const GLushort *)
static int luaglew_glWeightusvARB(lua_State *L) {
	glWeightusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
//####glWindowPos2dARB
// void glWindowPos2dARB (GLdouble, GLdouble)
static int luaglew_glWindowPos2dARB(lua_State *L) {
	glWindowPos2dARB((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
//####glWindowPos2dv
// void glWindowPos2dv (const GLdouble *v)
static int luaglew_glWindowPos2dv(lua_State *L) {
	glWindowPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos2dvARB
// void glWindowPos2dvARB (const GLdouble *)
static int luaglew_glWindowPos2dvARB(lua_State *L) {
	glWindowPos2dvARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos2fARB
// void glWindowPos2fARB (GLfloat, GLfloat)
static int luaglew_glWindowPos2fARB(lua_State *L) {
	glWindowPos2fARB((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
//####glWindowPos2fv
// void glWindowPos2fv (const GLfloat *v)
static int luaglew_glWindowPos2fv(lua_State *L) {
	glWindowPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos2fvARB
// void glWindowPos2fvARB (const GLfloat *)
static int luaglew_glWindowPos2fvARB(lua_State *L) {
	glWindowPos2fvARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos2iARB
// void glWindowPos2iARB (GLint, GLint)
static int luaglew_glWindowPos2iARB(lua_State *L) {
	glWindowPos2iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
//####glWindowPos2iv
// void glWindowPos2iv (const GLint *v)
static int luaglew_glWindowPos2iv(lua_State *L) {
	glWindowPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos2ivARB
// void glWindowPos2ivARB (const GLint *)
static int luaglew_glWindowPos2ivARB(lua_State *L) {
	glWindowPos2ivARB((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos2sARB
// void glWindowPos2sARB (GLshort, GLshort)
static int luaglew_glWindowPos2sARB(lua_State *L) {
	glWindowPos2sARB((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
//####glWindowPos2sv
// void glWindowPos2sv (const GLshort *v)
static int luaglew_glWindowPos2sv(lua_State *L) {
	glWindowPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos2svARB
// void glWindowPos2svARB (const GLshort *)
static int luaglew_glWindowPos2svARB(lua_State *L) {
	glWindowPos2svARB((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3dARB
// void glWindowPos3dARB (GLdouble, GLdouble, GLdouble)
static int luaglew_glWindowPos3dARB(lua_State *L) {
	glWindowPos3dARB((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
//####glWindowPos3dv
// void glWindowPos3dv (const GLdouble *v)
static int luaglew_glWindowPos3dv(lua_State *L) {
	glWindowPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos3dvARB
// void glWindowPos3dvARB (const GLdouble *)
static int luaglew_glWindowPos3dvARB(lua_State *L) {
	glWindowPos3dvARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
//####glWindowPos3fARB
// void glWindowPos3fARB (GLfloat, GLfloat, GLfloat)
static int luaglew_glWindowPos3fARB(lua_State *L) {
	glWindowPos3fARB((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
//####glWindowPos3fv
// void glWindowPos3fv (const GLfloat *v)
static int luaglew_glWindowPos3fv(lua_State *L) {
	glWindowPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos3fvARB
// void glWindowPos3fvARB (const GLfloat *)
static int luaglew_glWindowPos3fvARB(lua_State *L) {
	glWindowPos3fvARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
//####glWindowPos3iARB
// void glWindowPos3iARB (GLint, GLint, GLint)
static int luaglew_glWindowPos3iARB(lua_State *L) {
	glWindowPos3iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
//####glWindowPos3iv
// void glWindowPos3iv (const GLint *v)
static int luaglew_glWindowPos3iv(lua_State *L) {
	glWindowPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3ivARB
// void glWindowPos3ivARB (const GLint *)
static int luaglew_glWindowPos3ivARB(lua_State *L) {
	glWindowPos3ivARB((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3sARB
// void glWindowPos3sARB (GLshort, GLshort, GLshort)
static int luaglew_glWindowPos3sARB(lua_State *L) {
	glWindowPos3sARB((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
//####glWindowPos3sv
// void glWindowPos3sv (const GLshort *v)
static int luaglew_glWindowPos3sv(lua_State *L) {
	glWindowPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glWindowPos3svARB
// void glWindowPos3svARB (const GLshort *)
static int luaglew_glWindowPos3svARB(lua_State *L) {
	glWindowPos3svARB((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
//####glAddSwapHintRectWIN
// void glAddSwapHintRectWIN (GLint x, GLint y, GLsizei width, GLsizei height)
static int luaglew_glAddSwapHintRectWIN(lua_State *L) {
	glAddSwapHintRectWIN((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
//####wglAllocateMemoryNV
// void * wglAllocateMemoryNV (GLsizei size, GLfloat readFrequency, GLfloat writeFrequency, GLfloat priority)
static int luaglew_wglAllocateMemoryNV(lua_State *L) {
	void * return_value;
	return_value = wglAllocateMemoryNV((GLsizei)luaL_checklong(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
//####wglFreeMemoryNV
// void wglFreeMemoryNV (void *pointer)
static int luaglew_wglFreeMemoryNV(lua_State *L) {
	wglFreeMemoryNV(luaglew_checkarray_void(L, 1));
	return 0;
}

