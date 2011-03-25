static const struct luaL_Reg luaglew_lib[] = {
//####glTextureRangeAPPLE
#ifdef glTextureRangeAPPLE
	{"glTextureRangeAPPLE", luaglew_glTextureRangeAPPLE},
#endif
//####glGetTexParameterPointervAPPLE
#ifdef glGetTexParameterPointervAPPLE
	{"glGetTexParameterPointervAPPLE", luaglew_glGetTexParameterPointervAPPLE},
#endif
//####glColorTable
#ifdef glColorTable
	{"glColorTable", luaglew_glColorTable},
#endif
//####glColorSubTable
#ifdef glColorSubTable
	{"glColorSubTable", luaglew_glColorSubTable},
#endif
//####glColorTableParameteriv
#ifdef glColorTableParameteriv
	{"glColorTableParameteriv", luaglew_glColorTableParameteriv},
#endif
//####glColorTableParameterfv
#ifdef glColorTableParameterfv
	{"glColorTableParameterfv", luaglew_glColorTableParameterfv},
#endif
//####glCopyColorSubTable
#ifdef glCopyColorSubTable
	{"glCopyColorSubTable", luaglew_glCopyColorSubTable},
#endif
//####glCopyColorTable
#ifdef glCopyColorTable
	{"glCopyColorTable", luaglew_glCopyColorTable},
#endif
//####glGetColorTable
#ifdef glGetColorTable
	{"glGetColorTable", luaglew_glGetColorTable},
#endif
//####glGetColorTableParameterfv
#ifdef glGetColorTableParameterfv
	{"glGetColorTableParameterfv", luaglew_glGetColorTableParameterfv},
#endif
//####glGetColorTableParameteriv
#ifdef glGetColorTableParameteriv
	{"glGetColorTableParameteriv", luaglew_glGetColorTableParameteriv},
#endif
//####glHistogram
#ifdef glHistogram
	{"glHistogram", luaglew_glHistogram},
#endif
//####glResetHistogram
#ifdef glResetHistogram
	{"glResetHistogram", luaglew_glResetHistogram},
#endif
//####glGetHistogram
#ifdef glGetHistogram
	{"glGetHistogram", luaglew_glGetHistogram},
#endif
//####glGetHistogramParameterfv
#ifdef glGetHistogramParameterfv
	{"glGetHistogramParameterfv", luaglew_glGetHistogramParameterfv},
#endif
//####glGetHistogramParameteriv
#ifdef glGetHistogramParameteriv
	{"glGetHistogramParameteriv", luaglew_glGetHistogramParameteriv},
#endif
//####glMinmax
#ifdef glMinmax
	{"glMinmax", luaglew_glMinmax},
#endif
//####glResetMinmax
#ifdef glResetMinmax
	{"glResetMinmax", luaglew_glResetMinmax},
#endif
//####glGetMinmaxParameterfv
#ifdef glGetMinmaxParameterfv
	{"glGetMinmaxParameterfv", luaglew_glGetMinmaxParameterfv},
#endif
//####glGetMinmaxParameteriv
#ifdef glGetMinmaxParameteriv
	{"glGetMinmaxParameteriv", luaglew_glGetMinmaxParameteriv},
#endif
//####glConvolutionFilter1D
#ifdef glConvolutionFilter1D
	{"glConvolutionFilter1D", luaglew_glConvolutionFilter1D},
#endif
//####glConvolutionFilter2D
#ifdef glConvolutionFilter2D
	{"glConvolutionFilter2D", luaglew_glConvolutionFilter2D},
#endif
//####glConvolutionParameterf
#ifdef glConvolutionParameterf
	{"glConvolutionParameterf", luaglew_glConvolutionParameterf},
#endif
//####glConvolutionParameterfv
#ifdef glConvolutionParameterfv
	{"glConvolutionParameterfv", luaglew_glConvolutionParameterfv},
#endif
//####glConvolutionParameteri
#ifdef glConvolutionParameteri
	{"glConvolutionParameteri", luaglew_glConvolutionParameteri},
#endif
//####glConvolutionParameteriv
#ifdef glConvolutionParameteriv
	{"glConvolutionParameteriv", luaglew_glConvolutionParameteriv},
#endif
//####glCopyConvolutionFilter1D
#ifdef glCopyConvolutionFilter1D
	{"glCopyConvolutionFilter1D", luaglew_glCopyConvolutionFilter1D},
#endif
//####glCopyConvolutionFilter2D
#ifdef glCopyConvolutionFilter2D
	{"glCopyConvolutionFilter2D", luaglew_glCopyConvolutionFilter2D},
#endif
//####glGetConvolutionFilter
#ifdef glGetConvolutionFilter
	{"glGetConvolutionFilter", luaglew_glGetConvolutionFilter},
#endif
//####glGetConvolutionParameterfv
#ifdef glGetConvolutionParameterfv
	{"glGetConvolutionParameterfv", luaglew_glGetConvolutionParameterfv},
#endif
//####glGetConvolutionParameteriv
#ifdef glGetConvolutionParameteriv
	{"glGetConvolutionParameteriv", luaglew_glGetConvolutionParameteriv},
#endif
//####glSeparableFilter2D
#ifdef glSeparableFilter2D
	{"glSeparableFilter2D", luaglew_glSeparableFilter2D},
#endif
//####glGetSeparableFilter
#ifdef glGetSeparableFilter
	{"glGetSeparableFilter", luaglew_glGetSeparableFilter},
#endif
//####glGetMinmax
#ifdef glGetMinmax
	{"glGetMinmax", luaglew_glGetMinmax},
#endif
//####glCurrentPaletteMatrixARB
#ifdef glCurrentPaletteMatrixARB
	{"glCurrentPaletteMatrixARB", luaglew_glCurrentPaletteMatrixARB},
#endif
//####glMatrixIndexPointerARB
#ifdef glMatrixIndexPointerARB
	{"glMatrixIndexPointerARB", luaglew_glMatrixIndexPointerARB},
#endif
//####glMatrixIndexubvARB
#ifdef glMatrixIndexubvARB
	{"glMatrixIndexubvARB", luaglew_glMatrixIndexubvARB},
#endif
//####glMatrixIndexusvARB
#ifdef glMatrixIndexusvARB
	{"glMatrixIndexusvARB", luaglew_glMatrixIndexusvARB},
#endif
//####glMatrixIndexuivARB
#ifdef glMatrixIndexuivARB
	{"glMatrixIndexuivARB", luaglew_glMatrixIndexuivARB},
#endif
//####glActiveTextureARB
#ifdef glActiveTextureARB
	{"glActiveTextureARB", luaglew_glActiveTextureARB},
#endif
//####glClientActiveTextureARB
#ifdef glClientActiveTextureARB
	{"glClientActiveTextureARB", luaglew_glClientActiveTextureARB},
#endif
//####glMultiTexCoord1dARB
#ifdef glMultiTexCoord1dARB
	{"glMultiTexCoord1dARB", luaglew_glMultiTexCoord1dARB},
#endif
//####glMultiTexCoord1dvARB
#ifdef glMultiTexCoord1dvARB
	{"glMultiTexCoord1dvARB", luaglew_glMultiTexCoord1dvARB},
#endif
//####glMultiTexCoord1fARB
#ifdef glMultiTexCoord1fARB
	{"glMultiTexCoord1fARB", luaglew_glMultiTexCoord1fARB},
#endif
//####glMultiTexCoord1fvARB
#ifdef glMultiTexCoord1fvARB
	{"glMultiTexCoord1fvARB", luaglew_glMultiTexCoord1fvARB},
#endif
//####glMultiTexCoord1iARB
#ifdef glMultiTexCoord1iARB
	{"glMultiTexCoord1iARB", luaglew_glMultiTexCoord1iARB},
#endif
//####glMultiTexCoord1ivARB
#ifdef glMultiTexCoord1ivARB
	{"glMultiTexCoord1ivARB", luaglew_glMultiTexCoord1ivARB},
#endif
//####glMultiTexCoord1sARB
#ifdef glMultiTexCoord1sARB
	{"glMultiTexCoord1sARB", luaglew_glMultiTexCoord1sARB},
#endif
//####glMultiTexCoord1svARB
#ifdef glMultiTexCoord1svARB
	{"glMultiTexCoord1svARB", luaglew_glMultiTexCoord1svARB},
#endif
//####glMultiTexCoord2dARB
#ifdef glMultiTexCoord2dARB
	{"glMultiTexCoord2dARB", luaglew_glMultiTexCoord2dARB},
#endif
//####glMultiTexCoord2dvARB
#ifdef glMultiTexCoord2dvARB
	{"glMultiTexCoord2dvARB", luaglew_glMultiTexCoord2dvARB},
#endif
//####glMultiTexCoord2fARB
#ifdef glMultiTexCoord2fARB
	{"glMultiTexCoord2fARB", luaglew_glMultiTexCoord2fARB},
#endif
//####glMultiTexCoord2fvARB
#ifdef glMultiTexCoord2fvARB
	{"glMultiTexCoord2fvARB", luaglew_glMultiTexCoord2fvARB},
#endif
//####glMultiTexCoord2iARB
#ifdef glMultiTexCoord2iARB
	{"glMultiTexCoord2iARB", luaglew_glMultiTexCoord2iARB},
#endif
//####glMultiTexCoord2ivARB
#ifdef glMultiTexCoord2ivARB
	{"glMultiTexCoord2ivARB", luaglew_glMultiTexCoord2ivARB},
#endif
//####glMultiTexCoord2sARB
#ifdef glMultiTexCoord2sARB
	{"glMultiTexCoord2sARB", luaglew_glMultiTexCoord2sARB},
#endif
//####glMultiTexCoord2svARB
#ifdef glMultiTexCoord2svARB
	{"glMultiTexCoord2svARB", luaglew_glMultiTexCoord2svARB},
#endif
//####glMultiTexCoord3dARB
#ifdef glMultiTexCoord3dARB
	{"glMultiTexCoord3dARB", luaglew_glMultiTexCoord3dARB},
#endif
//####glMultiTexCoord3dvARB
#ifdef glMultiTexCoord3dvARB
	{"glMultiTexCoord3dvARB", luaglew_glMultiTexCoord3dvARB},
#endif
//####glMultiTexCoord3fARB
#ifdef glMultiTexCoord3fARB
	{"glMultiTexCoord3fARB", luaglew_glMultiTexCoord3fARB},
#endif
//####glMultiTexCoord3fvARB
#ifdef glMultiTexCoord3fvARB
	{"glMultiTexCoord3fvARB", luaglew_glMultiTexCoord3fvARB},
#endif
//####glMultiTexCoord3iARB
#ifdef glMultiTexCoord3iARB
	{"glMultiTexCoord3iARB", luaglew_glMultiTexCoord3iARB},
#endif
//####glMultiTexCoord3ivARB
#ifdef glMultiTexCoord3ivARB
	{"glMultiTexCoord3ivARB", luaglew_glMultiTexCoord3ivARB},
#endif
//####glMultiTexCoord3sARB
#ifdef glMultiTexCoord3sARB
	{"glMultiTexCoord3sARB", luaglew_glMultiTexCoord3sARB},
#endif
//####glMultiTexCoord3svARB
#ifdef glMultiTexCoord3svARB
	{"glMultiTexCoord3svARB", luaglew_glMultiTexCoord3svARB},
#endif
//####glMultiTexCoord4dARB
#ifdef glMultiTexCoord4dARB
	{"glMultiTexCoord4dARB", luaglew_glMultiTexCoord4dARB},
#endif
//####glMultiTexCoord4dvARB
#ifdef glMultiTexCoord4dvARB
	{"glMultiTexCoord4dvARB", luaglew_glMultiTexCoord4dvARB},
#endif
//####glMultiTexCoord4fARB
#ifdef glMultiTexCoord4fARB
	{"glMultiTexCoord4fARB", luaglew_glMultiTexCoord4fARB},
#endif
//####glMultiTexCoord4fvARB
#ifdef glMultiTexCoord4fvARB
	{"glMultiTexCoord4fvARB", luaglew_glMultiTexCoord4fvARB},
#endif
//####glMultiTexCoord4iARB
#ifdef glMultiTexCoord4iARB
	{"glMultiTexCoord4iARB", luaglew_glMultiTexCoord4iARB},
#endif
//####glMultiTexCoord4ivARB
#ifdef glMultiTexCoord4ivARB
	{"glMultiTexCoord4ivARB", luaglew_glMultiTexCoord4ivARB},
#endif
//####glMultiTexCoord4sARB
#ifdef glMultiTexCoord4sARB
	{"glMultiTexCoord4sARB", luaglew_glMultiTexCoord4sARB},
#endif
//####glMultiTexCoord4svARB
#ifdef glMultiTexCoord4svARB
	{"glMultiTexCoord4svARB", luaglew_glMultiTexCoord4svARB},
#endif
//####glPointParameterfARB
#ifdef glPointParameterfARB
	{"glPointParameterfARB", luaglew_glPointParameterfARB},
#endif
//####glPointParameterfvARB
#ifdef glPointParameterfvARB
	{"glPointParameterfvARB", luaglew_glPointParameterfvARB},
#endif
//####glGetnColorTableARB
#ifdef glGetnColorTableARB
	{"glGetnColorTableARB", luaglew_glGetnColorTableARB},
#endif
//####glGetnCompressedTexImageARB
#ifdef glGetnCompressedTexImageARB
	{"glGetnCompressedTexImageARB", luaglew_glGetnCompressedTexImageARB},
#endif
//####glGetnConvolutionFilterARB
#ifdef glGetnConvolutionFilterARB
	{"glGetnConvolutionFilterARB", luaglew_glGetnConvolutionFilterARB},
#endif
//####glGetnHistogramARB
#ifdef glGetnHistogramARB
	{"glGetnHistogramARB", luaglew_glGetnHistogramARB},
#endif
//####glGetnMapdvARB
#ifdef glGetnMapdvARB
	{"glGetnMapdvARB", luaglew_glGetnMapdvARB},
#endif
//####glGetnMapfvARB
#ifdef glGetnMapfvARB
	{"glGetnMapfvARB", luaglew_glGetnMapfvARB},
#endif
//####glGetnMapivARB
#ifdef glGetnMapivARB
	{"glGetnMapivARB", luaglew_glGetnMapivARB},
#endif
//####glGetnMinmaxARB
#ifdef glGetnMinmaxARB
	{"glGetnMinmaxARB", luaglew_glGetnMinmaxARB},
#endif
//####glGetnPixelMapfvARB
#ifdef glGetnPixelMapfvARB
	{"glGetnPixelMapfvARB", luaglew_glGetnPixelMapfvARB},
#endif
//####glGetnPixelMapuivARB
#ifdef glGetnPixelMapuivARB
	{"glGetnPixelMapuivARB", luaglew_glGetnPixelMapuivARB},
#endif
//####glGetnPixelMapusvARB
#ifdef glGetnPixelMapusvARB
	{"glGetnPixelMapusvARB", luaglew_glGetnPixelMapusvARB},
#endif
//####glGetnPolygonStippleARB
#ifdef glGetnPolygonStippleARB
	{"glGetnPolygonStippleARB", luaglew_glGetnPolygonStippleARB},
#endif
//####glGetnSeparableFilterARB
#ifdef glGetnSeparableFilterARB
	{"glGetnSeparableFilterARB", luaglew_glGetnSeparableFilterARB},
#endif
//####glGetnTexImageARB
#ifdef glGetnTexImageARB
	{"glGetnTexImageARB", luaglew_glGetnTexImageARB},
#endif
//####glGetnUniformdvARB
#ifdef glGetnUniformdvARB
	{"glGetnUniformdvARB", luaglew_glGetnUniformdvARB},
#endif
//####glGetnUniformfvARB
#ifdef glGetnUniformfvARB
	{"glGetnUniformfvARB", luaglew_glGetnUniformfvARB},
#endif
//####glGetnUniformivARB
#ifdef glGetnUniformivARB
	{"glGetnUniformivARB", luaglew_glGetnUniformivARB},
#endif
//####glGetnUniformuivARB
#ifdef glGetnUniformuivARB
	{"glGetnUniformuivARB", luaglew_glGetnUniformuivARB},
#endif
//####glReadnPixelsARB
#ifdef glReadnPixelsARB
	{"glReadnPixelsARB", luaglew_glReadnPixelsARB},
#endif
//####glActiveShaderProgram
#ifdef glActiveShaderProgram
	{"glActiveShaderProgram", luaglew_glActiveShaderProgram},
#endif
//####glBindProgramPipeline
#ifdef glBindProgramPipeline
	{"glBindProgramPipeline", luaglew_glBindProgramPipeline},
#endif
//####glCreateShaderProgramv
#ifdef glCreateShaderProgramv
	{"glCreateShaderProgramv", luaglew_glCreateShaderProgramv},
#endif
//####glDeleteProgramPipelines
#ifdef glDeleteProgramPipelines
	{"glDeleteProgramPipelines", luaglew_glDeleteProgramPipelines},
#endif
//####glGenProgramPipelines
#ifdef glGenProgramPipelines
	{"glGenProgramPipelines", luaglew_glGenProgramPipelines},
#endif
//####glGetProgramPipelineInfoLog
#ifdef glGetProgramPipelineInfoLog
	{"glGetProgramPipelineInfoLog", luaglew_glGetProgramPipelineInfoLog},
#endif
//####glGetProgramPipelineiv
#ifdef glGetProgramPipelineiv
	{"glGetProgramPipelineiv", luaglew_glGetProgramPipelineiv},
#endif
//####glIsProgramPipeline
#ifdef glIsProgramPipeline
	{"glIsProgramPipeline", luaglew_glIsProgramPipeline},
#endif
//####glProgramUniform1d
#ifdef glProgramUniform1d
	{"glProgramUniform1d", luaglew_glProgramUniform1d},
#endif
//####glProgramUniform1dv
#ifdef glProgramUniform1dv
	{"glProgramUniform1dv", luaglew_glProgramUniform1dv},
#endif
//####glProgramUniform1f
#ifdef glProgramUniform1f
	{"glProgramUniform1f", luaglew_glProgramUniform1f},
#endif
//####glProgramUniform1fv
#ifdef glProgramUniform1fv
	{"glProgramUniform1fv", luaglew_glProgramUniform1fv},
#endif
//####glProgramUniform1i
#ifdef glProgramUniform1i
	{"glProgramUniform1i", luaglew_glProgramUniform1i},
#endif
//####glProgramUniform1iv
#ifdef glProgramUniform1iv
	{"glProgramUniform1iv", luaglew_glProgramUniform1iv},
#endif
//####glProgramUniform1ui
#ifdef glProgramUniform1ui
	{"glProgramUniform1ui", luaglew_glProgramUniform1ui},
#endif
//####glProgramUniform1uiv
#ifdef glProgramUniform1uiv
	{"glProgramUniform1uiv", luaglew_glProgramUniform1uiv},
#endif
//####glProgramUniform2d
#ifdef glProgramUniform2d
	{"glProgramUniform2d", luaglew_glProgramUniform2d},
#endif
//####glProgramUniform2dv
#ifdef glProgramUniform2dv
	{"glProgramUniform2dv", luaglew_glProgramUniform2dv},
#endif
//####glProgramUniform2f
#ifdef glProgramUniform2f
	{"glProgramUniform2f", luaglew_glProgramUniform2f},
#endif
//####glProgramUniform2fv
#ifdef glProgramUniform2fv
	{"glProgramUniform2fv", luaglew_glProgramUniform2fv},
#endif
//####glProgramUniform2i
#ifdef glProgramUniform2i
	{"glProgramUniform2i", luaglew_glProgramUniform2i},
#endif
//####glProgramUniform2iv
#ifdef glProgramUniform2iv
	{"glProgramUniform2iv", luaglew_glProgramUniform2iv},
#endif
//####glProgramUniform2ui
#ifdef glProgramUniform2ui
	{"glProgramUniform2ui", luaglew_glProgramUniform2ui},
#endif
//####glProgramUniform2uiv
#ifdef glProgramUniform2uiv
	{"glProgramUniform2uiv", luaglew_glProgramUniform2uiv},
#endif
//####glProgramUniform3d
#ifdef glProgramUniform3d
	{"glProgramUniform3d", luaglew_glProgramUniform3d},
#endif
//####glProgramUniform3dv
#ifdef glProgramUniform3dv
	{"glProgramUniform3dv", luaglew_glProgramUniform3dv},
#endif
//####glProgramUniform3f
#ifdef glProgramUniform3f
	{"glProgramUniform3f", luaglew_glProgramUniform3f},
#endif
//####glProgramUniform3fv
#ifdef glProgramUniform3fv
	{"glProgramUniform3fv", luaglew_glProgramUniform3fv},
#endif
//####glProgramUniform3i
#ifdef glProgramUniform3i
	{"glProgramUniform3i", luaglew_glProgramUniform3i},
#endif
//####glProgramUniform3iv
#ifdef glProgramUniform3iv
	{"glProgramUniform3iv", luaglew_glProgramUniform3iv},
#endif
//####glProgramUniform3ui
#ifdef glProgramUniform3ui
	{"glProgramUniform3ui", luaglew_glProgramUniform3ui},
#endif
//####glProgramUniform3uiv
#ifdef glProgramUniform3uiv
	{"glProgramUniform3uiv", luaglew_glProgramUniform3uiv},
#endif
//####glProgramUniform4d
#ifdef glProgramUniform4d
	{"glProgramUniform4d", luaglew_glProgramUniform4d},
#endif
//####glProgramUniform4dv
#ifdef glProgramUniform4dv
	{"glProgramUniform4dv", luaglew_glProgramUniform4dv},
#endif
//####glProgramUniform4f
#ifdef glProgramUniform4f
	{"glProgramUniform4f", luaglew_glProgramUniform4f},
#endif
//####glProgramUniform4fv
#ifdef glProgramUniform4fv
	{"glProgramUniform4fv", luaglew_glProgramUniform4fv},
#endif
//####glProgramUniform4i
#ifdef glProgramUniform4i
	{"glProgramUniform4i", luaglew_glProgramUniform4i},
#endif
//####glProgramUniform4iv
#ifdef glProgramUniform4iv
	{"glProgramUniform4iv", luaglew_glProgramUniform4iv},
#endif
//####glProgramUniform4ui
#ifdef glProgramUniform4ui
	{"glProgramUniform4ui", luaglew_glProgramUniform4ui},
#endif
//####glProgramUniform4uiv
#ifdef glProgramUniform4uiv
	{"glProgramUniform4uiv", luaglew_glProgramUniform4uiv},
#endif
//####glProgramUniformMatrix2dv
#ifdef glProgramUniformMatrix2dv
	{"glProgramUniformMatrix2dv", luaglew_glProgramUniformMatrix2dv},
#endif
//####glProgramUniformMatrix2fv
#ifdef glProgramUniformMatrix2fv
	{"glProgramUniformMatrix2fv", luaglew_glProgramUniformMatrix2fv},
#endif
//####glProgramUniformMatrix2x3dv
#ifdef glProgramUniformMatrix2x3dv
	{"glProgramUniformMatrix2x3dv", luaglew_glProgramUniformMatrix2x3dv},
#endif
//####glProgramUniformMatrix2x3fv
#ifdef glProgramUniformMatrix2x3fv
	{"glProgramUniformMatrix2x3fv", luaglew_glProgramUniformMatrix2x3fv},
#endif
//####glProgramUniformMatrix2x4dv
#ifdef glProgramUniformMatrix2x4dv
	{"glProgramUniformMatrix2x4dv", luaglew_glProgramUniformMatrix2x4dv},
#endif
//####glProgramUniformMatrix2x4fv
#ifdef glProgramUniformMatrix2x4fv
	{"glProgramUniformMatrix2x4fv", luaglew_glProgramUniformMatrix2x4fv},
#endif
//####glProgramUniformMatrix3dv
#ifdef glProgramUniformMatrix3dv
	{"glProgramUniformMatrix3dv", luaglew_glProgramUniformMatrix3dv},
#endif
//####glProgramUniformMatrix3fv
#ifdef glProgramUniformMatrix3fv
	{"glProgramUniformMatrix3fv", luaglew_glProgramUniformMatrix3fv},
#endif
//####glProgramUniformMatrix3x2dv
#ifdef glProgramUniformMatrix3x2dv
	{"glProgramUniformMatrix3x2dv", luaglew_glProgramUniformMatrix3x2dv},
#endif
//####glProgramUniformMatrix3x2fv
#ifdef glProgramUniformMatrix3x2fv
	{"glProgramUniformMatrix3x2fv", luaglew_glProgramUniformMatrix3x2fv},
#endif
//####glProgramUniformMatrix3x4dv
#ifdef glProgramUniformMatrix3x4dv
	{"glProgramUniformMatrix3x4dv", luaglew_glProgramUniformMatrix3x4dv},
#endif
//####glProgramUniformMatrix3x4fv
#ifdef glProgramUniformMatrix3x4fv
	{"glProgramUniformMatrix3x4fv", luaglew_glProgramUniformMatrix3x4fv},
#endif
//####glProgramUniformMatrix4dv
#ifdef glProgramUniformMatrix4dv
	{"glProgramUniformMatrix4dv", luaglew_glProgramUniformMatrix4dv},
#endif
//####glProgramUniformMatrix4fv
#ifdef glProgramUniformMatrix4fv
	{"glProgramUniformMatrix4fv", luaglew_glProgramUniformMatrix4fv},
#endif
//####glProgramUniformMatrix4x2dv
#ifdef glProgramUniformMatrix4x2dv
	{"glProgramUniformMatrix4x2dv", luaglew_glProgramUniformMatrix4x2dv},
#endif
//####glProgramUniformMatrix4x2fv
#ifdef glProgramUniformMatrix4x2fv
	{"glProgramUniformMatrix4x2fv", luaglew_glProgramUniformMatrix4x2fv},
#endif
//####glProgramUniformMatrix4x3dv
#ifdef glProgramUniformMatrix4x3dv
	{"glProgramUniformMatrix4x3dv", luaglew_glProgramUniformMatrix4x3dv},
#endif
//####glProgramUniformMatrix4x3fv
#ifdef glProgramUniformMatrix4x3fv
	{"glProgramUniformMatrix4x3fv", luaglew_glProgramUniformMatrix4x3fv},
#endif
//####glUseProgramStages
#ifdef glUseProgramStages
	{"glUseProgramStages", luaglew_glUseProgramStages},
#endif
//####glValidateProgramPipeline
#ifdef glValidateProgramPipeline
	{"glValidateProgramPipeline", luaglew_glValidateProgramPipeline},
#endif
//####glGetVertexAttribLdv
#ifdef glGetVertexAttribLdv
	{"glGetVertexAttribLdv", luaglew_glGetVertexAttribLdv},
#endif
//####glVertexAttribL1d
#ifdef glVertexAttribL1d
	{"glVertexAttribL1d", luaglew_glVertexAttribL1d},
#endif
//####glVertexAttribL1dv
#ifdef glVertexAttribL1dv
	{"glVertexAttribL1dv", luaglew_glVertexAttribL1dv},
#endif
//####glVertexAttribL2d
#ifdef glVertexAttribL2d
	{"glVertexAttribL2d", luaglew_glVertexAttribL2d},
#endif
//####glVertexAttribL2dv
#ifdef glVertexAttribL2dv
	{"glVertexAttribL2dv", luaglew_glVertexAttribL2dv},
#endif
//####glVertexAttribL3d
#ifdef glVertexAttribL3d
	{"glVertexAttribL3d", luaglew_glVertexAttribL3d},
#endif
//####glVertexAttribL3dv
#ifdef glVertexAttribL3dv
	{"glVertexAttribL3dv", luaglew_glVertexAttribL3dv},
#endif
//####glVertexAttribL4d
#ifdef glVertexAttribL4d
	{"glVertexAttribL4d", luaglew_glVertexAttribL4d},
#endif
//####glVertexAttribL4dv
#ifdef glVertexAttribL4dv
	{"glVertexAttribL4dv", luaglew_glVertexAttribL4dv},
#endif
//####glVertexAttribLPointer
#ifdef glVertexAttribLPointer
	{"glVertexAttribLPointer", luaglew_glVertexAttribLPointer},
#endif
//####glWeightbvARB
#ifdef glWeightbvARB
	{"glWeightbvARB", luaglew_glWeightbvARB},
#endif
//####glWeightsvARB
#ifdef glWeightsvARB
	{"glWeightsvARB", luaglew_glWeightsvARB},
#endif
//####glWeightivARB
#ifdef glWeightivARB
	{"glWeightivARB", luaglew_glWeightivARB},
#endif
//####glWeightfvARB
#ifdef glWeightfvARB
	{"glWeightfvARB", luaglew_glWeightfvARB},
#endif
//####glWeightdvARB
#ifdef glWeightdvARB
	{"glWeightdvARB", luaglew_glWeightdvARB},
#endif
//####glWeightubvARB
#ifdef glWeightubvARB
	{"glWeightubvARB", luaglew_glWeightubvARB},
#endif
//####glWeightusvARB
#ifdef glWeightusvARB
	{"glWeightusvARB", luaglew_glWeightusvARB},
#endif
//####glWeightuivARB
#ifdef glWeightuivARB
	{"glWeightuivARB", luaglew_glWeightuivARB},
#endif
//####glWeightPointerARB
#ifdef glWeightPointerARB
	{"glWeightPointerARB", luaglew_glWeightPointerARB},
#endif
//####glVertexBlendARB
#ifdef glVertexBlendARB
	{"glVertexBlendARB", luaglew_glVertexBlendARB},
#endif
//####glTexBumpParameterivATI
#ifdef glTexBumpParameterivATI
	{"glTexBumpParameterivATI", luaglew_glTexBumpParameterivATI},
#endif
//####glTexBumpParameterfvATI
#ifdef glTexBumpParameterfvATI
	{"glTexBumpParameterfvATI", luaglew_glTexBumpParameterfvATI},
#endif
//####glGetTexBumpParameterivATI
#ifdef glGetTexBumpParameterivATI
	{"glGetTexBumpParameterivATI", luaglew_glGetTexBumpParameterivATI},
#endif
//####glGetTexBumpParameterfvATI
#ifdef glGetTexBumpParameterfvATI
	{"glGetTexBumpParameterfvATI", luaglew_glGetTexBumpParameterfvATI},
#endif
//####glMapObjectBufferATI
#ifdef glMapObjectBufferATI
	{"glMapObjectBufferATI", luaglew_glMapObjectBufferATI},
#endif
//####glUnmapObjectBufferATI
#ifdef glUnmapObjectBufferATI
	{"glUnmapObjectBufferATI", luaglew_glUnmapObjectBufferATI},
#endif
//####glPNTrianglesiATI
#ifdef glPNTrianglesiATI
	{"glPNTrianglesiATI", luaglew_glPNTrianglesiATI},
#endif
//####glPNTrianglesfATI
#ifdef glPNTrianglesfATI
	{"glPNTrianglesfATI", luaglew_glPNTrianglesfATI},
#endif
//####glStencilOpSeparateATI
#ifdef glStencilOpSeparateATI
	{"glStencilOpSeparateATI", luaglew_glStencilOpSeparateATI},
#endif
//####glStencilFuncSeparateATI
#ifdef glStencilFuncSeparateATI
	{"glStencilFuncSeparateATI", luaglew_glStencilFuncSeparateATI},
#endif
//####glClientActiveVertexStreamATI
#ifdef glClientActiveVertexStreamATI
	{"glClientActiveVertexStreamATI", luaglew_glClientActiveVertexStreamATI},
#endif
//####glVertexBlendEnviATI
#ifdef glVertexBlendEnviATI
	{"glVertexBlendEnviATI", luaglew_glVertexBlendEnviATI},
#endif
//####glVertexBlendEnvfATI
#ifdef glVertexBlendEnvfATI
	{"glVertexBlendEnvfATI", luaglew_glVertexBlendEnvfATI},
#endif
//####glVertexStream2sATI
#ifdef glVertexStream2sATI
	{"glVertexStream2sATI", luaglew_glVertexStream2sATI},
#endif
//####glVertexStream2svATI
#ifdef glVertexStream2svATI
	{"glVertexStream2svATI", luaglew_glVertexStream2svATI},
#endif
//####glVertexStream2iATI
#ifdef glVertexStream2iATI
	{"glVertexStream2iATI", luaglew_glVertexStream2iATI},
#endif
//####glVertexStream2ivATI
#ifdef glVertexStream2ivATI
	{"glVertexStream2ivATI", luaglew_glVertexStream2ivATI},
#endif
//####glVertexStream2fATI
#ifdef glVertexStream2fATI
	{"glVertexStream2fATI", luaglew_glVertexStream2fATI},
#endif
//####glVertexStream2fvATI
#ifdef glVertexStream2fvATI
	{"glVertexStream2fvATI", luaglew_glVertexStream2fvATI},
#endif
//####glVertexStream2dATI
#ifdef glVertexStream2dATI
	{"glVertexStream2dATI", luaglew_glVertexStream2dATI},
#endif
//####glVertexStream2dvATI
#ifdef glVertexStream2dvATI
	{"glVertexStream2dvATI", luaglew_glVertexStream2dvATI},
#endif
//####glVertexStream3sATI
#ifdef glVertexStream3sATI
	{"glVertexStream3sATI", luaglew_glVertexStream3sATI},
#endif
//####glVertexStream3svATI
#ifdef glVertexStream3svATI
	{"glVertexStream3svATI", luaglew_glVertexStream3svATI},
#endif
//####glVertexStream3iATI
#ifdef glVertexStream3iATI
	{"glVertexStream3iATI", luaglew_glVertexStream3iATI},
#endif
//####glVertexStream3ivATI
#ifdef glVertexStream3ivATI
	{"glVertexStream3ivATI", luaglew_glVertexStream3ivATI},
#endif
//####glVertexStream3fATI
#ifdef glVertexStream3fATI
	{"glVertexStream3fATI", luaglew_glVertexStream3fATI},
#endif
//####glVertexStream3fvATI
#ifdef glVertexStream3fvATI
	{"glVertexStream3fvATI", luaglew_glVertexStream3fvATI},
#endif
//####glVertexStream3dATI
#ifdef glVertexStream3dATI
	{"glVertexStream3dATI", luaglew_glVertexStream3dATI},
#endif
//####glVertexStream3dvATI
#ifdef glVertexStream3dvATI
	{"glVertexStream3dvATI", luaglew_glVertexStream3dvATI},
#endif
//####glVertexStream4sATI
#ifdef glVertexStream4sATI
	{"glVertexStream4sATI", luaglew_glVertexStream4sATI},
#endif
//####glVertexStream4svATI
#ifdef glVertexStream4svATI
	{"glVertexStream4svATI", luaglew_glVertexStream4svATI},
#endif
//####glVertexStream4iATI
#ifdef glVertexStream4iATI
	{"glVertexStream4iATI", luaglew_glVertexStream4iATI},
#endif
//####glVertexStream4ivATI
#ifdef glVertexStream4ivATI
	{"glVertexStream4ivATI", luaglew_glVertexStream4ivATI},
#endif
//####glVertexStream4fATI
#ifdef glVertexStream4fATI
	{"glVertexStream4fATI", luaglew_glVertexStream4fATI},
#endif
//####glVertexStream4fvATI
#ifdef glVertexStream4fvATI
	{"glVertexStream4fvATI", luaglew_glVertexStream4fvATI},
#endif
//####glVertexStream4dATI
#ifdef glVertexStream4dATI
	{"glVertexStream4dATI", luaglew_glVertexStream4dATI},
#endif
//####glVertexStream4dvATI
#ifdef glVertexStream4dvATI
	{"glVertexStream4dvATI", luaglew_glVertexStream4dvATI},
#endif
//####glNormalStream3bATI
#ifdef glNormalStream3bATI
	{"glNormalStream3bATI", luaglew_glNormalStream3bATI},
#endif
//####glNormalStream3bvATI
#ifdef glNormalStream3bvATI
	{"glNormalStream3bvATI", luaglew_glNormalStream3bvATI},
#endif
//####glNormalStream3sATI
#ifdef glNormalStream3sATI
	{"glNormalStream3sATI", luaglew_glNormalStream3sATI},
#endif
//####glNormalStream3svATI
#ifdef glNormalStream3svATI
	{"glNormalStream3svATI", luaglew_glNormalStream3svATI},
#endif
//####glNormalStream3iATI
#ifdef glNormalStream3iATI
	{"glNormalStream3iATI", luaglew_glNormalStream3iATI},
#endif
//####glNormalStream3ivATI
#ifdef glNormalStream3ivATI
	{"glNormalStream3ivATI", luaglew_glNormalStream3ivATI},
#endif
//####glNormalStream3fATI
#ifdef glNormalStream3fATI
	{"glNormalStream3fATI", luaglew_glNormalStream3fATI},
#endif
//####glNormalStream3fvATI
#ifdef glNormalStream3fvATI
	{"glNormalStream3fvATI", luaglew_glNormalStream3fvATI},
#endif
//####glNormalStream3dATI
#ifdef glNormalStream3dATI
	{"glNormalStream3dATI", luaglew_glNormalStream3dATI},
#endif
//####glNormalStream3dvATI
#ifdef glNormalStream3dvATI
	{"glNormalStream3dvATI", luaglew_glNormalStream3dvATI},
#endif
//####glUniformBufferEXT
#ifdef glUniformBufferEXT
	{"glUniformBufferEXT", luaglew_glUniformBufferEXT},
#endif
//####glGetUniformBufferSizeEXT
#ifdef glGetUniformBufferSizeEXT
	{"glGetUniformBufferSizeEXT", luaglew_glGetUniformBufferSizeEXT},
#endif
//####glGetUniformOffsetEXT
#ifdef glGetUniformOffsetEXT
	{"glGetUniformOffsetEXT", luaglew_glGetUniformOffsetEXT},
#endif
//####glDepthBoundsEXT
#ifdef glDepthBoundsEXT
	{"glDepthBoundsEXT", luaglew_glDepthBoundsEXT},
#endif
//####glDrawArraysInstancedEXT
#ifdef glDrawArraysInstancedEXT
	{"glDrawArraysInstancedEXT", luaglew_glDrawArraysInstancedEXT},
#endif
//####glDrawElementsInstancedEXT
#ifdef glDrawElementsInstancedEXT
	{"glDrawElementsInstancedEXT", luaglew_glDrawElementsInstancedEXT},
#endif
//####glDrawRangeElementsEXT
#ifdef glDrawRangeElementsEXT
	{"glDrawRangeElementsEXT", luaglew_glDrawRangeElementsEXT},
#endif
//####glFogCoordfEXT
#ifdef glFogCoordfEXT
	{"glFogCoordfEXT", luaglew_glFogCoordfEXT},
#endif
//####glFogCoordfvEXT
#ifdef glFogCoordfvEXT
	{"glFogCoordfvEXT", luaglew_glFogCoordfvEXT},
#endif
//####glFogCoorddEXT
#ifdef glFogCoorddEXT
	{"glFogCoorddEXT", luaglew_glFogCoorddEXT},
#endif
//####glFogCoorddvEXT
#ifdef glFogCoorddvEXT
	{"glFogCoorddvEXT", luaglew_glFogCoorddvEXT},
#endif
//####glFogCoordPointerEXT
#ifdef glFogCoordPointerEXT
	{"glFogCoordPointerEXT", luaglew_glFogCoordPointerEXT},
#endif
//####glProgramParameteriEXT
#ifdef glProgramParameteriEXT
	{"glProgramParameteriEXT", luaglew_glProgramParameteriEXT},
#endif
//####glFramebufferTextureEXT
#ifdef glFramebufferTextureEXT
	{"glFramebufferTextureEXT", luaglew_glFramebufferTextureEXT},
#endif
//####glFramebufferTextureLayerEXT
#ifdef glFramebufferTextureLayerEXT
	{"glFramebufferTextureLayerEXT", luaglew_glFramebufferTextureLayerEXT},
#endif
//####glFramebufferTextureFaceEXT
#ifdef glFramebufferTextureFaceEXT
	{"glFramebufferTextureFaceEXT", luaglew_glFramebufferTextureFaceEXT},
#endif
//####glProgramEnvParameters4fvEXT
#ifdef glProgramEnvParameters4fvEXT
	{"glProgramEnvParameters4fvEXT", luaglew_glProgramEnvParameters4fvEXT},
#endif
//####glProgramLocalParameters4fvEXT
#ifdef glProgramLocalParameters4fvEXT
	{"glProgramLocalParameters4fvEXT", luaglew_glProgramLocalParameters4fvEXT},
#endif
//####glGetUniformuivEXT
#ifdef glGetUniformuivEXT
	{"glGetUniformuivEXT", luaglew_glGetUniformuivEXT},
#endif
//####glBindFragDataLocationEXT
#ifdef glBindFragDataLocationEXT
	{"glBindFragDataLocationEXT", luaglew_glBindFragDataLocationEXT},
#endif
//####glGetFragDataLocationEXT
#ifdef glGetFragDataLocationEXT
	{"glGetFragDataLocationEXT", luaglew_glGetFragDataLocationEXT},
#endif
//####glUniform1uiEXT
#ifdef glUniform1uiEXT
	{"glUniform1uiEXT", luaglew_glUniform1uiEXT},
#endif
//####glUniform2uiEXT
#ifdef glUniform2uiEXT
	{"glUniform2uiEXT", luaglew_glUniform2uiEXT},
#endif
//####glUniform3uiEXT
#ifdef glUniform3uiEXT
	{"glUniform3uiEXT", luaglew_glUniform3uiEXT},
#endif
//####glUniform4uiEXT
#ifdef glUniform4uiEXT
	{"glUniform4uiEXT", luaglew_glUniform4uiEXT},
#endif
//####glUniform1uivEXT
#ifdef glUniform1uivEXT
	{"glUniform1uivEXT", luaglew_glUniform1uivEXT},
#endif
//####glUniform2uivEXT
#ifdef glUniform2uivEXT
	{"glUniform2uivEXT", luaglew_glUniform2uivEXT},
#endif
//####glUniform3uivEXT
#ifdef glUniform3uivEXT
	{"glUniform3uivEXT", luaglew_glUniform3uivEXT},
#endif
//####glUniform4uivEXT
#ifdef glUniform4uivEXT
	{"glUniform4uivEXT", luaglew_glUniform4uivEXT},
#endif
//####glVertexAttribI1iEXT
#ifdef glVertexAttribI1iEXT
	{"glVertexAttribI1iEXT", luaglew_glVertexAttribI1iEXT},
#endif
//####glVertexAttribI2iEXT
#ifdef glVertexAttribI2iEXT
	{"glVertexAttribI2iEXT", luaglew_glVertexAttribI2iEXT},
#endif
//####glVertexAttribI3iEXT
#ifdef glVertexAttribI3iEXT
	{"glVertexAttribI3iEXT", luaglew_glVertexAttribI3iEXT},
#endif
//####glVertexAttribI4iEXT
#ifdef glVertexAttribI4iEXT
	{"glVertexAttribI4iEXT", luaglew_glVertexAttribI4iEXT},
#endif
//####glVertexAttribI1uiEXT
#ifdef glVertexAttribI1uiEXT
	{"glVertexAttribI1uiEXT", luaglew_glVertexAttribI1uiEXT},
#endif
//####glVertexAttribI2uiEXT
#ifdef glVertexAttribI2uiEXT
	{"glVertexAttribI2uiEXT", luaglew_glVertexAttribI2uiEXT},
#endif
//####glVertexAttribI3uiEXT
#ifdef glVertexAttribI3uiEXT
	{"glVertexAttribI3uiEXT", luaglew_glVertexAttribI3uiEXT},
#endif
//####glVertexAttribI4uiEXT
#ifdef glVertexAttribI4uiEXT
	{"glVertexAttribI4uiEXT", luaglew_glVertexAttribI4uiEXT},
#endif
//####glVertexAttribI1ivEXT
#ifdef glVertexAttribI1ivEXT
	{"glVertexAttribI1ivEXT", luaglew_glVertexAttribI1ivEXT},
#endif
//####glVertexAttribI2ivEXT
#ifdef glVertexAttribI2ivEXT
	{"glVertexAttribI2ivEXT", luaglew_glVertexAttribI2ivEXT},
#endif
//####glVertexAttribI3ivEXT
#ifdef glVertexAttribI3ivEXT
	{"glVertexAttribI3ivEXT", luaglew_glVertexAttribI3ivEXT},
#endif
//####glVertexAttribI4ivEXT
#ifdef glVertexAttribI4ivEXT
	{"glVertexAttribI4ivEXT", luaglew_glVertexAttribI4ivEXT},
#endif
//####glVertexAttribI1uivEXT
#ifdef glVertexAttribI1uivEXT
	{"glVertexAttribI1uivEXT", luaglew_glVertexAttribI1uivEXT},
#endif
//####glVertexAttribI2uivEXT
#ifdef glVertexAttribI2uivEXT
	{"glVertexAttribI2uivEXT", luaglew_glVertexAttribI2uivEXT},
#endif
//####glVertexAttribI3uivEXT
#ifdef glVertexAttribI3uivEXT
	{"glVertexAttribI3uivEXT", luaglew_glVertexAttribI3uivEXT},
#endif
//####glVertexAttribI4uivEXT
#ifdef glVertexAttribI4uivEXT
	{"glVertexAttribI4uivEXT", luaglew_glVertexAttribI4uivEXT},
#endif
//####glVertexAttribI4bvEXT
#ifdef glVertexAttribI4bvEXT
	{"glVertexAttribI4bvEXT", luaglew_glVertexAttribI4bvEXT},
#endif
//####glVertexAttribI4svEXT
#ifdef glVertexAttribI4svEXT
	{"glVertexAttribI4svEXT", luaglew_glVertexAttribI4svEXT},
#endif
//####glVertexAttribI4ubvEXT
#ifdef glVertexAttribI4ubvEXT
	{"glVertexAttribI4ubvEXT", luaglew_glVertexAttribI4ubvEXT},
#endif
//####glVertexAttribI4usvEXT
#ifdef glVertexAttribI4usvEXT
	{"glVertexAttribI4usvEXT", luaglew_glVertexAttribI4usvEXT},
#endif
//####glVertexAttribIPointerEXT
#ifdef glVertexAttribIPointerEXT
	{"glVertexAttribIPointerEXT", luaglew_glVertexAttribIPointerEXT},
#endif
//####glGetVertexAttribIivEXT
#ifdef glGetVertexAttribIivEXT
	{"glGetVertexAttribIivEXT", luaglew_glGetVertexAttribIivEXT},
#endif
//####glGetVertexAttribIuivEXT
#ifdef glGetVertexAttribIuivEXT
	{"glGetVertexAttribIuivEXT", luaglew_glGetVertexAttribIuivEXT},
#endif
//####glPointParameterfEXT
#ifdef glPointParameterfEXT
	{"glPointParameterfEXT", luaglew_glPointParameterfEXT},
#endif
//####glPointParameterfvEXT
#ifdef glPointParameterfvEXT
	{"glPointParameterfvEXT", luaglew_glPointParameterfvEXT},
#endif
//####glSecondaryColor3bEXT
#ifdef glSecondaryColor3bEXT
	{"glSecondaryColor3bEXT", luaglew_glSecondaryColor3bEXT},
#endif
//####glSecondaryColor3bvEXT
#ifdef glSecondaryColor3bvEXT
	{"glSecondaryColor3bvEXT", luaglew_glSecondaryColor3bvEXT},
#endif
//####glSecondaryColor3dEXT
#ifdef glSecondaryColor3dEXT
	{"glSecondaryColor3dEXT", luaglew_glSecondaryColor3dEXT},
#endif
//####glSecondaryColor3dvEXT
#ifdef glSecondaryColor3dvEXT
	{"glSecondaryColor3dvEXT", luaglew_glSecondaryColor3dvEXT},
#endif
//####glSecondaryColor3fEXT
#ifdef glSecondaryColor3fEXT
	{"glSecondaryColor3fEXT", luaglew_glSecondaryColor3fEXT},
#endif
//####glSecondaryColor3fvEXT
#ifdef glSecondaryColor3fvEXT
	{"glSecondaryColor3fvEXT", luaglew_glSecondaryColor3fvEXT},
#endif
//####glSecondaryColor3iEXT
#ifdef glSecondaryColor3iEXT
	{"glSecondaryColor3iEXT", luaglew_glSecondaryColor3iEXT},
#endif
//####glSecondaryColor3ivEXT
#ifdef glSecondaryColor3ivEXT
	{"glSecondaryColor3ivEXT", luaglew_glSecondaryColor3ivEXT},
#endif
//####glSecondaryColor3sEXT
#ifdef glSecondaryColor3sEXT
	{"glSecondaryColor3sEXT", luaglew_glSecondaryColor3sEXT},
#endif
//####glSecondaryColor3svEXT
#ifdef glSecondaryColor3svEXT
	{"glSecondaryColor3svEXT", luaglew_glSecondaryColor3svEXT},
#endif
//####glSecondaryColor3ubEXT
#ifdef glSecondaryColor3ubEXT
	{"glSecondaryColor3ubEXT", luaglew_glSecondaryColor3ubEXT},
#endif
//####glSecondaryColor3ubvEXT
#ifdef glSecondaryColor3ubvEXT
	{"glSecondaryColor3ubvEXT", luaglew_glSecondaryColor3ubvEXT},
#endif
//####glSecondaryColor3uiEXT
#ifdef glSecondaryColor3uiEXT
	{"glSecondaryColor3uiEXT", luaglew_glSecondaryColor3uiEXT},
#endif
//####glSecondaryColor3uivEXT
#ifdef glSecondaryColor3uivEXT
	{"glSecondaryColor3uivEXT", luaglew_glSecondaryColor3uivEXT},
#endif
//####glSecondaryColor3usEXT
#ifdef glSecondaryColor3usEXT
	{"glSecondaryColor3usEXT", luaglew_glSecondaryColor3usEXT},
#endif
//####glSecondaryColor3usvEXT
#ifdef glSecondaryColor3usvEXT
	{"glSecondaryColor3usvEXT", luaglew_glSecondaryColor3usvEXT},
#endif
//####glSecondaryColorPointerEXT
#ifdef glSecondaryColorPointerEXT
	{"glSecondaryColorPointerEXT", luaglew_glSecondaryColorPointerEXT},
#endif
//####glTexBufferEXT
#ifdef glTexBufferEXT
	{"glTexBufferEXT", luaglew_glTexBufferEXT},
#endif
//####glTexParameterIivEXT
#ifdef glTexParameterIivEXT
	{"glTexParameterIivEXT", luaglew_glTexParameterIivEXT},
#endif
//####glTexParameterIuivEXT
#ifdef glTexParameterIuivEXT
	{"glTexParameterIuivEXT", luaglew_glTexParameterIuivEXT},
#endif
//####glGetTexParameterIivEXT
#ifdef glGetTexParameterIivEXT
	{"glGetTexParameterIivEXT", luaglew_glGetTexParameterIivEXT},
#endif
//####glGetTexParameterIuivEXT
#ifdef glGetTexParameterIuivEXT
	{"glGetTexParameterIuivEXT", luaglew_glGetTexParameterIuivEXT},
#endif
//####glClearColorIiEXT
#ifdef glClearColorIiEXT
	{"glClearColorIiEXT", luaglew_glClearColorIiEXT},
#endif
//####glClearColorIuiEXT
#ifdef glClearColorIuiEXT
	{"glClearColorIuiEXT", luaglew_glClearColorIuiEXT},
#endif
//####glGetQueryObjecti64vEXT
#ifdef glGetQueryObjecti64vEXT
	{"glGetQueryObjecti64vEXT", luaglew_glGetQueryObjecti64vEXT},
#endif
//####glGetQueryObjectui64vEXT
#ifdef glGetQueryObjectui64vEXT
	{"glGetQueryObjectui64vEXT", luaglew_glGetQueryObjectui64vEXT},
#endif
//####glBeginVertexShaderEXT
#ifdef glBeginVertexShaderEXT
	{"glBeginVertexShaderEXT", luaglew_glBeginVertexShaderEXT},
#endif
//####glEndVertexShaderEXT
#ifdef glEndVertexShaderEXT
	{"glEndVertexShaderEXT", luaglew_glEndVertexShaderEXT},
#endif
//####glBindVertexShaderEXT
#ifdef glBindVertexShaderEXT
	{"glBindVertexShaderEXT", luaglew_glBindVertexShaderEXT},
#endif
//####glGenVertexShadersEXT
#ifdef glGenVertexShadersEXT
	{"glGenVertexShadersEXT", luaglew_glGenVertexShadersEXT},
#endif
//####glDeleteVertexShaderEXT
#ifdef glDeleteVertexShaderEXT
	{"glDeleteVertexShaderEXT", luaglew_glDeleteVertexShaderEXT},
#endif
//####glShaderOp1EXT
#ifdef glShaderOp1EXT
	{"glShaderOp1EXT", luaglew_glShaderOp1EXT},
#endif
//####glShaderOp2EXT
#ifdef glShaderOp2EXT
	{"glShaderOp2EXT", luaglew_glShaderOp2EXT},
#endif
//####glShaderOp3EXT
#ifdef glShaderOp3EXT
	{"glShaderOp3EXT", luaglew_glShaderOp3EXT},
#endif
//####glSwizzleEXT
#ifdef glSwizzleEXT
	{"glSwizzleEXT", luaglew_glSwizzleEXT},
#endif
//####glWriteMaskEXT
#ifdef glWriteMaskEXT
	{"glWriteMaskEXT", luaglew_glWriteMaskEXT},
#endif
//####glInsertComponentEXT
#ifdef glInsertComponentEXT
	{"glInsertComponentEXT", luaglew_glInsertComponentEXT},
#endif
//####glExtractComponentEXT
#ifdef glExtractComponentEXT
	{"glExtractComponentEXT", luaglew_glExtractComponentEXT},
#endif
//####glGenSymbolsEXT
#ifdef glGenSymbolsEXT
	{"glGenSymbolsEXT", luaglew_glGenSymbolsEXT},
#endif
//####glSetInvariantEXT
#ifdef glSetInvariantEXT
	{"glSetInvariantEXT", luaglew_glSetInvariantEXT},
#endif
//####glSetLocalConstantEXT
#ifdef glSetLocalConstantEXT
	{"glSetLocalConstantEXT", luaglew_glSetLocalConstantEXT},
#endif
//####glVariantbvEXT
#ifdef glVariantbvEXT
	{"glVariantbvEXT", luaglew_glVariantbvEXT},
#endif
//####glVariantsvEXT
#ifdef glVariantsvEXT
	{"glVariantsvEXT", luaglew_glVariantsvEXT},
#endif
//####glVariantivEXT
#ifdef glVariantivEXT
	{"glVariantivEXT", luaglew_glVariantivEXT},
#endif
//####glVariantfvEXT
#ifdef glVariantfvEXT
	{"glVariantfvEXT", luaglew_glVariantfvEXT},
#endif
//####glVariantdvEXT
#ifdef glVariantdvEXT
	{"glVariantdvEXT", luaglew_glVariantdvEXT},
#endif
//####glVariantubvEXT
#ifdef glVariantubvEXT
	{"glVariantubvEXT", luaglew_glVariantubvEXT},
#endif
//####glVariantusvEXT
#ifdef glVariantusvEXT
	{"glVariantusvEXT", luaglew_glVariantusvEXT},
#endif
//####glVariantuivEXT
#ifdef glVariantuivEXT
	{"glVariantuivEXT", luaglew_glVariantuivEXT},
#endif
//####glVariantPointerEXT
#ifdef glVariantPointerEXT
	{"glVariantPointerEXT", luaglew_glVariantPointerEXT},
#endif
//####glEnableVariantClientStateEXT
#ifdef glEnableVariantClientStateEXT
	{"glEnableVariantClientStateEXT", luaglew_glEnableVariantClientStateEXT},
#endif
//####glDisableVariantClientStateEXT
#ifdef glDisableVariantClientStateEXT
	{"glDisableVariantClientStateEXT", luaglew_glDisableVariantClientStateEXT},
#endif
//####glBindLightParameterEXT
#ifdef glBindLightParameterEXT
	{"glBindLightParameterEXT", luaglew_glBindLightParameterEXT},
#endif
//####glBindMaterialParameterEXT
#ifdef glBindMaterialParameterEXT
	{"glBindMaterialParameterEXT", luaglew_glBindMaterialParameterEXT},
#endif
//####glBindTexGenParameterEXT
#ifdef glBindTexGenParameterEXT
	{"glBindTexGenParameterEXT", luaglew_glBindTexGenParameterEXT},
#endif
//####glBindTextureUnitParameterEXT
#ifdef glBindTextureUnitParameterEXT
	{"glBindTextureUnitParameterEXT", luaglew_glBindTextureUnitParameterEXT},
#endif
//####glBindParameterEXT
#ifdef glBindParameterEXT
	{"glBindParameterEXT", luaglew_glBindParameterEXT},
#endif
//####glIsVariantEnabledEXT
#ifdef glIsVariantEnabledEXT
	{"glIsVariantEnabledEXT", luaglew_glIsVariantEnabledEXT},
#endif
//####glGetVariantBooleanvEXT
#ifdef glGetVariantBooleanvEXT
	{"glGetVariantBooleanvEXT", luaglew_glGetVariantBooleanvEXT},
#endif
//####glGetVariantIntegervEXT
#ifdef glGetVariantIntegervEXT
	{"glGetVariantIntegervEXT", luaglew_glGetVariantIntegervEXT},
#endif
//####glGetVariantFloatvEXT
#ifdef glGetVariantFloatvEXT
	{"glGetVariantFloatvEXT", luaglew_glGetVariantFloatvEXT},
#endif
//####glGetVariantPointervEXT
#ifdef glGetVariantPointervEXT
	{"glGetVariantPointervEXT", luaglew_glGetVariantPointervEXT},
#endif
//####glGetInvariantBooleanvEXT
#ifdef glGetInvariantBooleanvEXT
	{"glGetInvariantBooleanvEXT", luaglew_glGetInvariantBooleanvEXT},
#endif
//####glGetInvariantIntegervEXT
#ifdef glGetInvariantIntegervEXT
	{"glGetInvariantIntegervEXT", luaglew_glGetInvariantIntegervEXT},
#endif
//####glGetInvariantFloatvEXT
#ifdef glGetInvariantFloatvEXT
	{"glGetInvariantFloatvEXT", luaglew_glGetInvariantFloatvEXT},
#endif
//####glGetLocalConstantBooleanvEXT
#ifdef glGetLocalConstantBooleanvEXT
	{"glGetLocalConstantBooleanvEXT", luaglew_glGetLocalConstantBooleanvEXT},
#endif
//####glGetLocalConstantIntegervEXT
#ifdef glGetLocalConstantIntegervEXT
	{"glGetLocalConstantIntegervEXT", luaglew_glGetLocalConstantIntegervEXT},
#endif
//####glGetLocalConstantFloatvEXT
#ifdef glGetLocalConstantFloatvEXT
	{"glGetLocalConstantFloatvEXT", luaglew_glGetLocalConstantFloatvEXT},
#endif
//####glBufferRegionEnabledEXT
#ifdef glBufferRegionEnabledEXT
	{"glBufferRegionEnabledEXT", luaglew_glBufferRegionEnabledEXT},
#endif
//####glNewBufferRegionEXT
#ifdef glNewBufferRegionEXT
	{"glNewBufferRegionEXT", luaglew_glNewBufferRegionEXT},
#endif
//####glDeleteBufferRegionEXT
#ifdef glDeleteBufferRegionEXT
	{"glDeleteBufferRegionEXT", luaglew_glDeleteBufferRegionEXT},
#endif
//####glReadBufferRegionEXT
#ifdef glReadBufferRegionEXT
	{"glReadBufferRegionEXT", luaglew_glReadBufferRegionEXT},
#endif
//####glDrawBufferRegionEXT
#ifdef glDrawBufferRegionEXT
	{"glDrawBufferRegionEXT", luaglew_glDrawBufferRegionEXT},
#endif
//####glDepthRangedNV
#ifdef glDepthRangedNV
	{"glDepthRangedNV", luaglew_glDepthRangedNV},
#endif
//####glClearDepthdNV
#ifdef glClearDepthdNV
	{"glClearDepthdNV", luaglew_glClearDepthdNV},
#endif
//####glDepthBoundsdNV
#ifdef glDepthBoundsdNV
	{"glDepthBoundsdNV", luaglew_glDepthBoundsdNV},
#endif
//####glRenderbufferStorageMultisampleCoverageNV
#ifdef glRenderbufferStorageMultisampleCoverageNV
	{"glRenderbufferStorageMultisampleCoverageNV", luaglew_glRenderbufferStorageMultisampleCoverageNV},
#endif
//####glProgramVertexLimitNV
#ifdef glProgramVertexLimitNV
	{"glProgramVertexLimitNV", luaglew_glProgramVertexLimitNV},
#endif
//####glProgramLocalParameterI4iNV
#ifdef glProgramLocalParameterI4iNV
	{"glProgramLocalParameterI4iNV", luaglew_glProgramLocalParameterI4iNV},
#endif
//####glProgramLocalParameterI4ivNV
#ifdef glProgramLocalParameterI4ivNV
	{"glProgramLocalParameterI4ivNV", luaglew_glProgramLocalParameterI4ivNV},
#endif
//####glProgramLocalParametersI4ivNV
#ifdef glProgramLocalParametersI4ivNV
	{"glProgramLocalParametersI4ivNV", luaglew_glProgramLocalParametersI4ivNV},
#endif
//####glProgramLocalParameterI4uiNV
#ifdef glProgramLocalParameterI4uiNV
	{"glProgramLocalParameterI4uiNV", luaglew_glProgramLocalParameterI4uiNV},
#endif
//####glProgramLocalParameterI4uivNV
#ifdef glProgramLocalParameterI4uivNV
	{"glProgramLocalParameterI4uivNV", luaglew_glProgramLocalParameterI4uivNV},
#endif
//####glProgramLocalParametersI4uivNV
#ifdef glProgramLocalParametersI4uivNV
	{"glProgramLocalParametersI4uivNV", luaglew_glProgramLocalParametersI4uivNV},
#endif
//####glProgramEnvParameterI4iNV
#ifdef glProgramEnvParameterI4iNV
	{"glProgramEnvParameterI4iNV", luaglew_glProgramEnvParameterI4iNV},
#endif
//####glProgramEnvParameterI4ivNV
#ifdef glProgramEnvParameterI4ivNV
	{"glProgramEnvParameterI4ivNV", luaglew_glProgramEnvParameterI4ivNV},
#endif
//####glProgramEnvParametersI4ivNV
#ifdef glProgramEnvParametersI4ivNV
	{"glProgramEnvParametersI4ivNV", luaglew_glProgramEnvParametersI4ivNV},
#endif
//####glProgramEnvParameterI4uiNV
#ifdef glProgramEnvParameterI4uiNV
	{"glProgramEnvParameterI4uiNV", luaglew_glProgramEnvParameterI4uiNV},
#endif
//####glProgramEnvParameterI4uivNV
#ifdef glProgramEnvParameterI4uivNV
	{"glProgramEnvParameterI4uivNV", luaglew_glProgramEnvParameterI4uivNV},
#endif
//####glProgramEnvParametersI4uivNV
#ifdef glProgramEnvParametersI4uivNV
	{"glProgramEnvParametersI4uivNV", luaglew_glProgramEnvParametersI4uivNV},
#endif
//####glProgramBufferParametersfvNV
#ifdef glProgramBufferParametersfvNV
	{"glProgramBufferParametersfvNV", luaglew_glProgramBufferParametersfvNV},
#endif
//####glProgramBufferParametersIivNV
#ifdef glProgramBufferParametersIivNV
	{"glProgramBufferParametersIivNV", luaglew_glProgramBufferParametersIivNV},
#endif
//####glProgramBufferParametersIuivNV
#ifdef glProgramBufferParametersIuivNV
	{"glProgramBufferParametersIuivNV", luaglew_glProgramBufferParametersIuivNV},
#endif
//####glGetVideoi64vNV
#ifdef glGetVideoi64vNV
	{"glGetVideoi64vNV", luaglew_glGetVideoi64vNV},
#endif
//####glGetVideoivNV
#ifdef glGetVideoivNV
	{"glGetVideoivNV", luaglew_glGetVideoivNV},
#endif
//####glGetVideoui64vNV
#ifdef glGetVideoui64vNV
	{"glGetVideoui64vNV", luaglew_glGetVideoui64vNV},
#endif
//####glGetVideouivNV
#ifdef glGetVideouivNV
	{"glGetVideouivNV", luaglew_glGetVideouivNV},
#endif
//####glPresentFrameDualFillNV
#ifdef glPresentFrameDualFillNV
	{"glPresentFrameDualFillNV", luaglew_glPresentFrameDualFillNV},
#endif
//####glPresentFrameKeyedNV
#ifdef glPresentFrameKeyedNV
	{"glPresentFrameKeyedNV", luaglew_glPresentFrameKeyedNV},
#endif
//####glBeginTransformFeedbackNV
#ifdef glBeginTransformFeedbackNV
	{"glBeginTransformFeedbackNV", luaglew_glBeginTransformFeedbackNV},
#endif
//####glEndTransformFeedbackNV
#ifdef glEndTransformFeedbackNV
	{"glEndTransformFeedbackNV", luaglew_glEndTransformFeedbackNV},
#endif
//####glTransformFeedbackAttribsNV
#ifdef glTransformFeedbackAttribsNV
	{"glTransformFeedbackAttribsNV", luaglew_glTransformFeedbackAttribsNV},
#endif
//####glBindBufferRangeNV
#ifdef glBindBufferRangeNV
	{"glBindBufferRangeNV", luaglew_glBindBufferRangeNV},
#endif
//####glBindBufferOffsetNV
#ifdef glBindBufferOffsetNV
	{"glBindBufferOffsetNV", luaglew_glBindBufferOffsetNV},
#endif
//####glBindBufferBaseNV
#ifdef glBindBufferBaseNV
	{"glBindBufferBaseNV", luaglew_glBindBufferBaseNV},
#endif
//####glTransformFeedbackVaryingsNV
#ifdef glTransformFeedbackVaryingsNV
	{"glTransformFeedbackVaryingsNV", luaglew_glTransformFeedbackVaryingsNV},
#endif
//####glActiveVaryingNV
#ifdef glActiveVaryingNV
	{"glActiveVaryingNV", luaglew_glActiveVaryingNV},
#endif
//####glGetVaryingLocationNV
#ifdef glGetVaryingLocationNV
	{"glGetVaryingLocationNV", luaglew_glGetVaryingLocationNV},
#endif
//####glGetActiveVaryingNV
#ifdef glGetActiveVaryingNV
	{"glGetActiveVaryingNV", luaglew_glGetActiveVaryingNV},
#endif
//####glGetTransformFeedbackVaryingNV
#ifdef glGetTransformFeedbackVaryingNV
	{"glGetTransformFeedbackVaryingNV", luaglew_glGetTransformFeedbackVaryingNV},
#endif
//####glVDPAUFiniNV
#ifdef glVDPAUFiniNV
	{"glVDPAUFiniNV", luaglew_glVDPAUFiniNV},
#endif
//####glVDPAUInitNV
#ifdef glVDPAUInitNV
	{"glVDPAUInitNV", luaglew_glVDPAUInitNV},
#endif
//####glVDPAUMapSurfacesNV
#ifdef glVDPAUMapSurfacesNV
	{"glVDPAUMapSurfacesNV", luaglew_glVDPAUMapSurfacesNV},
#endif
//####glVDPAURegisterOutputSurfaceNV
#ifdef glVDPAURegisterOutputSurfaceNV
	{"glVDPAURegisterOutputSurfaceNV", luaglew_glVDPAURegisterOutputSurfaceNV},
#endif
//####glVDPAURegisterVideoSurfaceNV
#ifdef glVDPAURegisterVideoSurfaceNV
	{"glVDPAURegisterVideoSurfaceNV", luaglew_glVDPAURegisterVideoSurfaceNV},
#endif
//####glVDPAUUnmapSurfacesNV
#ifdef glVDPAUUnmapSurfacesNV
	{"glVDPAUUnmapSurfacesNV", luaglew_glVDPAUUnmapSurfacesNV},
#endif
//####glReadVideoPixelsSUN
#ifdef glReadVideoPixelsSUN
	{"glReadVideoPixelsSUN", luaglew_glReadVideoPixelsSUN},
#endif
//####glDrawRangeElements
#ifdef glDrawRangeElements
	{"glDrawRangeElements", luaglew_glDrawRangeElements},
#endif
//####glTexImage3D
#ifdef glTexImage3D
	{"glTexImage3D", luaglew_glTexImage3D},
#endif
//####glTexSubImage3D
#ifdef glTexSubImage3D
	{"glTexSubImage3D", luaglew_glTexSubImage3D},
#endif
//####glCopyTexSubImage3D
#ifdef glCopyTexSubImage3D
	{"glCopyTexSubImage3D", luaglew_glCopyTexSubImage3D},
#endif
//####glActiveTexture
#ifdef glActiveTexture
	{"glActiveTexture", luaglew_glActiveTexture},
#endif
//####glClientActiveTexture
#ifdef glClientActiveTexture
	{"glClientActiveTexture", luaglew_glClientActiveTexture},
#endif
//####glCompressedTexImage1D
#ifdef glCompressedTexImage1D
	{"glCompressedTexImage1D", luaglew_glCompressedTexImage1D},
#endif
//####glCompressedTexImage2D
#ifdef glCompressedTexImage2D
	{"glCompressedTexImage2D", luaglew_glCompressedTexImage2D},
#endif
//####glCompressedTexImage3D
#ifdef glCompressedTexImage3D
	{"glCompressedTexImage3D", luaglew_glCompressedTexImage3D},
#endif
//####glCompressedTexSubImage1D
#ifdef glCompressedTexSubImage1D
	{"glCompressedTexSubImage1D", luaglew_glCompressedTexSubImage1D},
#endif
//####glCompressedTexSubImage2D
#ifdef glCompressedTexSubImage2D
	{"glCompressedTexSubImage2D", luaglew_glCompressedTexSubImage2D},
#endif
//####glCompressedTexSubImage3D
#ifdef glCompressedTexSubImage3D
	{"glCompressedTexSubImage3D", luaglew_glCompressedTexSubImage3D},
#endif
//####glGetCompressedTexImage
#ifdef glGetCompressedTexImage
	{"glGetCompressedTexImage", luaglew_glGetCompressedTexImage},
#endif
//####glLoadTransposeMatrixd
#ifdef glLoadTransposeMatrixd
	{"glLoadTransposeMatrixd", luaglew_glLoadTransposeMatrixd},
#endif
//####glLoadTransposeMatrixf
#ifdef glLoadTransposeMatrixf
	{"glLoadTransposeMatrixf", luaglew_glLoadTransposeMatrixf},
#endif
//####glMultTransposeMatrixd
#ifdef glMultTransposeMatrixd
	{"glMultTransposeMatrixd", luaglew_glMultTransposeMatrixd},
#endif
//####glMultTransposeMatrixf
#ifdef glMultTransposeMatrixf
	{"glMultTransposeMatrixf", luaglew_glMultTransposeMatrixf},
#endif
//####glMultiTexCoord1d
#ifdef glMultiTexCoord1d
	{"glMultiTexCoord1d", luaglew_glMultiTexCoord1d},
#endif
//####glMultiTexCoord1dv
#ifdef glMultiTexCoord1dv
	{"glMultiTexCoord1dv", luaglew_glMultiTexCoord1dv},
#endif
//####glMultiTexCoord1f
#ifdef glMultiTexCoord1f
	{"glMultiTexCoord1f", luaglew_glMultiTexCoord1f},
#endif
//####glMultiTexCoord1fv
#ifdef glMultiTexCoord1fv
	{"glMultiTexCoord1fv", luaglew_glMultiTexCoord1fv},
#endif
//####glMultiTexCoord1i
#ifdef glMultiTexCoord1i
	{"glMultiTexCoord1i", luaglew_glMultiTexCoord1i},
#endif
//####glMultiTexCoord1iv
#ifdef glMultiTexCoord1iv
	{"glMultiTexCoord1iv", luaglew_glMultiTexCoord1iv},
#endif
//####glMultiTexCoord1s
#ifdef glMultiTexCoord1s
	{"glMultiTexCoord1s", luaglew_glMultiTexCoord1s},
#endif
//####glMultiTexCoord1sv
#ifdef glMultiTexCoord1sv
	{"glMultiTexCoord1sv", luaglew_glMultiTexCoord1sv},
#endif
//####glMultiTexCoord2d
#ifdef glMultiTexCoord2d
	{"glMultiTexCoord2d", luaglew_glMultiTexCoord2d},
#endif
//####glMultiTexCoord2dv
#ifdef glMultiTexCoord2dv
	{"glMultiTexCoord2dv", luaglew_glMultiTexCoord2dv},
#endif
//####glMultiTexCoord2f
#ifdef glMultiTexCoord2f
	{"glMultiTexCoord2f", luaglew_glMultiTexCoord2f},
#endif
//####glMultiTexCoord2fv
#ifdef glMultiTexCoord2fv
	{"glMultiTexCoord2fv", luaglew_glMultiTexCoord2fv},
#endif
//####glMultiTexCoord2i
#ifdef glMultiTexCoord2i
	{"glMultiTexCoord2i", luaglew_glMultiTexCoord2i},
#endif
//####glMultiTexCoord2iv
#ifdef glMultiTexCoord2iv
	{"glMultiTexCoord2iv", luaglew_glMultiTexCoord2iv},
#endif
//####glMultiTexCoord2s
#ifdef glMultiTexCoord2s
	{"glMultiTexCoord2s", luaglew_glMultiTexCoord2s},
#endif
//####glMultiTexCoord2sv
#ifdef glMultiTexCoord2sv
	{"glMultiTexCoord2sv", luaglew_glMultiTexCoord2sv},
#endif
//####glMultiTexCoord3d
#ifdef glMultiTexCoord3d
	{"glMultiTexCoord3d", luaglew_glMultiTexCoord3d},
#endif
//####glMultiTexCoord3dv
#ifdef glMultiTexCoord3dv
	{"glMultiTexCoord3dv", luaglew_glMultiTexCoord3dv},
#endif
//####glMultiTexCoord3f
#ifdef glMultiTexCoord3f
	{"glMultiTexCoord3f", luaglew_glMultiTexCoord3f},
#endif
//####glMultiTexCoord3fv
#ifdef glMultiTexCoord3fv
	{"glMultiTexCoord3fv", luaglew_glMultiTexCoord3fv},
#endif
//####glMultiTexCoord3i
#ifdef glMultiTexCoord3i
	{"glMultiTexCoord3i", luaglew_glMultiTexCoord3i},
#endif
//####glMultiTexCoord3iv
#ifdef glMultiTexCoord3iv
	{"glMultiTexCoord3iv", luaglew_glMultiTexCoord3iv},
#endif
//####glMultiTexCoord3s
#ifdef glMultiTexCoord3s
	{"glMultiTexCoord3s", luaglew_glMultiTexCoord3s},
#endif
//####glMultiTexCoord3sv
#ifdef glMultiTexCoord3sv
	{"glMultiTexCoord3sv", luaglew_glMultiTexCoord3sv},
#endif
//####glMultiTexCoord4d
#ifdef glMultiTexCoord4d
	{"glMultiTexCoord4d", luaglew_glMultiTexCoord4d},
#endif
//####glMultiTexCoord4dv
#ifdef glMultiTexCoord4dv
	{"glMultiTexCoord4dv", luaglew_glMultiTexCoord4dv},
#endif
//####glMultiTexCoord4f
#ifdef glMultiTexCoord4f
	{"glMultiTexCoord4f", luaglew_glMultiTexCoord4f},
#endif
//####glMultiTexCoord4fv
#ifdef glMultiTexCoord4fv
	{"glMultiTexCoord4fv", luaglew_glMultiTexCoord4fv},
#endif
//####glMultiTexCoord4i
#ifdef glMultiTexCoord4i
	{"glMultiTexCoord4i", luaglew_glMultiTexCoord4i},
#endif
//####glMultiTexCoord4iv
#ifdef glMultiTexCoord4iv
	{"glMultiTexCoord4iv", luaglew_glMultiTexCoord4iv},
#endif
//####glMultiTexCoord4s
#ifdef glMultiTexCoord4s
	{"glMultiTexCoord4s", luaglew_glMultiTexCoord4s},
#endif
//####glMultiTexCoord4sv
#ifdef glMultiTexCoord4sv
	{"glMultiTexCoord4sv", luaglew_glMultiTexCoord4sv},
#endif
//####glSampleCoverage
#ifdef glSampleCoverage
	{"glSampleCoverage", luaglew_glSampleCoverage},
#endif
//####glBlendEquation
#ifdef glBlendEquation
	{"glBlendEquation", luaglew_glBlendEquation},
#endif
//####glBlendColor
#ifdef glBlendColor
	{"glBlendColor", luaglew_glBlendColor},
#endif
//####glFogCoordf
#ifdef glFogCoordf
	{"glFogCoordf", luaglew_glFogCoordf},
#endif
//####glFogCoordfv
#ifdef glFogCoordfv
	{"glFogCoordfv", luaglew_glFogCoordfv},
#endif
//####glFogCoordd
#ifdef glFogCoordd
	{"glFogCoordd", luaglew_glFogCoordd},
#endif
//####glFogCoorddv
#ifdef glFogCoorddv
	{"glFogCoorddv", luaglew_glFogCoorddv},
#endif
//####glFogCoordPointer
#ifdef glFogCoordPointer
	{"glFogCoordPointer", luaglew_glFogCoordPointer},
#endif
//####glMultiDrawArrays
#ifdef glMultiDrawArrays
	{"glMultiDrawArrays", luaglew_glMultiDrawArrays},
#endif
//####glMultiDrawElements
#ifdef glMultiDrawElements
	{"glMultiDrawElements", luaglew_glMultiDrawElements},
#endif
//####glPointParameteri
#ifdef glPointParameteri
	{"glPointParameteri", luaglew_glPointParameteri},
#endif
//####glPointParameteriv
#ifdef glPointParameteriv
	{"glPointParameteriv", luaglew_glPointParameteriv},
#endif
//####glPointParameterf
#ifdef glPointParameterf
	{"glPointParameterf", luaglew_glPointParameterf},
#endif
//####glPointParameterfv
#ifdef glPointParameterfv
	{"glPointParameterfv", luaglew_glPointParameterfv},
#endif
//####glSecondaryColor3b
#ifdef glSecondaryColor3b
	{"glSecondaryColor3b", luaglew_glSecondaryColor3b},
#endif
//####glSecondaryColor3bv
#ifdef glSecondaryColor3bv
	{"glSecondaryColor3bv", luaglew_glSecondaryColor3bv},
#endif
//####glSecondaryColor3d
#ifdef glSecondaryColor3d
	{"glSecondaryColor3d", luaglew_glSecondaryColor3d},
#endif
//####glSecondaryColor3dv
#ifdef glSecondaryColor3dv
	{"glSecondaryColor3dv", luaglew_glSecondaryColor3dv},
#endif
//####glSecondaryColor3f
#ifdef glSecondaryColor3f
	{"glSecondaryColor3f", luaglew_glSecondaryColor3f},
#endif
//####glSecondaryColor3fv
#ifdef glSecondaryColor3fv
	{"glSecondaryColor3fv", luaglew_glSecondaryColor3fv},
#endif
//####glSecondaryColor3i
#ifdef glSecondaryColor3i
	{"glSecondaryColor3i", luaglew_glSecondaryColor3i},
#endif
//####glSecondaryColor3iv
#ifdef glSecondaryColor3iv
	{"glSecondaryColor3iv", luaglew_glSecondaryColor3iv},
#endif
//####glSecondaryColor3s
#ifdef glSecondaryColor3s
	{"glSecondaryColor3s", luaglew_glSecondaryColor3s},
#endif
//####glSecondaryColor3sv
#ifdef glSecondaryColor3sv
	{"glSecondaryColor3sv", luaglew_glSecondaryColor3sv},
#endif
//####glSecondaryColor3ub
#ifdef glSecondaryColor3ub
	{"glSecondaryColor3ub", luaglew_glSecondaryColor3ub},
#endif
//####glSecondaryColor3ubv
#ifdef glSecondaryColor3ubv
	{"glSecondaryColor3ubv", luaglew_glSecondaryColor3ubv},
#endif
//####glSecondaryColor3ui
#ifdef glSecondaryColor3ui
	{"glSecondaryColor3ui", luaglew_glSecondaryColor3ui},
#endif
//####glSecondaryColor3uiv
#ifdef glSecondaryColor3uiv
	{"glSecondaryColor3uiv", luaglew_glSecondaryColor3uiv},
#endif
//####glSecondaryColor3us
#ifdef glSecondaryColor3us
	{"glSecondaryColor3us", luaglew_glSecondaryColor3us},
#endif
//####glSecondaryColor3usv
#ifdef glSecondaryColor3usv
	{"glSecondaryColor3usv", luaglew_glSecondaryColor3usv},
#endif
//####glSecondaryColorPointer
#ifdef glSecondaryColorPointer
	{"glSecondaryColorPointer", luaglew_glSecondaryColorPointer},
#endif
//####glBlendFuncSeparate
#ifdef glBlendFuncSeparate
	{"glBlendFuncSeparate", luaglew_glBlendFuncSeparate},
#endif
//####glWindowPos2d
#ifdef glWindowPos2d
	{"glWindowPos2d", luaglew_glWindowPos2d},
#endif
//####glWindowPos2f
#ifdef glWindowPos2f
	{"glWindowPos2f", luaglew_glWindowPos2f},
#endif
//####glWindowPos2i
#ifdef glWindowPos2i
	{"glWindowPos2i", luaglew_glWindowPos2i},
#endif
//####glWindowPos2s
#ifdef glWindowPos2s
	{"glWindowPos2s", luaglew_glWindowPos2s},
#endif
//####glWindowPos2dv
#ifdef glWindowPos2dv
	{"glWindowPos2dv", luaglew_glWindowPos2dv},
#endif
//####glWindowPos2fv
#ifdef glWindowPos2fv
	{"glWindowPos2fv", luaglew_glWindowPos2fv},
#endif
//####glWindowPos2iv
#ifdef glWindowPos2iv
	{"glWindowPos2iv", luaglew_glWindowPos2iv},
#endif
//####glWindowPos2sv
#ifdef glWindowPos2sv
	{"glWindowPos2sv", luaglew_glWindowPos2sv},
#endif
//####glWindowPos3d
#ifdef glWindowPos3d
	{"glWindowPos3d", luaglew_glWindowPos3d},
#endif
//####glWindowPos3f
#ifdef glWindowPos3f
	{"glWindowPos3f", luaglew_glWindowPos3f},
#endif
//####glWindowPos3i
#ifdef glWindowPos3i
	{"glWindowPos3i", luaglew_glWindowPos3i},
#endif
//####glWindowPos3s
#ifdef glWindowPos3s
	{"glWindowPos3s", luaglew_glWindowPos3s},
#endif
//####glWindowPos3dv
#ifdef glWindowPos3dv
	{"glWindowPos3dv", luaglew_glWindowPos3dv},
#endif
//####glWindowPos3fv
#ifdef glWindowPos3fv
	{"glWindowPos3fv", luaglew_glWindowPos3fv},
#endif
//####glWindowPos3iv
#ifdef glWindowPos3iv
	{"glWindowPos3iv", luaglew_glWindowPos3iv},
#endif
//####glWindowPos3sv
#ifdef glWindowPos3sv
	{"glWindowPos3sv", luaglew_glWindowPos3sv},
#endif
//####glGenQueries
#ifdef glGenQueries
	{"glGenQueries", luaglew_glGenQueries},
#endif
//####glDeleteQueries
#ifdef glDeleteQueries
	{"glDeleteQueries", luaglew_glDeleteQueries},
#endif
//####glIsQuery
#ifdef glIsQuery
	{"glIsQuery", luaglew_glIsQuery},
#endif
//####glBeginQuery
#ifdef glBeginQuery
	{"glBeginQuery", luaglew_glBeginQuery},
#endif
//####glEndQuery
#ifdef glEndQuery
	{"glEndQuery", luaglew_glEndQuery},
#endif
//####glGetQueryiv
#ifdef glGetQueryiv
	{"glGetQueryiv", luaglew_glGetQueryiv},
#endif
//####glGetQueryObjectiv
#ifdef glGetQueryObjectiv
	{"glGetQueryObjectiv", luaglew_glGetQueryObjectiv},
#endif
//####glGetQueryObjectuiv
#ifdef glGetQueryObjectuiv
	{"glGetQueryObjectuiv", luaglew_glGetQueryObjectuiv},
#endif
//####glBindBuffer
#ifdef glBindBuffer
	{"glBindBuffer", luaglew_glBindBuffer},
#endif
//####glDeleteBuffers
#ifdef glDeleteBuffers
	{"glDeleteBuffers", luaglew_glDeleteBuffers},
#endif
//####glGenBuffers
#ifdef glGenBuffers
	{"glGenBuffers", luaglew_glGenBuffers},
#endif
//####glIsBuffer
#ifdef glIsBuffer
	{"glIsBuffer", luaglew_glIsBuffer},
#endif
//####glBufferData
#ifdef glBufferData
	{"glBufferData", luaglew_glBufferData},
#endif
//####glBufferSubData
#ifdef glBufferSubData
	{"glBufferSubData", luaglew_glBufferSubData},
#endif
//####glGetBufferSubData
#ifdef glGetBufferSubData
	{"glGetBufferSubData", luaglew_glGetBufferSubData},
#endif
//####glMapBuffer
#ifdef glMapBuffer
	{"glMapBuffer", luaglew_glMapBuffer},
#endif
//####glUnmapBuffer
#ifdef glUnmapBuffer
	{"glUnmapBuffer", luaglew_glUnmapBuffer},
#endif
//####glGetBufferParameteriv
#ifdef glGetBufferParameteriv
	{"glGetBufferParameteriv", luaglew_glGetBufferParameteriv},
#endif
//####glGetBufferPointerv
#ifdef glGetBufferPointerv
	{"glGetBufferPointerv", luaglew_glGetBufferPointerv},
#endif
//####glBlendEquationSeparate
#ifdef glBlendEquationSeparate
	{"glBlendEquationSeparate", luaglew_glBlendEquationSeparate},
#endif
//####glDrawBuffers
#ifdef glDrawBuffers
	{"glDrawBuffers", luaglew_glDrawBuffers},
#endif
//####glStencilOpSeparate
#ifdef glStencilOpSeparate
	{"glStencilOpSeparate", luaglew_glStencilOpSeparate},
#endif
//####glStencilFuncSeparate
#ifdef glStencilFuncSeparate
	{"glStencilFuncSeparate", luaglew_glStencilFuncSeparate},
#endif
//####glStencilMaskSeparate
#ifdef glStencilMaskSeparate
	{"glStencilMaskSeparate", luaglew_glStencilMaskSeparate},
#endif
//####glAttachShader
#ifdef glAttachShader
	{"glAttachShader", luaglew_glAttachShader},
#endif
//####glBindAttribLocation
#ifdef glBindAttribLocation
	{"glBindAttribLocation", luaglew_glBindAttribLocation},
#endif
//####glCompileShader
#ifdef glCompileShader
	{"glCompileShader", luaglew_glCompileShader},
#endif
//####glCreateProgram
#ifdef glCreateProgram
	{"glCreateProgram", luaglew_glCreateProgram},
#endif
//####glCreateShader
#ifdef glCreateShader
	{"glCreateShader", luaglew_glCreateShader},
#endif
//####glDeleteProgram
#ifdef glDeleteProgram
	{"glDeleteProgram", luaglew_glDeleteProgram},
#endif
//####glDeleteShader
#ifdef glDeleteShader
	{"glDeleteShader", luaglew_glDeleteShader},
#endif
//####glDetachShader
#ifdef glDetachShader
	{"glDetachShader", luaglew_glDetachShader},
#endif
//####glDisableVertexAttribArray
#ifdef glDisableVertexAttribArray
	{"glDisableVertexAttribArray", luaglew_glDisableVertexAttribArray},
#endif
//####glEnableVertexAttribArray
#ifdef glEnableVertexAttribArray
	{"glEnableVertexAttribArray", luaglew_glEnableVertexAttribArray},
#endif
//####glGetActiveAttrib
#ifdef glGetActiveAttrib
	{"glGetActiveAttrib", luaglew_glGetActiveAttrib},
#endif
//####glGetActiveUniform
#ifdef glGetActiveUniform
	{"glGetActiveUniform", luaglew_glGetActiveUniform},
#endif
//####glGetAttachedShaders
#ifdef glGetAttachedShaders
	{"glGetAttachedShaders", luaglew_glGetAttachedShaders},
#endif
//####glGetAttribLocation
#ifdef glGetAttribLocation
	{"glGetAttribLocation", luaglew_glGetAttribLocation},
#endif
//####glGetProgramiv
#ifdef glGetProgramiv
	{"glGetProgramiv", luaglew_glGetProgramiv},
#endif
//####glGetProgramInfoLog
#ifdef glGetProgramInfoLog
	{"glGetProgramInfoLog", luaglew_glGetProgramInfoLog},
#endif
//####glGetShaderiv
#ifdef glGetShaderiv
	{"glGetShaderiv", luaglew_glGetShaderiv},
#endif
//####glGetShaderInfoLog
#ifdef glGetShaderInfoLog
	{"glGetShaderInfoLog", luaglew_glGetShaderInfoLog},
#endif
//####glShaderSource
#ifdef glShaderSource
	{"glShaderSource", luaglew_glShaderSource},
#endif
//####glGetUniformLocation
#ifdef glGetUniformLocation
	{"glGetUniformLocation", luaglew_glGetUniformLocation},
#endif
//####glGetUniformfv
#ifdef glGetUniformfv
	{"glGetUniformfv", luaglew_glGetUniformfv},
#endif
//####glGetUniformiv
#ifdef glGetUniformiv
	{"glGetUniformiv", luaglew_glGetUniformiv},
#endif
//####glGetVertexAttribdv
#ifdef glGetVertexAttribdv
	{"glGetVertexAttribdv", luaglew_glGetVertexAttribdv},
#endif
//####glGetVertexAttribfv
#ifdef glGetVertexAttribfv
	{"glGetVertexAttribfv", luaglew_glGetVertexAttribfv},
#endif
//####glGetVertexAttribiv
#ifdef glGetVertexAttribiv
	{"glGetVertexAttribiv", luaglew_glGetVertexAttribiv},
#endif
//####glGetVertexAttribPointerv
#ifdef glGetVertexAttribPointerv
	{"glGetVertexAttribPointerv", luaglew_glGetVertexAttribPointerv},
#endif
//####glIsProgram
#ifdef glIsProgram
	{"glIsProgram", luaglew_glIsProgram},
#endif
//####glIsShader
#ifdef glIsShader
	{"glIsShader", luaglew_glIsShader},
#endif
//####glLinkProgram
#ifdef glLinkProgram
	{"glLinkProgram", luaglew_glLinkProgram},
#endif
//####glGetShaderSource
#ifdef glGetShaderSource
	{"glGetShaderSource", luaglew_glGetShaderSource},
#endif
//####glUseProgram
#ifdef glUseProgram
	{"glUseProgram", luaglew_glUseProgram},
#endif
//####glUniform1f
#ifdef glUniform1f
	{"glUniform1f", luaglew_glUniform1f},
#endif
//####glUniform1fv
#ifdef glUniform1fv
	{"glUniform1fv", luaglew_glUniform1fv},
#endif
//####glUniform1i
#ifdef glUniform1i
	{"glUniform1i", luaglew_glUniform1i},
#endif
//####glUniform1iv
#ifdef glUniform1iv
	{"glUniform1iv", luaglew_glUniform1iv},
#endif
//####glUniform2f
#ifdef glUniform2f
	{"glUniform2f", luaglew_glUniform2f},
#endif
//####glUniform2fv
#ifdef glUniform2fv
	{"glUniform2fv", luaglew_glUniform2fv},
#endif
//####glUniform2i
#ifdef glUniform2i
	{"glUniform2i", luaglew_glUniform2i},
#endif
//####glUniform2iv
#ifdef glUniform2iv
	{"glUniform2iv", luaglew_glUniform2iv},
#endif
//####glUniform3f
#ifdef glUniform3f
	{"glUniform3f", luaglew_glUniform3f},
#endif
//####glUniform3fv
#ifdef glUniform3fv
	{"glUniform3fv", luaglew_glUniform3fv},
#endif
//####glUniform3i
#ifdef glUniform3i
	{"glUniform3i", luaglew_glUniform3i},
#endif
//####glUniform3iv
#ifdef glUniform3iv
	{"glUniform3iv", luaglew_glUniform3iv},
#endif
//####glUniform4f
#ifdef glUniform4f
	{"glUniform4f", luaglew_glUniform4f},
#endif
//####glUniform4fv
#ifdef glUniform4fv
	{"glUniform4fv", luaglew_glUniform4fv},
#endif
//####glUniform4i
#ifdef glUniform4i
	{"glUniform4i", luaglew_glUniform4i},
#endif
//####glUniform4iv
#ifdef glUniform4iv
	{"glUniform4iv", luaglew_glUniform4iv},
#endif
//####glUniformMatrix2fv
#ifdef glUniformMatrix2fv
	{"glUniformMatrix2fv", luaglew_glUniformMatrix2fv},
#endif
//####glUniformMatrix3fv
#ifdef glUniformMatrix3fv
	{"glUniformMatrix3fv", luaglew_glUniformMatrix3fv},
#endif
//####glUniformMatrix4fv
#ifdef glUniformMatrix4fv
	{"glUniformMatrix4fv", luaglew_glUniformMatrix4fv},
#endif
//####glValidateProgram
#ifdef glValidateProgram
	{"glValidateProgram", luaglew_glValidateProgram},
#endif
//####glVertexAttrib1d
#ifdef glVertexAttrib1d
	{"glVertexAttrib1d", luaglew_glVertexAttrib1d},
#endif
//####glVertexAttrib1dv
#ifdef glVertexAttrib1dv
	{"glVertexAttrib1dv", luaglew_glVertexAttrib1dv},
#endif
//####glVertexAttrib1f
#ifdef glVertexAttrib1f
	{"glVertexAttrib1f", luaglew_glVertexAttrib1f},
#endif
//####glVertexAttrib1fv
#ifdef glVertexAttrib1fv
	{"glVertexAttrib1fv", luaglew_glVertexAttrib1fv},
#endif
//####glVertexAttrib1s
#ifdef glVertexAttrib1s
	{"glVertexAttrib1s", luaglew_glVertexAttrib1s},
#endif
//####glVertexAttrib1sv
#ifdef glVertexAttrib1sv
	{"glVertexAttrib1sv", luaglew_glVertexAttrib1sv},
#endif
//####glVertexAttrib2d
#ifdef glVertexAttrib2d
	{"glVertexAttrib2d", luaglew_glVertexAttrib2d},
#endif
//####glVertexAttrib2dv
#ifdef glVertexAttrib2dv
	{"glVertexAttrib2dv", luaglew_glVertexAttrib2dv},
#endif
//####glVertexAttrib2f
#ifdef glVertexAttrib2f
	{"glVertexAttrib2f", luaglew_glVertexAttrib2f},
#endif
//####glVertexAttrib2fv
#ifdef glVertexAttrib2fv
	{"glVertexAttrib2fv", luaglew_glVertexAttrib2fv},
#endif
//####glVertexAttrib2s
#ifdef glVertexAttrib2s
	{"glVertexAttrib2s", luaglew_glVertexAttrib2s},
#endif
//####glVertexAttrib2sv
#ifdef glVertexAttrib2sv
	{"glVertexAttrib2sv", luaglew_glVertexAttrib2sv},
#endif
//####glVertexAttrib3d
#ifdef glVertexAttrib3d
	{"glVertexAttrib3d", luaglew_glVertexAttrib3d},
#endif
//####glVertexAttrib3dv
#ifdef glVertexAttrib3dv
	{"glVertexAttrib3dv", luaglew_glVertexAttrib3dv},
#endif
//####glVertexAttrib3f
#ifdef glVertexAttrib3f
	{"glVertexAttrib3f", luaglew_glVertexAttrib3f},
#endif
//####glVertexAttrib3fv
#ifdef glVertexAttrib3fv
	{"glVertexAttrib3fv", luaglew_glVertexAttrib3fv},
#endif
//####glVertexAttrib3s
#ifdef glVertexAttrib3s
	{"glVertexAttrib3s", luaglew_glVertexAttrib3s},
#endif
//####glVertexAttrib3sv
#ifdef glVertexAttrib3sv
	{"glVertexAttrib3sv", luaglew_glVertexAttrib3sv},
#endif
//####glVertexAttrib4Nbv
#ifdef glVertexAttrib4Nbv
	{"glVertexAttrib4Nbv", luaglew_glVertexAttrib4Nbv},
#endif
//####glVertexAttrib4Niv
#ifdef glVertexAttrib4Niv
	{"glVertexAttrib4Niv", luaglew_glVertexAttrib4Niv},
#endif
//####glVertexAttrib4Nsv
#ifdef glVertexAttrib4Nsv
	{"glVertexAttrib4Nsv", luaglew_glVertexAttrib4Nsv},
#endif
//####glVertexAttrib4Nub
#ifdef glVertexAttrib4Nub
	{"glVertexAttrib4Nub", luaglew_glVertexAttrib4Nub},
#endif
//####glVertexAttrib4Nubv
#ifdef glVertexAttrib4Nubv
	{"glVertexAttrib4Nubv", luaglew_glVertexAttrib4Nubv},
#endif
//####glVertexAttrib4Nuiv
#ifdef glVertexAttrib4Nuiv
	{"glVertexAttrib4Nuiv", luaglew_glVertexAttrib4Nuiv},
#endif
//####glVertexAttrib4Nusv
#ifdef glVertexAttrib4Nusv
	{"glVertexAttrib4Nusv", luaglew_glVertexAttrib4Nusv},
#endif
//####glVertexAttrib4bv
#ifdef glVertexAttrib4bv
	{"glVertexAttrib4bv", luaglew_glVertexAttrib4bv},
#endif
//####glVertexAttrib4d
#ifdef glVertexAttrib4d
	{"glVertexAttrib4d", luaglew_glVertexAttrib4d},
#endif
//####glVertexAttrib4dv
#ifdef glVertexAttrib4dv
	{"glVertexAttrib4dv", luaglew_glVertexAttrib4dv},
#endif
//####glVertexAttrib4f
#ifdef glVertexAttrib4f
	{"glVertexAttrib4f", luaglew_glVertexAttrib4f},
#endif
//####glVertexAttrib4fv
#ifdef glVertexAttrib4fv
	{"glVertexAttrib4fv", luaglew_glVertexAttrib4fv},
#endif
//####glVertexAttrib4iv
#ifdef glVertexAttrib4iv
	{"glVertexAttrib4iv", luaglew_glVertexAttrib4iv},
#endif
//####glVertexAttrib4s
#ifdef glVertexAttrib4s
	{"glVertexAttrib4s", luaglew_glVertexAttrib4s},
#endif
//####glVertexAttrib4sv
#ifdef glVertexAttrib4sv
	{"glVertexAttrib4sv", luaglew_glVertexAttrib4sv},
#endif
//####glVertexAttrib4ubv
#ifdef glVertexAttrib4ubv
	{"glVertexAttrib4ubv", luaglew_glVertexAttrib4ubv},
#endif
//####glVertexAttrib4uiv
#ifdef glVertexAttrib4uiv
	{"glVertexAttrib4uiv", luaglew_glVertexAttrib4uiv},
#endif
//####glVertexAttrib4usv
#ifdef glVertexAttrib4usv
	{"glVertexAttrib4usv", luaglew_glVertexAttrib4usv},
#endif
//####glVertexAttribPointer
#ifdef glVertexAttribPointer
	{"glVertexAttribPointer", luaglew_glVertexAttribPointer},
#endif
//####glUniformMatrix2x3fv
#ifdef glUniformMatrix2x3fv
	{"glUniformMatrix2x3fv", luaglew_glUniformMatrix2x3fv},
#endif
//####glUniformMatrix3x2fv
#ifdef glUniformMatrix3x2fv
	{"glUniformMatrix3x2fv", luaglew_glUniformMatrix3x2fv},
#endif
//####glUniformMatrix2x4fv
#ifdef glUniformMatrix2x4fv
	{"glUniformMatrix2x4fv", luaglew_glUniformMatrix2x4fv},
#endif
//####glUniformMatrix4x2fv
#ifdef glUniformMatrix4x2fv
	{"glUniformMatrix4x2fv", luaglew_glUniformMatrix4x2fv},
#endif
//####glUniformMatrix3x4fv
#ifdef glUniformMatrix3x4fv
	{"glUniformMatrix3x4fv", luaglew_glUniformMatrix3x4fv},
#endif
//####glUniformMatrix4x3fv
#ifdef glUniformMatrix4x3fv
	{"glUniformMatrix4x3fv", luaglew_glUniformMatrix4x3fv},
#endif
//####glColorMaski
#ifdef glColorMaski
	{"glColorMaski", luaglew_glColorMaski},
#endif
//####glGetBooleani_v
#ifdef glGetBooleani_v
	{"glGetBooleani_v", luaglew_glGetBooleani_v},
#endif
//####glEnablei
#ifdef glEnablei
	{"glEnablei", luaglew_glEnablei},
#endif
//####glDisablei
#ifdef glDisablei
	{"glDisablei", luaglew_glDisablei},
#endif
//####glIsEnabledi
#ifdef glIsEnabledi
	{"glIsEnabledi", luaglew_glIsEnabledi},
#endif
//####glBeginTransformFeedback
#ifdef glBeginTransformFeedback
	{"glBeginTransformFeedback", luaglew_glBeginTransformFeedback},
#endif
//####glEndTransformFeedback
#ifdef glEndTransformFeedback
	{"glEndTransformFeedback", luaglew_glEndTransformFeedback},
#endif
//####glTransformFeedbackVaryings
#ifdef glTransformFeedbackVaryings
	{"glTransformFeedbackVaryings", luaglew_glTransformFeedbackVaryings},
#endif
//####glGetTransformFeedbackVarying
#ifdef glGetTransformFeedbackVarying
	{"glGetTransformFeedbackVarying", luaglew_glGetTransformFeedbackVarying},
#endif
//####glClampColor
#ifdef glClampColor
	{"glClampColor", luaglew_glClampColor},
#endif
//####glBeginConditionalRender
#ifdef glBeginConditionalRender
	{"glBeginConditionalRender", luaglew_glBeginConditionalRender},
#endif
//####glEndConditionalRender
#ifdef glEndConditionalRender
	{"glEndConditionalRender", luaglew_glEndConditionalRender},
#endif
//####glVertexAttribI1i
#ifdef glVertexAttribI1i
	{"glVertexAttribI1i", luaglew_glVertexAttribI1i},
#endif
//####glVertexAttribI2i
#ifdef glVertexAttribI2i
	{"glVertexAttribI2i", luaglew_glVertexAttribI2i},
#endif
//####glVertexAttribI3i
#ifdef glVertexAttribI3i
	{"glVertexAttribI3i", luaglew_glVertexAttribI3i},
#endif
//####glVertexAttribI4i
#ifdef glVertexAttribI4i
	{"glVertexAttribI4i", luaglew_glVertexAttribI4i},
#endif
//####glVertexAttribI1ui
#ifdef glVertexAttribI1ui
	{"glVertexAttribI1ui", luaglew_glVertexAttribI1ui},
#endif
//####glVertexAttribI2ui
#ifdef glVertexAttribI2ui
	{"glVertexAttribI2ui", luaglew_glVertexAttribI2ui},
#endif
//####glVertexAttribI3ui
#ifdef glVertexAttribI3ui
	{"glVertexAttribI3ui", luaglew_glVertexAttribI3ui},
#endif
//####glVertexAttribI4ui
#ifdef glVertexAttribI4ui
	{"glVertexAttribI4ui", luaglew_glVertexAttribI4ui},
#endif
//####glVertexAttribI1iv
#ifdef glVertexAttribI1iv
	{"glVertexAttribI1iv", luaglew_glVertexAttribI1iv},
#endif
//####glVertexAttribI2iv
#ifdef glVertexAttribI2iv
	{"glVertexAttribI2iv", luaglew_glVertexAttribI2iv},
#endif
//####glVertexAttribI3iv
#ifdef glVertexAttribI3iv
	{"glVertexAttribI3iv", luaglew_glVertexAttribI3iv},
#endif
//####glVertexAttribI4iv
#ifdef glVertexAttribI4iv
	{"glVertexAttribI4iv", luaglew_glVertexAttribI4iv},
#endif
//####glVertexAttribI1uiv
#ifdef glVertexAttribI1uiv
	{"glVertexAttribI1uiv", luaglew_glVertexAttribI1uiv},
#endif
//####glVertexAttribI2uiv
#ifdef glVertexAttribI2uiv
	{"glVertexAttribI2uiv", luaglew_glVertexAttribI2uiv},
#endif
//####glVertexAttribI3uiv
#ifdef glVertexAttribI3uiv
	{"glVertexAttribI3uiv", luaglew_glVertexAttribI3uiv},
#endif
//####glVertexAttribI4uiv
#ifdef glVertexAttribI4uiv
	{"glVertexAttribI4uiv", luaglew_glVertexAttribI4uiv},
#endif
//####glVertexAttribI4bv
#ifdef glVertexAttribI4bv
	{"glVertexAttribI4bv", luaglew_glVertexAttribI4bv},
#endif
//####glVertexAttribI4sv
#ifdef glVertexAttribI4sv
	{"glVertexAttribI4sv", luaglew_glVertexAttribI4sv},
#endif
//####glVertexAttribI4ubv
#ifdef glVertexAttribI4ubv
	{"glVertexAttribI4ubv", luaglew_glVertexAttribI4ubv},
#endif
//####glVertexAttribI4usv
#ifdef glVertexAttribI4usv
	{"glVertexAttribI4usv", luaglew_glVertexAttribI4usv},
#endif
//####glVertexAttribIPointer
#ifdef glVertexAttribIPointer
	{"glVertexAttribIPointer", luaglew_glVertexAttribIPointer},
#endif
//####glGetVertexAttribIiv
#ifdef glGetVertexAttribIiv
	{"glGetVertexAttribIiv", luaglew_glGetVertexAttribIiv},
#endif
//####glGetVertexAttribIuiv
#ifdef glGetVertexAttribIuiv
	{"glGetVertexAttribIuiv", luaglew_glGetVertexAttribIuiv},
#endif
//####glGetUniformuiv
#ifdef glGetUniformuiv
	{"glGetUniformuiv", luaglew_glGetUniformuiv},
#endif
//####glBindFragDataLocation
#ifdef glBindFragDataLocation
	{"glBindFragDataLocation", luaglew_glBindFragDataLocation},
#endif
//####glGetFragDataLocation
#ifdef glGetFragDataLocation
	{"glGetFragDataLocation", luaglew_glGetFragDataLocation},
#endif
//####glUniform1ui
#ifdef glUniform1ui
	{"glUniform1ui", luaglew_glUniform1ui},
#endif
//####glUniform2ui
#ifdef glUniform2ui
	{"glUniform2ui", luaglew_glUniform2ui},
#endif
//####glUniform3ui
#ifdef glUniform3ui
	{"glUniform3ui", luaglew_glUniform3ui},
#endif
//####glUniform4ui
#ifdef glUniform4ui
	{"glUniform4ui", luaglew_glUniform4ui},
#endif
//####glUniform1uiv
#ifdef glUniform1uiv
	{"glUniform1uiv", luaglew_glUniform1uiv},
#endif
//####glUniform2uiv
#ifdef glUniform2uiv
	{"glUniform2uiv", luaglew_glUniform2uiv},
#endif
//####glUniform3uiv
#ifdef glUniform3uiv
	{"glUniform3uiv", luaglew_glUniform3uiv},
#endif
//####glUniform4uiv
#ifdef glUniform4uiv
	{"glUniform4uiv", luaglew_glUniform4uiv},
#endif
//####glTexParameterIiv
#ifdef glTexParameterIiv
	{"glTexParameterIiv", luaglew_glTexParameterIiv},
#endif
//####glTexParameterIuiv
#ifdef glTexParameterIuiv
	{"glTexParameterIuiv", luaglew_glTexParameterIuiv},
#endif
//####glGetTexParameterIiv
#ifdef glGetTexParameterIiv
	{"glGetTexParameterIiv", luaglew_glGetTexParameterIiv},
#endif
//####glGetTexParameterIuiv
#ifdef glGetTexParameterIuiv
	{"glGetTexParameterIuiv", luaglew_glGetTexParameterIuiv},
#endif
//####glClearBufferiv
#ifdef glClearBufferiv
	{"glClearBufferiv", luaglew_glClearBufferiv},
#endif
//####glClearBufferuiv
#ifdef glClearBufferuiv
	{"glClearBufferuiv", luaglew_glClearBufferuiv},
#endif
//####glClearBufferfv
#ifdef glClearBufferfv
	{"glClearBufferfv", luaglew_glClearBufferfv},
#endif
//####glClearBufferfi
#ifdef glClearBufferfi
	{"glClearBufferfi", luaglew_glClearBufferfi},
#endif
//####glGetStringi
#ifdef glGetStringi
	{"glGetStringi", luaglew_glGetStringi},
#endif
//####glDrawArraysInstanced
#ifdef glDrawArraysInstanced
	{"glDrawArraysInstanced", luaglew_glDrawArraysInstanced},
#endif
//####glDrawElementsInstanced
#ifdef glDrawElementsInstanced
	{"glDrawElementsInstanced", luaglew_glDrawElementsInstanced},
#endif
//####glTexBuffer
#ifdef glTexBuffer
	{"glTexBuffer", luaglew_glTexBuffer},
#endif
//####glPrimitiveRestartIndex
#ifdef glPrimitiveRestartIndex
	{"glPrimitiveRestartIndex", luaglew_glPrimitiveRestartIndex},
#endif
//####glGetInteger64i_v
#ifdef glGetInteger64i_v
	{"glGetInteger64i_v", luaglew_glGetInteger64i_v},
#endif
//####glGetBufferParameteri64v
#ifdef glGetBufferParameteri64v
	{"glGetBufferParameteri64v", luaglew_glGetBufferParameteri64v},
#endif
//####glFramebufferTexture
#ifdef glFramebufferTexture
	{"glFramebufferTexture", luaglew_glFramebufferTexture},
#endif
//####glVertexAttribDivisor
#ifdef glVertexAttribDivisor
	{"glVertexAttribDivisor", luaglew_glVertexAttribDivisor},
#endif
//####glMinSampleShading
#ifdef glMinSampleShading
	{"glMinSampleShading", luaglew_glMinSampleShading},
#endif
//####glBlendEquationSeparatei
#ifdef glBlendEquationSeparatei
	{"glBlendEquationSeparatei", luaglew_glBlendEquationSeparatei},
#endif
//####glBlendEquationi
#ifdef glBlendEquationi
	{"glBlendEquationi", luaglew_glBlendEquationi},
#endif
//####glBlendFuncSeparatei
#ifdef glBlendFuncSeparatei
	{"glBlendFuncSeparatei", luaglew_glBlendFuncSeparatei},
#endif
//####glBlendFunci
#ifdef glBlendFunci
	{"glBlendFunci", luaglew_glBlendFunci},
#endif
//####glIsProgramARB
#ifdef glIsProgramARB
	{"glIsProgramARB", luaglew_glIsProgramARB},
#endif
//####glGetUniformLocation
#ifdef glGetUniformLocation
	{"glGetUniformLocation", luaglew_glGetUniformLocation},
#endif
//####glBlendColorEXT
#ifdef glBlendColorEXT
	{"glBlendColorEXT", luaglew_glBlendColorEXT},
#endif
//####glCompileShaderARB
#ifdef glCompileShaderARB
	{"glCompileShaderARB", luaglew_glCompileShaderARB},
#endif
//####glGetConvolutionFilter
#ifdef glGetConvolutionFilter
	{"glGetConvolutionFilter", luaglew_glGetConvolutionFilter},
#endif
//####glUniform4iARB
#ifdef glUniform4iARB
	{"glUniform4iARB", luaglew_glUniform4iARB},
#endif
//####glUniformMatrix3fv
#ifdef glUniformMatrix3fv
	{"glUniformMatrix3fv", luaglew_glUniformMatrix3fv},
#endif
//####glVertexArrayRangeAPPLE
#ifdef glVertexArrayRangeAPPLE
	{"glVertexArrayRangeAPPLE", luaglew_glVertexArrayRangeAPPLE},
#endif
//####glAreTexturesResident
#ifdef glAreTexturesResident
	{"glAreTexturesResident", luaglew_glAreTexturesResident},
#endif
//####glIsBufferARB
#ifdef glIsBufferARB
	{"glIsBufferARB", luaglew_glIsBufferARB},
#endif
//####glIsEnabled
#ifdef glIsEnabled
	{"glIsEnabled", luaglew_glIsEnabled},
#endif
//####glIsEnabledIndexedEXT
#ifdef glIsEnabledIndexedEXT
	{"glIsEnabledIndexedEXT", luaglew_glIsEnabledIndexedEXT},
#endif
//####glIsFenceAPPLE
#ifdef glIsFenceAPPLE
	{"glIsFenceAPPLE", luaglew_glIsFenceAPPLE},
#endif
//####glIsFramebuffer
#ifdef glIsFramebuffer
	{"glIsFramebuffer", luaglew_glIsFramebuffer},
#endif
//####glIsFramebufferEXT
#ifdef glIsFramebufferEXT
	{"glIsFramebufferEXT", luaglew_glIsFramebufferEXT},
#endif
//####glIsList
#ifdef glIsList
	{"glIsList", luaglew_glIsList},
#endif
//####glIsProgramARB
#ifdef glIsProgramARB
	{"glIsProgramARB", luaglew_glIsProgramARB},
#endif
//####glIsQueryARB
#ifdef glIsQueryARB
	{"glIsQueryARB", luaglew_glIsQueryARB},
#endif
//####glIsRenderbuffer
#ifdef glIsRenderbuffer
	{"glIsRenderbuffer", luaglew_glIsRenderbuffer},
#endif
//####glIsRenderbufferEXT
#ifdef glIsRenderbufferEXT
	{"glIsRenderbufferEXT", luaglew_glIsRenderbufferEXT},
#endif
//####glIsTexture
#ifdef glIsTexture
	{"glIsTexture", luaglew_glIsTexture},
#endif
//####glIsVertexArrayAPPLE
#ifdef glIsVertexArrayAPPLE
	{"glIsVertexArrayAPPLE", luaglew_glIsVertexArrayAPPLE},
#endif
//####glIsVertexAttribEnabledAPPLE
#ifdef glIsVertexAttribEnabledAPPLE
	{"glIsVertexAttribEnabledAPPLE", luaglew_glIsVertexAttribEnabledAPPLE},
#endif
//####glTestFenceAPPLE
#ifdef glTestFenceAPPLE
	{"glTestFenceAPPLE", luaglew_glTestFenceAPPLE},
#endif
//####glTestObjectAPPLE
#ifdef glTestObjectAPPLE
	{"glTestObjectAPPLE", luaglew_glTestObjectAPPLE},
#endif
//####glUnmapBufferARB
#ifdef glUnmapBufferARB
	{"glUnmapBufferARB", luaglew_glUnmapBufferARB},
#endif
//####glCheckFramebufferStatus
#ifdef glCheckFramebufferStatus
	{"glCheckFramebufferStatus", luaglew_glCheckFramebufferStatus},
#endif
//####glCheckFramebufferStatusEXT
#ifdef glCheckFramebufferStatusEXT
	{"glCheckFramebufferStatusEXT", luaglew_glCheckFramebufferStatusEXT},
#endif
//####glGetError
#ifdef glGetError
	{"glGetError", luaglew_glGetError},
#endif
//####glObjectPurgeableAPPLE
#ifdef glObjectPurgeableAPPLE
	{"glObjectPurgeableAPPLE", luaglew_glObjectPurgeableAPPLE},
#endif
//####glObjectUnpurgeableAPPLE
#ifdef glObjectUnpurgeableAPPLE
	{"glObjectUnpurgeableAPPLE", luaglew_glObjectUnpurgeableAPPLE},
#endif
//####glCreateProgramObjectARB
#ifdef glCreateProgramObjectARB
	{"glCreateProgramObjectARB", luaglew_glCreateProgramObjectARB},
#endif
//####glCreateShaderObjectARB
#ifdef glCreateShaderObjectARB
	{"glCreateShaderObjectARB", luaglew_glCreateShaderObjectARB},
#endif
//####glGetHandleARB
#ifdef glGetHandleARB
	{"glGetHandleARB", luaglew_glGetHandleARB},
#endif
//####glGetAttribLocation
#ifdef glGetAttribLocation
	{"glGetAttribLocation", luaglew_glGetAttribLocation},
#endif
//####glGetAttribLocationARB
#ifdef glGetAttribLocationARB
	{"glGetAttribLocationARB", luaglew_glGetAttribLocationARB},
#endif
//####glGetUniformLocation
#ifdef glGetUniformLocation
	{"glGetUniformLocation", luaglew_glGetUniformLocation},
#endif
//####glGetUniformLocationARB
#ifdef glGetUniformLocationARB
	{"glGetUniformLocationARB", luaglew_glGetUniformLocationARB},
#endif
//####glRenderMode
#ifdef glRenderMode
	{"glRenderMode", luaglew_glRenderMode},
#endif
//####glRenderMode
#ifdef glRenderMode
	{"glRenderMode", luaglew_glRenderMode},
#endif
//####glGenLists
#ifdef glGenLists
	{"glGenLists", luaglew_glGenLists},
#endif
//####glGetUniformBlockIndex
#ifdef glGetUniformBlockIndex
	{"glGetUniformBlockIndex", luaglew_glGetUniformBlockIndex},
#endif
//####glMapBuffer
#ifdef glMapBuffer
	{"glMapBuffer", luaglew_glMapBuffer},
#endif
//####glMapBufferARB
#ifdef glMapBufferARB
	{"glMapBufferARB", luaglew_glMapBufferARB},
#endif
//####glGetString
#ifdef glGetString
	{"glGetString", luaglew_glGetString},
#endif
//####glAccum
#ifdef glAccum
	{"glAccum", luaglew_glAccum},
#endif
//####glActiveStencilFaceEXT
#ifdef glActiveStencilFaceEXT
	{"glActiveStencilFaceEXT", luaglew_glActiveStencilFaceEXT},
#endif
//####glAlphaFunc
#ifdef glAlphaFunc
	{"glAlphaFunc", luaglew_glAlphaFunc},
#endif
//####glArrayElement
#ifdef glArrayElement
	{"glArrayElement", luaglew_glArrayElement},
#endif
//####glAttachObjectARB
#ifdef glAttachObjectARB
	{"glAttachObjectARB", luaglew_glAttachObjectARB},
#endif
//####glBegin
#ifdef glBegin
	{"glBegin", luaglew_glBegin},
#endif
//####glBeginConditionalRenderNV
#ifdef glBeginConditionalRenderNV
	{"glBeginConditionalRenderNV", luaglew_glBeginConditionalRenderNV},
#endif
//####glBeginQueryARB
#ifdef glBeginQueryARB
	{"glBeginQueryARB", luaglew_glBeginQueryARB},
#endif
//####glBeginTransformFeedbackEXT
#ifdef glBeginTransformFeedbackEXT
	{"glBeginTransformFeedbackEXT", luaglew_glBeginTransformFeedbackEXT},
#endif
//####glBindAttribLocation
#ifdef glBindAttribLocation
	{"glBindAttribLocation", luaglew_glBindAttribLocation},
#endif
//####glBindAttribLocationARB
#ifdef glBindAttribLocationARB
	{"glBindAttribLocationARB", luaglew_glBindAttribLocationARB},
#endif
//####glBindBufferARB
#ifdef glBindBufferARB
	{"glBindBufferARB", luaglew_glBindBufferARB},
#endif
//####glBindBufferBase
#ifdef glBindBufferBase
	{"glBindBufferBase", luaglew_glBindBufferBase},
#endif
//####glBindBufferBaseEXT
#ifdef glBindBufferBaseEXT
	{"glBindBufferBaseEXT", luaglew_glBindBufferBaseEXT},
#endif
//####glBindBufferOffsetEXT
#ifdef glBindBufferOffsetEXT
	{"glBindBufferOffsetEXT", luaglew_glBindBufferOffsetEXT},
#endif
//####glBindBufferRange
#ifdef glBindBufferRange
	{"glBindBufferRange", luaglew_glBindBufferRange},
#endif
//####glBindBufferRangeEXT
#ifdef glBindBufferRangeEXT
	{"glBindBufferRangeEXT", luaglew_glBindBufferRangeEXT},
#endif
//####glBindFragDataLocationEXT
#ifdef glBindFragDataLocationEXT
	{"glBindFragDataLocationEXT", luaglew_glBindFragDataLocationEXT},
#endif
//####glBindFramebuffer
#ifdef glBindFramebuffer
	{"glBindFramebuffer", luaglew_glBindFramebuffer},
#endif
//####glBindFramebufferEXT
#ifdef glBindFramebufferEXT
	{"glBindFramebufferEXT", luaglew_glBindFramebufferEXT},
#endif
//####glBindProgramARB
#ifdef glBindProgramARB
	{"glBindProgramARB", luaglew_glBindProgramARB},
#endif
//####glBindRenderbuffer
#ifdef glBindRenderbuffer
	{"glBindRenderbuffer", luaglew_glBindRenderbuffer},
#endif
//####glBindRenderbufferEXT
#ifdef glBindRenderbufferEXT
	{"glBindRenderbufferEXT", luaglew_glBindRenderbufferEXT},
#endif
//####glBindTexture
#ifdef glBindTexture
	{"glBindTexture", luaglew_glBindTexture},
#endif
//####glBindVertexArrayAPPLE
#ifdef glBindVertexArrayAPPLE
	{"glBindVertexArrayAPPLE", luaglew_glBindVertexArrayAPPLE},
#endif
//####glBitmap
#ifdef glBitmap
	{"glBitmap", luaglew_glBitmap},
#endif
//####glBlendColorEXT
#ifdef glBlendColorEXT
	{"glBlendColorEXT", luaglew_glBlendColorEXT},
#endif
//####glBlendEquationEXT
#ifdef glBlendEquationEXT
	{"glBlendEquationEXT", luaglew_glBlendEquationEXT},
#endif
//####glBlendEquationSeparate
#ifdef glBlendEquationSeparate
	{"glBlendEquationSeparate", luaglew_glBlendEquationSeparate},
#endif
//####glBlendEquationSeparateATI
#ifdef glBlendEquationSeparateATI
	{"glBlendEquationSeparateATI", luaglew_glBlendEquationSeparateATI},
#endif
//####glBlendEquationSeparateEXT
#ifdef glBlendEquationSeparateEXT
	{"glBlendEquationSeparateEXT", luaglew_glBlendEquationSeparateEXT},
#endif
//####glBlendFunc
#ifdef glBlendFunc
	{"glBlendFunc", luaglew_glBlendFunc},
#endif
//####glBlendFuncSeparate
#ifdef glBlendFuncSeparate
	{"glBlendFuncSeparate", luaglew_glBlendFuncSeparate},
#endif
//####glBlendFuncSeparateEXT
#ifdef glBlendFuncSeparateEXT
	{"glBlendFuncSeparateEXT", luaglew_glBlendFuncSeparateEXT},
#endif
//####glBlitFramebuffer
#ifdef glBlitFramebuffer
	{"glBlitFramebuffer", luaglew_glBlitFramebuffer},
#endif
//####glBlitFramebufferEXT
#ifdef glBlitFramebufferEXT
	{"glBlitFramebufferEXT", luaglew_glBlitFramebufferEXT},
#endif
//####glBufferData
#ifdef glBufferData
	{"glBufferData", luaglew_glBufferData},
#endif
//####glBufferDataARB
#ifdef glBufferDataARB
	{"glBufferDataARB", luaglew_glBufferDataARB},
#endif
//####glBufferParameteriAPPLE
#ifdef glBufferParameteriAPPLE
	{"glBufferParameteriAPPLE", luaglew_glBufferParameteriAPPLE},
#endif
//####glBufferSubData
#ifdef glBufferSubData
	{"glBufferSubData", luaglew_glBufferSubData},
#endif
//####glBufferSubDataARB
#ifdef glBufferSubDataARB
	{"glBufferSubDataARB", luaglew_glBufferSubDataARB},
#endif
//####glCallList
#ifdef glCallList
	{"glCallList", luaglew_glCallList},
#endif
//####glCallLists
#ifdef glCallLists
	{"glCallLists", luaglew_glCallLists},
#endif
//####glClampColorARB
#ifdef glClampColorARB
	{"glClampColorARB", luaglew_glClampColorARB},
#endif
//####glClear
#ifdef glClear
	{"glClear", luaglew_glClear},
#endif
//####glClearAccum
#ifdef glClearAccum
	{"glClearAccum", luaglew_glClearAccum},
#endif
//####glClearColor
#ifdef glClearColor
	{"glClearColor", luaglew_glClearColor},
#endif
//####glClearColorIiEXT
#ifdef glClearColorIiEXT
	{"glClearColorIiEXT", luaglew_glClearColorIiEXT},
#endif
//####glClearColorIuiEXT
#ifdef glClearColorIuiEXT
	{"glClearColorIuiEXT", luaglew_glClearColorIuiEXT},
#endif
//####glClearDepth
#ifdef glClearDepth
	{"glClearDepth", luaglew_glClearDepth},
#endif
//####glClearIndex
#ifdef glClearIndex
	{"glClearIndex", luaglew_glClearIndex},
#endif
//####glClearStencil
#ifdef glClearStencil
	{"glClearStencil", luaglew_glClearStencil},
#endif
//####glClientActiveTextureARB
#ifdef glClientActiveTextureARB
	{"glClientActiveTextureARB", luaglew_glClientActiveTextureARB},
#endif
//####glClipPlane
#ifdef glClipPlane
	{"glClipPlane", luaglew_glClipPlane},
#endif
//####glColor3b
#ifdef glColor3b
	{"glColor3b", luaglew_glColor3b},
#endif
//####glColor3bv
#ifdef glColor3bv
	{"glColor3bv", luaglew_glColor3bv},
#endif
//####glColor3d
#ifdef glColor3d
	{"glColor3d", luaglew_glColor3d},
#endif
//####glColor3dv
#ifdef glColor3dv
	{"glColor3dv", luaglew_glColor3dv},
#endif
//####glColor3f
#ifdef glColor3f
	{"glColor3f", luaglew_glColor3f},
#endif
//####glColor3fv
#ifdef glColor3fv
	{"glColor3fv", luaglew_glColor3fv},
#endif
//####glColor3i
#ifdef glColor3i
	{"glColor3i", luaglew_glColor3i},
#endif
//####glColor3iv
#ifdef glColor3iv
	{"glColor3iv", luaglew_glColor3iv},
#endif
//####glColor3s
#ifdef glColor3s
	{"glColor3s", luaglew_glColor3s},
#endif
//####glColor3sv
#ifdef glColor3sv
	{"glColor3sv", luaglew_glColor3sv},
#endif
//####glColor3ub
#ifdef glColor3ub
	{"glColor3ub", luaglew_glColor3ub},
#endif
//####glColor3ubv
#ifdef glColor3ubv
	{"glColor3ubv", luaglew_glColor3ubv},
#endif
//####glColor3ui
#ifdef glColor3ui
	{"glColor3ui", luaglew_glColor3ui},
#endif
//####glColor3uiv
#ifdef glColor3uiv
	{"glColor3uiv", luaglew_glColor3uiv},
#endif
//####glColor3us
#ifdef glColor3us
	{"glColor3us", luaglew_glColor3us},
#endif
//####glColor3usv
#ifdef glColor3usv
	{"glColor3usv", luaglew_glColor3usv},
#endif
//####glColor4b
#ifdef glColor4b
	{"glColor4b", luaglew_glColor4b},
#endif
//####glColor4bv
#ifdef glColor4bv
	{"glColor4bv", luaglew_glColor4bv},
#endif
//####glColor4d
#ifdef glColor4d
	{"glColor4d", luaglew_glColor4d},
#endif
//####glColor4dv
#ifdef glColor4dv
	{"glColor4dv", luaglew_glColor4dv},
#endif
//####glColor4f
#ifdef glColor4f
	{"glColor4f", luaglew_glColor4f},
#endif
//####glColor4fv
#ifdef glColor4fv
	{"glColor4fv", luaglew_glColor4fv},
#endif
//####glColor4i
#ifdef glColor4i
	{"glColor4i", luaglew_glColor4i},
#endif
//####glColor4iv
#ifdef glColor4iv
	{"glColor4iv", luaglew_glColor4iv},
#endif
//####glColor4s
#ifdef glColor4s
	{"glColor4s", luaglew_glColor4s},
#endif
//####glColor4sv
#ifdef glColor4sv
	{"glColor4sv", luaglew_glColor4sv},
#endif
//####glColor4ub
#ifdef glColor4ub
	{"glColor4ub", luaglew_glColor4ub},
#endif
//####glColor4ubv
#ifdef glColor4ubv
	{"glColor4ubv", luaglew_glColor4ubv},
#endif
//####glColor4ui
#ifdef glColor4ui
	{"glColor4ui", luaglew_glColor4ui},
#endif
//####glColor4uiv
#ifdef glColor4uiv
	{"glColor4uiv", luaglew_glColor4uiv},
#endif
//####glColor4us
#ifdef glColor4us
	{"glColor4us", luaglew_glColor4us},
#endif
//####glColor4usv
#ifdef glColor4usv
	{"glColor4usv", luaglew_glColor4usv},
#endif
//####glColorMask
#ifdef glColorMask
	{"glColorMask", luaglew_glColorMask},
#endif
//####glColorMaskIndexedEXT
#ifdef glColorMaskIndexedEXT
	{"glColorMaskIndexedEXT", luaglew_glColorMaskIndexedEXT},
#endif
//####glColorMaterial
#ifdef glColorMaterial
	{"glColorMaterial", luaglew_glColorMaterial},
#endif
//####glColorPointer
#ifdef glColorPointer
	{"glColorPointer", luaglew_glColorPointer},
#endif
//####glCompileShaderARB
#ifdef glCompileShaderARB
	{"glCompileShaderARB", luaglew_glCompileShaderARB},
#endif
//####glCompressedTexImage1DARB
#ifdef glCompressedTexImage1DARB
	{"glCompressedTexImage1DARB", luaglew_glCompressedTexImage1DARB},
#endif
//####glCompressedTexImage2DARB
#ifdef glCompressedTexImage2DARB
	{"glCompressedTexImage2DARB", luaglew_glCompressedTexImage2DARB},
#endif
//####glCompressedTexImage3DARB
#ifdef glCompressedTexImage3DARB
	{"glCompressedTexImage3DARB", luaglew_glCompressedTexImage3DARB},
#endif
//####glCompressedTexSubImage1DARB
#ifdef glCompressedTexSubImage1DARB
	{"glCompressedTexSubImage1DARB", luaglew_glCompressedTexSubImage1DARB},
#endif
//####glCompressedTexSubImage2DARB
#ifdef glCompressedTexSubImage2DARB
	{"glCompressedTexSubImage2DARB", luaglew_glCompressedTexSubImage2DARB},
#endif
//####glCompressedTexSubImage3DARB
#ifdef glCompressedTexSubImage3DARB
	{"glCompressedTexSubImage3DARB", luaglew_glCompressedTexSubImage3DARB},
#endif
//####glCopyPixels
#ifdef glCopyPixels
	{"glCopyPixels", luaglew_glCopyPixels},
#endif
//####glCopyTexImage1D
#ifdef glCopyTexImage1D
	{"glCopyTexImage1D", luaglew_glCopyTexImage1D},
#endif
//####glCopyTexImage2D
#ifdef glCopyTexImage2D
	{"glCopyTexImage2D", luaglew_glCopyTexImage2D},
#endif
//####glCopyTexSubImage1D
#ifdef glCopyTexSubImage1D
	{"glCopyTexSubImage1D", luaglew_glCopyTexSubImage1D},
#endif
//####glCopyTexSubImage2D
#ifdef glCopyTexSubImage2D
	{"glCopyTexSubImage2D", luaglew_glCopyTexSubImage2D},
#endif
//####glCullFace
#ifdef glCullFace
	{"glCullFace", luaglew_glCullFace},
#endif
//####glDeleteBuffers
#ifdef glDeleteBuffers
	{"glDeleteBuffers", luaglew_glDeleteBuffers},
#endif
//####glDeleteBuffersARB
#ifdef glDeleteBuffersARB
	{"glDeleteBuffersARB", luaglew_glDeleteBuffersARB},
#endif
//####glDeleteFencesAPPLE
#ifdef glDeleteFencesAPPLE
	{"glDeleteFencesAPPLE", luaglew_glDeleteFencesAPPLE},
#endif
//####glDeleteFramebuffers
#ifdef glDeleteFramebuffers
	{"glDeleteFramebuffers", luaglew_glDeleteFramebuffers},
#endif
//####glDeleteFramebuffersEXT
#ifdef glDeleteFramebuffersEXT
	{"glDeleteFramebuffersEXT", luaglew_glDeleteFramebuffersEXT},
#endif
//####glDeleteLists
#ifdef glDeleteLists
	{"glDeleteLists", luaglew_glDeleteLists},
#endif
//####glDeleteObjectARB
#ifdef glDeleteObjectARB
	{"glDeleteObjectARB", luaglew_glDeleteObjectARB},
#endif
//####glDeleteProgramsARB
#ifdef glDeleteProgramsARB
	{"glDeleteProgramsARB", luaglew_glDeleteProgramsARB},
#endif
//####glDeleteQueries
#ifdef glDeleteQueries
	{"glDeleteQueries", luaglew_glDeleteQueries},
#endif
//####glDeleteQueriesARB
#ifdef glDeleteQueriesARB
	{"glDeleteQueriesARB", luaglew_glDeleteQueriesARB},
#endif
//####glDeleteRenderbuffers
#ifdef glDeleteRenderbuffers
	{"glDeleteRenderbuffers", luaglew_glDeleteRenderbuffers},
#endif
//####glDeleteRenderbuffersEXT
#ifdef glDeleteRenderbuffersEXT
	{"glDeleteRenderbuffersEXT", luaglew_glDeleteRenderbuffersEXT},
#endif
//####glDeleteTextures
#ifdef glDeleteTextures
	{"glDeleteTextures", luaglew_glDeleteTextures},
#endif
//####glDeleteVertexArraysAPPLE
#ifdef glDeleteVertexArraysAPPLE
	{"glDeleteVertexArraysAPPLE", luaglew_glDeleteVertexArraysAPPLE},
#endif
//####glDepthFunc
#ifdef glDepthFunc
	{"glDepthFunc", luaglew_glDepthFunc},
#endif
//####glDepthMask
#ifdef glDepthMask
	{"glDepthMask", luaglew_glDepthMask},
#endif
//####glDepthRange
#ifdef glDepthRange
	{"glDepthRange", luaglew_glDepthRange},
#endif
//####glDetachObjectARB
#ifdef glDetachObjectARB
	{"glDetachObjectARB", luaglew_glDetachObjectARB},
#endif
//####glDisable
#ifdef glDisable
	{"glDisable", luaglew_glDisable},
#endif
//####glDisableClientState
#ifdef glDisableClientState
	{"glDisableClientState", luaglew_glDisableClientState},
#endif
//####glDisableIndexedEXT
#ifdef glDisableIndexedEXT
	{"glDisableIndexedEXT", luaglew_glDisableIndexedEXT},
#endif
//####glDisableVertexAttribAPPLE
#ifdef glDisableVertexAttribAPPLE
	{"glDisableVertexAttribAPPLE", luaglew_glDisableVertexAttribAPPLE},
#endif
//####glDisableVertexAttribArray
#ifdef glDisableVertexAttribArray
	{"glDisableVertexAttribArray", luaglew_glDisableVertexAttribArray},
#endif
//####glDisableVertexAttribArrayARB
#ifdef glDisableVertexAttribArrayARB
	{"glDisableVertexAttribArrayARB", luaglew_glDisableVertexAttribArrayARB},
#endif
//####glDrawArrays
#ifdef glDrawArrays
	{"glDrawArrays", luaglew_glDrawArrays},
#endif
//####glDrawArraysInstancedARB
#ifdef glDrawArraysInstancedARB
	{"glDrawArraysInstancedARB", luaglew_glDrawArraysInstancedARB},
#endif
//####glDrawBuffer
#ifdef glDrawBuffer
	{"glDrawBuffer", luaglew_glDrawBuffer},
#endif
//####glDrawBuffers
#ifdef glDrawBuffers
	{"glDrawBuffers", luaglew_glDrawBuffers},
#endif
//####glDrawBuffersARB
#ifdef glDrawBuffersARB
	{"glDrawBuffersARB", luaglew_glDrawBuffersARB},
#endif
//####glDrawElementArrayAPPLE
#ifdef glDrawElementArrayAPPLE
	{"glDrawElementArrayAPPLE", luaglew_glDrawElementArrayAPPLE},
#endif
//####glDrawElements
#ifdef glDrawElements
	{"glDrawElements", luaglew_glDrawElements},
#endif
//####glDrawElementsInstancedARB
#ifdef glDrawElementsInstancedARB
	{"glDrawElementsInstancedARB", luaglew_glDrawElementsInstancedARB},
#endif
//####glDrawPixels
#ifdef glDrawPixels
	{"glDrawPixels", luaglew_glDrawPixels},
#endif
//####glDrawRangeElementArrayAPPLE
#ifdef glDrawRangeElementArrayAPPLE
	{"glDrawRangeElementArrayAPPLE", luaglew_glDrawRangeElementArrayAPPLE},
#endif
//####glDrawRangeElementsEXT
#ifdef glDrawRangeElementsEXT
	{"glDrawRangeElementsEXT", luaglew_glDrawRangeElementsEXT},
#endif
//####glEdgeFlag
#ifdef glEdgeFlag
	{"glEdgeFlag", luaglew_glEdgeFlag},
#endif
//####glEdgeFlagPointer
#ifdef glEdgeFlagPointer
	{"glEdgeFlagPointer", luaglew_glEdgeFlagPointer},
#endif
//####glEdgeFlagv
#ifdef glEdgeFlagv
	{"glEdgeFlagv", luaglew_glEdgeFlagv},
#endif
//####glElementPointerAPPLE
#ifdef glElementPointerAPPLE
	{"glElementPointerAPPLE", luaglew_glElementPointerAPPLE},
#endif
//####glEnable
#ifdef glEnable
	{"glEnable", luaglew_glEnable},
#endif
//####glEnableClientState
#ifdef glEnableClientState
	{"glEnableClientState", luaglew_glEnableClientState},
#endif
//####glEnableIndexedEXT
#ifdef glEnableIndexedEXT
	{"glEnableIndexedEXT", luaglew_glEnableIndexedEXT},
#endif
//####glEnableVertexAttribAPPLE
#ifdef glEnableVertexAttribAPPLE
	{"glEnableVertexAttribAPPLE", luaglew_glEnableVertexAttribAPPLE},
#endif
//####glEnableVertexAttribArray
#ifdef glEnableVertexAttribArray
	{"glEnableVertexAttribArray", luaglew_glEnableVertexAttribArray},
#endif
//####glEnableVertexAttribArrayARB
#ifdef glEnableVertexAttribArrayARB
	{"glEnableVertexAttribArrayARB", luaglew_glEnableVertexAttribArrayARB},
#endif
//####glEnd
#ifdef glEnd
	{"glEnd", luaglew_glEnd},
#endif
//####glEndConditionalRenderNV
#ifdef glEndConditionalRenderNV
	{"glEndConditionalRenderNV", luaglew_glEndConditionalRenderNV},
#endif
//####glEndList
#ifdef glEndList
	{"glEndList", luaglew_glEndList},
#endif
//####glEndQueryARB
#ifdef glEndQueryARB
	{"glEndQueryARB", luaglew_glEndQueryARB},
#endif
//####glEndTransformFeedbackEXT
#ifdef glEndTransformFeedbackEXT
	{"glEndTransformFeedbackEXT", luaglew_glEndTransformFeedbackEXT},
#endif
//####glEvalCoord1d
#ifdef glEvalCoord1d
	{"glEvalCoord1d", luaglew_glEvalCoord1d},
#endif
//####glEvalCoord1dv
#ifdef glEvalCoord1dv
	{"glEvalCoord1dv", luaglew_glEvalCoord1dv},
#endif
//####glEvalCoord1f
#ifdef glEvalCoord1f
	{"glEvalCoord1f", luaglew_glEvalCoord1f},
#endif
//####glEvalCoord1fv
#ifdef glEvalCoord1fv
	{"glEvalCoord1fv", luaglew_glEvalCoord1fv},
#endif
//####glEvalCoord2d
#ifdef glEvalCoord2d
	{"glEvalCoord2d", luaglew_glEvalCoord2d},
#endif
//####glEvalCoord2dv
#ifdef glEvalCoord2dv
	{"glEvalCoord2dv", luaglew_glEvalCoord2dv},
#endif
//####glEvalCoord2f
#ifdef glEvalCoord2f
	{"glEvalCoord2f", luaglew_glEvalCoord2f},
#endif
//####glEvalCoord2fv
#ifdef glEvalCoord2fv
	{"glEvalCoord2fv", luaglew_glEvalCoord2fv},
#endif
//####glEvalMesh1
#ifdef glEvalMesh1
	{"glEvalMesh1", luaglew_glEvalMesh1},
#endif
//####glEvalMesh2
#ifdef glEvalMesh2
	{"glEvalMesh2", luaglew_glEvalMesh2},
#endif
//####glEvalPoint1
#ifdef glEvalPoint1
	{"glEvalPoint1", luaglew_glEvalPoint1},
#endif
//####glEvalPoint2
#ifdef glEvalPoint2
	{"glEvalPoint2", luaglew_glEvalPoint2},
#endif
//####glFeedbackBuffer
#ifdef glFeedbackBuffer
	{"glFeedbackBuffer", luaglew_glFeedbackBuffer},
#endif
//####glFinish
#ifdef glFinish
	{"glFinish", luaglew_glFinish},
#endif
//####glFinishFenceAPPLE
#ifdef glFinishFenceAPPLE
	{"glFinishFenceAPPLE", luaglew_glFinishFenceAPPLE},
#endif
//####glFinishObjectAPPLE
#ifdef glFinishObjectAPPLE
	{"glFinishObjectAPPLE", luaglew_glFinishObjectAPPLE},
#endif
//####glFinishRenderAPPLE
#ifdef glFinishRenderAPPLE
	{"glFinishRenderAPPLE", luaglew_glFinishRenderAPPLE},
#endif
//####glFlush
#ifdef glFlush
	{"glFlush", luaglew_glFlush},
#endif
//####glFlushMappedBufferRangeAPPLE
#ifdef glFlushMappedBufferRangeAPPLE
	{"glFlushMappedBufferRangeAPPLE", luaglew_glFlushMappedBufferRangeAPPLE},
#endif
//####glFlushRenderAPPLE
#ifdef glFlushRenderAPPLE
	{"glFlushRenderAPPLE", luaglew_glFlushRenderAPPLE},
#endif
//####glFlushVertexArrayRangeAPPLE
#ifdef glFlushVertexArrayRangeAPPLE
	{"glFlushVertexArrayRangeAPPLE", luaglew_glFlushVertexArrayRangeAPPLE},
#endif
//####glFogCoordPointerEXT
#ifdef glFogCoordPointerEXT
	{"glFogCoordPointerEXT", luaglew_glFogCoordPointerEXT},
#endif
//####glFogCoorddEXT
#ifdef glFogCoorddEXT
	{"glFogCoorddEXT", luaglew_glFogCoorddEXT},
#endif
//####glFogCoorddv
#ifdef glFogCoorddv
	{"glFogCoorddv", luaglew_glFogCoorddv},
#endif
//####glFogCoorddvEXT
#ifdef glFogCoorddvEXT
	{"glFogCoorddvEXT", luaglew_glFogCoorddvEXT},
#endif
//####glFogCoordfEXT
#ifdef glFogCoordfEXT
	{"glFogCoordfEXT", luaglew_glFogCoordfEXT},
#endif
//####glFogCoordfvEXT
#ifdef glFogCoordfvEXT
	{"glFogCoordfvEXT", luaglew_glFogCoordfvEXT},
#endif
//####glFogf
#ifdef glFogf
	{"glFogf", luaglew_glFogf},
#endif
//####glFogfv
#ifdef glFogfv
	{"glFogfv", luaglew_glFogfv},
#endif
//####glFogi
#ifdef glFogi
	{"glFogi", luaglew_glFogi},
#endif
//####glFogiv
#ifdef glFogiv
	{"glFogiv", luaglew_glFogiv},
#endif
//####glFramebufferRenderbuffer
#ifdef glFramebufferRenderbuffer
	{"glFramebufferRenderbuffer", luaglew_glFramebufferRenderbuffer},
#endif
//####glFramebufferRenderbufferEXT
#ifdef glFramebufferRenderbufferEXT
	{"glFramebufferRenderbufferEXT", luaglew_glFramebufferRenderbufferEXT},
#endif
//####glFramebufferTexture1D
#ifdef glFramebufferTexture1D
	{"glFramebufferTexture1D", luaglew_glFramebufferTexture1D},
#endif
//####glFramebufferTexture1DEXT
#ifdef glFramebufferTexture1DEXT
	{"glFramebufferTexture1DEXT", luaglew_glFramebufferTexture1DEXT},
#endif
//####glFramebufferTexture2D
#ifdef glFramebufferTexture2D
	{"glFramebufferTexture2D", luaglew_glFramebufferTexture2D},
#endif
//####glFramebufferTexture2DEXT
#ifdef glFramebufferTexture2DEXT
	{"glFramebufferTexture2DEXT", luaglew_glFramebufferTexture2DEXT},
#endif
//####glFramebufferTexture3D
#ifdef glFramebufferTexture3D
	{"glFramebufferTexture3D", luaglew_glFramebufferTexture3D},
#endif
//####glFramebufferTexture3DEXT
#ifdef glFramebufferTexture3DEXT
	{"glFramebufferTexture3DEXT", luaglew_glFramebufferTexture3DEXT},
#endif
//####glFramebufferTextureLayer
#ifdef glFramebufferTextureLayer
	{"glFramebufferTextureLayer", luaglew_glFramebufferTextureLayer},
#endif
//####glFrontFace
#ifdef glFrontFace
	{"glFrontFace", luaglew_glFrontFace},
#endif
//####glFrustum
#ifdef glFrustum
	{"glFrustum", luaglew_glFrustum},
#endif
//####glGenBuffers
#ifdef glGenBuffers
	{"glGenBuffers", luaglew_glGenBuffers},
#endif
//####glGenBuffersARB
#ifdef glGenBuffersARB
	{"glGenBuffersARB", luaglew_glGenBuffersARB},
#endif
//####glGenFencesAPPLE
#ifdef glGenFencesAPPLE
	{"glGenFencesAPPLE", luaglew_glGenFencesAPPLE},
#endif
//####glGenFramebuffers
#ifdef glGenFramebuffers
	{"glGenFramebuffers", luaglew_glGenFramebuffers},
#endif
//####glGenFramebuffersEXT
#ifdef glGenFramebuffersEXT
	{"glGenFramebuffersEXT", luaglew_glGenFramebuffersEXT},
#endif
//####glGenProgramsARB
#ifdef glGenProgramsARB
	{"glGenProgramsARB", luaglew_glGenProgramsARB},
#endif
//####glGenQueries
#ifdef glGenQueries
	{"glGenQueries", luaglew_glGenQueries},
#endif
//####glGenQueriesARB
#ifdef glGenQueriesARB
	{"glGenQueriesARB", luaglew_glGenQueriesARB},
#endif
//####glGenRenderbuffers
#ifdef glGenRenderbuffers
	{"glGenRenderbuffers", luaglew_glGenRenderbuffers},
#endif
//####glGenRenderbuffersEXT
#ifdef glGenRenderbuffersEXT
	{"glGenRenderbuffersEXT", luaglew_glGenRenderbuffersEXT},
#endif
//####glGenTextures
#ifdef glGenTextures
	{"glGenTextures", luaglew_glGenTextures},
#endif
//####glGenVertexArraysAPPLE
#ifdef glGenVertexArraysAPPLE
	{"glGenVertexArraysAPPLE", luaglew_glGenVertexArraysAPPLE},
#endif
//####glGenerateMipmap
#ifdef glGenerateMipmap
	{"glGenerateMipmap", luaglew_glGenerateMipmap},
#endif
//####glGenerateMipmapEXT
#ifdef glGenerateMipmapEXT
	{"glGenerateMipmapEXT", luaglew_glGenerateMipmapEXT},
#endif
//####glGetActiveAttrib
#ifdef glGetActiveAttrib
	{"glGetActiveAttrib", luaglew_glGetActiveAttrib},
#endif
//####glGetActiveAttribARB
#ifdef glGetActiveAttribARB
	{"glGetActiveAttribARB", luaglew_glGetActiveAttribARB},
#endif
//####glGetActiveUniform
#ifdef glGetActiveUniform
	{"glGetActiveUniform", luaglew_glGetActiveUniform},
#endif
//####glGetActiveUniformARB
#ifdef glGetActiveUniformARB
	{"glGetActiveUniformARB", luaglew_glGetActiveUniformARB},
#endif
//####glGetActiveUniformBlockName
#ifdef glGetActiveUniformBlockName
	{"glGetActiveUniformBlockName", luaglew_glGetActiveUniformBlockName},
#endif
//####glGetActiveUniformBlockiv
#ifdef glGetActiveUniformBlockiv
	{"glGetActiveUniformBlockiv", luaglew_glGetActiveUniformBlockiv},
#endif
//####glGetActiveUniformName
#ifdef glGetActiveUniformName
	{"glGetActiveUniformName", luaglew_glGetActiveUniformName},
#endif
//####glGetActiveUniformsiv
#ifdef glGetActiveUniformsiv
	{"glGetActiveUniformsiv", luaglew_glGetActiveUniformsiv},
#endif
//####glGetAttachedShaders
#ifdef glGetAttachedShaders
	{"glGetAttachedShaders", luaglew_glGetAttachedShaders},
#endif
//####glGetBooleanIndexedvEXT
#ifdef glGetBooleanIndexedvEXT
	{"glGetBooleanIndexedvEXT", luaglew_glGetBooleanIndexedvEXT},
#endif
//####glGetBooleanv
#ifdef glGetBooleanv
	{"glGetBooleanv", luaglew_glGetBooleanv},
#endif
//####glGetBufferParameteriv
#ifdef glGetBufferParameteriv
	{"glGetBufferParameteriv", luaglew_glGetBufferParameteriv},
#endif
//####glGetBufferParameterivARB
#ifdef glGetBufferParameterivARB
	{"glGetBufferParameterivARB", luaglew_glGetBufferParameterivARB},
#endif
//####glGetBufferPointerv
#ifdef glGetBufferPointerv
	{"glGetBufferPointerv", luaglew_glGetBufferPointerv},
#endif
//####glGetBufferPointervARB
#ifdef glGetBufferPointervARB
	{"glGetBufferPointervARB", luaglew_glGetBufferPointervARB},
#endif
//####glGetBufferSubData
#ifdef glGetBufferSubData
	{"glGetBufferSubData", luaglew_glGetBufferSubData},
#endif
//####glGetBufferSubDataARB
#ifdef glGetBufferSubDataARB
	{"glGetBufferSubDataARB", luaglew_glGetBufferSubDataARB},
#endif
//####glGetClipPlane
#ifdef glGetClipPlane
	{"glGetClipPlane", luaglew_glGetClipPlane},
#endif
//####glGetCompressedTexImageARB
#ifdef glGetCompressedTexImageARB
	{"glGetCompressedTexImageARB", luaglew_glGetCompressedTexImageARB},
#endif
//####glGetDoublev
#ifdef glGetDoublev
	{"glGetDoublev", luaglew_glGetDoublev},
#endif
//####glGetFloatv
#ifdef glGetFloatv
	{"glGetFloatv", luaglew_glGetFloatv},
#endif
//####glGetFramebufferAttachmentParameteriv
#ifdef glGetFramebufferAttachmentParameteriv
	{"glGetFramebufferAttachmentParameteriv", luaglew_glGetFramebufferAttachmentParameteriv},
#endif
//####glGetFramebufferAttachmentParameterivEXT
#ifdef glGetFramebufferAttachmentParameterivEXT
	{"glGetFramebufferAttachmentParameterivEXT", luaglew_glGetFramebufferAttachmentParameterivEXT},
#endif
//####glGetInfoLogARB
#ifdef glGetInfoLogARB
	{"glGetInfoLogARB", luaglew_glGetInfoLogARB},
#endif
//####glGetIntegerIndexedvEXT
#ifdef glGetIntegerIndexedvEXT
	{"glGetIntegerIndexedvEXT", luaglew_glGetIntegerIndexedvEXT},
#endif
//####glGetIntegeri_v
#ifdef glGetIntegeri_v
	{"glGetIntegeri_v", luaglew_glGetIntegeri_v},
#endif
//####glGetIntegerv
#ifdef glGetIntegerv
	{"glGetIntegerv", luaglew_glGetIntegerv},
#endif
//####glGetLightfv
#ifdef glGetLightfv
	{"glGetLightfv", luaglew_glGetLightfv},
#endif
//####glGetLightiv
#ifdef glGetLightiv
	{"glGetLightiv", luaglew_glGetLightiv},
#endif
//####glGetMapdv
#ifdef glGetMapdv
	{"glGetMapdv", luaglew_glGetMapdv},
#endif
//####glGetMapfv
#ifdef glGetMapfv
	{"glGetMapfv", luaglew_glGetMapfv},
#endif
//####glGetMapiv
#ifdef glGetMapiv
	{"glGetMapiv", luaglew_glGetMapiv},
#endif
//####glGetMaterialfv
#ifdef glGetMaterialfv
	{"glGetMaterialfv", luaglew_glGetMaterialfv},
#endif
//####glGetMaterialiv
#ifdef glGetMaterialiv
	{"glGetMaterialiv", luaglew_glGetMaterialiv},
#endif
//####glGetMinmax
#ifdef glGetMinmax
	{"glGetMinmax", luaglew_glGetMinmax},
#endif
//####glGetObjectParameterfvARB
#ifdef glGetObjectParameterfvARB
	{"glGetObjectParameterfvARB", luaglew_glGetObjectParameterfvARB},
#endif
//####glGetObjectParameterivAPPLE
#ifdef glGetObjectParameterivAPPLE
	{"glGetObjectParameterivAPPLE", luaglew_glGetObjectParameterivAPPLE},
#endif
//####glGetObjectParameterivARB
#ifdef glGetObjectParameterivARB
	{"glGetObjectParameterivARB", luaglew_glGetObjectParameterivARB},
#endif
//####glGetPixelMapfv
#ifdef glGetPixelMapfv
	{"glGetPixelMapfv", luaglew_glGetPixelMapfv},
#endif
//####glGetPixelMapuiv
#ifdef glGetPixelMapuiv
	{"glGetPixelMapuiv", luaglew_glGetPixelMapuiv},
#endif
//####glGetPixelMapusv
#ifdef glGetPixelMapusv
	{"glGetPixelMapusv", luaglew_glGetPixelMapusv},
#endif
//####glGetPointerv
#ifdef glGetPointerv
	{"glGetPointerv", luaglew_glGetPointerv},
#endif
//####glGetPolygonStipple
#ifdef glGetPolygonStipple
	{"glGetPolygonStipple", luaglew_glGetPolygonStipple},
#endif
//####glGetProgramEnvParameterdvARB
#ifdef glGetProgramEnvParameterdvARB
	{"glGetProgramEnvParameterdvARB", luaglew_glGetProgramEnvParameterdvARB},
#endif
//####glGetProgramEnvParameterfvARB
#ifdef glGetProgramEnvParameterfvARB
	{"glGetProgramEnvParameterfvARB", luaglew_glGetProgramEnvParameterfvARB},
#endif
//####glGetProgramInfoLog
#ifdef glGetProgramInfoLog
	{"glGetProgramInfoLog", luaglew_glGetProgramInfoLog},
#endif
//####glGetProgramLocalParameterdvARB
#ifdef glGetProgramLocalParameterdvARB
	{"glGetProgramLocalParameterdvARB", luaglew_glGetProgramLocalParameterdvARB},
#endif
//####glGetProgramLocalParameterfvARB
#ifdef glGetProgramLocalParameterfvARB
	{"glGetProgramLocalParameterfvARB", luaglew_glGetProgramLocalParameterfvARB},
#endif
//####glGetProgramStringARB
#ifdef glGetProgramStringARB
	{"glGetProgramStringARB", luaglew_glGetProgramStringARB},
#endif
//####glGetProgramiv
#ifdef glGetProgramiv
	{"glGetProgramiv", luaglew_glGetProgramiv},
#endif
//####glGetProgramivARB
#ifdef glGetProgramivARB
	{"glGetProgramivARB", luaglew_glGetProgramivARB},
#endif
//####glGetQueryObjectiv
#ifdef glGetQueryObjectiv
	{"glGetQueryObjectiv", luaglew_glGetQueryObjectiv},
#endif
//####glGetQueryObjectivARB
#ifdef glGetQueryObjectivARB
	{"glGetQueryObjectivARB", luaglew_glGetQueryObjectivARB},
#endif
//####glGetQueryObjectuiv
#ifdef glGetQueryObjectuiv
	{"glGetQueryObjectuiv", luaglew_glGetQueryObjectuiv},
#endif
//####glGetQueryObjectuivARB
#ifdef glGetQueryObjectuivARB
	{"glGetQueryObjectuivARB", luaglew_glGetQueryObjectuivARB},
#endif
//####glGetQueryiv
#ifdef glGetQueryiv
	{"glGetQueryiv", luaglew_glGetQueryiv},
#endif
//####glGetQueryivARB
#ifdef glGetQueryivARB
	{"glGetQueryivARB", luaglew_glGetQueryivARB},
#endif
//####glGetRenderbufferParameteriv
#ifdef glGetRenderbufferParameteriv
	{"glGetRenderbufferParameteriv", luaglew_glGetRenderbufferParameteriv},
#endif
//####glGetRenderbufferParameterivEXT
#ifdef glGetRenderbufferParameterivEXT
	{"glGetRenderbufferParameterivEXT", luaglew_glGetRenderbufferParameterivEXT},
#endif
//####glGetSeparableFilter
#ifdef glGetSeparableFilter
	{"glGetSeparableFilter", luaglew_glGetSeparableFilter},
#endif
//####glGetShaderInfoLog
#ifdef glGetShaderInfoLog
	{"glGetShaderInfoLog", luaglew_glGetShaderInfoLog},
#endif
//####glGetShaderSource
#ifdef glGetShaderSource
	{"glGetShaderSource", luaglew_glGetShaderSource},
#endif
//####glGetShaderSourceARB
#ifdef glGetShaderSourceARB
	{"glGetShaderSourceARB", luaglew_glGetShaderSourceARB},
#endif
//####glGetShaderiv
#ifdef glGetShaderiv
	{"glGetShaderiv", luaglew_glGetShaderiv},
#endif
//####glGetTexEnvfv
#ifdef glGetTexEnvfv
	{"glGetTexEnvfv", luaglew_glGetTexEnvfv},
#endif
//####glGetTexEnviv
#ifdef glGetTexEnviv
	{"glGetTexEnviv", luaglew_glGetTexEnviv},
#endif
//####glGetTexGendv
#ifdef glGetTexGendv
	{"glGetTexGendv", luaglew_glGetTexGendv},
#endif
//####glGetTexGenfv
#ifdef glGetTexGenfv
	{"glGetTexGenfv", luaglew_glGetTexGenfv},
#endif
//####glGetTexGeniv
#ifdef glGetTexGeniv
	{"glGetTexGeniv", luaglew_glGetTexGeniv},
#endif
//####glGetTexImage
#ifdef glGetTexImage
	{"glGetTexImage", luaglew_glGetTexImage},
#endif
//####glGetTexLevelParameterfv
#ifdef glGetTexLevelParameterfv
	{"glGetTexLevelParameterfv", luaglew_glGetTexLevelParameterfv},
#endif
//####glGetTexLevelParameteriv
#ifdef glGetTexLevelParameteriv
	{"glGetTexLevelParameteriv", luaglew_glGetTexLevelParameteriv},
#endif
//####glGetTexParameterIivEXT
#ifdef glGetTexParameterIivEXT
	{"glGetTexParameterIivEXT", luaglew_glGetTexParameterIivEXT},
#endif
//####glGetTexParameterIuivEXT
#ifdef glGetTexParameterIuivEXT
	{"glGetTexParameterIuivEXT", luaglew_glGetTexParameterIuivEXT},
#endif
//####glGetTexParameterfv
#ifdef glGetTexParameterfv
	{"glGetTexParameterfv", luaglew_glGetTexParameterfv},
#endif
//####glGetTexParameteriv
#ifdef glGetTexParameteriv
	{"glGetTexParameteriv", luaglew_glGetTexParameteriv},
#endif
//####glGetTransformFeedbackVaryingEXT
#ifdef glGetTransformFeedbackVaryingEXT
	{"glGetTransformFeedbackVaryingEXT", luaglew_glGetTransformFeedbackVaryingEXT},
#endif
//####glGetUniformIndices
#ifdef glGetUniformIndices
	{"glGetUniformIndices", luaglew_glGetUniformIndices},
#endif
//####glGetUniformfv
#ifdef glGetUniformfv
	{"glGetUniformfv", luaglew_glGetUniformfv},
#endif
//####glGetUniformfvARB
#ifdef glGetUniformfvARB
	{"glGetUniformfvARB", luaglew_glGetUniformfvARB},
#endif
//####glGetUniformiv
#ifdef glGetUniformiv
	{"glGetUniformiv", luaglew_glGetUniformiv},
#endif
//####glGetUniformivARB
#ifdef glGetUniformivARB
	{"glGetUniformivARB", luaglew_glGetUniformivARB},
#endif
//####glGetVertexAttribPointerv
#ifdef glGetVertexAttribPointerv
	{"glGetVertexAttribPointerv", luaglew_glGetVertexAttribPointerv},
#endif
//####glGetVertexAttribPointervARB
#ifdef glGetVertexAttribPointervARB
	{"glGetVertexAttribPointervARB", luaglew_glGetVertexAttribPointervARB},
#endif
//####glGetVertexAttribdv
#ifdef glGetVertexAttribdv
	{"glGetVertexAttribdv", luaglew_glGetVertexAttribdv},
#endif
//####glGetVertexAttribdvARB
#ifdef glGetVertexAttribdvARB
	{"glGetVertexAttribdvARB", luaglew_glGetVertexAttribdvARB},
#endif
//####glGetVertexAttribfv
#ifdef glGetVertexAttribfv
	{"glGetVertexAttribfv", luaglew_glGetVertexAttribfv},
#endif
//####glGetVertexAttribfvARB
#ifdef glGetVertexAttribfvARB
	{"glGetVertexAttribfvARB", luaglew_glGetVertexAttribfvARB},
#endif
//####glGetVertexAttribiv
#ifdef glGetVertexAttribiv
	{"glGetVertexAttribiv", luaglew_glGetVertexAttribiv},
#endif
//####glGetVertexAttribivARB
#ifdef glGetVertexAttribivARB
	{"glGetVertexAttribivARB", luaglew_glGetVertexAttribivARB},
#endif
//####glHint
#ifdef glHint
	{"glHint", luaglew_glHint},
#endif
//####glIndexMask
#ifdef glIndexMask
	{"glIndexMask", luaglew_glIndexMask},
#endif
//####glIndexPointer
#ifdef glIndexPointer
	{"glIndexPointer", luaglew_glIndexPointer},
#endif
//####glIndexd
#ifdef glIndexd
	{"glIndexd", luaglew_glIndexd},
#endif
//####glIndexdv
#ifdef glIndexdv
	{"glIndexdv", luaglew_glIndexdv},
#endif
//####glIndexf
#ifdef glIndexf
	{"glIndexf", luaglew_glIndexf},
#endif
//####glIndexfv
#ifdef glIndexfv
	{"glIndexfv", luaglew_glIndexfv},
#endif
//####glIndexi
#ifdef glIndexi
	{"glIndexi", luaglew_glIndexi},
#endif
//####glIndexiv
#ifdef glIndexiv
	{"glIndexiv", luaglew_glIndexiv},
#endif
//####glIndexs
#ifdef glIndexs
	{"glIndexs", luaglew_glIndexs},
#endif
//####glIndexsv
#ifdef glIndexsv
	{"glIndexsv", luaglew_glIndexsv},
#endif
//####glIndexub
#ifdef glIndexub
	{"glIndexub", luaglew_glIndexub},
#endif
//####glIndexubv
#ifdef glIndexubv
	{"glIndexubv", luaglew_glIndexubv},
#endif
//####glInitNames
#ifdef glInitNames
	{"glInitNames", luaglew_glInitNames},
#endif
//####glInterleavedArrays
#ifdef glInterleavedArrays
	{"glInterleavedArrays", luaglew_glInterleavedArrays},
#endif
//####glLightModelf
#ifdef glLightModelf
	{"glLightModelf", luaglew_glLightModelf},
#endif
//####glLightModelfv
#ifdef glLightModelfv
	{"glLightModelfv", luaglew_glLightModelfv},
#endif
//####glLightModeli
#ifdef glLightModeli
	{"glLightModeli", luaglew_glLightModeli},
#endif
//####glLightModeliv
#ifdef glLightModeliv
	{"glLightModeliv", luaglew_glLightModeliv},
#endif
//####glLightf
#ifdef glLightf
	{"glLightf", luaglew_glLightf},
#endif
//####glLightfv
#ifdef glLightfv
	{"glLightfv", luaglew_glLightfv},
#endif
//####glLighti
#ifdef glLighti
	{"glLighti", luaglew_glLighti},
#endif
//####glLightiv
#ifdef glLightiv
	{"glLightiv", luaglew_glLightiv},
#endif
//####glLineStipple
#ifdef glLineStipple
	{"glLineStipple", luaglew_glLineStipple},
#endif
//####glLineWidth
#ifdef glLineWidth
	{"glLineWidth", luaglew_glLineWidth},
#endif
//####glLinkProgramARB
#ifdef glLinkProgramARB
	{"glLinkProgramARB", luaglew_glLinkProgramARB},
#endif
//####glListBase
#ifdef glListBase
	{"glListBase", luaglew_glListBase},
#endif
//####glLoadIdentity
#ifdef glLoadIdentity
	{"glLoadIdentity", luaglew_glLoadIdentity},
#endif
//####glLoadMatrixd
#ifdef glLoadMatrixd
	{"glLoadMatrixd", luaglew_glLoadMatrixd},
#endif
//####glLoadMatrixf
#ifdef glLoadMatrixf
	{"glLoadMatrixf", luaglew_glLoadMatrixf},
#endif
//####glLoadName
#ifdef glLoadName
	{"glLoadName", luaglew_glLoadName},
#endif
//####glLoadTransposeMatrixd
#ifdef glLoadTransposeMatrixd
	{"glLoadTransposeMatrixd", luaglew_glLoadTransposeMatrixd},
#endif
//####glLoadTransposeMatrixdARB
#ifdef glLoadTransposeMatrixdARB
	{"glLoadTransposeMatrixdARB", luaglew_glLoadTransposeMatrixdARB},
#endif
//####glLoadTransposeMatrixf
#ifdef glLoadTransposeMatrixf
	{"glLoadTransposeMatrixf", luaglew_glLoadTransposeMatrixf},
#endif
//####glLoadTransposeMatrixfARB
#ifdef glLoadTransposeMatrixfARB
	{"glLoadTransposeMatrixfARB", luaglew_glLoadTransposeMatrixfARB},
#endif
//####glLockArraysEXT
#ifdef glLockArraysEXT
	{"glLockArraysEXT", luaglew_glLockArraysEXT},
#endif
//####glLogicOp
#ifdef glLogicOp
	{"glLogicOp", luaglew_glLogicOp},
#endif
//####glMap1d
#ifdef glMap1d
	{"glMap1d", luaglew_glMap1d},
#endif
//####glMap1f
#ifdef glMap1f
	{"glMap1f", luaglew_glMap1f},
#endif
//####glMap2d
#ifdef glMap2d
	{"glMap2d", luaglew_glMap2d},
#endif
//####glMap2f
#ifdef glMap2f
	{"glMap2f", luaglew_glMap2f},
#endif
//####glMapGrid1d
#ifdef glMapGrid1d
	{"glMapGrid1d", luaglew_glMapGrid1d},
#endif
//####glMapGrid1f
#ifdef glMapGrid1f
	{"glMapGrid1f", luaglew_glMapGrid1f},
#endif
//####glMapGrid2d
#ifdef glMapGrid2d
	{"glMapGrid2d", luaglew_glMapGrid2d},
#endif
//####glMapGrid2f
#ifdef glMapGrid2f
	{"glMapGrid2f", luaglew_glMapGrid2f},
#endif
//####glMapVertexAttrib1dAPPLE
#ifdef glMapVertexAttrib1dAPPLE
	{"glMapVertexAttrib1dAPPLE", luaglew_glMapVertexAttrib1dAPPLE},
#endif
//####glMapVertexAttrib1fAPPLE
#ifdef glMapVertexAttrib1fAPPLE
	{"glMapVertexAttrib1fAPPLE", luaglew_glMapVertexAttrib1fAPPLE},
#endif
//####glMapVertexAttrib2dAPPLE
#ifdef glMapVertexAttrib2dAPPLE
	{"glMapVertexAttrib2dAPPLE", luaglew_glMapVertexAttrib2dAPPLE},
#endif
//####glMapVertexAttrib2fAPPLE
#ifdef glMapVertexAttrib2fAPPLE
	{"glMapVertexAttrib2fAPPLE", luaglew_glMapVertexAttrib2fAPPLE},
#endif
//####glMaterialf
#ifdef glMaterialf
	{"glMaterialf", luaglew_glMaterialf},
#endif
//####glMaterialfv
#ifdef glMaterialfv
	{"glMaterialfv", luaglew_glMaterialfv},
#endif
//####glMateriali
#ifdef glMateriali
	{"glMateriali", luaglew_glMateriali},
#endif
//####glMaterialiv
#ifdef glMaterialiv
	{"glMaterialiv", luaglew_glMaterialiv},
#endif
//####glMatrixMode
#ifdef glMatrixMode
	{"glMatrixMode", luaglew_glMatrixMode},
#endif
//####glMinmax
#ifdef glMinmax
	{"glMinmax", luaglew_glMinmax},
#endif
//####glMultMatrixd
#ifdef glMultMatrixd
	{"glMultMatrixd", luaglew_glMultMatrixd},
#endif
//####glMultMatrixf
#ifdef glMultMatrixf
	{"glMultMatrixf", luaglew_glMultMatrixf},
#endif
//####glMultTransposeMatrixd
#ifdef glMultTransposeMatrixd
	{"glMultTransposeMatrixd", luaglew_glMultTransposeMatrixd},
#endif
//####glMultTransposeMatrixdARB
#ifdef glMultTransposeMatrixdARB
	{"glMultTransposeMatrixdARB", luaglew_glMultTransposeMatrixdARB},
#endif
//####glMultTransposeMatrixf
#ifdef glMultTransposeMatrixf
	{"glMultTransposeMatrixf", luaglew_glMultTransposeMatrixf},
#endif
//####glMultTransposeMatrixfARB
#ifdef glMultTransposeMatrixfARB
	{"glMultTransposeMatrixfARB", luaglew_glMultTransposeMatrixfARB},
#endif
//####glMultiDrawArrays
#ifdef glMultiDrawArrays
	{"glMultiDrawArrays", luaglew_glMultiDrawArrays},
#endif
//####glMultiDrawArraysEXT
#ifdef glMultiDrawArraysEXT
	{"glMultiDrawArraysEXT", luaglew_glMultiDrawArraysEXT},
#endif
//####glMultiDrawElementArrayAPPLE
#ifdef glMultiDrawElementArrayAPPLE
	{"glMultiDrawElementArrayAPPLE", luaglew_glMultiDrawElementArrayAPPLE},
#endif
//####glMultiDrawElements
#ifdef glMultiDrawElements
	{"glMultiDrawElements", luaglew_glMultiDrawElements},
#endif
//####glMultiDrawElementsEXT
#ifdef glMultiDrawElementsEXT
	{"glMultiDrawElementsEXT", luaglew_glMultiDrawElementsEXT},
#endif
//####glMultiDrawRangeElementArrayAPPLE
#ifdef glMultiDrawRangeElementArrayAPPLE
	{"glMultiDrawRangeElementArrayAPPLE", luaglew_glMultiDrawRangeElementArrayAPPLE},
#endif
//####glMultiTexCoord1dARB
#ifdef glMultiTexCoord1dARB
	{"glMultiTexCoord1dARB", luaglew_glMultiTexCoord1dARB},
#endif
//####glMultiTexCoord1dvARB
#ifdef glMultiTexCoord1dvARB
	{"glMultiTexCoord1dvARB", luaglew_glMultiTexCoord1dvARB},
#endif
//####glMultiTexCoord1fARB
#ifdef glMultiTexCoord1fARB
	{"glMultiTexCoord1fARB", luaglew_glMultiTexCoord1fARB},
#endif
//####glMultiTexCoord1fvARB
#ifdef glMultiTexCoord1fvARB
	{"glMultiTexCoord1fvARB", luaglew_glMultiTexCoord1fvARB},
#endif
//####glMultiTexCoord1iARB
#ifdef glMultiTexCoord1iARB
	{"glMultiTexCoord1iARB", luaglew_glMultiTexCoord1iARB},
#endif
//####glMultiTexCoord1ivARB
#ifdef glMultiTexCoord1ivARB
	{"glMultiTexCoord1ivARB", luaglew_glMultiTexCoord1ivARB},
#endif
//####glMultiTexCoord1sARB
#ifdef glMultiTexCoord1sARB
	{"glMultiTexCoord1sARB", luaglew_glMultiTexCoord1sARB},
#endif
//####glMultiTexCoord1svARB
#ifdef glMultiTexCoord1svARB
	{"glMultiTexCoord1svARB", luaglew_glMultiTexCoord1svARB},
#endif
//####glMultiTexCoord2dARB
#ifdef glMultiTexCoord2dARB
	{"glMultiTexCoord2dARB", luaglew_glMultiTexCoord2dARB},
#endif
//####glMultiTexCoord2dvARB
#ifdef glMultiTexCoord2dvARB
	{"glMultiTexCoord2dvARB", luaglew_glMultiTexCoord2dvARB},
#endif
//####glMultiTexCoord2fARB
#ifdef glMultiTexCoord2fARB
	{"glMultiTexCoord2fARB", luaglew_glMultiTexCoord2fARB},
#endif
//####glMultiTexCoord2fvARB
#ifdef glMultiTexCoord2fvARB
	{"glMultiTexCoord2fvARB", luaglew_glMultiTexCoord2fvARB},
#endif
//####glMultiTexCoord2iARB
#ifdef glMultiTexCoord2iARB
	{"glMultiTexCoord2iARB", luaglew_glMultiTexCoord2iARB},
#endif
//####glMultiTexCoord2ivARB
#ifdef glMultiTexCoord2ivARB
	{"glMultiTexCoord2ivARB", luaglew_glMultiTexCoord2ivARB},
#endif
//####glMultiTexCoord2sARB
#ifdef glMultiTexCoord2sARB
	{"glMultiTexCoord2sARB", luaglew_glMultiTexCoord2sARB},
#endif
//####glMultiTexCoord2svARB
#ifdef glMultiTexCoord2svARB
	{"glMultiTexCoord2svARB", luaglew_glMultiTexCoord2svARB},
#endif
//####glMultiTexCoord3dARB
#ifdef glMultiTexCoord3dARB
	{"glMultiTexCoord3dARB", luaglew_glMultiTexCoord3dARB},
#endif
//####glMultiTexCoord3dvARB
#ifdef glMultiTexCoord3dvARB
	{"glMultiTexCoord3dvARB", luaglew_glMultiTexCoord3dvARB},
#endif
//####glMultiTexCoord3fARB
#ifdef glMultiTexCoord3fARB
	{"glMultiTexCoord3fARB", luaglew_glMultiTexCoord3fARB},
#endif
//####glMultiTexCoord3fvARB
#ifdef glMultiTexCoord3fvARB
	{"glMultiTexCoord3fvARB", luaglew_glMultiTexCoord3fvARB},
#endif
//####glMultiTexCoord3iARB
#ifdef glMultiTexCoord3iARB
	{"glMultiTexCoord3iARB", luaglew_glMultiTexCoord3iARB},
#endif
//####glMultiTexCoord3ivARB
#ifdef glMultiTexCoord3ivARB
	{"glMultiTexCoord3ivARB", luaglew_glMultiTexCoord3ivARB},
#endif
//####glMultiTexCoord3sARB
#ifdef glMultiTexCoord3sARB
	{"glMultiTexCoord3sARB", luaglew_glMultiTexCoord3sARB},
#endif
//####glMultiTexCoord3svARB
#ifdef glMultiTexCoord3svARB
	{"glMultiTexCoord3svARB", luaglew_glMultiTexCoord3svARB},
#endif
//####glMultiTexCoord4dARB
#ifdef glMultiTexCoord4dARB
	{"glMultiTexCoord4dARB", luaglew_glMultiTexCoord4dARB},
#endif
//####glMultiTexCoord4dvARB
#ifdef glMultiTexCoord4dvARB
	{"glMultiTexCoord4dvARB", luaglew_glMultiTexCoord4dvARB},
#endif
//####glMultiTexCoord4fARB
#ifdef glMultiTexCoord4fARB
	{"glMultiTexCoord4fARB", luaglew_glMultiTexCoord4fARB},
#endif
//####glMultiTexCoord4fvARB
#ifdef glMultiTexCoord4fvARB
	{"glMultiTexCoord4fvARB", luaglew_glMultiTexCoord4fvARB},
#endif
//####glMultiTexCoord4i
#ifdef glMultiTexCoord4i
	{"glMultiTexCoord4i", luaglew_glMultiTexCoord4i},
#endif
//####glMultiTexCoord4iARB
#ifdef glMultiTexCoord4iARB
	{"glMultiTexCoord4iARB", luaglew_glMultiTexCoord4iARB},
#endif
//####glMultiTexCoord4ivARB
#ifdef glMultiTexCoord4ivARB
	{"glMultiTexCoord4ivARB", luaglew_glMultiTexCoord4ivARB},
#endif
//####glMultiTexCoord4sARB
#ifdef glMultiTexCoord4sARB
	{"glMultiTexCoord4sARB", luaglew_glMultiTexCoord4sARB},
#endif
//####glMultiTexCoord4svARB
#ifdef glMultiTexCoord4svARB
	{"glMultiTexCoord4svARB", luaglew_glMultiTexCoord4svARB},
#endif
//####glNewList
#ifdef glNewList
	{"glNewList", luaglew_glNewList},
#endif
//####glNormal3b
#ifdef glNormal3b
	{"glNormal3b", luaglew_glNormal3b},
#endif
//####glNormal3bv
#ifdef glNormal3bv
	{"glNormal3bv", luaglew_glNormal3bv},
#endif
//####glNormal3d
#ifdef glNormal3d
	{"glNormal3d", luaglew_glNormal3d},
#endif
//####glNormal3dv
#ifdef glNormal3dv
	{"glNormal3dv", luaglew_glNormal3dv},
#endif
//####glNormal3f
#ifdef glNormal3f
	{"glNormal3f", luaglew_glNormal3f},
#endif
//####glNormal3fv
#ifdef glNormal3fv
	{"glNormal3fv", luaglew_glNormal3fv},
#endif
//####glNormal3i
#ifdef glNormal3i
	{"glNormal3i", luaglew_glNormal3i},
#endif
//####glNormal3iv
#ifdef glNormal3iv
	{"glNormal3iv", luaglew_glNormal3iv},
#endif
//####glNormal3s
#ifdef glNormal3s
	{"glNormal3s", luaglew_glNormal3s},
#endif
//####glNormal3sv
#ifdef glNormal3sv
	{"glNormal3sv", luaglew_glNormal3sv},
#endif
//####glNormalPointer
#ifdef glNormalPointer
	{"glNormalPointer", luaglew_glNormalPointer},
#endif
//####glOrtho
#ifdef glOrtho
	{"glOrtho", luaglew_glOrtho},
#endif
//####glPNTrianglesfATIX
#ifdef glPNTrianglesfATIX
	{"glPNTrianglesfATIX", luaglew_glPNTrianglesfATIX},
#endif
//####glPNTrianglesiATIX
#ifdef glPNTrianglesiATIX
	{"glPNTrianglesiATIX", luaglew_glPNTrianglesiATIX},
#endif
//####glPassThrough
#ifdef glPassThrough
	{"glPassThrough", luaglew_glPassThrough},
#endif
//####glPixelMapfv
#ifdef glPixelMapfv
	{"glPixelMapfv", luaglew_glPixelMapfv},
#endif
//####glPixelMapuiv
#ifdef glPixelMapuiv
	{"glPixelMapuiv", luaglew_glPixelMapuiv},
#endif
//####glPixelMapusv
#ifdef glPixelMapusv
	{"glPixelMapusv", luaglew_glPixelMapusv},
#endif
//####glPixelStoref
#ifdef glPixelStoref
	{"glPixelStoref", luaglew_glPixelStoref},
#endif
//####glPixelStorei
#ifdef glPixelStorei
	{"glPixelStorei", luaglew_glPixelStorei},
#endif
//####glPixelTransferf
#ifdef glPixelTransferf
	{"glPixelTransferf", luaglew_glPixelTransferf},
#endif
//####glPixelTransferi
#ifdef glPixelTransferi
	{"glPixelTransferi", luaglew_glPixelTransferi},
#endif
//####glPixelZoom
#ifdef glPixelZoom
	{"glPixelZoom", luaglew_glPixelZoom},
#endif
//####glPointParameterfvARB
#ifdef glPointParameterfvARB
	{"glPointParameterfvARB", luaglew_glPointParameterfvARB},
#endif
//####glPointParameteriNV
#ifdef glPointParameteriNV
	{"glPointParameteriNV", luaglew_glPointParameteriNV},
#endif
//####glPointParameterivNV
#ifdef glPointParameterivNV
	{"glPointParameterivNV", luaglew_glPointParameterivNV},
#endif
//####glPointSize
#ifdef glPointSize
	{"glPointSize", luaglew_glPointSize},
#endif
//####glPolygonMode
#ifdef glPolygonMode
	{"glPolygonMode", luaglew_glPolygonMode},
#endif
//####glPolygonOffset
#ifdef glPolygonOffset
	{"glPolygonOffset", luaglew_glPolygonOffset},
#endif
//####glPolygonStipple
#ifdef glPolygonStipple
	{"glPolygonStipple", luaglew_glPolygonStipple},
#endif
//####glPopAttrib
#ifdef glPopAttrib
	{"glPopAttrib", luaglew_glPopAttrib},
#endif
//####glPopClientAttrib
#ifdef glPopClientAttrib
	{"glPopClientAttrib", luaglew_glPopClientAttrib},
#endif
//####glPopMatrix
#ifdef glPopMatrix
	{"glPopMatrix", luaglew_glPopMatrix},
#endif
//####glPopName
#ifdef glPopName
	{"glPopName", luaglew_glPopName},
#endif
//####glProgramEnvParameter4dARB
#ifdef glProgramEnvParameter4dARB
	{"glProgramEnvParameter4dARB", luaglew_glProgramEnvParameter4dARB},
#endif
//####glProgramEnvParameter4dvARB
#ifdef glProgramEnvParameter4dvARB
	{"glProgramEnvParameter4dvARB", luaglew_glProgramEnvParameter4dvARB},
#endif
//####glProgramEnvParameter4fARB
#ifdef glProgramEnvParameter4fARB
	{"glProgramEnvParameter4fARB", luaglew_glProgramEnvParameter4fARB},
#endif
//####glProgramEnvParameter4fvARB
#ifdef glProgramEnvParameter4fvARB
	{"glProgramEnvParameter4fvARB", luaglew_glProgramEnvParameter4fvARB},
#endif
//####glProgramEnvParameters4fvEXT
#ifdef glProgramEnvParameters4fvEXT
	{"glProgramEnvParameters4fvEXT", luaglew_glProgramEnvParameters4fvEXT},
#endif
//####glProgramLocalParameter4dARB
#ifdef glProgramLocalParameter4dARB
	{"glProgramLocalParameter4dARB", luaglew_glProgramLocalParameter4dARB},
#endif
//####glProgramLocalParameter4dvARB
#ifdef glProgramLocalParameter4dvARB
	{"glProgramLocalParameter4dvARB", luaglew_glProgramLocalParameter4dvARB},
#endif
//####glProgramLocalParameter4fARB
#ifdef glProgramLocalParameter4fARB
	{"glProgramLocalParameter4fARB", luaglew_glProgramLocalParameter4fARB},
#endif
//####glProgramLocalParameter4fvARB
#ifdef glProgramLocalParameter4fvARB
	{"glProgramLocalParameter4fvARB", luaglew_glProgramLocalParameter4fvARB},
#endif
//####glProgramLocalParameters4fvEXT
#ifdef glProgramLocalParameters4fvEXT
	{"glProgramLocalParameters4fvEXT", luaglew_glProgramLocalParameters4fvEXT},
#endif
//####glProgramStringARB
#ifdef glProgramStringARB
	{"glProgramStringARB", luaglew_glProgramStringARB},
#endif
//####glProvokingVertexEXT
#ifdef glProvokingVertexEXT
	{"glProvokingVertexEXT", luaglew_glProvokingVertexEXT},
#endif
//####glPushAttrib
#ifdef glPushAttrib
	{"glPushAttrib", luaglew_glPushAttrib},
#endif
//####glPushClientAttrib
#ifdef glPushClientAttrib
	{"glPushClientAttrib", luaglew_glPushClientAttrib},
#endif
//####glPushMatrix
#ifdef glPushMatrix
	{"glPushMatrix", luaglew_glPushMatrix},
#endif
//####glPushName
#ifdef glPushName
	{"glPushName", luaglew_glPushName},
#endif
//####glRasterPos2d
#ifdef glRasterPos2d
	{"glRasterPos2d", luaglew_glRasterPos2d},
#endif
//####glRasterPos2dv
#ifdef glRasterPos2dv
	{"glRasterPos2dv", luaglew_glRasterPos2dv},
#endif
//####glRasterPos2f
#ifdef glRasterPos2f
	{"glRasterPos2f", luaglew_glRasterPos2f},
#endif
//####glRasterPos2fv
#ifdef glRasterPos2fv
	{"glRasterPos2fv", luaglew_glRasterPos2fv},
#endif
//####glRasterPos2i
#ifdef glRasterPos2i
	{"glRasterPos2i", luaglew_glRasterPos2i},
#endif
//####glRasterPos2iv
#ifdef glRasterPos2iv
	{"glRasterPos2iv", luaglew_glRasterPos2iv},
#endif
//####glRasterPos2s
#ifdef glRasterPos2s
	{"glRasterPos2s", luaglew_glRasterPos2s},
#endif
//####glRasterPos2sv
#ifdef glRasterPos2sv
	{"glRasterPos2sv", luaglew_glRasterPos2sv},
#endif
//####glRasterPos3d
#ifdef glRasterPos3d
	{"glRasterPos3d", luaglew_glRasterPos3d},
#endif
//####glRasterPos3dv
#ifdef glRasterPos3dv
	{"glRasterPos3dv", luaglew_glRasterPos3dv},
#endif
//####glRasterPos3f
#ifdef glRasterPos3f
	{"glRasterPos3f", luaglew_glRasterPos3f},
#endif
//####glRasterPos3fv
#ifdef glRasterPos3fv
	{"glRasterPos3fv", luaglew_glRasterPos3fv},
#endif
//####glRasterPos3i
#ifdef glRasterPos3i
	{"glRasterPos3i", luaglew_glRasterPos3i},
#endif
//####glRasterPos3iv
#ifdef glRasterPos3iv
	{"glRasterPos3iv", luaglew_glRasterPos3iv},
#endif
//####glRasterPos3s
#ifdef glRasterPos3s
	{"glRasterPos3s", luaglew_glRasterPos3s},
#endif
//####glRasterPos3sv
#ifdef glRasterPos3sv
	{"glRasterPos3sv", luaglew_glRasterPos3sv},
#endif
//####glRasterPos4d
#ifdef glRasterPos4d
	{"glRasterPos4d", luaglew_glRasterPos4d},
#endif
//####glRasterPos4dv
#ifdef glRasterPos4dv
	{"glRasterPos4dv", luaglew_glRasterPos4dv},
#endif
//####glRasterPos4f
#ifdef glRasterPos4f
	{"glRasterPos4f", luaglew_glRasterPos4f},
#endif
//####glRasterPos4fv
#ifdef glRasterPos4fv
	{"glRasterPos4fv", luaglew_glRasterPos4fv},
#endif
//####glRasterPos4i
#ifdef glRasterPos4i
	{"glRasterPos4i", luaglew_glRasterPos4i},
#endif
//####glRasterPos4iv
#ifdef glRasterPos4iv
	{"glRasterPos4iv", luaglew_glRasterPos4iv},
#endif
//####glRasterPos4s
#ifdef glRasterPos4s
	{"glRasterPos4s", luaglew_glRasterPos4s},
#endif
//####glRasterPos4sv
#ifdef glRasterPos4sv
	{"glRasterPos4sv", luaglew_glRasterPos4sv},
#endif
//####glReadBuffer
#ifdef glReadBuffer
	{"glReadBuffer", luaglew_glReadBuffer},
#endif
//####glReadPixels
#ifdef glReadPixels
	{"glReadPixels", luaglew_glReadPixels},
#endif
//####glRectd
#ifdef glRectd
	{"glRectd", luaglew_glRectd},
#endif
//####glRectdv
#ifdef glRectdv
	{"glRectdv", luaglew_glRectdv},
#endif
//####glRectf
#ifdef glRectf
	{"glRectf", luaglew_glRectf},
#endif
//####glRectfv
#ifdef glRectfv
	{"glRectfv", luaglew_glRectfv},
#endif
//####glRecti
#ifdef glRecti
	{"glRecti", luaglew_glRecti},
#endif
//####glRectiv
#ifdef glRectiv
	{"glRectiv", luaglew_glRectiv},
#endif
//####glRects
#ifdef glRects
	{"glRects", luaglew_glRects},
#endif
//####glRectsv
#ifdef glRectsv
	{"glRectsv", luaglew_glRectsv},
#endif
//####glRenderbufferStorage
#ifdef glRenderbufferStorage
	{"glRenderbufferStorage", luaglew_glRenderbufferStorage},
#endif
//####glRenderbufferStorageEXT
#ifdef glRenderbufferStorageEXT
	{"glRenderbufferStorageEXT", luaglew_glRenderbufferStorageEXT},
#endif
//####glRenderbufferStorageMultisample
#ifdef glRenderbufferStorageMultisample
	{"glRenderbufferStorageMultisample", luaglew_glRenderbufferStorageMultisample},
#endif
//####glRenderbufferStorageMultisampleEXT
#ifdef glRenderbufferStorageMultisampleEXT
	{"glRenderbufferStorageMultisampleEXT", luaglew_glRenderbufferStorageMultisampleEXT},
#endif
//####glRotated
#ifdef glRotated
	{"glRotated", luaglew_glRotated},
#endif
//####glRotatef
#ifdef glRotatef
	{"glRotatef", luaglew_glRotatef},
#endif
//####glSampleCoverageARB
#ifdef glSampleCoverageARB
	{"glSampleCoverageARB", luaglew_glSampleCoverageARB},
#endif
//####glSamplePass
#ifdef glSamplePass
	{"glSamplePass", luaglew_glSamplePass},
#endif
//####glSamplePassARB
#ifdef glSamplePassARB
	{"glSamplePassARB", luaglew_glSamplePassARB},
#endif
//####glScaled
#ifdef glScaled
	{"glScaled", luaglew_glScaled},
#endif
//####glScalef
#ifdef glScalef
	{"glScalef", luaglew_glScalef},
#endif
//####glScissor
#ifdef glScissor
	{"glScissor", luaglew_glScissor},
#endif
//####glSecondaryColor3bEXT
#ifdef glSecondaryColor3bEXT
	{"glSecondaryColor3bEXT", luaglew_glSecondaryColor3bEXT},
#endif
//####glSecondaryColor3bvEXT
#ifdef glSecondaryColor3bvEXT
	{"glSecondaryColor3bvEXT", luaglew_glSecondaryColor3bvEXT},
#endif
//####glSecondaryColor3dEXT
#ifdef glSecondaryColor3dEXT
	{"glSecondaryColor3dEXT", luaglew_glSecondaryColor3dEXT},
#endif
//####glSecondaryColor3dvEXT
#ifdef glSecondaryColor3dvEXT
	{"glSecondaryColor3dvEXT", luaglew_glSecondaryColor3dvEXT},
#endif
//####glSecondaryColor3fEXT
#ifdef glSecondaryColor3fEXT
	{"glSecondaryColor3fEXT", luaglew_glSecondaryColor3fEXT},
#endif
//####glSecondaryColor3fvEXT
#ifdef glSecondaryColor3fvEXT
	{"glSecondaryColor3fvEXT", luaglew_glSecondaryColor3fvEXT},
#endif
//####glSecondaryColor3iEXT
#ifdef glSecondaryColor3iEXT
	{"glSecondaryColor3iEXT", luaglew_glSecondaryColor3iEXT},
#endif
//####glSecondaryColor3ivEXT
#ifdef glSecondaryColor3ivEXT
	{"glSecondaryColor3ivEXT", luaglew_glSecondaryColor3ivEXT},
#endif
//####glSecondaryColor3sEXT
#ifdef glSecondaryColor3sEXT
	{"glSecondaryColor3sEXT", luaglew_glSecondaryColor3sEXT},
#endif
//####glSecondaryColor3svEXT
#ifdef glSecondaryColor3svEXT
	{"glSecondaryColor3svEXT", luaglew_glSecondaryColor3svEXT},
#endif
//####glSecondaryColor3ubEXT
#ifdef glSecondaryColor3ubEXT
	{"glSecondaryColor3ubEXT", luaglew_glSecondaryColor3ubEXT},
#endif
//####glSecondaryColor3ubvEXT
#ifdef glSecondaryColor3ubvEXT
	{"glSecondaryColor3ubvEXT", luaglew_glSecondaryColor3ubvEXT},
#endif
//####glSecondaryColor3uiEXT
#ifdef glSecondaryColor3uiEXT
	{"glSecondaryColor3uiEXT", luaglew_glSecondaryColor3uiEXT},
#endif
//####glSecondaryColor3uivEXT
#ifdef glSecondaryColor3uivEXT
	{"glSecondaryColor3uivEXT", luaglew_glSecondaryColor3uivEXT},
#endif
//####glSecondaryColor3usEXT
#ifdef glSecondaryColor3usEXT
	{"glSecondaryColor3usEXT", luaglew_glSecondaryColor3usEXT},
#endif
//####glSecondaryColor3usvEXT
#ifdef glSecondaryColor3usvEXT
	{"glSecondaryColor3usvEXT", luaglew_glSecondaryColor3usvEXT},
#endif
//####glSecondaryColorPointer
#ifdef glSecondaryColorPointer
	{"glSecondaryColorPointer", luaglew_glSecondaryColorPointer},
#endif
//####glSecondaryColorPointerEXT
#ifdef glSecondaryColorPointerEXT
	{"glSecondaryColorPointerEXT", luaglew_glSecondaryColorPointerEXT},
#endif
//####glSelectBuffer
#ifdef glSelectBuffer
	{"glSelectBuffer", luaglew_glSelectBuffer},
#endif
//####glSetFenceAPPLE
#ifdef glSetFenceAPPLE
	{"glSetFenceAPPLE", luaglew_glSetFenceAPPLE},
#endif
//####glShadeModel
#ifdef glShadeModel
	{"glShadeModel", luaglew_glShadeModel},
#endif
//####glShaderSource
#ifdef glShaderSource
	{"glShaderSource", luaglew_glShaderSource},
#endif
//####glShaderSourceARB
#ifdef glShaderSourceARB
	{"glShaderSourceARB", luaglew_glShaderSourceARB},
#endif
//####glStencilFunc
#ifdef glStencilFunc
	{"glStencilFunc", luaglew_glStencilFunc},
#endif
//####glStencilFuncSeparate
#ifdef glStencilFuncSeparate
	{"glStencilFuncSeparate", luaglew_glStencilFuncSeparate},
#endif
//####glStencilMask
#ifdef glStencilMask
	{"glStencilMask", luaglew_glStencilMask},
#endif
//####glStencilMaskSeparate
#ifdef glStencilMaskSeparate
	{"glStencilMaskSeparate", luaglew_glStencilMaskSeparate},
#endif
//####glStencilOp
#ifdef glStencilOp
	{"glStencilOp", luaglew_glStencilOp},
#endif
//####glStencilOpSeparate
#ifdef glStencilOpSeparate
	{"glStencilOpSeparate", luaglew_glStencilOpSeparate},
#endif
//####glSwapAPPLE
#ifdef glSwapAPPLE
	{"glSwapAPPLE", luaglew_glSwapAPPLE},
#endif
//####glTexCoord1d
#ifdef glTexCoord1d
	{"glTexCoord1d", luaglew_glTexCoord1d},
#endif
//####glTexCoord1dv
#ifdef glTexCoord1dv
	{"glTexCoord1dv", luaglew_glTexCoord1dv},
#endif
//####glTexCoord1f
#ifdef glTexCoord1f
	{"glTexCoord1f", luaglew_glTexCoord1f},
#endif
//####glTexCoord1fv
#ifdef glTexCoord1fv
	{"glTexCoord1fv", luaglew_glTexCoord1fv},
#endif
//####glTexCoord1i
#ifdef glTexCoord1i
	{"glTexCoord1i", luaglew_glTexCoord1i},
#endif
//####glTexCoord1iv
#ifdef glTexCoord1iv
	{"glTexCoord1iv", luaglew_glTexCoord1iv},
#endif
//####glTexCoord1s
#ifdef glTexCoord1s
	{"glTexCoord1s", luaglew_glTexCoord1s},
#endif
//####glTexCoord1sv
#ifdef glTexCoord1sv
	{"glTexCoord1sv", luaglew_glTexCoord1sv},
#endif
//####glTexCoord2d
#ifdef glTexCoord2d
	{"glTexCoord2d", luaglew_glTexCoord2d},
#endif
//####glTexCoord2dv
#ifdef glTexCoord2dv
	{"glTexCoord2dv", luaglew_glTexCoord2dv},
#endif
//####glTexCoord2f
#ifdef glTexCoord2f
	{"glTexCoord2f", luaglew_glTexCoord2f},
#endif
//####glTexCoord2fv
#ifdef glTexCoord2fv
	{"glTexCoord2fv", luaglew_glTexCoord2fv},
#endif
//####glTexCoord2i
#ifdef glTexCoord2i
	{"glTexCoord2i", luaglew_glTexCoord2i},
#endif
//####glTexCoord2iv
#ifdef glTexCoord2iv
	{"glTexCoord2iv", luaglew_glTexCoord2iv},
#endif
//####glTexCoord2s
#ifdef glTexCoord2s
	{"glTexCoord2s", luaglew_glTexCoord2s},
#endif
//####glTexCoord2sv
#ifdef glTexCoord2sv
	{"glTexCoord2sv", luaglew_glTexCoord2sv},
#endif
//####glTexCoord3d
#ifdef glTexCoord3d
	{"glTexCoord3d", luaglew_glTexCoord3d},
#endif
//####glTexCoord3dv
#ifdef glTexCoord3dv
	{"glTexCoord3dv", luaglew_glTexCoord3dv},
#endif
//####glTexCoord3f
#ifdef glTexCoord3f
	{"glTexCoord3f", luaglew_glTexCoord3f},
#endif
//####glTexCoord3fv
#ifdef glTexCoord3fv
	{"glTexCoord3fv", luaglew_glTexCoord3fv},
#endif
//####glTexCoord3i
#ifdef glTexCoord3i
	{"glTexCoord3i", luaglew_glTexCoord3i},
#endif
//####glTexCoord3iv
#ifdef glTexCoord3iv
	{"glTexCoord3iv", luaglew_glTexCoord3iv},
#endif
//####glTexCoord3s
#ifdef glTexCoord3s
	{"glTexCoord3s", luaglew_glTexCoord3s},
#endif
//####glTexCoord3sv
#ifdef glTexCoord3sv
	{"glTexCoord3sv", luaglew_glTexCoord3sv},
#endif
//####glTexCoord4d
#ifdef glTexCoord4d
	{"glTexCoord4d", luaglew_glTexCoord4d},
#endif
//####glTexCoord4dv
#ifdef glTexCoord4dv
	{"glTexCoord4dv", luaglew_glTexCoord4dv},
#endif
//####glTexCoord4f
#ifdef glTexCoord4f
	{"glTexCoord4f", luaglew_glTexCoord4f},
#endif
//####glTexCoord4fv
#ifdef glTexCoord4fv
	{"glTexCoord4fv", luaglew_glTexCoord4fv},
#endif
//####glTexCoord4i
#ifdef glTexCoord4i
	{"glTexCoord4i", luaglew_glTexCoord4i},
#endif
//####glTexCoord4iv
#ifdef glTexCoord4iv
	{"glTexCoord4iv", luaglew_glTexCoord4iv},
#endif
//####glTexCoord4s
#ifdef glTexCoord4s
	{"glTexCoord4s", luaglew_glTexCoord4s},
#endif
//####glTexCoord4sv
#ifdef glTexCoord4sv
	{"glTexCoord4sv", luaglew_glTexCoord4sv},
#endif
//####glTexCoordPointer
#ifdef glTexCoordPointer
	{"glTexCoordPointer", luaglew_glTexCoordPointer},
#endif
//####glTexEnvf
#ifdef glTexEnvf
	{"glTexEnvf", luaglew_glTexEnvf},
#endif
//####glTexEnvfv
#ifdef glTexEnvfv
	{"glTexEnvfv", luaglew_glTexEnvfv},
#endif
//####glTexEnvi
#ifdef glTexEnvi
	{"glTexEnvi", luaglew_glTexEnvi},
#endif
//####glTexEnviv
#ifdef glTexEnviv
	{"glTexEnviv", luaglew_glTexEnviv},
#endif
//####glTexGend
#ifdef glTexGend
	{"glTexGend", luaglew_glTexGend},
#endif
//####glTexGendv
#ifdef glTexGendv
	{"glTexGendv", luaglew_glTexGendv},
#endif
//####glTexGenf
#ifdef glTexGenf
	{"glTexGenf", luaglew_glTexGenf},
#endif
//####glTexGenfv
#ifdef glTexGenfv
	{"glTexGenfv", luaglew_glTexGenfv},
#endif
//####glTexGeni
#ifdef glTexGeni
	{"glTexGeni", luaglew_glTexGeni},
#endif
//####glTexGeniv
#ifdef glTexGeniv
	{"glTexGeniv", luaglew_glTexGeniv},
#endif
//####glTexImage1D
#ifdef glTexImage1D
	{"glTexImage1D", luaglew_glTexImage1D},
#endif
//####glTexImage2D
#ifdef glTexImage2D
	{"glTexImage2D", luaglew_glTexImage2D},
#endif
//####glTexImage3D
#ifdef glTexImage3D
	{"glTexImage3D", luaglew_glTexImage3D},
#endif
//####glTexParameterIivEXT
#ifdef glTexParameterIivEXT
	{"glTexParameterIivEXT", luaglew_glTexParameterIivEXT},
#endif
//####glTexParameterIuivEXT
#ifdef glTexParameterIuivEXT
	{"glTexParameterIuivEXT", luaglew_glTexParameterIuivEXT},
#endif
//####glTexParameterf
#ifdef glTexParameterf
	{"glTexParameterf", luaglew_glTexParameterf},
#endif
//####glTexParameterfv
#ifdef glTexParameterfv
	{"glTexParameterfv", luaglew_glTexParameterfv},
#endif
//####glTexParameteri
#ifdef glTexParameteri
	{"glTexParameteri", luaglew_glTexParameteri},
#endif
//####glTexParameteriv
#ifdef glTexParameteriv
	{"glTexParameteriv", luaglew_glTexParameteriv},
#endif
//####glTexSubImage1D
#ifdef glTexSubImage1D
	{"glTexSubImage1D", luaglew_glTexSubImage1D},
#endif
//####glTexSubImage2D
#ifdef glTexSubImage2D
	{"glTexSubImage2D", luaglew_glTexSubImage2D},
#endif
//####glTextureRangeAPPLE
#ifdef glTextureRangeAPPLE
	{"glTextureRangeAPPLE", luaglew_glTextureRangeAPPLE},
#endif
//####glTransformFeedbackVaryingsEXT
#ifdef glTransformFeedbackVaryingsEXT
	{"glTransformFeedbackVaryingsEXT", luaglew_glTransformFeedbackVaryingsEXT},
#endif
//####glTranslated
#ifdef glTranslated
	{"glTranslated", luaglew_glTranslated},
#endif
//####glTranslatef
#ifdef glTranslatef
	{"glTranslatef", luaglew_glTranslatef},
#endif
//####glUniform1fARB
#ifdef glUniform1fARB
	{"glUniform1fARB", luaglew_glUniform1fARB},
#endif
//####glUniform1fv
#ifdef glUniform1fv
	{"glUniform1fv", luaglew_glUniform1fv},
#endif
//####glUniform1fvARB
#ifdef glUniform1fvARB
	{"glUniform1fvARB", luaglew_glUniform1fvARB},
#endif
//####glUniform1iARB
#ifdef glUniform1iARB
	{"glUniform1iARB", luaglew_glUniform1iARB},
#endif
//####glUniform1iv
#ifdef glUniform1iv
	{"glUniform1iv", luaglew_glUniform1iv},
#endif
//####glUniform1ivARB
#ifdef glUniform1ivARB
	{"glUniform1ivARB", luaglew_glUniform1ivARB},
#endif
//####glUniform2fARB
#ifdef glUniform2fARB
	{"glUniform2fARB", luaglew_glUniform2fARB},
#endif
//####glUniform2fv
#ifdef glUniform2fv
	{"glUniform2fv", luaglew_glUniform2fv},
#endif
//####glUniform2fvARB
#ifdef glUniform2fvARB
	{"glUniform2fvARB", luaglew_glUniform2fvARB},
#endif
//####glUniform2iARB
#ifdef glUniform2iARB
	{"glUniform2iARB", luaglew_glUniform2iARB},
#endif
//####glUniform2ivARB
#ifdef glUniform2ivARB
	{"glUniform2ivARB", luaglew_glUniform2ivARB},
#endif
//####glUniform3fARB
#ifdef glUniform3fARB
	{"glUniform3fARB", luaglew_glUniform3fARB},
#endif
//####glUniform3fv
#ifdef glUniform3fv
	{"glUniform3fv", luaglew_glUniform3fv},
#endif
//####glUniform3fvARB
#ifdef glUniform3fvARB
	{"glUniform3fvARB", luaglew_glUniform3fvARB},
#endif
//####glUniform3iARB
#ifdef glUniform3iARB
	{"glUniform3iARB", luaglew_glUniform3iARB},
#endif
//####glUniform3iv
#ifdef glUniform3iv
	{"glUniform3iv", luaglew_glUniform3iv},
#endif
//####glUniform3ivARB
#ifdef glUniform3ivARB
	{"glUniform3ivARB", luaglew_glUniform3ivARB},
#endif
//####glUniform4fARB
#ifdef glUniform4fARB
	{"glUniform4fARB", luaglew_glUniform4fARB},
#endif
//####glUniform4fv
#ifdef glUniform4fv
	{"glUniform4fv", luaglew_glUniform4fv},
#endif
//####glUniform4fvARB
#ifdef glUniform4fvARB
	{"glUniform4fvARB", luaglew_glUniform4fvARB},
#endif
//####glUniform4iARB
#ifdef glUniform4iARB
	{"glUniform4iARB", luaglew_glUniform4iARB},
#endif
//####glUniform4iv
#ifdef glUniform4iv
	{"glUniform4iv", luaglew_glUniform4iv},
#endif
//####glUniform4ivARB
#ifdef glUniform4ivARB
	{"glUniform4ivARB", luaglew_glUniform4ivARB},
#endif
//####glUniformBlockBinding
#ifdef glUniformBlockBinding
	{"glUniformBlockBinding", luaglew_glUniformBlockBinding},
#endif
//####glUniformMatrix2fv
#ifdef glUniformMatrix2fv
	{"glUniformMatrix2fv", luaglew_glUniformMatrix2fv},
#endif
//####glUniformMatrix2fvARB
#ifdef glUniformMatrix2fvARB
	{"glUniformMatrix2fvARB", luaglew_glUniformMatrix2fvARB},
#endif
//####glUniformMatrix3fv
#ifdef glUniformMatrix3fv
	{"glUniformMatrix3fv", luaglew_glUniformMatrix3fv},
#endif
//####glUniformMatrix3fvARB
#ifdef glUniformMatrix3fvARB
	{"glUniformMatrix3fvARB", luaglew_glUniformMatrix3fvARB},
#endif
//####glUniformMatrix4fv
#ifdef glUniformMatrix4fv
	{"glUniformMatrix4fv", luaglew_glUniformMatrix4fv},
#endif
//####glUniformMatrix4fvARB
#ifdef glUniformMatrix4fvARB
	{"glUniformMatrix4fvARB", luaglew_glUniformMatrix4fvARB},
#endif
//####glUnlockArraysEXT
#ifdef glUnlockArraysEXT
	{"glUnlockArraysEXT", luaglew_glUnlockArraysEXT},
#endif
//####glUseProgramObjectARB
#ifdef glUseProgramObjectARB
	{"glUseProgramObjectARB", luaglew_glUseProgramObjectARB},
#endif
//####glValidateProgramARB
#ifdef glValidateProgramARB
	{"glValidateProgramARB", luaglew_glValidateProgramARB},
#endif
//####glVertex2d
#ifdef glVertex2d
	{"glVertex2d", luaglew_glVertex2d},
#endif
//####glVertex2dv
#ifdef glVertex2dv
	{"glVertex2dv", luaglew_glVertex2dv},
#endif
//####glVertex2f
#ifdef glVertex2f
	{"glVertex2f", luaglew_glVertex2f},
#endif
//####glVertex2fv
#ifdef glVertex2fv
	{"glVertex2fv", luaglew_glVertex2fv},
#endif
//####glVertex2i
#ifdef glVertex2i
	{"glVertex2i", luaglew_glVertex2i},
#endif
//####glVertex2iv
#ifdef glVertex2iv
	{"glVertex2iv", luaglew_glVertex2iv},
#endif
//####glVertex2s
#ifdef glVertex2s
	{"glVertex2s", luaglew_glVertex2s},
#endif
//####glVertex2sv
#ifdef glVertex2sv
	{"glVertex2sv", luaglew_glVertex2sv},
#endif
//####glVertex3d
#ifdef glVertex3d
	{"glVertex3d", luaglew_glVertex3d},
#endif
//####glVertex3dv
#ifdef glVertex3dv
	{"glVertex3dv", luaglew_glVertex3dv},
#endif
//####glVertex3f
#ifdef glVertex3f
	{"glVertex3f", luaglew_glVertex3f},
#endif
//####glVertex3fv
#ifdef glVertex3fv
	{"glVertex3fv", luaglew_glVertex3fv},
#endif
//####glVertex3i
#ifdef glVertex3i
	{"glVertex3i", luaglew_glVertex3i},
#endif
//####glVertex3iv
#ifdef glVertex3iv
	{"glVertex3iv", luaglew_glVertex3iv},
#endif
//####glVertex3s
#ifdef glVertex3s
	{"glVertex3s", luaglew_glVertex3s},
#endif
//####glVertex3sv
#ifdef glVertex3sv
	{"glVertex3sv", luaglew_glVertex3sv},
#endif
//####glVertex4d
#ifdef glVertex4d
	{"glVertex4d", luaglew_glVertex4d},
#endif
//####glVertex4dv
#ifdef glVertex4dv
	{"glVertex4dv", luaglew_glVertex4dv},
#endif
//####glVertex4f
#ifdef glVertex4f
	{"glVertex4f", luaglew_glVertex4f},
#endif
//####glVertex4fv
#ifdef glVertex4fv
	{"glVertex4fv", luaglew_glVertex4fv},
#endif
//####glVertex4i
#ifdef glVertex4i
	{"glVertex4i", luaglew_glVertex4i},
#endif
//####glVertex4iv
#ifdef glVertex4iv
	{"glVertex4iv", luaglew_glVertex4iv},
#endif
//####glVertex4s
#ifdef glVertex4s
	{"glVertex4s", luaglew_glVertex4s},
#endif
//####glVertex4sv
#ifdef glVertex4sv
	{"glVertex4sv", luaglew_glVertex4sv},
#endif
//####glVertexArrayParameteriAPPLE
#ifdef glVertexArrayParameteriAPPLE
	{"glVertexArrayParameteriAPPLE", luaglew_glVertexArrayParameteriAPPLE},
#endif
//####glVertexArrayRangeAPPLE
#ifdef glVertexArrayRangeAPPLE
	{"glVertexArrayRangeAPPLE", luaglew_glVertexArrayRangeAPPLE},
#endif
//####glVertexAttrib1dARB
#ifdef glVertexAttrib1dARB
	{"glVertexAttrib1dARB", luaglew_glVertexAttrib1dARB},
#endif
//####glVertexAttrib1dv
#ifdef glVertexAttrib1dv
	{"glVertexAttrib1dv", luaglew_glVertexAttrib1dv},
#endif
//####glVertexAttrib1dvARB
#ifdef glVertexAttrib1dvARB
	{"glVertexAttrib1dvARB", luaglew_glVertexAttrib1dvARB},
#endif
//####glVertexAttrib1fARB
#ifdef glVertexAttrib1fARB
	{"glVertexAttrib1fARB", luaglew_glVertexAttrib1fARB},
#endif
//####glVertexAttrib1fv
#ifdef glVertexAttrib1fv
	{"glVertexAttrib1fv", luaglew_glVertexAttrib1fv},
#endif
//####glVertexAttrib1fvARB
#ifdef glVertexAttrib1fvARB
	{"glVertexAttrib1fvARB", luaglew_glVertexAttrib1fvARB},
#endif
//####glVertexAttrib1sARB
#ifdef glVertexAttrib1sARB
	{"glVertexAttrib1sARB", luaglew_glVertexAttrib1sARB},
#endif
//####glVertexAttrib1sv
#ifdef glVertexAttrib1sv
	{"glVertexAttrib1sv", luaglew_glVertexAttrib1sv},
#endif
//####glVertexAttrib1svARB
#ifdef glVertexAttrib1svARB
	{"glVertexAttrib1svARB", luaglew_glVertexAttrib1svARB},
#endif
//####glVertexAttrib2dARB
#ifdef glVertexAttrib2dARB
	{"glVertexAttrib2dARB", luaglew_glVertexAttrib2dARB},
#endif
//####glVertexAttrib2dv
#ifdef glVertexAttrib2dv
	{"glVertexAttrib2dv", luaglew_glVertexAttrib2dv},
#endif
//####glVertexAttrib2dvARB
#ifdef glVertexAttrib2dvARB
	{"glVertexAttrib2dvARB", luaglew_glVertexAttrib2dvARB},
#endif
//####glVertexAttrib2fARB
#ifdef glVertexAttrib2fARB
	{"glVertexAttrib2fARB", luaglew_glVertexAttrib2fARB},
#endif
//####glVertexAttrib2fv
#ifdef glVertexAttrib2fv
	{"glVertexAttrib2fv", luaglew_glVertexAttrib2fv},
#endif
//####glVertexAttrib2fvARB
#ifdef glVertexAttrib2fvARB
	{"glVertexAttrib2fvARB", luaglew_glVertexAttrib2fvARB},
#endif
//####glVertexAttrib2sARB
#ifdef glVertexAttrib2sARB
	{"glVertexAttrib2sARB", luaglew_glVertexAttrib2sARB},
#endif
//####glVertexAttrib2sv
#ifdef glVertexAttrib2sv
	{"glVertexAttrib2sv", luaglew_glVertexAttrib2sv},
#endif
//####glVertexAttrib2svARB
#ifdef glVertexAttrib2svARB
	{"glVertexAttrib2svARB", luaglew_glVertexAttrib2svARB},
#endif
//####glVertexAttrib3dARB
#ifdef glVertexAttrib3dARB
	{"glVertexAttrib3dARB", luaglew_glVertexAttrib3dARB},
#endif
//####glVertexAttrib3dv
#ifdef glVertexAttrib3dv
	{"glVertexAttrib3dv", luaglew_glVertexAttrib3dv},
#endif
//####glVertexAttrib3dvARB
#ifdef glVertexAttrib3dvARB
	{"glVertexAttrib3dvARB", luaglew_glVertexAttrib3dvARB},
#endif
//####glVertexAttrib3fARB
#ifdef glVertexAttrib3fARB
	{"glVertexAttrib3fARB", luaglew_glVertexAttrib3fARB},
#endif
//####glVertexAttrib3fv
#ifdef glVertexAttrib3fv
	{"glVertexAttrib3fv", luaglew_glVertexAttrib3fv},
#endif
//####glVertexAttrib3fvARB
#ifdef glVertexAttrib3fvARB
	{"glVertexAttrib3fvARB", luaglew_glVertexAttrib3fvARB},
#endif
//####glVertexAttrib3sARB
#ifdef glVertexAttrib3sARB
	{"glVertexAttrib3sARB", luaglew_glVertexAttrib3sARB},
#endif
//####glVertexAttrib3sv
#ifdef glVertexAttrib3sv
	{"glVertexAttrib3sv", luaglew_glVertexAttrib3sv},
#endif
//####glVertexAttrib3svARB
#ifdef glVertexAttrib3svARB
	{"glVertexAttrib3svARB", luaglew_glVertexAttrib3svARB},
#endif
//####glVertexAttrib4Nbv
#ifdef glVertexAttrib4Nbv
	{"glVertexAttrib4Nbv", luaglew_glVertexAttrib4Nbv},
#endif
//####glVertexAttrib4NbvARB
#ifdef glVertexAttrib4NbvARB
	{"glVertexAttrib4NbvARB", luaglew_glVertexAttrib4NbvARB},
#endif
//####glVertexAttrib4Niv
#ifdef glVertexAttrib4Niv
	{"glVertexAttrib4Niv", luaglew_glVertexAttrib4Niv},
#endif
//####glVertexAttrib4NivARB
#ifdef glVertexAttrib4NivARB
	{"glVertexAttrib4NivARB", luaglew_glVertexAttrib4NivARB},
#endif
//####glVertexAttrib4Nsv
#ifdef glVertexAttrib4Nsv
	{"glVertexAttrib4Nsv", luaglew_glVertexAttrib4Nsv},
#endif
//####glVertexAttrib4NsvARB
#ifdef glVertexAttrib4NsvARB
	{"glVertexAttrib4NsvARB", luaglew_glVertexAttrib4NsvARB},
#endif
//####glVertexAttrib4NubARB
#ifdef glVertexAttrib4NubARB
	{"glVertexAttrib4NubARB", luaglew_glVertexAttrib4NubARB},
#endif
//####glVertexAttrib4Nubv
#ifdef glVertexAttrib4Nubv
	{"glVertexAttrib4Nubv", luaglew_glVertexAttrib4Nubv},
#endif
//####glVertexAttrib4NubvARB
#ifdef glVertexAttrib4NubvARB
	{"glVertexAttrib4NubvARB", luaglew_glVertexAttrib4NubvARB},
#endif
//####glVertexAttrib4Nuiv
#ifdef glVertexAttrib4Nuiv
	{"glVertexAttrib4Nuiv", luaglew_glVertexAttrib4Nuiv},
#endif
//####glVertexAttrib4NuivARB
#ifdef glVertexAttrib4NuivARB
	{"glVertexAttrib4NuivARB", luaglew_glVertexAttrib4NuivARB},
#endif
//####glVertexAttrib4Nusv
#ifdef glVertexAttrib4Nusv
	{"glVertexAttrib4Nusv", luaglew_glVertexAttrib4Nusv},
#endif
//####glVertexAttrib4NusvARB
#ifdef glVertexAttrib4NusvARB
	{"glVertexAttrib4NusvARB", luaglew_glVertexAttrib4NusvARB},
#endif
//####glVertexAttrib4bv
#ifdef glVertexAttrib4bv
	{"glVertexAttrib4bv", luaglew_glVertexAttrib4bv},
#endif
//####glVertexAttrib4bvARB
#ifdef glVertexAttrib4bvARB
	{"glVertexAttrib4bvARB", luaglew_glVertexAttrib4bvARB},
#endif
//####glVertexAttrib4dARB
#ifdef glVertexAttrib4dARB
	{"glVertexAttrib4dARB", luaglew_glVertexAttrib4dARB},
#endif
//####glVertexAttrib4dv
#ifdef glVertexAttrib4dv
	{"glVertexAttrib4dv", luaglew_glVertexAttrib4dv},
#endif
//####glVertexAttrib4dvARB
#ifdef glVertexAttrib4dvARB
	{"glVertexAttrib4dvARB", luaglew_glVertexAttrib4dvARB},
#endif
//####glVertexAttrib4fARB
#ifdef glVertexAttrib4fARB
	{"glVertexAttrib4fARB", luaglew_glVertexAttrib4fARB},
#endif
//####glVertexAttrib4fv
#ifdef glVertexAttrib4fv
	{"glVertexAttrib4fv", luaglew_glVertexAttrib4fv},
#endif
//####glVertexAttrib4fvARB
#ifdef glVertexAttrib4fvARB
	{"glVertexAttrib4fvARB", luaglew_glVertexAttrib4fvARB},
#endif
//####glVertexAttrib4iv
#ifdef glVertexAttrib4iv
	{"glVertexAttrib4iv", luaglew_glVertexAttrib4iv},
#endif
//####glVertexAttrib4ivARB
#ifdef glVertexAttrib4ivARB
	{"glVertexAttrib4ivARB", luaglew_glVertexAttrib4ivARB},
#endif
//####glVertexAttrib4sARB
#ifdef glVertexAttrib4sARB
	{"glVertexAttrib4sARB", luaglew_glVertexAttrib4sARB},
#endif
//####glVertexAttrib4sv
#ifdef glVertexAttrib4sv
	{"glVertexAttrib4sv", luaglew_glVertexAttrib4sv},
#endif
//####glVertexAttrib4svARB
#ifdef glVertexAttrib4svARB
	{"glVertexAttrib4svARB", luaglew_glVertexAttrib4svARB},
#endif
//####glVertexAttrib4ubv
#ifdef glVertexAttrib4ubv
	{"glVertexAttrib4ubv", luaglew_glVertexAttrib4ubv},
#endif
//####glVertexAttrib4ubvARB
#ifdef glVertexAttrib4ubvARB
	{"glVertexAttrib4ubvARB", luaglew_glVertexAttrib4ubvARB},
#endif
//####glVertexAttrib4uiv
#ifdef glVertexAttrib4uiv
	{"glVertexAttrib4uiv", luaglew_glVertexAttrib4uiv},
#endif
//####glVertexAttrib4uivARB
#ifdef glVertexAttrib4uivARB
	{"glVertexAttrib4uivARB", luaglew_glVertexAttrib4uivARB},
#endif
//####glVertexAttrib4usv
#ifdef glVertexAttrib4usv
	{"glVertexAttrib4usv", luaglew_glVertexAttrib4usv},
#endif
//####glVertexAttrib4usvARB
#ifdef glVertexAttrib4usvARB
	{"glVertexAttrib4usvARB", luaglew_glVertexAttrib4usvARB},
#endif
//####glVertexAttribDivisorARB
#ifdef glVertexAttribDivisorARB
	{"glVertexAttribDivisorARB", luaglew_glVertexAttribDivisorARB},
#endif
//####glVertexAttribPointer
#ifdef glVertexAttribPointer
	{"glVertexAttribPointer", luaglew_glVertexAttribPointer},
#endif
//####glVertexAttribPointerARB
#ifdef glVertexAttribPointerARB
	{"glVertexAttribPointerARB", luaglew_glVertexAttribPointerARB},
#endif
//####glVertexBlendARB
#ifdef glVertexBlendARB
	{"glVertexBlendARB", luaglew_glVertexBlendARB},
#endif
//####glVertexPointer
#ifdef glVertexPointer
	{"glVertexPointer", luaglew_glVertexPointer},
#endif
//####glViewport
#ifdef glViewport
	{"glViewport", luaglew_glViewport},
#endif
//####glWeightPointerARB
#ifdef glWeightPointerARB
	{"glWeightPointerARB", luaglew_glWeightPointerARB},
#endif
//####glWeightbvARB
#ifdef glWeightbvARB
	{"glWeightbvARB", luaglew_glWeightbvARB},
#endif
//####glWeightdvARB
#ifdef glWeightdvARB
	{"glWeightdvARB", luaglew_glWeightdvARB},
#endif
//####glWeightfvARB
#ifdef glWeightfvARB
	{"glWeightfvARB", luaglew_glWeightfvARB},
#endif
//####glWeightivARB
#ifdef glWeightivARB
	{"glWeightivARB", luaglew_glWeightivARB},
#endif
//####glWeightsvARB
#ifdef glWeightsvARB
	{"glWeightsvARB", luaglew_glWeightsvARB},
#endif
//####glWeightubvARB
#ifdef glWeightubvARB
	{"glWeightubvARB", luaglew_glWeightubvARB},
#endif
//####glWeightuivARB
#ifdef glWeightuivARB
	{"glWeightuivARB", luaglew_glWeightuivARB},
#endif
//####glWeightusvARB
#ifdef glWeightusvARB
	{"glWeightusvARB", luaglew_glWeightusvARB},
#endif
//####glWindowPos2dARB
#ifdef glWindowPos2dARB
	{"glWindowPos2dARB", luaglew_glWindowPos2dARB},
#endif
//####glWindowPos2dv
#ifdef glWindowPos2dv
	{"glWindowPos2dv", luaglew_glWindowPos2dv},
#endif
//####glWindowPos2dvARB
#ifdef glWindowPos2dvARB
	{"glWindowPos2dvARB", luaglew_glWindowPos2dvARB},
#endif
//####glWindowPos2fARB
#ifdef glWindowPos2fARB
	{"glWindowPos2fARB", luaglew_glWindowPos2fARB},
#endif
//####glWindowPos2fv
#ifdef glWindowPos2fv
	{"glWindowPos2fv", luaglew_glWindowPos2fv},
#endif
//####glWindowPos2fvARB
#ifdef glWindowPos2fvARB
	{"glWindowPos2fvARB", luaglew_glWindowPos2fvARB},
#endif
//####glWindowPos2iARB
#ifdef glWindowPos2iARB
	{"glWindowPos2iARB", luaglew_glWindowPos2iARB},
#endif
//####glWindowPos2iv
#ifdef glWindowPos2iv
	{"glWindowPos2iv", luaglew_glWindowPos2iv},
#endif
//####glWindowPos2ivARB
#ifdef glWindowPos2ivARB
	{"glWindowPos2ivARB", luaglew_glWindowPos2ivARB},
#endif
//####glWindowPos2sARB
#ifdef glWindowPos2sARB
	{"glWindowPos2sARB", luaglew_glWindowPos2sARB},
#endif
//####glWindowPos2sv
#ifdef glWindowPos2sv
	{"glWindowPos2sv", luaglew_glWindowPos2sv},
#endif
//####glWindowPos2svARB
#ifdef glWindowPos2svARB
	{"glWindowPos2svARB", luaglew_glWindowPos2svARB},
#endif
//####glWindowPos3dARB
#ifdef glWindowPos3dARB
	{"glWindowPos3dARB", luaglew_glWindowPos3dARB},
#endif
//####glWindowPos3dv
#ifdef glWindowPos3dv
	{"glWindowPos3dv", luaglew_glWindowPos3dv},
#endif
//####glWindowPos3dvARB
#ifdef glWindowPos3dvARB
	{"glWindowPos3dvARB", luaglew_glWindowPos3dvARB},
#endif
//####glWindowPos3fARB
#ifdef glWindowPos3fARB
	{"glWindowPos3fARB", luaglew_glWindowPos3fARB},
#endif
//####glWindowPos3fv
#ifdef glWindowPos3fv
	{"glWindowPos3fv", luaglew_glWindowPos3fv},
#endif
//####glWindowPos3fvARB
#ifdef glWindowPos3fvARB
	{"glWindowPos3fvARB", luaglew_glWindowPos3fvARB},
#endif
//####glWindowPos3iARB
#ifdef glWindowPos3iARB
	{"glWindowPos3iARB", luaglew_glWindowPos3iARB},
#endif
//####glWindowPos3iv
#ifdef glWindowPos3iv
	{"glWindowPos3iv", luaglew_glWindowPos3iv},
#endif
//####glWindowPos3ivARB
#ifdef glWindowPos3ivARB
	{"glWindowPos3ivARB", luaglew_glWindowPos3ivARB},
#endif
//####glWindowPos3sARB
#ifdef glWindowPos3sARB
	{"glWindowPos3sARB", luaglew_glWindowPos3sARB},
#endif
//####glWindowPos3sv
#ifdef glWindowPos3sv
	{"glWindowPos3sv", luaglew_glWindowPos3sv},
#endif
//####glWindowPos3svARB
#ifdef glWindowPos3svARB
	{"glWindowPos3svARB", luaglew_glWindowPos3svARB},
#endif
//####glAddSwapHintRectWIN
#ifdef glAddSwapHintRectWIN
	{"glAddSwapHintRectWIN", luaglew_glAddSwapHintRectWIN},
#endif
//####wglEnumGpusNV
#ifdef wglEnumGpusNV
	{"wglEnumGpusNV", luaglew_wglEnumGpusNV},
#endif
//####wglAllocateMemoryNV
#ifdef wglAllocateMemoryNV
	{"wglAllocateMemoryNV", luaglew_wglAllocateMemoryNV},
#endif
//####wglFreeMemoryNV
#ifdef wglFreeMemoryNV
	{"wglFreeMemoryNV", luaglew_wglFreeMemoryNV},
#endif
	{0, 0}
};
