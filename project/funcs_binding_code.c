//####glTextureRangeAPPLE
// void glTextureRangeAPPLE (GLenum target, GLsizei length, GLvoid *pointer)
#ifdef glTextureRangeAPPLE
static int luaglew_glTextureRangeAPPLE(lua_State *L) {
	glTextureRangeAPPLE(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterPointervAPPLE
// void glGetTexParameterPointervAPPLE (GLenum target, GLenum pname, GLvoid **params)
#ifdef glGetTexParameterPointervAPPLE
static int luaglew_glGetTexParameterPointervAPPLE(lua_State *L) {
	glGetTexParameterPointervAPPLE(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glColorTable
// void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
#ifdef glColorTable
static int luaglew_glColorTable(lua_State *L) {
	glColorTable(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glColorSubTable
// void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
#ifdef glColorSubTable
static int luaglew_glColorSubTable(lua_State *L) {
	glColorSubTable(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glColorTableParameteriv
// void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params)
#ifdef glColorTableParameteriv
static int luaglew_glColorTableParameteriv(lua_State *L) {
	glColorTableParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glColorTableParameterfv
// void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params)
#ifdef glColorTableParameterfv
static int luaglew_glColorTableParameterfv(lua_State *L) {
	glColorTableParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glCopyColorSubTable
// void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
#ifdef glCopyColorSubTable
static int luaglew_glCopyColorSubTable(lua_State *L) {
	glCopyColorSubTable(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glCopyColorTable
// void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
#ifdef glCopyColorTable
static int luaglew_glCopyColorTable(lua_State *L) {
	glCopyColorTable(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glGetColorTable
// void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table)
#ifdef glGetColorTable
static int luaglew_glGetColorTable(lua_State *L) {
	glGetColorTable(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetColorTableParameterfv
// void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetColorTableParameterfv
static int luaglew_glGetColorTableParameterfv(lua_State *L) {
	glGetColorTableParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetColorTableParameteriv
// void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetColorTableParameteriv
static int luaglew_glGetColorTableParameteriv(lua_State *L) {
	glGetColorTableParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glHistogram
// void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
#ifdef glHistogram
static int luaglew_glHistogram(lua_State *L) {
	glHistogram(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLboolean)lua_toboolean(L, 4));
	return 0;
}
#endif

//####glResetHistogram
// void glResetHistogram (GLenum target)
#ifdef glResetHistogram
static int luaglew_glResetHistogram(lua_State *L) {
	glResetHistogram(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glGetHistogram
// void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
#ifdef glGetHistogram
static int luaglew_glGetHistogram(lua_State *L) {
	glGetHistogram(luaglew_checkenum(L, 1), (GLboolean)lua_toboolean(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetHistogramParameterfv
// void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetHistogramParameterfv
static int luaglew_glGetHistogramParameterfv(lua_State *L) {
	glGetHistogramParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetHistogramParameteriv
// void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetHistogramParameteriv
static int luaglew_glGetHistogramParameteriv(lua_State *L) {
	glGetHistogramParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glMinmax
// void glMinmax (GLenum target, GLenum internalformat, GLboolean sink)
#ifdef glMinmax
static int luaglew_glMinmax(lua_State *L) {
	glMinmax(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLboolean)lua_toboolean(L, 3));
	return 0;
}
#endif

//####glResetMinmax
// void glResetMinmax (GLenum target)
#ifdef glResetMinmax
static int luaglew_glResetMinmax(lua_State *L) {
	glResetMinmax(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glGetMinmaxParameterfv
// void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetMinmaxParameterfv
static int luaglew_glGetMinmaxParameterfv(lua_State *L) {
	glGetMinmaxParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetMinmaxParameteriv
// void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetMinmaxParameteriv
static int luaglew_glGetMinmaxParameteriv(lua_State *L) {
	glGetMinmaxParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glConvolutionFilter1D
// void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
#ifdef glConvolutionFilter1D
static int luaglew_glConvolutionFilter1D(lua_State *L) {
	glConvolutionFilter1D(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glConvolutionFilter2D
// void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
#ifdef glConvolutionFilter2D
static int luaglew_glConvolutionFilter2D(lua_State *L) {
	glConvolutionFilter2D(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glConvolutionParameterf
// void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params)
#ifdef glConvolutionParameterf
static int luaglew_glConvolutionParameterf(lua_State *L) {
	glConvolutionParameterf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glConvolutionParameterfv
// void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params)
#ifdef glConvolutionParameterfv
static int luaglew_glConvolutionParameterfv(lua_State *L) {
	glConvolutionParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glConvolutionParameteri
// void glConvolutionParameteri (GLenum target, GLenum pname, GLint params)
#ifdef glConvolutionParameteri
static int luaglew_glConvolutionParameteri(lua_State *L) {
	glConvolutionParameteri(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glConvolutionParameteriv
// void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params)
#ifdef glConvolutionParameteriv
static int luaglew_glConvolutionParameteriv(lua_State *L) {
	glConvolutionParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glCopyConvolutionFilter1D
// void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
#ifdef glCopyConvolutionFilter1D
static int luaglew_glCopyConvolutionFilter1D(lua_State *L) {
	glCopyConvolutionFilter1D(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glCopyConvolutionFilter2D
// void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glCopyConvolutionFilter2D
static int luaglew_glCopyConvolutionFilter2D(lua_State *L) {
	glCopyConvolutionFilter2D(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
#endif

//####glGetConvolutionFilter
// void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image)
#ifdef glGetConvolutionFilter
static int luaglew_glGetConvolutionFilter(lua_State *L) {
	glGetConvolutionFilter(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetConvolutionParameterfv
// void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetConvolutionParameterfv
static int luaglew_glGetConvolutionParameterfv(lua_State *L) {
	glGetConvolutionParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetConvolutionParameteriv
// void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetConvolutionParameteriv
static int luaglew_glGetConvolutionParameteriv(lua_State *L) {
	glGetConvolutionParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glSeparableFilter2D
// void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
#ifdef glSeparableFilter2D
static int luaglew_glSeparableFilter2D(lua_State *L) {
	glSeparableFilter2D(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glGetSeparableFilter
// void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
#ifdef glGetSeparableFilter
static int luaglew_glGetSeparableFilter(lua_State *L) {
	glGetSeparableFilter(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glGetMinmax
// void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid *values)
#ifdef glGetMinmax
static int luaglew_glGetMinmax(lua_State *L) {
	glGetMinmax(luaglew_checkenum(L, 1), (GLboolean)lua_toboolean(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glCurrentPaletteMatrixARB
// void glCurrentPaletteMatrixARB (GLint index)
#ifdef glCurrentPaletteMatrixARB
static int luaglew_glCurrentPaletteMatrixARB(lua_State *L) {
	glCurrentPaletteMatrixARB((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glMatrixIndexPointerARB
// void glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
#ifdef glMatrixIndexPointerARB
static int luaglew_glMatrixIndexPointerARB(lua_State *L) {
	glMatrixIndexPointerARB((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glMatrixIndexubvARB
// void glMatrixIndexubvARB (GLint size, GLubyte *indices)
#ifdef glMatrixIndexubvARB
static int luaglew_glMatrixIndexubvARB(lua_State *L) {
	glMatrixIndexubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glMatrixIndexusvARB
// void glMatrixIndexusvARB (GLint size, GLushort *indices)
#ifdef glMatrixIndexusvARB
static int luaglew_glMatrixIndexusvARB(lua_State *L) {
	glMatrixIndexusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMatrixIndexuivARB
// void glMatrixIndexuivARB (GLint size, GLuint *indices)
#ifdef glMatrixIndexuivARB
static int luaglew_glMatrixIndexuivARB(lua_State *L) {
	glMatrixIndexuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glActiveTextureARB
// void glActiveTextureARB (GLenum texture)
#ifdef glActiveTextureARB
static int luaglew_glActiveTextureARB(lua_State *L) {
	glActiveTextureARB(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glClientActiveTextureARB
// void glClientActiveTextureARB (GLenum texture)
#ifdef glClientActiveTextureARB
static int luaglew_glClientActiveTextureARB(lua_State *L) {
	glClientActiveTextureARB(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glMultiTexCoord1dARB
// void glMultiTexCoord1dARB (GLenum target, GLdouble s)
#ifdef glMultiTexCoord1dARB
static int luaglew_glMultiTexCoord1dARB(lua_State *L) {
	glMultiTexCoord1dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1dvARB
// void glMultiTexCoord1dvARB (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord1dvARB
static int luaglew_glMultiTexCoord1dvARB(lua_State *L) {
	glMultiTexCoord1dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1fARB
// void glMultiTexCoord1fARB (GLenum target, GLfloat s)
#ifdef glMultiTexCoord1fARB
static int luaglew_glMultiTexCoord1fARB(lua_State *L) {
	glMultiTexCoord1fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1fvARB
// void glMultiTexCoord1fvARB (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord1fvARB
static int luaglew_glMultiTexCoord1fvARB(lua_State *L) {
	glMultiTexCoord1fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1iARB
// void glMultiTexCoord1iARB (GLenum target, GLint s)
#ifdef glMultiTexCoord1iARB
static int luaglew_glMultiTexCoord1iARB(lua_State *L) {
	glMultiTexCoord1iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1ivARB
// void glMultiTexCoord1ivARB (GLenum target, const GLint *v)
#ifdef glMultiTexCoord1ivARB
static int luaglew_glMultiTexCoord1ivARB(lua_State *L) {
	glMultiTexCoord1ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1sARB
// void glMultiTexCoord1sARB (GLenum target, GLshort s)
#ifdef glMultiTexCoord1sARB
static int luaglew_glMultiTexCoord1sARB(lua_State *L) {
	glMultiTexCoord1sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1svARB
// void glMultiTexCoord1svARB (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord1svARB
static int luaglew_glMultiTexCoord1svARB(lua_State *L) {
	glMultiTexCoord1svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2dARB
// void glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t)
#ifdef glMultiTexCoord2dARB
static int luaglew_glMultiTexCoord2dARB(lua_State *L) {
	glMultiTexCoord2dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2dvARB
// void glMultiTexCoord2dvARB (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord2dvARB
static int luaglew_glMultiTexCoord2dvARB(lua_State *L) {
	glMultiTexCoord2dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2fARB
// void glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t)
#ifdef glMultiTexCoord2fARB
static int luaglew_glMultiTexCoord2fARB(lua_State *L) {
	glMultiTexCoord2fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2fvARB
// void glMultiTexCoord2fvARB (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord2fvARB
static int luaglew_glMultiTexCoord2fvARB(lua_State *L) {
	glMultiTexCoord2fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2iARB
// void glMultiTexCoord2iARB (GLenum target, GLint s, GLint t)
#ifdef glMultiTexCoord2iARB
static int luaglew_glMultiTexCoord2iARB(lua_State *L) {
	glMultiTexCoord2iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2ivARB
// void glMultiTexCoord2ivARB (GLenum target, const GLint *v)
#ifdef glMultiTexCoord2ivARB
static int luaglew_glMultiTexCoord2ivARB(lua_State *L) {
	glMultiTexCoord2ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2sARB
// void glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t)
#ifdef glMultiTexCoord2sARB
static int luaglew_glMultiTexCoord2sARB(lua_State *L) {
	glMultiTexCoord2sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2svARB
// void glMultiTexCoord2svARB (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord2svARB
static int luaglew_glMultiTexCoord2svARB(lua_State *L) {
	glMultiTexCoord2svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3dARB
// void glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r)
#ifdef glMultiTexCoord3dARB
static int luaglew_glMultiTexCoord3dARB(lua_State *L) {
	glMultiTexCoord3dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3dvARB
// void glMultiTexCoord3dvARB (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord3dvARB
static int luaglew_glMultiTexCoord3dvARB(lua_State *L) {
	glMultiTexCoord3dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3fARB
// void glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r)
#ifdef glMultiTexCoord3fARB
static int luaglew_glMultiTexCoord3fARB(lua_State *L) {
	glMultiTexCoord3fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3fvARB
// void glMultiTexCoord3fvARB (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord3fvARB
static int luaglew_glMultiTexCoord3fvARB(lua_State *L) {
	glMultiTexCoord3fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3iARB
// void glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r)
#ifdef glMultiTexCoord3iARB
static int luaglew_glMultiTexCoord3iARB(lua_State *L) {
	glMultiTexCoord3iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3ivARB
// void glMultiTexCoord3ivARB (GLenum target, const GLint *v)
#ifdef glMultiTexCoord3ivARB
static int luaglew_glMultiTexCoord3ivARB(lua_State *L) {
	glMultiTexCoord3ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3sARB
// void glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r)
#ifdef glMultiTexCoord3sARB
static int luaglew_glMultiTexCoord3sARB(lua_State *L) {
	glMultiTexCoord3sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3svARB
// void glMultiTexCoord3svARB (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord3svARB
static int luaglew_glMultiTexCoord3svARB(lua_State *L) {
	glMultiTexCoord3svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4dARB
// void glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
#ifdef glMultiTexCoord4dARB
static int luaglew_glMultiTexCoord4dARB(lua_State *L) {
	glMultiTexCoord4dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4dvARB
// void glMultiTexCoord4dvARB (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord4dvARB
static int luaglew_glMultiTexCoord4dvARB(lua_State *L) {
	glMultiTexCoord4dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4fARB
// void glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
#ifdef glMultiTexCoord4fARB
static int luaglew_glMultiTexCoord4fARB(lua_State *L) {
	glMultiTexCoord4fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4fvARB
// void glMultiTexCoord4fvARB (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord4fvARB
static int luaglew_glMultiTexCoord4fvARB(lua_State *L) {
	glMultiTexCoord4fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4iARB
// void glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q)
#ifdef glMultiTexCoord4iARB
static int luaglew_glMultiTexCoord4iARB(lua_State *L) {
	glMultiTexCoord4iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4ivARB
// void glMultiTexCoord4ivARB (GLenum target, const GLint *v)
#ifdef glMultiTexCoord4ivARB
static int luaglew_glMultiTexCoord4ivARB(lua_State *L) {
	glMultiTexCoord4ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4sARB
// void glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
#ifdef glMultiTexCoord4sARB
static int luaglew_glMultiTexCoord4sARB(lua_State *L) {
	glMultiTexCoord4sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4svARB
// void glMultiTexCoord4svARB (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord4svARB
static int luaglew_glMultiTexCoord4svARB(lua_State *L) {
	glMultiTexCoord4svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glPointParameterfARB
// void glPointParameterfARB (GLenum pname, GLfloat param)
#ifdef glPointParameterfARB
static int luaglew_glPointParameterfARB(lua_State *L) {
	glPointParameterfARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPointParameterfvARB
// void glPointParameterfvARB (GLenum pname, const GLfloat* params)
#ifdef glPointParameterfvARB
static int luaglew_glPointParameterfvARB(lua_State *L) {
	glPointParameterfvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glGetnColorTableARB
// void glGetnColorTableARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table)
#ifdef glGetnColorTableARB
static int luaglew_glGetnColorTableARB(lua_State *L) {
	glGetnColorTableARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetnCompressedTexImageARB
// void glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void* img)
#ifdef glGetnCompressedTexImageARB
static int luaglew_glGetnCompressedTexImageARB(lua_State *L) {
	glGetnCompressedTexImageARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetnConvolutionFilterARB
// void glGetnConvolutionFilterARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image)
#ifdef glGetnConvolutionFilterARB
static int luaglew_glGetnConvolutionFilterARB(lua_State *L) {
	glGetnConvolutionFilterARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetnHistogramARB
// void glGetnHistogramARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values)
#ifdef glGetnHistogramARB
static int luaglew_glGetnHistogramARB(lua_State *L) {
	glGetnHistogramARB(luaglew_checkenum(L, 1), (GLboolean)lua_toboolean(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glGetnMapdvARB
// void glGetnMapdvARB (GLenum target, GLenum query, GLsizei bufSize, GLdouble* v)
#ifdef glGetnMapdvARB
static int luaglew_glGetnMapdvARB(lua_State *L) {
	glGetnMapdvARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glGetnMapfvARB
// void glGetnMapfvARB (GLenum target, GLenum query, GLsizei bufSize, GLfloat* v)
#ifdef glGetnMapfvARB
static int luaglew_glGetnMapfvARB(lua_State *L) {
	glGetnMapfvARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glGetnMapivARB
// void glGetnMapivARB (GLenum target, GLenum query, GLsizei bufSize, GLint* v)
#ifdef glGetnMapivARB
static int luaglew_glGetnMapivARB(lua_State *L) {
	glGetnMapivARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetnMinmaxARB
// void glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values)
#ifdef glGetnMinmaxARB
static int luaglew_glGetnMinmaxARB(lua_State *L) {
	glGetnMinmaxARB(luaglew_checkenum(L, 1), (GLboolean)lua_toboolean(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glGetnPixelMapfvARB
// void glGetnPixelMapfvARB (GLenum map, GLsizei bufSize, GLfloat* values)
#ifdef glGetnPixelMapfvARB
static int luaglew_glGetnPixelMapfvARB(lua_State *L) {
	glGetnPixelMapfvARB(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetnPixelMapuivARB
// void glGetnPixelMapuivARB (GLenum map, GLsizei bufSize, GLuint* values)
#ifdef glGetnPixelMapuivARB
static int luaglew_glGetnPixelMapuivARB(lua_State *L) {
	glGetnPixelMapuivARB(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetnPixelMapusvARB
// void glGetnPixelMapusvARB (GLenum map, GLsizei bufSize, GLushort* values)
#ifdef glGetnPixelMapusvARB
static int luaglew_glGetnPixelMapusvARB(lua_State *L) {
	glGetnPixelMapusvARB(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLushort *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetnPolygonStippleARB
// void glGetnPolygonStippleARB (GLsizei bufSize, GLubyte* pattern)
#ifdef glGetnPolygonStippleARB
static int luaglew_glGetnPolygonStippleARB(lua_State *L) {
	glGetnPolygonStippleARB((GLsizei)luaL_checklong(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glGetnSeparableFilterARB
// void glGetnSeparableFilterARB (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, GLvoid*column, GLvoid*span)
#ifdef glGetnSeparableFilterARB
static int luaglew_glGetnSeparableFilterARB(lua_State *L) {
	glGetnSeparableFilterARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkarray_void(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glGetnTexImageARB
// void glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* img)
#ifdef glGetnTexImageARB
static int luaglew_glGetnTexImageARB(lua_State *L) {
	glGetnTexImageARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glGetnUniformdvARB
// void glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble* params)
#ifdef glGetnUniformdvARB
static int luaglew_glGetnUniformdvARB(lua_State *L) {
	glGetnUniformdvARB((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glGetnUniformfvARB
// void glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat* params)
#ifdef glGetnUniformfvARB
static int luaglew_glGetnUniformfvARB(lua_State *L) {
	glGetnUniformfvARB((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glGetnUniformivARB
// void glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint* params)
#ifdef glGetnUniformivARB
static int luaglew_glGetnUniformivARB(lua_State *L) {
	glGetnUniformivARB((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetnUniformuivARB
// void glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint* params)
#ifdef glGetnUniformuivARB
static int luaglew_glGetnUniformuivARB(lua_State *L) {
	glGetnUniformuivARB((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glReadnPixelsARB
// void glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data)
#ifdef glReadnPixelsARB
static int luaglew_glReadnPixelsARB(lua_State *L) {
	glReadnPixelsARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLsizei)luaL_checklong(L, 7), luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glActiveShaderProgram
// void glActiveShaderProgram (GLuint pipeline, GLuint program)
#ifdef glActiveShaderProgram
static int luaglew_glActiveShaderProgram(lua_State *L) {
	glActiveShaderProgram((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindProgramPipeline
// void glBindProgramPipeline (GLuint pipeline)
#ifdef glBindProgramPipeline
static int luaglew_glBindProgramPipeline(lua_State *L) {
	glBindProgramPipeline((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glCreateShaderProgramv
// GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const char ** strings)
#ifdef glCreateShaderProgramv
static int luaglew_glCreateShaderProgramv(lua_State *L) {
	GLuint return_value;
	return_value = glCreateShaderProgramv(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_2char(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glDeleteProgramPipelines
// void glDeleteProgramPipelines (GLsizei n, const GLuint* pipelines)
#ifdef glDeleteProgramPipelines
static int luaglew_glDeleteProgramPipelines(lua_State *L) {
	glDeleteProgramPipelines((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenProgramPipelines
// void glGenProgramPipelines (GLsizei n, GLuint* pipelines)
#ifdef glGenProgramPipelines
static int luaglew_glGenProgramPipelines(lua_State *L) {
	glGenProgramPipelines((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGetProgramPipelineInfoLog
// void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei* length, char *infoLog)
#ifdef glGetProgramPipelineInfoLog
static int luaglew_glGetProgramPipelineInfoLog(lua_State *L) {
	glGetProgramPipelineInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetProgramPipelineiv
// void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint* params)
#ifdef glGetProgramPipelineiv
static int luaglew_glGetProgramPipelineiv(lua_State *L) {
	glGetProgramPipelineiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glIsProgramPipeline
// GLboolean glIsProgramPipeline (GLuint pipeline)
#ifdef glIsProgramPipeline
static int luaglew_glIsProgramPipeline(lua_State *L) {
	GLboolean return_value;
	return_value = glIsProgramPipeline((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glProgramUniform1d
// void glProgramUniform1d (GLuint program, GLint location, GLdouble x)
#ifdef glProgramUniform1d
static int luaglew_glProgramUniform1d(lua_State *L) {
	glProgramUniform1d((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glProgramUniform1dv
// void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble* value)
#ifdef glProgramUniform1dv
static int luaglew_glProgramUniform1dv(lua_State *L) {
	glProgramUniform1dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glProgramUniform1f
// void glProgramUniform1f (GLuint program, GLint location, GLfloat x)
#ifdef glProgramUniform1f
static int luaglew_glProgramUniform1f(lua_State *L) {
	glProgramUniform1f((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glProgramUniform1fv
// void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat* value)
#ifdef glProgramUniform1fv
static int luaglew_glProgramUniform1fv(lua_State *L) {
	glProgramUniform1fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramUniform1i
// void glProgramUniform1i (GLuint program, GLint location, GLint x)
#ifdef glProgramUniform1i
static int luaglew_glProgramUniform1i(lua_State *L) {
	glProgramUniform1i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glProgramUniform1iv
// void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint* value)
#ifdef glProgramUniform1iv
static int luaglew_glProgramUniform1iv(lua_State *L) {
	glProgramUniform1iv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform1ui
// void glProgramUniform1ui (GLuint program, GLint location, GLuint x)
#ifdef glProgramUniform1ui
static int luaglew_glProgramUniform1ui(lua_State *L) {
	glProgramUniform1ui((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glProgramUniform1uiv
// void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint* value)
#ifdef glProgramUniform1uiv
static int luaglew_glProgramUniform1uiv(lua_State *L) {
	glProgramUniform1uiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform2d
// void glProgramUniform2d (GLuint program, GLint location, GLdouble x, GLdouble y)
#ifdef glProgramUniform2d
static int luaglew_glProgramUniform2d(lua_State *L) {
	glProgramUniform2d((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glProgramUniform2dv
// void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble* value)
#ifdef glProgramUniform2dv
static int luaglew_glProgramUniform2dv(lua_State *L) {
	glProgramUniform2dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glProgramUniform2f
// void glProgramUniform2f (GLuint program, GLint location, GLfloat x, GLfloat y)
#ifdef glProgramUniform2f
static int luaglew_glProgramUniform2f(lua_State *L) {
	glProgramUniform2f((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glProgramUniform2fv
// void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat* value)
#ifdef glProgramUniform2fv
static int luaglew_glProgramUniform2fv(lua_State *L) {
	glProgramUniform2fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramUniform2i
// void glProgramUniform2i (GLuint program, GLint location, GLint x, GLint y)
#ifdef glProgramUniform2i
static int luaglew_glProgramUniform2i(lua_State *L) {
	glProgramUniform2i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glProgramUniform2iv
// void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint* value)
#ifdef glProgramUniform2iv
static int luaglew_glProgramUniform2iv(lua_State *L) {
	glProgramUniform2iv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform2ui
// void glProgramUniform2ui (GLuint program, GLint location, GLuint x, GLuint y)
#ifdef glProgramUniform2ui
static int luaglew_glProgramUniform2ui(lua_State *L) {
	glProgramUniform2ui((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glProgramUniform2uiv
// void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint* value)
#ifdef glProgramUniform2uiv
static int luaglew_glProgramUniform2uiv(lua_State *L) {
	glProgramUniform2uiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform3d
// void glProgramUniform3d (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
#ifdef glProgramUniform3d
static int luaglew_glProgramUniform3d(lua_State *L) {
	glProgramUniform3d((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glProgramUniform3dv
// void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble* value)
#ifdef glProgramUniform3dv
static int luaglew_glProgramUniform3dv(lua_State *L) {
	glProgramUniform3dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glProgramUniform3f
// void glProgramUniform3f (GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z)
#ifdef glProgramUniform3f
static int luaglew_glProgramUniform3f(lua_State *L) {
	glProgramUniform3f((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glProgramUniform3fv
// void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat* value)
#ifdef glProgramUniform3fv
static int luaglew_glProgramUniform3fv(lua_State *L) {
	glProgramUniform3fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramUniform3i
// void glProgramUniform3i (GLuint program, GLint location, GLint x, GLint y, GLint z)
#ifdef glProgramUniform3i
static int luaglew_glProgramUniform3i(lua_State *L) {
	glProgramUniform3i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glProgramUniform3iv
// void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint* value)
#ifdef glProgramUniform3iv
static int luaglew_glProgramUniform3iv(lua_State *L) {
	glProgramUniform3iv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform3ui
// void glProgramUniform3ui (GLuint program, GLint location, GLuint x, GLuint y, GLuint z)
#ifdef glProgramUniform3ui
static int luaglew_glProgramUniform3ui(lua_State *L) {
	glProgramUniform3ui((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glProgramUniform3uiv
// void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint* value)
#ifdef glProgramUniform3uiv
static int luaglew_glProgramUniform3uiv(lua_State *L) {
	glProgramUniform3uiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform4d
// void glProgramUniform4d (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glProgramUniform4d
static int luaglew_glProgramUniform4d(lua_State *L) {
	glProgramUniform4d((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramUniform4dv
// void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble* value)
#ifdef glProgramUniform4dv
static int luaglew_glProgramUniform4dv(lua_State *L) {
	glProgramUniform4dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLdouble *)luaglew_checkarray_double(L, 4));
	return 0;
}
#endif

//####glProgramUniform4f
// void glProgramUniform4f (GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glProgramUniform4f
static int luaglew_glProgramUniform4f(lua_State *L) {
	glProgramUniform4f((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramUniform4fv
// void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat* value)
#ifdef glProgramUniform4fv
static int luaglew_glProgramUniform4fv(lua_State *L) {
	glProgramUniform4fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramUniform4i
// void glProgramUniform4i (GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w)
#ifdef glProgramUniform4i
static int luaglew_glProgramUniform4i(lua_State *L) {
	glProgramUniform4i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramUniform4iv
// void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint* value)
#ifdef glProgramUniform4iv
static int luaglew_glProgramUniform4iv(lua_State *L) {
	glProgramUniform4iv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniform4ui
// void glProgramUniform4ui (GLuint program, GLint location, GLuint x, GLuint y, GLuint z, GLuint w)
#ifdef glProgramUniform4ui
static int luaglew_glProgramUniform4ui(lua_State *L) {
	glProgramUniform4ui((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5), (GLuint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramUniform4uiv
// void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint* value)
#ifdef glProgramUniform4uiv
static int luaglew_glProgramUniform4uiv(lua_State *L) {
	glProgramUniform4uiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramUniformMatrix2dv
// void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix2dv
static int luaglew_glProgramUniformMatrix2dv(lua_State *L) {
	glProgramUniformMatrix2dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix2fv
// void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix2fv
static int luaglew_glProgramUniformMatrix2fv(lua_State *L) {
	glProgramUniformMatrix2fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix2x3dv
// void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix2x3dv
static int luaglew_glProgramUniformMatrix2x3dv(lua_State *L) {
	glProgramUniformMatrix2x3dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix2x3fv
// void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix2x3fv
static int luaglew_glProgramUniformMatrix2x3fv(lua_State *L) {
	glProgramUniformMatrix2x3fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix2x4dv
// void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix2x4dv
static int luaglew_glProgramUniformMatrix2x4dv(lua_State *L) {
	glProgramUniformMatrix2x4dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix2x4fv
// void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix2x4fv
static int luaglew_glProgramUniformMatrix2x4fv(lua_State *L) {
	glProgramUniformMatrix2x4fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3dv
// void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix3dv
static int luaglew_glProgramUniformMatrix3dv(lua_State *L) {
	glProgramUniformMatrix3dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3fv
// void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix3fv
static int luaglew_glProgramUniformMatrix3fv(lua_State *L) {
	glProgramUniformMatrix3fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3x2dv
// void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix3x2dv
static int luaglew_glProgramUniformMatrix3x2dv(lua_State *L) {
	glProgramUniformMatrix3x2dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3x2fv
// void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix3x2fv
static int luaglew_glProgramUniformMatrix3x2fv(lua_State *L) {
	glProgramUniformMatrix3x2fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3x4dv
// void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix3x4dv
static int luaglew_glProgramUniformMatrix3x4dv(lua_State *L) {
	glProgramUniformMatrix3x4dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix3x4fv
// void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix3x4fv
static int luaglew_glProgramUniformMatrix3x4fv(lua_State *L) {
	glProgramUniformMatrix3x4fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4dv
// void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix4dv
static int luaglew_glProgramUniformMatrix4dv(lua_State *L) {
	glProgramUniformMatrix4dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4fv
// void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix4fv
static int luaglew_glProgramUniformMatrix4fv(lua_State *L) {
	glProgramUniformMatrix4fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4x2dv
// void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix4x2dv
static int luaglew_glProgramUniformMatrix4x2dv(lua_State *L) {
	glProgramUniformMatrix4x2dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4x2fv
// void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix4x2fv
static int luaglew_glProgramUniformMatrix4x2fv(lua_State *L) {
	glProgramUniformMatrix4x2fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4x3dv
// void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value)
#ifdef glProgramUniformMatrix4x3dv
static int luaglew_glProgramUniformMatrix4x3dv(lua_State *L) {
	glProgramUniformMatrix4x3dv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLdouble *)luaglew_checkarray_double(L, 5));
	return 0;
}
#endif

//####glProgramUniformMatrix4x3fv
// void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glProgramUniformMatrix4x3fv
static int luaglew_glProgramUniformMatrix4x3fv(lua_State *L) {
	glProgramUniformMatrix4x3fv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLboolean)lua_toboolean(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glUseProgramStages
// void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program)
#ifdef glUseProgramStages
static int luaglew_glUseProgramStages(lua_State *L) {
	glUseProgramStages((GLuint)luaL_checkint(L, 1), (GLbitfield)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glValidateProgramPipeline
// void glValidateProgramPipeline (GLuint pipeline)
#ifdef glValidateProgramPipeline
static int luaglew_glValidateProgramPipeline(lua_State *L) {
	glValidateProgramPipeline((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGetVertexAttribLdv
// void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble* params)
#ifdef glGetVertexAttribLdv
static int luaglew_glGetVertexAttribLdv(lua_State *L) {
	glGetVertexAttribLdv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glVertexAttribL1d
// void glVertexAttribL1d (GLuint index, GLdouble x)
#ifdef glVertexAttribL1d
static int luaglew_glVertexAttribL1d(lua_State *L) {
	glVertexAttribL1d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexAttribL1dv
// void glVertexAttribL1dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttribL1dv
static int luaglew_glVertexAttribL1dv(lua_State *L) {
	glVertexAttribL1dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttribL2d
// void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y)
#ifdef glVertexAttribL2d
static int luaglew_glVertexAttribL2d(lua_State *L) {
	glVertexAttribL2d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexAttribL2dv
// void glVertexAttribL2dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttribL2dv
static int luaglew_glVertexAttribL2dv(lua_State *L) {
	glVertexAttribL2dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttribL3d
// void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z)
#ifdef glVertexAttribL3d
static int luaglew_glVertexAttribL3d(lua_State *L) {
	glVertexAttribL3d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexAttribL3dv
// void glVertexAttribL3dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttribL3dv
static int luaglew_glVertexAttribL3dv(lua_State *L) {
	glVertexAttribL3dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttribL4d
// void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glVertexAttribL4d
static int luaglew_glVertexAttribL4d(lua_State *L) {
	glVertexAttribL4d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttribL4dv
// void glVertexAttribL4dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttribL4dv
static int luaglew_glVertexAttribL4dv(lua_State *L) {
	glVertexAttribL4dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttribLPointer
// void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer)
#ifdef glVertexAttribLPointer
static int luaglew_glVertexAttribLPointer(lua_State *L) {
	glVertexAttribLPointer((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkarray_int(L, 5));
	return 0;
}
#endif

//####glWeightbvARB
// void glWeightbvARB (GLint size, GLbyte *weights)
#ifdef glWeightbvARB
static int luaglew_glWeightbvARB(lua_State *L) {
	glWeightbvARB((GLint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glWeightsvARB
// void glWeightsvARB (GLint size, GLshort *weights)
#ifdef glWeightsvARB
static int luaglew_glWeightsvARB(lua_State *L) {
	glWeightsvARB((GLint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightivARB
// void glWeightivARB (GLint size, GLint *weights)
#ifdef glWeightivARB
static int luaglew_glWeightivARB(lua_State *L) {
	glWeightivARB((GLint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightfvARB
// void glWeightfvARB (GLint size, GLfloat *weights)
#ifdef glWeightfvARB
static int luaglew_glWeightfvARB(lua_State *L) {
	glWeightfvARB((GLint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glWeightdvARB
// void glWeightdvARB (GLint size, GLdouble *weights)
#ifdef glWeightdvARB
static int luaglew_glWeightdvARB(lua_State *L) {
	glWeightdvARB((GLint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glWeightubvARB
// void glWeightubvARB (GLint size, GLubyte *weights)
#ifdef glWeightubvARB
static int luaglew_glWeightubvARB(lua_State *L) {
	glWeightubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glWeightusvARB
// void glWeightusvARB (GLint size, GLushort *weights)
#ifdef glWeightusvARB
static int luaglew_glWeightusvARB(lua_State *L) {
	glWeightusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightuivARB
// void glWeightuivARB (GLint size, GLuint *weights)
#ifdef glWeightuivARB
static int luaglew_glWeightuivARB(lua_State *L) {
	glWeightuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightPointerARB
// void glWeightPointerARB (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
#ifdef glWeightPointerARB
static int luaglew_glWeightPointerARB(lua_State *L) {
	glWeightPointerARB((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glVertexBlendARB
// void glVertexBlendARB (GLint count)
#ifdef glVertexBlendARB
static int luaglew_glVertexBlendARB(lua_State *L) {
	glVertexBlendARB((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glTexBumpParameterivATI
// void glTexBumpParameterivATI (GLenum pname, GLint *param)
#ifdef glTexBumpParameterivATI
static int luaglew_glTexBumpParameterivATI(lua_State *L) {
	glTexBumpParameterivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glTexBumpParameterfvATI
// void glTexBumpParameterfvATI (GLenum pname, GLfloat *param)
#ifdef glTexBumpParameterfvATI
static int luaglew_glTexBumpParameterfvATI(lua_State *L) {
	glTexBumpParameterfvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glGetTexBumpParameterivATI
// void glGetTexBumpParameterivATI (GLenum pname, GLint *param)
#ifdef glGetTexBumpParameterivATI
static int luaglew_glGetTexBumpParameterivATI(lua_State *L) {
	glGetTexBumpParameterivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGetTexBumpParameterfvATI
// void glGetTexBumpParameterfvATI (GLenum pname, GLfloat *param)
#ifdef glGetTexBumpParameterfvATI
static int luaglew_glGetTexBumpParameterfvATI(lua_State *L) {
	glGetTexBumpParameterfvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMapObjectBufferATI
// void* glMapObjectBufferATI (GLuint buffer)
#ifdef glMapObjectBufferATI
static int luaglew_glMapObjectBufferATI(lua_State *L) {
	void* return_value;
	return_value = glMapObjectBufferATI((GLuint)luaL_checkint(L, 1));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
#endif

//####glUnmapObjectBufferATI
// void glUnmapObjectBufferATI (GLuint buffer)
#ifdef glUnmapObjectBufferATI
static int luaglew_glUnmapObjectBufferATI(lua_State *L) {
	glUnmapObjectBufferATI((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glPNTrianglesiATI
// void glPNTrianglesiATI (GLenum pname, GLint param)
#ifdef glPNTrianglesiATI
static int luaglew_glPNTrianglesiATI(lua_State *L) {
	glPNTrianglesiATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPNTrianglesfATI
// void glPNTrianglesfATI (GLenum pname, GLfloat param)
#ifdef glPNTrianglesfATI
static int luaglew_glPNTrianglesfATI(lua_State *L) {
	glPNTrianglesfATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glStencilOpSeparateATI
// void glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
#ifdef glStencilOpSeparateATI
static int luaglew_glStencilOpSeparateATI(lua_State *L) {
	glStencilOpSeparateATI(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glStencilFuncSeparateATI
// void glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
#ifdef glStencilFuncSeparateATI
static int luaglew_glStencilFuncSeparateATI(lua_State *L) {
	glStencilFuncSeparateATI(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glClientActiveVertexStreamATI
// void glClientActiveVertexStreamATI (GLenum stream)
#ifdef glClientActiveVertexStreamATI
static int luaglew_glClientActiveVertexStreamATI(lua_State *L) {
	glClientActiveVertexStreamATI(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glVertexBlendEnviATI
// void glVertexBlendEnviATI (GLenum pname, GLint param)
#ifdef glVertexBlendEnviATI
static int luaglew_glVertexBlendEnviATI(lua_State *L) {
	glVertexBlendEnviATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexBlendEnvfATI
// void glVertexBlendEnvfATI (GLenum pname, GLfloat param)
#ifdef glVertexBlendEnvfATI
static int luaglew_glVertexBlendEnvfATI(lua_State *L) {
	glVertexBlendEnvfATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexStream2sATI
// void glVertexStream2sATI (GLenum stream, GLshort x, GLshort y)
#ifdef glVertexStream2sATI
static int luaglew_glVertexStream2sATI(lua_State *L) {
	glVertexStream2sATI(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glVertexStream2svATI
// void glVertexStream2svATI (GLenum stream, const GLshort *v)
#ifdef glVertexStream2svATI
static int luaglew_glVertexStream2svATI(lua_State *L) {
	glVertexStream2svATI(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream2iATI
// void glVertexStream2iATI (GLenum stream, GLint x, GLint y)
#ifdef glVertexStream2iATI
static int luaglew_glVertexStream2iATI(lua_State *L) {
	glVertexStream2iATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertexStream2ivATI
// void glVertexStream2ivATI (GLenum stream, const GLint *v)
#ifdef glVertexStream2ivATI
static int luaglew_glVertexStream2ivATI(lua_State *L) {
	glVertexStream2ivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream2fATI
// void glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat y)
#ifdef glVertexStream2fATI
static int luaglew_glVertexStream2fATI(lua_State *L) {
	glVertexStream2fATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexStream2fvATI
// void glVertexStream2fvATI (GLenum stream, const GLfloat *v)
#ifdef glVertexStream2fvATI
static int luaglew_glVertexStream2fvATI(lua_State *L) {
	glVertexStream2fvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexStream2dATI
// void glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble y)
#ifdef glVertexStream2dATI
static int luaglew_glVertexStream2dATI(lua_State *L) {
	glVertexStream2dATI(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexStream2dvATI
// void glVertexStream2dvATI (GLenum stream, const GLdouble *v)
#ifdef glVertexStream2dvATI
static int luaglew_glVertexStream2dvATI(lua_State *L) {
	glVertexStream2dvATI(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexStream3sATI
// void glVertexStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z)
#ifdef glVertexStream3sATI
static int luaglew_glVertexStream3sATI(lua_State *L) {
	glVertexStream3sATI(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glVertexStream3svATI
// void glVertexStream3svATI (GLenum stream, const GLshort *v)
#ifdef glVertexStream3svATI
static int luaglew_glVertexStream3svATI(lua_State *L) {
	glVertexStream3svATI(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream3iATI
// void glVertexStream3iATI (GLenum stream, GLint x, GLint y, GLint z)
#ifdef glVertexStream3iATI
static int luaglew_glVertexStream3iATI(lua_State *L) {
	glVertexStream3iATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexStream3ivATI
// void glVertexStream3ivATI (GLenum stream, const GLint *v)
#ifdef glVertexStream3ivATI
static int luaglew_glVertexStream3ivATI(lua_State *L) {
	glVertexStream3ivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream3fATI
// void glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z)
#ifdef glVertexStream3fATI
static int luaglew_glVertexStream3fATI(lua_State *L) {
	glVertexStream3fATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexStream3fvATI
// void glVertexStream3fvATI (GLenum stream, const GLfloat *v)
#ifdef glVertexStream3fvATI
static int luaglew_glVertexStream3fvATI(lua_State *L) {
	glVertexStream3fvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexStream3dATI
// void glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z)
#ifdef glVertexStream3dATI
static int luaglew_glVertexStream3dATI(lua_State *L) {
	glVertexStream3dATI(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexStream3dvATI
// void glVertexStream3dvATI (GLenum stream, const GLdouble *v)
#ifdef glVertexStream3dvATI
static int luaglew_glVertexStream3dvATI(lua_State *L) {
	glVertexStream3dvATI(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexStream4sATI
// void glVertexStream4sATI (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
#ifdef glVertexStream4sATI
static int luaglew_glVertexStream4sATI(lua_State *L) {
	glVertexStream4sATI(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glVertexStream4svATI
// void glVertexStream4svATI (GLenum stream, const GLshort *v)
#ifdef glVertexStream4svATI
static int luaglew_glVertexStream4svATI(lua_State *L) {
	glVertexStream4svATI(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream4iATI
// void glVertexStream4iATI (GLenum stream, GLint x, GLint y, GLint z, GLint w)
#ifdef glVertexStream4iATI
static int luaglew_glVertexStream4iATI(lua_State *L) {
	glVertexStream4iATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glVertexStream4ivATI
// void glVertexStream4ivATI (GLenum stream, const GLint *v)
#ifdef glVertexStream4ivATI
static int luaglew_glVertexStream4ivATI(lua_State *L) {
	glVertexStream4ivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexStream4fATI
// void glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glVertexStream4fATI
static int luaglew_glVertexStream4fATI(lua_State *L) {
	glVertexStream4fATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexStream4fvATI
// void glVertexStream4fvATI (GLenum stream, const GLfloat *v)
#ifdef glVertexStream4fvATI
static int luaglew_glVertexStream4fvATI(lua_State *L) {
	glVertexStream4fvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexStream4dATI
// void glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glVertexStream4dATI
static int luaglew_glVertexStream4dATI(lua_State *L) {
	glVertexStream4dATI(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexStream4dvATI
// void glVertexStream4dvATI (GLenum stream, const GLdouble *v)
#ifdef glVertexStream4dvATI
static int luaglew_glVertexStream4dvATI(lua_State *L) {
	glVertexStream4dvATI(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glNormalStream3bATI
// void glNormalStream3bATI (GLenum stream, GLbyte x, GLbyte y, GLbyte z)
#ifdef glNormalStream3bATI
static int luaglew_glNormalStream3bATI(lua_State *L) {
	glNormalStream3bATI(luaglew_checkenum(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3), (GLbyte)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glNormalStream3bvATI
// void glNormalStream3bvATI (GLenum stream, const GLbyte *v)
#ifdef glNormalStream3bvATI
static int luaglew_glNormalStream3bvATI(lua_State *L) {
	glNormalStream3bvATI(luaglew_checkenum(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glNormalStream3sATI
// void glNormalStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z)
#ifdef glNormalStream3sATI
static int luaglew_glNormalStream3sATI(lua_State *L) {
	glNormalStream3sATI(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glNormalStream3svATI
// void glNormalStream3svATI (GLenum stream, const GLshort *v)
#ifdef glNormalStream3svATI
static int luaglew_glNormalStream3svATI(lua_State *L) {
	glNormalStream3svATI(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glNormalStream3iATI
// void glNormalStream3iATI (GLenum stream, GLint x, GLint y, GLint z)
#ifdef glNormalStream3iATI
static int luaglew_glNormalStream3iATI(lua_State *L) {
	glNormalStream3iATI(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glNormalStream3ivATI
// void glNormalStream3ivATI (GLenum stream, const GLint *v)
#ifdef glNormalStream3ivATI
static int luaglew_glNormalStream3ivATI(lua_State *L) {
	glNormalStream3ivATI(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glNormalStream3fATI
// void glNormalStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z)
#ifdef glNormalStream3fATI
static int luaglew_glNormalStream3fATI(lua_State *L) {
	glNormalStream3fATI(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glNormalStream3fvATI
// void glNormalStream3fvATI (GLenum stream, const GLfloat *v)
#ifdef glNormalStream3fvATI
static int luaglew_glNormalStream3fvATI(lua_State *L) {
	glNormalStream3fvATI(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glNormalStream3dATI
// void glNormalStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z)
#ifdef glNormalStream3dATI
static int luaglew_glNormalStream3dATI(lua_State *L) {
	glNormalStream3dATI(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glNormalStream3dvATI
// void glNormalStream3dvATI (GLenum stream, const GLdouble *v)
#ifdef glNormalStream3dvATI
static int luaglew_glNormalStream3dvATI(lua_State *L) {
	glNormalStream3dvATI(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glUniformBufferEXT
// void glUniformBufferEXT (GLuint program, GLint location, GLuint buffer)
#ifdef glUniformBufferEXT
static int luaglew_glUniformBufferEXT(lua_State *L) {
	glUniformBufferEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glGetUniformBufferSizeEXT
// GLint glGetUniformBufferSizeEXT (GLuint program, GLint location)
#ifdef glGetUniformBufferSizeEXT
static int luaglew_glGetUniformBufferSizeEXT(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformBufferSizeEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetUniformOffsetEXT
// GLintptr glGetUniformOffsetEXT (GLuint program, GLint location)
#ifdef glGetUniformOffsetEXT
static int luaglew_glGetUniformOffsetEXT(lua_State *L) {
	GLintptr return_value;
	return_value = glGetUniformOffsetEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glDepthBoundsEXT
// void glDepthBoundsEXT (GLclampd zmin, GLclampd zmax)
#ifdef glDepthBoundsEXT
static int luaglew_glDepthBoundsEXT(lua_State *L) {
	glDepthBoundsEXT((GLclampd)luaL_checknumber(L, 1), (GLclampd)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glDrawArraysInstancedEXT
// void glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount)
#ifdef glDrawArraysInstancedEXT
static int luaglew_glDrawArraysInstancedEXT(lua_State *L) {
	glDrawArraysInstancedEXT(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glDrawElementsInstancedEXT
// void glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
#ifdef glDrawElementsInstancedEXT
static int luaglew_glDrawElementsInstancedEXT(lua_State *L) {
	glDrawElementsInstancedEXT(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glDrawRangeElementsEXT
// void glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
#ifdef glDrawRangeElementsEXT
static int luaglew_glDrawRangeElementsEXT(lua_State *L) {
	glDrawRangeElementsEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glFogCoordfEXT
// void glFogCoordfEXT (GLfloat coord)
#ifdef glFogCoordfEXT
static int luaglew_glFogCoordfEXT(lua_State *L) {
	glFogCoordfEXT((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoordfvEXT
// void glFogCoordfvEXT (const GLfloat *coord)
#ifdef glFogCoordfvEXT
static int luaglew_glFogCoordfvEXT(lua_State *L) {
	glFogCoordfvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glFogCoorddEXT
// void glFogCoorddEXT (GLdouble coord)
#ifdef glFogCoorddEXT
static int luaglew_glFogCoorddEXT(lua_State *L) {
	glFogCoorddEXT((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoorddvEXT
// void glFogCoorddvEXT (const GLdouble *coord)
#ifdef glFogCoorddvEXT
static int luaglew_glFogCoorddvEXT(lua_State *L) {
	glFogCoorddvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glFogCoordPointerEXT
// void glFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glFogCoordPointerEXT
static int luaglew_glFogCoordPointerEXT(lua_State *L) {
	glFogCoordPointerEXT(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glProgramParameteriEXT
// void glProgramParameteriEXT (GLuint program, GLenum pname, GLint value)
#ifdef glProgramParameteriEXT
static int luaglew_glProgramParameteriEXT(lua_State *L) {
	glProgramParameteriEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glFramebufferTextureEXT
// void glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level)
#ifdef glFramebufferTextureEXT
static int luaglew_glFramebufferTextureEXT(lua_State *L) {
	glFramebufferTextureEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glFramebufferTextureLayerEXT
// void glFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
#ifdef glFramebufferTextureLayerEXT
static int luaglew_glFramebufferTextureLayerEXT(lua_State *L) {
	glFramebufferTextureLayerEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFramebufferTextureFaceEXT
// void glFramebufferTextureFaceEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
#ifdef glFramebufferTextureFaceEXT
static int luaglew_glFramebufferTextureFaceEXT(lua_State *L) {
	glFramebufferTextureFaceEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), luaglew_checkenum(L, 5));
	return 0;
}
#endif

//####glProgramEnvParameters4fvEXT
// void glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat* params)
#ifdef glProgramEnvParameters4fvEXT
static int luaglew_glProgramEnvParameters4fvEXT(lua_State *L) {
	glProgramEnvParameters4fvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramLocalParameters4fvEXT
// void glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat* params)
#ifdef glProgramLocalParameters4fvEXT
static int luaglew_glProgramLocalParameters4fvEXT(lua_State *L) {
	glProgramLocalParameters4fvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glGetUniformuivEXT
// void glGetUniformuivEXT (GLuint program, GLint location, GLuint *params)
#ifdef glGetUniformuivEXT
static int luaglew_glGetUniformuivEXT(lua_State *L) {
	glGetUniformuivEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glBindFragDataLocationEXT
// void glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar *name)
#ifdef glBindFragDataLocationEXT
static int luaglew_glBindFragDataLocationEXT(lua_State *L) {
	glBindFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glGetFragDataLocationEXT
// GLint glGetFragDataLocationEXT (GLuint program, const GLchar *name)
#ifdef glGetFragDataLocationEXT
static int luaglew_glGetFragDataLocationEXT(lua_State *L) {
	GLint return_value;
	return_value = glGetFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glUniform1uiEXT
// void glUniform1uiEXT (GLint location, GLuint v0)
#ifdef glUniform1uiEXT
static int luaglew_glUniform1uiEXT(lua_State *L) {
	glUniform1uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glUniform2uiEXT
// void glUniform2uiEXT (GLint location, GLuint v0, GLuint v1)
#ifdef glUniform2uiEXT
static int luaglew_glUniform2uiEXT(lua_State *L) {
	glUniform2uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glUniform3uiEXT
// void glUniform3uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2)
#ifdef glUniform3uiEXT
static int luaglew_glUniform3uiEXT(lua_State *L) {
	glUniform3uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glUniform4uiEXT
// void glUniform4uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
#ifdef glUniform4uiEXT
static int luaglew_glUniform4uiEXT(lua_State *L) {
	glUniform4uiEXT((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glUniform1uivEXT
// void glUniform1uivEXT (GLint location, GLsizei count, const GLuint *value)
#ifdef glUniform1uivEXT
static int luaglew_glUniform1uivEXT(lua_State *L) {
	glUniform1uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform2uivEXT
// void glUniform2uivEXT (GLint location, GLsizei count, const GLuint *value)
#ifdef glUniform2uivEXT
static int luaglew_glUniform2uivEXT(lua_State *L) {
	glUniform2uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform3uivEXT
// void glUniform3uivEXT (GLint location, GLsizei count, const GLuint *value)
#ifdef glUniform3uivEXT
static int luaglew_glUniform3uivEXT(lua_State *L) {
	glUniform3uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform4uivEXT
// void glUniform4uivEXT (GLint location, GLsizei count, const GLuint *value)
#ifdef glUniform4uivEXT
static int luaglew_glUniform4uivEXT(lua_State *L) {
	glUniform4uivEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glVertexAttribI1iEXT
// void glVertexAttribI1iEXT (GLuint index, GLint x)
#ifdef glVertexAttribI1iEXT
static int luaglew_glVertexAttribI1iEXT(lua_State *L) {
	glVertexAttribI1iEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2iEXT
// void glVertexAttribI2iEXT (GLuint index, GLint x, GLint y)
#ifdef glVertexAttribI2iEXT
static int luaglew_glVertexAttribI2iEXT(lua_State *L) {
	glVertexAttribI2iEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertexAttribI3iEXT
// void glVertexAttribI3iEXT (GLuint index, GLint x, GLint y, GLint z)
#ifdef glVertexAttribI3iEXT
static int luaglew_glVertexAttribI3iEXT(lua_State *L) {
	glVertexAttribI3iEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexAttribI4iEXT
// void glVertexAttribI4iEXT (GLuint index, GLint x, GLint y, GLint z, GLint w)
#ifdef glVertexAttribI4iEXT
static int luaglew_glVertexAttribI4iEXT(lua_State *L) {
	glVertexAttribI4iEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glVertexAttribI1uiEXT
// void glVertexAttribI1uiEXT (GLuint index, GLuint x)
#ifdef glVertexAttribI1uiEXT
static int luaglew_glVertexAttribI1uiEXT(lua_State *L) {
	glVertexAttribI1uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2uiEXT
// void glVertexAttribI2uiEXT (GLuint index, GLuint x, GLuint y)
#ifdef glVertexAttribI2uiEXT
static int luaglew_glVertexAttribI2uiEXT(lua_State *L) {
	glVertexAttribI2uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertexAttribI3uiEXT
// void glVertexAttribI3uiEXT (GLuint index, GLuint x, GLuint y, GLuint z)
#ifdef glVertexAttribI3uiEXT
static int luaglew_glVertexAttribI3uiEXT(lua_State *L) {
	glVertexAttribI3uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexAttribI4uiEXT
// void glVertexAttribI4uiEXT (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
#ifdef glVertexAttribI4uiEXT
static int luaglew_glVertexAttribI4uiEXT(lua_State *L) {
	glVertexAttribI4uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glVertexAttribI1ivEXT
// void glVertexAttribI1ivEXT (GLuint index, const GLint *v)
#ifdef glVertexAttribI1ivEXT
static int luaglew_glVertexAttribI1ivEXT(lua_State *L) {
	glVertexAttribI1ivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2ivEXT
// void glVertexAttribI2ivEXT (GLuint index, const GLint *v)
#ifdef glVertexAttribI2ivEXT
static int luaglew_glVertexAttribI2ivEXT(lua_State *L) {
	glVertexAttribI2ivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI3ivEXT
// void glVertexAttribI3ivEXT (GLuint index, const GLint *v)
#ifdef glVertexAttribI3ivEXT
static int luaglew_glVertexAttribI3ivEXT(lua_State *L) {
	glVertexAttribI3ivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4ivEXT
// void glVertexAttribI4ivEXT (GLuint index, const GLint *v)
#ifdef glVertexAttribI4ivEXT
static int luaglew_glVertexAttribI4ivEXT(lua_State *L) {
	glVertexAttribI4ivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI1uivEXT
// void glVertexAttribI1uivEXT (GLuint index, const GLuint *v)
#ifdef glVertexAttribI1uivEXT
static int luaglew_glVertexAttribI1uivEXT(lua_State *L) {
	glVertexAttribI1uivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2uivEXT
// void glVertexAttribI2uivEXT (GLuint index, const GLuint *v)
#ifdef glVertexAttribI2uivEXT
static int luaglew_glVertexAttribI2uivEXT(lua_State *L) {
	glVertexAttribI2uivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI3uivEXT
// void glVertexAttribI3uivEXT (GLuint index, const GLuint *v)
#ifdef glVertexAttribI3uivEXT
static int luaglew_glVertexAttribI3uivEXT(lua_State *L) {
	glVertexAttribI3uivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4uivEXT
// void glVertexAttribI4uivEXT (GLuint index, const GLuint *v)
#ifdef glVertexAttribI4uivEXT
static int luaglew_glVertexAttribI4uivEXT(lua_State *L) {
	glVertexAttribI4uivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4bvEXT
// void glVertexAttribI4bvEXT (GLuint index, const GLbyte *v)
#ifdef glVertexAttribI4bvEXT
static int luaglew_glVertexAttribI4bvEXT(lua_State *L) {
	glVertexAttribI4bvEXT((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4svEXT
// void glVertexAttribI4svEXT (GLuint index, const GLshort *v)
#ifdef glVertexAttribI4svEXT
static int luaglew_glVertexAttribI4svEXT(lua_State *L) {
	glVertexAttribI4svEXT((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4ubvEXT
// void glVertexAttribI4ubvEXT (GLuint index, const GLubyte *v)
#ifdef glVertexAttribI4ubvEXT
static int luaglew_glVertexAttribI4ubvEXT(lua_State *L) {
	glVertexAttribI4ubvEXT((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4usvEXT
// void glVertexAttribI4usvEXT (GLuint index, const GLushort *v)
#ifdef glVertexAttribI4usvEXT
static int luaglew_glVertexAttribI4usvEXT(lua_State *L) {
	glVertexAttribI4usvEXT((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribIPointerEXT
// void glVertexAttribIPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glVertexAttribIPointerEXT
static int luaglew_glVertexAttribIPointerEXT(lua_State *L) {
	glVertexAttribIPointerEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkarray_int(L, 5));
	return 0;
}
#endif

//####glGetVertexAttribIivEXT
// void glGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint *params)
#ifdef glGetVertexAttribIivEXT
static int luaglew_glGetVertexAttribIivEXT(lua_State *L) {
	glGetVertexAttribIivEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribIuivEXT
// void glGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint *params)
#ifdef glGetVertexAttribIuivEXT
static int luaglew_glGetVertexAttribIuivEXT(lua_State *L) {
	glGetVertexAttribIuivEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glPointParameterfEXT
// void glPointParameterfEXT (GLenum pname, GLfloat param)
#ifdef glPointParameterfEXT
static int luaglew_glPointParameterfEXT(lua_State *L) {
	glPointParameterfEXT(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPointParameterfvEXT
// void glPointParameterfvEXT (GLenum pname, const GLfloat* params)
#ifdef glPointParameterfvEXT
static int luaglew_glPointParameterfvEXT(lua_State *L) {
	glPointParameterfvEXT(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glSecondaryColor3bEXT
// void glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue)
#ifdef glSecondaryColor3bEXT
static int luaglew_glSecondaryColor3bEXT(lua_State *L) {
	glSecondaryColor3bEXT((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3bvEXT
// void glSecondaryColor3bvEXT (const GLbyte *v)
#ifdef glSecondaryColor3bvEXT
static int luaglew_glSecondaryColor3bvEXT(lua_State *L) {
	glSecondaryColor3bvEXT((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3dEXT
// void glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue)
#ifdef glSecondaryColor3dEXT
static int luaglew_glSecondaryColor3dEXT(lua_State *L) {
	glSecondaryColor3dEXT((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3dvEXT
// void glSecondaryColor3dvEXT (const GLdouble *v)
#ifdef glSecondaryColor3dvEXT
static int luaglew_glSecondaryColor3dvEXT(lua_State *L) {
	glSecondaryColor3dvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3fEXT
// void glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue)
#ifdef glSecondaryColor3fEXT
static int luaglew_glSecondaryColor3fEXT(lua_State *L) {
	glSecondaryColor3fEXT((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3fvEXT
// void glSecondaryColor3fvEXT (const GLfloat *v)
#ifdef glSecondaryColor3fvEXT
static int luaglew_glSecondaryColor3fvEXT(lua_State *L) {
	glSecondaryColor3fvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3iEXT
// void glSecondaryColor3iEXT (GLint red, GLint green, GLint blue)
#ifdef glSecondaryColor3iEXT
static int luaglew_glSecondaryColor3iEXT(lua_State *L) {
	glSecondaryColor3iEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3ivEXT
// void glSecondaryColor3ivEXT (const GLint *v)
#ifdef glSecondaryColor3ivEXT
static int luaglew_glSecondaryColor3ivEXT(lua_State *L) {
	glSecondaryColor3ivEXT((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3sEXT
// void glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue)
#ifdef glSecondaryColor3sEXT
static int luaglew_glSecondaryColor3sEXT(lua_State *L) {
	glSecondaryColor3sEXT((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3svEXT
// void glSecondaryColor3svEXT (const GLshort *v)
#ifdef glSecondaryColor3svEXT
static int luaglew_glSecondaryColor3svEXT(lua_State *L) {
	glSecondaryColor3svEXT((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3ubEXT
// void glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue)
#ifdef glSecondaryColor3ubEXT
static int luaglew_glSecondaryColor3ubEXT(lua_State *L) {
	glSecondaryColor3ubEXT((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3ubvEXT
// void glSecondaryColor3ubvEXT (const GLubyte *v)
#ifdef glSecondaryColor3ubvEXT
static int luaglew_glSecondaryColor3ubvEXT(lua_State *L) {
	glSecondaryColor3ubvEXT((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3uiEXT
// void glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue)
#ifdef glSecondaryColor3uiEXT
static int luaglew_glSecondaryColor3uiEXT(lua_State *L) {
	glSecondaryColor3uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3uivEXT
// void glSecondaryColor3uivEXT (const GLuint *v)
#ifdef glSecondaryColor3uivEXT
static int luaglew_glSecondaryColor3uivEXT(lua_State *L) {
	glSecondaryColor3uivEXT((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3usEXT
// void glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue)
#ifdef glSecondaryColor3usEXT
static int luaglew_glSecondaryColor3usEXT(lua_State *L) {
	glSecondaryColor3usEXT((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3usvEXT
// void glSecondaryColor3usvEXT (const GLushort *v)
#ifdef glSecondaryColor3usvEXT
static int luaglew_glSecondaryColor3usvEXT(lua_State *L) {
	glSecondaryColor3usvEXT((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColorPointerEXT
// void glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
#ifdef glSecondaryColorPointerEXT
static int luaglew_glSecondaryColorPointerEXT(lua_State *L) {
	glSecondaryColorPointerEXT((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glTexBufferEXT
// void glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer)
#ifdef glTexBufferEXT
static int luaglew_glTexBufferEXT(lua_State *L) {
	glTexBufferEXT(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTexParameterIivEXT
// void glTexParameterIivEXT (GLenum target, GLenum pname, const GLint *params)
#ifdef glTexParameterIivEXT
static int luaglew_glTexParameterIivEXT(lua_State *L) {
	glTexParameterIivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexParameterIuivEXT
// void glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint *params)
#ifdef glTexParameterIuivEXT
static int luaglew_glTexParameterIuivEXT(lua_State *L) {
	glTexParameterIuivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterIivEXT
// void glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint *params)
#ifdef glGetTexParameterIivEXT
static int luaglew_glGetTexParameterIivEXT(lua_State *L) {
	glGetTexParameterIivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterIuivEXT
// void glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint *params)
#ifdef glGetTexParameterIuivEXT
static int luaglew_glGetTexParameterIuivEXT(lua_State *L) {
	glGetTexParameterIuivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glClearColorIiEXT
// void glClearColorIiEXT (GLint red, GLint green, GLint blue, GLint alpha)
#ifdef glClearColorIiEXT
static int luaglew_glClearColorIiEXT(lua_State *L) {
	glClearColorIiEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glClearColorIuiEXT
// void glClearColorIuiEXT (GLuint red, GLuint green, GLuint blue, GLuint alpha)
#ifdef glClearColorIuiEXT
static int luaglew_glClearColorIuiEXT(lua_State *L) {
	glClearColorIuiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glGetQueryObjecti64vEXT
// void glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64EXT *params)
#ifdef glGetQueryObjecti64vEXT
static int luaglew_glGetQueryObjecti64vEXT(lua_State *L) {
	glGetQueryObjecti64vEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint64 *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectui64vEXT
// void glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64EXT *params)
#ifdef glGetQueryObjectui64vEXT
static int luaglew_glGetQueryObjectui64vEXT(lua_State *L) {
	glGetQueryObjectui64vEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint64EXT *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glBeginVertexShaderEXT
// void glBeginVertexShaderEXT (void)
#ifdef glBeginVertexShaderEXT
static int luaglew_glBeginVertexShaderEXT(lua_State *L) {
	glBeginVertexShaderEXT();
	return 0;
}
#endif

//####glEndVertexShaderEXT
// void glEndVertexShaderEXT (void)
#ifdef glEndVertexShaderEXT
static int luaglew_glEndVertexShaderEXT(lua_State *L) {
	glEndVertexShaderEXT();
	return 0;
}
#endif

//####glBindVertexShaderEXT
// void glBindVertexShaderEXT (GLuint id)
#ifdef glBindVertexShaderEXT
static int luaglew_glBindVertexShaderEXT(lua_State *L) {
	glBindVertexShaderEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGenVertexShadersEXT
// GLuint glGenVertexShadersEXT (GLuint range)
#ifdef glGenVertexShadersEXT
static int luaglew_glGenVertexShadersEXT(lua_State *L) {
	GLuint return_value;
	return_value = glGenVertexShadersEXT((GLuint)luaL_checkint(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glDeleteVertexShaderEXT
// void glDeleteVertexShaderEXT (GLuint id)
#ifdef glDeleteVertexShaderEXT
static int luaglew_glDeleteVertexShaderEXT(lua_State *L) {
	glDeleteVertexShaderEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glShaderOp1EXT
// void glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1)
#ifdef glShaderOp1EXT
static int luaglew_glShaderOp1EXT(lua_State *L) {
	glShaderOp1EXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glShaderOp2EXT
// void glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2)
#ifdef glShaderOp2EXT
static int luaglew_glShaderOp2EXT(lua_State *L) {
	glShaderOp2EXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glShaderOp3EXT
// void glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
#ifdef glShaderOp3EXT
static int luaglew_glShaderOp3EXT(lua_State *L) {
	glShaderOp3EXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glSwizzleEXT
// void glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
#ifdef glSwizzleEXT
static int luaglew_glSwizzleEXT(lua_State *L) {
	glSwizzleEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6));
	return 0;
}
#endif

//####glWriteMaskEXT
// void glWriteMaskEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
#ifdef glWriteMaskEXT
static int luaglew_glWriteMaskEXT(lua_State *L) {
	glWriteMaskEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6));
	return 0;
}
#endif

//####glInsertComponentEXT
// void glInsertComponentEXT (GLuint res, GLuint src, GLuint num)
#ifdef glInsertComponentEXT
static int luaglew_glInsertComponentEXT(lua_State *L) {
	glInsertComponentEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glExtractComponentEXT
// void glExtractComponentEXT (GLuint res, GLuint src, GLuint num)
#ifdef glExtractComponentEXT
static int luaglew_glExtractComponentEXT(lua_State *L) {
	glExtractComponentEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glGenSymbolsEXT
// GLuint glGenSymbolsEXT (GLenum dataType, GLenum storageType, GLenum range, GLuint components)
#ifdef glGenSymbolsEXT
static int luaglew_glGenSymbolsEXT(lua_State *L) {
	GLuint return_value;
	return_value = glGenSymbolsEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glSetInvariantEXT
// void glSetInvariantEXT (GLuint id, GLenum type, GLvoid *addr)
#ifdef glSetInvariantEXT
static int luaglew_glSetInvariantEXT(lua_State *L) {
	glSetInvariantEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glSetLocalConstantEXT
// void glSetLocalConstantEXT (GLuint id, GLenum type, GLvoid *addr)
#ifdef glSetLocalConstantEXT
static int luaglew_glSetLocalConstantEXT(lua_State *L) {
	glSetLocalConstantEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glVariantbvEXT
// void glVariantbvEXT (GLuint id, GLbyte *addr)
#ifdef glVariantbvEXT
static int luaglew_glVariantbvEXT(lua_State *L) {
	glVariantbvEXT((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVariantsvEXT
// void glVariantsvEXT (GLuint id, GLshort *addr)
#ifdef glVariantsvEXT
static int luaglew_glVariantsvEXT(lua_State *L) {
	glVariantsvEXT((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVariantivEXT
// void glVariantivEXT (GLuint id, GLint *addr)
#ifdef glVariantivEXT
static int luaglew_glVariantivEXT(lua_State *L) {
	glVariantivEXT((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVariantfvEXT
// void glVariantfvEXT (GLuint id, GLfloat *addr)
#ifdef glVariantfvEXT
static int luaglew_glVariantfvEXT(lua_State *L) {
	glVariantfvEXT((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVariantdvEXT
// void glVariantdvEXT (GLuint id, GLdouble *addr)
#ifdef glVariantdvEXT
static int luaglew_glVariantdvEXT(lua_State *L) {
	glVariantdvEXT((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVariantubvEXT
// void glVariantubvEXT (GLuint id, GLubyte *addr)
#ifdef glVariantubvEXT
static int luaglew_glVariantubvEXT(lua_State *L) {
	glVariantubvEXT((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVariantusvEXT
// void glVariantusvEXT (GLuint id, GLushort *addr)
#ifdef glVariantusvEXT
static int luaglew_glVariantusvEXT(lua_State *L) {
	glVariantusvEXT((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVariantuivEXT
// void glVariantuivEXT (GLuint id, GLuint *addr)
#ifdef glVariantuivEXT
static int luaglew_glVariantuivEXT(lua_State *L) {
	glVariantuivEXT((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVariantPointerEXT
// void glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, GLvoid *addr)
#ifdef glVariantPointerEXT
static int luaglew_glVariantPointerEXT(lua_State *L) {
	glVariantPointerEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glEnableVariantClientStateEXT
// void glEnableVariantClientStateEXT (GLuint id)
#ifdef glEnableVariantClientStateEXT
static int luaglew_glEnableVariantClientStateEXT(lua_State *L) {
	glEnableVariantClientStateEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDisableVariantClientStateEXT
// void glDisableVariantClientStateEXT (GLuint id)
#ifdef glDisableVariantClientStateEXT
static int luaglew_glDisableVariantClientStateEXT(lua_State *L) {
	glDisableVariantClientStateEXT((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glBindLightParameterEXT
// GLuint glBindLightParameterEXT (GLenum light, GLenum value)
#ifdef glBindLightParameterEXT
static int luaglew_glBindLightParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindLightParameterEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glBindMaterialParameterEXT
// GLuint glBindMaterialParameterEXT (GLenum face, GLenum value)
#ifdef glBindMaterialParameterEXT
static int luaglew_glBindMaterialParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindMaterialParameterEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glBindTexGenParameterEXT
// GLuint glBindTexGenParameterEXT (GLenum unit, GLenum coord, GLenum value)
#ifdef glBindTexGenParameterEXT
static int luaglew_glBindTexGenParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindTexGenParameterEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glBindTextureUnitParameterEXT
// GLuint glBindTextureUnitParameterEXT (GLenum unit, GLenum value)
#ifdef glBindTextureUnitParameterEXT
static int luaglew_glBindTextureUnitParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindTextureUnitParameterEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glBindParameterEXT
// GLuint glBindParameterEXT (GLenum value)
#ifdef glBindParameterEXT
static int luaglew_glBindParameterEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBindParameterEXT(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glIsVariantEnabledEXT
// GLboolean glIsVariantEnabledEXT (GLuint id, GLenum cap)
#ifdef glIsVariantEnabledEXT
static int luaglew_glIsVariantEnabledEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVariantEnabledEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glGetVariantBooleanvEXT
// void glGetVariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
#ifdef glGetVariantBooleanvEXT
static int luaglew_glGetVariantBooleanvEXT(lua_State *L) {
	glGetVariantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	return 0;
}
#endif

//####glGetVariantIntegervEXT
// void glGetVariantIntegervEXT (GLuint id, GLenum value, GLint *data)
#ifdef glGetVariantIntegervEXT
static int luaglew_glGetVariantIntegervEXT(lua_State *L) {
	glGetVariantIntegervEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVariantFloatvEXT
// void glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
#ifdef glGetVariantFloatvEXT
static int luaglew_glGetVariantFloatvEXT(lua_State *L) {
	glGetVariantFloatvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetVariantPointervEXT
// void glGetVariantPointervEXT (GLuint id, GLenum value, GLvoid **data)
#ifdef glGetVariantPointervEXT
static int luaglew_glGetVariantPointervEXT(lua_State *L) {
	glGetVariantPointervEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glGetInvariantBooleanvEXT
// void glGetInvariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
#ifdef glGetInvariantBooleanvEXT
static int luaglew_glGetInvariantBooleanvEXT(lua_State *L) {
	glGetInvariantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	return 0;
}
#endif

//####glGetInvariantIntegervEXT
// void glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint *data)
#ifdef glGetInvariantIntegervEXT
static int luaglew_glGetInvariantIntegervEXT(lua_State *L) {
	glGetInvariantIntegervEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetInvariantFloatvEXT
// void glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
#ifdef glGetInvariantFloatvEXT
static int luaglew_glGetInvariantFloatvEXT(lua_State *L) {
	glGetInvariantFloatvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetLocalConstantBooleanvEXT
// void glGetLocalConstantBooleanvEXT (GLuint id, GLenum value, GLboolean *data)
#ifdef glGetLocalConstantBooleanvEXT
static int luaglew_glGetLocalConstantBooleanvEXT(lua_State *L) {
	glGetLocalConstantBooleanvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	return 0;
}
#endif

//####glGetLocalConstantIntegervEXT
// void glGetLocalConstantIntegervEXT (GLuint id, GLenum value, GLint *data)
#ifdef glGetLocalConstantIntegervEXT
static int luaglew_glGetLocalConstantIntegervEXT(lua_State *L) {
	glGetLocalConstantIntegervEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetLocalConstantFloatvEXT
// void glGetLocalConstantFloatvEXT (GLuint id, GLenum value, GLfloat *data)
#ifdef glGetLocalConstantFloatvEXT
static int luaglew_glGetLocalConstantFloatvEXT(lua_State *L) {
	glGetLocalConstantFloatvEXT((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glBufferRegionEnabledEXT
// GLuint glBufferRegionEnabledEXT (void)
#ifdef glBufferRegionEnabledEXT
static int luaglew_glBufferRegionEnabledEXT(lua_State *L) {
	GLuint return_value;
	return_value = glBufferRegionEnabledEXT();
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glNewBufferRegionEXT
// GLuint glNewBufferRegionEXT (GLenum region)
#ifdef glNewBufferRegionEXT
static int luaglew_glNewBufferRegionEXT(lua_State *L) {
	GLuint return_value;
	return_value = glNewBufferRegionEXT(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glDeleteBufferRegionEXT
// void glDeleteBufferRegionEXT (GLenum region)
#ifdef glDeleteBufferRegionEXT
static int luaglew_glDeleteBufferRegionEXT(lua_State *L) {
	glDeleteBufferRegionEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glReadBufferRegionEXT
// void glReadBufferRegionEXT (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glReadBufferRegionEXT
static int luaglew_glReadBufferRegionEXT(lua_State *L) {
	glReadBufferRegionEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glDrawBufferRegionEXT
// void glDrawBufferRegionEXT (GLuint region, GLint x, GLint y, GLsizei width, GLsizei height, GLint xDest, GLint yDest)
#ifdef glDrawBufferRegionEXT
static int luaglew_glDrawBufferRegionEXT(lua_State *L) {
	glDrawBufferRegionEXT((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7));
	return 0;
}
#endif

//####glDepthRangedNV
// void glDepthRangedNV (GLdouble zNear, GLdouble zFar)
#ifdef glDepthRangedNV
static int luaglew_glDepthRangedNV(lua_State *L) {
	glDepthRangedNV((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glClearDepthdNV
// void glClearDepthdNV (GLdouble depth)
#ifdef glClearDepthdNV
static int luaglew_glClearDepthdNV(lua_State *L) {
	glClearDepthdNV((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glDepthBoundsdNV
// void glDepthBoundsdNV (GLdouble zmin, GLdouble zmax)
#ifdef glDepthBoundsdNV
static int luaglew_glDepthBoundsdNV(lua_State *L) {
	glDepthBoundsdNV((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glRenderbufferStorageMultisampleCoverageNV
// void glRenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
#ifdef glRenderbufferStorageMultisampleCoverageNV
static int luaglew_glRenderbufferStorageMultisampleCoverageNV(lua_State *L) {
	glRenderbufferStorageMultisampleCoverageNV(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei)luaL_checklong(L, 3), luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
#endif

//####glProgramVertexLimitNV
// void glProgramVertexLimitNV (GLenum target, GLint limit)
#ifdef glProgramVertexLimitNV
static int luaglew_glProgramVertexLimitNV(lua_State *L) {
	glProgramVertexLimitNV(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glProgramLocalParameterI4iNV
// void glProgramLocalParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
#ifdef glProgramLocalParameterI4iNV
static int luaglew_glProgramLocalParameterI4iNV(lua_State *L) {
	glProgramLocalParameterI4iNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramLocalParameterI4ivNV
// void glProgramLocalParameterI4ivNV (GLenum target, GLuint index, const GLint *params)
#ifdef glProgramLocalParameterI4ivNV
static int luaglew_glProgramLocalParameterI4ivNV(lua_State *L) {
	glProgramLocalParameterI4ivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glProgramLocalParametersI4ivNV
// void glProgramLocalParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params)
#ifdef glProgramLocalParametersI4ivNV
static int luaglew_glProgramLocalParametersI4ivNV(lua_State *L) {
	glProgramLocalParametersI4ivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramLocalParameterI4uiNV
// void glProgramLocalParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
#ifdef glProgramLocalParameterI4uiNV
static int luaglew_glProgramLocalParameterI4uiNV(lua_State *L) {
	glProgramLocalParameterI4uiNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5), (GLuint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramLocalParameterI4uivNV
// void glProgramLocalParameterI4uivNV (GLenum target, GLuint index, const GLuint *params)
#ifdef glProgramLocalParameterI4uivNV
static int luaglew_glProgramLocalParameterI4uivNV(lua_State *L) {
	glProgramLocalParameterI4uivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glProgramLocalParametersI4uivNV
// void glProgramLocalParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params)
#ifdef glProgramLocalParametersI4uivNV
static int luaglew_glProgramLocalParametersI4uivNV(lua_State *L) {
	glProgramLocalParametersI4uivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramEnvParameterI4iNV
// void glProgramEnvParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
#ifdef glProgramEnvParameterI4iNV
static int luaglew_glProgramEnvParameterI4iNV(lua_State *L) {
	glProgramEnvParameterI4iNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramEnvParameterI4ivNV
// void glProgramEnvParameterI4ivNV (GLenum target, GLuint index, const GLint *params)
#ifdef glProgramEnvParameterI4ivNV
static int luaglew_glProgramEnvParameterI4ivNV(lua_State *L) {
	glProgramEnvParameterI4ivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glProgramEnvParametersI4ivNV
// void glProgramEnvParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params)
#ifdef glProgramEnvParametersI4ivNV
static int luaglew_glProgramEnvParametersI4ivNV(lua_State *L) {
	glProgramEnvParametersI4ivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramEnvParameterI4uiNV
// void glProgramEnvParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
#ifdef glProgramEnvParameterI4uiNV
static int luaglew_glProgramEnvParameterI4uiNV(lua_State *L) {
	glProgramEnvParameterI4uiNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5), (GLuint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glProgramEnvParameterI4uivNV
// void glProgramEnvParameterI4uivNV (GLenum target, GLuint index, const GLuint *params)
#ifdef glProgramEnvParameterI4uivNV
static int luaglew_glProgramEnvParameterI4uivNV(lua_State *L) {
	glProgramEnvParameterI4uivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glProgramEnvParametersI4uivNV
// void glProgramEnvParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params)
#ifdef glProgramEnvParametersI4uivNV
static int luaglew_glProgramEnvParametersI4uivNV(lua_State *L) {
	glProgramEnvParametersI4uivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glProgramBufferParametersfvNV
// void glProgramBufferParametersfvNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params)
#ifdef glProgramBufferParametersfvNV
static int luaglew_glProgramBufferParametersfvNV(lua_State *L) {
	glProgramBufferParametersfvNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLfloat *)luaglew_checkarray_float(L, 5));
	return 0;
}
#endif

//####glProgramBufferParametersIivNV
// void glProgramBufferParametersIivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params)
#ifdef glProgramBufferParametersIivNV
static int luaglew_glProgramBufferParametersIivNV(lua_State *L) {
	glProgramBufferParametersIivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint *)luaglew_checkarray_int(L, 5));
	return 0;
}
#endif

//####glProgramBufferParametersIuivNV
// void glProgramBufferParametersIuivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params)
#ifdef glProgramBufferParametersIuivNV
static int luaglew_glProgramBufferParametersIuivNV(lua_State *L) {
	glProgramBufferParametersIuivNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLuint *)luaglew_checkarray_int(L, 5));
	return 0;
}
#endif

//####glGetVideoi64vNV
// void glGetVideoi64vNV (GLuint video_slot, GLenum pname, GLint64EXT* params)
#ifdef glGetVideoi64vNV
static int luaglew_glGetVideoi64vNV(lua_State *L) {
	glGetVideoi64vNV((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint64 *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVideoivNV
// void glGetVideoivNV (GLuint video_slot, GLenum pname, GLint* params)
#ifdef glGetVideoivNV
static int luaglew_glGetVideoivNV(lua_State *L) {
	glGetVideoivNV((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVideoui64vNV
// void glGetVideoui64vNV (GLuint video_slot, GLenum pname, GLuint64EXT* params)
#ifdef glGetVideoui64vNV
static int luaglew_glGetVideoui64vNV(lua_State *L) {
	glGetVideoui64vNV((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint64EXT *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVideouivNV
// void glGetVideouivNV (GLuint video_slot, GLenum pname, GLuint* params)
#ifdef glGetVideouivNV
static int luaglew_glGetVideouivNV(lua_State *L) {
	glGetVideouivNV((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glPresentFrameDualFillNV
// void glPresentFrameDualFillNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
#ifdef glPresentFrameDualFillNV
static int luaglew_glPresentFrameDualFillNV(lua_State *L) {
	glPresentFrameDualFillNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLuint)luaL_checkint(L, 7), luaglew_checkenum(L, 8), (GLuint)luaL_checkint(L, 9), luaglew_checkenum(L, 10), (GLuint)luaL_checkint(L, 11), luaglew_checkenum(L, 12), (GLuint)luaL_checkint(L, 13));
	return 0;
}
#endif

//####glPresentFrameKeyedNV
// void glPresentFrameKeyedNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
#ifdef glPresentFrameKeyedNV
static int luaglew_glPresentFrameKeyedNV(lua_State *L) {
	glPresentFrameKeyedNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLuint)luaL_checkint(L, 7), (GLuint)luaL_checkint(L, 8), luaglew_checkenum(L, 9), (GLuint)luaL_checkint(L, 10), (GLuint)luaL_checkint(L, 11));
	return 0;
}
#endif

//####glBeginTransformFeedbackNV
// void glBeginTransformFeedbackNV (GLenum primitiveMode)
#ifdef glBeginTransformFeedbackNV
static int luaglew_glBeginTransformFeedbackNV(lua_State *L) {
	glBeginTransformFeedbackNV(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glEndTransformFeedbackNV
// void glEndTransformFeedbackNV (void)
#ifdef glEndTransformFeedbackNV
static int luaglew_glEndTransformFeedbackNV(lua_State *L) {
	glEndTransformFeedbackNV();
	return 0;
}
#endif

//####glTransformFeedbackAttribsNV
// void glTransformFeedbackAttribsNV (GLuint count, const GLint *attribs, GLenum bufferMode)
#ifdef glTransformFeedbackAttribsNV
static int luaglew_glTransformFeedbackAttribsNV(lua_State *L) {
	glTransformFeedbackAttribsNV((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2), luaglew_checkenum(L, 3));
	return 0;
}
#endif

//####glBindBufferRangeNV
// void glBindBufferRangeNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
#ifdef glBindBufferRangeNV
static int luaglew_glBindBufferRangeNV(lua_State *L) {
	glBindBufferRangeNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glBindBufferOffsetNV
// void glBindBufferOffsetNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset)
#ifdef glBindBufferOffsetNV
static int luaglew_glBindBufferOffsetNV(lua_State *L) {
	glBindBufferOffsetNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glBindBufferBaseNV
// void glBindBufferBaseNV (GLenum target, GLuint index, GLuint buffer)
#ifdef glBindBufferBaseNV
static int luaglew_glBindBufferBaseNV(lua_State *L) {
	glBindBufferBaseNV(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTransformFeedbackVaryingsNV
// void glTransformFeedbackVaryingsNV (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode)
#ifdef glTransformFeedbackVaryingsNV
static int luaglew_glTransformFeedbackVaryingsNV(lua_State *L) {
	glTransformFeedbackVaryingsNV((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glActiveVaryingNV
// void glActiveVaryingNV (GLuint program, const GLchar *name)
#ifdef glActiveVaryingNV
static int luaglew_glActiveVaryingNV(lua_State *L) {
	glActiveVaryingNV((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	return 0;
}
#endif

//####glGetVaryingLocationNV
// GLint glGetVaryingLocationNV (GLuint program, const GLchar *name)
#ifdef glGetVaryingLocationNV
static int luaglew_glGetVaryingLocationNV(lua_State *L) {
	GLint return_value;
	return_value = glGetVaryingLocationNV((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetActiveVaryingNV
// void glGetActiveVaryingNV (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
#ifdef glGetActiveVaryingNV
static int luaglew_glGetActiveVaryingNV(lua_State *L) {
	glGetActiveVaryingNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetTransformFeedbackVaryingNV
// void glGetTransformFeedbackVaryingNV (GLuint program, GLuint index, GLint *location)
#ifdef glGetTransformFeedbackVaryingNV
static int luaglew_glGetTransformFeedbackVaryingNV(lua_State *L) {
	glGetTransformFeedbackVaryingNV((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glVDPAUFiniNV
// void glVDPAUFiniNV (void)
#ifdef glVDPAUFiniNV
static int luaglew_glVDPAUFiniNV(lua_State *L) {
	glVDPAUFiniNV();
	return 0;
}
#endif

//####glVDPAUInitNV
// void glVDPAUInitNV (const void* vdpDevice, const GLvoid*getProcAddress)
#ifdef glVDPAUInitNV
static int luaglew_glVDPAUInitNV(lua_State *L) {
	glVDPAUInitNV(luaglew_checkarray_void(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
#endif

//####glVDPAUMapSurfacesNV
// void glVDPAUMapSurfacesNV (GLsizei numSurfaces, const GLvdpauSurfaceNV* surfaces)
#ifdef glVDPAUMapSurfacesNV
static int luaglew_glVDPAUMapSurfacesNV(lua_State *L) {
	glVDPAUMapSurfacesNV((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_GLvdpauSurfaceNV(L, 2));
	return 0;
}
#endif

//####glVDPAURegisterOutputSurfaceNV
// GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV (const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
#ifdef glVDPAURegisterOutputSurfaceNV
static int luaglew_glVDPAURegisterOutputSurfaceNV(lua_State *L) {
	GLvdpauSurfaceNV return_value;
	return_value = glVDPAURegisterOutputSurfaceNV(luaglew_checkarray_void(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	luaglew_pusharray_int(L, return_value);
	return 1;
}
#endif

//####glVDPAURegisterVideoSurfaceNV
// GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV (const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
#ifdef glVDPAURegisterVideoSurfaceNV
static int luaglew_glVDPAURegisterVideoSurfaceNV(lua_State *L) {
	GLvdpauSurfaceNV return_value;
	return_value = glVDPAURegisterVideoSurfaceNV(luaglew_checkarray_void(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	luaglew_pusharray_int(L, return_value);
	return 1;
}
#endif

//####glVDPAUUnmapSurfacesNV
// void glVDPAUUnmapSurfacesNV (GLsizei numSurface, const GLvdpauSurfaceNV* surfaces)
#ifdef glVDPAUUnmapSurfacesNV
static int luaglew_glVDPAUUnmapSurfacesNV(lua_State *L) {
	glVDPAUUnmapSurfacesNV((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_GLvdpauSurfaceNV(L, 2));
	return 0;
}
#endif

//####glReadVideoPixelsSUN
// void glReadVideoPixelsSUN (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
#ifdef glReadVideoPixelsSUN
static int luaglew_glReadVideoPixelsSUN(lua_State *L) {
	glReadVideoPixelsSUN((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glDrawRangeElements
// void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
#ifdef glDrawRangeElements
static int luaglew_glDrawRangeElements(lua_State *L) {
	glDrawRangeElements(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glTexImage3D
// void glTexImage3D (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexImage3D
static int luaglew_glTexImage3D(lua_State *L) {
	glTexImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), luaglew_checkenum(L, 8), luaglew_checkenum(L, 9), (GLvoid *)luaglew_checkarray_void(L, 10));
	return 0;
}
#endif

//####glTexSubImage3D
// void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexSubImage3D
static int luaglew_glTexSubImage3D(lua_State *L) {
	glTexSubImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaglew_checkenum(L, 9), luaglew_checkenum(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
#endif

//####glCopyTexSubImage3D
// void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glCopyTexSubImage3D
static int luaglew_glCopyTexSubImage3D(lua_State *L) {
	glCopyTexSubImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLsizei)luaL_checklong(L, 9));
	return 0;
}
#endif

//####glActiveTexture
// void glActiveTexture (GLenum texture)
#ifdef glActiveTexture
static int luaglew_glActiveTexture(lua_State *L) {
	glActiveTexture(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glClientActiveTexture
// void glClientActiveTexture (GLenum texture)
#ifdef glClientActiveTexture
static int luaglew_glClientActiveTexture(lua_State *L) {
	glClientActiveTexture(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glCompressedTexImage1D
// void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexImage1D
static int luaglew_glCompressedTexImage1D(lua_State *L) {
	glCompressedTexImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glCompressedTexImage2D
// void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexImage2D
static int luaglew_glCompressedTexImage2D(lua_State *L) {
	glCompressedTexImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glCompressedTexImage3D
// void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexImage3D
static int luaglew_glCompressedTexImage3D(lua_State *L) {
	glCompressedTexImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glCompressedTexSubImage1D
// void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexSubImage1D
static int luaglew_glCompressedTexSubImage1D(lua_State *L) {
	glCompressedTexSubImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glCompressedTexSubImage2D
// void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexSubImage2D
static int luaglew_glCompressedTexSubImage2D(lua_State *L) {
	glCompressedTexSubImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaglew_checkenum(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glCompressedTexSubImage3D
// void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
#ifdef glCompressedTexSubImage3D
static int luaglew_glCompressedTexSubImage3D(lua_State *L) {
	glCompressedTexSubImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaglew_checkenum(L, 9), (GLsizei)luaL_checklong(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
#endif

//####glGetCompressedTexImage
// void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img)
#ifdef glGetCompressedTexImage
static int luaglew_glGetCompressedTexImage(lua_State *L) {
	glGetCompressedTexImage(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glLoadTransposeMatrixd
// void glLoadTransposeMatrixd (const GLdouble m[16])
#ifdef glLoadTransposeMatrixd
static int luaglew_glLoadTransposeMatrixd(lua_State *L) {
	glLoadTransposeMatrixd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glLoadTransposeMatrixf
// void glLoadTransposeMatrixf (const GLfloat m[16])
#ifdef glLoadTransposeMatrixf
static int luaglew_glLoadTransposeMatrixf(lua_State *L) {
	glLoadTransposeMatrixf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixd
// void glMultTransposeMatrixd (const GLdouble m[16])
#ifdef glMultTransposeMatrixd
static int luaglew_glMultTransposeMatrixd(lua_State *L) {
	glMultTransposeMatrixd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixf
// void glMultTransposeMatrixf (const GLfloat m[16])
#ifdef glMultTransposeMatrixf
static int luaglew_glMultTransposeMatrixf(lua_State *L) {
	glMultTransposeMatrixf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glMultiTexCoord1d
// void glMultiTexCoord1d (GLenum target, GLdouble s)
#ifdef glMultiTexCoord1d
static int luaglew_glMultiTexCoord1d(lua_State *L) {
	glMultiTexCoord1d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1dv
// void glMultiTexCoord1dv (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord1dv
static int luaglew_glMultiTexCoord1dv(lua_State *L) {
	glMultiTexCoord1dv(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1f
// void glMultiTexCoord1f (GLenum target, GLfloat s)
#ifdef glMultiTexCoord1f
static int luaglew_glMultiTexCoord1f(lua_State *L) {
	glMultiTexCoord1f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1fv
// void glMultiTexCoord1fv (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord1fv
static int luaglew_glMultiTexCoord1fv(lua_State *L) {
	glMultiTexCoord1fv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1i
// void glMultiTexCoord1i (GLenum target, GLint s)
#ifdef glMultiTexCoord1i
static int luaglew_glMultiTexCoord1i(lua_State *L) {
	glMultiTexCoord1i(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1iv
// void glMultiTexCoord1iv (GLenum target, const GLint *v)
#ifdef glMultiTexCoord1iv
static int luaglew_glMultiTexCoord1iv(lua_State *L) {
	glMultiTexCoord1iv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1s
// void glMultiTexCoord1s (GLenum target, GLshort s)
#ifdef glMultiTexCoord1s
static int luaglew_glMultiTexCoord1s(lua_State *L) {
	glMultiTexCoord1s(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1sv
// void glMultiTexCoord1sv (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord1sv
static int luaglew_glMultiTexCoord1sv(lua_State *L) {
	glMultiTexCoord1sv(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2d
// void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t)
#ifdef glMultiTexCoord2d
static int luaglew_glMultiTexCoord2d(lua_State *L) {
	glMultiTexCoord2d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2dv
// void glMultiTexCoord2dv (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord2dv
static int luaglew_glMultiTexCoord2dv(lua_State *L) {
	glMultiTexCoord2dv(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2f
// void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t)
#ifdef glMultiTexCoord2f
static int luaglew_glMultiTexCoord2f(lua_State *L) {
	glMultiTexCoord2f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2fv
// void glMultiTexCoord2fv (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord2fv
static int luaglew_glMultiTexCoord2fv(lua_State *L) {
	glMultiTexCoord2fv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2i
// void glMultiTexCoord2i (GLenum target, GLint s, GLint t)
#ifdef glMultiTexCoord2i
static int luaglew_glMultiTexCoord2i(lua_State *L) {
	glMultiTexCoord2i(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2iv
// void glMultiTexCoord2iv (GLenum target, const GLint *v)
#ifdef glMultiTexCoord2iv
static int luaglew_glMultiTexCoord2iv(lua_State *L) {
	glMultiTexCoord2iv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2s
// void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t)
#ifdef glMultiTexCoord2s
static int luaglew_glMultiTexCoord2s(lua_State *L) {
	glMultiTexCoord2s(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2sv
// void glMultiTexCoord2sv (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord2sv
static int luaglew_glMultiTexCoord2sv(lua_State *L) {
	glMultiTexCoord2sv(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3d
// void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r)
#ifdef glMultiTexCoord3d
static int luaglew_glMultiTexCoord3d(lua_State *L) {
	glMultiTexCoord3d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3dv
// void glMultiTexCoord3dv (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord3dv
static int luaglew_glMultiTexCoord3dv(lua_State *L) {
	glMultiTexCoord3dv(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3f
// void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r)
#ifdef glMultiTexCoord3f
static int luaglew_glMultiTexCoord3f(lua_State *L) {
	glMultiTexCoord3f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3fv
// void glMultiTexCoord3fv (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord3fv
static int luaglew_glMultiTexCoord3fv(lua_State *L) {
	glMultiTexCoord3fv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3i
// void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r)
#ifdef glMultiTexCoord3i
static int luaglew_glMultiTexCoord3i(lua_State *L) {
	glMultiTexCoord3i(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3iv
// void glMultiTexCoord3iv (GLenum target, const GLint *v)
#ifdef glMultiTexCoord3iv
static int luaglew_glMultiTexCoord3iv(lua_State *L) {
	glMultiTexCoord3iv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3s
// void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r)
#ifdef glMultiTexCoord3s
static int luaglew_glMultiTexCoord3s(lua_State *L) {
	glMultiTexCoord3s(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3sv
// void glMultiTexCoord3sv (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord3sv
static int luaglew_glMultiTexCoord3sv(lua_State *L) {
	glMultiTexCoord3sv(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4d
// void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
#ifdef glMultiTexCoord4d
static int luaglew_glMultiTexCoord4d(lua_State *L) {
	glMultiTexCoord4d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4dv
// void glMultiTexCoord4dv (GLenum target, const GLdouble *v)
#ifdef glMultiTexCoord4dv
static int luaglew_glMultiTexCoord4dv(lua_State *L) {
	glMultiTexCoord4dv(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4f
// void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
#ifdef glMultiTexCoord4f
static int luaglew_glMultiTexCoord4f(lua_State *L) {
	glMultiTexCoord4f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4fv
// void glMultiTexCoord4fv (GLenum target, const GLfloat *v)
#ifdef glMultiTexCoord4fv
static int luaglew_glMultiTexCoord4fv(lua_State *L) {
	glMultiTexCoord4fv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4i
// void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q)
#ifdef glMultiTexCoord4i
static int luaglew_glMultiTexCoord4i(lua_State *L) {
	glMultiTexCoord4i(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4iv
// void glMultiTexCoord4iv (GLenum target, const GLint *v)
#ifdef glMultiTexCoord4iv
static int luaglew_glMultiTexCoord4iv(lua_State *L) {
	glMultiTexCoord4iv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4s
// void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
#ifdef glMultiTexCoord4s
static int luaglew_glMultiTexCoord4s(lua_State *L) {
	glMultiTexCoord4s(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4sv
// void glMultiTexCoord4sv (GLenum target, const GLshort *v)
#ifdef glMultiTexCoord4sv
static int luaglew_glMultiTexCoord4sv(lua_State *L) {
	glMultiTexCoord4sv(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glSampleCoverage
// void glSampleCoverage (GLclampf value, GLboolean invert)
#ifdef glSampleCoverage
static int luaglew_glSampleCoverage(lua_State *L) {
	glSampleCoverage((GLclampf)luaL_checknumber(L, 1), (GLboolean)lua_toboolean(L, 2));
	return 0;
}
#endif

//####glBlendEquation
// void glBlendEquation (GLenum mode)
#ifdef glBlendEquation
static int luaglew_glBlendEquation(lua_State *L) {
	glBlendEquation(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glBlendColor
// void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
#ifdef glBlendColor
static int luaglew_glBlendColor(lua_State *L) {
	glBlendColor((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glFogCoordf
// void glFogCoordf (GLfloat coord)
#ifdef glFogCoordf
static int luaglew_glFogCoordf(lua_State *L) {
	glFogCoordf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoordfv
// void glFogCoordfv (const GLfloat *coord)
#ifdef glFogCoordfv
static int luaglew_glFogCoordfv(lua_State *L) {
	glFogCoordfv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glFogCoordd
// void glFogCoordd (GLdouble coord)
#ifdef glFogCoordd
static int luaglew_glFogCoordd(lua_State *L) {
	glFogCoordd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoorddv
// void glFogCoorddv (const GLdouble *coord)
#ifdef glFogCoorddv
static int luaglew_glFogCoorddv(lua_State *L) {
	glFogCoorddv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glFogCoordPointer
// void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glFogCoordPointer
static int luaglew_glFogCoordPointer(lua_State *L) {
	glFogCoordPointer(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glMultiDrawArrays
// void glMultiDrawArrays (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount)
#ifdef glMultiDrawArrays
static int luaglew_glMultiDrawArrays(lua_State *L) {
	glMultiDrawArrays(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glMultiDrawElements
// void glMultiDrawElements (GLenum mode, GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount)
#ifdef glMultiDrawElements
static int luaglew_glMultiDrawElements(lua_State *L) {
	glMultiDrawElements(luaglew_checkenum(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaglew_checkenum(L, 3), luaglew_checkarray_2void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glPointParameteri
// void glPointParameteri (GLenum pname, GLint param)
#ifdef glPointParameteri
static int luaglew_glPointParameteri(lua_State *L) {
	glPointParameteri(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPointParameteriv
// void glPointParameteriv (GLenum pname, const GLint *params)
#ifdef glPointParameteriv
static int luaglew_glPointParameteriv(lua_State *L) {
	glPointParameteriv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glPointParameterf
// void glPointParameterf (GLenum pname, GLfloat param)
#ifdef glPointParameterf
static int luaglew_glPointParameterf(lua_State *L) {
	glPointParameterf(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPointParameterfv
// void glPointParameterfv (GLenum pname, const GLfloat *params)
#ifdef glPointParameterfv
static int luaglew_glPointParameterfv(lua_State *L) {
	glPointParameterfv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glSecondaryColor3b
// void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue)
#ifdef glSecondaryColor3b
static int luaglew_glSecondaryColor3b(lua_State *L) {
	glSecondaryColor3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3bv
// void glSecondaryColor3bv (const GLbyte *v)
#ifdef glSecondaryColor3bv
static int luaglew_glSecondaryColor3bv(lua_State *L) {
	glSecondaryColor3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3d
// void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue)
#ifdef glSecondaryColor3d
static int luaglew_glSecondaryColor3d(lua_State *L) {
	glSecondaryColor3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3dv
// void glSecondaryColor3dv (const GLdouble *v)
#ifdef glSecondaryColor3dv
static int luaglew_glSecondaryColor3dv(lua_State *L) {
	glSecondaryColor3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3f
// void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue)
#ifdef glSecondaryColor3f
static int luaglew_glSecondaryColor3f(lua_State *L) {
	glSecondaryColor3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3fv
// void glSecondaryColor3fv (const GLfloat *v)
#ifdef glSecondaryColor3fv
static int luaglew_glSecondaryColor3fv(lua_State *L) {
	glSecondaryColor3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3i
// void glSecondaryColor3i (GLint red, GLint green, GLint blue)
#ifdef glSecondaryColor3i
static int luaglew_glSecondaryColor3i(lua_State *L) {
	glSecondaryColor3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3iv
// void glSecondaryColor3iv (const GLint *v)
#ifdef glSecondaryColor3iv
static int luaglew_glSecondaryColor3iv(lua_State *L) {
	glSecondaryColor3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3s
// void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue)
#ifdef glSecondaryColor3s
static int luaglew_glSecondaryColor3s(lua_State *L) {
	glSecondaryColor3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3sv
// void glSecondaryColor3sv (const GLshort *v)
#ifdef glSecondaryColor3sv
static int luaglew_glSecondaryColor3sv(lua_State *L) {
	glSecondaryColor3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3ub
// void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue)
#ifdef glSecondaryColor3ub
static int luaglew_glSecondaryColor3ub(lua_State *L) {
	glSecondaryColor3ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3ubv
// void glSecondaryColor3ubv (const GLubyte *v)
#ifdef glSecondaryColor3ubv
static int luaglew_glSecondaryColor3ubv(lua_State *L) {
	glSecondaryColor3ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3ui
// void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue)
#ifdef glSecondaryColor3ui
static int luaglew_glSecondaryColor3ui(lua_State *L) {
	glSecondaryColor3ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3uiv
// void glSecondaryColor3uiv (const GLuint *v)
#ifdef glSecondaryColor3uiv
static int luaglew_glSecondaryColor3uiv(lua_State *L) {
	glSecondaryColor3uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3us
// void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue)
#ifdef glSecondaryColor3us
static int luaglew_glSecondaryColor3us(lua_State *L) {
	glSecondaryColor3us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3usv
// void glSecondaryColor3usv (const GLushort *v)
#ifdef glSecondaryColor3usv
static int luaglew_glSecondaryColor3usv(lua_State *L) {
	glSecondaryColor3usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColorPointer
// void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, GLvoid *pointer)
#ifdef glSecondaryColorPointer
static int luaglew_glSecondaryColorPointer(lua_State *L) {
	glSecondaryColorPointer((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glBlendFuncSeparate
// void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
#ifdef glBlendFuncSeparate
static int luaglew_glBlendFuncSeparate(lua_State *L) {
	glBlendFuncSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glWindowPos2d
// void glWindowPos2d (GLdouble x, GLdouble y)
#ifdef glWindowPos2d
static int luaglew_glWindowPos2d(lua_State *L) {
	glWindowPos2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glWindowPos2f
// void glWindowPos2f (GLfloat x, GLfloat y)
#ifdef glWindowPos2f
static int luaglew_glWindowPos2f(lua_State *L) {
	glWindowPos2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glWindowPos2i
// void glWindowPos2i (GLint x, GLint y)
#ifdef glWindowPos2i
static int luaglew_glWindowPos2i(lua_State *L) {
	glWindowPos2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glWindowPos2s
// void glWindowPos2s (GLshort x, GLshort y)
#ifdef glWindowPos2s
static int luaglew_glWindowPos2s(lua_State *L) {
	glWindowPos2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glWindowPos2dv
// void glWindowPos2dv (const GLdouble *p)
#ifdef glWindowPos2dv
static int luaglew_glWindowPos2dv(lua_State *L) {
	glWindowPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos2fv
// void glWindowPos2fv (const GLfloat *p)
#ifdef glWindowPos2fv
static int luaglew_glWindowPos2fv(lua_State *L) {
	glWindowPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos2iv
// void glWindowPos2iv (const GLint *p)
#ifdef glWindowPos2iv
static int luaglew_glWindowPos2iv(lua_State *L) {
	glWindowPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos2sv
// void glWindowPos2sv (const GLshort *p)
#ifdef glWindowPos2sv
static int luaglew_glWindowPos2sv(lua_State *L) {
	glWindowPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3d
// void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z)
#ifdef glWindowPos3d
static int luaglew_glWindowPos3d(lua_State *L) {
	glWindowPos3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glWindowPos3f
// void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z)
#ifdef glWindowPos3f
static int luaglew_glWindowPos3f(lua_State *L) {
	glWindowPos3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glWindowPos3i
// void glWindowPos3i (GLint x, GLint y, GLint z)
#ifdef glWindowPos3i
static int luaglew_glWindowPos3i(lua_State *L) {
	glWindowPos3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glWindowPos3s
// void glWindowPos3s (GLshort x, GLshort y, GLshort z)
#ifdef glWindowPos3s
static int luaglew_glWindowPos3s(lua_State *L) {
	glWindowPos3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glWindowPos3dv
// void glWindowPos3dv (const GLdouble *p)
#ifdef glWindowPos3dv
static int luaglew_glWindowPos3dv(lua_State *L) {
	glWindowPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos3fv
// void glWindowPos3fv (const GLfloat *p)
#ifdef glWindowPos3fv
static int luaglew_glWindowPos3fv(lua_State *L) {
	glWindowPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos3iv
// void glWindowPos3iv (const GLint *p)
#ifdef glWindowPos3iv
static int luaglew_glWindowPos3iv(lua_State *L) {
	glWindowPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3sv
// void glWindowPos3sv (const GLshort *p)
#ifdef glWindowPos3sv
static int luaglew_glWindowPos3sv(lua_State *L) {
	glWindowPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glGenQueries
// void glGenQueries (GLsizei n, GLuint* ids)
#ifdef glGenQueries
static int luaglew_glGenQueries(lua_State *L) {
	glGenQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteQueries
// void glDeleteQueries (GLsizei n, const GLuint* ids)
#ifdef glDeleteQueries
static int luaglew_glDeleteQueries(lua_State *L) {
	glDeleteQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glIsQuery
// GLboolean glIsQuery (GLuint id)
#ifdef glIsQuery
static int luaglew_glIsQuery(lua_State *L) {
	GLboolean return_value;
	return_value = glIsQuery((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glBeginQuery
// void glBeginQuery (GLenum target, GLuint id)
#ifdef glBeginQuery
static int luaglew_glBeginQuery(lua_State *L) {
	glBeginQuery(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glEndQuery
// void glEndQuery (GLenum target)
#ifdef glEndQuery
static int luaglew_glEndQuery(lua_State *L) {
	glEndQuery(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glGetQueryiv
// void glGetQueryiv (GLenum target, GLenum pname, GLint* params)
#ifdef glGetQueryiv
static int luaglew_glGetQueryiv(lua_State *L) {
	glGetQueryiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectiv
// void glGetQueryObjectiv (GLuint id, GLenum pname, GLint* params)
#ifdef glGetQueryObjectiv
static int luaglew_glGetQueryObjectiv(lua_State *L) {
	glGetQueryObjectiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectuiv
// void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint* params)
#ifdef glGetQueryObjectuiv
static int luaglew_glGetQueryObjectuiv(lua_State *L) {
	glGetQueryObjectuiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glBindBuffer
// void glBindBuffer (GLenum target, GLuint buffer)
#ifdef glBindBuffer
static int luaglew_glBindBuffer(lua_State *L) {
	glBindBuffer(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glDeleteBuffers
// void glDeleteBuffers (GLsizei n, const GLuint* buffers)
#ifdef glDeleteBuffers
static int luaglew_glDeleteBuffers(lua_State *L) {
	glDeleteBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenBuffers
// void glGenBuffers (GLsizei n, GLuint* buffers)
#ifdef glGenBuffers
static int luaglew_glGenBuffers(lua_State *L) {
	glGenBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glIsBuffer
// GLboolean glIsBuffer (GLuint buffer)
#ifdef glIsBuffer
static int luaglew_glIsBuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsBuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glBufferData
// void glBufferData (GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
#ifdef glBufferData
static int luaglew_glBufferData(lua_State *L) {
	glBufferData(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glBufferSubData
// void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
#ifdef glBufferSubData
static int luaglew_glBufferSubData(lua_State *L) {
	glBufferSubData(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetBufferSubData
// void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data)
#ifdef glGetBufferSubData
static int luaglew_glGetBufferSubData(lua_State *L) {
	glGetBufferSubData(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glMapBuffer
// GLvoid* glMapBuffer (GLenum target, GLenum access)
#ifdef glMapBuffer
static int luaglew_glMapBuffer(lua_State *L) {
	GLvoid* return_value;
	return_value = glMapBuffer(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
#endif

//####glUnmapBuffer
// GLboolean glUnmapBuffer (GLenum target)
#ifdef glUnmapBuffer
static int luaglew_glUnmapBuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glUnmapBuffer(luaglew_checkenum(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glGetBufferParameteriv
// void glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params)
#ifdef glGetBufferParameteriv
static int luaglew_glGetBufferParameteriv(lua_State *L) {
	glGetBufferParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetBufferPointerv
// void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid** params)
#ifdef glGetBufferPointerv
static int luaglew_glGetBufferPointerv(lua_State *L) {
	glGetBufferPointerv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glBlendEquationSeparate
// void glBlendEquationSeparate (GLenum, GLenum)
#ifdef glBlendEquationSeparate
static int luaglew_glBlendEquationSeparate(lua_State *L) {
	glBlendEquationSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glDrawBuffers
// void glDrawBuffers (GLsizei n, const GLenum* bufs)
#ifdef glDrawBuffers
static int luaglew_glDrawBuffers(lua_State *L) {
	glDrawBuffers((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_enum(L, 2));
	return 0;
}
#endif

//####glStencilOpSeparate
// void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
#ifdef glStencilOpSeparate
static int luaglew_glStencilOpSeparate(lua_State *L) {
	glStencilOpSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glStencilFuncSeparate
// void glStencilFuncSeparate (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
#ifdef glStencilFuncSeparate
static int luaglew_glStencilFuncSeparate(lua_State *L) {
	glStencilFuncSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glStencilMaskSeparate
// void glStencilMaskSeparate (GLenum, GLuint)
#ifdef glStencilMaskSeparate
static int luaglew_glStencilMaskSeparate(lua_State *L) {
	glStencilMaskSeparate(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glAttachShader
// void glAttachShader (GLuint program, GLuint shader)
#ifdef glAttachShader
static int luaglew_glAttachShader(lua_State *L) {
	glAttachShader((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindAttribLocation
// void glBindAttribLocation (GLuint program, GLuint index, const GLchar* name)
#ifdef glBindAttribLocation
static int luaglew_glBindAttribLocation(lua_State *L) {
	glBindAttribLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glCompileShader
// void glCompileShader (GLuint shader)
#ifdef glCompileShader
static int luaglew_glCompileShader(lua_State *L) {
	glCompileShader((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glCreateProgram
// GLuint glCreateProgram (void)
#ifdef glCreateProgram
static int luaglew_glCreateProgram(lua_State *L) {
	GLuint return_value;
	return_value = glCreateProgram();
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glCreateShader
// GLuint glCreateShader (GLenum type)
#ifdef glCreateShader
static int luaglew_glCreateShader(lua_State *L) {
	GLuint return_value;
	return_value = glCreateShader(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glDeleteProgram
// void glDeleteProgram (GLuint program)
#ifdef glDeleteProgram
static int luaglew_glDeleteProgram(lua_State *L) {
	glDeleteProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDeleteShader
// void glDeleteShader (GLuint shader)
#ifdef glDeleteShader
static int luaglew_glDeleteShader(lua_State *L) {
	glDeleteShader((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDetachShader
// void glDetachShader (GLuint program, GLuint shader)
#ifdef glDetachShader
static int luaglew_glDetachShader(lua_State *L) {
	glDetachShader((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glDisableVertexAttribArray
// void glDisableVertexAttribArray (GLuint)
#ifdef glDisableVertexAttribArray
static int luaglew_glDisableVertexAttribArray(lua_State *L) {
	glDisableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glEnableVertexAttribArray
// void glEnableVertexAttribArray (GLuint)
#ifdef glEnableVertexAttribArray
static int luaglew_glEnableVertexAttribArray(lua_State *L) {
	glEnableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGetActiveAttrib
// void glGetActiveAttrib (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
#ifdef glGetActiveAttrib
static int luaglew_glGetActiveAttrib(lua_State *L) {
	glGetActiveAttrib((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetActiveUniform
// void glGetActiveUniform (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
#ifdef glGetActiveUniform
static int luaglew_glGetActiveUniform(lua_State *L) {
	glGetActiveUniform((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetAttachedShaders
// void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders)
#ifdef glGetAttachedShaders
static int luaglew_glGetAttachedShaders(lua_State *L) {
	glGetAttachedShaders((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetAttribLocation
// GLint glGetAttribLocation (GLuint program, const GLchar* name)
#ifdef glGetAttribLocation
static int luaglew_glGetAttribLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetProgramiv
// void glGetProgramiv (GLuint program, GLenum pname, GLint* param)
#ifdef glGetProgramiv
static int luaglew_glGetProgramiv(lua_State *L) {
	glGetProgramiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetProgramInfoLog
// void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
#ifdef glGetProgramInfoLog
static int luaglew_glGetProgramInfoLog(lua_State *L) {
	glGetProgramInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetShaderiv
// void glGetShaderiv (GLuint shader, GLenum pname, GLint* param)
#ifdef glGetShaderiv
static int luaglew_glGetShaderiv(lua_State *L) {
	glGetShaderiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetShaderInfoLog
// void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
#ifdef glGetShaderInfoLog
static int luaglew_glGetShaderInfoLog(lua_State *L) {
	glGetShaderInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glShaderSource
// void glShaderSource (GLuint shader, GLsizei count, const GLchar** strings, const GLint* lengths)
#ifdef glShaderSource
static int luaglew_glShaderSource(lua_State *L) {
	glShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetUniformLocation
// GLint glGetUniformLocation (GLuint program, const GLchar* name)
#ifdef glGetUniformLocation
static int luaglew_glGetUniformLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetUniformfv
// void glGetUniformfv (GLuint program, GLint location, GLfloat* params)
#ifdef glGetUniformfv
static int luaglew_glGetUniformfv(lua_State *L) {
	glGetUniformfv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetUniformiv
// void glGetUniformiv (GLuint program, GLint location, GLint* params)
#ifdef glGetUniformiv
static int luaglew_glGetUniformiv(lua_State *L) {
	glGetUniformiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribdv
// void glGetVertexAttribdv (GLuint, GLenum, GLdouble*)
#ifdef glGetVertexAttribdv
static int luaglew_glGetVertexAttribdv(lua_State *L) {
	glGetVertexAttribdv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribfv
// void glGetVertexAttribfv (GLuint, GLenum, GLfloat*)
#ifdef glGetVertexAttribfv
static int luaglew_glGetVertexAttribfv(lua_State *L) {
	glGetVertexAttribfv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribiv
// void glGetVertexAttribiv (GLuint, GLenum, GLint*)
#ifdef glGetVertexAttribiv
static int luaglew_glGetVertexAttribiv(lua_State *L) {
	glGetVertexAttribiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribPointerv
// void glGetVertexAttribPointerv (GLuint, GLenum, GLvoid*)
#ifdef glGetVertexAttribPointerv
static int luaglew_glGetVertexAttribPointerv(lua_State *L) {
	glGetVertexAttribPointerv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glIsProgram
// GLboolean glIsProgram (GLuint program)
#ifdef glIsProgram
static int luaglew_glIsProgram(lua_State *L) {
	GLboolean return_value;
	return_value = glIsProgram((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsShader
// GLboolean glIsShader (GLuint shader)
#ifdef glIsShader
static int luaglew_glIsShader(lua_State *L) {
	GLboolean return_value;
	return_value = glIsShader((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glLinkProgram
// void glLinkProgram (GLuint program)
#ifdef glLinkProgram
static int luaglew_glLinkProgram(lua_State *L) {
	glLinkProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGetShaderSource
// void glGetShaderSource (GLint obj, GLsizei maxLength, GLsizei* length, GLchar* source)
#ifdef glGetShaderSource
static int luaglew_glGetShaderSource(lua_State *L) {
	glGetShaderSource((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glUseProgram
// void glUseProgram (GLuint program)
#ifdef glUseProgram
static int luaglew_glUseProgram(lua_State *L) {
	glUseProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glUniform1f
// void glUniform1f (GLint location, GLfloat v0)
#ifdef glUniform1f
static int luaglew_glUniform1f(lua_State *L) {
	glUniform1f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glUniform1fv
// void glUniform1fv (GLint location, GLsizei count, const GLfloat* value)
#ifdef glUniform1fv
static int luaglew_glUniform1fv(lua_State *L) {
	glUniform1fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform1i
// void glUniform1i (GLint location, GLint v0)
#ifdef glUniform1i
static int luaglew_glUniform1i(lua_State *L) {
	glUniform1i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glUniform1iv
// void glUniform1iv (GLint location, GLsizei count, const GLint* value)
#ifdef glUniform1iv
static int luaglew_glUniform1iv(lua_State *L) {
	glUniform1iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform2f
// void glUniform2f (GLint location, GLfloat v0, GLfloat v1)
#ifdef glUniform2f
static int luaglew_glUniform2f(lua_State *L) {
	glUniform2f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glUniform2fv
// void glUniform2fv (GLint location, GLsizei count, const GLfloat* value)
#ifdef glUniform2fv
static int luaglew_glUniform2fv(lua_State *L) {
	glUniform2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform2i
// void glUniform2i (GLint location, GLint v0, GLint v1)
#ifdef glUniform2i
static int luaglew_glUniform2i(lua_State *L) {
	glUniform2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glUniform2iv
// void glUniform2iv (GLint location, GLsizei count, const GLint* value)
#ifdef glUniform2iv
static int luaglew_glUniform2iv(lua_State *L) {
	glUniform2iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform3f
// void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
#ifdef glUniform3f
static int luaglew_glUniform3f(lua_State *L) {
	glUniform3f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glUniform3fv
// void glUniform3fv (GLint location, GLsizei count, const GLfloat* value)
#ifdef glUniform3fv
static int luaglew_glUniform3fv(lua_State *L) {
	glUniform3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform3i
// void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2)
#ifdef glUniform3i
static int luaglew_glUniform3i(lua_State *L) {
	glUniform3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glUniform3iv
// void glUniform3iv (GLint location, GLsizei count, const GLint* value)
#ifdef glUniform3iv
static int luaglew_glUniform3iv(lua_State *L) {
	glUniform3iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform4f
// void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
#ifdef glUniform4f
static int luaglew_glUniform4f(lua_State *L) {
	glUniform4f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glUniform4fv
// void glUniform4fv (GLint location, GLsizei count, const GLfloat* value)
#ifdef glUniform4fv
static int luaglew_glUniform4fv(lua_State *L) {
	glUniform4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform4i
// void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
#ifdef glUniform4i
static int luaglew_glUniform4i(lua_State *L) {
	glUniform4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glUniform4iv
// void glUniform4iv (GLint location, GLsizei count, const GLint* value)
#ifdef glUniform4iv
static int luaglew_glUniform4iv(lua_State *L) {
	glUniform4iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniformMatrix2fv
// void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glUniformMatrix2fv
static int luaglew_glUniformMatrix2fv(lua_State *L) {
	glUniformMatrix2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix3fv
// void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glUniformMatrix3fv
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix4fv
// void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
#ifdef glUniformMatrix4fv
static int luaglew_glUniformMatrix4fv(lua_State *L) {
	glUniformMatrix4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glValidateProgram
// void glValidateProgram (GLuint program)
#ifdef glValidateProgram
static int luaglew_glValidateProgram(lua_State *L) {
	glValidateProgram((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glVertexAttrib1d
// void glVertexAttrib1d (GLuint index, GLdouble x)
#ifdef glVertexAttrib1d
static int luaglew_glVertexAttrib1d(lua_State *L) {
	glVertexAttrib1d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1dv
// void glVertexAttrib1dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttrib1dv
static int luaglew_glVertexAttrib1dv(lua_State *L) {
	glVertexAttrib1dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1f
// void glVertexAttrib1f (GLuint index, GLfloat x)
#ifdef glVertexAttrib1f
static int luaglew_glVertexAttrib1f(lua_State *L) {
	glVertexAttrib1f((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1fv
// void glVertexAttrib1fv (GLuint index, const GLfloat* v)
#ifdef glVertexAttrib1fv
static int luaglew_glVertexAttrib1fv(lua_State *L) {
	glVertexAttrib1fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1s
// void glVertexAttrib1s (GLuint index, GLshort x)
#ifdef glVertexAttrib1s
static int luaglew_glVertexAttrib1s(lua_State *L) {
	glVertexAttrib1s((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1sv
// void glVertexAttrib1sv (GLuint index, const GLshort* v)
#ifdef glVertexAttrib1sv
static int luaglew_glVertexAttrib1sv(lua_State *L) {
	glVertexAttrib1sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2d
// void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y)
#ifdef glVertexAttrib2d
static int luaglew_glVertexAttrib2d(lua_State *L) {
	glVertexAttrib2d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2dv
// void glVertexAttrib2dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttrib2dv
static int luaglew_glVertexAttrib2dv(lua_State *L) {
	glVertexAttrib2dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2f
// void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y)
#ifdef glVertexAttrib2f
static int luaglew_glVertexAttrib2f(lua_State *L) {
	glVertexAttrib2f((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2fv
// void glVertexAttrib2fv (GLuint index, const GLfloat* v)
#ifdef glVertexAttrib2fv
static int luaglew_glVertexAttrib2fv(lua_State *L) {
	glVertexAttrib2fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2s
// void glVertexAttrib2s (GLuint index, GLshort x, GLshort y)
#ifdef glVertexAttrib2s
static int luaglew_glVertexAttrib2s(lua_State *L) {
	glVertexAttrib2s((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2sv
// void glVertexAttrib2sv (GLuint index, const GLshort* v)
#ifdef glVertexAttrib2sv
static int luaglew_glVertexAttrib2sv(lua_State *L) {
	glVertexAttrib2sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3d
// void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z)
#ifdef glVertexAttrib3d
static int luaglew_glVertexAttrib3d(lua_State *L) {
	glVertexAttrib3d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3dv
// void glVertexAttrib3dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttrib3dv
static int luaglew_glVertexAttrib3dv(lua_State *L) {
	glVertexAttrib3dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3f
// void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z)
#ifdef glVertexAttrib3f
static int luaglew_glVertexAttrib3f(lua_State *L) {
	glVertexAttrib3f((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3fv
// void glVertexAttrib3fv (GLuint index, const GLfloat* v)
#ifdef glVertexAttrib3fv
static int luaglew_glVertexAttrib3fv(lua_State *L) {
	glVertexAttrib3fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3s
// void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z)
#ifdef glVertexAttrib3s
static int luaglew_glVertexAttrib3s(lua_State *L) {
	glVertexAttrib3s((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3sv
// void glVertexAttrib3sv (GLuint index, const GLshort* v)
#ifdef glVertexAttrib3sv
static int luaglew_glVertexAttrib3sv(lua_State *L) {
	glVertexAttrib3sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nbv
// void glVertexAttrib4Nbv (GLuint index, const GLbyte* v)
#ifdef glVertexAttrib4Nbv
static int luaglew_glVertexAttrib4Nbv(lua_State *L) {
	glVertexAttrib4Nbv((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Niv
// void glVertexAttrib4Niv (GLuint index, const GLint* v)
#ifdef glVertexAttrib4Niv
static int luaglew_glVertexAttrib4Niv(lua_State *L) {
	glVertexAttrib4Niv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nsv
// void glVertexAttrib4Nsv (GLuint index, const GLshort* v)
#ifdef glVertexAttrib4Nsv
static int luaglew_glVertexAttrib4Nsv(lua_State *L) {
	glVertexAttrib4Nsv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nub
// void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
#ifdef glVertexAttrib4Nub
static int luaglew_glVertexAttrib4Nub(lua_State *L) {
	glVertexAttrib4Nub((GLuint)luaL_checkint(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3), (GLubyte)luaL_checknumber(L, 4), (GLubyte)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4Nubv
// void glVertexAttrib4Nubv (GLuint index, const GLubyte* v)
#ifdef glVertexAttrib4Nubv
static int luaglew_glVertexAttrib4Nubv(lua_State *L) {
	glVertexAttrib4Nubv((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nuiv
// void glVertexAttrib4Nuiv (GLuint index, const GLuint* v)
#ifdef glVertexAttrib4Nuiv
static int luaglew_glVertexAttrib4Nuiv(lua_State *L) {
	glVertexAttrib4Nuiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nusv
// void glVertexAttrib4Nusv (GLuint index, const GLushort* v)
#ifdef glVertexAttrib4Nusv
static int luaglew_glVertexAttrib4Nusv(lua_State *L) {
	glVertexAttrib4Nusv((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4bv
// void glVertexAttrib4bv (GLuint index, const GLbyte* v)
#ifdef glVertexAttrib4bv
static int luaglew_glVertexAttrib4bv(lua_State *L) {
	glVertexAttrib4bv((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4d
// void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glVertexAttrib4d
static int luaglew_glVertexAttrib4d(lua_State *L) {
	glVertexAttrib4d((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4dv
// void glVertexAttrib4dv (GLuint index, const GLdouble* v)
#ifdef glVertexAttrib4dv
static int luaglew_glVertexAttrib4dv(lua_State *L) {
	glVertexAttrib4dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4f
// void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glVertexAttrib4f
static int luaglew_glVertexAttrib4f(lua_State *L) {
	glVertexAttrib4f((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4fv
// void glVertexAttrib4fv (GLuint index, const GLfloat* v)
#ifdef glVertexAttrib4fv
static int luaglew_glVertexAttrib4fv(lua_State *L) {
	glVertexAttrib4fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4iv
// void glVertexAttrib4iv (GLuint index, const GLint* v)
#ifdef glVertexAttrib4iv
static int luaglew_glVertexAttrib4iv(lua_State *L) {
	glVertexAttrib4iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4s
// void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
#ifdef glVertexAttrib4s
static int luaglew_glVertexAttrib4s(lua_State *L) {
	glVertexAttrib4s((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4sv
// void glVertexAttrib4sv (GLuint index, const GLshort* v)
#ifdef glVertexAttrib4sv
static int luaglew_glVertexAttrib4sv(lua_State *L) {
	glVertexAttrib4sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4ubv
// void glVertexAttrib4ubv (GLuint index, const GLubyte* v)
#ifdef glVertexAttrib4ubv
static int luaglew_glVertexAttrib4ubv(lua_State *L) {
	glVertexAttrib4ubv((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4uiv
// void glVertexAttrib4uiv (GLuint index, const GLuint* v)
#ifdef glVertexAttrib4uiv
static int luaglew_glVertexAttrib4uiv(lua_State *L) {
	glVertexAttrib4uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4usv
// void glVertexAttrib4usv (GLuint index, const GLushort* v)
#ifdef glVertexAttrib4usv
static int luaglew_glVertexAttrib4usv(lua_State *L) {
	glVertexAttrib4usv((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribPointer
// void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer)
#ifdef glVertexAttribPointer
static int luaglew_glVertexAttribPointer(lua_State *L) {
	glVertexAttribPointer((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLboolean)lua_toboolean(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_int(L, 6));
	return 0;
}
#endif

//####glUniformMatrix2x3fv
// void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix2x3fv
static int luaglew_glUniformMatrix2x3fv(lua_State *L) {
	glUniformMatrix2x3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix3x2fv
// void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix3x2fv
static int luaglew_glUniformMatrix3x2fv(lua_State *L) {
	glUniformMatrix3x2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix2x4fv
// void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix2x4fv
static int luaglew_glUniformMatrix2x4fv(lua_State *L) {
	glUniformMatrix2x4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix4x2fv
// void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix4x2fv
static int luaglew_glUniformMatrix4x2fv(lua_State *L) {
	glUniformMatrix4x2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix3x4fv
// void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix3x4fv
static int luaglew_glUniformMatrix3x4fv(lua_State *L) {
	glUniformMatrix3x4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix4x3fv
// void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix4x3fv
static int luaglew_glUniformMatrix4x3fv(lua_State *L) {
	glUniformMatrix4x3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glColorMaski
// void glColorMaski (GLuint param1, GLboolean param2, GLboolean param3, GLboolean param4, GLboolean param5)
#ifdef glColorMaski
static int luaglew_glColorMaski(lua_State *L) {
	glColorMaski((GLuint)luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4), (GLboolean)lua_toboolean(L, 5));
	return 0;
}
#endif

//####glGetBooleani_v
// void glGetBooleani_v (GLenum param1, GLuint param2, GLboolean* param3)
#ifdef glGetBooleani_v
static int luaglew_glGetBooleani_v(lua_State *L) {
	glGetBooleani_v(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	return 0;
}
#endif

//####glEnablei
// void glEnablei (GLenum param1, GLuint param2)
#ifdef glEnablei
static int luaglew_glEnablei(lua_State *L) {
	glEnablei(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glDisablei
// void glDisablei (GLenum param1, GLuint param2)
#ifdef glDisablei
static int luaglew_glDisablei(lua_State *L) {
	glDisablei(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glIsEnabledi
// GLboolean glIsEnabledi (GLenum param1, GLuint param2)
#ifdef glIsEnabledi
static int luaglew_glIsEnabledi(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabledi(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glBeginTransformFeedback
// void glBeginTransformFeedback (GLenum param1)
#ifdef glBeginTransformFeedback
static int luaglew_glBeginTransformFeedback(lua_State *L) {
	glBeginTransformFeedback(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glEndTransformFeedback
// void glEndTransformFeedback (void)
#ifdef glEndTransformFeedback
static int luaglew_glEndTransformFeedback(lua_State *L) {
	glEndTransformFeedback();
	return 0;
}
#endif

//####glTransformFeedbackVaryings
// void glTransformFeedbackVaryings (GLuint param1, GLsizei param2, const GLchar ** param3, GLenum param4)
#ifdef glTransformFeedbackVaryings
static int luaglew_glTransformFeedbackVaryings(lua_State *L) {
	glTransformFeedbackVaryings((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glGetTransformFeedbackVarying
// void glGetTransformFeedbackVarying (GLuint param1, GLuint param2, GLint* param3)
#ifdef glGetTransformFeedbackVarying
static int luaglew_glGetTransformFeedbackVarying(lua_State *L) {
	glGetTransformFeedbackVarying((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glClampColor
// void glClampColor (GLenum param1, GLenum param2)
#ifdef glClampColor
static int luaglew_glClampColor(lua_State *L) {
	glClampColor(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBeginConditionalRender
// void glBeginConditionalRender (GLuint param1, GLenum param2)
#ifdef glBeginConditionalRender
static int luaglew_glBeginConditionalRender(lua_State *L) {
	glBeginConditionalRender((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glEndConditionalRender
// void glEndConditionalRender (void)
#ifdef glEndConditionalRender
static int luaglew_glEndConditionalRender(lua_State *L) {
	glEndConditionalRender();
	return 0;
}
#endif

//####glVertexAttribI1i
// void glVertexAttribI1i (GLuint param1, GLint param2)
#ifdef glVertexAttribI1i
static int luaglew_glVertexAttribI1i(lua_State *L) {
	glVertexAttribI1i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2i
// void glVertexAttribI2i (GLuint param1, GLint param2, GLint param3)
#ifdef glVertexAttribI2i
static int luaglew_glVertexAttribI2i(lua_State *L) {
	glVertexAttribI2i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertexAttribI3i
// void glVertexAttribI3i (GLuint param1, GLint param2, GLint param3, GLint param4)
#ifdef glVertexAttribI3i
static int luaglew_glVertexAttribI3i(lua_State *L) {
	glVertexAttribI3i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexAttribI4i
// void glVertexAttribI4i (GLuint param1, GLint param2, GLint param3, GLint param4, GLint param5)
#ifdef glVertexAttribI4i
static int luaglew_glVertexAttribI4i(lua_State *L) {
	glVertexAttribI4i((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glVertexAttribI1ui
// void glVertexAttribI1ui (GLuint param1, GLuint param2)
#ifdef glVertexAttribI1ui
static int luaglew_glVertexAttribI1ui(lua_State *L) {
	glVertexAttribI1ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2ui
// void glVertexAttribI2ui (GLuint param1, GLuint param2, GLuint param3)
#ifdef glVertexAttribI2ui
static int luaglew_glVertexAttribI2ui(lua_State *L) {
	glVertexAttribI2ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertexAttribI3ui
// void glVertexAttribI3ui (GLuint param1, GLuint param2, GLuint param3, GLuint param4)
#ifdef glVertexAttribI3ui
static int luaglew_glVertexAttribI3ui(lua_State *L) {
	glVertexAttribI3ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexAttribI4ui
// void glVertexAttribI4ui (GLuint param1, GLuint param2, GLuint param3, GLuint param4, GLuint param5)
#ifdef glVertexAttribI4ui
static int luaglew_glVertexAttribI4ui(lua_State *L) {
	glVertexAttribI4ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glVertexAttribI1iv
// void glVertexAttribI1iv (GLuint param1, const GLint* param2)
#ifdef glVertexAttribI1iv
static int luaglew_glVertexAttribI1iv(lua_State *L) {
	glVertexAttribI1iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2iv
// void glVertexAttribI2iv (GLuint param1, const GLint* param2)
#ifdef glVertexAttribI2iv
static int luaglew_glVertexAttribI2iv(lua_State *L) {
	glVertexAttribI2iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI3iv
// void glVertexAttribI3iv (GLuint param1, const GLint* param2)
#ifdef glVertexAttribI3iv
static int luaglew_glVertexAttribI3iv(lua_State *L) {
	glVertexAttribI3iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4iv
// void glVertexAttribI4iv (GLuint param1, const GLint* param2)
#ifdef glVertexAttribI4iv
static int luaglew_glVertexAttribI4iv(lua_State *L) {
	glVertexAttribI4iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI1uiv
// void glVertexAttribI1uiv (GLuint param1, const GLuint* param2)
#ifdef glVertexAttribI1uiv
static int luaglew_glVertexAttribI1uiv(lua_State *L) {
	glVertexAttribI1uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI2uiv
// void glVertexAttribI2uiv (GLuint param1, const GLuint* param2)
#ifdef glVertexAttribI2uiv
static int luaglew_glVertexAttribI2uiv(lua_State *L) {
	glVertexAttribI2uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI3uiv
// void glVertexAttribI3uiv (GLuint param1, const GLuint* param2)
#ifdef glVertexAttribI3uiv
static int luaglew_glVertexAttribI3uiv(lua_State *L) {
	glVertexAttribI3uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4uiv
// void glVertexAttribI4uiv (GLuint param1, const GLuint* param2)
#ifdef glVertexAttribI4uiv
static int luaglew_glVertexAttribI4uiv(lua_State *L) {
	glVertexAttribI4uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4bv
// void glVertexAttribI4bv (GLuint param1, const GLbyte* param2)
#ifdef glVertexAttribI4bv
static int luaglew_glVertexAttribI4bv(lua_State *L) {
	glVertexAttribI4bv((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4sv
// void glVertexAttribI4sv (GLuint param1, const GLshort* param2)
#ifdef glVertexAttribI4sv
static int luaglew_glVertexAttribI4sv(lua_State *L) {
	glVertexAttribI4sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4ubv
// void glVertexAttribI4ubv (GLuint param1, const GLubyte* param2)
#ifdef glVertexAttribI4ubv
static int luaglew_glVertexAttribI4ubv(lua_State *L) {
	glVertexAttribI4ubv((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttribI4usv
// void glVertexAttribI4usv (GLuint param1, const GLushort* param2)
#ifdef glVertexAttribI4usv
static int luaglew_glVertexAttribI4usv(lua_State *L) {
	glVertexAttribI4usv((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribIPointer
// void glVertexAttribIPointer (GLuint param1, GLint param2, GLenum param3, GLsizei param4, const GLvoid* param5)
#ifdef glVertexAttribIPointer
static int luaglew_glVertexAttribIPointer(lua_State *L) {
	glVertexAttribIPointer((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetVertexAttribIiv
// void glGetVertexAttribIiv (GLuint param1, GLenum param2, GLint* param3)
#ifdef glGetVertexAttribIiv
static int luaglew_glGetVertexAttribIiv(lua_State *L) {
	glGetVertexAttribIiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribIuiv
// void glGetVertexAttribIuiv (GLuint param1, GLenum param2, GLuint* param3)
#ifdef glGetVertexAttribIuiv
static int luaglew_glGetVertexAttribIuiv(lua_State *L) {
	glGetVertexAttribIuiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetUniformuiv
// void glGetUniformuiv (GLuint param1, GLint param2, GLuint* param3)
#ifdef glGetUniformuiv
static int luaglew_glGetUniformuiv(lua_State *L) {
	glGetUniformuiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glBindFragDataLocation
// void glBindFragDataLocation (GLuint param1, GLuint param2, const GLchar* param3)
#ifdef glBindFragDataLocation
static int luaglew_glBindFragDataLocation(lua_State *L) {
	glBindFragDataLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glGetFragDataLocation
// GLint glGetFragDataLocation (GLuint param1, const GLchar* param2)
#ifdef glGetFragDataLocation
static int luaglew_glGetFragDataLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetFragDataLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glUniform1ui
// void glUniform1ui (GLint param1, GLuint param2)
#ifdef glUniform1ui
static int luaglew_glUniform1ui(lua_State *L) {
	glUniform1ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glUniform2ui
// void glUniform2ui (GLint param1, GLuint param2, GLuint param3)
#ifdef glUniform2ui
static int luaglew_glUniform2ui(lua_State *L) {
	glUniform2ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glUniform3ui
// void glUniform3ui (GLint param1, GLuint param2, GLuint param3, GLuint param4)
#ifdef glUniform3ui
static int luaglew_glUniform3ui(lua_State *L) {
	glUniform3ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glUniform4ui
// void glUniform4ui (GLint param1, GLuint param2, GLuint param3, GLuint param4, GLuint param5)
#ifdef glUniform4ui
static int luaglew_glUniform4ui(lua_State *L) {
	glUniform4ui((GLint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4), (GLuint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glUniform1uiv
// void glUniform1uiv (GLint param1, GLsizei param2, const GLuint* param3)
#ifdef glUniform1uiv
static int luaglew_glUniform1uiv(lua_State *L) {
	glUniform1uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform2uiv
// void glUniform2uiv (GLint param1, GLsizei param2, const GLuint* param3)
#ifdef glUniform2uiv
static int luaglew_glUniform2uiv(lua_State *L) {
	glUniform2uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform3uiv
// void glUniform3uiv (GLint param1, GLsizei param2, const GLuint* param3)
#ifdef glUniform3uiv
static int luaglew_glUniform3uiv(lua_State *L) {
	glUniform3uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform4uiv
// void glUniform4uiv (GLint param1, GLsizei param2, const GLuint* param3)
#ifdef glUniform4uiv
static int luaglew_glUniform4uiv(lua_State *L) {
	glUniform4uiv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexParameterIiv
// void glTexParameterIiv (GLenum param1, GLenum param2, const GLint* param3)
#ifdef glTexParameterIiv
static int luaglew_glTexParameterIiv(lua_State *L) {
	glTexParameterIiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexParameterIuiv
// void glTexParameterIuiv (GLenum param1, GLenum param2, const GLuint* param3)
#ifdef glTexParameterIuiv
static int luaglew_glTexParameterIuiv(lua_State *L) {
	glTexParameterIuiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterIiv
// void glGetTexParameterIiv (GLenum param1, GLenum param2, GLint* param3)
#ifdef glGetTexParameterIiv
static int luaglew_glGetTexParameterIiv(lua_State *L) {
	glGetTexParameterIiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterIuiv
// void glGetTexParameterIuiv (GLenum param1, GLenum param2, GLuint* param3)
#ifdef glGetTexParameterIuiv
static int luaglew_glGetTexParameterIuiv(lua_State *L) {
	glGetTexParameterIuiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glClearBufferiv
// void glClearBufferiv (GLenum param1, GLint param2, const GLint* param3)
#ifdef glClearBufferiv
static int luaglew_glClearBufferiv(lua_State *L) {
	glClearBufferiv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glClearBufferuiv
// void glClearBufferuiv (GLenum param1, GLint param2, const GLuint* param3)
#ifdef glClearBufferuiv
static int luaglew_glClearBufferuiv(lua_State *L) {
	glClearBufferuiv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glClearBufferfv
// void glClearBufferfv (GLenum param1, GLint param2, const GLfloat* param3)
#ifdef glClearBufferfv
static int luaglew_glClearBufferfv(lua_State *L) {
	glClearBufferfv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glClearBufferfi
// void glClearBufferfi (GLenum param1, GLint param2, GLfloat param3, GLint param4)
#ifdef glClearBufferfi
static int luaglew_glClearBufferfi(lua_State *L) {
	glClearBufferfi(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glGetStringi
// const GLubyte* glGetStringi (GLenum param1, GLuint param2)
#ifdef glGetStringi
static int luaglew_glGetStringi(lua_State *L) {
	GLubyte* return_value;
	return_value = glGetStringi(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushstring(L, return_value);
	return 1;
}
#endif

//####glDrawArraysInstanced
// void glDrawArraysInstanced (GLenum param1, GLint param2, GLsizei param3, GLsizei param4)
#ifdef glDrawArraysInstanced
static int luaglew_glDrawArraysInstanced(lua_State *L) {
	glDrawArraysInstanced(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glDrawElementsInstanced
// void glDrawElementsInstanced (GLenum param1, GLsizei param2, GLenum param3, const GLvoid* param4, GLsizei param5)
#ifdef glDrawElementsInstanced
static int luaglew_glDrawElementsInstanced(lua_State *L) {
	glDrawElementsInstanced(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glTexBuffer
// void glTexBuffer (GLenum param1, GLenum param2, GLuint param3)
#ifdef glTexBuffer
static int luaglew_glTexBuffer(lua_State *L) {
	glTexBuffer(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glPrimitiveRestartIndex
// void glPrimitiveRestartIndex (GLuint param1)
#ifdef glPrimitiveRestartIndex
static int luaglew_glPrimitiveRestartIndex(lua_State *L) {
	glPrimitiveRestartIndex((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGetInteger64i_v
// void glGetInteger64i_v (GLenum param1, GLuint param2, GLint64 * param3)
#ifdef glGetInteger64i_v
static int luaglew_glGetInteger64i_v(lua_State *L) {
	glGetInteger64i_v(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint64 *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetBufferParameteri64v
// void glGetBufferParameteri64v (GLenum param1, GLenum param2, GLint64 * param3)
#ifdef glGetBufferParameteri64v
static int luaglew_glGetBufferParameteri64v(lua_State *L) {
	glGetBufferParameteri64v(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint64 *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glFramebufferTexture
// void glFramebufferTexture (GLenum param1, GLenum param2, GLuint param3, GLint param4)
#ifdef glFramebufferTexture
static int luaglew_glFramebufferTexture(lua_State *L) {
	glFramebufferTexture(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertexAttribDivisor
// void glVertexAttribDivisor (GLuint index, GLuint divisor)
#ifdef glVertexAttribDivisor
static int luaglew_glVertexAttribDivisor(lua_State *L) {
	glVertexAttribDivisor((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glMinSampleShading
// void glMinSampleShading (GLclampf value)
#ifdef glMinSampleShading
static int luaglew_glMinSampleShading(lua_State *L) {
	glMinSampleShading((GLclampf)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glBlendEquationSeparatei
// void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
#ifdef glBlendEquationSeparatei
static int luaglew_glBlendEquationSeparatei(lua_State *L) {
	glBlendEquationSeparatei((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3));
	return 0;
}
#endif

//####glBlendEquationi
// void glBlendEquationi (GLuint buf, GLenum mode)
#ifdef glBlendEquationi
static int luaglew_glBlendEquationi(lua_State *L) {
	glBlendEquationi((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBlendFuncSeparatei
// void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
#ifdef glBlendFuncSeparatei
static int luaglew_glBlendFuncSeparatei(lua_State *L) {
	glBlendFuncSeparatei((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), luaglew_checkenum(L, 5));
	return 0;
}
#endif

//####glBlendFunci
// void glBlendFunci (GLuint buf, GLenum src, GLenum dst)
#ifdef glBlendFunci
static int luaglew_glBlendFunci(lua_State *L) {
	glBlendFunci((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3));
	return 0;
}
#endif

//####glIsProgramARB
// 	GLboolean glIsProgramARB (GLuint program)
#ifdef glIsProgramARB
static int luaglew_glIsProgramARB(lua_State *L) {
		GLboolean return_value;
	return_value = glIsProgramARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glGetUniformLocation
// 	GLint glGetUniformLocation (GLuint program, const GLchar *name)
#ifdef glGetUniformLocation
static int luaglew_glGetUniformLocation(lua_State *L) {
		GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glBlendColorEXT
// 	void glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf)
#ifdef glBlendColorEXT
static int luaglew_glBlendColorEXT(lua_State *L) {
	glBlendColorEXT((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glCompileShaderARB
// 	void glCompileShaderARB (GLhandleARB shaderObj)
#ifdef glCompileShaderARB
static int luaglew_glCompileShaderARB(lua_State *L) {
	glCompileShaderARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glGetConvolutionFilter
// 	void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image)
#ifdef glGetConvolutionFilter
static int luaglew_glGetConvolutionFilter(lua_State *L) {
	glGetConvolutionFilter(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glUniform4iARB
// 	void glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
#ifdef glUniform4iARB
static int luaglew_glUniform4iARB(lua_State *L) {
	glUniform4iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glUniformMatrix3fv
// 	void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix3fv
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glVertexArrayRangeAPPLE
// 	void glVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
#ifdef glVertexArrayRangeAPPLE
static int luaglew_glVertexArrayRangeAPPLE(lua_State *L) {
	glVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glAreTexturesResident
// GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences)
#ifdef glAreTexturesResident
static int luaglew_glAreTexturesResident(lua_State *L) {
	GLboolean return_value;
	return_value = glAreTexturesResident((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsBufferARB
// GLboolean glIsBufferARB (GLuint buffer)
#ifdef glIsBufferARB
static int luaglew_glIsBufferARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsBufferARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsEnabled
// GLboolean glIsEnabled (GLenum cap)
#ifdef glIsEnabled
static int luaglew_glIsEnabled(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabled(luaglew_checkenum(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsEnabledIndexedEXT
// GLboolean glIsEnabledIndexedEXT (GLenum target, GLuint index)
#ifdef glIsEnabledIndexedEXT
static int luaglew_glIsEnabledIndexedEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsEnabledIndexedEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsFenceAPPLE
// GLboolean glIsFenceAPPLE (GLuint fence)
#ifdef glIsFenceAPPLE
static int luaglew_glIsFenceAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFenceAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsFramebuffer
// GLboolean glIsFramebuffer (GLuint)
#ifdef glIsFramebuffer
static int luaglew_glIsFramebuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFramebuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsFramebufferEXT
// GLboolean glIsFramebufferEXT (GLuint framebuffer)
#ifdef glIsFramebufferEXT
static int luaglew_glIsFramebufferEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsFramebufferEXT((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsList
// GLboolean glIsList (GLuint list)
#ifdef glIsList
static int luaglew_glIsList(lua_State *L) {
	GLboolean return_value;
	return_value = glIsList((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsProgramARB
// GLboolean glIsProgramARB (GLuint program)
#ifdef glIsProgramARB
static int luaglew_glIsProgramARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsProgramARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsQueryARB
// GLboolean glIsQueryARB (GLuint id)
#ifdef glIsQueryARB
static int luaglew_glIsQueryARB(lua_State *L) {
	GLboolean return_value;
	return_value = glIsQueryARB((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsRenderbuffer
// GLboolean glIsRenderbuffer (GLuint)
#ifdef glIsRenderbuffer
static int luaglew_glIsRenderbuffer(lua_State *L) {
	GLboolean return_value;
	return_value = glIsRenderbuffer((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsRenderbufferEXT
// GLboolean glIsRenderbufferEXT (GLuint renderbuffer)
#ifdef glIsRenderbufferEXT
static int luaglew_glIsRenderbufferEXT(lua_State *L) {
	GLboolean return_value;
	return_value = glIsRenderbufferEXT((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsTexture
// GLboolean glIsTexture (GLuint texture)
#ifdef glIsTexture
static int luaglew_glIsTexture(lua_State *L) {
	GLboolean return_value;
	return_value = glIsTexture((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsVertexArrayAPPLE
// GLboolean glIsVertexArrayAPPLE (GLuint id)
#ifdef glIsVertexArrayAPPLE
static int luaglew_glIsVertexArrayAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVertexArrayAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glIsVertexAttribEnabledAPPLE
// GLboolean glIsVertexAttribEnabledAPPLE (GLuint index, GLenum pname)
#ifdef glIsVertexAttribEnabledAPPLE
static int luaglew_glIsVertexAttribEnabledAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glIsVertexAttribEnabledAPPLE((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glTestFenceAPPLE
// GLboolean glTestFenceAPPLE (GLuint fence)
#ifdef glTestFenceAPPLE
static int luaglew_glTestFenceAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glTestFenceAPPLE((GLuint)luaL_checkint(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glTestObjectAPPLE
// GLboolean glTestObjectAPPLE (GLenum object, GLuint name)
#ifdef glTestObjectAPPLE
static int luaglew_glTestObjectAPPLE(lua_State *L) {
	GLboolean return_value;
	return_value = glTestObjectAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glUnmapBufferARB
// GLboolean glUnmapBufferARB (GLenum target)
#ifdef glUnmapBufferARB
static int luaglew_glUnmapBufferARB(lua_State *L) {
	GLboolean return_value;
	return_value = glUnmapBufferARB(luaglew_checkenum(L, 1));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####glCheckFramebufferStatus
// GLenum glCheckFramebufferStatus (GLenum)
#ifdef glCheckFramebufferStatus
static int luaglew_glCheckFramebufferStatus(lua_State *L) {
	GLenum return_value;
	return_value = glCheckFramebufferStatus(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glCheckFramebufferStatusEXT
// GLenum glCheckFramebufferStatusEXT (GLenum target)
#ifdef glCheckFramebufferStatusEXT
static int luaglew_glCheckFramebufferStatusEXT(lua_State *L) {
	GLenum return_value;
	return_value = glCheckFramebufferStatusEXT(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetError
// GLenum glGetError (void)
#ifdef glGetError
static int luaglew_glGetError(lua_State *L) {
	GLenum return_value;
	return_value = glGetError();
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glObjectPurgeableAPPLE
// GLenum glObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
#ifdef glObjectPurgeableAPPLE
static int luaglew_glObjectPurgeableAPPLE(lua_State *L) {
	GLenum return_value;
	return_value = glObjectPurgeableAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glObjectUnpurgeableAPPLE
// GLenum glObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
#ifdef glObjectUnpurgeableAPPLE
static int luaglew_glObjectUnpurgeableAPPLE(lua_State *L) {
	GLenum return_value;
	return_value = glObjectUnpurgeableAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glCreateProgramObjectARB
// GLhandleARB glCreateProgramObjectARB (void)
#ifdef glCreateProgramObjectARB
static int luaglew_glCreateProgramObjectARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glCreateProgramObjectARB();
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glCreateShaderObjectARB
// GLhandleARB glCreateShaderObjectARB (GLenum shaderType)
#ifdef glCreateShaderObjectARB
static int luaglew_glCreateShaderObjectARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glCreateShaderObjectARB(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetHandleARB
// GLhandleARB glGetHandleARB (GLenum pname)
#ifdef glGetHandleARB
static int luaglew_glGetHandleARB(lua_State *L) {
	GLhandleARB return_value;
	return_value = glGetHandleARB(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetAttribLocation
// GLint glGetAttribLocation (GLuint program, const GLchar *name)
#ifdef glGetAttribLocation
static int luaglew_glGetAttribLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetAttribLocationARB
// GLint glGetAttribLocationARB (GLhandleARB programObj, const GLcharARB *name)
#ifdef glGetAttribLocationARB
static int luaglew_glGetAttribLocationARB(lua_State *L) {
	GLint return_value;
	return_value = glGetAttribLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetUniformLocation
// GLint glGetUniformLocation (GLuint program, const GLchar *name)
#ifdef glGetUniformLocation
static int luaglew_glGetUniformLocation(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocation((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetUniformLocationARB
// GLint glGetUniformLocationARB (GLhandleARB programObj, const GLcharARB *name)
#ifdef glGetUniformLocationARB
static int luaglew_glGetUniformLocationARB(lua_State *L) {
	GLint return_value;
	return_value = glGetUniformLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glRenderMode
// GLint glRenderMode (GLenum mode)
#ifdef glRenderMode
static int luaglew_glRenderMode(lua_State *L) {
	GLint return_value;
	return_value = glRenderMode(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glRenderMode
// GLint glRenderMode (GLenum mode)	
#ifdef glRenderMode
static int luaglew_glRenderMode(lua_State *L) {
	GLint return_value;
	return_value = glRenderMode(luaglew_checkenum(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGenLists
// GLuint glGenLists (GLsizei range)
#ifdef glGenLists
static int luaglew_glGenLists(lua_State *L) {
	GLuint return_value;
	return_value = glGenLists((GLsizei)luaL_checklong(L, 1));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glGetUniformBlockIndex
// GLuint glGetUniformBlockIndex (GLuint program, const GLchar* uniformBlockName)
#ifdef glGetUniformBlockIndex
static int luaglew_glGetUniformBlockIndex(lua_State *L) {
	GLuint return_value;
	return_value = glGetUniformBlockIndex((GLuint)luaL_checkint(L, 1), (GLchar *)luaglew_checkarray_char(L, 2));
	lua_pushinteger(L, return_value);
	return 1;
}
#endif

//####glMapBuffer
// GLvoid * glMapBuffer (GLenum target, GLenum access)
#ifdef glMapBuffer
static int luaglew_glMapBuffer(lua_State *L) {
	GLvoid * return_value;
	return_value = glMapBuffer(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
#endif

//####glMapBufferARB
// GLvoid * glMapBufferARB (GLenum target, GLenum access)
#ifdef glMapBufferARB
static int luaglew_glMapBufferARB(lua_State *L) {
	GLvoid * return_value;
	return_value = glMapBufferARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
#endif

//####glGetString
// const GLubyte * glGetString (GLenum name)
#ifdef glGetString
static int luaglew_glGetString(lua_State *L) {
	GLubyte * return_value;
	return_value = glGetString(luaglew_checkenum(L, 1));
	lua_pushstring(L, return_value);
	return 1;
}
#endif

//####glAccum
// void glAccum (GLenum op, GLfloat value)
#ifdef glAccum
static int luaglew_glAccum(lua_State *L) {
	glAccum(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glActiveStencilFaceEXT
// void glActiveStencilFaceEXT (GLenum face)
#ifdef glActiveStencilFaceEXT
static int luaglew_glActiveStencilFaceEXT(lua_State *L) {
	glActiveStencilFaceEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glAlphaFunc
// void glAlphaFunc (GLenum func, GLclampf ref)
#ifdef glAlphaFunc
static int luaglew_glAlphaFunc(lua_State *L) {
	glAlphaFunc(luaglew_checkenum(L, 1), (GLclampf)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glArrayElement
// void glArrayElement (GLint i)
#ifdef glArrayElement
static int luaglew_glArrayElement(lua_State *L) {
	glArrayElement((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glAttachObjectARB
// void glAttachObjectARB (GLhandleARB containerObj, GLhandleARB obj)
#ifdef glAttachObjectARB
static int luaglew_glAttachObjectARB(lua_State *L) {
	glAttachObjectARB((GLhandleARB)luaL_checkint(L, 1), (GLhandleARB)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBegin
// void glBegin (GLenum mode)
#ifdef glBegin
static int luaglew_glBegin(lua_State *L) {
	glBegin(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glBeginConditionalRenderNV
// void glBeginConditionalRenderNV (GLuint id, GLenum mode)
#ifdef glBeginConditionalRenderNV
static int luaglew_glBeginConditionalRenderNV(lua_State *L) {
	glBeginConditionalRenderNV((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBeginQueryARB
// void glBeginQueryARB (GLenum target, GLuint id)
#ifdef glBeginQueryARB
static int luaglew_glBeginQueryARB(lua_State *L) {
	glBeginQueryARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBeginTransformFeedbackEXT
// void glBeginTransformFeedbackEXT (GLenum primitiveMode)
#ifdef glBeginTransformFeedbackEXT
static int luaglew_glBeginTransformFeedbackEXT(lua_State *L) {
	glBeginTransformFeedbackEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glBindAttribLocation
// void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name)
#ifdef glBindAttribLocation
static int luaglew_glBindAttribLocation(lua_State *L) {
	glBindAttribLocation((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glBindAttribLocationARB
// void glBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB *name)
#ifdef glBindAttribLocationARB
static int luaglew_glBindAttribLocationARB(lua_State *L) {
	glBindAttribLocationARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glBindBufferARB
// void glBindBufferARB (GLenum target, GLuint buffer)
#ifdef glBindBufferARB
static int luaglew_glBindBufferARB(lua_State *L) {
	glBindBufferARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindBufferBase
// void glBindBufferBase (GLenum target, GLuint index, GLuint buffer)
#ifdef glBindBufferBase
static int luaglew_glBindBufferBase(lua_State *L) {
	glBindBufferBase(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glBindBufferBaseEXT
// void glBindBufferBaseEXT (GLenum target, GLuint index, GLuint buffer)
#ifdef glBindBufferBaseEXT
static int luaglew_glBindBufferBaseEXT(lua_State *L) {
	glBindBufferBaseEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glBindBufferOffsetEXT
// void glBindBufferOffsetEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset)
#ifdef glBindBufferOffsetEXT
static int luaglew_glBindBufferOffsetEXT(lua_State *L) {
	glBindBufferOffsetEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glBindBufferRange
// void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
#ifdef glBindBufferRange
static int luaglew_glBindBufferRange(lua_State *L) {
	glBindBufferRange(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glBindBufferRangeEXT
// void glBindBufferRangeEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
#ifdef glBindBufferRangeEXT
static int luaglew_glBindBufferRangeEXT(lua_State *L) {
	glBindBufferRangeEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glBindFragDataLocationEXT
// void glBindFragDataLocationEXT (GLuint program, GLuint colorNumber, const GLchar *name)
#ifdef glBindFragDataLocationEXT
static int luaglew_glBindFragDataLocationEXT(lua_State *L) {
	glBindFragDataLocationEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLchar *)luaglew_checkarray_char(L, 3));
	return 0;
}
#endif

//####glBindFramebuffer
// void glBindFramebuffer (GLenum, GLuint)
#ifdef glBindFramebuffer
static int luaglew_glBindFramebuffer(lua_State *L) {
	glBindFramebuffer(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindFramebufferEXT
// void glBindFramebufferEXT (GLenum target, GLuint framebuffer)
#ifdef glBindFramebufferEXT
static int luaglew_glBindFramebufferEXT(lua_State *L) {
	glBindFramebufferEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindProgramARB
// void glBindProgramARB (GLenum target, GLuint program)
#ifdef glBindProgramARB
static int luaglew_glBindProgramARB(lua_State *L) {
	glBindProgramARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindRenderbuffer
// void glBindRenderbuffer (GLenum, GLuint)
#ifdef glBindRenderbuffer
static int luaglew_glBindRenderbuffer(lua_State *L) {
	glBindRenderbuffer(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindRenderbufferEXT
// void glBindRenderbufferEXT (GLenum target, GLuint renderbuffer)
#ifdef glBindRenderbufferEXT
static int luaglew_glBindRenderbufferEXT(lua_State *L) {
	glBindRenderbufferEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindTexture
// void glBindTexture (GLenum target, GLuint texture)
#ifdef glBindTexture
static int luaglew_glBindTexture(lua_State *L) {
	glBindTexture(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glBindVertexArrayAPPLE
// void glBindVertexArrayAPPLE (GLuint id)
#ifdef glBindVertexArrayAPPLE
static int luaglew_glBindVertexArrayAPPLE(lua_State *L) {
	glBindVertexArrayAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glBitmap
// void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
#ifdef glBitmap
static int luaglew_glBitmap(lua_State *L) {
	glBitmap((GLsizei)luaL_checklong(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6), (GLubyte *)luaglew_checkarray_ubyte(L, 7));
	return 0;
}
#endif

//####glBlendColorEXT
// void glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf)
#ifdef glBlendColorEXT
static int luaglew_glBlendColorEXT(lua_State *L) {
	glBlendColorEXT((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glBlendEquationEXT
// void glBlendEquationEXT (GLenum)
#ifdef glBlendEquationEXT
static int luaglew_glBlendEquationEXT(lua_State *L) {
	glBlendEquationEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glBlendEquationSeparate
// void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha)
#ifdef glBlendEquationSeparate
static int luaglew_glBlendEquationSeparate(lua_State *L) {
	glBlendEquationSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBlendEquationSeparateATI
// void glBlendEquationSeparateATI (GLenum equationRGB, GLenum equationAlpha)
#ifdef glBlendEquationSeparateATI
static int luaglew_glBlendEquationSeparateATI(lua_State *L) {
	glBlendEquationSeparateATI(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBlendEquationSeparateEXT
// void glBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha)
#ifdef glBlendEquationSeparateEXT
static int luaglew_glBlendEquationSeparateEXT(lua_State *L) {
	glBlendEquationSeparateEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBlendFunc
// void glBlendFunc (GLenum sfactor, GLenum dfactor)
#ifdef glBlendFunc
static int luaglew_glBlendFunc(lua_State *L) {
	glBlendFunc(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glBlendFuncSeparate
// void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
#ifdef glBlendFuncSeparate
static int luaglew_glBlendFuncSeparate(lua_State *L) {
	glBlendFuncSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glBlendFuncSeparateEXT
// void glBlendFuncSeparateEXT (GLenum, GLenum, GLenum, GLenum)
#ifdef glBlendFuncSeparateEXT
static int luaglew_glBlendFuncSeparateEXT(lua_State *L) {
	glBlendFuncSeparateEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glBlitFramebuffer
// void glBlitFramebuffer (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
#ifdef glBlitFramebuffer
static int luaglew_glBlitFramebuffer(lua_State *L) {
	glBlitFramebuffer((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLint)luaL_checkint(L, 8), (GLbitfield)luaL_checkint(L, 9), luaglew_checkenum(L, 10));
	return 0;
}
#endif

//####glBlitFramebufferEXT
// void glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
#ifdef glBlitFramebufferEXT
static int luaglew_glBlitFramebufferEXT(lua_State *L) {
	glBlitFramebufferEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLint)luaL_checkint(L, 7), (GLint)luaL_checkint(L, 8), (GLbitfield)luaL_checkint(L, 9), luaglew_checkenum(L, 10));
	return 0;
}
#endif

//####glBufferData
// void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
#ifdef glBufferData
static int luaglew_glBufferData(lua_State *L) {
	glBufferData(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glBufferDataARB
// void glBufferDataARB (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
#ifdef glBufferDataARB
static int luaglew_glBufferDataARB(lua_State *L) {
	glBufferDataARB(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glBufferParameteriAPPLE
// void glBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param)
#ifdef glBufferParameteriAPPLE
static int luaglew_glBufferParameteriAPPLE(lua_State *L) {
	glBufferParameteriAPPLE(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glBufferSubData
// void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
#ifdef glBufferSubData
static int luaglew_glBufferSubData(lua_State *L) {
	glBufferSubData(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glBufferSubDataARB
// void glBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
#ifdef glBufferSubDataARB
static int luaglew_glBufferSubDataARB(lua_State *L) {
	glBufferSubDataARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glCallList
// void glCallList (GLuint list)
#ifdef glCallList
static int luaglew_glCallList(lua_State *L) {
	glCallList((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glCallLists
// void glCallLists (GLsizei n, GLenum type, const GLvoid *lists)
#ifdef glCallLists
static int luaglew_glCallLists(lua_State *L) {
	glCallLists((GLsizei)luaL_checklong(L, 1), luaglew_checkenum(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glClampColorARB
// void glClampColorARB (GLenum target, GLenum clamp)
#ifdef glClampColorARB
static int luaglew_glClampColorARB(lua_State *L) {
	glClampColorARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glClear
// void glClear (GLbitfield mask)
#ifdef glClear
static int luaglew_glClear(lua_State *L) {
	glClear((GLbitfield)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glClearAccum
// void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
#ifdef glClearAccum
static int luaglew_glClearAccum(lua_State *L) {
	glClearAccum((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glClearColor
// void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
#ifdef glClearColor
static int luaglew_glClearColor(lua_State *L) {
	glClearColor((GLclampf)luaL_checknumber(L, 1), (GLclampf)luaL_checknumber(L, 2), (GLclampf)luaL_checknumber(L, 3), (GLclampf)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glClearColorIiEXT
// void glClearColorIiEXT ( GLint r, GLint g, GLint b, GLint a )
#ifdef glClearColorIiEXT
static int luaglew_glClearColorIiEXT(lua_State *L) {
	glClearColorIiEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glClearColorIuiEXT
// void glClearColorIuiEXT ( GLuint r, GLuint g, GLuint b, GLuint a )
#ifdef glClearColorIuiEXT
static int luaglew_glClearColorIuiEXT(lua_State *L) {
	glClearColorIuiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glClearDepth
// void glClearDepth (GLclampd depth)
#ifdef glClearDepth
static int luaglew_glClearDepth(lua_State *L) {
	glClearDepth((GLclampd)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glClearIndex
// void glClearIndex (GLfloat c)
#ifdef glClearIndex
static int luaglew_glClearIndex(lua_State *L) {
	glClearIndex((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glClearStencil
// void glClearStencil (GLint s)
#ifdef glClearStencil
static int luaglew_glClearStencil(lua_State *L) {
	glClearStencil((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glClientActiveTextureARB
// void glClientActiveTextureARB (GLenum)
#ifdef glClientActiveTextureARB
static int luaglew_glClientActiveTextureARB(lua_State *L) {
	glClientActiveTextureARB(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glClipPlane
// void glClipPlane (GLenum plane, const GLdouble *equation)
#ifdef glClipPlane
static int luaglew_glClipPlane(lua_State *L) {
	glClipPlane(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glColor3b
// void glColor3b (GLbyte red, GLbyte green, GLbyte blue)
#ifdef glColor3b
static int luaglew_glColor3b(lua_State *L) {
	glColor3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glColor3bv
// void glColor3bv (const GLbyte *v)
#ifdef glColor3bv
static int luaglew_glColor3bv(lua_State *L) {
	glColor3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glColor3d
// void glColor3d (GLdouble red, GLdouble green, GLdouble blue)
#ifdef glColor3d
static int luaglew_glColor3d(lua_State *L) {
	glColor3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glColor3dv
// void glColor3dv (const GLdouble *v)
#ifdef glColor3dv
static int luaglew_glColor3dv(lua_State *L) {
	glColor3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glColor3f
// void glColor3f (GLfloat red, GLfloat green, GLfloat blue)
#ifdef glColor3f
static int luaglew_glColor3f(lua_State *L) {
	glColor3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glColor3fv
// void glColor3fv (const GLfloat *v)
#ifdef glColor3fv
static int luaglew_glColor3fv(lua_State *L) {
	glColor3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glColor3i
// void glColor3i (GLint red, GLint green, GLint blue)
#ifdef glColor3i
static int luaglew_glColor3i(lua_State *L) {
	glColor3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glColor3iv
// void glColor3iv (const GLint *v)
#ifdef glColor3iv
static int luaglew_glColor3iv(lua_State *L) {
	glColor3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor3s
// void glColor3s (GLshort red, GLshort green, GLshort blue)
#ifdef glColor3s
static int luaglew_glColor3s(lua_State *L) {
	glColor3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glColor3sv
// void glColor3sv (const GLshort *v)
#ifdef glColor3sv
static int luaglew_glColor3sv(lua_State *L) {
	glColor3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor3ub
// void glColor3ub (GLubyte red, GLubyte green, GLubyte blue)
#ifdef glColor3ub
static int luaglew_glColor3ub(lua_State *L) {
	glColor3ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glColor3ubv
// void glColor3ubv (const GLubyte *v)
#ifdef glColor3ubv
static int luaglew_glColor3ubv(lua_State *L) {
	glColor3ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glColor3ui
// void glColor3ui (GLuint red, GLuint green, GLuint blue)
#ifdef glColor3ui
static int luaglew_glColor3ui(lua_State *L) {
	glColor3ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glColor3uiv
// void glColor3uiv (const GLuint *v)
#ifdef glColor3uiv
static int luaglew_glColor3uiv(lua_State *L) {
	glColor3uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor3us
// void glColor3us (GLushort red, GLushort green, GLushort blue)
#ifdef glColor3us
static int luaglew_glColor3us(lua_State *L) {
	glColor3us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glColor3usv
// void glColor3usv (const GLushort *v)
#ifdef glColor3usv
static int luaglew_glColor3usv(lua_State *L) {
	glColor3usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor4b
// void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
#ifdef glColor4b
static int luaglew_glColor4b(lua_State *L) {
	glColor4b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3), (GLbyte)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glColor4bv
// void glColor4bv (const GLbyte *v)
#ifdef glColor4bv
static int luaglew_glColor4bv(lua_State *L) {
	glColor4bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glColor4d
// void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
#ifdef glColor4d
static int luaglew_glColor4d(lua_State *L) {
	glColor4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glColor4dv
// void glColor4dv (const GLdouble *v)
#ifdef glColor4dv
static int luaglew_glColor4dv(lua_State *L) {
	glColor4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glColor4f
// void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
#ifdef glColor4f
static int luaglew_glColor4f(lua_State *L) {
	glColor4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glColor4fv
// void glColor4fv (const GLfloat *v)
#ifdef glColor4fv
static int luaglew_glColor4fv(lua_State *L) {
	glColor4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glColor4i
// void glColor4i (GLint red, GLint green, GLint blue, GLint alpha)
#ifdef glColor4i
static int luaglew_glColor4i(lua_State *L) {
	glColor4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glColor4iv
// void glColor4iv (const GLint *v)
#ifdef glColor4iv
static int luaglew_glColor4iv(lua_State *L) {
	glColor4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor4s
// void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha)
#ifdef glColor4s
static int luaglew_glColor4s(lua_State *L) {
	glColor4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glColor4sv
// void glColor4sv (const GLshort *v)
#ifdef glColor4sv
static int luaglew_glColor4sv(lua_State *L) {
	glColor4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor4ub
// void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
#ifdef glColor4ub
static int luaglew_glColor4ub(lua_State *L) {
	glColor4ub((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3), (GLubyte)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glColor4ubv
// void glColor4ubv (const GLubyte *v)
#ifdef glColor4ubv
static int luaglew_glColor4ubv(lua_State *L) {
	glColor4ubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glColor4ui
// void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha)
#ifdef glColor4ui
static int luaglew_glColor4ui(lua_State *L) {
	glColor4ui((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glColor4uiv
// void glColor4uiv (const GLuint *v)
#ifdef glColor4uiv
static int luaglew_glColor4uiv(lua_State *L) {
	glColor4uiv((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColor4us
// void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha)
#ifdef glColor4us
static int luaglew_glColor4us(lua_State *L) {
	glColor4us((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3), (GLushort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glColor4usv
// void glColor4usv (const GLushort *v)
#ifdef glColor4usv
static int luaglew_glColor4usv(lua_State *L) {
	glColor4usv((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glColorMask
// void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
#ifdef glColorMask
static int luaglew_glColorMask(lua_State *L) {
	glColorMask((GLboolean)lua_toboolean(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4));
	return 0;
}
#endif

//####glColorMaskIndexedEXT
// void glColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
#ifdef glColorMaskIndexedEXT
static int luaglew_glColorMaskIndexedEXT(lua_State *L) {
	glColorMaskIndexedEXT((GLuint)luaL_checkint(L, 1), (GLboolean)lua_toboolean(L, 2), (GLboolean)lua_toboolean(L, 3), (GLboolean)lua_toboolean(L, 4), (GLboolean)lua_toboolean(L, 5));
	return 0;
}
#endif

//####glColorMaterial
// void glColorMaterial (GLenum face, GLenum mode)
#ifdef glColorMaterial
static int luaglew_glColorMaterial(lua_State *L) {
	glColorMaterial(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glColorPointer
// void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glColorPointer
static int luaglew_glColorPointer(lua_State *L) {
	glColorPointer((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glCompileShaderARB
// void glCompileShaderARB (GLhandleARB shaderObj)
#ifdef glCompileShaderARB
static int luaglew_glCompileShaderARB(lua_State *L) {
	glCompileShaderARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glCompressedTexImage1DARB
// void glCompressedTexImage1DARB (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *)
#ifdef glCompressedTexImage1DARB
static int luaglew_glCompressedTexImage1DARB(lua_State *L) {
	glCompressedTexImage1DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glCompressedTexImage2DARB
// void glCompressedTexImage2DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)
#ifdef glCompressedTexImage2DARB
static int luaglew_glCompressedTexImage2DARB(lua_State *L) {
	glCompressedTexImage2DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glCompressedTexImage3DARB
// void glCompressedTexImage3DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *)
#ifdef glCompressedTexImage3DARB
static int luaglew_glCompressedTexImage3DARB(lua_State *L) {
	glCompressedTexImage3DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glCompressedTexSubImage1DARB
// void glCompressedTexSubImage1DARB (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *)
#ifdef glCompressedTexSubImage1DARB
static int luaglew_glCompressedTexSubImage1DARB(lua_State *L) {
	glCompressedTexSubImage1DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), (GLsizei)luaL_checklong(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glCompressedTexSubImage2DARB
// void glCompressedTexSubImage2DARB (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)
#ifdef glCompressedTexSubImage2DARB
static int luaglew_glCompressedTexSubImage2DARB(lua_State *L) {
	glCompressedTexSubImage2DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaglew_checkenum(L, 7), (GLsizei)luaL_checklong(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glCompressedTexSubImage3DARB
// void glCompressedTexSubImage3DARB (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *)
#ifdef glCompressedTexSubImage3DARB
static int luaglew_glCompressedTexSubImage3DARB(lua_State *L) {
	glCompressedTexSubImage3DARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8), luaglew_checkenum(L, 9), (GLsizei)luaL_checklong(L, 10), (GLvoid *)luaglew_checkarray_void(L, 11));
	return 0;
}
#endif

//####glCopyPixels
// void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
#ifdef glCopyPixels
static int luaglew_glCopyPixels(lua_State *L) {
	glCopyPixels((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5));
	return 0;
}
#endif

//####glCopyTexImage1D
// void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
#ifdef glCopyTexImage1D
static int luaglew_glCopyTexImage1D(lua_State *L) {
	glCopyTexImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7));
	return 0;
}
#endif

//####glCopyTexImage2D
// void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
#ifdef glCopyTexImage2D
static int luaglew_glCopyTexImage2D(lua_State *L) {
	glCopyTexImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6), (GLsizei)luaL_checklong(L, 7), (GLint)luaL_checkint(L, 8));
	return 0;
}
#endif

//####glCopyTexSubImage1D
// void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
#ifdef glCopyTexSubImage1D
static int luaglew_glCopyTexSubImage1D(lua_State *L) {
	glCopyTexSubImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
#endif

//####glCopyTexSubImage2D
// void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glCopyTexSubImage2D
static int luaglew_glCopyTexSubImage2D(lua_State *L) {
	glCopyTexSubImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLsizei)luaL_checklong(L, 7), (GLsizei)luaL_checklong(L, 8));
	return 0;
}
#endif

//####glCullFace
// void glCullFace (GLenum mode)
#ifdef glCullFace
static int luaglew_glCullFace(lua_State *L) {
	glCullFace(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glDeleteBuffers
// void glDeleteBuffers (GLsizei n, const GLuint *buffers)
#ifdef glDeleteBuffers
static int luaglew_glDeleteBuffers(lua_State *L) {
	glDeleteBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteBuffersARB
// void glDeleteBuffersARB (GLsizei n, const GLuint *buffers)
#ifdef glDeleteBuffersARB
static int luaglew_glDeleteBuffersARB(lua_State *L) {
	glDeleteBuffersARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteFencesAPPLE
// void glDeleteFencesAPPLE (GLsizei n, const GLuint *fences)
#ifdef glDeleteFencesAPPLE
static int luaglew_glDeleteFencesAPPLE(lua_State *L) {
	glDeleteFencesAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteFramebuffers
// void glDeleteFramebuffers (GLsizei, const GLuint *)
#ifdef glDeleteFramebuffers
static int luaglew_glDeleteFramebuffers(lua_State *L) {
	glDeleteFramebuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteFramebuffersEXT
// void glDeleteFramebuffersEXT (GLsizei n, const GLuint *framebuffers)
#ifdef glDeleteFramebuffersEXT
static int luaglew_glDeleteFramebuffersEXT(lua_State *L) {
	glDeleteFramebuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteLists
// void glDeleteLists (GLuint list, GLsizei range)
#ifdef glDeleteLists
static int luaglew_glDeleteLists(lua_State *L) {
	glDeleteLists((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2));
	return 0;
}
#endif

//####glDeleteObjectARB
// void glDeleteObjectARB (GLhandleARB obj)
#ifdef glDeleteObjectARB
static int luaglew_glDeleteObjectARB(lua_State *L) {
	glDeleteObjectARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDeleteProgramsARB
// void glDeleteProgramsARB (GLsizei n, const GLuint *programs)
#ifdef glDeleteProgramsARB
static int luaglew_glDeleteProgramsARB(lua_State *L) {
	glDeleteProgramsARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteQueries
// void glDeleteQueries (GLsizei n, const GLuint *ids)
#ifdef glDeleteQueries
static int luaglew_glDeleteQueries(lua_State *L) {
	glDeleteQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteQueriesARB
// void glDeleteQueriesARB (GLsizei n, const GLuint *ids)
#ifdef glDeleteQueriesARB
static int luaglew_glDeleteQueriesARB(lua_State *L) {
	glDeleteQueriesARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteRenderbuffers
// void glDeleteRenderbuffers (GLsizei, const GLuint *)
#ifdef glDeleteRenderbuffers
static int luaglew_glDeleteRenderbuffers(lua_State *L) {
	glDeleteRenderbuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteRenderbuffersEXT
// void glDeleteRenderbuffersEXT (GLsizei n, const GLuint *renderbuffers)
#ifdef glDeleteRenderbuffersEXT
static int luaglew_glDeleteRenderbuffersEXT(lua_State *L) {
	glDeleteRenderbuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteTextures
// void glDeleteTextures (GLsizei n, const GLuint *textures)
#ifdef glDeleteTextures
static int luaglew_glDeleteTextures(lua_State *L) {
	glDeleteTextures((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDeleteVertexArraysAPPLE
// void glDeleteVertexArraysAPPLE (GLsizei n, const GLuint *ids)
#ifdef glDeleteVertexArraysAPPLE
static int luaglew_glDeleteVertexArraysAPPLE(lua_State *L) {
	glDeleteVertexArraysAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glDepthFunc
// void glDepthFunc (GLenum func)
#ifdef glDepthFunc
static int luaglew_glDepthFunc(lua_State *L) {
	glDepthFunc(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glDepthMask
// void glDepthMask (GLboolean flag)
#ifdef glDepthMask
static int luaglew_glDepthMask(lua_State *L) {
	glDepthMask((GLboolean)lua_toboolean(L, 1));
	return 0;
}
#endif

//####glDepthRange
// void glDepthRange (GLclampd zNear, GLclampd zFar)
#ifdef glDepthRange
static int luaglew_glDepthRange(lua_State *L) {
	glDepthRange((GLclampd)luaL_checknumber(L, 1), (GLclampd)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glDetachObjectARB
// void glDetachObjectARB (GLhandleARB containerObj, GLhandleARB attachedObj)
#ifdef glDetachObjectARB
static int luaglew_glDetachObjectARB(lua_State *L) {
	glDetachObjectARB((GLhandleARB)luaL_checkint(L, 1), (GLhandleARB)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glDisable
// void glDisable (GLenum cap)
#ifdef glDisable
static int luaglew_glDisable(lua_State *L) {
	glDisable(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glDisableClientState
// void glDisableClientState (GLenum array)
#ifdef glDisableClientState
static int luaglew_glDisableClientState(lua_State *L) {
	glDisableClientState(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glDisableIndexedEXT
// void glDisableIndexedEXT (GLenum target, GLuint index)
#ifdef glDisableIndexedEXT
static int luaglew_glDisableIndexedEXT(lua_State *L) {
	glDisableIndexedEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glDisableVertexAttribAPPLE
// void glDisableVertexAttribAPPLE (GLuint index, GLenum pname)
#ifdef glDisableVertexAttribAPPLE
static int luaglew_glDisableVertexAttribAPPLE(lua_State *L) {
	glDisableVertexAttribAPPLE((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glDisableVertexAttribArray
// void glDisableVertexAttribArray (GLuint index)
#ifdef glDisableVertexAttribArray
static int luaglew_glDisableVertexAttribArray(lua_State *L) {
	glDisableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDisableVertexAttribArrayARB
// void glDisableVertexAttribArrayARB (GLuint index)
#ifdef glDisableVertexAttribArrayARB
static int luaglew_glDisableVertexAttribArrayARB(lua_State *L) {
	glDisableVertexAttribArrayARB((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glDrawArrays
// void glDrawArrays (GLenum mode, GLint first, GLsizei count)
#ifdef glDrawArrays
static int luaglew_glDrawArrays(lua_State *L) {
	glDrawArrays(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3));
	return 0;
}
#endif

//####glDrawArraysInstancedARB
// void glDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
#ifdef glDrawArraysInstancedARB
static int luaglew_glDrawArraysInstancedARB(lua_State *L) {
	glDrawArraysInstancedARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glDrawBuffer
// void glDrawBuffer (GLenum mode)
#ifdef glDrawBuffer
static int luaglew_glDrawBuffer(lua_State *L) {
	glDrawBuffer(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glDrawBuffers
// void glDrawBuffers (GLsizei n, const GLenum *bufs)
#ifdef glDrawBuffers
static int luaglew_glDrawBuffers(lua_State *L) {
	glDrawBuffers((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_enum(L, 2));
	return 0;
}
#endif

//####glDrawBuffersARB
// void glDrawBuffersARB (GLsizei n, const GLenum *bufs)
#ifdef glDrawBuffersARB
static int luaglew_glDrawBuffersARB(lua_State *L) {
	glDrawBuffersARB((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_enum(L, 2));
	return 0;
}
#endif

//####glDrawElementArrayAPPLE
// void glDrawElementArrayAPPLE (GLenum mode, GLint first, GLsizei count)
#ifdef glDrawElementArrayAPPLE
static int luaglew_glDrawElementArrayAPPLE(lua_State *L) {
	glDrawElementArrayAPPLE(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3));
	return 0;
}
#endif

//####glDrawElements
// void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
#ifdef glDrawElements
static int luaglew_glDrawElements(lua_State *L) {
	glDrawElements(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glDrawElementsInstancedARB
// void glDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
#ifdef glDrawElementsInstancedARB
static int luaglew_glDrawElementsInstancedARB(lua_State *L) {
	glDrawElementsInstancedARB(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glDrawPixels
// void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glDrawPixels
static int luaglew_glDrawPixels(lua_State *L) {
	glDrawPixels((GLsizei)luaL_checklong(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glDrawRangeElementArrayAPPLE
// void glDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
#ifdef glDrawRangeElementArrayAPPLE
static int luaglew_glDrawRangeElementArrayAPPLE(lua_State *L) {
	glDrawRangeElementArrayAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glDrawRangeElementsEXT
// void glDrawRangeElementsEXT (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *)
#ifdef glDrawRangeElementsEXT
static int luaglew_glDrawRangeElementsEXT(lua_State *L) {
	glDrawRangeElementsEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glEdgeFlag
// void glEdgeFlag (GLboolean flag)
#ifdef glEdgeFlag
static int luaglew_glEdgeFlag(lua_State *L) {
	glEdgeFlag((GLboolean)lua_toboolean(L, 1));
	return 0;
}
#endif

//####glEdgeFlagPointer
// void glEdgeFlagPointer (GLsizei stride, const GLvoid *pointer)
#ifdef glEdgeFlagPointer
static int luaglew_glEdgeFlagPointer(lua_State *L) {
	glEdgeFlagPointer((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glEdgeFlagv
// void glEdgeFlagv (const GLboolean *flag)
#ifdef glEdgeFlagv
static int luaglew_glEdgeFlagv(lua_State *L) {
	glEdgeFlagv((GLboolean *)luaglew_checkarray_boolean(L, 1));
	return 0;
}
#endif

//####glElementPointerAPPLE
// void glElementPointerAPPLE (GLenum type, const GLvoid *pointer)
#ifdef glElementPointerAPPLE
static int luaglew_glElementPointerAPPLE(lua_State *L) {
	glElementPointerAPPLE(luaglew_checkenum(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glEnable
// void glEnable (GLenum cap)
#ifdef glEnable
static int luaglew_glEnable(lua_State *L) {
	glEnable(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glEnableClientState
// void glEnableClientState (GLenum array)
#ifdef glEnableClientState
static int luaglew_glEnableClientState(lua_State *L) {
	glEnableClientState(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glEnableIndexedEXT
// void glEnableIndexedEXT (GLenum target, GLuint index)
#ifdef glEnableIndexedEXT
static int luaglew_glEnableIndexedEXT(lua_State *L) {
	glEnableIndexedEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glEnableVertexAttribAPPLE
// void glEnableVertexAttribAPPLE (GLuint index, GLenum pname)
#ifdef glEnableVertexAttribAPPLE
static int luaglew_glEnableVertexAttribAPPLE(lua_State *L) {
	glEnableVertexAttribAPPLE((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glEnableVertexAttribArray
// void glEnableVertexAttribArray (GLuint index)
#ifdef glEnableVertexAttribArray
static int luaglew_glEnableVertexAttribArray(lua_State *L) {
	glEnableVertexAttribArray((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glEnableVertexAttribArrayARB
// void glEnableVertexAttribArrayARB (GLuint index)
#ifdef glEnableVertexAttribArrayARB
static int luaglew_glEnableVertexAttribArrayARB(lua_State *L) {
	glEnableVertexAttribArrayARB((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glEnd
// void glEnd (void)
#ifdef glEnd
static int luaglew_glEnd(lua_State *L) {
	glEnd();
	return 0;
}
#endif

//####glEndConditionalRenderNV
// void glEndConditionalRenderNV (void)
#ifdef glEndConditionalRenderNV
static int luaglew_glEndConditionalRenderNV(lua_State *L) {
	glEndConditionalRenderNV();
	return 0;
}
#endif

//####glEndList
// void glEndList (void)
#ifdef glEndList
static int luaglew_glEndList(lua_State *L) {
	glEndList();
	return 0;
}
#endif

//####glEndQueryARB
// void glEndQueryARB (GLenum target)
#ifdef glEndQueryARB
static int luaglew_glEndQueryARB(lua_State *L) {
	glEndQueryARB(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glEndTransformFeedbackEXT
// void glEndTransformFeedbackEXT (void)
#ifdef glEndTransformFeedbackEXT
static int luaglew_glEndTransformFeedbackEXT(lua_State *L) {
	glEndTransformFeedbackEXT();
	return 0;
}
#endif

//####glEvalCoord1d
// void glEvalCoord1d (GLdouble u)
#ifdef glEvalCoord1d
static int luaglew_glEvalCoord1d(lua_State *L) {
	glEvalCoord1d((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glEvalCoord1dv
// void glEvalCoord1dv (const GLdouble *u)
#ifdef glEvalCoord1dv
static int luaglew_glEvalCoord1dv(lua_State *L) {
	glEvalCoord1dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glEvalCoord1f
// void glEvalCoord1f (GLfloat u)
#ifdef glEvalCoord1f
static int luaglew_glEvalCoord1f(lua_State *L) {
	glEvalCoord1f((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glEvalCoord1fv
// void glEvalCoord1fv (const GLfloat *u)
#ifdef glEvalCoord1fv
static int luaglew_glEvalCoord1fv(lua_State *L) {
	glEvalCoord1fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glEvalCoord2d
// void glEvalCoord2d (GLdouble u, GLdouble v)
#ifdef glEvalCoord2d
static int luaglew_glEvalCoord2d(lua_State *L) {
	glEvalCoord2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glEvalCoord2dv
// void glEvalCoord2dv (const GLdouble *u)
#ifdef glEvalCoord2dv
static int luaglew_glEvalCoord2dv(lua_State *L) {
	glEvalCoord2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glEvalCoord2f
// void glEvalCoord2f (GLfloat u, GLfloat v)
#ifdef glEvalCoord2f
static int luaglew_glEvalCoord2f(lua_State *L) {
	glEvalCoord2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glEvalCoord2fv
// void glEvalCoord2fv (const GLfloat *u)
#ifdef glEvalCoord2fv
static int luaglew_glEvalCoord2fv(lua_State *L) {
	glEvalCoord2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glEvalMesh1
// void glEvalMesh1 (GLenum mode, GLint i1, GLint i2)
#ifdef glEvalMesh1
static int luaglew_glEvalMesh1(lua_State *L) {
	glEvalMesh1(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glEvalMesh2
// void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
#ifdef glEvalMesh2
static int luaglew_glEvalMesh2(lua_State *L) {
	glEvalMesh2(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glEvalPoint1
// void glEvalPoint1 (GLint i)
#ifdef glEvalPoint1
static int luaglew_glEvalPoint1(lua_State *L) {
	glEvalPoint1((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glEvalPoint2
// void glEvalPoint2 (GLint i, GLint j)
#ifdef glEvalPoint2
static int luaglew_glEvalPoint2(lua_State *L) {
	glEvalPoint2((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glFeedbackBuffer
// void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer)
#ifdef glFeedbackBuffer
static int luaglew_glFeedbackBuffer(lua_State *L) {
	glFeedbackBuffer((GLsizei)luaL_checklong(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glFinish
// void glFinish (void)
#ifdef glFinish
static int luaglew_glFinish(lua_State *L) {
	glFinish();
	return 0;
}
#endif

//####glFinishFenceAPPLE
// void glFinishFenceAPPLE (GLuint fence)
#ifdef glFinishFenceAPPLE
static int luaglew_glFinishFenceAPPLE(lua_State *L) {
	glFinishFenceAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glFinishObjectAPPLE
// void glFinishObjectAPPLE (GLenum object, GLuint name)
#ifdef glFinishObjectAPPLE
static int luaglew_glFinishObjectAPPLE(lua_State *L) {
	glFinishObjectAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glFinishRenderAPPLE
// void glFinishRenderAPPLE (void)
#ifdef glFinishRenderAPPLE
static int luaglew_glFinishRenderAPPLE(lua_State *L) {
	glFinishRenderAPPLE();
	return 0;
}
#endif

//####glFlush
// void glFlush (void)
#ifdef glFlush
static int luaglew_glFlush(lua_State *L) {
	glFlush();
	return 0;
}
#endif

//####glFlushMappedBufferRangeAPPLE
// void glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size)
#ifdef glFlushMappedBufferRangeAPPLE
static int luaglew_glFlushMappedBufferRangeAPPLE(lua_State *L) {
	glFlushMappedBufferRangeAPPLE(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3));
	return 0;
}
#endif

//####glFlushRenderAPPLE
// void glFlushRenderAPPLE (void)
#ifdef glFlushRenderAPPLE
static int luaglew_glFlushRenderAPPLE(lua_State *L) {
	glFlushRenderAPPLE();
	return 0;
}
#endif

//####glFlushVertexArrayRangeAPPLE
// void glFlushVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
#ifdef glFlushVertexArrayRangeAPPLE
static int luaglew_glFlushVertexArrayRangeAPPLE(lua_State *L) {
	glFlushVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glFogCoordPointerEXT
// void glFogCoordPointerEXT (GLenum, GLsizei, const GLvoid *)
#ifdef glFogCoordPointerEXT
static int luaglew_glFogCoordPointerEXT(lua_State *L) {
	glFogCoordPointerEXT(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glFogCoorddEXT
// void glFogCoorddEXT (GLdouble)
#ifdef glFogCoorddEXT
static int luaglew_glFogCoorddEXT(lua_State *L) {
	glFogCoorddEXT((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoorddv
// void glFogCoorddv (const GLdouble * coord)
#ifdef glFogCoorddv
static int luaglew_glFogCoorddv(lua_State *L) {
	glFogCoorddv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glFogCoorddvEXT
// void glFogCoorddvEXT (const GLdouble *)
#ifdef glFogCoorddvEXT
static int luaglew_glFogCoorddvEXT(lua_State *L) {
	glFogCoorddvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glFogCoordfEXT
// void glFogCoordfEXT (GLfloat)
#ifdef glFogCoordfEXT
static int luaglew_glFogCoordfEXT(lua_State *L) {
	glFogCoordfEXT((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glFogCoordfvEXT
// void glFogCoordfvEXT (const GLfloat *)
#ifdef glFogCoordfvEXT
static int luaglew_glFogCoordfvEXT(lua_State *L) {
	glFogCoordfvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glFogf
// void glFogf (GLenum pname, GLfloat param)
#ifdef glFogf
static int luaglew_glFogf(lua_State *L) {
	glFogf(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glFogfv
// void glFogfv (GLenum pname, const GLfloat *params)
#ifdef glFogfv
static int luaglew_glFogfv(lua_State *L) {
	glFogfv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glFogi
// void glFogi (GLenum pname, GLint param)
#ifdef glFogi
static int luaglew_glFogi(lua_State *L) {
	glFogi(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glFogiv
// void glFogiv (GLenum pname, const GLint *params)
#ifdef glFogiv
static int luaglew_glFogiv(lua_State *L) {
	glFogiv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glFramebufferRenderbuffer
// void glFramebufferRenderbuffer (GLenum, GLenum, GLenum, GLuint)
#ifdef glFramebufferRenderbuffer
static int luaglew_glFramebufferRenderbuffer(lua_State *L) {
	glFramebufferRenderbuffer(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glFramebufferRenderbufferEXT
// void glFramebufferRenderbufferEXT (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
#ifdef glFramebufferRenderbufferEXT
static int luaglew_glFramebufferRenderbufferEXT(lua_State *L) {
	glFramebufferRenderbufferEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glFramebufferTexture1D
// void glFramebufferTexture1D (GLenum, GLenum, GLenum, GLuint, GLint)
#ifdef glFramebufferTexture1D
static int luaglew_glFramebufferTexture1D(lua_State *L) {
	glFramebufferTexture1D(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFramebufferTexture1DEXT
// void glFramebufferTexture1DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
#ifdef glFramebufferTexture1DEXT
static int luaglew_glFramebufferTexture1DEXT(lua_State *L) {
	glFramebufferTexture1DEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFramebufferTexture2D
// void glFramebufferTexture2D (GLenum, GLenum, GLenum, GLuint, GLint)
#ifdef glFramebufferTexture2D
static int luaglew_glFramebufferTexture2D(lua_State *L) {
	glFramebufferTexture2D(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFramebufferTexture2DEXT
// void glFramebufferTexture2DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
#ifdef glFramebufferTexture2DEXT
static int luaglew_glFramebufferTexture2DEXT(lua_State *L) {
	glFramebufferTexture2DEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFramebufferTexture3D
// void glFramebufferTexture3D (GLenum, GLenum, GLenum, GLuint, GLint, GLint)
#ifdef glFramebufferTexture3D
static int luaglew_glFramebufferTexture3D(lua_State *L) {
	glFramebufferTexture3D(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glFramebufferTexture3DEXT
// void glFramebufferTexture3DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
#ifdef glFramebufferTexture3DEXT
static int luaglew_glFramebufferTexture3DEXT(lua_State *L) {
	glFramebufferTexture3DEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLuint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6));
	return 0;
}
#endif

//####glFramebufferTextureLayer
// void glFramebufferTextureLayer (GLenum, GLenum, GLuint, GLint, GLint)
#ifdef glFramebufferTextureLayer
static int luaglew_glFramebufferTextureLayer(lua_State *L) {
	glFramebufferTextureLayer(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glFrontFace
// void glFrontFace (GLenum mode)
#ifdef glFrontFace
static int luaglew_glFrontFace(lua_State *L) {
	glFrontFace(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glFrustum
// void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
#ifdef glFrustum
static int luaglew_glFrustum(lua_State *L) {
	glFrustum((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glGenBuffers
// void glGenBuffers (GLsizei n, GLuint *buffers)
#ifdef glGenBuffers
static int luaglew_glGenBuffers(lua_State *L) {
	glGenBuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenBuffersARB
// void glGenBuffersARB (GLsizei n, GLuint *buffers)
#ifdef glGenBuffersARB
static int luaglew_glGenBuffersARB(lua_State *L) {
	glGenBuffersARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenFencesAPPLE
// void glGenFencesAPPLE (GLsizei n, GLuint *fences)
#ifdef glGenFencesAPPLE
static int luaglew_glGenFencesAPPLE(lua_State *L) {
	glGenFencesAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenFramebuffers
// void glGenFramebuffers (GLsizei, GLuint *)
#ifdef glGenFramebuffers
static int luaglew_glGenFramebuffers(lua_State *L) {
	glGenFramebuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenFramebuffersEXT
// void glGenFramebuffersEXT (GLsizei n, GLuint *framebuffers)
#ifdef glGenFramebuffersEXT
static int luaglew_glGenFramebuffersEXT(lua_State *L) {
	glGenFramebuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenProgramsARB
// void glGenProgramsARB (GLsizei n, GLuint *programs)
#ifdef glGenProgramsARB
static int luaglew_glGenProgramsARB(lua_State *L) {
	glGenProgramsARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenQueries
// void glGenQueries (GLsizei n, GLuint *ids)
#ifdef glGenQueries
static int luaglew_glGenQueries(lua_State *L) {
	glGenQueries((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenQueriesARB
// void glGenQueriesARB (GLsizei n, GLuint *ids)
#ifdef glGenQueriesARB
static int luaglew_glGenQueriesARB(lua_State *L) {
	glGenQueriesARB((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenRenderbuffers
// void glGenRenderbuffers (GLsizei, GLuint *)
#ifdef glGenRenderbuffers
static int luaglew_glGenRenderbuffers(lua_State *L) {
	glGenRenderbuffers((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenRenderbuffersEXT
// void glGenRenderbuffersEXT (GLsizei n, GLuint *renderbuffers)
#ifdef glGenRenderbuffersEXT
static int luaglew_glGenRenderbuffersEXT(lua_State *L) {
	glGenRenderbuffersEXT((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenTextures
// void glGenTextures (GLsizei n, GLuint *textures)
#ifdef glGenTextures
static int luaglew_glGenTextures(lua_State *L) {
	glGenTextures((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenVertexArraysAPPLE
// void glGenVertexArraysAPPLE (GLsizei n, GLuint *ids)
#ifdef glGenVertexArraysAPPLE
static int luaglew_glGenVertexArraysAPPLE(lua_State *L) {
	glGenVertexArraysAPPLE((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGenerateMipmap
// void glGenerateMipmap (GLenum)
#ifdef glGenerateMipmap
static int luaglew_glGenerateMipmap(lua_State *L) {
	glGenerateMipmap(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glGenerateMipmapEXT
// void glGenerateMipmapEXT (GLenum target)
#ifdef glGenerateMipmapEXT
static int luaglew_glGenerateMipmapEXT(lua_State *L) {
	glGenerateMipmapEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glGetActiveAttrib
// void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
#ifdef glGetActiveAttrib
static int luaglew_glGetActiveAttrib(lua_State *L) {
	glGetActiveAttrib((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetActiveAttribARB
// void glGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
#ifdef glGetActiveAttribARB
static int luaglew_glGetActiveAttribARB(lua_State *L) {
	glGetActiveAttribARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetActiveUniform
// void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
#ifdef glGetActiveUniform
static int luaglew_glGetActiveUniform(lua_State *L) {
	glGetActiveUniform((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetActiveUniformARB
// void glGetActiveUniformARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
#ifdef glGetActiveUniformARB
static int luaglew_glGetActiveUniformARB(lua_State *L) {
	glGetActiveUniformARB((GLhandleARB)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLint *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetActiveUniformBlockName
// void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName)
#ifdef glGetActiveUniformBlockName
static int luaglew_glGetActiveUniformBlockName(lua_State *L) {
	glGetActiveUniformBlockName((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLchar *)luaglew_checkarray_char(L, 5));
	return 0;
}
#endif

//####glGetActiveUniformBlockiv
// void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params)
#ifdef glGetActiveUniformBlockiv
static int luaglew_glGetActiveUniformBlockiv(lua_State *L) {
	glGetActiveUniformBlockiv((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetActiveUniformName
// void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName)
#ifdef glGetActiveUniformName
static int luaglew_glGetActiveUniformName(lua_State *L) {
	glGetActiveUniformName((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLchar *)luaglew_checkarray_char(L, 5));
	return 0;
}
#endif

//####glGetActiveUniformsiv
// void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params)
#ifdef glGetActiveUniformsiv
static int luaglew_glGetActiveUniformsiv(lua_State *L) {
	glGetActiveUniformsiv((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLuint *)luaglew_checkarray_int(L, 3), luaglew_checkenum(L, 4), (GLint *)luaglew_checkarray_int(L, 5));
	return 0;
}
#endif

//####glGetAttachedShaders
// void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders)
#ifdef glGetAttachedShaders
static int luaglew_glGetAttachedShaders(lua_State *L) {
	glGetAttachedShaders((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetBooleanIndexedvEXT
// void glGetBooleanIndexedvEXT (GLenum param, GLuint index, GLboolean *values)
#ifdef glGetBooleanIndexedvEXT
static int luaglew_glGetBooleanIndexedvEXT(lua_State *L) {
	glGetBooleanIndexedvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLboolean *)luaglew_checkarray_boolean(L, 3));
	return 0;
}
#endif

//####glGetBooleanv
// void glGetBooleanv (GLenum pname, GLboolean *params)
#ifdef glGetBooleanv
static int luaglew_glGetBooleanv(lua_State *L) {
	glGetBooleanv(luaglew_checkenum(L, 1), (GLboolean *)luaglew_checkarray_boolean(L, 2));
	return 0;
}
#endif

//####glGetBufferParameteriv
// void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetBufferParameteriv
static int luaglew_glGetBufferParameteriv(lua_State *L) {
	glGetBufferParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetBufferParameterivARB
// void glGetBufferParameterivARB (GLenum target, GLenum pname, GLint *params)
#ifdef glGetBufferParameterivARB
static int luaglew_glGetBufferParameterivARB(lua_State *L) {
	glGetBufferParameterivARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetBufferPointerv
// void glGetBufferPointerv (GLenum target, GLenum pname, GLvoid **params)
#ifdef glGetBufferPointerv
static int luaglew_glGetBufferPointerv(lua_State *L) {
	glGetBufferPointerv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glGetBufferPointervARB
// void glGetBufferPointervARB (GLenum target, GLenum pname, GLvoid **params)
#ifdef glGetBufferPointervARB
static int luaglew_glGetBufferPointervARB(lua_State *L) {
	glGetBufferPointervARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glGetBufferSubData
// void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
#ifdef glGetBufferSubData
static int luaglew_glGetBufferSubData(lua_State *L) {
	glGetBufferSubData(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetBufferSubDataARB
// void glGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
#ifdef glGetBufferSubDataARB
static int luaglew_glGetBufferSubDataARB(lua_State *L) {
	glGetBufferSubDataARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glGetClipPlane
// void glGetClipPlane (GLenum plane, GLdouble *equation)
#ifdef glGetClipPlane
static int luaglew_glGetClipPlane(lua_State *L) {
	glGetClipPlane(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glGetCompressedTexImageARB
// void glGetCompressedTexImageARB (GLenum, GLint, GLvoid *)
#ifdef glGetCompressedTexImageARB
static int luaglew_glGetCompressedTexImageARB(lua_State *L) {
	glGetCompressedTexImageARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glGetDoublev
// void glGetDoublev (GLenum pname, GLdouble *params)
#ifdef glGetDoublev
static int luaglew_glGetDoublev(lua_State *L) {
	glGetDoublev(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glGetFloatv
// void glGetFloatv (GLenum pname, GLfloat *params)
#ifdef glGetFloatv
static int luaglew_glGetFloatv(lua_State *L) {
	glGetFloatv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glGetFramebufferAttachmentParameteriv
// void glGetFramebufferAttachmentParameteriv (GLenum, GLenum, GLenum, GLint *)
#ifdef glGetFramebufferAttachmentParameteriv
static int luaglew_glGetFramebufferAttachmentParameteriv(lua_State *L) {
	glGetFramebufferAttachmentParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetFramebufferAttachmentParameterivEXT
// void glGetFramebufferAttachmentParameterivEXT (GLenum target, GLenum attachment, GLenum pname, GLint *params)
#ifdef glGetFramebufferAttachmentParameterivEXT
static int luaglew_glGetFramebufferAttachmentParameterivEXT(lua_State *L) {
	glGetFramebufferAttachmentParameterivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetInfoLogARB
// void glGetInfoLogARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
#ifdef glGetInfoLogARB
static int luaglew_glGetInfoLogARB(lua_State *L) {
	glGetInfoLogARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetIntegerIndexedvEXT
// void glGetIntegerIndexedvEXT (GLenum param, GLuint index, GLint *values)
#ifdef glGetIntegerIndexedvEXT
static int luaglew_glGetIntegerIndexedvEXT(lua_State *L) {
	glGetIntegerIndexedvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetIntegeri_v
// void glGetIntegeri_v (GLenum pname, GLuint index, GLint* data)
#ifdef glGetIntegeri_v
static int luaglew_glGetIntegeri_v(lua_State *L) {
	glGetIntegeri_v(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetIntegerv
// void glGetIntegerv (GLenum pname, GLint *params)
#ifdef glGetIntegerv
static int luaglew_glGetIntegerv(lua_State *L) {
	glGetIntegerv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGetLightfv
// void glGetLightfv (GLenum light, GLenum pname, GLfloat *params)
#ifdef glGetLightfv
static int luaglew_glGetLightfv(lua_State *L) {
	glGetLightfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetLightiv
// void glGetLightiv (GLenum light, GLenum pname, GLint *params)
#ifdef glGetLightiv
static int luaglew_glGetLightiv(lua_State *L) {
	glGetLightiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetMapdv
// void glGetMapdv (GLenum target, GLenum query, GLdouble *v)
#ifdef glGetMapdv
static int luaglew_glGetMapdv(lua_State *L) {
	glGetMapdv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetMapfv
// void glGetMapfv (GLenum target, GLenum query, GLfloat *v)
#ifdef glGetMapfv
static int luaglew_glGetMapfv(lua_State *L) {
	glGetMapfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetMapiv
// void glGetMapiv (GLenum target, GLenum query, GLint *v)
#ifdef glGetMapiv
static int luaglew_glGetMapiv(lua_State *L) {
	glGetMapiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetMaterialfv
// void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params)
#ifdef glGetMaterialfv
static int luaglew_glGetMaterialfv(lua_State *L) {
	glGetMaterialfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetMaterialiv
// void glGetMaterialiv (GLenum face, GLenum pname, GLint *params)
#ifdef glGetMaterialiv
static int luaglew_glGetMaterialiv(lua_State *L) {
	glGetMaterialiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetMinmax
// void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
#ifdef glGetMinmax
static int luaglew_glGetMinmax(lua_State *L) {
	glGetMinmax(luaglew_checkenum(L, 1), (GLboolean)lua_toboolean(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetObjectParameterfvARB
// void glGetObjectParameterfvARB (GLhandleARB obj, GLenum pname, GLfloat *params)
#ifdef glGetObjectParameterfvARB
static int luaglew_glGetObjectParameterfvARB(lua_State *L) {
	glGetObjectParameterfvARB((GLhandleARB)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetObjectParameterivAPPLE
// void glGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint* params)
#ifdef glGetObjectParameterivAPPLE
static int luaglew_glGetObjectParameterivAPPLE(lua_State *L) {
	glGetObjectParameterivAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetObjectParameterivARB
// void glGetObjectParameterivARB (GLhandleARB obj, GLenum pname, GLint *params)
#ifdef glGetObjectParameterivARB
static int luaglew_glGetObjectParameterivARB(lua_State *L) {
	glGetObjectParameterivARB((GLhandleARB)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetPixelMapfv
// void glGetPixelMapfv (GLenum map, GLfloat *values)
#ifdef glGetPixelMapfv
static int luaglew_glGetPixelMapfv(lua_State *L) {
	glGetPixelMapfv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glGetPixelMapuiv
// void glGetPixelMapuiv (GLenum map, GLuint *values)
#ifdef glGetPixelMapuiv
static int luaglew_glGetPixelMapuiv(lua_State *L) {
	glGetPixelMapuiv(luaglew_checkenum(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGetPixelMapusv
// void glGetPixelMapusv (GLenum map, GLushort *values)
#ifdef glGetPixelMapusv
static int luaglew_glGetPixelMapusv(lua_State *L) {
	glGetPixelMapusv(luaglew_checkenum(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glGetPointerv
// void glGetPointerv (GLenum pname, GLvoid* *params)
#ifdef glGetPointerv
static int luaglew_glGetPointerv(lua_State *L) {
	glGetPointerv(luaglew_checkenum(L, 1), (GLvoid *)luaglew_checkarray_void(L, 2));
	return 0;
}
#endif

//####glGetPolygonStipple
// void glGetPolygonStipple (GLubyte *mask)
#ifdef glGetPolygonStipple
static int luaglew_glGetPolygonStipple(lua_State *L) {
	glGetPolygonStipple((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glGetProgramEnvParameterdvARB
// void glGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble *params)
#ifdef glGetProgramEnvParameterdvARB
static int luaglew_glGetProgramEnvParameterdvARB(lua_State *L) {
	glGetProgramEnvParameterdvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetProgramEnvParameterfvARB
// void glGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat *params)
#ifdef glGetProgramEnvParameterfvARB
static int luaglew_glGetProgramEnvParameterfvARB(lua_State *L) {
	glGetProgramEnvParameterfvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetProgramInfoLog
// void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
#ifdef glGetProgramInfoLog
static int luaglew_glGetProgramInfoLog(lua_State *L) {
	glGetProgramInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetProgramLocalParameterdvARB
// void glGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble *params)
#ifdef glGetProgramLocalParameterdvARB
static int luaglew_glGetProgramLocalParameterdvARB(lua_State *L) {
	glGetProgramLocalParameterdvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetProgramLocalParameterfvARB
// void glGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat *params)
#ifdef glGetProgramLocalParameterfvARB
static int luaglew_glGetProgramLocalParameterfvARB(lua_State *L) {
	glGetProgramLocalParameterfvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetProgramStringARB
// void glGetProgramStringARB (GLenum target, GLenum pname, GLvoid *string)
#ifdef glGetProgramStringARB
static int luaglew_glGetProgramStringARB(lua_State *L) {
	glGetProgramStringARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLvoid *)luaglew_checkarray_void(L, 3));
	return 0;
}
#endif

//####glGetProgramiv
// void glGetProgramiv (GLuint program, GLenum pname, GLint *params)
#ifdef glGetProgramiv
static int luaglew_glGetProgramiv(lua_State *L) {
	glGetProgramiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetProgramivARB
// void glGetProgramivARB (GLenum target, GLenum pname, GLint *params)
#ifdef glGetProgramivARB
static int luaglew_glGetProgramivARB(lua_State *L) {
	glGetProgramivARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectiv
// void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params)
#ifdef glGetQueryObjectiv
static int luaglew_glGetQueryObjectiv(lua_State *L) {
	glGetQueryObjectiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectivARB
// void glGetQueryObjectivARB (GLuint id, GLenum pname, GLint *params)
#ifdef glGetQueryObjectivARB
static int luaglew_glGetQueryObjectivARB(lua_State *L) {
	glGetQueryObjectivARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectuiv
// void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params)
#ifdef glGetQueryObjectuiv
static int luaglew_glGetQueryObjectuiv(lua_State *L) {
	glGetQueryObjectuiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryObjectuivARB
// void glGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint *params)
#ifdef glGetQueryObjectuivARB
static int luaglew_glGetQueryObjectuivARB(lua_State *L) {
	glGetQueryObjectuivARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryiv
// void glGetQueryiv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetQueryiv
static int luaglew_glGetQueryiv(lua_State *L) {
	glGetQueryiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetQueryivARB
// void glGetQueryivARB (GLenum target, GLenum pname, GLint *params)
#ifdef glGetQueryivARB
static int luaglew_glGetQueryivARB(lua_State *L) {
	glGetQueryivARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetRenderbufferParameteriv
// void glGetRenderbufferParameteriv (GLenum, GLenum, GLint *)
#ifdef glGetRenderbufferParameteriv
static int luaglew_glGetRenderbufferParameteriv(lua_State *L) {
	glGetRenderbufferParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetRenderbufferParameterivEXT
// void glGetRenderbufferParameterivEXT (GLenum target, GLenum pname, GLint *params)
#ifdef glGetRenderbufferParameterivEXT
static int luaglew_glGetRenderbufferParameterivEXT(lua_State *L) {
	glGetRenderbufferParameterivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetSeparableFilter
// void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
#ifdef glGetSeparableFilter
static int luaglew_glGetSeparableFilter(lua_State *L) {
	glGetSeparableFilter(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5), (GLvoid *)luaglew_checkarray_void(L, 6));
	return 0;
}
#endif

//####glGetShaderInfoLog
// void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
#ifdef glGetShaderInfoLog
static int luaglew_glGetShaderInfoLog(lua_State *L) {
	glGetShaderInfoLog((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetShaderSource
// void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
#ifdef glGetShaderSource
static int luaglew_glGetShaderSource(lua_State *L) {
	glGetShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetShaderSourceARB
// void glGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source)
#ifdef glGetShaderSourceARB
static int luaglew_glGetShaderSourceARB(lua_State *L) {
	glGetShaderSourceARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLchar *)luaglew_checkarray_char(L, 4));
	return 0;
}
#endif

//####glGetShaderiv
// void glGetShaderiv (GLuint shader, GLenum pname, GLint *params)
#ifdef glGetShaderiv
static int luaglew_glGetShaderiv(lua_State *L) {
	glGetShaderiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexEnvfv
// void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetTexEnvfv
static int luaglew_glGetTexEnvfv(lua_State *L) {
	glGetTexEnvfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetTexEnviv
// void glGetTexEnviv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetTexEnviv
static int luaglew_glGetTexEnviv(lua_State *L) {
	glGetTexEnviv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexGendv
// void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params)
#ifdef glGetTexGendv
static int luaglew_glGetTexGendv(lua_State *L) {
	glGetTexGendv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetTexGenfv
// void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params)
#ifdef glGetTexGenfv
static int luaglew_glGetTexGenfv(lua_State *L) {
	glGetTexGenfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetTexGeniv
// void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params)
#ifdef glGetTexGeniv
static int luaglew_glGetTexGeniv(lua_State *L) {
	glGetTexGeniv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexImage
// void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
#ifdef glGetTexImage
static int luaglew_glGetTexImage(lua_State *L) {
	glGetTexImage(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4), (GLvoid *)luaglew_checkarray_void(L, 5));
	return 0;
}
#endif

//####glGetTexLevelParameterfv
// void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params)
#ifdef glGetTexLevelParameterfv
static int luaglew_glGetTexLevelParameterfv(lua_State *L) {
	glGetTexLevelParameterfv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glGetTexLevelParameteriv
// void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params)
#ifdef glGetTexLevelParameteriv
static int luaglew_glGetTexLevelParameteriv(lua_State *L) {
	glGetTexLevelParameteriv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetTexParameterIivEXT
// void glGetTexParameterIivEXT ( GLenum target, GLenum pname, GLint *params)
#ifdef glGetTexParameterIivEXT
static int luaglew_glGetTexParameterIivEXT(lua_State *L) {
	glGetTexParameterIivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterIuivEXT
// void glGetTexParameterIuivEXT ( GLenum target, GLenum pname, GLuint *params)
#ifdef glGetTexParameterIuivEXT
static int luaglew_glGetTexParameterIuivEXT(lua_State *L) {
	glGetTexParameterIuivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTexParameterfv
// void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params)
#ifdef glGetTexParameterfv
static int luaglew_glGetTexParameterfv(lua_State *L) {
	glGetTexParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetTexParameteriv
// void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params)
#ifdef glGetTexParameteriv
static int luaglew_glGetTexParameteriv(lua_State *L) {
	glGetTexParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetTransformFeedbackVaryingEXT
// void glGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
#ifdef glGetTransformFeedbackVaryingEXT
static int luaglew_glGetTransformFeedbackVaryingEXT(lua_State *L) {
	glGetTransformFeedbackVaryingEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), luaglew_checkarray_enum(L, 6), (GLchar *)luaglew_checkarray_char(L, 7));
	return 0;
}
#endif

//####glGetUniformIndices
// void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices)
#ifdef glGetUniformIndices
static int luaglew_glGetUniformIndices(lua_State *L) {
	glGetUniformIndices((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), (GLuint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glGetUniformfv
// void glGetUniformfv (GLuint program, GLint location, GLfloat *params)
#ifdef glGetUniformfv
static int luaglew_glGetUniformfv(lua_State *L) {
	glGetUniformfv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetUniformfvARB
// void glGetUniformfvARB (GLhandleARB programObj, GLint location, GLfloat *params)
#ifdef glGetUniformfvARB
static int luaglew_glGetUniformfvARB(lua_State *L) {
	glGetUniformfvARB((GLhandleARB)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetUniformiv
// void glGetUniformiv (GLuint program, GLint location, GLint *params)
#ifdef glGetUniformiv
static int luaglew_glGetUniformiv(lua_State *L) {
	glGetUniformiv((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetUniformivARB
// void glGetUniformivARB (GLhandleARB programObj, GLint location, GLint *params)
#ifdef glGetUniformivARB
static int luaglew_glGetUniformivARB(lua_State *L) {
	glGetUniformivARB((GLhandleARB)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribPointerv
// void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid* *pointer)
#ifdef glGetVertexAttribPointerv
static int luaglew_glGetVertexAttribPointerv(lua_State *L) {
	glGetVertexAttribPointerv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribPointervARB
// void glGetVertexAttribPointervARB (GLuint index, GLenum pname, GLvoid **pointer)
#ifdef glGetVertexAttribPointervARB
static int luaglew_glGetVertexAttribPointervARB(lua_State *L) {
	glGetVertexAttribPointervARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), luaglew_checkarray_2void(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribdv
// void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params)
#ifdef glGetVertexAttribdv
static int luaglew_glGetVertexAttribdv(lua_State *L) {
	glGetVertexAttribdv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribdvARB
// void glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params)
#ifdef glGetVertexAttribdvARB
static int luaglew_glGetVertexAttribdvARB(lua_State *L) {
	glGetVertexAttribdvARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribfv
// void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params)
#ifdef glGetVertexAttribfv
static int luaglew_glGetVertexAttribfv(lua_State *L) {
	glGetVertexAttribfv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribfvARB
// void glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params)
#ifdef glGetVertexAttribfvARB
static int luaglew_glGetVertexAttribfvARB(lua_State *L) {
	glGetVertexAttribfvARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribiv
// void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params)
#ifdef glGetVertexAttribiv
static int luaglew_glGetVertexAttribiv(lua_State *L) {
	glGetVertexAttribiv((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glGetVertexAttribivARB
// void glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params)
#ifdef glGetVertexAttribivARB
static int luaglew_glGetVertexAttribivARB(lua_State *L) {
	glGetVertexAttribivARB((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glHint
// void glHint (GLenum target, GLenum mode)
#ifdef glHint
static int luaglew_glHint(lua_State *L) {
	glHint(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glIndexMask
// void glIndexMask (GLuint mask)
#ifdef glIndexMask
static int luaglew_glIndexMask(lua_State *L) {
	glIndexMask((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glIndexPointer
// void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glIndexPointer
static int luaglew_glIndexPointer(lua_State *L) {
	glIndexPointer(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glIndexd
// void glIndexd (GLdouble c)
#ifdef glIndexd
static int luaglew_glIndexd(lua_State *L) {
	glIndexd((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glIndexdv
// void glIndexdv (const GLdouble *c)
#ifdef glIndexdv
static int luaglew_glIndexdv(lua_State *L) {
	glIndexdv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glIndexf
// void glIndexf (GLfloat c)
#ifdef glIndexf
static int luaglew_glIndexf(lua_State *L) {
	glIndexf((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glIndexfv
// void glIndexfv (const GLfloat *c)
#ifdef glIndexfv
static int luaglew_glIndexfv(lua_State *L) {
	glIndexfv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glIndexi
// void glIndexi (GLint c)
#ifdef glIndexi
static int luaglew_glIndexi(lua_State *L) {
	glIndexi((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glIndexiv
// void glIndexiv (const GLint *c)
#ifdef glIndexiv
static int luaglew_glIndexiv(lua_State *L) {
	glIndexiv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glIndexs
// void glIndexs (GLshort c)
#ifdef glIndexs
static int luaglew_glIndexs(lua_State *L) {
	glIndexs((GLshort)luaL_checkinteger(L, 1));
	return 0;
}
#endif

//####glIndexsv
// void glIndexsv (const GLshort *c)
#ifdef glIndexsv
static int luaglew_glIndexsv(lua_State *L) {
	glIndexsv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glIndexub
// void glIndexub (GLubyte c)
#ifdef glIndexub
static int luaglew_glIndexub(lua_State *L) {
	glIndexub((GLubyte)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glIndexubv
// void glIndexubv (const GLubyte *c)
#ifdef glIndexubv
static int luaglew_glIndexubv(lua_State *L) {
	glIndexubv((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glInitNames
// void glInitNames (void)
#ifdef glInitNames
static int luaglew_glInitNames(lua_State *L) {
	glInitNames();
	return 0;
}
#endif

//####glInterleavedArrays
// void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer)
#ifdef glInterleavedArrays
static int luaglew_glInterleavedArrays(lua_State *L) {
	glInterleavedArrays(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glLightModelf
// void glLightModelf (GLenum pname, GLfloat param)
#ifdef glLightModelf
static int luaglew_glLightModelf(lua_State *L) {
	glLightModelf(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glLightModelfv
// void glLightModelfv (GLenum pname, const GLfloat *params)
#ifdef glLightModelfv
static int luaglew_glLightModelfv(lua_State *L) {
	glLightModelfv(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glLightModeli
// void glLightModeli (GLenum pname, GLint param)
#ifdef glLightModeli
static int luaglew_glLightModeli(lua_State *L) {
	glLightModeli(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glLightModeliv
// void glLightModeliv (GLenum pname, const GLint *params)
#ifdef glLightModeliv
static int luaglew_glLightModeliv(lua_State *L) {
	glLightModeliv(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glLightf
// void glLightf (GLenum light, GLenum pname, GLfloat param)
#ifdef glLightf
static int luaglew_glLightf(lua_State *L) {
	glLightf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glLightfv
// void glLightfv (GLenum light, GLenum pname, const GLfloat *params)
#ifdef glLightfv
static int luaglew_glLightfv(lua_State *L) {
	glLightfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glLighti
// void glLighti (GLenum light, GLenum pname, GLint param)
#ifdef glLighti
static int luaglew_glLighti(lua_State *L) {
	glLighti(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glLightiv
// void glLightiv (GLenum light, GLenum pname, const GLint *params)
#ifdef glLightiv
static int luaglew_glLightiv(lua_State *L) {
	glLightiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glLineStipple
// void glLineStipple (GLint factor, GLushort pattern)
#ifdef glLineStipple
static int luaglew_glLineStipple(lua_State *L) {
	glLineStipple((GLint)luaL_checkint(L, 1), (GLushort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glLineWidth
// void glLineWidth (GLfloat width)
#ifdef glLineWidth
static int luaglew_glLineWidth(lua_State *L) {
	glLineWidth((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glLinkProgramARB
// void glLinkProgramARB (GLhandleARB programObj)
#ifdef glLinkProgramARB
static int luaglew_glLinkProgramARB(lua_State *L) {
	glLinkProgramARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glListBase
// void glListBase (GLuint base)
#ifdef glListBase
static int luaglew_glListBase(lua_State *L) {
	glListBase((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glLoadIdentity
// void glLoadIdentity (void)
#ifdef glLoadIdentity
static int luaglew_glLoadIdentity(lua_State *L) {
	glLoadIdentity();
	return 0;
}
#endif

//####glLoadMatrixd
// void glLoadMatrixd (const GLdouble *m)
#ifdef glLoadMatrixd
static int luaglew_glLoadMatrixd(lua_State *L) {
	glLoadMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glLoadMatrixf
// void glLoadMatrixf (const GLfloat *m)
#ifdef glLoadMatrixf
static int luaglew_glLoadMatrixf(lua_State *L) {
	glLoadMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glLoadName
// void glLoadName (GLuint name)
#ifdef glLoadName
static int luaglew_glLoadName(lua_State *L) {
	glLoadName((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glLoadTransposeMatrixd
// void glLoadTransposeMatrixd (const GLdouble *m)
#ifdef glLoadTransposeMatrixd
static int luaglew_glLoadTransposeMatrixd(lua_State *L) {
	glLoadTransposeMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glLoadTransposeMatrixdARB
// void glLoadTransposeMatrixdARB (const GLdouble *)
#ifdef glLoadTransposeMatrixdARB
static int luaglew_glLoadTransposeMatrixdARB(lua_State *L) {
	glLoadTransposeMatrixdARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glLoadTransposeMatrixf
// void glLoadTransposeMatrixf (const GLfloat *m)
#ifdef glLoadTransposeMatrixf
static int luaglew_glLoadTransposeMatrixf(lua_State *L) {
	glLoadTransposeMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glLoadTransposeMatrixfARB
// void glLoadTransposeMatrixfARB (const GLfloat *)
#ifdef glLoadTransposeMatrixfARB
static int luaglew_glLoadTransposeMatrixfARB(lua_State *L) {
	glLoadTransposeMatrixfARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glLockArraysEXT
// void glLockArraysEXT (GLint, GLsizei)
#ifdef glLockArraysEXT
static int luaglew_glLockArraysEXT(lua_State *L) {
	glLockArraysEXT((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2));
	return 0;
}
#endif

//####glLogicOp
// void glLogicOp (GLenum opcode)
#ifdef glLogicOp
static int luaglew_glLogicOp(lua_State *L) {
	glLogicOp(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glMap1d
// void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
#ifdef glMap1d
static int luaglew_glMap1d(lua_State *L) {
	glMap1d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLdouble *)luaglew_checkarray_double(L, 6));
	return 0;
}
#endif

//####glMap1f
// void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
#ifdef glMap1f
static int luaglew_glMap1f(lua_State *L) {
	glMap1f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLfloat *)luaglew_checkarray_float(L, 6));
	return 0;
}
#endif

//####glMap2d
// void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
#ifdef glMap2d
static int luaglew_glMap2d(lua_State *L) {
	glMap2d(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLdouble)luaL_checknumber(L, 6), (GLdouble)luaL_checknumber(L, 7), (GLint)luaL_checkint(L, 8), (GLint)luaL_checkint(L, 9), (GLdouble *)luaglew_checkarray_double(L, 10));
	return 0;
}
#endif

//####glMap2f
// void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
#ifdef glMap2f
static int luaglew_glMap2f(lua_State *L) {
	glMap2f(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5), (GLfloat)luaL_checknumber(L, 6), (GLfloat)luaL_checknumber(L, 7), (GLint)luaL_checkint(L, 8), (GLint)luaL_checkint(L, 9), (GLfloat *)luaglew_checkarray_float(L, 10));
	return 0;
}
#endif

//####glMapGrid1d
// void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2)
#ifdef glMapGrid1d
static int luaglew_glMapGrid1d(lua_State *L) {
	glMapGrid1d((GLint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMapGrid1f
// void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2)
#ifdef glMapGrid1f
static int luaglew_glMapGrid1f(lua_State *L) {
	glMapGrid1f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMapGrid2d
// void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
#ifdef glMapGrid2d
static int luaglew_glMapGrid2d(lua_State *L) {
	glMapGrid2d((GLint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glMapGrid2f
// void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
#ifdef glMapGrid2f
static int luaglew_glMapGrid2f(lua_State *L) {
	glMapGrid2f((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLint)luaL_checkint(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glMapVertexAttrib1dAPPLE
// void glMapVertexAttrib1dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
#ifdef glMapVertexAttrib1dAPPLE
static int luaglew_glMapVertexAttrib1dAPPLE(lua_State *L) {
	glMapVertexAttrib1dAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLdouble *)luaglew_checkarray_double(L, 7));
	return 0;
}
#endif

//####glMapVertexAttrib1fAPPLE
// void glMapVertexAttrib1fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
#ifdef glMapVertexAttrib1fAPPLE
static int luaglew_glMapVertexAttrib1fAPPLE(lua_State *L) {
	glMapVertexAttrib1fAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLfloat *)luaglew_checkarray_float(L, 7));
	return 0;
}
#endif

//####glMapVertexAttrib2dAPPLE
// void glMapVertexAttrib2dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
#ifdef glMapVertexAttrib2dAPPLE
static int luaglew_glMapVertexAttrib2dAPPLE(lua_State *L) {
	glMapVertexAttrib2dAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLdouble)luaL_checknumber(L, 7), (GLdouble)luaL_checknumber(L, 8), (GLint)luaL_checkint(L, 9), (GLint)luaL_checkint(L, 10), (GLdouble *)luaglew_checkarray_double(L, 11));
	return 0;
}
#endif

//####glMapVertexAttrib2fAPPLE
// void glMapVertexAttrib2fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
#ifdef glMapVertexAttrib2fAPPLE
static int luaglew_glMapVertexAttrib2fAPPLE(lua_State *L) {
	glMapVertexAttrib2fAPPLE((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLint)luaL_checkint(L, 5), (GLint)luaL_checkint(L, 6), (GLfloat)luaL_checknumber(L, 7), (GLfloat)luaL_checknumber(L, 8), (GLint)luaL_checkint(L, 9), (GLint)luaL_checkint(L, 10), (GLfloat *)luaglew_checkarray_float(L, 11));
	return 0;
}
#endif

//####glMaterialf
// void glMaterialf (GLenum face, GLenum pname, GLfloat param)
#ifdef glMaterialf
static int luaglew_glMaterialf(lua_State *L) {
	glMaterialf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMaterialfv
// void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params)
#ifdef glMaterialfv
static int luaglew_glMaterialfv(lua_State *L) {
	glMaterialfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glMateriali
// void glMateriali (GLenum face, GLenum pname, GLint param)
#ifdef glMateriali
static int luaglew_glMateriali(lua_State *L) {
	glMateriali(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glMaterialiv
// void glMaterialiv (GLenum face, GLenum pname, const GLint *params)
#ifdef glMaterialiv
static int luaglew_glMaterialiv(lua_State *L) {
	glMaterialiv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glMatrixMode
// void glMatrixMode (GLenum mode)
#ifdef glMatrixMode
static int luaglew_glMatrixMode(lua_State *L) {
	glMatrixMode(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glMinmax
// void glMinmax (GLenum target, GLenum internalformat, GLboolean sink)
#ifdef glMinmax
static int luaglew_glMinmax(lua_State *L) {
	glMinmax(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLboolean)lua_toboolean(L, 3));
	return 0;
}
#endif

//####glMultMatrixd
// void glMultMatrixd (const GLdouble *m)
#ifdef glMultMatrixd
static int luaglew_glMultMatrixd(lua_State *L) {
	glMultMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glMultMatrixf
// void glMultMatrixf (const GLfloat *m)
#ifdef glMultMatrixf
static int luaglew_glMultMatrixf(lua_State *L) {
	glMultMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixd
// void glMultTransposeMatrixd (const GLdouble *m)
#ifdef glMultTransposeMatrixd
static int luaglew_glMultTransposeMatrixd(lua_State *L) {
	glMultTransposeMatrixd((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixdARB
// void glMultTransposeMatrixdARB (const GLdouble *)
#ifdef glMultTransposeMatrixdARB
static int luaglew_glMultTransposeMatrixdARB(lua_State *L) {
	glMultTransposeMatrixdARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixf
// void glMultTransposeMatrixf (const GLfloat *m)
#ifdef glMultTransposeMatrixf
static int luaglew_glMultTransposeMatrixf(lua_State *L) {
	glMultTransposeMatrixf((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glMultTransposeMatrixfARB
// void glMultTransposeMatrixfARB (const GLfloat *)
#ifdef glMultTransposeMatrixfARB
static int luaglew_glMultTransposeMatrixfARB(lua_State *L) {
	glMultTransposeMatrixfARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glMultiDrawArrays
// void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
#ifdef glMultiDrawArrays
static int luaglew_glMultiDrawArrays(lua_State *L) {
	glMultiDrawArrays(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glMultiDrawArraysEXT
// void glMultiDrawArraysEXT (GLenum, const GLint *, const GLsizei *, GLsizei)
#ifdef glMultiDrawArraysEXT
static int luaglew_glMultiDrawArraysEXT(lua_State *L) {
	glMultiDrawArraysEXT(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glMultiDrawElementArrayAPPLE
// void glMultiDrawElementArrayAPPLE (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
#ifdef glMultiDrawElementArrayAPPLE
static int luaglew_glMultiDrawElementArrayAPPLE(lua_State *L) {
	glMultiDrawElementArrayAPPLE(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2), (GLsizei *)luaglew_checkarray_int(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glMultiDrawElements
// void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
#ifdef glMultiDrawElements
static int luaglew_glMultiDrawElements(lua_State *L) {
	glMultiDrawElements(luaglew_checkenum(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glMultiDrawElementsEXT
// void glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei)
#ifdef glMultiDrawElementsEXT
static int luaglew_glMultiDrawElementsEXT(lua_State *L) {
	glMultiDrawElementsEXT(luaglew_checkenum(L, 1), (GLsizei *)luaglew_checkarray_int(L, 2), luaglew_checkenum(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glMultiDrawRangeElementArrayAPPLE
// void glMultiDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
#ifdef glMultiDrawRangeElementArrayAPPLE
static int luaglew_glMultiDrawRangeElementArrayAPPLE(lua_State *L) {
	glMultiDrawRangeElementArrayAPPLE(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3), (GLint *)luaglew_checkarray_int(L, 4), (GLsizei *)luaglew_checkarray_int(L, 5), (GLsizei)luaL_checklong(L, 6));
	return 0;
}
#endif

//####glMultiTexCoord1dARB
// void glMultiTexCoord1dARB (GLenum, GLdouble)
#ifdef glMultiTexCoord1dARB
static int luaglew_glMultiTexCoord1dARB(lua_State *L) {
	glMultiTexCoord1dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1dvARB
// void glMultiTexCoord1dvARB (GLenum, const GLdouble *)
#ifdef glMultiTexCoord1dvARB
static int luaglew_glMultiTexCoord1dvARB(lua_State *L) {
	glMultiTexCoord1dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1fARB
// void glMultiTexCoord1fARB (GLenum, GLfloat)
#ifdef glMultiTexCoord1fARB
static int luaglew_glMultiTexCoord1fARB(lua_State *L) {
	glMultiTexCoord1fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1fvARB
// void glMultiTexCoord1fvARB (GLenum, const GLfloat *)
#ifdef glMultiTexCoord1fvARB
static int luaglew_glMultiTexCoord1fvARB(lua_State *L) {
	glMultiTexCoord1fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1iARB
// void glMultiTexCoord1iARB (GLenum, GLint)
#ifdef glMultiTexCoord1iARB
static int luaglew_glMultiTexCoord1iARB(lua_State *L) {
	glMultiTexCoord1iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1ivARB
// void glMultiTexCoord1ivARB (GLenum, const GLint *)
#ifdef glMultiTexCoord1ivARB
static int luaglew_glMultiTexCoord1ivARB(lua_State *L) {
	glMultiTexCoord1ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1sARB
// void glMultiTexCoord1sARB (GLenum, GLshort)
#ifdef glMultiTexCoord1sARB
static int luaglew_glMultiTexCoord1sARB(lua_State *L) {
	glMultiTexCoord1sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord1svARB
// void glMultiTexCoord1svARB (GLenum, const GLshort *)
#ifdef glMultiTexCoord1svARB
static int luaglew_glMultiTexCoord1svARB(lua_State *L) {
	glMultiTexCoord1svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2dARB
// void glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble)
#ifdef glMultiTexCoord2dARB
static int luaglew_glMultiTexCoord2dARB(lua_State *L) {
	glMultiTexCoord2dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2dvARB
// void glMultiTexCoord2dvARB (GLenum, const GLdouble *)
#ifdef glMultiTexCoord2dvARB
static int luaglew_glMultiTexCoord2dvARB(lua_State *L) {
	glMultiTexCoord2dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2fARB
// void glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat)
#ifdef glMultiTexCoord2fARB
static int luaglew_glMultiTexCoord2fARB(lua_State *L) {
	glMultiTexCoord2fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2fvARB
// void glMultiTexCoord2fvARB (GLenum, const GLfloat *)
#ifdef glMultiTexCoord2fvARB
static int luaglew_glMultiTexCoord2fvARB(lua_State *L) {
	glMultiTexCoord2fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2iARB
// void glMultiTexCoord2iARB (GLenum, GLint, GLint)
#ifdef glMultiTexCoord2iARB
static int luaglew_glMultiTexCoord2iARB(lua_State *L) {
	glMultiTexCoord2iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2ivARB
// void glMultiTexCoord2ivARB (GLenum, const GLint *)
#ifdef glMultiTexCoord2ivARB
static int luaglew_glMultiTexCoord2ivARB(lua_State *L) {
	glMultiTexCoord2ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord2sARB
// void glMultiTexCoord2sARB (GLenum, GLshort, GLshort)
#ifdef glMultiTexCoord2sARB
static int luaglew_glMultiTexCoord2sARB(lua_State *L) {
	glMultiTexCoord2sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glMultiTexCoord2svARB
// void glMultiTexCoord2svARB (GLenum, const GLshort *)
#ifdef glMultiTexCoord2svARB
static int luaglew_glMultiTexCoord2svARB(lua_State *L) {
	glMultiTexCoord2svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3dARB
// void glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble)
#ifdef glMultiTexCoord3dARB
static int luaglew_glMultiTexCoord3dARB(lua_State *L) {
	glMultiTexCoord3dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3dvARB
// void glMultiTexCoord3dvARB (GLenum, const GLdouble *)
#ifdef glMultiTexCoord3dvARB
static int luaglew_glMultiTexCoord3dvARB(lua_State *L) {
	glMultiTexCoord3dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3fARB
// void glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat)
#ifdef glMultiTexCoord3fARB
static int luaglew_glMultiTexCoord3fARB(lua_State *L) {
	glMultiTexCoord3fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3fvARB
// void glMultiTexCoord3fvARB (GLenum, const GLfloat *)
#ifdef glMultiTexCoord3fvARB
static int luaglew_glMultiTexCoord3fvARB(lua_State *L) {
	glMultiTexCoord3fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3iARB
// void glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint)
#ifdef glMultiTexCoord3iARB
static int luaglew_glMultiTexCoord3iARB(lua_State *L) {
	glMultiTexCoord3iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3ivARB
// void glMultiTexCoord3ivARB (GLenum, const GLint *)
#ifdef glMultiTexCoord3ivARB
static int luaglew_glMultiTexCoord3ivARB(lua_State *L) {
	glMultiTexCoord3ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord3sARB
// void glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort)
#ifdef glMultiTexCoord3sARB
static int luaglew_glMultiTexCoord3sARB(lua_State *L) {
	glMultiTexCoord3sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glMultiTexCoord3svARB
// void glMultiTexCoord3svARB (GLenum, const GLshort *)
#ifdef glMultiTexCoord3svARB
static int luaglew_glMultiTexCoord3svARB(lua_State *L) {
	glMultiTexCoord3svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4dARB
// void glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble)
#ifdef glMultiTexCoord4dARB
static int luaglew_glMultiTexCoord4dARB(lua_State *L) {
	glMultiTexCoord4dARB(luaglew_checkenum(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4dvARB
// void glMultiTexCoord4dvARB (GLenum, const GLdouble *)
#ifdef glMultiTexCoord4dvARB
static int luaglew_glMultiTexCoord4dvARB(lua_State *L) {
	glMultiTexCoord4dvARB(luaglew_checkenum(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4fARB
// void glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat)
#ifdef glMultiTexCoord4fARB
static int luaglew_glMultiTexCoord4fARB(lua_State *L) {
	glMultiTexCoord4fARB(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4fvARB
// void glMultiTexCoord4fvARB (GLenum, const GLfloat *)
#ifdef glMultiTexCoord4fvARB
static int luaglew_glMultiTexCoord4fvARB(lua_State *L) {
	glMultiTexCoord4fvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4i
// void glMultiTexCoord4i (GLenum target, GLint, GLint s, GLint t, GLint r)
#ifdef glMultiTexCoord4i
static int luaglew_glMultiTexCoord4i(lua_State *L) {
	glMultiTexCoord4i(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4iARB
// void glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint)
#ifdef glMultiTexCoord4iARB
static int luaglew_glMultiTexCoord4iARB(lua_State *L) {
	glMultiTexCoord4iARB(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4ivARB
// void glMultiTexCoord4ivARB (GLenum, const GLint *)
#ifdef glMultiTexCoord4ivARB
static int luaglew_glMultiTexCoord4ivARB(lua_State *L) {
	glMultiTexCoord4ivARB(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glMultiTexCoord4sARB
// void glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort)
#ifdef glMultiTexCoord4sARB
static int luaglew_glMultiTexCoord4sARB(lua_State *L) {
	glMultiTexCoord4sARB(luaglew_checkenum(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glMultiTexCoord4svARB
// void glMultiTexCoord4svARB (GLenum, const GLshort *)
#ifdef glMultiTexCoord4svARB
static int luaglew_glMultiTexCoord4svARB(lua_State *L) {
	glMultiTexCoord4svARB(luaglew_checkenum(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glNewList
// void glNewList (GLuint list, GLenum mode)
#ifdef glNewList
static int luaglew_glNewList(lua_State *L) {
	glNewList((GLuint)luaL_checkint(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glNormal3b
// void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz)
#ifdef glNormal3b
static int luaglew_glNormal3b(lua_State *L) {
	glNormal3b((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glNormal3bv
// void glNormal3bv (const GLbyte *v)
#ifdef glNormal3bv
static int luaglew_glNormal3bv(lua_State *L) {
	glNormal3bv((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glNormal3d
// void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz)
#ifdef glNormal3d
static int luaglew_glNormal3d(lua_State *L) {
	glNormal3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glNormal3dv
// void glNormal3dv (const GLdouble *v)
#ifdef glNormal3dv
static int luaglew_glNormal3dv(lua_State *L) {
	glNormal3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glNormal3f
// void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz)
#ifdef glNormal3f
static int luaglew_glNormal3f(lua_State *L) {
	glNormal3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glNormal3fv
// void glNormal3fv (const GLfloat *v)
#ifdef glNormal3fv
static int luaglew_glNormal3fv(lua_State *L) {
	glNormal3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glNormal3i
// void glNormal3i (GLint nx, GLint ny, GLint nz)
#ifdef glNormal3i
static int luaglew_glNormal3i(lua_State *L) {
	glNormal3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glNormal3iv
// void glNormal3iv (const GLint *v)
#ifdef glNormal3iv
static int luaglew_glNormal3iv(lua_State *L) {
	glNormal3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glNormal3s
// void glNormal3s (GLshort nx, GLshort ny, GLshort nz)
#ifdef glNormal3s
static int luaglew_glNormal3s(lua_State *L) {
	glNormal3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glNormal3sv
// void glNormal3sv (const GLshort *v)
#ifdef glNormal3sv
static int luaglew_glNormal3sv(lua_State *L) {
	glNormal3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glNormalPointer
// void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glNormalPointer
static int luaglew_glNormalPointer(lua_State *L) {
	glNormalPointer(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glOrtho
// void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
#ifdef glOrtho
static int luaglew_glOrtho(lua_State *L) {
	glOrtho((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glPNTrianglesfATIX
// void glPNTrianglesfATIX (GLenum pname, GLfloat param)
#ifdef glPNTrianglesfATIX
static int luaglew_glPNTrianglesfATIX(lua_State *L) {
	glPNTrianglesfATIX(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPNTrianglesiATIX
// void glPNTrianglesiATIX (GLenum pname, GLint param)
#ifdef glPNTrianglesiATIX
static int luaglew_glPNTrianglesiATIX(lua_State *L) {
	glPNTrianglesiATIX(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPassThrough
// void glPassThrough (GLfloat token)
#ifdef glPassThrough
static int luaglew_glPassThrough(lua_State *L) {
	glPassThrough((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glPixelMapfv
// void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values)
#ifdef glPixelMapfv
static int luaglew_glPixelMapfv(lua_State *L) {
	glPixelMapfv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glPixelMapuiv
// void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values)
#ifdef glPixelMapuiv
static int luaglew_glPixelMapuiv(lua_State *L) {
	glPixelMapuiv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glPixelMapusv
// void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values)
#ifdef glPixelMapusv
static int luaglew_glPixelMapusv(lua_State *L) {
	glPixelMapusv(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLushort *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glPixelStoref
// void glPixelStoref (GLenum pname, GLfloat param)
#ifdef glPixelStoref
static int luaglew_glPixelStoref(lua_State *L) {
	glPixelStoref(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPixelStorei
// void glPixelStorei (GLenum pname, GLint param)
#ifdef glPixelStorei
static int luaglew_glPixelStorei(lua_State *L) {
	glPixelStorei(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPixelTransferf
// void glPixelTransferf (GLenum pname, GLfloat param)
#ifdef glPixelTransferf
static int luaglew_glPixelTransferf(lua_State *L) {
	glPixelTransferf(luaglew_checkenum(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPixelTransferi
// void glPixelTransferi (GLenum pname, GLint param)
#ifdef glPixelTransferi
static int luaglew_glPixelTransferi(lua_State *L) {
	glPixelTransferi(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPixelZoom
// void glPixelZoom (GLfloat xfactor, GLfloat yfactor)
#ifdef glPixelZoom
static int luaglew_glPixelZoom(lua_State *L) {
	glPixelZoom((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPointParameterfvARB
// void glPointParameterfvARB (GLenum pname, const GLfloat *params)
#ifdef glPointParameterfvARB
static int luaglew_glPointParameterfvARB(lua_State *L) {
	glPointParameterfvARB(luaglew_checkenum(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glPointParameteriNV
// void glPointParameteriNV (GLenum pname, GLint param)
#ifdef glPointParameteriNV
static int luaglew_glPointParameteriNV(lua_State *L) {
	glPointParameteriNV(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glPointParameterivNV
// void glPointParameterivNV (GLenum pname, const GLint *params)
#ifdef glPointParameterivNV
static int luaglew_glPointParameterivNV(lua_State *L) {
	glPointParameterivNV(luaglew_checkenum(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glPointSize
// void glPointSize (GLfloat size)
#ifdef glPointSize
static int luaglew_glPointSize(lua_State *L) {
	glPointSize((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glPolygonMode
// void glPolygonMode (GLenum face, GLenum mode)
#ifdef glPolygonMode
static int luaglew_glPolygonMode(lua_State *L) {
	glPolygonMode(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2));
	return 0;
}
#endif

//####glPolygonOffset
// void glPolygonOffset (GLfloat factor, GLfloat units)
#ifdef glPolygonOffset
static int luaglew_glPolygonOffset(lua_State *L) {
	glPolygonOffset((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glPolygonStipple
// void glPolygonStipple (const GLubyte *mask)
#ifdef glPolygonStipple
static int luaglew_glPolygonStipple(lua_State *L) {
	glPolygonStipple((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glPopAttrib
// void glPopAttrib (void)
#ifdef glPopAttrib
static int luaglew_glPopAttrib(lua_State *L) {
	glPopAttrib();
	return 0;
}
#endif

//####glPopClientAttrib
// void glPopClientAttrib (void)
#ifdef glPopClientAttrib
static int luaglew_glPopClientAttrib(lua_State *L) {
	glPopClientAttrib();
	return 0;
}
#endif

//####glPopMatrix
// void glPopMatrix (void)
#ifdef glPopMatrix
static int luaglew_glPopMatrix(lua_State *L) {
	glPopMatrix();
	return 0;
}
#endif

//####glPopName
// void glPopName (void)
#ifdef glPopName
static int luaglew_glPopName(lua_State *L) {
	glPopName();
	return 0;
}
#endif

//####glProgramEnvParameter4dARB
// void glProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glProgramEnvParameter4dARB
static int luaglew_glProgramEnvParameter4dARB(lua_State *L) {
	glProgramEnvParameter4dARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramEnvParameter4dvARB
// void glProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble *params)
#ifdef glProgramEnvParameter4dvARB
static int luaglew_glProgramEnvParameter4dvARB(lua_State *L) {
	glProgramEnvParameter4dvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glProgramEnvParameter4fARB
// void glProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glProgramEnvParameter4fARB
static int luaglew_glProgramEnvParameter4fARB(lua_State *L) {
	glProgramEnvParameter4fARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramEnvParameter4fvARB
// void glProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat *params)
#ifdef glProgramEnvParameter4fvARB
static int luaglew_glProgramEnvParameter4fvARB(lua_State *L) {
	glProgramEnvParameter4fvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glProgramEnvParameters4fvEXT
// void glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params)
#ifdef glProgramEnvParameters4fvEXT
static int luaglew_glProgramEnvParameters4fvEXT(lua_State *L) {
	glProgramEnvParameters4fvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramLocalParameter4dARB
// void glProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glProgramLocalParameter4dARB
static int luaglew_glProgramLocalParameter4dARB(lua_State *L) {
	glProgramLocalParameter4dARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5), (GLdouble)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramLocalParameter4dvARB
// void glProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble *params)
#ifdef glProgramLocalParameter4dvARB
static int luaglew_glProgramLocalParameter4dvARB(lua_State *L) {
	glProgramLocalParameter4dvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glProgramLocalParameter4fARB
// void glProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glProgramLocalParameter4fARB
static int luaglew_glProgramLocalParameter4fARB(lua_State *L) {
	glProgramLocalParameter4fARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5), (GLfloat)luaL_checknumber(L, 6));
	return 0;
}
#endif

//####glProgramLocalParameter4fvARB
// void glProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat *params)
#ifdef glProgramLocalParameter4fvARB
static int luaglew_glProgramLocalParameter4fvARB(lua_State *L) {
	glProgramLocalParameter4fvARB(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glProgramLocalParameters4fvEXT
// void glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params)
#ifdef glProgramLocalParameters4fvEXT
static int luaglew_glProgramLocalParameters4fvEXT(lua_State *L) {
	glProgramLocalParameters4fvEXT(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glProgramStringARB
// void glProgramStringARB (GLenum target, GLenum format, GLsizei len, const GLvoid *string)
#ifdef glProgramStringARB
static int luaglew_glProgramStringARB(lua_State *L) {
	glProgramStringARB(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glProvokingVertexEXT
// void glProvokingVertexEXT (GLenum mode)
#ifdef glProvokingVertexEXT
static int luaglew_glProvokingVertexEXT(lua_State *L) {
	glProvokingVertexEXT(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glPushAttrib
// void glPushAttrib (GLbitfield mask)
#ifdef glPushAttrib
static int luaglew_glPushAttrib(lua_State *L) {
	glPushAttrib((GLbitfield)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glPushClientAttrib
// void glPushClientAttrib (GLbitfield mask)
#ifdef glPushClientAttrib
static int luaglew_glPushClientAttrib(lua_State *L) {
	glPushClientAttrib((GLbitfield)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glPushMatrix
// void glPushMatrix (void)
#ifdef glPushMatrix
static int luaglew_glPushMatrix(lua_State *L) {
	glPushMatrix();
	return 0;
}
#endif

//####glPushName
// void glPushName (GLuint name)
#ifdef glPushName
static int luaglew_glPushName(lua_State *L) {
	glPushName((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glRasterPos2d
// void glRasterPos2d (GLdouble x, GLdouble y)
#ifdef glRasterPos2d
static int luaglew_glRasterPos2d(lua_State *L) {
	glRasterPos2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glRasterPos2dv
// void glRasterPos2dv (const GLdouble *v)
#ifdef glRasterPos2dv
static int luaglew_glRasterPos2dv(lua_State *L) {
	glRasterPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glRasterPos2f
// void glRasterPos2f (GLfloat x, GLfloat y)
#ifdef glRasterPos2f
static int luaglew_glRasterPos2f(lua_State *L) {
	glRasterPos2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glRasterPos2fv
// void glRasterPos2fv (const GLfloat *v)
#ifdef glRasterPos2fv
static int luaglew_glRasterPos2fv(lua_State *L) {
	glRasterPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glRasterPos2i
// void glRasterPos2i (GLint x, GLint y)
#ifdef glRasterPos2i
static int luaglew_glRasterPos2i(lua_State *L) {
	glRasterPos2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glRasterPos2iv
// void glRasterPos2iv (const GLint *v)
#ifdef glRasterPos2iv
static int luaglew_glRasterPos2iv(lua_State *L) {
	glRasterPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glRasterPos2s
// void glRasterPos2s (GLshort x, GLshort y)
#ifdef glRasterPos2s
static int luaglew_glRasterPos2s(lua_State *L) {
	glRasterPos2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glRasterPos2sv
// void glRasterPos2sv (const GLshort *v)
#ifdef glRasterPos2sv
static int luaglew_glRasterPos2sv(lua_State *L) {
	glRasterPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glRasterPos3d
// void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z)
#ifdef glRasterPos3d
static int luaglew_glRasterPos3d(lua_State *L) {
	glRasterPos3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glRasterPos3dv
// void glRasterPos3dv (const GLdouble *v)
#ifdef glRasterPos3dv
static int luaglew_glRasterPos3dv(lua_State *L) {
	glRasterPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glRasterPos3f
// void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z)
#ifdef glRasterPos3f
static int luaglew_glRasterPos3f(lua_State *L) {
	glRasterPos3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glRasterPos3fv
// void glRasterPos3fv (const GLfloat *v)
#ifdef glRasterPos3fv
static int luaglew_glRasterPos3fv(lua_State *L) {
	glRasterPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glRasterPos3i
// void glRasterPos3i (GLint x, GLint y, GLint z)
#ifdef glRasterPos3i
static int luaglew_glRasterPos3i(lua_State *L) {
	glRasterPos3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glRasterPos3iv
// void glRasterPos3iv (const GLint *v)
#ifdef glRasterPos3iv
static int luaglew_glRasterPos3iv(lua_State *L) {
	glRasterPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glRasterPos3s
// void glRasterPos3s (GLshort x, GLshort y, GLshort z)
#ifdef glRasterPos3s
static int luaglew_glRasterPos3s(lua_State *L) {
	glRasterPos3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glRasterPos3sv
// void glRasterPos3sv (const GLshort *v)
#ifdef glRasterPos3sv
static int luaglew_glRasterPos3sv(lua_State *L) {
	glRasterPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glRasterPos4d
// void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glRasterPos4d
static int luaglew_glRasterPos4d(lua_State *L) {
	glRasterPos4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glRasterPos4dv
// void glRasterPos4dv (const GLdouble *v)
#ifdef glRasterPos4dv
static int luaglew_glRasterPos4dv(lua_State *L) {
	glRasterPos4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glRasterPos4f
// void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glRasterPos4f
static int luaglew_glRasterPos4f(lua_State *L) {
	glRasterPos4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glRasterPos4fv
// void glRasterPos4fv (const GLfloat *v)
#ifdef glRasterPos4fv
static int luaglew_glRasterPos4fv(lua_State *L) {
	glRasterPos4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glRasterPos4i
// void glRasterPos4i (GLint x, GLint y, GLint z, GLint w)
#ifdef glRasterPos4i
static int luaglew_glRasterPos4i(lua_State *L) {
	glRasterPos4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glRasterPos4iv
// void glRasterPos4iv (const GLint *v)
#ifdef glRasterPos4iv
static int luaglew_glRasterPos4iv(lua_State *L) {
	glRasterPos4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glRasterPos4s
// void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w)
#ifdef glRasterPos4s
static int luaglew_glRasterPos4s(lua_State *L) {
	glRasterPos4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glRasterPos4sv
// void glRasterPos4sv (const GLshort *v)
#ifdef glRasterPos4sv
static int luaglew_glRasterPos4sv(lua_State *L) {
	glRasterPos4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glReadBuffer
// void glReadBuffer (GLenum mode)
#ifdef glReadBuffer
static int luaglew_glReadBuffer(lua_State *L) {
	glReadBuffer(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glReadPixels
// void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
#ifdef glReadPixels
static int luaglew_glReadPixels(lua_State *L) {
	glReadPixels((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glRectd
// void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
#ifdef glRectd
static int luaglew_glRectd(lua_State *L) {
	glRectd((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glRectdv
// void glRectdv (const GLdouble *v1, const GLdouble *v2)
#ifdef glRectdv
static int luaglew_glRectdv(lua_State *L) {
	glRectdv((GLdouble *)luaglew_checkarray_double(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glRectf
// void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
#ifdef glRectf
static int luaglew_glRectf(lua_State *L) {
	glRectf((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glRectfv
// void glRectfv (const GLfloat *v1, const GLfloat *v2)
#ifdef glRectfv
static int luaglew_glRectfv(lua_State *L) {
	glRectfv((GLfloat *)luaglew_checkarray_float(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glRecti
// void glRecti (GLint x1, GLint y1, GLint x2, GLint y2)
#ifdef glRecti
static int luaglew_glRecti(lua_State *L) {
	glRecti((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glRectiv
// void glRectiv (const GLint *v1, const GLint *v2)
#ifdef glRectiv
static int luaglew_glRectiv(lua_State *L) {
	glRectiv((GLint *)luaglew_checkarray_int(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glRects
// void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2)
#ifdef glRects
static int luaglew_glRects(lua_State *L) {
	glRects((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glRectsv
// void glRectsv (const GLshort *v1, const GLshort *v2)
#ifdef glRectsv
static int luaglew_glRectsv(lua_State *L) {
	glRectsv((GLshort *)luaglew_checkarray_int(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glRenderbufferStorage
// void glRenderbufferStorage (GLenum, GLenum, GLsizei, GLsizei)
#ifdef glRenderbufferStorage
static int luaglew_glRenderbufferStorage(lua_State *L) {
	glRenderbufferStorage(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glRenderbufferStorageEXT
// void glRenderbufferStorageEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
#ifdef glRenderbufferStorageEXT
static int luaglew_glRenderbufferStorageEXT(lua_State *L) {
	glRenderbufferStorageEXT(luaglew_checkenum(L, 1), luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glRenderbufferStorageMultisample
// void glRenderbufferStorageMultisample (GLenum, GLsizei, GLenum, GLsizei, GLsizei)
#ifdef glRenderbufferStorageMultisample
static int luaglew_glRenderbufferStorageMultisample(lua_State *L) {
	glRenderbufferStorageMultisample(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkenum(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glRenderbufferStorageMultisampleEXT
// void glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
#ifdef glRenderbufferStorageMultisampleEXT
static int luaglew_glRenderbufferStorageMultisampleEXT(lua_State *L) {
	glRenderbufferStorageMultisampleEXT(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5));
	return 0;
}
#endif

//####glRotated
// void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
#ifdef glRotated
static int luaglew_glRotated(lua_State *L) {
	glRotated((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glRotatef
// void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
#ifdef glRotatef
static int luaglew_glRotatef(lua_State *L) {
	glRotatef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glSampleCoverageARB
// void glSampleCoverageARB (GLclampf, GLboolean)
#ifdef glSampleCoverageARB
static int luaglew_glSampleCoverageARB(lua_State *L) {
	glSampleCoverageARB((GLclampf)luaL_checknumber(L, 1), (GLboolean)lua_toboolean(L, 2));
	return 0;
}
#endif

//####glSamplePass
// void glSamplePass (GLenum pass)
#ifdef glSamplePass
static int luaglew_glSamplePass(lua_State *L) {
	glSamplePass(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glSamplePassARB
// void glSamplePassARB (GLenum)
#ifdef glSamplePassARB
static int luaglew_glSamplePassARB(lua_State *L) {
	glSamplePassARB(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glScaled
// void glScaled (GLdouble x, GLdouble y, GLdouble z)
#ifdef glScaled
static int luaglew_glScaled(lua_State *L) {
	glScaled((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glScalef
// void glScalef (GLfloat x, GLfloat y, GLfloat z)
#ifdef glScalef
static int luaglew_glScalef(lua_State *L) {
	glScalef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glScissor
// void glScissor (GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glScissor
static int luaglew_glScissor(lua_State *L) {
	glScissor((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glSecondaryColor3bEXT
// void glSecondaryColor3bEXT (GLbyte, GLbyte, GLbyte)
#ifdef glSecondaryColor3bEXT
static int luaglew_glSecondaryColor3bEXT(lua_State *L) {
	glSecondaryColor3bEXT((GLbyte)luaL_checknumber(L, 1), (GLbyte)luaL_checknumber(L, 2), (GLbyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3bvEXT
// void glSecondaryColor3bvEXT (const GLbyte *)
#ifdef glSecondaryColor3bvEXT
static int luaglew_glSecondaryColor3bvEXT(lua_State *L) {
	glSecondaryColor3bvEXT((GLbyte *)luaglew_checkarray_byte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3dEXT
// void glSecondaryColor3dEXT (GLdouble, GLdouble, GLdouble)
#ifdef glSecondaryColor3dEXT
static int luaglew_glSecondaryColor3dEXT(lua_State *L) {
	glSecondaryColor3dEXT((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3dvEXT
// void glSecondaryColor3dvEXT (const GLdouble *)
#ifdef glSecondaryColor3dvEXT
static int luaglew_glSecondaryColor3dvEXT(lua_State *L) {
	glSecondaryColor3dvEXT((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3fEXT
// void glSecondaryColor3fEXT (GLfloat, GLfloat, GLfloat)
#ifdef glSecondaryColor3fEXT
static int luaglew_glSecondaryColor3fEXT(lua_State *L) {
	glSecondaryColor3fEXT((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3fvEXT
// void glSecondaryColor3fvEXT (const GLfloat *)
#ifdef glSecondaryColor3fvEXT
static int luaglew_glSecondaryColor3fvEXT(lua_State *L) {
	glSecondaryColor3fvEXT((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3iEXT
// void glSecondaryColor3iEXT (GLint, GLint, GLint)
#ifdef glSecondaryColor3iEXT
static int luaglew_glSecondaryColor3iEXT(lua_State *L) {
	glSecondaryColor3iEXT((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3ivEXT
// void glSecondaryColor3ivEXT (const GLint *)
#ifdef glSecondaryColor3ivEXT
static int luaglew_glSecondaryColor3ivEXT(lua_State *L) {
	glSecondaryColor3ivEXT((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3sEXT
// void glSecondaryColor3sEXT (GLshort, GLshort, GLshort)
#ifdef glSecondaryColor3sEXT
static int luaglew_glSecondaryColor3sEXT(lua_State *L) {
	glSecondaryColor3sEXT((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3svEXT
// void glSecondaryColor3svEXT (const GLshort *)
#ifdef glSecondaryColor3svEXT
static int luaglew_glSecondaryColor3svEXT(lua_State *L) {
	glSecondaryColor3svEXT((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3ubEXT
// void glSecondaryColor3ubEXT (GLubyte, GLubyte, GLubyte)
#ifdef glSecondaryColor3ubEXT
static int luaglew_glSecondaryColor3ubEXT(lua_State *L) {
	glSecondaryColor3ubEXT((GLubyte)luaL_checknumber(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3ubvEXT
// void glSecondaryColor3ubvEXT (const GLubyte *)
#ifdef glSecondaryColor3ubvEXT
static int luaglew_glSecondaryColor3ubvEXT(lua_State *L) {
	glSecondaryColor3ubvEXT((GLubyte *)luaglew_checkarray_ubyte(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3uiEXT
// void glSecondaryColor3uiEXT (GLuint, GLuint, GLuint)
#ifdef glSecondaryColor3uiEXT
static int luaglew_glSecondaryColor3uiEXT(lua_State *L) {
	glSecondaryColor3uiEXT((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3uivEXT
// void glSecondaryColor3uivEXT (const GLuint *)
#ifdef glSecondaryColor3uivEXT
static int luaglew_glSecondaryColor3uivEXT(lua_State *L) {
	glSecondaryColor3uivEXT((GLuint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColor3usEXT
// void glSecondaryColor3usEXT (GLushort, GLushort, GLushort)
#ifdef glSecondaryColor3usEXT
static int luaglew_glSecondaryColor3usEXT(lua_State *L) {
	glSecondaryColor3usEXT((GLushort)luaL_checkinteger(L, 1), (GLushort)luaL_checkinteger(L, 2), (GLushort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glSecondaryColor3usvEXT
// void glSecondaryColor3usvEXT (const GLushort *)
#ifdef glSecondaryColor3usvEXT
static int luaglew_glSecondaryColor3usvEXT(lua_State *L) {
	glSecondaryColor3usvEXT((GLushort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glSecondaryColorPointer
// void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glSecondaryColorPointer
static int luaglew_glSecondaryColorPointer(lua_State *L) {
	glSecondaryColorPointer((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glSecondaryColorPointerEXT
// void glSecondaryColorPointerEXT (GLint, GLenum, GLsizei, const GLvoid *)
#ifdef glSecondaryColorPointerEXT
static int luaglew_glSecondaryColorPointerEXT(lua_State *L) {
	glSecondaryColorPointerEXT((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glSelectBuffer
// void glSelectBuffer (GLsizei size, GLuint *buffer)
#ifdef glSelectBuffer
static int luaglew_glSelectBuffer(lua_State *L) {
	glSelectBuffer((GLsizei)luaL_checklong(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glSetFenceAPPLE
// void glSetFenceAPPLE (GLuint fence)
#ifdef glSetFenceAPPLE
static int luaglew_glSetFenceAPPLE(lua_State *L) {
	glSetFenceAPPLE((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glShadeModel
// void glShadeModel (GLenum mode)
#ifdef glShadeModel
static int luaglew_glShadeModel(lua_State *L) {
	glShadeModel(luaglew_checkenum(L, 1));
	return 0;
}
#endif

//####glShaderSource
// void glShaderSource (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length)
#ifdef glShaderSource
static int luaglew_glShaderSource(lua_State *L) {
	glShaderSource((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar *)luaglew_checkarray_char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glShaderSourceARB
// void glShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length)
#ifdef glShaderSourceARB
static int luaglew_glShaderSourceARB(lua_State *L) {
	glShaderSourceARB((GLhandleARB)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), (GLint *)luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glStencilFunc
// void glStencilFunc (GLenum func, GLint ref, GLuint mask)
#ifdef glStencilFunc
static int luaglew_glStencilFunc(lua_State *L) {
	glStencilFunc(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glStencilFuncSeparate
// void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask)
#ifdef glStencilFuncSeparate
static int luaglew_glStencilFuncSeparate(lua_State *L) {
	glStencilFuncSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3), (GLuint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glStencilMask
// void glStencilMask (GLuint mask)
#ifdef glStencilMask
static int luaglew_glStencilMask(lua_State *L) {
	glStencilMask((GLuint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glStencilMaskSeparate
// void glStencilMaskSeparate (GLenum face, GLuint mask)
#ifdef glStencilMaskSeparate
static int luaglew_glStencilMaskSeparate(lua_State *L) {
	glStencilMaskSeparate(luaglew_checkenum(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glStencilOp
// void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass)
#ifdef glStencilOp
static int luaglew_glStencilOp(lua_State *L) {
	glStencilOp(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3));
	return 0;
}
#endif

//####glStencilOpSeparate
// void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
#ifdef glStencilOpSeparate
static int luaglew_glStencilOpSeparate(lua_State *L) {
	glStencilOpSeparate(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), luaglew_checkenum(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glSwapAPPLE
// void glSwapAPPLE (void)
#ifdef glSwapAPPLE
static int luaglew_glSwapAPPLE(lua_State *L) {
	glSwapAPPLE();
	return 0;
}
#endif

//####glTexCoord1d
// void glTexCoord1d (GLdouble s)
#ifdef glTexCoord1d
static int luaglew_glTexCoord1d(lua_State *L) {
	glTexCoord1d((GLdouble)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glTexCoord1dv
// void glTexCoord1dv (const GLdouble *v)
#ifdef glTexCoord1dv
static int luaglew_glTexCoord1dv(lua_State *L) {
	glTexCoord1dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glTexCoord1f
// void glTexCoord1f (GLfloat s)
#ifdef glTexCoord1f
static int luaglew_glTexCoord1f(lua_State *L) {
	glTexCoord1f((GLfloat)luaL_checknumber(L, 1));
	return 0;
}
#endif

//####glTexCoord1fv
// void glTexCoord1fv (const GLfloat *v)
#ifdef glTexCoord1fv
static int luaglew_glTexCoord1fv(lua_State *L) {
	glTexCoord1fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glTexCoord1i
// void glTexCoord1i (GLint s)
#ifdef glTexCoord1i
static int luaglew_glTexCoord1i(lua_State *L) {
	glTexCoord1i((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glTexCoord1iv
// void glTexCoord1iv (const GLint *v)
#ifdef glTexCoord1iv
static int luaglew_glTexCoord1iv(lua_State *L) {
	glTexCoord1iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord1s
// void glTexCoord1s (GLshort s)
#ifdef glTexCoord1s
static int luaglew_glTexCoord1s(lua_State *L) {
	glTexCoord1s((GLshort)luaL_checkinteger(L, 1));
	return 0;
}
#endif

//####glTexCoord1sv
// void glTexCoord1sv (const GLshort *v)
#ifdef glTexCoord1sv
static int luaglew_glTexCoord1sv(lua_State *L) {
	glTexCoord1sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord2d
// void glTexCoord2d (GLdouble s, GLdouble t)
#ifdef glTexCoord2d
static int luaglew_glTexCoord2d(lua_State *L) {
	glTexCoord2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glTexCoord2dv
// void glTexCoord2dv (const GLdouble *v)
#ifdef glTexCoord2dv
static int luaglew_glTexCoord2dv(lua_State *L) {
	glTexCoord2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glTexCoord2f
// void glTexCoord2f (GLfloat s, GLfloat t)
#ifdef glTexCoord2f
static int luaglew_glTexCoord2f(lua_State *L) {
	glTexCoord2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glTexCoord2fv
// void glTexCoord2fv (const GLfloat *v)
#ifdef glTexCoord2fv
static int luaglew_glTexCoord2fv(lua_State *L) {
	glTexCoord2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glTexCoord2i
// void glTexCoord2i (GLint s, GLint t)
#ifdef glTexCoord2i
static int luaglew_glTexCoord2i(lua_State *L) {
	glTexCoord2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glTexCoord2iv
// void glTexCoord2iv (const GLint *v)
#ifdef glTexCoord2iv
static int luaglew_glTexCoord2iv(lua_State *L) {
	glTexCoord2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord2s
// void glTexCoord2s (GLshort s, GLshort t)
#ifdef glTexCoord2s
static int luaglew_glTexCoord2s(lua_State *L) {
	glTexCoord2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glTexCoord2sv
// void glTexCoord2sv (const GLshort *v)
#ifdef glTexCoord2sv
static int luaglew_glTexCoord2sv(lua_State *L) {
	glTexCoord2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord3d
// void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r)
#ifdef glTexCoord3d
static int luaglew_glTexCoord3d(lua_State *L) {
	glTexCoord3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexCoord3dv
// void glTexCoord3dv (const GLdouble *v)
#ifdef glTexCoord3dv
static int luaglew_glTexCoord3dv(lua_State *L) {
	glTexCoord3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glTexCoord3f
// void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r)
#ifdef glTexCoord3f
static int luaglew_glTexCoord3f(lua_State *L) {
	glTexCoord3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexCoord3fv
// void glTexCoord3fv (const GLfloat *v)
#ifdef glTexCoord3fv
static int luaglew_glTexCoord3fv(lua_State *L) {
	glTexCoord3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glTexCoord3i
// void glTexCoord3i (GLint s, GLint t, GLint r)
#ifdef glTexCoord3i
static int luaglew_glTexCoord3i(lua_State *L) {
	glTexCoord3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTexCoord3iv
// void glTexCoord3iv (const GLint *v)
#ifdef glTexCoord3iv
static int luaglew_glTexCoord3iv(lua_State *L) {
	glTexCoord3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord3s
// void glTexCoord3s (GLshort s, GLshort t, GLshort r)
#ifdef glTexCoord3s
static int luaglew_glTexCoord3s(lua_State *L) {
	glTexCoord3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glTexCoord3sv
// void glTexCoord3sv (const GLshort *v)
#ifdef glTexCoord3sv
static int luaglew_glTexCoord3sv(lua_State *L) {
	glTexCoord3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord4d
// void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q)
#ifdef glTexCoord4d
static int luaglew_glTexCoord4d(lua_State *L) {
	glTexCoord4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glTexCoord4dv
// void glTexCoord4dv (const GLdouble *v)
#ifdef glTexCoord4dv
static int luaglew_glTexCoord4dv(lua_State *L) {
	glTexCoord4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glTexCoord4f
// void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q)
#ifdef glTexCoord4f
static int luaglew_glTexCoord4f(lua_State *L) {
	glTexCoord4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glTexCoord4fv
// void glTexCoord4fv (const GLfloat *v)
#ifdef glTexCoord4fv
static int luaglew_glTexCoord4fv(lua_State *L) {
	glTexCoord4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glTexCoord4i
// void glTexCoord4i (GLint s, GLint t, GLint r, GLint q)
#ifdef glTexCoord4i
static int luaglew_glTexCoord4i(lua_State *L) {
	glTexCoord4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glTexCoord4iv
// void glTexCoord4iv (const GLint *v)
#ifdef glTexCoord4iv
static int luaglew_glTexCoord4iv(lua_State *L) {
	glTexCoord4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoord4s
// void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q)
#ifdef glTexCoord4s
static int luaglew_glTexCoord4s(lua_State *L) {
	glTexCoord4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glTexCoord4sv
// void glTexCoord4sv (const GLshort *v)
#ifdef glTexCoord4sv
static int luaglew_glTexCoord4sv(lua_State *L) {
	glTexCoord4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glTexCoordPointer
// void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glTexCoordPointer
static int luaglew_glTexCoordPointer(lua_State *L) {
	glTexCoordPointer((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glTexEnvf
// void glTexEnvf (GLenum target, GLenum pname, GLfloat param)
#ifdef glTexEnvf
static int luaglew_glTexEnvf(lua_State *L) {
	glTexEnvf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexEnvfv
// void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params)
#ifdef glTexEnvfv
static int luaglew_glTexEnvfv(lua_State *L) {
	glTexEnvfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glTexEnvi
// void glTexEnvi (GLenum target, GLenum pname, GLint param)
#ifdef glTexEnvi
static int luaglew_glTexEnvi(lua_State *L) {
	glTexEnvi(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTexEnviv
// void glTexEnviv (GLenum target, GLenum pname, const GLint *params)
#ifdef glTexEnviv
static int luaglew_glTexEnviv(lua_State *L) {
	glTexEnviv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexGend
// void glTexGend (GLenum coord, GLenum pname, GLdouble param)
#ifdef glTexGend
static int luaglew_glTexGend(lua_State *L) {
	glTexGend(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexGendv
// void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params)
#ifdef glTexGendv
static int luaglew_glTexGendv(lua_State *L) {
	glTexGendv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLdouble *)luaglew_checkarray_double(L, 3));
	return 0;
}
#endif

//####glTexGenf
// void glTexGenf (GLenum coord, GLenum pname, GLfloat param)
#ifdef glTexGenf
static int luaglew_glTexGenf(lua_State *L) {
	glTexGenf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexGenfv
// void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params)
#ifdef glTexGenfv
static int luaglew_glTexGenfv(lua_State *L) {
	glTexGenfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glTexGeni
// void glTexGeni (GLenum coord, GLenum pname, GLint param)
#ifdef glTexGeni
static int luaglew_glTexGeni(lua_State *L) {
	glTexGeni(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTexGeniv
// void glTexGeniv (GLenum coord, GLenum pname, const GLint *params)
#ifdef glTexGeniv
static int luaglew_glTexGeniv(lua_State *L) {
	glTexGeniv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexImage1D
// void glTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexImage1D
static int luaglew_glTexImage1D(lua_State *L) {
	glTexImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLint)luaL_checkint(L, 5), luaglew_checkenum(L, 6), luaglew_checkenum(L, 7), (GLvoid *)luaglew_checkarray_void(L, 8));
	return 0;
}
#endif

//####glTexImage2D
// void glTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexImage2D
static int luaglew_glTexImage2D(lua_State *L) {
	glTexImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLint)luaL_checkint(L, 6), luaglew_checkenum(L, 7), luaglew_checkenum(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glTexImage3D
// void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexImage3D
static int luaglew_glTexImage3D(lua_State *L) {
	glTexImage3D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), (GLint)luaL_checkint(L, 7), luaglew_checkenum(L, 8), luaglew_checkenum(L, 9), (GLvoid *)luaglew_checkarray_void(L, 10));
	return 0;
}
#endif

//####glTexParameterIivEXT
// void glTexParameterIivEXT ( GLenum target, GLenum pname, GLint *params )
#ifdef glTexParameterIivEXT
static int luaglew_glTexParameterIivEXT(lua_State *L) {
	glTexParameterIivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexParameterIuivEXT
// void glTexParameterIuivEXT ( GLenum target, GLenum pname, GLuint *params )
#ifdef glTexParameterIuivEXT
static int luaglew_glTexParameterIuivEXT(lua_State *L) {
	glTexParameterIuivEXT(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLuint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexParameterf
// void glTexParameterf (GLenum target, GLenum pname, GLfloat param)
#ifdef glTexParameterf
static int luaglew_glTexParameterf(lua_State *L) {
	glTexParameterf(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTexParameterfv
// void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params)
#ifdef glTexParameterfv
static int luaglew_glTexParameterfv(lua_State *L) {
	glTexParameterfv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glTexParameteri
// void glTexParameteri (GLenum target, GLenum pname, GLint param)
#ifdef glTexParameteri
static int luaglew_glTexParameteri(lua_State *L) {
	glTexParameteri(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glTexParameteriv
// void glTexParameteriv (GLenum target, GLenum pname, const GLint *params)
#ifdef glTexParameteriv
static int luaglew_glTexParameteriv(lua_State *L) {
	glTexParameteriv(luaglew_checkenum(L, 1), luaglew_checkenum(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTexSubImage1D
// void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexSubImage1D
static int luaglew_glTexSubImage1D(lua_State *L) {
	glTexSubImage1D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLsizei)luaL_checklong(L, 4), luaglew_checkenum(L, 5), luaglew_checkenum(L, 6), (GLvoid *)luaglew_checkarray_void(L, 7));
	return 0;
}
#endif

//####glTexSubImage2D
// void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
#ifdef glTexSubImage2D
static int luaglew_glTexSubImage2D(lua_State *L) {
	glTexSubImage2D(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLsizei)luaL_checklong(L, 5), (GLsizei)luaL_checklong(L, 6), luaglew_checkenum(L, 7), luaglew_checkenum(L, 8), (GLvoid *)luaglew_checkarray_void(L, 9));
	return 0;
}
#endif

//####glTextureRangeAPPLE
// void glTextureRangeAPPLE (GLenum target, GLsizei length, const GLvoid *pointer)
#ifdef glTextureRangeAPPLE
static int luaglew_glTextureRangeAPPLE(lua_State *L) {
	glTextureRangeAPPLE(luaglew_checkenum(L, 1), (GLsizei)luaL_checklong(L, 2), luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glTransformFeedbackVaryingsEXT
// void glTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar **varyings, GLenum bufferMode)
#ifdef glTransformFeedbackVaryingsEXT
static int luaglew_glTransformFeedbackVaryingsEXT(lua_State *L) {
	glTransformFeedbackVaryingsEXT((GLuint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLchar **)luaglew_checkarray_2char(L, 3), luaglew_checkenum(L, 4));
	return 0;
}
#endif

//####glTranslated
// void glTranslated (GLdouble x, GLdouble y, GLdouble z)
#ifdef glTranslated
static int luaglew_glTranslated(lua_State *L) {
	glTranslated((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glTranslatef
// void glTranslatef (GLfloat x, GLfloat y, GLfloat z)
#ifdef glTranslatef
static int luaglew_glTranslatef(lua_State *L) {
	glTranslatef((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glUniform1fARB
// void glUniform1fARB (GLint location, GLfloat v0)
#ifdef glUniform1fARB
static int luaglew_glUniform1fARB(lua_State *L) {
	glUniform1fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glUniform1fv
// void glUniform1fv (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform1fv
static int luaglew_glUniform1fv(lua_State *L) {
	glUniform1fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform1fvARB
// void glUniform1fvARB (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform1fvARB
static int luaglew_glUniform1fvARB(lua_State *L) {
	glUniform1fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform1iARB
// void glUniform1iARB (GLint location, GLint v0)
#ifdef glUniform1iARB
static int luaglew_glUniform1iARB(lua_State *L) {
	glUniform1iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glUniform1iv
// void glUniform1iv (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform1iv
static int luaglew_glUniform1iv(lua_State *L) {
	glUniform1iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform1ivARB
// void glUniform1ivARB (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform1ivARB
static int luaglew_glUniform1ivARB(lua_State *L) {
	glUniform1ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform2fARB
// void glUniform2fARB (GLint location, GLfloat v0, GLfloat v1)
#ifdef glUniform2fARB
static int luaglew_glUniform2fARB(lua_State *L) {
	glUniform2fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glUniform2fv
// void glUniform2fv (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform2fv
static int luaglew_glUniform2fv(lua_State *L) {
	glUniform2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform2fvARB
// void glUniform2fvARB (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform2fvARB
static int luaglew_glUniform2fvARB(lua_State *L) {
	glUniform2fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform2iARB
// void glUniform2iARB (GLint location, GLint v0, GLint v1)
#ifdef glUniform2iARB
static int luaglew_glUniform2iARB(lua_State *L) {
	glUniform2iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glUniform2ivARB
// void glUniform2ivARB (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform2ivARB
static int luaglew_glUniform2ivARB(lua_State *L) {
	glUniform2ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform3fARB
// void glUniform3fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
#ifdef glUniform3fARB
static int luaglew_glUniform3fARB(lua_State *L) {
	glUniform3fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glUniform3fv
// void glUniform3fv (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform3fv
static int luaglew_glUniform3fv(lua_State *L) {
	glUniform3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform3fvARB
// void glUniform3fvARB (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform3fvARB
static int luaglew_glUniform3fvARB(lua_State *L) {
	glUniform3fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform3iARB
// void glUniform3iARB (GLint location, GLint v0, GLint v1, GLint v2)
#ifdef glUniform3iARB
static int luaglew_glUniform3iARB(lua_State *L) {
	glUniform3iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glUniform3iv
// void glUniform3iv (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform3iv
static int luaglew_glUniform3iv(lua_State *L) {
	glUniform3iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform3ivARB
// void glUniform3ivARB (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform3ivARB
static int luaglew_glUniform3ivARB(lua_State *L) {
	glUniform3ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform4fARB
// void glUniform4fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
#ifdef glUniform4fARB
static int luaglew_glUniform4fARB(lua_State *L) {
	glUniform4fARB((GLint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glUniform4fv
// void glUniform4fv (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform4fv
static int luaglew_glUniform4fv(lua_State *L) {
	glUniform4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform4fvARB
// void glUniform4fvARB (GLint location, GLsizei count, const GLfloat *value)
#ifdef glUniform4fvARB
static int luaglew_glUniform4fvARB(lua_State *L) {
	glUniform4fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLfloat *)luaglew_checkarray_float(L, 3));
	return 0;
}
#endif

//####glUniform4iARB
// void glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
#ifdef glUniform4iARB
static int luaglew_glUniform4iARB(lua_State *L) {
	glUniform4iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4), (GLint)luaL_checkint(L, 5));
	return 0;
}
#endif

//####glUniform4iv
// void glUniform4iv (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform4iv
static int luaglew_glUniform4iv(lua_State *L) {
	glUniform4iv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniform4ivARB
// void glUniform4ivARB (GLint location, GLsizei count, const GLint *value)
#ifdef glUniform4ivARB
static int luaglew_glUniform4ivARB(lua_State *L) {
	glUniform4ivARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLint *)luaglew_checkarray_int(L, 3));
	return 0;
}
#endif

//####glUniformBlockBinding
// void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
#ifdef glUniformBlockBinding
static int luaglew_glUniformBlockBinding(lua_State *L) {
	glUniformBlockBinding((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2), (GLuint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glUniformMatrix2fv
// void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix2fv
static int luaglew_glUniformMatrix2fv(lua_State *L) {
	glUniformMatrix2fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix2fvARB
// void glUniformMatrix2fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix2fvARB
static int luaglew_glUniformMatrix2fvARB(lua_State *L) {
	glUniformMatrix2fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix3fv
// void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix3fv
static int luaglew_glUniformMatrix3fv(lua_State *L) {
	glUniformMatrix3fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix3fvARB
// void glUniformMatrix3fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix3fvARB
static int luaglew_glUniformMatrix3fvARB(lua_State *L) {
	glUniformMatrix3fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix4fv
// void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix4fv
static int luaglew_glUniformMatrix4fv(lua_State *L) {
	glUniformMatrix4fv((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUniformMatrix4fvARB
// void glUniformMatrix4fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
#ifdef glUniformMatrix4fvARB
static int luaglew_glUniformMatrix4fvARB(lua_State *L) {
	glUniformMatrix4fvARB((GLint)luaL_checkint(L, 1), (GLsizei)luaL_checklong(L, 2), (GLboolean)lua_toboolean(L, 3), (GLfloat *)luaglew_checkarray_float(L, 4));
	return 0;
}
#endif

//####glUnlockArraysEXT
// void glUnlockArraysEXT (void)
#ifdef glUnlockArraysEXT
static int luaglew_glUnlockArraysEXT(lua_State *L) {
	glUnlockArraysEXT();
	return 0;
}
#endif

//####glUseProgramObjectARB
// void glUseProgramObjectARB (GLhandleARB programObj)
#ifdef glUseProgramObjectARB
static int luaglew_glUseProgramObjectARB(lua_State *L) {
	glUseProgramObjectARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glValidateProgramARB
// void glValidateProgramARB (GLhandleARB programObj)
#ifdef glValidateProgramARB
static int luaglew_glValidateProgramARB(lua_State *L) {
	glValidateProgramARB((GLhandleARB)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glVertex2d
// void glVertex2d (GLdouble x, GLdouble y)
#ifdef glVertex2d
static int luaglew_glVertex2d(lua_State *L) {
	glVertex2d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertex2dv
// void glVertex2dv (const GLdouble *v)
#ifdef glVertex2dv
static int luaglew_glVertex2dv(lua_State *L) {
	glVertex2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glVertex2f
// void glVertex2f (GLfloat x, GLfloat y)
#ifdef glVertex2f
static int luaglew_glVertex2f(lua_State *L) {
	glVertex2f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertex2fv
// void glVertex2fv (const GLfloat *v)
#ifdef glVertex2fv
static int luaglew_glVertex2fv(lua_State *L) {
	glVertex2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glVertex2i
// void glVertex2i (GLint x, GLint y)
#ifdef glVertex2i
static int luaglew_glVertex2i(lua_State *L) {
	glVertex2i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertex2iv
// void glVertex2iv (const GLint *v)
#ifdef glVertex2iv
static int luaglew_glVertex2iv(lua_State *L) {
	glVertex2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertex2s
// void glVertex2s (GLshort x, GLshort y)
#ifdef glVertex2s
static int luaglew_glVertex2s(lua_State *L) {
	glVertex2s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glVertex2sv
// void glVertex2sv (const GLshort *v)
#ifdef glVertex2sv
static int luaglew_glVertex2sv(lua_State *L) {
	glVertex2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertex3d
// void glVertex3d (GLdouble x, GLdouble y, GLdouble z)
#ifdef glVertex3d
static int luaglew_glVertex3d(lua_State *L) {
	glVertex3d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertex3dv
// void glVertex3dv (const GLdouble *v)
#ifdef glVertex3dv
static int luaglew_glVertex3dv(lua_State *L) {
	glVertex3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glVertex3f
// void glVertex3f (GLfloat x, GLfloat y, GLfloat z)
#ifdef glVertex3f
static int luaglew_glVertex3f(lua_State *L) {
	glVertex3f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertex3fv
// void glVertex3fv (const GLfloat *v)
#ifdef glVertex3fv
static int luaglew_glVertex3fv(lua_State *L) {
	glVertex3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glVertex3i
// void glVertex3i (GLint x, GLint y, GLint z)
#ifdef glVertex3i
static int luaglew_glVertex3i(lua_State *L) {
	glVertex3i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glVertex3iv
// void glVertex3iv (const GLint *v)
#ifdef glVertex3iv
static int luaglew_glVertex3iv(lua_State *L) {
	glVertex3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertex3s
// void glVertex3s (GLshort x, GLshort y, GLshort z)
#ifdef glVertex3s
static int luaglew_glVertex3s(lua_State *L) {
	glVertex3s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glVertex3sv
// void glVertex3sv (const GLshort *v)
#ifdef glVertex3sv
static int luaglew_glVertex3sv(lua_State *L) {
	glVertex3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertex4d
// void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glVertex4d
static int luaglew_glVertex4d(lua_State *L) {
	glVertex4d((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertex4dv
// void glVertex4dv (const GLdouble *v)
#ifdef glVertex4dv
static int luaglew_glVertex4dv(lua_State *L) {
	glVertex4dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glVertex4f
// void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glVertex4f
static int luaglew_glVertex4f(lua_State *L) {
	glVertex4f((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertex4fv
// void glVertex4fv (const GLfloat *v)
#ifdef glVertex4fv
static int luaglew_glVertex4fv(lua_State *L) {
	glVertex4fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glVertex4i
// void glVertex4i (GLint x, GLint y, GLint z, GLint w)
#ifdef glVertex4i
static int luaglew_glVertex4i(lua_State *L) {
	glVertex4i((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3), (GLint)luaL_checkint(L, 4));
	return 0;
}
#endif

//####glVertex4iv
// void glVertex4iv (const GLint *v)
#ifdef glVertex4iv
static int luaglew_glVertex4iv(lua_State *L) {
	glVertex4iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertex4s
// void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w)
#ifdef glVertex4s
static int luaglew_glVertex4s(lua_State *L) {
	glVertex4s((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glVertex4sv
// void glVertex4sv (const GLshort *v)
#ifdef glVertex4sv
static int luaglew_glVertex4sv(lua_State *L) {
	glVertex4sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glVertexArrayParameteriAPPLE
// void glVertexArrayParameteriAPPLE (GLenum pname, GLint param)
#ifdef glVertexArrayParameteriAPPLE
static int luaglew_glVertexArrayParameteriAPPLE(lua_State *L) {
	glVertexArrayParameteriAPPLE(luaglew_checkenum(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexArrayRangeAPPLE
// void glVertexArrayRangeAPPLE (GLsizei length, const GLvoid *pointer)
#ifdef glVertexArrayRangeAPPLE
static int luaglew_glVertexArrayRangeAPPLE(lua_State *L) {
	glVertexArrayRangeAPPLE((GLsizei)luaL_checklong(L, 1), luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1dARB
// void glVertexAttrib1dARB (GLuint index, GLdouble x)
#ifdef glVertexAttrib1dARB
static int luaglew_glVertexAttrib1dARB(lua_State *L) {
	glVertexAttrib1dARB((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1dv
// void glVertexAttrib1dv (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib1dv
static int luaglew_glVertexAttrib1dv(lua_State *L) {
	glVertexAttrib1dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1dvARB
// void glVertexAttrib1dvARB (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib1dvARB
static int luaglew_glVertexAttrib1dvARB(lua_State *L) {
	glVertexAttrib1dvARB((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1fARB
// void glVertexAttrib1fARB (GLuint index, GLfloat x)
#ifdef glVertexAttrib1fARB
static int luaglew_glVertexAttrib1fARB(lua_State *L) {
	glVertexAttrib1fARB((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1fv
// void glVertexAttrib1fv (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib1fv
static int luaglew_glVertexAttrib1fv(lua_State *L) {
	glVertexAttrib1fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1fvARB
// void glVertexAttrib1fvARB (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib1fvARB
static int luaglew_glVertexAttrib1fvARB(lua_State *L) {
	glVertexAttrib1fvARB((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1sARB
// void glVertexAttrib1sARB (GLuint index, GLshort x)
#ifdef glVertexAttrib1sARB
static int luaglew_glVertexAttrib1sARB(lua_State *L) {
	glVertexAttrib1sARB((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1sv
// void glVertexAttrib1sv (GLuint index, const GLshort *v)
#ifdef glVertexAttrib1sv
static int luaglew_glVertexAttrib1sv(lua_State *L) {
	glVertexAttrib1sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib1svARB
// void glVertexAttrib1svARB (GLuint index, const GLshort *v)
#ifdef glVertexAttrib1svARB
static int luaglew_glVertexAttrib1svARB(lua_State *L) {
	glVertexAttrib1svARB((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2dARB
// void glVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble y)
#ifdef glVertexAttrib2dARB
static int luaglew_glVertexAttrib2dARB(lua_State *L) {
	glVertexAttrib2dARB((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2dv
// void glVertexAttrib2dv (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib2dv
static int luaglew_glVertexAttrib2dv(lua_State *L) {
	glVertexAttrib2dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2dvARB
// void glVertexAttrib2dvARB (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib2dvARB
static int luaglew_glVertexAttrib2dvARB(lua_State *L) {
	glVertexAttrib2dvARB((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2fARB
// void glVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y)
#ifdef glVertexAttrib2fARB
static int luaglew_glVertexAttrib2fARB(lua_State *L) {
	glVertexAttrib2fARB((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2fv
// void glVertexAttrib2fv (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib2fv
static int luaglew_glVertexAttrib2fv(lua_State *L) {
	glVertexAttrib2fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2fvARB
// void glVertexAttrib2fvARB (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib2fvARB
static int luaglew_glVertexAttrib2fvARB(lua_State *L) {
	glVertexAttrib2fvARB((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2sARB
// void glVertexAttrib2sARB (GLuint index, GLshort x, GLshort y)
#ifdef glVertexAttrib2sARB
static int luaglew_glVertexAttrib2sARB(lua_State *L) {
	glVertexAttrib2sARB((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glVertexAttrib2sv
// void glVertexAttrib2sv (GLuint index, const GLshort *v)
#ifdef glVertexAttrib2sv
static int luaglew_glVertexAttrib2sv(lua_State *L) {
	glVertexAttrib2sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib2svARB
// void glVertexAttrib2svARB (GLuint index, const GLshort *v)
#ifdef glVertexAttrib2svARB
static int luaglew_glVertexAttrib2svARB(lua_State *L) {
	glVertexAttrib2svARB((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3dARB
// void glVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z)
#ifdef glVertexAttrib3dARB
static int luaglew_glVertexAttrib3dARB(lua_State *L) {
	glVertexAttrib3dARB((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3dv
// void glVertexAttrib3dv (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib3dv
static int luaglew_glVertexAttrib3dv(lua_State *L) {
	glVertexAttrib3dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3dvARB
// void glVertexAttrib3dvARB (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib3dvARB
static int luaglew_glVertexAttrib3dvARB(lua_State *L) {
	glVertexAttrib3dvARB((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3fARB
// void glVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z)
#ifdef glVertexAttrib3fARB
static int luaglew_glVertexAttrib3fARB(lua_State *L) {
	glVertexAttrib3fARB((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3fv
// void glVertexAttrib3fv (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib3fv
static int luaglew_glVertexAttrib3fv(lua_State *L) {
	glVertexAttrib3fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3fvARB
// void glVertexAttrib3fvARB (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib3fvARB
static int luaglew_glVertexAttrib3fvARB(lua_State *L) {
	glVertexAttrib3fvARB((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3sARB
// void glVertexAttrib3sARB (GLuint index, GLshort x, GLshort y, GLshort z)
#ifdef glVertexAttrib3sARB
static int luaglew_glVertexAttrib3sARB(lua_State *L) {
	glVertexAttrib3sARB((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4));
	return 0;
}
#endif

//####glVertexAttrib3sv
// void glVertexAttrib3sv (GLuint index, const GLshort *v)
#ifdef glVertexAttrib3sv
static int luaglew_glVertexAttrib3sv(lua_State *L) {
	glVertexAttrib3sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib3svARB
// void glVertexAttrib3svARB (GLuint index, const GLshort *v)
#ifdef glVertexAttrib3svARB
static int luaglew_glVertexAttrib3svARB(lua_State *L) {
	glVertexAttrib3svARB((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nbv
// void glVertexAttrib4Nbv (GLuint index, const GLbyte *v)
#ifdef glVertexAttrib4Nbv
static int luaglew_glVertexAttrib4Nbv(lua_State *L) {
	glVertexAttrib4Nbv((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NbvARB
// void glVertexAttrib4NbvARB (GLuint index, const GLbyte *v)
#ifdef glVertexAttrib4NbvARB
static int luaglew_glVertexAttrib4NbvARB(lua_State *L) {
	glVertexAttrib4NbvARB((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Niv
// void glVertexAttrib4Niv (GLuint index, const GLint *v)
#ifdef glVertexAttrib4Niv
static int luaglew_glVertexAttrib4Niv(lua_State *L) {
	glVertexAttrib4Niv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NivARB
// void glVertexAttrib4NivARB (GLuint index, const GLint *v)
#ifdef glVertexAttrib4NivARB
static int luaglew_glVertexAttrib4NivARB(lua_State *L) {
	glVertexAttrib4NivARB((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nsv
// void glVertexAttrib4Nsv (GLuint index, const GLshort *v)
#ifdef glVertexAttrib4Nsv
static int luaglew_glVertexAttrib4Nsv(lua_State *L) {
	glVertexAttrib4Nsv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NsvARB
// void glVertexAttrib4NsvARB (GLuint index, const GLshort *v)
#ifdef glVertexAttrib4NsvARB
static int luaglew_glVertexAttrib4NsvARB(lua_State *L) {
	glVertexAttrib4NsvARB((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NubARB
// void glVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
#ifdef glVertexAttrib4NubARB
static int luaglew_glVertexAttrib4NubARB(lua_State *L) {
	glVertexAttrib4NubARB((GLuint)luaL_checkint(L, 1), (GLubyte)luaL_checknumber(L, 2), (GLubyte)luaL_checknumber(L, 3), (GLubyte)luaL_checknumber(L, 4), (GLubyte)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4Nubv
// void glVertexAttrib4Nubv (GLuint index, const GLubyte *v)
#ifdef glVertexAttrib4Nubv
static int luaglew_glVertexAttrib4Nubv(lua_State *L) {
	glVertexAttrib4Nubv((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NubvARB
// void glVertexAttrib4NubvARB (GLuint index, const GLubyte *v)
#ifdef glVertexAttrib4NubvARB
static int luaglew_glVertexAttrib4NubvARB(lua_State *L) {
	glVertexAttrib4NubvARB((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nuiv
// void glVertexAttrib4Nuiv (GLuint index, const GLuint *v)
#ifdef glVertexAttrib4Nuiv
static int luaglew_glVertexAttrib4Nuiv(lua_State *L) {
	glVertexAttrib4Nuiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NuivARB
// void glVertexAttrib4NuivARB (GLuint index, const GLuint *v)
#ifdef glVertexAttrib4NuivARB
static int luaglew_glVertexAttrib4NuivARB(lua_State *L) {
	glVertexAttrib4NuivARB((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4Nusv
// void glVertexAttrib4Nusv (GLuint index, const GLushort *v)
#ifdef glVertexAttrib4Nusv
static int luaglew_glVertexAttrib4Nusv(lua_State *L) {
	glVertexAttrib4Nusv((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4NusvARB
// void glVertexAttrib4NusvARB (GLuint index, const GLushort *v)
#ifdef glVertexAttrib4NusvARB
static int luaglew_glVertexAttrib4NusvARB(lua_State *L) {
	glVertexAttrib4NusvARB((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4bv
// void glVertexAttrib4bv (GLuint index, const GLbyte *v)
#ifdef glVertexAttrib4bv
static int luaglew_glVertexAttrib4bv(lua_State *L) {
	glVertexAttrib4bv((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4bvARB
// void glVertexAttrib4bvARB (GLuint index, const GLbyte *v)
#ifdef glVertexAttrib4bvARB
static int luaglew_glVertexAttrib4bvARB(lua_State *L) {
	glVertexAttrib4bvARB((GLuint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4dARB
// void glVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
#ifdef glVertexAttrib4dARB
static int luaglew_glVertexAttrib4dARB(lua_State *L) {
	glVertexAttrib4dARB((GLuint)luaL_checkint(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3), (GLdouble)luaL_checknumber(L, 4), (GLdouble)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4dv
// void glVertexAttrib4dv (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib4dv
static int luaglew_glVertexAttrib4dv(lua_State *L) {
	glVertexAttrib4dv((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4dvARB
// void glVertexAttrib4dvARB (GLuint index, const GLdouble *v)
#ifdef glVertexAttrib4dvARB
static int luaglew_glVertexAttrib4dvARB(lua_State *L) {
	glVertexAttrib4dvARB((GLuint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4fARB
// void glVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
#ifdef glVertexAttrib4fARB
static int luaglew_glVertexAttrib4fARB(lua_State *L) {
	glVertexAttrib4fARB((GLuint)luaL_checkint(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4), (GLfloat)luaL_checknumber(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4fv
// void glVertexAttrib4fv (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib4fv
static int luaglew_glVertexAttrib4fv(lua_State *L) {
	glVertexAttrib4fv((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4fvARB
// void glVertexAttrib4fvARB (GLuint index, const GLfloat *v)
#ifdef glVertexAttrib4fvARB
static int luaglew_glVertexAttrib4fvARB(lua_State *L) {
	glVertexAttrib4fvARB((GLuint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4iv
// void glVertexAttrib4iv (GLuint index, const GLint *v)
#ifdef glVertexAttrib4iv
static int luaglew_glVertexAttrib4iv(lua_State *L) {
	glVertexAttrib4iv((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4ivARB
// void glVertexAttrib4ivARB (GLuint index, const GLint *v)
#ifdef glVertexAttrib4ivARB
static int luaglew_glVertexAttrib4ivARB(lua_State *L) {
	glVertexAttrib4ivARB((GLuint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4sARB
// void glVertexAttrib4sARB (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
#ifdef glVertexAttrib4sARB
static int luaglew_glVertexAttrib4sARB(lua_State *L) {
	glVertexAttrib4sARB((GLuint)luaL_checkint(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3), (GLshort)luaL_checkinteger(L, 4), (GLshort)luaL_checkinteger(L, 5));
	return 0;
}
#endif

//####glVertexAttrib4sv
// void glVertexAttrib4sv (GLuint index, const GLshort *v)
#ifdef glVertexAttrib4sv
static int luaglew_glVertexAttrib4sv(lua_State *L) {
	glVertexAttrib4sv((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4svARB
// void glVertexAttrib4svARB (GLuint index, const GLshort *v)
#ifdef glVertexAttrib4svARB
static int luaglew_glVertexAttrib4svARB(lua_State *L) {
	glVertexAttrib4svARB((GLuint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4ubv
// void glVertexAttrib4ubv (GLuint index, const GLubyte *v)
#ifdef glVertexAttrib4ubv
static int luaglew_glVertexAttrib4ubv(lua_State *L) {
	glVertexAttrib4ubv((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4ubvARB
// void glVertexAttrib4ubvARB (GLuint index, const GLubyte *v)
#ifdef glVertexAttrib4ubvARB
static int luaglew_glVertexAttrib4ubvARB(lua_State *L) {
	glVertexAttrib4ubvARB((GLuint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4uiv
// void glVertexAttrib4uiv (GLuint index, const GLuint *v)
#ifdef glVertexAttrib4uiv
static int luaglew_glVertexAttrib4uiv(lua_State *L) {
	glVertexAttrib4uiv((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4uivARB
// void glVertexAttrib4uivARB (GLuint index, const GLuint *v)
#ifdef glVertexAttrib4uivARB
static int luaglew_glVertexAttrib4uivARB(lua_State *L) {
	glVertexAttrib4uivARB((GLuint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4usv
// void glVertexAttrib4usv (GLuint index, const GLushort *v)
#ifdef glVertexAttrib4usv
static int luaglew_glVertexAttrib4usv(lua_State *L) {
	glVertexAttrib4usv((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttrib4usvARB
// void glVertexAttrib4usvARB (GLuint index, const GLushort *v)
#ifdef glVertexAttrib4usvARB
static int luaglew_glVertexAttrib4usvARB(lua_State *L) {
	glVertexAttrib4usvARB((GLuint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glVertexAttribDivisorARB
// void glVertexAttribDivisorARB (GLuint index, GLuint divisor)
#ifdef glVertexAttribDivisorARB
static int luaglew_glVertexAttribDivisorARB(lua_State *L) {
	glVertexAttribDivisorARB((GLuint)luaL_checkint(L, 1), (GLuint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glVertexAttribPointer
// void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
#ifdef glVertexAttribPointer
static int luaglew_glVertexAttribPointer(lua_State *L) {
	glVertexAttribPointer((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLboolean)lua_toboolean(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_int(L, 6));
	return 0;
}
#endif

//####glVertexAttribPointerARB
// void glVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
#ifdef glVertexAttribPointerARB
static int luaglew_glVertexAttribPointerARB(lua_State *L) {
	glVertexAttribPointerARB((GLuint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), luaglew_checkenum(L, 3), (GLboolean)lua_toboolean(L, 4), (GLsizei)luaL_checklong(L, 5), luaglew_checkarray_int(L, 6));
	return 0;
}
#endif

//####glVertexBlendARB
// void glVertexBlendARB (GLint)
#ifdef glVertexBlendARB
static int luaglew_glVertexBlendARB(lua_State *L) {
	glVertexBlendARB((GLint)luaL_checkint(L, 1));
	return 0;
}
#endif

//####glVertexPointer
// void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
#ifdef glVertexPointer
static int luaglew_glVertexPointer(lua_State *L) {
	glVertexPointer((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), luaglew_checkarray_int(L, 4));
	return 0;
}
#endif

//####glViewport
// void glViewport (GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glViewport
static int luaglew_glViewport(lua_State *L) {
	glViewport((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####glWeightPointerARB
// void glWeightPointerARB (GLint, GLenum, GLsizei, const GLvoid *)
#ifdef glWeightPointerARB
static int luaglew_glWeightPointerARB(lua_State *L) {
	glWeightPointerARB((GLint)luaL_checkint(L, 1), luaglew_checkenum(L, 2), (GLsizei)luaL_checklong(L, 3), (GLvoid *)luaglew_checkarray_void(L, 4));
	return 0;
}
#endif

//####glWeightbvARB
// void glWeightbvARB (GLint, const GLbyte *)
#ifdef glWeightbvARB
static int luaglew_glWeightbvARB(lua_State *L) {
	glWeightbvARB((GLint)luaL_checkint(L, 1), (GLbyte *)luaglew_checkarray_byte(L, 2));
	return 0;
}
#endif

//####glWeightdvARB
// void glWeightdvARB (GLint, const GLdouble *)
#ifdef glWeightdvARB
static int luaglew_glWeightdvARB(lua_State *L) {
	glWeightdvARB((GLint)luaL_checkint(L, 1), (GLdouble *)luaglew_checkarray_double(L, 2));
	return 0;
}
#endif

//####glWeightfvARB
// void glWeightfvARB (GLint, const GLfloat *)
#ifdef glWeightfvARB
static int luaglew_glWeightfvARB(lua_State *L) {
	glWeightfvARB((GLint)luaL_checkint(L, 1), (GLfloat *)luaglew_checkarray_float(L, 2));
	return 0;
}
#endif

//####glWeightivARB
// void glWeightivARB (GLint, const GLint *)
#ifdef glWeightivARB
static int luaglew_glWeightivARB(lua_State *L) {
	glWeightivARB((GLint)luaL_checkint(L, 1), (GLint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightsvARB
// void glWeightsvARB (GLint, const GLshort *)
#ifdef glWeightsvARB
static int luaglew_glWeightsvARB(lua_State *L) {
	glWeightsvARB((GLint)luaL_checkint(L, 1), (GLshort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightubvARB
// void glWeightubvARB (GLint, const GLubyte *)
#ifdef glWeightubvARB
static int luaglew_glWeightubvARB(lua_State *L) {
	glWeightubvARB((GLint)luaL_checkint(L, 1), (GLubyte *)luaglew_checkarray_ubyte(L, 2));
	return 0;
}
#endif

//####glWeightuivARB
// void glWeightuivARB (GLint, const GLuint *)
#ifdef glWeightuivARB
static int luaglew_glWeightuivARB(lua_State *L) {
	glWeightuivARB((GLint)luaL_checkint(L, 1), (GLuint *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWeightusvARB
// void glWeightusvARB (GLint, const GLushort *)
#ifdef glWeightusvARB
static int luaglew_glWeightusvARB(lua_State *L) {
	glWeightusvARB((GLint)luaL_checkint(L, 1), (GLushort *)luaglew_checkarray_int(L, 2));
	return 0;
}
#endif

//####glWindowPos2dARB
// void glWindowPos2dARB (GLdouble, GLdouble)
#ifdef glWindowPos2dARB
static int luaglew_glWindowPos2dARB(lua_State *L) {
	glWindowPos2dARB((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glWindowPos2dv
// void glWindowPos2dv (const GLdouble *v)
#ifdef glWindowPos2dv
static int luaglew_glWindowPos2dv(lua_State *L) {
	glWindowPos2dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos2dvARB
// void glWindowPos2dvARB (const GLdouble *)
#ifdef glWindowPos2dvARB
static int luaglew_glWindowPos2dvARB(lua_State *L) {
	glWindowPos2dvARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos2fARB
// void glWindowPos2fARB (GLfloat, GLfloat)
#ifdef glWindowPos2fARB
static int luaglew_glWindowPos2fARB(lua_State *L) {
	glWindowPos2fARB((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2));
	return 0;
}
#endif

//####glWindowPos2fv
// void glWindowPos2fv (const GLfloat *v)
#ifdef glWindowPos2fv
static int luaglew_glWindowPos2fv(lua_State *L) {
	glWindowPos2fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos2fvARB
// void glWindowPos2fvARB (const GLfloat *)
#ifdef glWindowPos2fvARB
static int luaglew_glWindowPos2fvARB(lua_State *L) {
	glWindowPos2fvARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos2iARB
// void glWindowPos2iARB (GLint, GLint)
#ifdef glWindowPos2iARB
static int luaglew_glWindowPos2iARB(lua_State *L) {
	glWindowPos2iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2));
	return 0;
}
#endif

//####glWindowPos2iv
// void glWindowPos2iv (const GLint *v)
#ifdef glWindowPos2iv
static int luaglew_glWindowPos2iv(lua_State *L) {
	glWindowPos2iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos2ivARB
// void glWindowPos2ivARB (const GLint *)
#ifdef glWindowPos2ivARB
static int luaglew_glWindowPos2ivARB(lua_State *L) {
	glWindowPos2ivARB((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos2sARB
// void glWindowPos2sARB (GLshort, GLshort)
#ifdef glWindowPos2sARB
static int luaglew_glWindowPos2sARB(lua_State *L) {
	glWindowPos2sARB((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2));
	return 0;
}
#endif

//####glWindowPos2sv
// void glWindowPos2sv (const GLshort *v)
#ifdef glWindowPos2sv
static int luaglew_glWindowPos2sv(lua_State *L) {
	glWindowPos2sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos2svARB
// void glWindowPos2svARB (const GLshort *)
#ifdef glWindowPos2svARB
static int luaglew_glWindowPos2svARB(lua_State *L) {
	glWindowPos2svARB((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3dARB
// void glWindowPos3dARB (GLdouble, GLdouble, GLdouble)
#ifdef glWindowPos3dARB
static int luaglew_glWindowPos3dARB(lua_State *L) {
	glWindowPos3dARB((GLdouble)luaL_checknumber(L, 1), (GLdouble)luaL_checknumber(L, 2), (GLdouble)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glWindowPos3dv
// void glWindowPos3dv (const GLdouble *v)
#ifdef glWindowPos3dv
static int luaglew_glWindowPos3dv(lua_State *L) {
	glWindowPos3dv((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos3dvARB
// void glWindowPos3dvARB (const GLdouble *)
#ifdef glWindowPos3dvARB
static int luaglew_glWindowPos3dvARB(lua_State *L) {
	glWindowPos3dvARB((GLdouble *)luaglew_checkarray_double(L, 1));
	return 0;
}
#endif

//####glWindowPos3fARB
// void glWindowPos3fARB (GLfloat, GLfloat, GLfloat)
#ifdef glWindowPos3fARB
static int luaglew_glWindowPos3fARB(lua_State *L) {
	glWindowPos3fARB((GLfloat)luaL_checknumber(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3));
	return 0;
}
#endif

//####glWindowPos3fv
// void glWindowPos3fv (const GLfloat *v)
#ifdef glWindowPos3fv
static int luaglew_glWindowPos3fv(lua_State *L) {
	glWindowPos3fv((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos3fvARB
// void glWindowPos3fvARB (const GLfloat *)
#ifdef glWindowPos3fvARB
static int luaglew_glWindowPos3fvARB(lua_State *L) {
	glWindowPos3fvARB((GLfloat *)luaglew_checkarray_float(L, 1));
	return 0;
}
#endif

//####glWindowPos3iARB
// void glWindowPos3iARB (GLint, GLint, GLint)
#ifdef glWindowPos3iARB
static int luaglew_glWindowPos3iARB(lua_State *L) {
	glWindowPos3iARB((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLint)luaL_checkint(L, 3));
	return 0;
}
#endif

//####glWindowPos3iv
// void glWindowPos3iv (const GLint *v)
#ifdef glWindowPos3iv
static int luaglew_glWindowPos3iv(lua_State *L) {
	glWindowPos3iv((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3ivARB
// void glWindowPos3ivARB (const GLint *)
#ifdef glWindowPos3ivARB
static int luaglew_glWindowPos3ivARB(lua_State *L) {
	glWindowPos3ivARB((GLint *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3sARB
// void glWindowPos3sARB (GLshort, GLshort, GLshort)
#ifdef glWindowPos3sARB
static int luaglew_glWindowPos3sARB(lua_State *L) {
	glWindowPos3sARB((GLshort)luaL_checkinteger(L, 1), (GLshort)luaL_checkinteger(L, 2), (GLshort)luaL_checkinteger(L, 3));
	return 0;
}
#endif

//####glWindowPos3sv
// void glWindowPos3sv (const GLshort *v)
#ifdef glWindowPos3sv
static int luaglew_glWindowPos3sv(lua_State *L) {
	glWindowPos3sv((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glWindowPos3svARB
// void glWindowPos3svARB (const GLshort *)
#ifdef glWindowPos3svARB
static int luaglew_glWindowPos3svARB(lua_State *L) {
	glWindowPos3svARB((GLshort *)luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

//####glAddSwapHintRectWIN
// void glAddSwapHintRectWIN (GLint x, GLint y, GLsizei width, GLsizei height)
#ifdef glAddSwapHintRectWIN
static int luaglew_glAddSwapHintRectWIN(lua_State *L) {
	glAddSwapHintRectWIN((GLint)luaL_checkint(L, 1), (GLint)luaL_checkint(L, 2), (GLsizei)luaL_checklong(L, 3), (GLsizei)luaL_checklong(L, 4));
	return 0;
}
#endif

//####wglEnumGpusNV
// BOOL wglEnumGpusNV (UINT iGpuIndex, HGPUNV *phGpu)
#ifdef wglEnumGpusNV
static int luaglew_wglEnumGpusNV(lua_State *L) {
	BOOL return_value;
	return_value = wglEnumGpusNV((GLuint)luaL_checkint(L, 1), luaglew_checkarray_HGPUNV(L, 2));
	lua_pushboolean(L, return_value);
	return 1;
}
#endif

//####wglAllocateMemoryNV
// void * wglAllocateMemoryNV (GLsizei size, GLfloat readFrequency, GLfloat writeFrequency, GLfloat priority)
#ifdef wglAllocateMemoryNV
static int luaglew_wglAllocateMemoryNV(lua_State *L) {
	void * return_value;
	return_value = wglAllocateMemoryNV((GLsizei)luaL_checklong(L, 1), (GLfloat)luaL_checknumber(L, 2), (GLfloat)luaL_checknumber(L, 3), (GLfloat)luaL_checknumber(L, 4));
	lua_pushlightuserdata(L, return_value);
	return 1;
}
#endif

//####wglFreeMemoryNV
// void wglFreeMemoryNV (void *pointer)
#ifdef wglFreeMemoryNV
static int luaglew_wglFreeMemoryNV(lua_State *L) {
	wglFreeMemoryNV(luaglew_checkarray_int(L, 1));
	return 0;
}
#endif

