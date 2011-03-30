static const struct luaL_Reg luaglew_lib[] = {
#ifdef glGetTexParameterPointervAPPLE
	{"glGetTexParameterPointervAPPLE", luaglew_glGetTexParameterPointervAPPLE},
#endif
#ifdef glColorTable
	{"glColorTable", luaglew_glColorTable},
#endif
#ifdef glColorSubTable
	{"glColorSubTable", luaglew_glColorSubTable},
#endif
#ifdef glColorTableParameteriv
	{"glColorTableParameteriv", luaglew_glColorTableParameteriv},
#endif
#ifdef glColorTableParameterfv
	{"glColorTableParameterfv", luaglew_glColorTableParameterfv},
#endif
#ifdef glCopyColorSubTable
	{"glCopyColorSubTable", luaglew_glCopyColorSubTable},
#endif
#ifdef glCopyColorTable
	{"glCopyColorTable", luaglew_glCopyColorTable},
#endif
#ifdef glGetColorTable
	{"glGetColorTable", luaglew_glGetColorTable},
#endif
#ifdef glGetColorTableParameterfv
	{"glGetColorTableParameterfv", luaglew_glGetColorTableParameterfv},
#endif
#ifdef glGetColorTableParameteriv
	{"glGetColorTableParameteriv", luaglew_glGetColorTableParameteriv},
#endif
#ifdef glHistogram
	{"glHistogram", luaglew_glHistogram},
#endif
#ifdef glResetHistogram
	{"glResetHistogram", luaglew_glResetHistogram},
#endif
#ifdef glGetHistogram
	{"glGetHistogram", luaglew_glGetHistogram},
#endif
#ifdef glGetHistogramParameterfv
	{"glGetHistogramParameterfv", luaglew_glGetHistogramParameterfv},
#endif
#ifdef glGetHistogramParameteriv
	{"glGetHistogramParameteriv", luaglew_glGetHistogramParameteriv},
#endif
#ifdef glResetMinmax
	{"glResetMinmax", luaglew_glResetMinmax},
#endif
#ifdef glGetMinmaxParameterfv
	{"glGetMinmaxParameterfv", luaglew_glGetMinmaxParameterfv},
#endif
#ifdef glGetMinmaxParameteriv
	{"glGetMinmaxParameteriv", luaglew_glGetMinmaxParameteriv},
#endif
#ifdef glConvolutionFilter1D
	{"glConvolutionFilter1D", luaglew_glConvolutionFilter1D},
#endif
#ifdef glConvolutionFilter2D
	{"glConvolutionFilter2D", luaglew_glConvolutionFilter2D},
#endif
#ifdef glConvolutionParameterf
	{"glConvolutionParameterf", luaglew_glConvolutionParameterf},
#endif
#ifdef glConvolutionParameterfv
	{"glConvolutionParameterfv", luaglew_glConvolutionParameterfv},
#endif
#ifdef glConvolutionParameteri
	{"glConvolutionParameteri", luaglew_glConvolutionParameteri},
#endif
#ifdef glConvolutionParameteriv
	{"glConvolutionParameteriv", luaglew_glConvolutionParameteriv},
#endif
#ifdef glCopyConvolutionFilter1D
	{"glCopyConvolutionFilter1D", luaglew_glCopyConvolutionFilter1D},
#endif
#ifdef glCopyConvolutionFilter2D
	{"glCopyConvolutionFilter2D", luaglew_glCopyConvolutionFilter2D},
#endif
#ifdef glGetConvolutionParameterfv
	{"glGetConvolutionParameterfv", luaglew_glGetConvolutionParameterfv},
#endif
#ifdef glGetConvolutionParameteriv
	{"glGetConvolutionParameteriv", luaglew_glGetConvolutionParameteriv},
#endif
#ifdef glSeparableFilter2D
	{"glSeparableFilter2D", luaglew_glSeparableFilter2D},
#endif
#ifdef glCurrentPaletteMatrixARB
	{"glCurrentPaletteMatrixARB", luaglew_glCurrentPaletteMatrixARB},
#endif
#ifdef glMatrixIndexPointerARB
	{"glMatrixIndexPointerARB", luaglew_glMatrixIndexPointerARB},
#endif
#ifdef glMatrixIndexubvARB
	{"glMatrixIndexubvARB", luaglew_glMatrixIndexubvARB},
#endif
#ifdef glMatrixIndexusvARB
	{"glMatrixIndexusvARB", luaglew_glMatrixIndexusvARB},
#endif
#ifdef glMatrixIndexuivARB
	{"glMatrixIndexuivARB", luaglew_glMatrixIndexuivARB},
#endif
#ifdef glActiveTextureARB
	{"glActiveTextureARB", luaglew_glActiveTextureARB},
#endif
#ifdef glPointParameterfARB
	{"glPointParameterfARB", luaglew_glPointParameterfARB},
#endif
#ifdef glGetnColorTableARB
	{"glGetnColorTableARB", luaglew_glGetnColorTableARB},
#endif
#ifdef glGetnCompressedTexImageARB
	{"glGetnCompressedTexImageARB", luaglew_glGetnCompressedTexImageARB},
#endif
#ifdef glGetnConvolutionFilterARB
	{"glGetnConvolutionFilterARB", luaglew_glGetnConvolutionFilterARB},
#endif
#ifdef glGetnHistogramARB
	{"glGetnHistogramARB", luaglew_glGetnHistogramARB},
#endif
#ifdef glGetnMapdvARB
	{"glGetnMapdvARB", luaglew_glGetnMapdvARB},
#endif
#ifdef glGetnMapfvARB
	{"glGetnMapfvARB", luaglew_glGetnMapfvARB},
#endif
#ifdef glGetnMapivARB
	{"glGetnMapivARB", luaglew_glGetnMapivARB},
#endif
#ifdef glGetnMinmaxARB
	{"glGetnMinmaxARB", luaglew_glGetnMinmaxARB},
#endif
#ifdef glGetnPixelMapfvARB
	{"glGetnPixelMapfvARB", luaglew_glGetnPixelMapfvARB},
#endif
#ifdef glGetnPixelMapuivARB
	{"glGetnPixelMapuivARB", luaglew_glGetnPixelMapuivARB},
#endif
#ifdef glGetnPixelMapusvARB
	{"glGetnPixelMapusvARB", luaglew_glGetnPixelMapusvARB},
#endif
#ifdef glGetnPolygonStippleARB
	{"glGetnPolygonStippleARB", luaglew_glGetnPolygonStippleARB},
#endif
#ifdef glGetnSeparableFilterARB
	{"glGetnSeparableFilterARB", luaglew_glGetnSeparableFilterARB},
#endif
#ifdef glGetnTexImageARB
	{"glGetnTexImageARB", luaglew_glGetnTexImageARB},
#endif
#ifdef glGetnUniformdvARB
	{"glGetnUniformdvARB", luaglew_glGetnUniformdvARB},
#endif
#ifdef glGetnUniformfvARB
	{"glGetnUniformfvARB", luaglew_glGetnUniformfvARB},
#endif
#ifdef glGetnUniformivARB
	{"glGetnUniformivARB", luaglew_glGetnUniformivARB},
#endif
#ifdef glGetnUniformuivARB
	{"glGetnUniformuivARB", luaglew_glGetnUniformuivARB},
#endif
#ifdef glReadnPixelsARB
	{"glReadnPixelsARB", luaglew_glReadnPixelsARB},
#endif
#ifdef glActiveShaderProgram
	{"glActiveShaderProgram", luaglew_glActiveShaderProgram},
#endif
#ifdef glBindProgramPipeline
	{"glBindProgramPipeline", luaglew_glBindProgramPipeline},
#endif
#ifdef glCreateShaderProgramv
	{"glCreateShaderProgramv", luaglew_glCreateShaderProgramv},
#endif
#ifdef glDeleteProgramPipelines
	{"glDeleteProgramPipelines", luaglew_glDeleteProgramPipelines},
#endif
#ifdef glGenProgramPipelines
	{"glGenProgramPipelines", luaglew_glGenProgramPipelines},
#endif
#ifdef glGetProgramPipelineInfoLog
	{"glGetProgramPipelineInfoLog", luaglew_glGetProgramPipelineInfoLog},
#endif
#ifdef glGetProgramPipelineiv
	{"glGetProgramPipelineiv", luaglew_glGetProgramPipelineiv},
#endif
#ifdef glIsProgramPipeline
	{"glIsProgramPipeline", luaglew_glIsProgramPipeline},
#endif
#ifdef glProgramUniform1d
	{"glProgramUniform1d", luaglew_glProgramUniform1d},
#endif
#ifdef glProgramUniform1dv
	{"glProgramUniform1dv", luaglew_glProgramUniform1dv},
#endif
#ifdef glProgramUniform1f
	{"glProgramUniform1f", luaglew_glProgramUniform1f},
#endif
#ifdef glProgramUniform1fv
	{"glProgramUniform1fv", luaglew_glProgramUniform1fv},
#endif
#ifdef glProgramUniform1i
	{"glProgramUniform1i", luaglew_glProgramUniform1i},
#endif
#ifdef glProgramUniform1iv
	{"glProgramUniform1iv", luaglew_glProgramUniform1iv},
#endif
#ifdef glProgramUniform1ui
	{"glProgramUniform1ui", luaglew_glProgramUniform1ui},
#endif
#ifdef glProgramUniform1uiv
	{"glProgramUniform1uiv", luaglew_glProgramUniform1uiv},
#endif
#ifdef glProgramUniform2d
	{"glProgramUniform2d", luaglew_glProgramUniform2d},
#endif
#ifdef glProgramUniform2dv
	{"glProgramUniform2dv", luaglew_glProgramUniform2dv},
#endif
#ifdef glProgramUniform2f
	{"glProgramUniform2f", luaglew_glProgramUniform2f},
#endif
#ifdef glProgramUniform2fv
	{"glProgramUniform2fv", luaglew_glProgramUniform2fv},
#endif
#ifdef glProgramUniform2i
	{"glProgramUniform2i", luaglew_glProgramUniform2i},
#endif
#ifdef glProgramUniform2iv
	{"glProgramUniform2iv", luaglew_glProgramUniform2iv},
#endif
#ifdef glProgramUniform2ui
	{"glProgramUniform2ui", luaglew_glProgramUniform2ui},
#endif
#ifdef glProgramUniform2uiv
	{"glProgramUniform2uiv", luaglew_glProgramUniform2uiv},
#endif
#ifdef glProgramUniform3d
	{"glProgramUniform3d", luaglew_glProgramUniform3d},
#endif
#ifdef glProgramUniform3dv
	{"glProgramUniform3dv", luaglew_glProgramUniform3dv},
#endif
#ifdef glProgramUniform3f
	{"glProgramUniform3f", luaglew_glProgramUniform3f},
#endif
#ifdef glProgramUniform3fv
	{"glProgramUniform3fv", luaglew_glProgramUniform3fv},
#endif
#ifdef glProgramUniform3i
	{"glProgramUniform3i", luaglew_glProgramUniform3i},
#endif
#ifdef glProgramUniform3iv
	{"glProgramUniform3iv", luaglew_glProgramUniform3iv},
#endif
#ifdef glProgramUniform3ui
	{"glProgramUniform3ui", luaglew_glProgramUniform3ui},
#endif
#ifdef glProgramUniform3uiv
	{"glProgramUniform3uiv", luaglew_glProgramUniform3uiv},
#endif
#ifdef glProgramUniform4d
	{"glProgramUniform4d", luaglew_glProgramUniform4d},
#endif
#ifdef glProgramUniform4dv
	{"glProgramUniform4dv", luaglew_glProgramUniform4dv},
#endif
#ifdef glProgramUniform4f
	{"glProgramUniform4f", luaglew_glProgramUniform4f},
#endif
#ifdef glProgramUniform4fv
	{"glProgramUniform4fv", luaglew_glProgramUniform4fv},
#endif
#ifdef glProgramUniform4i
	{"glProgramUniform4i", luaglew_glProgramUniform4i},
#endif
#ifdef glProgramUniform4iv
	{"glProgramUniform4iv", luaglew_glProgramUniform4iv},
#endif
#ifdef glProgramUniform4ui
	{"glProgramUniform4ui", luaglew_glProgramUniform4ui},
#endif
#ifdef glProgramUniform4uiv
	{"glProgramUniform4uiv", luaglew_glProgramUniform4uiv},
#endif
#ifdef glProgramUniformMatrix2dv
	{"glProgramUniformMatrix2dv", luaglew_glProgramUniformMatrix2dv},
#endif
#ifdef glProgramUniformMatrix2fv
	{"glProgramUniformMatrix2fv", luaglew_glProgramUniformMatrix2fv},
#endif
#ifdef glProgramUniformMatrix2x3dv
	{"glProgramUniformMatrix2x3dv", luaglew_glProgramUniformMatrix2x3dv},
#endif
#ifdef glProgramUniformMatrix2x3fv
	{"glProgramUniformMatrix2x3fv", luaglew_glProgramUniformMatrix2x3fv},
#endif
#ifdef glProgramUniformMatrix2x4dv
	{"glProgramUniformMatrix2x4dv", luaglew_glProgramUniformMatrix2x4dv},
#endif
#ifdef glProgramUniformMatrix2x4fv
	{"glProgramUniformMatrix2x4fv", luaglew_glProgramUniformMatrix2x4fv},
#endif
#ifdef glProgramUniformMatrix3dv
	{"glProgramUniformMatrix3dv", luaglew_glProgramUniformMatrix3dv},
#endif
#ifdef glProgramUniformMatrix3fv
	{"glProgramUniformMatrix3fv", luaglew_glProgramUniformMatrix3fv},
#endif
#ifdef glProgramUniformMatrix3x2dv
	{"glProgramUniformMatrix3x2dv", luaglew_glProgramUniformMatrix3x2dv},
#endif
#ifdef glProgramUniformMatrix3x2fv
	{"glProgramUniformMatrix3x2fv", luaglew_glProgramUniformMatrix3x2fv},
#endif
#ifdef glProgramUniformMatrix3x4dv
	{"glProgramUniformMatrix3x4dv", luaglew_glProgramUniformMatrix3x4dv},
#endif
#ifdef glProgramUniformMatrix3x4fv
	{"glProgramUniformMatrix3x4fv", luaglew_glProgramUniformMatrix3x4fv},
#endif
#ifdef glProgramUniformMatrix4dv
	{"glProgramUniformMatrix4dv", luaglew_glProgramUniformMatrix4dv},
#endif
#ifdef glProgramUniformMatrix4fv
	{"glProgramUniformMatrix4fv", luaglew_glProgramUniformMatrix4fv},
#endif
#ifdef glProgramUniformMatrix4x2dv
	{"glProgramUniformMatrix4x2dv", luaglew_glProgramUniformMatrix4x2dv},
#endif
#ifdef glProgramUniformMatrix4x2fv
	{"glProgramUniformMatrix4x2fv", luaglew_glProgramUniformMatrix4x2fv},
#endif
#ifdef glProgramUniformMatrix4x3dv
	{"glProgramUniformMatrix4x3dv", luaglew_glProgramUniformMatrix4x3dv},
#endif
#ifdef glProgramUniformMatrix4x3fv
	{"glProgramUniformMatrix4x3fv", luaglew_glProgramUniformMatrix4x3fv},
#endif
#ifdef glUseProgramStages
	{"glUseProgramStages", luaglew_glUseProgramStages},
#endif
#ifdef glValidateProgramPipeline
	{"glValidateProgramPipeline", luaglew_glValidateProgramPipeline},
#endif
#ifdef glGetVertexAttribLdv
	{"glGetVertexAttribLdv", luaglew_glGetVertexAttribLdv},
#endif
#ifdef glVertexAttribL1d
	{"glVertexAttribL1d", luaglew_glVertexAttribL1d},
#endif
#ifdef glVertexAttribL1dv
	{"glVertexAttribL1dv", luaglew_glVertexAttribL1dv},
#endif
#ifdef glVertexAttribL2d
	{"glVertexAttribL2d", luaglew_glVertexAttribL2d},
#endif
#ifdef glVertexAttribL2dv
	{"glVertexAttribL2dv", luaglew_glVertexAttribL2dv},
#endif
#ifdef glVertexAttribL3d
	{"glVertexAttribL3d", luaglew_glVertexAttribL3d},
#endif
#ifdef glVertexAttribL3dv
	{"glVertexAttribL3dv", luaglew_glVertexAttribL3dv},
#endif
#ifdef glVertexAttribL4d
	{"glVertexAttribL4d", luaglew_glVertexAttribL4d},
#endif
#ifdef glVertexAttribL4dv
	{"glVertexAttribL4dv", luaglew_glVertexAttribL4dv},
#endif
#ifdef glVertexAttribLPointer
	{"glVertexAttribLPointer", luaglew_glVertexAttribLPointer},
#endif
#ifdef glTexBumpParameterivATI
	{"glTexBumpParameterivATI", luaglew_glTexBumpParameterivATI},
#endif
#ifdef glTexBumpParameterfvATI
	{"glTexBumpParameterfvATI", luaglew_glTexBumpParameterfvATI},
#endif
#ifdef glGetTexBumpParameterivATI
	{"glGetTexBumpParameterivATI", luaglew_glGetTexBumpParameterivATI},
#endif
#ifdef glGetTexBumpParameterfvATI
	{"glGetTexBumpParameterfvATI", luaglew_glGetTexBumpParameterfvATI},
#endif
#ifdef glMapObjectBufferATI
	{"glMapObjectBufferATI", luaglew_glMapObjectBufferATI},
#endif
#ifdef glUnmapObjectBufferATI
	{"glUnmapObjectBufferATI", luaglew_glUnmapObjectBufferATI},
#endif
#ifdef glPNTrianglesiATI
	{"glPNTrianglesiATI", luaglew_glPNTrianglesiATI},
#endif
#ifdef glPNTrianglesfATI
	{"glPNTrianglesfATI", luaglew_glPNTrianglesfATI},
#endif
#ifdef glStencilOpSeparateATI
	{"glStencilOpSeparateATI", luaglew_glStencilOpSeparateATI},
#endif
#ifdef glStencilFuncSeparateATI
	{"glStencilFuncSeparateATI", luaglew_glStencilFuncSeparateATI},
#endif
#ifdef glClientActiveVertexStreamATI
	{"glClientActiveVertexStreamATI", luaglew_glClientActiveVertexStreamATI},
#endif
#ifdef glVertexBlendEnviATI
	{"glVertexBlendEnviATI", luaglew_glVertexBlendEnviATI},
#endif
#ifdef glVertexBlendEnvfATI
	{"glVertexBlendEnvfATI", luaglew_glVertexBlendEnvfATI},
#endif
#ifdef glVertexStream2sATI
	{"glVertexStream2sATI", luaglew_glVertexStream2sATI},
#endif
#ifdef glVertexStream2svATI
	{"glVertexStream2svATI", luaglew_glVertexStream2svATI},
#endif
#ifdef glVertexStream2iATI
	{"glVertexStream2iATI", luaglew_glVertexStream2iATI},
#endif
#ifdef glVertexStream2ivATI
	{"glVertexStream2ivATI", luaglew_glVertexStream2ivATI},
#endif
#ifdef glVertexStream2fATI
	{"glVertexStream2fATI", luaglew_glVertexStream2fATI},
#endif
#ifdef glVertexStream2fvATI
	{"glVertexStream2fvATI", luaglew_glVertexStream2fvATI},
#endif
#ifdef glVertexStream2dATI
	{"glVertexStream2dATI", luaglew_glVertexStream2dATI},
#endif
#ifdef glVertexStream2dvATI
	{"glVertexStream2dvATI", luaglew_glVertexStream2dvATI},
#endif
#ifdef glVertexStream3sATI
	{"glVertexStream3sATI", luaglew_glVertexStream3sATI},
#endif
#ifdef glVertexStream3svATI
	{"glVertexStream3svATI", luaglew_glVertexStream3svATI},
#endif
#ifdef glVertexStream3iATI
	{"glVertexStream3iATI", luaglew_glVertexStream3iATI},
#endif
#ifdef glVertexStream3ivATI
	{"glVertexStream3ivATI", luaglew_glVertexStream3ivATI},
#endif
#ifdef glVertexStream3fATI
	{"glVertexStream3fATI", luaglew_glVertexStream3fATI},
#endif
#ifdef glVertexStream3fvATI
	{"glVertexStream3fvATI", luaglew_glVertexStream3fvATI},
#endif
#ifdef glVertexStream3dATI
	{"glVertexStream3dATI", luaglew_glVertexStream3dATI},
#endif
#ifdef glVertexStream3dvATI
	{"glVertexStream3dvATI", luaglew_glVertexStream3dvATI},
#endif
#ifdef glVertexStream4sATI
	{"glVertexStream4sATI", luaglew_glVertexStream4sATI},
#endif
#ifdef glVertexStream4svATI
	{"glVertexStream4svATI", luaglew_glVertexStream4svATI},
#endif
#ifdef glVertexStream4iATI
	{"glVertexStream4iATI", luaglew_glVertexStream4iATI},
#endif
#ifdef glVertexStream4ivATI
	{"glVertexStream4ivATI", luaglew_glVertexStream4ivATI},
#endif
#ifdef glVertexStream4fATI
	{"glVertexStream4fATI", luaglew_glVertexStream4fATI},
#endif
#ifdef glVertexStream4fvATI
	{"glVertexStream4fvATI", luaglew_glVertexStream4fvATI},
#endif
#ifdef glVertexStream4dATI
	{"glVertexStream4dATI", luaglew_glVertexStream4dATI},
#endif
#ifdef glVertexStream4dvATI
	{"glVertexStream4dvATI", luaglew_glVertexStream4dvATI},
#endif
#ifdef glNormalStream3bATI
	{"glNormalStream3bATI", luaglew_glNormalStream3bATI},
#endif
#ifdef glNormalStream3bvATI
	{"glNormalStream3bvATI", luaglew_glNormalStream3bvATI},
#endif
#ifdef glNormalStream3sATI
	{"glNormalStream3sATI", luaglew_glNormalStream3sATI},
#endif
#ifdef glNormalStream3svATI
	{"glNormalStream3svATI", luaglew_glNormalStream3svATI},
#endif
#ifdef glNormalStream3iATI
	{"glNormalStream3iATI", luaglew_glNormalStream3iATI},
#endif
#ifdef glNormalStream3ivATI
	{"glNormalStream3ivATI", luaglew_glNormalStream3ivATI},
#endif
#ifdef glNormalStream3fATI
	{"glNormalStream3fATI", luaglew_glNormalStream3fATI},
#endif
#ifdef glNormalStream3fvATI
	{"glNormalStream3fvATI", luaglew_glNormalStream3fvATI},
#endif
#ifdef glNormalStream3dATI
	{"glNormalStream3dATI", luaglew_glNormalStream3dATI},
#endif
#ifdef glNormalStream3dvATI
	{"glNormalStream3dvATI", luaglew_glNormalStream3dvATI},
#endif
#ifdef glUniformBufferEXT
	{"glUniformBufferEXT", luaglew_glUniformBufferEXT},
#endif
#ifdef glGetUniformBufferSizeEXT
	{"glGetUniformBufferSizeEXT", luaglew_glGetUniformBufferSizeEXT},
#endif
#ifdef glGetUniformOffsetEXT
	{"glGetUniformOffsetEXT", luaglew_glGetUniformOffsetEXT},
#endif
#ifdef glDepthBoundsEXT
	{"glDepthBoundsEXT", luaglew_glDepthBoundsEXT},
#endif
#ifdef glDrawArraysInstancedEXT
	{"glDrawArraysInstancedEXT", luaglew_glDrawArraysInstancedEXT},
#endif
#ifdef glDrawElementsInstancedEXT
	{"glDrawElementsInstancedEXT", luaglew_glDrawElementsInstancedEXT},
#endif
#ifdef glProgramParameteriEXT
	{"glProgramParameteriEXT", luaglew_glProgramParameteriEXT},
#endif
#ifdef glFramebufferTextureEXT
	{"glFramebufferTextureEXT", luaglew_glFramebufferTextureEXT},
#endif
#ifdef glFramebufferTextureLayerEXT
	{"glFramebufferTextureLayerEXT", luaglew_glFramebufferTextureLayerEXT},
#endif
#ifdef glFramebufferTextureFaceEXT
	{"glFramebufferTextureFaceEXT", luaglew_glFramebufferTextureFaceEXT},
#endif
#ifdef glGetUniformuivEXT
	{"glGetUniformuivEXT", luaglew_glGetUniformuivEXT},
#endif
#ifdef glGetFragDataLocationEXT
	{"glGetFragDataLocationEXT", luaglew_glGetFragDataLocationEXT},
#endif
#ifdef glUniform1uiEXT
	{"glUniform1uiEXT", luaglew_glUniform1uiEXT},
#endif
#ifdef glUniform2uiEXT
	{"glUniform2uiEXT", luaglew_glUniform2uiEXT},
#endif
#ifdef glUniform3uiEXT
	{"glUniform3uiEXT", luaglew_glUniform3uiEXT},
#endif
#ifdef glUniform4uiEXT
	{"glUniform4uiEXT", luaglew_glUniform4uiEXT},
#endif
#ifdef glUniform1uivEXT
	{"glUniform1uivEXT", luaglew_glUniform1uivEXT},
#endif
#ifdef glUniform2uivEXT
	{"glUniform2uivEXT", luaglew_glUniform2uivEXT},
#endif
#ifdef glUniform3uivEXT
	{"glUniform3uivEXT", luaglew_glUniform3uivEXT},
#endif
#ifdef glUniform4uivEXT
	{"glUniform4uivEXT", luaglew_glUniform4uivEXT},
#endif
#ifdef glVertexAttribI1iEXT
	{"glVertexAttribI1iEXT", luaglew_glVertexAttribI1iEXT},
#endif
#ifdef glVertexAttribI2iEXT
	{"glVertexAttribI2iEXT", luaglew_glVertexAttribI2iEXT},
#endif
#ifdef glVertexAttribI3iEXT
	{"glVertexAttribI3iEXT", luaglew_glVertexAttribI3iEXT},
#endif
#ifdef glVertexAttribI4iEXT
	{"glVertexAttribI4iEXT", luaglew_glVertexAttribI4iEXT},
#endif
#ifdef glVertexAttribI1uiEXT
	{"glVertexAttribI1uiEXT", luaglew_glVertexAttribI1uiEXT},
#endif
#ifdef glVertexAttribI2uiEXT
	{"glVertexAttribI2uiEXT", luaglew_glVertexAttribI2uiEXT},
#endif
#ifdef glVertexAttribI3uiEXT
	{"glVertexAttribI3uiEXT", luaglew_glVertexAttribI3uiEXT},
#endif
#ifdef glVertexAttribI4uiEXT
	{"glVertexAttribI4uiEXT", luaglew_glVertexAttribI4uiEXT},
#endif
#ifdef glVertexAttribI1ivEXT
	{"glVertexAttribI1ivEXT", luaglew_glVertexAttribI1ivEXT},
#endif
#ifdef glVertexAttribI2ivEXT
	{"glVertexAttribI2ivEXT", luaglew_glVertexAttribI2ivEXT},
#endif
#ifdef glVertexAttribI3ivEXT
	{"glVertexAttribI3ivEXT", luaglew_glVertexAttribI3ivEXT},
#endif
#ifdef glVertexAttribI4ivEXT
	{"glVertexAttribI4ivEXT", luaglew_glVertexAttribI4ivEXT},
#endif
#ifdef glVertexAttribI1uivEXT
	{"glVertexAttribI1uivEXT", luaglew_glVertexAttribI1uivEXT},
#endif
#ifdef glVertexAttribI2uivEXT
	{"glVertexAttribI2uivEXT", luaglew_glVertexAttribI2uivEXT},
#endif
#ifdef glVertexAttribI3uivEXT
	{"glVertexAttribI3uivEXT", luaglew_glVertexAttribI3uivEXT},
#endif
#ifdef glVertexAttribI4uivEXT
	{"glVertexAttribI4uivEXT", luaglew_glVertexAttribI4uivEXT},
#endif
#ifdef glVertexAttribI4bvEXT
	{"glVertexAttribI4bvEXT", luaglew_glVertexAttribI4bvEXT},
#endif
#ifdef glVertexAttribI4svEXT
	{"glVertexAttribI4svEXT", luaglew_glVertexAttribI4svEXT},
#endif
#ifdef glVertexAttribI4ubvEXT
	{"glVertexAttribI4ubvEXT", luaglew_glVertexAttribI4ubvEXT},
#endif
#ifdef glVertexAttribI4usvEXT
	{"glVertexAttribI4usvEXT", luaglew_glVertexAttribI4usvEXT},
#endif
#ifdef glVertexAttribIPointerEXT
	{"glVertexAttribIPointerEXT", luaglew_glVertexAttribIPointerEXT},
#endif
#ifdef glGetVertexAttribIivEXT
	{"glGetVertexAttribIivEXT", luaglew_glGetVertexAttribIivEXT},
#endif
#ifdef glGetVertexAttribIuivEXT
	{"glGetVertexAttribIuivEXT", luaglew_glGetVertexAttribIuivEXT},
#endif
#ifdef glPointParameterfEXT
	{"glPointParameterfEXT", luaglew_glPointParameterfEXT},
#endif
#ifdef glPointParameterfvEXT
	{"glPointParameterfvEXT", luaglew_glPointParameterfvEXT},
#endif
#ifdef glTexBufferEXT
	{"glTexBufferEXT", luaglew_glTexBufferEXT},
#endif
#ifdef glGetQueryObjecti64vEXT
	{"glGetQueryObjecti64vEXT", luaglew_glGetQueryObjecti64vEXT},
#endif
#ifdef glGetQueryObjectui64vEXT
	{"glGetQueryObjectui64vEXT", luaglew_glGetQueryObjectui64vEXT},
#endif
#ifdef glBeginVertexShaderEXT
	{"glBeginVertexShaderEXT", luaglew_glBeginVertexShaderEXT},
#endif
#ifdef glEndVertexShaderEXT
	{"glEndVertexShaderEXT", luaglew_glEndVertexShaderEXT},
#endif
#ifdef glBindVertexShaderEXT
	{"glBindVertexShaderEXT", luaglew_glBindVertexShaderEXT},
#endif
#ifdef glGenVertexShadersEXT
	{"glGenVertexShadersEXT", luaglew_glGenVertexShadersEXT},
#endif
#ifdef glDeleteVertexShaderEXT
	{"glDeleteVertexShaderEXT", luaglew_glDeleteVertexShaderEXT},
#endif
#ifdef glShaderOp1EXT
	{"glShaderOp1EXT", luaglew_glShaderOp1EXT},
#endif
#ifdef glShaderOp2EXT
	{"glShaderOp2EXT", luaglew_glShaderOp2EXT},
#endif
#ifdef glShaderOp3EXT
	{"glShaderOp3EXT", luaglew_glShaderOp3EXT},
#endif
#ifdef glSwizzleEXT
	{"glSwizzleEXT", luaglew_glSwizzleEXT},
#endif
#ifdef glWriteMaskEXT
	{"glWriteMaskEXT", luaglew_glWriteMaskEXT},
#endif
#ifdef glInsertComponentEXT
	{"glInsertComponentEXT", luaglew_glInsertComponentEXT},
#endif
#ifdef glExtractComponentEXT
	{"glExtractComponentEXT", luaglew_glExtractComponentEXT},
#endif
#ifdef glGenSymbolsEXT
	{"glGenSymbolsEXT", luaglew_glGenSymbolsEXT},
#endif
#ifdef glSetInvariantEXT
	{"glSetInvariantEXT", luaglew_glSetInvariantEXT},
#endif
#ifdef glSetLocalConstantEXT
	{"glSetLocalConstantEXT", luaglew_glSetLocalConstantEXT},
#endif
#ifdef glVariantbvEXT
	{"glVariantbvEXT", luaglew_glVariantbvEXT},
#endif
#ifdef glVariantsvEXT
	{"glVariantsvEXT", luaglew_glVariantsvEXT},
#endif
#ifdef glVariantivEXT
	{"glVariantivEXT", luaglew_glVariantivEXT},
#endif
#ifdef glVariantfvEXT
	{"glVariantfvEXT", luaglew_glVariantfvEXT},
#endif
#ifdef glVariantdvEXT
	{"glVariantdvEXT", luaglew_glVariantdvEXT},
#endif
#ifdef glVariantubvEXT
	{"glVariantubvEXT", luaglew_glVariantubvEXT},
#endif
#ifdef glVariantusvEXT
	{"glVariantusvEXT", luaglew_glVariantusvEXT},
#endif
#ifdef glVariantuivEXT
	{"glVariantuivEXT", luaglew_glVariantuivEXT},
#endif
#ifdef glVariantPointerEXT
	{"glVariantPointerEXT", luaglew_glVariantPointerEXT},
#endif
#ifdef glEnableVariantClientStateEXT
	{"glEnableVariantClientStateEXT", luaglew_glEnableVariantClientStateEXT},
#endif
#ifdef glDisableVariantClientStateEXT
	{"glDisableVariantClientStateEXT", luaglew_glDisableVariantClientStateEXT},
#endif
#ifdef glBindLightParameterEXT
	{"glBindLightParameterEXT", luaglew_glBindLightParameterEXT},
#endif
#ifdef glBindMaterialParameterEXT
	{"glBindMaterialParameterEXT", luaglew_glBindMaterialParameterEXT},
#endif
#ifdef glBindTexGenParameterEXT
	{"glBindTexGenParameterEXT", luaglew_glBindTexGenParameterEXT},
#endif
#ifdef glBindTextureUnitParameterEXT
	{"glBindTextureUnitParameterEXT", luaglew_glBindTextureUnitParameterEXT},
#endif
#ifdef glBindParameterEXT
	{"glBindParameterEXT", luaglew_glBindParameterEXT},
#endif
#ifdef glIsVariantEnabledEXT
	{"glIsVariantEnabledEXT", luaglew_glIsVariantEnabledEXT},
#endif
#ifdef glGetVariantBooleanvEXT
	{"glGetVariantBooleanvEXT", luaglew_glGetVariantBooleanvEXT},
#endif
#ifdef glGetVariantIntegervEXT
	{"glGetVariantIntegervEXT", luaglew_glGetVariantIntegervEXT},
#endif
#ifdef glGetVariantFloatvEXT
	{"glGetVariantFloatvEXT", luaglew_glGetVariantFloatvEXT},
#endif
#ifdef glGetVariantPointervEXT
	{"glGetVariantPointervEXT", luaglew_glGetVariantPointervEXT},
#endif
#ifdef glGetInvariantBooleanvEXT
	{"glGetInvariantBooleanvEXT", luaglew_glGetInvariantBooleanvEXT},
#endif
#ifdef glGetInvariantIntegervEXT
	{"glGetInvariantIntegervEXT", luaglew_glGetInvariantIntegervEXT},
#endif
#ifdef glGetInvariantFloatvEXT
	{"glGetInvariantFloatvEXT", luaglew_glGetInvariantFloatvEXT},
#endif
#ifdef glGetLocalConstantBooleanvEXT
	{"glGetLocalConstantBooleanvEXT", luaglew_glGetLocalConstantBooleanvEXT},
#endif
#ifdef glGetLocalConstantIntegervEXT
	{"glGetLocalConstantIntegervEXT", luaglew_glGetLocalConstantIntegervEXT},
#endif
#ifdef glGetLocalConstantFloatvEXT
	{"glGetLocalConstantFloatvEXT", luaglew_glGetLocalConstantFloatvEXT},
#endif
#ifdef glBufferRegionEnabledEXT
	{"glBufferRegionEnabledEXT", luaglew_glBufferRegionEnabledEXT},
#endif
#ifdef glNewBufferRegionEXT
	{"glNewBufferRegionEXT", luaglew_glNewBufferRegionEXT},
#endif
#ifdef glDeleteBufferRegionEXT
	{"glDeleteBufferRegionEXT", luaglew_glDeleteBufferRegionEXT},
#endif
#ifdef glReadBufferRegionEXT
	{"glReadBufferRegionEXT", luaglew_glReadBufferRegionEXT},
#endif
#ifdef glDrawBufferRegionEXT
	{"glDrawBufferRegionEXT", luaglew_glDrawBufferRegionEXT},
#endif
#ifdef glDepthRangedNV
	{"glDepthRangedNV", luaglew_glDepthRangedNV},
#endif
#ifdef glClearDepthdNV
	{"glClearDepthdNV", luaglew_glClearDepthdNV},
#endif
#ifdef glDepthBoundsdNV
	{"glDepthBoundsdNV", luaglew_glDepthBoundsdNV},
#endif
#ifdef glRenderbufferStorageMultisampleCoverageNV
	{"glRenderbufferStorageMultisampleCoverageNV", luaglew_glRenderbufferStorageMultisampleCoverageNV},
#endif
#ifdef glProgramVertexLimitNV
	{"glProgramVertexLimitNV", luaglew_glProgramVertexLimitNV},
#endif
#ifdef glProgramLocalParameterI4iNV
	{"glProgramLocalParameterI4iNV", luaglew_glProgramLocalParameterI4iNV},
#endif
#ifdef glProgramLocalParameterI4ivNV
	{"glProgramLocalParameterI4ivNV", luaglew_glProgramLocalParameterI4ivNV},
#endif
#ifdef glProgramLocalParametersI4ivNV
	{"glProgramLocalParametersI4ivNV", luaglew_glProgramLocalParametersI4ivNV},
#endif
#ifdef glProgramLocalParameterI4uiNV
	{"glProgramLocalParameterI4uiNV", luaglew_glProgramLocalParameterI4uiNV},
#endif
#ifdef glProgramLocalParameterI4uivNV
	{"glProgramLocalParameterI4uivNV", luaglew_glProgramLocalParameterI4uivNV},
#endif
#ifdef glProgramLocalParametersI4uivNV
	{"glProgramLocalParametersI4uivNV", luaglew_glProgramLocalParametersI4uivNV},
#endif
#ifdef glProgramEnvParameterI4iNV
	{"glProgramEnvParameterI4iNV", luaglew_glProgramEnvParameterI4iNV},
#endif
#ifdef glProgramEnvParameterI4ivNV
	{"glProgramEnvParameterI4ivNV", luaglew_glProgramEnvParameterI4ivNV},
#endif
#ifdef glProgramEnvParametersI4ivNV
	{"glProgramEnvParametersI4ivNV", luaglew_glProgramEnvParametersI4ivNV},
#endif
#ifdef glProgramEnvParameterI4uiNV
	{"glProgramEnvParameterI4uiNV", luaglew_glProgramEnvParameterI4uiNV},
#endif
#ifdef glProgramEnvParameterI4uivNV
	{"glProgramEnvParameterI4uivNV", luaglew_glProgramEnvParameterI4uivNV},
#endif
#ifdef glProgramEnvParametersI4uivNV
	{"glProgramEnvParametersI4uivNV", luaglew_glProgramEnvParametersI4uivNV},
#endif
#ifdef glProgramBufferParametersfvNV
	{"glProgramBufferParametersfvNV", luaglew_glProgramBufferParametersfvNV},
#endif
#ifdef glProgramBufferParametersIivNV
	{"glProgramBufferParametersIivNV", luaglew_glProgramBufferParametersIivNV},
#endif
#ifdef glProgramBufferParametersIuivNV
	{"glProgramBufferParametersIuivNV", luaglew_glProgramBufferParametersIuivNV},
#endif
#ifdef glGetVideoi64vNV
	{"glGetVideoi64vNV", luaglew_glGetVideoi64vNV},
#endif
#ifdef glGetVideoivNV
	{"glGetVideoivNV", luaglew_glGetVideoivNV},
#endif
#ifdef glGetVideoui64vNV
	{"glGetVideoui64vNV", luaglew_glGetVideoui64vNV},
#endif
#ifdef glGetVideouivNV
	{"glGetVideouivNV", luaglew_glGetVideouivNV},
#endif
#ifdef glPresentFrameDualFillNV
	{"glPresentFrameDualFillNV", luaglew_glPresentFrameDualFillNV},
#endif
#ifdef glPresentFrameKeyedNV
	{"glPresentFrameKeyedNV", luaglew_glPresentFrameKeyedNV},
#endif
#ifdef glBeginTransformFeedbackNV
	{"glBeginTransformFeedbackNV", luaglew_glBeginTransformFeedbackNV},
#endif
#ifdef glEndTransformFeedbackNV
	{"glEndTransformFeedbackNV", luaglew_glEndTransformFeedbackNV},
#endif
#ifdef glTransformFeedbackAttribsNV
	{"glTransformFeedbackAttribsNV", luaglew_glTransformFeedbackAttribsNV},
#endif
#ifdef glBindBufferRangeNV
	{"glBindBufferRangeNV", luaglew_glBindBufferRangeNV},
#endif
#ifdef glBindBufferOffsetNV
	{"glBindBufferOffsetNV", luaglew_glBindBufferOffsetNV},
#endif
#ifdef glBindBufferBaseNV
	{"glBindBufferBaseNV", luaglew_glBindBufferBaseNV},
#endif
#ifdef glTransformFeedbackVaryingsNV
	{"glTransformFeedbackVaryingsNV", luaglew_glTransformFeedbackVaryingsNV},
#endif
#ifdef glActiveVaryingNV
	{"glActiveVaryingNV", luaglew_glActiveVaryingNV},
#endif
#ifdef glGetVaryingLocationNV
	{"glGetVaryingLocationNV", luaglew_glGetVaryingLocationNV},
#endif
#ifdef glGetActiveVaryingNV
	{"glGetActiveVaryingNV", luaglew_glGetActiveVaryingNV},
#endif
#ifdef glGetTransformFeedbackVaryingNV
	{"glGetTransformFeedbackVaryingNV", luaglew_glGetTransformFeedbackVaryingNV},
#endif
#ifdef glVDPAUFiniNV
	{"glVDPAUFiniNV", luaglew_glVDPAUFiniNV},
#endif
#ifdef glVDPAUInitNV
	{"glVDPAUInitNV", luaglew_glVDPAUInitNV},
#endif
#ifdef glVDPAUMapSurfacesNV
	{"glVDPAUMapSurfacesNV", luaglew_glVDPAUMapSurfacesNV},
#endif
#ifdef glVDPAURegisterOutputSurfaceNV
	{"glVDPAURegisterOutputSurfaceNV", luaglew_glVDPAURegisterOutputSurfaceNV},
#endif
#ifdef glVDPAURegisterVideoSurfaceNV
	{"glVDPAURegisterVideoSurfaceNV", luaglew_glVDPAURegisterVideoSurfaceNV},
#endif
#ifdef glVDPAUUnmapSurfacesNV
	{"glVDPAUUnmapSurfacesNV", luaglew_glVDPAUUnmapSurfacesNV},
#endif
#ifdef glReadVideoPixelsSUN
	{"glReadVideoPixelsSUN", luaglew_glReadVideoPixelsSUN},
#endif
#ifdef glDrawRangeElements
	{"glDrawRangeElements", luaglew_glDrawRangeElements},
#endif
#ifdef glTexSubImage3D
	{"glTexSubImage3D", luaglew_glTexSubImage3D},
#endif
#ifdef glCopyTexSubImage3D
	{"glCopyTexSubImage3D", luaglew_glCopyTexSubImage3D},
#endif
#ifdef glActiveTexture
	{"glActiveTexture", luaglew_glActiveTexture},
#endif
#ifdef glClientActiveTexture
	{"glClientActiveTexture", luaglew_glClientActiveTexture},
#endif
#ifdef glCompressedTexImage1D
	{"glCompressedTexImage1D", luaglew_glCompressedTexImage1D},
#endif
#ifdef glCompressedTexImage2D
	{"glCompressedTexImage2D", luaglew_glCompressedTexImage2D},
#endif
#ifdef glCompressedTexImage3D
	{"glCompressedTexImage3D", luaglew_glCompressedTexImage3D},
#endif
#ifdef glCompressedTexSubImage1D
	{"glCompressedTexSubImage1D", luaglew_glCompressedTexSubImage1D},
#endif
#ifdef glCompressedTexSubImage2D
	{"glCompressedTexSubImage2D", luaglew_glCompressedTexSubImage2D},
#endif
#ifdef glCompressedTexSubImage3D
	{"glCompressedTexSubImage3D", luaglew_glCompressedTexSubImage3D},
#endif
#ifdef glGetCompressedTexImage
	{"glGetCompressedTexImage", luaglew_glGetCompressedTexImage},
#endif
#ifdef glMultiTexCoord1d
	{"glMultiTexCoord1d", luaglew_glMultiTexCoord1d},
#endif
#ifdef glMultiTexCoord1dv
	{"glMultiTexCoord1dv", luaglew_glMultiTexCoord1dv},
#endif
#ifdef glMultiTexCoord1f
	{"glMultiTexCoord1f", luaglew_glMultiTexCoord1f},
#endif
#ifdef glMultiTexCoord1fv
	{"glMultiTexCoord1fv", luaglew_glMultiTexCoord1fv},
#endif
#ifdef glMultiTexCoord1i
	{"glMultiTexCoord1i", luaglew_glMultiTexCoord1i},
#endif
#ifdef glMultiTexCoord1iv
	{"glMultiTexCoord1iv", luaglew_glMultiTexCoord1iv},
#endif
#ifdef glMultiTexCoord1s
	{"glMultiTexCoord1s", luaglew_glMultiTexCoord1s},
#endif
#ifdef glMultiTexCoord1sv
	{"glMultiTexCoord1sv", luaglew_glMultiTexCoord1sv},
#endif
#ifdef glMultiTexCoord2d
	{"glMultiTexCoord2d", luaglew_glMultiTexCoord2d},
#endif
#ifdef glMultiTexCoord2dv
	{"glMultiTexCoord2dv", luaglew_glMultiTexCoord2dv},
#endif
#ifdef glMultiTexCoord2f
	{"glMultiTexCoord2f", luaglew_glMultiTexCoord2f},
#endif
#ifdef glMultiTexCoord2fv
	{"glMultiTexCoord2fv", luaglew_glMultiTexCoord2fv},
#endif
#ifdef glMultiTexCoord2i
	{"glMultiTexCoord2i", luaglew_glMultiTexCoord2i},
#endif
#ifdef glMultiTexCoord2iv
	{"glMultiTexCoord2iv", luaglew_glMultiTexCoord2iv},
#endif
#ifdef glMultiTexCoord2s
	{"glMultiTexCoord2s", luaglew_glMultiTexCoord2s},
#endif
#ifdef glMultiTexCoord2sv
	{"glMultiTexCoord2sv", luaglew_glMultiTexCoord2sv},
#endif
#ifdef glMultiTexCoord3d
	{"glMultiTexCoord3d", luaglew_glMultiTexCoord3d},
#endif
#ifdef glMultiTexCoord3dv
	{"glMultiTexCoord3dv", luaglew_glMultiTexCoord3dv},
#endif
#ifdef glMultiTexCoord3f
	{"glMultiTexCoord3f", luaglew_glMultiTexCoord3f},
#endif
#ifdef glMultiTexCoord3fv
	{"glMultiTexCoord3fv", luaglew_glMultiTexCoord3fv},
#endif
#ifdef glMultiTexCoord3i
	{"glMultiTexCoord3i", luaglew_glMultiTexCoord3i},
#endif
#ifdef glMultiTexCoord3iv
	{"glMultiTexCoord3iv", luaglew_glMultiTexCoord3iv},
#endif
#ifdef glMultiTexCoord3s
	{"glMultiTexCoord3s", luaglew_glMultiTexCoord3s},
#endif
#ifdef glMultiTexCoord3sv
	{"glMultiTexCoord3sv", luaglew_glMultiTexCoord3sv},
#endif
#ifdef glMultiTexCoord4d
	{"glMultiTexCoord4d", luaglew_glMultiTexCoord4d},
#endif
#ifdef glMultiTexCoord4dv
	{"glMultiTexCoord4dv", luaglew_glMultiTexCoord4dv},
#endif
#ifdef glMultiTexCoord4f
	{"glMultiTexCoord4f", luaglew_glMultiTexCoord4f},
#endif
#ifdef glMultiTexCoord4fv
	{"glMultiTexCoord4fv", luaglew_glMultiTexCoord4fv},
#endif
#ifdef glMultiTexCoord4iv
	{"glMultiTexCoord4iv", luaglew_glMultiTexCoord4iv},
#endif
#ifdef glMultiTexCoord4s
	{"glMultiTexCoord4s", luaglew_glMultiTexCoord4s},
#endif
#ifdef glMultiTexCoord4sv
	{"glMultiTexCoord4sv", luaglew_glMultiTexCoord4sv},
#endif
#ifdef glSampleCoverage
	{"glSampleCoverage", luaglew_glSampleCoverage},
#endif
#ifdef glBlendEquation
	{"glBlendEquation", luaglew_glBlendEquation},
#endif
#ifdef glBlendColor
	{"glBlendColor", luaglew_glBlendColor},
#endif
#ifdef glFogCoordf
	{"glFogCoordf", luaglew_glFogCoordf},
#endif
#ifdef glFogCoordfv
	{"glFogCoordfv", luaglew_glFogCoordfv},
#endif
#ifdef glFogCoordd
	{"glFogCoordd", luaglew_glFogCoordd},
#endif
#ifdef glFogCoordPointer
	{"glFogCoordPointer", luaglew_glFogCoordPointer},
#endif
#ifdef glPointParameteri
	{"glPointParameteri", luaglew_glPointParameteri},
#endif
#ifdef glPointParameteriv
	{"glPointParameteriv", luaglew_glPointParameteriv},
#endif
#ifdef glPointParameterf
	{"glPointParameterf", luaglew_glPointParameterf},
#endif
#ifdef glPointParameterfv
	{"glPointParameterfv", luaglew_glPointParameterfv},
#endif
#ifdef glSecondaryColor3b
	{"glSecondaryColor3b", luaglew_glSecondaryColor3b},
#endif
#ifdef glSecondaryColor3bv
	{"glSecondaryColor3bv", luaglew_glSecondaryColor3bv},
#endif
#ifdef glSecondaryColor3d
	{"glSecondaryColor3d", luaglew_glSecondaryColor3d},
#endif
#ifdef glSecondaryColor3dv
	{"glSecondaryColor3dv", luaglew_glSecondaryColor3dv},
#endif
#ifdef glSecondaryColor3f
	{"glSecondaryColor3f", luaglew_glSecondaryColor3f},
#endif
#ifdef glSecondaryColor3fv
	{"glSecondaryColor3fv", luaglew_glSecondaryColor3fv},
#endif
#ifdef glSecondaryColor3i
	{"glSecondaryColor3i", luaglew_glSecondaryColor3i},
#endif
#ifdef glSecondaryColor3iv
	{"glSecondaryColor3iv", luaglew_glSecondaryColor3iv},
#endif
#ifdef glSecondaryColor3s
	{"glSecondaryColor3s", luaglew_glSecondaryColor3s},
#endif
#ifdef glSecondaryColor3sv
	{"glSecondaryColor3sv", luaglew_glSecondaryColor3sv},
#endif
#ifdef glSecondaryColor3ub
	{"glSecondaryColor3ub", luaglew_glSecondaryColor3ub},
#endif
#ifdef glSecondaryColor3ubv
	{"glSecondaryColor3ubv", luaglew_glSecondaryColor3ubv},
#endif
#ifdef glSecondaryColor3ui
	{"glSecondaryColor3ui", luaglew_glSecondaryColor3ui},
#endif
#ifdef glSecondaryColor3uiv
	{"glSecondaryColor3uiv", luaglew_glSecondaryColor3uiv},
#endif
#ifdef glSecondaryColor3us
	{"glSecondaryColor3us", luaglew_glSecondaryColor3us},
#endif
#ifdef glSecondaryColor3usv
	{"glSecondaryColor3usv", luaglew_glSecondaryColor3usv},
#endif
#ifdef glWindowPos2d
	{"glWindowPos2d", luaglew_glWindowPos2d},
#endif
#ifdef glWindowPos2f
	{"glWindowPos2f", luaglew_glWindowPos2f},
#endif
#ifdef glWindowPos2i
	{"glWindowPos2i", luaglew_glWindowPos2i},
#endif
#ifdef glWindowPos2s
	{"glWindowPos2s", luaglew_glWindowPos2s},
#endif
#ifdef glWindowPos3d
	{"glWindowPos3d", luaglew_glWindowPos3d},
#endif
#ifdef glWindowPos3f
	{"glWindowPos3f", luaglew_glWindowPos3f},
#endif
#ifdef glWindowPos3i
	{"glWindowPos3i", luaglew_glWindowPos3i},
#endif
#ifdef glWindowPos3s
	{"glWindowPos3s", luaglew_glWindowPos3s},
#endif
#ifdef glIsQuery
	{"glIsQuery", luaglew_glIsQuery},
#endif
#ifdef glBeginQuery
	{"glBeginQuery", luaglew_glBeginQuery},
#endif
#ifdef glEndQuery
	{"glEndQuery", luaglew_glEndQuery},
#endif
#ifdef glBindBuffer
	{"glBindBuffer", luaglew_glBindBuffer},
#endif
#ifdef glIsBuffer
	{"glIsBuffer", luaglew_glIsBuffer},
#endif
#ifdef glUnmapBuffer
	{"glUnmapBuffer", luaglew_glUnmapBuffer},
#endif
#ifdef glAttachShader
	{"glAttachShader", luaglew_glAttachShader},
#endif
#ifdef glCompileShader
	{"glCompileShader", luaglew_glCompileShader},
#endif
#ifdef glCreateProgram
	{"glCreateProgram", luaglew_glCreateProgram},
#endif
#ifdef glCreateShader
	{"glCreateShader", luaglew_glCreateShader},
#endif
#ifdef glDeleteProgram
	{"glDeleteProgram", luaglew_glDeleteProgram},
#endif
#ifdef glDeleteShader
	{"glDeleteShader", luaglew_glDeleteShader},
#endif
#ifdef glDetachShader
	{"glDetachShader", luaglew_glDetachShader},
#endif
#ifdef glIsProgram
	{"glIsProgram", luaglew_glIsProgram},
#endif
#ifdef glIsShader
	{"glIsShader", luaglew_glIsShader},
#endif
#ifdef glLinkProgram
	{"glLinkProgram", luaglew_glLinkProgram},
#endif
#ifdef glUseProgram
	{"glUseProgram", luaglew_glUseProgram},
#endif
#ifdef glUniform1f
	{"glUniform1f", luaglew_glUniform1f},
#endif
#ifdef glUniform1i
	{"glUniform1i", luaglew_glUniform1i},
#endif
#ifdef glUniform2f
	{"glUniform2f", luaglew_glUniform2f},
#endif
#ifdef glUniform2i
	{"glUniform2i", luaglew_glUniform2i},
#endif
#ifdef glUniform2iv
	{"glUniform2iv", luaglew_glUniform2iv},
#endif
#ifdef glUniform3f
	{"glUniform3f", luaglew_glUniform3f},
#endif
#ifdef glUniform3i
	{"glUniform3i", luaglew_glUniform3i},
#endif
#ifdef glUniform4f
	{"glUniform4f", luaglew_glUniform4f},
#endif
#ifdef glUniform4i
	{"glUniform4i", luaglew_glUniform4i},
#endif
#ifdef glValidateProgram
	{"glValidateProgram", luaglew_glValidateProgram},
#endif
#ifdef glVertexAttrib1d
	{"glVertexAttrib1d", luaglew_glVertexAttrib1d},
#endif
#ifdef glVertexAttrib1f
	{"glVertexAttrib1f", luaglew_glVertexAttrib1f},
#endif
#ifdef glVertexAttrib1s
	{"glVertexAttrib1s", luaglew_glVertexAttrib1s},
#endif
#ifdef glVertexAttrib2d
	{"glVertexAttrib2d", luaglew_glVertexAttrib2d},
#endif
#ifdef glVertexAttrib2f
	{"glVertexAttrib2f", luaglew_glVertexAttrib2f},
#endif
#ifdef glVertexAttrib2s
	{"glVertexAttrib2s", luaglew_glVertexAttrib2s},
#endif
#ifdef glVertexAttrib3d
	{"glVertexAttrib3d", luaglew_glVertexAttrib3d},
#endif
#ifdef glVertexAttrib3f
	{"glVertexAttrib3f", luaglew_glVertexAttrib3f},
#endif
#ifdef glVertexAttrib3s
	{"glVertexAttrib3s", luaglew_glVertexAttrib3s},
#endif
#ifdef glVertexAttrib4Nub
	{"glVertexAttrib4Nub", luaglew_glVertexAttrib4Nub},
#endif
#ifdef glVertexAttrib4d
	{"glVertexAttrib4d", luaglew_glVertexAttrib4d},
#endif
#ifdef glVertexAttrib4f
	{"glVertexAttrib4f", luaglew_glVertexAttrib4f},
#endif
#ifdef glVertexAttrib4s
	{"glVertexAttrib4s", luaglew_glVertexAttrib4s},
#endif
#ifdef glUniformMatrix2x3fv
	{"glUniformMatrix2x3fv", luaglew_glUniformMatrix2x3fv},
#endif
#ifdef glUniformMatrix3x2fv
	{"glUniformMatrix3x2fv", luaglew_glUniformMatrix3x2fv},
#endif
#ifdef glUniformMatrix2x4fv
	{"glUniformMatrix2x4fv", luaglew_glUniformMatrix2x4fv},
#endif
#ifdef glUniformMatrix4x2fv
	{"glUniformMatrix4x2fv", luaglew_glUniformMatrix4x2fv},
#endif
#ifdef glUniformMatrix3x4fv
	{"glUniformMatrix3x4fv", luaglew_glUniformMatrix3x4fv},
#endif
#ifdef glUniformMatrix4x3fv
	{"glUniformMatrix4x3fv", luaglew_glUniformMatrix4x3fv},
#endif
#ifdef glColorMaski
	{"glColorMaski", luaglew_glColorMaski},
#endif
#ifdef glGetBooleani_v
	{"glGetBooleani_v", luaglew_glGetBooleani_v},
#endif
#ifdef glEnablei
	{"glEnablei", luaglew_glEnablei},
#endif
#ifdef glDisablei
	{"glDisablei", luaglew_glDisablei},
#endif
#ifdef glIsEnabledi
	{"glIsEnabledi", luaglew_glIsEnabledi},
#endif
#ifdef glBeginTransformFeedback
	{"glBeginTransformFeedback", luaglew_glBeginTransformFeedback},
#endif
#ifdef glEndTransformFeedback
	{"glEndTransformFeedback", luaglew_glEndTransformFeedback},
#endif
#ifdef glTransformFeedbackVaryings
	{"glTransformFeedbackVaryings", luaglew_glTransformFeedbackVaryings},
#endif
#ifdef glGetTransformFeedbackVarying
	{"glGetTransformFeedbackVarying", luaglew_glGetTransformFeedbackVarying},
#endif
#ifdef glClampColor
	{"glClampColor", luaglew_glClampColor},
#endif
#ifdef glBeginConditionalRender
	{"glBeginConditionalRender", luaglew_glBeginConditionalRender},
#endif
#ifdef glEndConditionalRender
	{"glEndConditionalRender", luaglew_glEndConditionalRender},
#endif
#ifdef glVertexAttribI1i
	{"glVertexAttribI1i", luaglew_glVertexAttribI1i},
#endif
#ifdef glVertexAttribI2i
	{"glVertexAttribI2i", luaglew_glVertexAttribI2i},
#endif
#ifdef glVertexAttribI3i
	{"glVertexAttribI3i", luaglew_glVertexAttribI3i},
#endif
#ifdef glVertexAttribI4i
	{"glVertexAttribI4i", luaglew_glVertexAttribI4i},
#endif
#ifdef glVertexAttribI1ui
	{"glVertexAttribI1ui", luaglew_glVertexAttribI1ui},
#endif
#ifdef glVertexAttribI2ui
	{"glVertexAttribI2ui", luaglew_glVertexAttribI2ui},
#endif
#ifdef glVertexAttribI3ui
	{"glVertexAttribI3ui", luaglew_glVertexAttribI3ui},
#endif
#ifdef glVertexAttribI4ui
	{"glVertexAttribI4ui", luaglew_glVertexAttribI4ui},
#endif
#ifdef glVertexAttribI1iv
	{"glVertexAttribI1iv", luaglew_glVertexAttribI1iv},
#endif
#ifdef glVertexAttribI2iv
	{"glVertexAttribI2iv", luaglew_glVertexAttribI2iv},
#endif
#ifdef glVertexAttribI3iv
	{"glVertexAttribI3iv", luaglew_glVertexAttribI3iv},
#endif
#ifdef glVertexAttribI4iv
	{"glVertexAttribI4iv", luaglew_glVertexAttribI4iv},
#endif
#ifdef glVertexAttribI1uiv
	{"glVertexAttribI1uiv", luaglew_glVertexAttribI1uiv},
#endif
#ifdef glVertexAttribI2uiv
	{"glVertexAttribI2uiv", luaglew_glVertexAttribI2uiv},
#endif
#ifdef glVertexAttribI3uiv
	{"glVertexAttribI3uiv", luaglew_glVertexAttribI3uiv},
#endif
#ifdef glVertexAttribI4uiv
	{"glVertexAttribI4uiv", luaglew_glVertexAttribI4uiv},
#endif
#ifdef glVertexAttribI4bv
	{"glVertexAttribI4bv", luaglew_glVertexAttribI4bv},
#endif
#ifdef glVertexAttribI4sv
	{"glVertexAttribI4sv", luaglew_glVertexAttribI4sv},
#endif
#ifdef glVertexAttribI4ubv
	{"glVertexAttribI4ubv", luaglew_glVertexAttribI4ubv},
#endif
#ifdef glVertexAttribI4usv
	{"glVertexAttribI4usv", luaglew_glVertexAttribI4usv},
#endif
#ifdef glVertexAttribIPointer
	{"glVertexAttribIPointer", luaglew_glVertexAttribIPointer},
#endif
#ifdef glGetVertexAttribIiv
	{"glGetVertexAttribIiv", luaglew_glGetVertexAttribIiv},
#endif
#ifdef glGetVertexAttribIuiv
	{"glGetVertexAttribIuiv", luaglew_glGetVertexAttribIuiv},
#endif
#ifdef glGetUniformuiv
	{"glGetUniformuiv", luaglew_glGetUniformuiv},
#endif
#ifdef glBindFragDataLocation
	{"glBindFragDataLocation", luaglew_glBindFragDataLocation},
#endif
#ifdef glGetFragDataLocation
	{"glGetFragDataLocation", luaglew_glGetFragDataLocation},
#endif
#ifdef glUniform1ui
	{"glUniform1ui", luaglew_glUniform1ui},
#endif
#ifdef glUniform2ui
	{"glUniform2ui", luaglew_glUniform2ui},
#endif
#ifdef glUniform3ui
	{"glUniform3ui", luaglew_glUniform3ui},
#endif
#ifdef glUniform4ui
	{"glUniform4ui", luaglew_glUniform4ui},
#endif
#ifdef glUniform1uiv
	{"glUniform1uiv", luaglew_glUniform1uiv},
#endif
#ifdef glUniform2uiv
	{"glUniform2uiv", luaglew_glUniform2uiv},
#endif
#ifdef glUniform3uiv
	{"glUniform3uiv", luaglew_glUniform3uiv},
#endif
#ifdef glUniform4uiv
	{"glUniform4uiv", luaglew_glUniform4uiv},
#endif
#ifdef glTexParameterIiv
	{"glTexParameterIiv", luaglew_glTexParameterIiv},
#endif
#ifdef glTexParameterIuiv
	{"glTexParameterIuiv", luaglew_glTexParameterIuiv},
#endif
#ifdef glGetTexParameterIiv
	{"glGetTexParameterIiv", luaglew_glGetTexParameterIiv},
#endif
#ifdef glGetTexParameterIuiv
	{"glGetTexParameterIuiv", luaglew_glGetTexParameterIuiv},
#endif
#ifdef glClearBufferiv
	{"glClearBufferiv", luaglew_glClearBufferiv},
#endif
#ifdef glClearBufferuiv
	{"glClearBufferuiv", luaglew_glClearBufferuiv},
#endif
#ifdef glClearBufferfv
	{"glClearBufferfv", luaglew_glClearBufferfv},
#endif
#ifdef glClearBufferfi
	{"glClearBufferfi", luaglew_glClearBufferfi},
#endif
#ifdef glGetStringi
	{"glGetStringi", luaglew_glGetStringi},
#endif
#ifdef glDrawArraysInstanced
	{"glDrawArraysInstanced", luaglew_glDrawArraysInstanced},
#endif
#ifdef glDrawElementsInstanced
	{"glDrawElementsInstanced", luaglew_glDrawElementsInstanced},
#endif
#ifdef glTexBuffer
	{"glTexBuffer", luaglew_glTexBuffer},
#endif
#ifdef glPrimitiveRestartIndex
	{"glPrimitiveRestartIndex", luaglew_glPrimitiveRestartIndex},
#endif
#ifdef glGetInteger64i_v
	{"glGetInteger64i_v", luaglew_glGetInteger64i_v},
#endif
#ifdef glGetBufferParameteri64v
	{"glGetBufferParameteri64v", luaglew_glGetBufferParameteri64v},
#endif
#ifdef glFramebufferTexture
	{"glFramebufferTexture", luaglew_glFramebufferTexture},
#endif
#ifdef glVertexAttribDivisor
	{"glVertexAttribDivisor", luaglew_glVertexAttribDivisor},
#endif
#ifdef glMinSampleShading
	{"glMinSampleShading", luaglew_glMinSampleShading},
#endif
#ifdef glBlendEquationSeparatei
	{"glBlendEquationSeparatei", luaglew_glBlendEquationSeparatei},
#endif
#ifdef glBlendEquationi
	{"glBlendEquationi", luaglew_glBlendEquationi},
#endif
#ifdef glBlendFuncSeparatei
	{"glBlendFuncSeparatei", luaglew_glBlendFuncSeparatei},
#endif
#ifdef glBlendFunci
	{"glBlendFunci", luaglew_glBlendFunci},
#endif
#ifdef glGetConvolutionFilter
	{"glGetConvolutionFilter", luaglew_glGetConvolutionFilter},
#endif
#ifdef glAreTexturesResident
	{"glAreTexturesResident", luaglew_glAreTexturesResident},
#endif
#ifdef glIsBufferARB
	{"glIsBufferARB", luaglew_glIsBufferARB},
#endif
#ifdef glIsEnabled
	{"glIsEnabled", luaglew_glIsEnabled},
#endif
#ifdef glIsEnabledIndexedEXT
	{"glIsEnabledIndexedEXT", luaglew_glIsEnabledIndexedEXT},
#endif
#ifdef glIsFenceAPPLE
	{"glIsFenceAPPLE", luaglew_glIsFenceAPPLE},
#endif
#ifdef glIsFramebuffer
	{"glIsFramebuffer", luaglew_glIsFramebuffer},
#endif
#ifdef glIsFramebufferEXT
	{"glIsFramebufferEXT", luaglew_glIsFramebufferEXT},
#endif
#ifdef glIsList
	{"glIsList", luaglew_glIsList},
#endif
#ifdef glIsProgramARB
	{"glIsProgramARB", luaglew_glIsProgramARB},
#endif
#ifdef glIsQueryARB
	{"glIsQueryARB", luaglew_glIsQueryARB},
#endif
#ifdef glIsRenderbuffer
	{"glIsRenderbuffer", luaglew_glIsRenderbuffer},
#endif
#ifdef glIsRenderbufferEXT
	{"glIsRenderbufferEXT", luaglew_glIsRenderbufferEXT},
#endif
#ifdef glIsTexture
	{"glIsTexture", luaglew_glIsTexture},
#endif
#ifdef glIsVertexArrayAPPLE
	{"glIsVertexArrayAPPLE", luaglew_glIsVertexArrayAPPLE},
#endif
#ifdef glIsVertexAttribEnabledAPPLE
	{"glIsVertexAttribEnabledAPPLE", luaglew_glIsVertexAttribEnabledAPPLE},
#endif
#ifdef glTestFenceAPPLE
	{"glTestFenceAPPLE", luaglew_glTestFenceAPPLE},
#endif
#ifdef glTestObjectAPPLE
	{"glTestObjectAPPLE", luaglew_glTestObjectAPPLE},
#endif
#ifdef glUnmapBufferARB
	{"glUnmapBufferARB", luaglew_glUnmapBufferARB},
#endif
#ifdef glCheckFramebufferStatus
	{"glCheckFramebufferStatus", luaglew_glCheckFramebufferStatus},
#endif
#ifdef glCheckFramebufferStatusEXT
	{"glCheckFramebufferStatusEXT", luaglew_glCheckFramebufferStatusEXT},
#endif
#ifdef glGetError
	{"glGetError", luaglew_glGetError},
#endif
#ifdef glObjectPurgeableAPPLE
	{"glObjectPurgeableAPPLE", luaglew_glObjectPurgeableAPPLE},
#endif
#ifdef glObjectUnpurgeableAPPLE
	{"glObjectUnpurgeableAPPLE", luaglew_glObjectUnpurgeableAPPLE},
#endif
#ifdef glCreateProgramObjectARB
	{"glCreateProgramObjectARB", luaglew_glCreateProgramObjectARB},
#endif
#ifdef glCreateShaderObjectARB
	{"glCreateShaderObjectARB", luaglew_glCreateShaderObjectARB},
#endif
#ifdef glGetHandleARB
	{"glGetHandleARB", luaglew_glGetHandleARB},
#endif
#ifdef glGetAttribLocation
	{"glGetAttribLocation", luaglew_glGetAttribLocation},
#endif
#ifdef glGetAttribLocationARB
	{"glGetAttribLocationARB", luaglew_glGetAttribLocationARB},
#endif
#ifdef glGetUniformLocation
	{"glGetUniformLocation", luaglew_glGetUniformLocation},
#endif
#ifdef glGetUniformLocationARB
	{"glGetUniformLocationARB", luaglew_glGetUniformLocationARB},
#endif
#ifdef glRenderMode
	{"glRenderMode", luaglew_glRenderMode},
#endif
#ifdef glGenLists
	{"glGenLists", luaglew_glGenLists},
#endif
#ifdef glGetUniformBlockIndex
	{"glGetUniformBlockIndex", luaglew_glGetUniformBlockIndex},
#endif
#ifdef glMapBuffer
	{"glMapBuffer", luaglew_glMapBuffer},
#endif
#ifdef glMapBufferARB
	{"glMapBufferARB", luaglew_glMapBufferARB},
#endif
#ifdef glGetString
	{"glGetString", luaglew_glGetString},
#endif
#ifdef glAccum
	{"glAccum", luaglew_glAccum},
#endif
#ifdef glActiveStencilFaceEXT
	{"glActiveStencilFaceEXT", luaglew_glActiveStencilFaceEXT},
#endif
#ifdef glAlphaFunc
	{"glAlphaFunc", luaglew_glAlphaFunc},
#endif
#ifdef glArrayElement
	{"glArrayElement", luaglew_glArrayElement},
#endif
#ifdef glAttachObjectARB
	{"glAttachObjectARB", luaglew_glAttachObjectARB},
#endif
#ifdef glBegin
	{"glBegin", luaglew_glBegin},
#endif
#ifdef glBeginConditionalRenderNV
	{"glBeginConditionalRenderNV", luaglew_glBeginConditionalRenderNV},
#endif
#ifdef glBeginQueryARB
	{"glBeginQueryARB", luaglew_glBeginQueryARB},
#endif
#ifdef glBeginTransformFeedbackEXT
	{"glBeginTransformFeedbackEXT", luaglew_glBeginTransformFeedbackEXT},
#endif
#ifdef glBindAttribLocation
	{"glBindAttribLocation", luaglew_glBindAttribLocation},
#endif
#ifdef glBindAttribLocationARB
	{"glBindAttribLocationARB", luaglew_glBindAttribLocationARB},
#endif
#ifdef glBindBufferARB
	{"glBindBufferARB", luaglew_glBindBufferARB},
#endif
#ifdef glBindBufferBase
	{"glBindBufferBase", luaglew_glBindBufferBase},
#endif
#ifdef glBindBufferBaseEXT
	{"glBindBufferBaseEXT", luaglew_glBindBufferBaseEXT},
#endif
#ifdef glBindBufferOffsetEXT
	{"glBindBufferOffsetEXT", luaglew_glBindBufferOffsetEXT},
#endif
#ifdef glBindBufferRange
	{"glBindBufferRange", luaglew_glBindBufferRange},
#endif
#ifdef glBindBufferRangeEXT
	{"glBindBufferRangeEXT", luaglew_glBindBufferRangeEXT},
#endif
#ifdef glBindFragDataLocationEXT
	{"glBindFragDataLocationEXT", luaglew_glBindFragDataLocationEXT},
#endif
#ifdef glBindFramebuffer
	{"glBindFramebuffer", luaglew_glBindFramebuffer},
#endif
#ifdef glBindFramebufferEXT
	{"glBindFramebufferEXT", luaglew_glBindFramebufferEXT},
#endif
#ifdef glBindProgramARB
	{"glBindProgramARB", luaglew_glBindProgramARB},
#endif
#ifdef glBindRenderbuffer
	{"glBindRenderbuffer", luaglew_glBindRenderbuffer},
#endif
#ifdef glBindRenderbufferEXT
	{"glBindRenderbufferEXT", luaglew_glBindRenderbufferEXT},
#endif
#ifdef glBindTexture
	{"glBindTexture", luaglew_glBindTexture},
#endif
#ifdef glBindVertexArrayAPPLE
	{"glBindVertexArrayAPPLE", luaglew_glBindVertexArrayAPPLE},
#endif
#ifdef glBitmap
	{"glBitmap", luaglew_glBitmap},
#endif
#ifdef glBlendColorEXT
	{"glBlendColorEXT", luaglew_glBlendColorEXT},
#endif
#ifdef glBlendEquationEXT
	{"glBlendEquationEXT", luaglew_glBlendEquationEXT},
#endif
#ifdef glBlendEquationSeparate
	{"glBlendEquationSeparate", luaglew_glBlendEquationSeparate},
#endif
#ifdef glBlendEquationSeparateATI
	{"glBlendEquationSeparateATI", luaglew_glBlendEquationSeparateATI},
#endif
#ifdef glBlendEquationSeparateEXT
	{"glBlendEquationSeparateEXT", luaglew_glBlendEquationSeparateEXT},
#endif
#ifdef glBlendFunc
	{"glBlendFunc", luaglew_glBlendFunc},
#endif
#ifdef glBlendFuncSeparate
	{"glBlendFuncSeparate", luaglew_glBlendFuncSeparate},
#endif
#ifdef glBlendFuncSeparateEXT
	{"glBlendFuncSeparateEXT", luaglew_glBlendFuncSeparateEXT},
#endif
#ifdef glBlitFramebuffer
	{"glBlitFramebuffer", luaglew_glBlitFramebuffer},
#endif
#ifdef glBlitFramebufferEXT
	{"glBlitFramebufferEXT", luaglew_glBlitFramebufferEXT},
#endif
#ifdef glBufferData
	{"glBufferData", luaglew_glBufferData},
#endif
#ifdef glBufferDataARB
	{"glBufferDataARB", luaglew_glBufferDataARB},
#endif
#ifdef glBufferParameteriAPPLE
	{"glBufferParameteriAPPLE", luaglew_glBufferParameteriAPPLE},
#endif
#ifdef glBufferSubData
	{"glBufferSubData", luaglew_glBufferSubData},
#endif
#ifdef glBufferSubDataARB
	{"glBufferSubDataARB", luaglew_glBufferSubDataARB},
#endif
#ifdef glCallList
	{"glCallList", luaglew_glCallList},
#endif
#ifdef glCallLists
	{"glCallLists", luaglew_glCallLists},
#endif
#ifdef glClampColorARB
	{"glClampColorARB", luaglew_glClampColorARB},
#endif
#ifdef glClear
	{"glClear", luaglew_glClear},
#endif
#ifdef glClearAccum
	{"glClearAccum", luaglew_glClearAccum},
#endif
#ifdef glClearColor
	{"glClearColor", luaglew_glClearColor},
#endif
#ifdef glClearColorIiEXT
	{"glClearColorIiEXT", luaglew_glClearColorIiEXT},
#endif
#ifdef glClearColorIuiEXT
	{"glClearColorIuiEXT", luaglew_glClearColorIuiEXT},
#endif
#ifdef glClearDepth
	{"glClearDepth", luaglew_glClearDepth},
#endif
#ifdef glClearIndex
	{"glClearIndex", luaglew_glClearIndex},
#endif
#ifdef glClearStencil
	{"glClearStencil", luaglew_glClearStencil},
#endif
#ifdef glClientActiveTextureARB
	{"glClientActiveTextureARB", luaglew_glClientActiveTextureARB},
#endif
#ifdef glClipPlane
	{"glClipPlane", luaglew_glClipPlane},
#endif
#ifdef glColor3b
	{"glColor3b", luaglew_glColor3b},
#endif
#ifdef glColor3bv
	{"glColor3bv", luaglew_glColor3bv},
#endif
#ifdef glColor3d
	{"glColor3d", luaglew_glColor3d},
#endif
#ifdef glColor3dv
	{"glColor3dv", luaglew_glColor3dv},
#endif
#ifdef glColor3f
	{"glColor3f", luaglew_glColor3f},
#endif
#ifdef glColor3fv
	{"glColor3fv", luaglew_glColor3fv},
#endif
#ifdef glColor3i
	{"glColor3i", luaglew_glColor3i},
#endif
#ifdef glColor3iv
	{"glColor3iv", luaglew_glColor3iv},
#endif
#ifdef glColor3s
	{"glColor3s", luaglew_glColor3s},
#endif
#ifdef glColor3sv
	{"glColor3sv", luaglew_glColor3sv},
#endif
#ifdef glColor3ub
	{"glColor3ub", luaglew_glColor3ub},
#endif
#ifdef glColor3ubv
	{"glColor3ubv", luaglew_glColor3ubv},
#endif
#ifdef glColor3ui
	{"glColor3ui", luaglew_glColor3ui},
#endif
#ifdef glColor3uiv
	{"glColor3uiv", luaglew_glColor3uiv},
#endif
#ifdef glColor3us
	{"glColor3us", luaglew_glColor3us},
#endif
#ifdef glColor3usv
	{"glColor3usv", luaglew_glColor3usv},
#endif
#ifdef glColor4b
	{"glColor4b", luaglew_glColor4b},
#endif
#ifdef glColor4bv
	{"glColor4bv", luaglew_glColor4bv},
#endif
#ifdef glColor4d
	{"glColor4d", luaglew_glColor4d},
#endif
#ifdef glColor4dv
	{"glColor4dv", luaglew_glColor4dv},
#endif
#ifdef glColor4f
	{"glColor4f", luaglew_glColor4f},
#endif
#ifdef glColor4fv
	{"glColor4fv", luaglew_glColor4fv},
#endif
#ifdef glColor4i
	{"glColor4i", luaglew_glColor4i},
#endif
#ifdef glColor4iv
	{"glColor4iv", luaglew_glColor4iv},
#endif
#ifdef glColor4s
	{"glColor4s", luaglew_glColor4s},
#endif
#ifdef glColor4sv
	{"glColor4sv", luaglew_glColor4sv},
#endif
#ifdef glColor4ub
	{"glColor4ub", luaglew_glColor4ub},
#endif
#ifdef glColor4ubv
	{"glColor4ubv", luaglew_glColor4ubv},
#endif
#ifdef glColor4ui
	{"glColor4ui", luaglew_glColor4ui},
#endif
#ifdef glColor4uiv
	{"glColor4uiv", luaglew_glColor4uiv},
#endif
#ifdef glColor4us
	{"glColor4us", luaglew_glColor4us},
#endif
#ifdef glColor4usv
	{"glColor4usv", luaglew_glColor4usv},
#endif
#ifdef glColorMask
	{"glColorMask", luaglew_glColorMask},
#endif
#ifdef glColorMaskIndexedEXT
	{"glColorMaskIndexedEXT", luaglew_glColorMaskIndexedEXT},
#endif
#ifdef glColorMaterial
	{"glColorMaterial", luaglew_glColorMaterial},
#endif
#ifdef glColorPointer
	{"glColorPointer", luaglew_glColorPointer},
#endif
#ifdef glCompileShaderARB
	{"glCompileShaderARB", luaglew_glCompileShaderARB},
#endif
#ifdef glCompressedTexImage1DARB
	{"glCompressedTexImage1DARB", luaglew_glCompressedTexImage1DARB},
#endif
#ifdef glCompressedTexImage2DARB
	{"glCompressedTexImage2DARB", luaglew_glCompressedTexImage2DARB},
#endif
#ifdef glCompressedTexImage3DARB
	{"glCompressedTexImage3DARB", luaglew_glCompressedTexImage3DARB},
#endif
#ifdef glCompressedTexSubImage1DARB
	{"glCompressedTexSubImage1DARB", luaglew_glCompressedTexSubImage1DARB},
#endif
#ifdef glCompressedTexSubImage2DARB
	{"glCompressedTexSubImage2DARB", luaglew_glCompressedTexSubImage2DARB},
#endif
#ifdef glCompressedTexSubImage3DARB
	{"glCompressedTexSubImage3DARB", luaglew_glCompressedTexSubImage3DARB},
#endif
#ifdef glCopyPixels
	{"glCopyPixels", luaglew_glCopyPixels},
#endif
#ifdef glCopyTexImage1D
	{"glCopyTexImage1D", luaglew_glCopyTexImage1D},
#endif
#ifdef glCopyTexImage2D
	{"glCopyTexImage2D", luaglew_glCopyTexImage2D},
#endif
#ifdef glCopyTexSubImage1D
	{"glCopyTexSubImage1D", luaglew_glCopyTexSubImage1D},
#endif
#ifdef glCopyTexSubImage2D
	{"glCopyTexSubImage2D", luaglew_glCopyTexSubImage2D},
#endif
#ifdef glCullFace
	{"glCullFace", luaglew_glCullFace},
#endif
#ifdef glDeleteBuffers
	{"glDeleteBuffers", luaglew_glDeleteBuffers},
#endif
#ifdef glDeleteBuffersARB
	{"glDeleteBuffersARB", luaglew_glDeleteBuffersARB},
#endif
#ifdef glDeleteFencesAPPLE
	{"glDeleteFencesAPPLE", luaglew_glDeleteFencesAPPLE},
#endif
#ifdef glDeleteFramebuffers
	{"glDeleteFramebuffers", luaglew_glDeleteFramebuffers},
#endif
#ifdef glDeleteFramebuffersEXT
	{"glDeleteFramebuffersEXT", luaglew_glDeleteFramebuffersEXT},
#endif
#ifdef glDeleteLists
	{"glDeleteLists", luaglew_glDeleteLists},
#endif
#ifdef glDeleteObjectARB
	{"glDeleteObjectARB", luaglew_glDeleteObjectARB},
#endif
#ifdef glDeleteProgramsARB
	{"glDeleteProgramsARB", luaglew_glDeleteProgramsARB},
#endif
#ifdef glDeleteQueries
	{"glDeleteQueries", luaglew_glDeleteQueries},
#endif
#ifdef glDeleteQueriesARB
	{"glDeleteQueriesARB", luaglew_glDeleteQueriesARB},
#endif
#ifdef glDeleteRenderbuffers
	{"glDeleteRenderbuffers", luaglew_glDeleteRenderbuffers},
#endif
#ifdef glDeleteRenderbuffersEXT
	{"glDeleteRenderbuffersEXT", luaglew_glDeleteRenderbuffersEXT},
#endif
#ifdef glDeleteTextures
	{"glDeleteTextures", luaglew_glDeleteTextures},
#endif
#ifdef glDeleteVertexArraysAPPLE
	{"glDeleteVertexArraysAPPLE", luaglew_glDeleteVertexArraysAPPLE},
#endif
#ifdef glDepthFunc
	{"glDepthFunc", luaglew_glDepthFunc},
#endif
#ifdef glDepthMask
	{"glDepthMask", luaglew_glDepthMask},
#endif
#ifdef glDepthRange
	{"glDepthRange", luaglew_glDepthRange},
#endif
#ifdef glDetachObjectARB
	{"glDetachObjectARB", luaglew_glDetachObjectARB},
#endif
#ifdef glDisable
	{"glDisable", luaglew_glDisable},
#endif
#ifdef glDisableClientState
	{"glDisableClientState", luaglew_glDisableClientState},
#endif
#ifdef glDisableIndexedEXT
	{"glDisableIndexedEXT", luaglew_glDisableIndexedEXT},
#endif
#ifdef glDisableVertexAttribAPPLE
	{"glDisableVertexAttribAPPLE", luaglew_glDisableVertexAttribAPPLE},
#endif
#ifdef glDisableVertexAttribArray
	{"glDisableVertexAttribArray", luaglew_glDisableVertexAttribArray},
#endif
#ifdef glDisableVertexAttribArrayARB
	{"glDisableVertexAttribArrayARB", luaglew_glDisableVertexAttribArrayARB},
#endif
#ifdef glDrawArrays
	{"glDrawArrays", luaglew_glDrawArrays},
#endif
#ifdef glDrawArraysInstancedARB
	{"glDrawArraysInstancedARB", luaglew_glDrawArraysInstancedARB},
#endif
#ifdef glDrawBuffer
	{"glDrawBuffer", luaglew_glDrawBuffer},
#endif
#ifdef glDrawBuffers
	{"glDrawBuffers", luaglew_glDrawBuffers},
#endif
#ifdef glDrawBuffersARB
	{"glDrawBuffersARB", luaglew_glDrawBuffersARB},
#endif
#ifdef glDrawElementArrayAPPLE
	{"glDrawElementArrayAPPLE", luaglew_glDrawElementArrayAPPLE},
#endif
#ifdef glDrawElements
	{"glDrawElements", luaglew_glDrawElements},
#endif
#ifdef glDrawElementsInstancedARB
	{"glDrawElementsInstancedARB", luaglew_glDrawElementsInstancedARB},
#endif
#ifdef glDrawPixels
	{"glDrawPixels", luaglew_glDrawPixels},
#endif
#ifdef glDrawRangeElementArrayAPPLE
	{"glDrawRangeElementArrayAPPLE", luaglew_glDrawRangeElementArrayAPPLE},
#endif
#ifdef glDrawRangeElementsEXT
	{"glDrawRangeElementsEXT", luaglew_glDrawRangeElementsEXT},
#endif
#ifdef glEdgeFlag
	{"glEdgeFlag", luaglew_glEdgeFlag},
#endif
#ifdef glEdgeFlagPointer
	{"glEdgeFlagPointer", luaglew_glEdgeFlagPointer},
#endif
#ifdef glEdgeFlagv
	{"glEdgeFlagv", luaglew_glEdgeFlagv},
#endif
#ifdef glElementPointerAPPLE
	{"glElementPointerAPPLE", luaglew_glElementPointerAPPLE},
#endif
#ifdef glEnable
	{"glEnable", luaglew_glEnable},
#endif
#ifdef glEnableClientState
	{"glEnableClientState", luaglew_glEnableClientState},
#endif
#ifdef glEnableIndexedEXT
	{"glEnableIndexedEXT", luaglew_glEnableIndexedEXT},
#endif
#ifdef glEnableVertexAttribAPPLE
	{"glEnableVertexAttribAPPLE", luaglew_glEnableVertexAttribAPPLE},
#endif
#ifdef glEnableVertexAttribArray
	{"glEnableVertexAttribArray", luaglew_glEnableVertexAttribArray},
#endif
#ifdef glEnableVertexAttribArrayARB
	{"glEnableVertexAttribArrayARB", luaglew_glEnableVertexAttribArrayARB},
#endif
#ifdef glEnd
	{"glEnd", luaglew_glEnd},
#endif
#ifdef glEndConditionalRenderNV
	{"glEndConditionalRenderNV", luaglew_glEndConditionalRenderNV},
#endif
#ifdef glEndList
	{"glEndList", luaglew_glEndList},
#endif
#ifdef glEndQueryARB
	{"glEndQueryARB", luaglew_glEndQueryARB},
#endif
#ifdef glEndTransformFeedbackEXT
	{"glEndTransformFeedbackEXT", luaglew_glEndTransformFeedbackEXT},
#endif
#ifdef glEvalCoord1d
	{"glEvalCoord1d", luaglew_glEvalCoord1d},
#endif
#ifdef glEvalCoord1dv
	{"glEvalCoord1dv", luaglew_glEvalCoord1dv},
#endif
#ifdef glEvalCoord1f
	{"glEvalCoord1f", luaglew_glEvalCoord1f},
#endif
#ifdef glEvalCoord1fv
	{"glEvalCoord1fv", luaglew_glEvalCoord1fv},
#endif
#ifdef glEvalCoord2d
	{"glEvalCoord2d", luaglew_glEvalCoord2d},
#endif
#ifdef glEvalCoord2dv
	{"glEvalCoord2dv", luaglew_glEvalCoord2dv},
#endif
#ifdef glEvalCoord2f
	{"glEvalCoord2f", luaglew_glEvalCoord2f},
#endif
#ifdef glEvalCoord2fv
	{"glEvalCoord2fv", luaglew_glEvalCoord2fv},
#endif
#ifdef glEvalMesh1
	{"glEvalMesh1", luaglew_glEvalMesh1},
#endif
#ifdef glEvalMesh2
	{"glEvalMesh2", luaglew_glEvalMesh2},
#endif
#ifdef glEvalPoint1
	{"glEvalPoint1", luaglew_glEvalPoint1},
#endif
#ifdef glEvalPoint2
	{"glEvalPoint2", luaglew_glEvalPoint2},
#endif
#ifdef glFeedbackBuffer
	{"glFeedbackBuffer", luaglew_glFeedbackBuffer},
#endif
#ifdef glFinish
	{"glFinish", luaglew_glFinish},
#endif
#ifdef glFinishFenceAPPLE
	{"glFinishFenceAPPLE", luaglew_glFinishFenceAPPLE},
#endif
#ifdef glFinishObjectAPPLE
	{"glFinishObjectAPPLE", luaglew_glFinishObjectAPPLE},
#endif
#ifdef glFinishRenderAPPLE
	{"glFinishRenderAPPLE", luaglew_glFinishRenderAPPLE},
#endif
#ifdef glFlush
	{"glFlush", luaglew_glFlush},
#endif
#ifdef glFlushMappedBufferRangeAPPLE
	{"glFlushMappedBufferRangeAPPLE", luaglew_glFlushMappedBufferRangeAPPLE},
#endif
#ifdef glFlushRenderAPPLE
	{"glFlushRenderAPPLE", luaglew_glFlushRenderAPPLE},
#endif
#ifdef glFlushVertexArrayRangeAPPLE
	{"glFlushVertexArrayRangeAPPLE", luaglew_glFlushVertexArrayRangeAPPLE},
#endif
#ifdef glFogCoordPointerEXT
	{"glFogCoordPointerEXT", luaglew_glFogCoordPointerEXT},
#endif
#ifdef glFogCoorddEXT
	{"glFogCoorddEXT", luaglew_glFogCoorddEXT},
#endif
#ifdef glFogCoorddv
	{"glFogCoorddv", luaglew_glFogCoorddv},
#endif
#ifdef glFogCoorddvEXT
	{"glFogCoorddvEXT", luaglew_glFogCoorddvEXT},
#endif
#ifdef glFogCoordfEXT
	{"glFogCoordfEXT", luaglew_glFogCoordfEXT},
#endif
#ifdef glFogCoordfvEXT
	{"glFogCoordfvEXT", luaglew_glFogCoordfvEXT},
#endif
#ifdef glFogf
	{"glFogf", luaglew_glFogf},
#endif
#ifdef glFogfv
	{"glFogfv", luaglew_glFogfv},
#endif
#ifdef glFogi
	{"glFogi", luaglew_glFogi},
#endif
#ifdef glFogiv
	{"glFogiv", luaglew_glFogiv},
#endif
#ifdef glFramebufferRenderbuffer
	{"glFramebufferRenderbuffer", luaglew_glFramebufferRenderbuffer},
#endif
#ifdef glFramebufferRenderbufferEXT
	{"glFramebufferRenderbufferEXT", luaglew_glFramebufferRenderbufferEXT},
#endif
#ifdef glFramebufferTexture1D
	{"glFramebufferTexture1D", luaglew_glFramebufferTexture1D},
#endif
#ifdef glFramebufferTexture1DEXT
	{"glFramebufferTexture1DEXT", luaglew_glFramebufferTexture1DEXT},
#endif
#ifdef glFramebufferTexture2D
	{"glFramebufferTexture2D", luaglew_glFramebufferTexture2D},
#endif
#ifdef glFramebufferTexture2DEXT
	{"glFramebufferTexture2DEXT", luaglew_glFramebufferTexture2DEXT},
#endif
#ifdef glFramebufferTexture3D
	{"glFramebufferTexture3D", luaglew_glFramebufferTexture3D},
#endif
#ifdef glFramebufferTexture3DEXT
	{"glFramebufferTexture3DEXT", luaglew_glFramebufferTexture3DEXT},
#endif
#ifdef glFramebufferTextureLayer
	{"glFramebufferTextureLayer", luaglew_glFramebufferTextureLayer},
#endif
#ifdef glFrontFace
	{"glFrontFace", luaglew_glFrontFace},
#endif
#ifdef glFrustum
	{"glFrustum", luaglew_glFrustum},
#endif
#ifdef glGenBuffers
	{"glGenBuffers", luaglew_glGenBuffers},
#endif
#ifdef glGenBuffersARB
	{"glGenBuffersARB", luaglew_glGenBuffersARB},
#endif
#ifdef glGenFencesAPPLE
	{"glGenFencesAPPLE", luaglew_glGenFencesAPPLE},
#endif
#ifdef glGenFramebuffers
	{"glGenFramebuffers", luaglew_glGenFramebuffers},
#endif
#ifdef glGenFramebuffersEXT
	{"glGenFramebuffersEXT", luaglew_glGenFramebuffersEXT},
#endif
#ifdef glGenProgramsARB
	{"glGenProgramsARB", luaglew_glGenProgramsARB},
#endif
#ifdef glGenQueries
	{"glGenQueries", luaglew_glGenQueries},
#endif
#ifdef glGenQueriesARB
	{"glGenQueriesARB", luaglew_glGenQueriesARB},
#endif
#ifdef glGenRenderbuffers
	{"glGenRenderbuffers", luaglew_glGenRenderbuffers},
#endif
#ifdef glGenRenderbuffersEXT
	{"glGenRenderbuffersEXT", luaglew_glGenRenderbuffersEXT},
#endif
#ifdef glGenTextures
	{"glGenTextures", luaglew_glGenTextures},
#endif
#ifdef glGenVertexArraysAPPLE
	{"glGenVertexArraysAPPLE", luaglew_glGenVertexArraysAPPLE},
#endif
#ifdef glGenerateMipmap
	{"glGenerateMipmap", luaglew_glGenerateMipmap},
#endif
#ifdef glGenerateMipmapEXT
	{"glGenerateMipmapEXT", luaglew_glGenerateMipmapEXT},
#endif
#ifdef glGetActiveAttrib
	{"glGetActiveAttrib", luaglew_glGetActiveAttrib},
#endif
#ifdef glGetActiveAttribARB
	{"glGetActiveAttribARB", luaglew_glGetActiveAttribARB},
#endif
#ifdef glGetActiveUniform
	{"glGetActiveUniform", luaglew_glGetActiveUniform},
#endif
#ifdef glGetActiveUniformARB
	{"glGetActiveUniformARB", luaglew_glGetActiveUniformARB},
#endif
#ifdef glGetActiveUniformBlockName
	{"glGetActiveUniformBlockName", luaglew_glGetActiveUniformBlockName},
#endif
#ifdef glGetActiveUniformBlockiv
	{"glGetActiveUniformBlockiv", luaglew_glGetActiveUniformBlockiv},
#endif
#ifdef glGetActiveUniformName
	{"glGetActiveUniformName", luaglew_glGetActiveUniformName},
#endif
#ifdef glGetActiveUniformsiv
	{"glGetActiveUniformsiv", luaglew_glGetActiveUniformsiv},
#endif
#ifdef glGetAttachedShaders
	{"glGetAttachedShaders", luaglew_glGetAttachedShaders},
#endif
#ifdef glGetBooleanIndexedvEXT
	{"glGetBooleanIndexedvEXT", luaglew_glGetBooleanIndexedvEXT},
#endif
#ifdef glGetBooleanv
	{"glGetBooleanv", luaglew_glGetBooleanv},
#endif
#ifdef glGetBufferParameteriv
	{"glGetBufferParameteriv", luaglew_glGetBufferParameteriv},
#endif
#ifdef glGetBufferParameterivARB
	{"glGetBufferParameterivARB", luaglew_glGetBufferParameterivARB},
#endif
#ifdef glGetBufferPointerv
	{"glGetBufferPointerv", luaglew_glGetBufferPointerv},
#endif
#ifdef glGetBufferPointervARB
	{"glGetBufferPointervARB", luaglew_glGetBufferPointervARB},
#endif
#ifdef glGetBufferSubData
	{"glGetBufferSubData", luaglew_glGetBufferSubData},
#endif
#ifdef glGetBufferSubDataARB
	{"glGetBufferSubDataARB", luaglew_glGetBufferSubDataARB},
#endif
#ifdef glGetClipPlane
	{"glGetClipPlane", luaglew_glGetClipPlane},
#endif
#ifdef glGetCompressedTexImageARB
	{"glGetCompressedTexImageARB", luaglew_glGetCompressedTexImageARB},
#endif
#ifdef glGetDoublev
	{"glGetDoublev", luaglew_glGetDoublev},
#endif
#ifdef glGetFloatv
	{"glGetFloatv", luaglew_glGetFloatv},
#endif
#ifdef glGetFramebufferAttachmentParameteriv
	{"glGetFramebufferAttachmentParameteriv", luaglew_glGetFramebufferAttachmentParameteriv},
#endif
#ifdef glGetFramebufferAttachmentParameterivEXT
	{"glGetFramebufferAttachmentParameterivEXT", luaglew_glGetFramebufferAttachmentParameterivEXT},
#endif
#ifdef glGetInfoLogARB
	{"glGetInfoLogARB", luaglew_glGetInfoLogARB},
#endif
#ifdef glGetIntegerIndexedvEXT
	{"glGetIntegerIndexedvEXT", luaglew_glGetIntegerIndexedvEXT},
#endif
#ifdef glGetIntegeri_v
	{"glGetIntegeri_v", luaglew_glGetIntegeri_v},
#endif
#ifdef glGetIntegerv
	{"glGetIntegerv", luaglew_glGetIntegerv},
#endif
#ifdef glGetLightfv
	{"glGetLightfv", luaglew_glGetLightfv},
#endif
#ifdef glGetLightiv
	{"glGetLightiv", luaglew_glGetLightiv},
#endif
#ifdef glGetMapdv
	{"glGetMapdv", luaglew_glGetMapdv},
#endif
#ifdef glGetMapfv
	{"glGetMapfv", luaglew_glGetMapfv},
#endif
#ifdef glGetMapiv
	{"glGetMapiv", luaglew_glGetMapiv},
#endif
#ifdef glGetMaterialfv
	{"glGetMaterialfv", luaglew_glGetMaterialfv},
#endif
#ifdef glGetMaterialiv
	{"glGetMaterialiv", luaglew_glGetMaterialiv},
#endif
#ifdef glGetMinmax
	{"glGetMinmax", luaglew_glGetMinmax},
#endif
#ifdef glGetObjectParameterfvARB
	{"glGetObjectParameterfvARB", luaglew_glGetObjectParameterfvARB},
#endif
#ifdef glGetObjectParameterivAPPLE
	{"glGetObjectParameterivAPPLE", luaglew_glGetObjectParameterivAPPLE},
#endif
#ifdef glGetObjectParameterivARB
	{"glGetObjectParameterivARB", luaglew_glGetObjectParameterivARB},
#endif
#ifdef glGetPixelMapfv
	{"glGetPixelMapfv", luaglew_glGetPixelMapfv},
#endif
#ifdef glGetPixelMapuiv
	{"glGetPixelMapuiv", luaglew_glGetPixelMapuiv},
#endif
#ifdef glGetPixelMapusv
	{"glGetPixelMapusv", luaglew_glGetPixelMapusv},
#endif
#ifdef glGetPointerv
	{"glGetPointerv", luaglew_glGetPointerv},
#endif
#ifdef glGetPolygonStipple
	{"glGetPolygonStipple", luaglew_glGetPolygonStipple},
#endif
#ifdef glGetProgramEnvParameterdvARB
	{"glGetProgramEnvParameterdvARB", luaglew_glGetProgramEnvParameterdvARB},
#endif
#ifdef glGetProgramEnvParameterfvARB
	{"glGetProgramEnvParameterfvARB", luaglew_glGetProgramEnvParameterfvARB},
#endif
#ifdef glGetProgramInfoLog
	{"glGetProgramInfoLog", luaglew_glGetProgramInfoLog},
#endif
#ifdef glGetProgramLocalParameterdvARB
	{"glGetProgramLocalParameterdvARB", luaglew_glGetProgramLocalParameterdvARB},
#endif
#ifdef glGetProgramLocalParameterfvARB
	{"glGetProgramLocalParameterfvARB", luaglew_glGetProgramLocalParameterfvARB},
#endif
#ifdef glGetProgramStringARB
	{"glGetProgramStringARB", luaglew_glGetProgramStringARB},
#endif
#ifdef glGetProgramiv
	{"glGetProgramiv", luaglew_glGetProgramiv},
#endif
#ifdef glGetProgramivARB
	{"glGetProgramivARB", luaglew_glGetProgramivARB},
#endif
#ifdef glGetQueryObjectiv
	{"glGetQueryObjectiv", luaglew_glGetQueryObjectiv},
#endif
#ifdef glGetQueryObjectivARB
	{"glGetQueryObjectivARB", luaglew_glGetQueryObjectivARB},
#endif
#ifdef glGetQueryObjectuiv
	{"glGetQueryObjectuiv", luaglew_glGetQueryObjectuiv},
#endif
#ifdef glGetQueryObjectuivARB
	{"glGetQueryObjectuivARB", luaglew_glGetQueryObjectuivARB},
#endif
#ifdef glGetQueryiv
	{"glGetQueryiv", luaglew_glGetQueryiv},
#endif
#ifdef glGetQueryivARB
	{"glGetQueryivARB", luaglew_glGetQueryivARB},
#endif
#ifdef glGetRenderbufferParameteriv
	{"glGetRenderbufferParameteriv", luaglew_glGetRenderbufferParameteriv},
#endif
#ifdef glGetRenderbufferParameterivEXT
	{"glGetRenderbufferParameterivEXT", luaglew_glGetRenderbufferParameterivEXT},
#endif
#ifdef glGetSeparableFilter
	{"glGetSeparableFilter", luaglew_glGetSeparableFilter},
#endif
#ifdef glGetShaderInfoLog
	{"glGetShaderInfoLog", luaglew_glGetShaderInfoLog},
#endif
#ifdef glGetShaderSource
	{"glGetShaderSource", luaglew_glGetShaderSource},
#endif
#ifdef glGetShaderSourceARB
	{"glGetShaderSourceARB", luaglew_glGetShaderSourceARB},
#endif
#ifdef glGetShaderiv
	{"glGetShaderiv", luaglew_glGetShaderiv},
#endif
#ifdef glGetTexEnvfv
	{"glGetTexEnvfv", luaglew_glGetTexEnvfv},
#endif
#ifdef glGetTexEnviv
	{"glGetTexEnviv", luaglew_glGetTexEnviv},
#endif
#ifdef glGetTexGendv
	{"glGetTexGendv", luaglew_glGetTexGendv},
#endif
#ifdef glGetTexGenfv
	{"glGetTexGenfv", luaglew_glGetTexGenfv},
#endif
#ifdef glGetTexGeniv
	{"glGetTexGeniv", luaglew_glGetTexGeniv},
#endif
#ifdef glGetTexImage
	{"glGetTexImage", luaglew_glGetTexImage},
#endif
#ifdef glGetTexLevelParameterfv
	{"glGetTexLevelParameterfv", luaglew_glGetTexLevelParameterfv},
#endif
#ifdef glGetTexLevelParameteriv
	{"glGetTexLevelParameteriv", luaglew_glGetTexLevelParameteriv},
#endif
#ifdef glGetTexParameterIivEXT
	{"glGetTexParameterIivEXT", luaglew_glGetTexParameterIivEXT},
#endif
#ifdef glGetTexParameterIuivEXT
	{"glGetTexParameterIuivEXT", luaglew_glGetTexParameterIuivEXT},
#endif
#ifdef glGetTexParameterfv
	{"glGetTexParameterfv", luaglew_glGetTexParameterfv},
#endif
#ifdef glGetTexParameteriv
	{"glGetTexParameteriv", luaglew_glGetTexParameteriv},
#endif
#ifdef glGetTransformFeedbackVaryingEXT
	{"glGetTransformFeedbackVaryingEXT", luaglew_glGetTransformFeedbackVaryingEXT},
#endif
#ifdef glGetUniformIndices
	{"glGetUniformIndices", luaglew_glGetUniformIndices},
#endif
#ifdef glGetUniformfv
	{"glGetUniformfv", luaglew_glGetUniformfv},
#endif
#ifdef glGetUniformfvARB
	{"glGetUniformfvARB", luaglew_glGetUniformfvARB},
#endif
#ifdef glGetUniformiv
	{"glGetUniformiv", luaglew_glGetUniformiv},
#endif
#ifdef glGetUniformivARB
	{"glGetUniformivARB", luaglew_glGetUniformivARB},
#endif
#ifdef glGetVertexAttribPointerv
	{"glGetVertexAttribPointerv", luaglew_glGetVertexAttribPointerv},
#endif
#ifdef glGetVertexAttribPointervARB
	{"glGetVertexAttribPointervARB", luaglew_glGetVertexAttribPointervARB},
#endif
#ifdef glGetVertexAttribdv
	{"glGetVertexAttribdv", luaglew_glGetVertexAttribdv},
#endif
#ifdef glGetVertexAttribdvARB
	{"glGetVertexAttribdvARB", luaglew_glGetVertexAttribdvARB},
#endif
#ifdef glGetVertexAttribfv
	{"glGetVertexAttribfv", luaglew_glGetVertexAttribfv},
#endif
#ifdef glGetVertexAttribfvARB
	{"glGetVertexAttribfvARB", luaglew_glGetVertexAttribfvARB},
#endif
#ifdef glGetVertexAttribiv
	{"glGetVertexAttribiv", luaglew_glGetVertexAttribiv},
#endif
#ifdef glGetVertexAttribivARB
	{"glGetVertexAttribivARB", luaglew_glGetVertexAttribivARB},
#endif
#ifdef glHint
	{"glHint", luaglew_glHint},
#endif
#ifdef glIndexMask
	{"glIndexMask", luaglew_glIndexMask},
#endif
#ifdef glIndexPointer
	{"glIndexPointer", luaglew_glIndexPointer},
#endif
#ifdef glIndexd
	{"glIndexd", luaglew_glIndexd},
#endif
#ifdef glIndexdv
	{"glIndexdv", luaglew_glIndexdv},
#endif
#ifdef glIndexf
	{"glIndexf", luaglew_glIndexf},
#endif
#ifdef glIndexfv
	{"glIndexfv", luaglew_glIndexfv},
#endif
#ifdef glIndexi
	{"glIndexi", luaglew_glIndexi},
#endif
#ifdef glIndexiv
	{"glIndexiv", luaglew_glIndexiv},
#endif
#ifdef glIndexs
	{"glIndexs", luaglew_glIndexs},
#endif
#ifdef glIndexsv
	{"glIndexsv", luaglew_glIndexsv},
#endif
#ifdef glIndexub
	{"glIndexub", luaglew_glIndexub},
#endif
#ifdef glIndexubv
	{"glIndexubv", luaglew_glIndexubv},
#endif
#ifdef glInitNames
	{"glInitNames", luaglew_glInitNames},
#endif
#ifdef glInterleavedArrays
	{"glInterleavedArrays", luaglew_glInterleavedArrays},
#endif
#ifdef glLightModelf
	{"glLightModelf", luaglew_glLightModelf},
#endif
#ifdef glLightModelfv
	{"glLightModelfv", luaglew_glLightModelfv},
#endif
#ifdef glLightModeli
	{"glLightModeli", luaglew_glLightModeli},
#endif
#ifdef glLightModeliv
	{"glLightModeliv", luaglew_glLightModeliv},
#endif
#ifdef glLightf
	{"glLightf", luaglew_glLightf},
#endif
#ifdef glLightfv
	{"glLightfv", luaglew_glLightfv},
#endif
#ifdef glLighti
	{"glLighti", luaglew_glLighti},
#endif
#ifdef glLightiv
	{"glLightiv", luaglew_glLightiv},
#endif
#ifdef glLineStipple
	{"glLineStipple", luaglew_glLineStipple},
#endif
#ifdef glLineWidth
	{"glLineWidth", luaglew_glLineWidth},
#endif
#ifdef glLinkProgramARB
	{"glLinkProgramARB", luaglew_glLinkProgramARB},
#endif
#ifdef glListBase
	{"glListBase", luaglew_glListBase},
#endif
#ifdef glLoadIdentity
	{"glLoadIdentity", luaglew_glLoadIdentity},
#endif
#ifdef glLoadMatrixd
	{"glLoadMatrixd", luaglew_glLoadMatrixd},
#endif
#ifdef glLoadMatrixf
	{"glLoadMatrixf", luaglew_glLoadMatrixf},
#endif
#ifdef glLoadName
	{"glLoadName", luaglew_glLoadName},
#endif
#ifdef glLoadTransposeMatrixd
	{"glLoadTransposeMatrixd", luaglew_glLoadTransposeMatrixd},
#endif
#ifdef glLoadTransposeMatrixdARB
	{"glLoadTransposeMatrixdARB", luaglew_glLoadTransposeMatrixdARB},
#endif
#ifdef glLoadTransposeMatrixf
	{"glLoadTransposeMatrixf", luaglew_glLoadTransposeMatrixf},
#endif
#ifdef glLoadTransposeMatrixfARB
	{"glLoadTransposeMatrixfARB", luaglew_glLoadTransposeMatrixfARB},
#endif
#ifdef glLockArraysEXT
	{"glLockArraysEXT", luaglew_glLockArraysEXT},
#endif
#ifdef glLogicOp
	{"glLogicOp", luaglew_glLogicOp},
#endif
#ifdef glMap1d
	{"glMap1d", luaglew_glMap1d},
#endif
#ifdef glMap1f
	{"glMap1f", luaglew_glMap1f},
#endif
#ifdef glMap2d
	{"glMap2d", luaglew_glMap2d},
#endif
#ifdef glMap2f
	{"glMap2f", luaglew_glMap2f},
#endif
#ifdef glMapGrid1d
	{"glMapGrid1d", luaglew_glMapGrid1d},
#endif
#ifdef glMapGrid1f
	{"glMapGrid1f", luaglew_glMapGrid1f},
#endif
#ifdef glMapGrid2d
	{"glMapGrid2d", luaglew_glMapGrid2d},
#endif
#ifdef glMapGrid2f
	{"glMapGrid2f", luaglew_glMapGrid2f},
#endif
#ifdef glMapVertexAttrib1dAPPLE
	{"glMapVertexAttrib1dAPPLE", luaglew_glMapVertexAttrib1dAPPLE},
#endif
#ifdef glMapVertexAttrib1fAPPLE
	{"glMapVertexAttrib1fAPPLE", luaglew_glMapVertexAttrib1fAPPLE},
#endif
#ifdef glMapVertexAttrib2dAPPLE
	{"glMapVertexAttrib2dAPPLE", luaglew_glMapVertexAttrib2dAPPLE},
#endif
#ifdef glMapVertexAttrib2fAPPLE
	{"glMapVertexAttrib2fAPPLE", luaglew_glMapVertexAttrib2fAPPLE},
#endif
#ifdef glMaterialf
	{"glMaterialf", luaglew_glMaterialf},
#endif
#ifdef glMaterialfv
	{"glMaterialfv", luaglew_glMaterialfv},
#endif
#ifdef glMateriali
	{"glMateriali", luaglew_glMateriali},
#endif
#ifdef glMaterialiv
	{"glMaterialiv", luaglew_glMaterialiv},
#endif
#ifdef glMatrixMode
	{"glMatrixMode", luaglew_glMatrixMode},
#endif
#ifdef glMinmax
	{"glMinmax", luaglew_glMinmax},
#endif
#ifdef glMultMatrixd
	{"glMultMatrixd", luaglew_glMultMatrixd},
#endif
#ifdef glMultMatrixf
	{"glMultMatrixf", luaglew_glMultMatrixf},
#endif
#ifdef glMultTransposeMatrixd
	{"glMultTransposeMatrixd", luaglew_glMultTransposeMatrixd},
#endif
#ifdef glMultTransposeMatrixdARB
	{"glMultTransposeMatrixdARB", luaglew_glMultTransposeMatrixdARB},
#endif
#ifdef glMultTransposeMatrixf
	{"glMultTransposeMatrixf", luaglew_glMultTransposeMatrixf},
#endif
#ifdef glMultTransposeMatrixfARB
	{"glMultTransposeMatrixfARB", luaglew_glMultTransposeMatrixfARB},
#endif
#ifdef glMultiDrawArrays
	{"glMultiDrawArrays", luaglew_glMultiDrawArrays},
#endif
#ifdef glMultiDrawArraysEXT
	{"glMultiDrawArraysEXT", luaglew_glMultiDrawArraysEXT},
#endif
#ifdef glMultiDrawElementArrayAPPLE
	{"glMultiDrawElementArrayAPPLE", luaglew_glMultiDrawElementArrayAPPLE},
#endif
#ifdef glMultiDrawElements
	{"glMultiDrawElements", luaglew_glMultiDrawElements},
#endif
#ifdef glMultiDrawElementsEXT
	{"glMultiDrawElementsEXT", luaglew_glMultiDrawElementsEXT},
#endif
#ifdef glMultiDrawRangeElementArrayAPPLE
	{"glMultiDrawRangeElementArrayAPPLE", luaglew_glMultiDrawRangeElementArrayAPPLE},
#endif
#ifdef glMultiTexCoord1dARB
	{"glMultiTexCoord1dARB", luaglew_glMultiTexCoord1dARB},
#endif
#ifdef glMultiTexCoord1dvARB
	{"glMultiTexCoord1dvARB", luaglew_glMultiTexCoord1dvARB},
#endif
#ifdef glMultiTexCoord1fARB
	{"glMultiTexCoord1fARB", luaglew_glMultiTexCoord1fARB},
#endif
#ifdef glMultiTexCoord1fvARB
	{"glMultiTexCoord1fvARB", luaglew_glMultiTexCoord1fvARB},
#endif
#ifdef glMultiTexCoord1iARB
	{"glMultiTexCoord1iARB", luaglew_glMultiTexCoord1iARB},
#endif
#ifdef glMultiTexCoord1ivARB
	{"glMultiTexCoord1ivARB", luaglew_glMultiTexCoord1ivARB},
#endif
#ifdef glMultiTexCoord1sARB
	{"glMultiTexCoord1sARB", luaglew_glMultiTexCoord1sARB},
#endif
#ifdef glMultiTexCoord1svARB
	{"glMultiTexCoord1svARB", luaglew_glMultiTexCoord1svARB},
#endif
#ifdef glMultiTexCoord2dARB
	{"glMultiTexCoord2dARB", luaglew_glMultiTexCoord2dARB},
#endif
#ifdef glMultiTexCoord2dvARB
	{"glMultiTexCoord2dvARB", luaglew_glMultiTexCoord2dvARB},
#endif
#ifdef glMultiTexCoord2fARB
	{"glMultiTexCoord2fARB", luaglew_glMultiTexCoord2fARB},
#endif
#ifdef glMultiTexCoord2fvARB
	{"glMultiTexCoord2fvARB", luaglew_glMultiTexCoord2fvARB},
#endif
#ifdef glMultiTexCoord2iARB
	{"glMultiTexCoord2iARB", luaglew_glMultiTexCoord2iARB},
#endif
#ifdef glMultiTexCoord2ivARB
	{"glMultiTexCoord2ivARB", luaglew_glMultiTexCoord2ivARB},
#endif
#ifdef glMultiTexCoord2sARB
	{"glMultiTexCoord2sARB", luaglew_glMultiTexCoord2sARB},
#endif
#ifdef glMultiTexCoord2svARB
	{"glMultiTexCoord2svARB", luaglew_glMultiTexCoord2svARB},
#endif
#ifdef glMultiTexCoord3dARB
	{"glMultiTexCoord3dARB", luaglew_glMultiTexCoord3dARB},
#endif
#ifdef glMultiTexCoord3dvARB
	{"glMultiTexCoord3dvARB", luaglew_glMultiTexCoord3dvARB},
#endif
#ifdef glMultiTexCoord3fARB
	{"glMultiTexCoord3fARB", luaglew_glMultiTexCoord3fARB},
#endif
#ifdef glMultiTexCoord3fvARB
	{"glMultiTexCoord3fvARB", luaglew_glMultiTexCoord3fvARB},
#endif
#ifdef glMultiTexCoord3iARB
	{"glMultiTexCoord3iARB", luaglew_glMultiTexCoord3iARB},
#endif
#ifdef glMultiTexCoord3ivARB
	{"glMultiTexCoord3ivARB", luaglew_glMultiTexCoord3ivARB},
#endif
#ifdef glMultiTexCoord3sARB
	{"glMultiTexCoord3sARB", luaglew_glMultiTexCoord3sARB},
#endif
#ifdef glMultiTexCoord3svARB
	{"glMultiTexCoord3svARB", luaglew_glMultiTexCoord3svARB},
#endif
#ifdef glMultiTexCoord4dARB
	{"glMultiTexCoord4dARB", luaglew_glMultiTexCoord4dARB},
#endif
#ifdef glMultiTexCoord4dvARB
	{"glMultiTexCoord4dvARB", luaglew_glMultiTexCoord4dvARB},
#endif
#ifdef glMultiTexCoord4fARB
	{"glMultiTexCoord4fARB", luaglew_glMultiTexCoord4fARB},
#endif
#ifdef glMultiTexCoord4fvARB
	{"glMultiTexCoord4fvARB", luaglew_glMultiTexCoord4fvARB},
#endif
#ifdef glMultiTexCoord4i
	{"glMultiTexCoord4i", luaglew_glMultiTexCoord4i},
#endif
#ifdef glMultiTexCoord4iARB
	{"glMultiTexCoord4iARB", luaglew_glMultiTexCoord4iARB},
#endif
#ifdef glMultiTexCoord4ivARB
	{"glMultiTexCoord4ivARB", luaglew_glMultiTexCoord4ivARB},
#endif
#ifdef glMultiTexCoord4sARB
	{"glMultiTexCoord4sARB", luaglew_glMultiTexCoord4sARB},
#endif
#ifdef glMultiTexCoord4svARB
	{"glMultiTexCoord4svARB", luaglew_glMultiTexCoord4svARB},
#endif
#ifdef glNewList
	{"glNewList", luaglew_glNewList},
#endif
#ifdef glNormal3b
	{"glNormal3b", luaglew_glNormal3b},
#endif
#ifdef glNormal3bv
	{"glNormal3bv", luaglew_glNormal3bv},
#endif
#ifdef glNormal3d
	{"glNormal3d", luaglew_glNormal3d},
#endif
#ifdef glNormal3dv
	{"glNormal3dv", luaglew_glNormal3dv},
#endif
#ifdef glNormal3f
	{"glNormal3f", luaglew_glNormal3f},
#endif
#ifdef glNormal3fv
	{"glNormal3fv", luaglew_glNormal3fv},
#endif
#ifdef glNormal3i
	{"glNormal3i", luaglew_glNormal3i},
#endif
#ifdef glNormal3iv
	{"glNormal3iv", luaglew_glNormal3iv},
#endif
#ifdef glNormal3s
	{"glNormal3s", luaglew_glNormal3s},
#endif
#ifdef glNormal3sv
	{"glNormal3sv", luaglew_glNormal3sv},
#endif
#ifdef glNormalPointer
	{"glNormalPointer", luaglew_glNormalPointer},
#endif
#ifdef glOrtho
	{"glOrtho", luaglew_glOrtho},
#endif
#ifdef glPNTrianglesfATIX
	{"glPNTrianglesfATIX", luaglew_glPNTrianglesfATIX},
#endif
#ifdef glPNTrianglesiATIX
	{"glPNTrianglesiATIX", luaglew_glPNTrianglesiATIX},
#endif
#ifdef glPassThrough
	{"glPassThrough", luaglew_glPassThrough},
#endif
#ifdef glPixelMapfv
	{"glPixelMapfv", luaglew_glPixelMapfv},
#endif
#ifdef glPixelMapuiv
	{"glPixelMapuiv", luaglew_glPixelMapuiv},
#endif
#ifdef glPixelMapusv
	{"glPixelMapusv", luaglew_glPixelMapusv},
#endif
#ifdef glPixelStoref
	{"glPixelStoref", luaglew_glPixelStoref},
#endif
#ifdef glPixelStorei
	{"glPixelStorei", luaglew_glPixelStorei},
#endif
#ifdef glPixelTransferf
	{"glPixelTransferf", luaglew_glPixelTransferf},
#endif
#ifdef glPixelTransferi
	{"glPixelTransferi", luaglew_glPixelTransferi},
#endif
#ifdef glPixelZoom
	{"glPixelZoom", luaglew_glPixelZoom},
#endif
#ifdef glPointParameterfvARB
	{"glPointParameterfvARB", luaglew_glPointParameterfvARB},
#endif
#ifdef glPointParameteriNV
	{"glPointParameteriNV", luaglew_glPointParameteriNV},
#endif
#ifdef glPointParameterivNV
	{"glPointParameterivNV", luaglew_glPointParameterivNV},
#endif
#ifdef glPointSize
	{"glPointSize", luaglew_glPointSize},
#endif
#ifdef glPolygonMode
	{"glPolygonMode", luaglew_glPolygonMode},
#endif
#ifdef glPolygonOffset
	{"glPolygonOffset", luaglew_glPolygonOffset},
#endif
#ifdef glPolygonStipple
	{"glPolygonStipple", luaglew_glPolygonStipple},
#endif
#ifdef glPopAttrib
	{"glPopAttrib", luaglew_glPopAttrib},
#endif
#ifdef glPopClientAttrib
	{"glPopClientAttrib", luaglew_glPopClientAttrib},
#endif
#ifdef glPopMatrix
	{"glPopMatrix", luaglew_glPopMatrix},
#endif
#ifdef glPopName
	{"glPopName", luaglew_glPopName},
#endif
#ifdef glProgramEnvParameter4dARB
	{"glProgramEnvParameter4dARB", luaglew_glProgramEnvParameter4dARB},
#endif
#ifdef glProgramEnvParameter4dvARB
	{"glProgramEnvParameter4dvARB", luaglew_glProgramEnvParameter4dvARB},
#endif
#ifdef glProgramEnvParameter4fARB
	{"glProgramEnvParameter4fARB", luaglew_glProgramEnvParameter4fARB},
#endif
#ifdef glProgramEnvParameter4fvARB
	{"glProgramEnvParameter4fvARB", luaglew_glProgramEnvParameter4fvARB},
#endif
#ifdef glProgramEnvParameters4fvEXT
	{"glProgramEnvParameters4fvEXT", luaglew_glProgramEnvParameters4fvEXT},
#endif
#ifdef glProgramLocalParameter4dARB
	{"glProgramLocalParameter4dARB", luaglew_glProgramLocalParameter4dARB},
#endif
#ifdef glProgramLocalParameter4dvARB
	{"glProgramLocalParameter4dvARB", luaglew_glProgramLocalParameter4dvARB},
#endif
#ifdef glProgramLocalParameter4fARB
	{"glProgramLocalParameter4fARB", luaglew_glProgramLocalParameter4fARB},
#endif
#ifdef glProgramLocalParameter4fvARB
	{"glProgramLocalParameter4fvARB", luaglew_glProgramLocalParameter4fvARB},
#endif
#ifdef glProgramLocalParameters4fvEXT
	{"glProgramLocalParameters4fvEXT", luaglew_glProgramLocalParameters4fvEXT},
#endif
#ifdef glProgramStringARB
	{"glProgramStringARB", luaglew_glProgramStringARB},
#endif
#ifdef glProvokingVertexEXT
	{"glProvokingVertexEXT", luaglew_glProvokingVertexEXT},
#endif
#ifdef glPushAttrib
	{"glPushAttrib", luaglew_glPushAttrib},
#endif
#ifdef glPushClientAttrib
	{"glPushClientAttrib", luaglew_glPushClientAttrib},
#endif
#ifdef glPushMatrix
	{"glPushMatrix", luaglew_glPushMatrix},
#endif
#ifdef glPushName
	{"glPushName", luaglew_glPushName},
#endif
#ifdef glRasterPos2d
	{"glRasterPos2d", luaglew_glRasterPos2d},
#endif
#ifdef glRasterPos2dv
	{"glRasterPos2dv", luaglew_glRasterPos2dv},
#endif
#ifdef glRasterPos2f
	{"glRasterPos2f", luaglew_glRasterPos2f},
#endif
#ifdef glRasterPos2fv
	{"glRasterPos2fv", luaglew_glRasterPos2fv},
#endif
#ifdef glRasterPos2i
	{"glRasterPos2i", luaglew_glRasterPos2i},
#endif
#ifdef glRasterPos2iv
	{"glRasterPos2iv", luaglew_glRasterPos2iv},
#endif
#ifdef glRasterPos2s
	{"glRasterPos2s", luaglew_glRasterPos2s},
#endif
#ifdef glRasterPos2sv
	{"glRasterPos2sv", luaglew_glRasterPos2sv},
#endif
#ifdef glRasterPos3d
	{"glRasterPos3d", luaglew_glRasterPos3d},
#endif
#ifdef glRasterPos3dv
	{"glRasterPos3dv", luaglew_glRasterPos3dv},
#endif
#ifdef glRasterPos3f
	{"glRasterPos3f", luaglew_glRasterPos3f},
#endif
#ifdef glRasterPos3fv
	{"glRasterPos3fv", luaglew_glRasterPos3fv},
#endif
#ifdef glRasterPos3i
	{"glRasterPos3i", luaglew_glRasterPos3i},
#endif
#ifdef glRasterPos3iv
	{"glRasterPos3iv", luaglew_glRasterPos3iv},
#endif
#ifdef glRasterPos3s
	{"glRasterPos3s", luaglew_glRasterPos3s},
#endif
#ifdef glRasterPos3sv
	{"glRasterPos3sv", luaglew_glRasterPos3sv},
#endif
#ifdef glRasterPos4d
	{"glRasterPos4d", luaglew_glRasterPos4d},
#endif
#ifdef glRasterPos4dv
	{"glRasterPos4dv", luaglew_glRasterPos4dv},
#endif
#ifdef glRasterPos4f
	{"glRasterPos4f", luaglew_glRasterPos4f},
#endif
#ifdef glRasterPos4fv
	{"glRasterPos4fv", luaglew_glRasterPos4fv},
#endif
#ifdef glRasterPos4i
	{"glRasterPos4i", luaglew_glRasterPos4i},
#endif
#ifdef glRasterPos4iv
	{"glRasterPos4iv", luaglew_glRasterPos4iv},
#endif
#ifdef glRasterPos4s
	{"glRasterPos4s", luaglew_glRasterPos4s},
#endif
#ifdef glRasterPos4sv
	{"glRasterPos4sv", luaglew_glRasterPos4sv},
#endif
#ifdef glReadBuffer
	{"glReadBuffer", luaglew_glReadBuffer},
#endif
#ifdef glReadPixels
	{"glReadPixels", luaglew_glReadPixels},
#endif
#ifdef glRectd
	{"glRectd", luaglew_glRectd},
#endif
#ifdef glRectdv
	{"glRectdv", luaglew_glRectdv},
#endif
#ifdef glRectf
	{"glRectf", luaglew_glRectf},
#endif
#ifdef glRectfv
	{"glRectfv", luaglew_glRectfv},
#endif
#ifdef glRecti
	{"glRecti", luaglew_glRecti},
#endif
#ifdef glRectiv
	{"glRectiv", luaglew_glRectiv},
#endif
#ifdef glRects
	{"glRects", luaglew_glRects},
#endif
#ifdef glRectsv
	{"glRectsv", luaglew_glRectsv},
#endif
#ifdef glRenderbufferStorage
	{"glRenderbufferStorage", luaglew_glRenderbufferStorage},
#endif
#ifdef glRenderbufferStorageEXT
	{"glRenderbufferStorageEXT", luaglew_glRenderbufferStorageEXT},
#endif
#ifdef glRenderbufferStorageMultisample
	{"glRenderbufferStorageMultisample", luaglew_glRenderbufferStorageMultisample},
#endif
#ifdef glRenderbufferStorageMultisampleEXT
	{"glRenderbufferStorageMultisampleEXT", luaglew_glRenderbufferStorageMultisampleEXT},
#endif
#ifdef glRotated
	{"glRotated", luaglew_glRotated},
#endif
#ifdef glRotatef
	{"glRotatef", luaglew_glRotatef},
#endif
#ifdef glSampleCoverageARB
	{"glSampleCoverageARB", luaglew_glSampleCoverageARB},
#endif
#ifdef glSamplePass
	{"glSamplePass", luaglew_glSamplePass},
#endif
#ifdef glSamplePassARB
	{"glSamplePassARB", luaglew_glSamplePassARB},
#endif
#ifdef glScaled
	{"glScaled", luaglew_glScaled},
#endif
#ifdef glScalef
	{"glScalef", luaglew_glScalef},
#endif
#ifdef glScissor
	{"glScissor", luaglew_glScissor},
#endif
#ifdef glSecondaryColor3bEXT
	{"glSecondaryColor3bEXT", luaglew_glSecondaryColor3bEXT},
#endif
#ifdef glSecondaryColor3bvEXT
	{"glSecondaryColor3bvEXT", luaglew_glSecondaryColor3bvEXT},
#endif
#ifdef glSecondaryColor3dEXT
	{"glSecondaryColor3dEXT", luaglew_glSecondaryColor3dEXT},
#endif
#ifdef glSecondaryColor3dvEXT
	{"glSecondaryColor3dvEXT", luaglew_glSecondaryColor3dvEXT},
#endif
#ifdef glSecondaryColor3fEXT
	{"glSecondaryColor3fEXT", luaglew_glSecondaryColor3fEXT},
#endif
#ifdef glSecondaryColor3fvEXT
	{"glSecondaryColor3fvEXT", luaglew_glSecondaryColor3fvEXT},
#endif
#ifdef glSecondaryColor3iEXT
	{"glSecondaryColor3iEXT", luaglew_glSecondaryColor3iEXT},
#endif
#ifdef glSecondaryColor3ivEXT
	{"glSecondaryColor3ivEXT", luaglew_glSecondaryColor3ivEXT},
#endif
#ifdef glSecondaryColor3sEXT
	{"glSecondaryColor3sEXT", luaglew_glSecondaryColor3sEXT},
#endif
#ifdef glSecondaryColor3svEXT
	{"glSecondaryColor3svEXT", luaglew_glSecondaryColor3svEXT},
#endif
#ifdef glSecondaryColor3ubEXT
	{"glSecondaryColor3ubEXT", luaglew_glSecondaryColor3ubEXT},
#endif
#ifdef glSecondaryColor3ubvEXT
	{"glSecondaryColor3ubvEXT", luaglew_glSecondaryColor3ubvEXT},
#endif
#ifdef glSecondaryColor3uiEXT
	{"glSecondaryColor3uiEXT", luaglew_glSecondaryColor3uiEXT},
#endif
#ifdef glSecondaryColor3uivEXT
	{"glSecondaryColor3uivEXT", luaglew_glSecondaryColor3uivEXT},
#endif
#ifdef glSecondaryColor3usEXT
	{"glSecondaryColor3usEXT", luaglew_glSecondaryColor3usEXT},
#endif
#ifdef glSecondaryColor3usvEXT
	{"glSecondaryColor3usvEXT", luaglew_glSecondaryColor3usvEXT},
#endif
#ifdef glSecondaryColorPointer
	{"glSecondaryColorPointer", luaglew_glSecondaryColorPointer},
#endif
#ifdef glSecondaryColorPointerEXT
	{"glSecondaryColorPointerEXT", luaglew_glSecondaryColorPointerEXT},
#endif
#ifdef glSelectBuffer
	{"glSelectBuffer", luaglew_glSelectBuffer},
#endif
#ifdef glSetFenceAPPLE
	{"glSetFenceAPPLE", luaglew_glSetFenceAPPLE},
#endif
#ifdef glShadeModel
	{"glShadeModel", luaglew_glShadeModel},
#endif
#ifdef glShaderSource
	{"glShaderSource", luaglew_glShaderSource},
#endif
#ifdef glShaderSourceARB
	{"glShaderSourceARB", luaglew_glShaderSourceARB},
#endif
#ifdef glStencilFunc
	{"glStencilFunc", luaglew_glStencilFunc},
#endif
#ifdef glStencilFuncSeparate
	{"glStencilFuncSeparate", luaglew_glStencilFuncSeparate},
#endif
#ifdef glStencilMask
	{"glStencilMask", luaglew_glStencilMask},
#endif
#ifdef glStencilMaskSeparate
	{"glStencilMaskSeparate", luaglew_glStencilMaskSeparate},
#endif
#ifdef glStencilOp
	{"glStencilOp", luaglew_glStencilOp},
#endif
#ifdef glStencilOpSeparate
	{"glStencilOpSeparate", luaglew_glStencilOpSeparate},
#endif
#ifdef glSwapAPPLE
	{"glSwapAPPLE", luaglew_glSwapAPPLE},
#endif
#ifdef glTexCoord1d
	{"glTexCoord1d", luaglew_glTexCoord1d},
#endif
#ifdef glTexCoord1dv
	{"glTexCoord1dv", luaglew_glTexCoord1dv},
#endif
#ifdef glTexCoord1f
	{"glTexCoord1f", luaglew_glTexCoord1f},
#endif
#ifdef glTexCoord1fv
	{"glTexCoord1fv", luaglew_glTexCoord1fv},
#endif
#ifdef glTexCoord1i
	{"glTexCoord1i", luaglew_glTexCoord1i},
#endif
#ifdef glTexCoord1iv
	{"glTexCoord1iv", luaglew_glTexCoord1iv},
#endif
#ifdef glTexCoord1s
	{"glTexCoord1s", luaglew_glTexCoord1s},
#endif
#ifdef glTexCoord1sv
	{"glTexCoord1sv", luaglew_glTexCoord1sv},
#endif
#ifdef glTexCoord2d
	{"glTexCoord2d", luaglew_glTexCoord2d},
#endif
#ifdef glTexCoord2dv
	{"glTexCoord2dv", luaglew_glTexCoord2dv},
#endif
#ifdef glTexCoord2f
	{"glTexCoord2f", luaglew_glTexCoord2f},
#endif
#ifdef glTexCoord2fv
	{"glTexCoord2fv", luaglew_glTexCoord2fv},
#endif
#ifdef glTexCoord2i
	{"glTexCoord2i", luaglew_glTexCoord2i},
#endif
#ifdef glTexCoord2iv
	{"glTexCoord2iv", luaglew_glTexCoord2iv},
#endif
#ifdef glTexCoord2s
	{"glTexCoord2s", luaglew_glTexCoord2s},
#endif
#ifdef glTexCoord2sv
	{"glTexCoord2sv", luaglew_glTexCoord2sv},
#endif
#ifdef glTexCoord3d
	{"glTexCoord3d", luaglew_glTexCoord3d},
#endif
#ifdef glTexCoord3dv
	{"glTexCoord3dv", luaglew_glTexCoord3dv},
#endif
#ifdef glTexCoord3f
	{"glTexCoord3f", luaglew_glTexCoord3f},
#endif
#ifdef glTexCoord3fv
	{"glTexCoord3fv", luaglew_glTexCoord3fv},
#endif
#ifdef glTexCoord3i
	{"glTexCoord3i", luaglew_glTexCoord3i},
#endif
#ifdef glTexCoord3iv
	{"glTexCoord3iv", luaglew_glTexCoord3iv},
#endif
#ifdef glTexCoord3s
	{"glTexCoord3s", luaglew_glTexCoord3s},
#endif
#ifdef glTexCoord3sv
	{"glTexCoord3sv", luaglew_glTexCoord3sv},
#endif
#ifdef glTexCoord4d
	{"glTexCoord4d", luaglew_glTexCoord4d},
#endif
#ifdef glTexCoord4dv
	{"glTexCoord4dv", luaglew_glTexCoord4dv},
#endif
#ifdef glTexCoord4f
	{"glTexCoord4f", luaglew_glTexCoord4f},
#endif
#ifdef glTexCoord4fv
	{"glTexCoord4fv", luaglew_glTexCoord4fv},
#endif
#ifdef glTexCoord4i
	{"glTexCoord4i", luaglew_glTexCoord4i},
#endif
#ifdef glTexCoord4iv
	{"glTexCoord4iv", luaglew_glTexCoord4iv},
#endif
#ifdef glTexCoord4s
	{"glTexCoord4s", luaglew_glTexCoord4s},
#endif
#ifdef glTexCoord4sv
	{"glTexCoord4sv", luaglew_glTexCoord4sv},
#endif
#ifdef glTexCoordPointer
	{"glTexCoordPointer", luaglew_glTexCoordPointer},
#endif
#ifdef glTexEnvf
	{"glTexEnvf", luaglew_glTexEnvf},
#endif
#ifdef glTexEnvfv
	{"glTexEnvfv", luaglew_glTexEnvfv},
#endif
#ifdef glTexEnvi
	{"glTexEnvi", luaglew_glTexEnvi},
#endif
#ifdef glTexEnviv
	{"glTexEnviv", luaglew_glTexEnviv},
#endif
#ifdef glTexGend
	{"glTexGend", luaglew_glTexGend},
#endif
#ifdef glTexGendv
	{"glTexGendv", luaglew_glTexGendv},
#endif
#ifdef glTexGenf
	{"glTexGenf", luaglew_glTexGenf},
#endif
#ifdef glTexGenfv
	{"glTexGenfv", luaglew_glTexGenfv},
#endif
#ifdef glTexGeni
	{"glTexGeni", luaglew_glTexGeni},
#endif
#ifdef glTexGeniv
	{"glTexGeniv", luaglew_glTexGeniv},
#endif
#ifdef glTexImage1D
	{"glTexImage1D", luaglew_glTexImage1D},
#endif
#ifdef glTexImage2D
	{"glTexImage2D", luaglew_glTexImage2D},
#endif
#ifdef glTexImage3D
	{"glTexImage3D", luaglew_glTexImage3D},
#endif
#ifdef glTexParameterIivEXT
	{"glTexParameterIivEXT", luaglew_glTexParameterIivEXT},
#endif
#ifdef glTexParameterIuivEXT
	{"glTexParameterIuivEXT", luaglew_glTexParameterIuivEXT},
#endif
#ifdef glTexParameterf
	{"glTexParameterf", luaglew_glTexParameterf},
#endif
#ifdef glTexParameterfv
	{"glTexParameterfv", luaglew_glTexParameterfv},
#endif
#ifdef glTexParameteri
	{"glTexParameteri", luaglew_glTexParameteri},
#endif
#ifdef glTexParameteriv
	{"glTexParameteriv", luaglew_glTexParameteriv},
#endif
#ifdef glTexSubImage1D
	{"glTexSubImage1D", luaglew_glTexSubImage1D},
#endif
#ifdef glTexSubImage2D
	{"glTexSubImage2D", luaglew_glTexSubImage2D},
#endif
#ifdef glTextureRangeAPPLE
	{"glTextureRangeAPPLE", luaglew_glTextureRangeAPPLE},
#endif
#ifdef glTransformFeedbackVaryingsEXT
	{"glTransformFeedbackVaryingsEXT", luaglew_glTransformFeedbackVaryingsEXT},
#endif
#ifdef glTranslated
	{"glTranslated", luaglew_glTranslated},
#endif
#ifdef glTranslatef
	{"glTranslatef", luaglew_glTranslatef},
#endif
#ifdef glUniform1fARB
	{"glUniform1fARB", luaglew_glUniform1fARB},
#endif
#ifdef glUniform1fv
	{"glUniform1fv", luaglew_glUniform1fv},
#endif
#ifdef glUniform1fvARB
	{"glUniform1fvARB", luaglew_glUniform1fvARB},
#endif
#ifdef glUniform1iARB
	{"glUniform1iARB", luaglew_glUniform1iARB},
#endif
#ifdef glUniform1iv
	{"glUniform1iv", luaglew_glUniform1iv},
#endif
#ifdef glUniform1ivARB
	{"glUniform1ivARB", luaglew_glUniform1ivARB},
#endif
#ifdef glUniform2fARB
	{"glUniform2fARB", luaglew_glUniform2fARB},
#endif
#ifdef glUniform2fv
	{"glUniform2fv", luaglew_glUniform2fv},
#endif
#ifdef glUniform2fvARB
	{"glUniform2fvARB", luaglew_glUniform2fvARB},
#endif
#ifdef glUniform2iARB
	{"glUniform2iARB", luaglew_glUniform2iARB},
#endif
#ifdef glUniform2ivARB
	{"glUniform2ivARB", luaglew_glUniform2ivARB},
#endif
#ifdef glUniform3fARB
	{"glUniform3fARB", luaglew_glUniform3fARB},
#endif
#ifdef glUniform3fv
	{"glUniform3fv", luaglew_glUniform3fv},
#endif
#ifdef glUniform3fvARB
	{"glUniform3fvARB", luaglew_glUniform3fvARB},
#endif
#ifdef glUniform3iARB
	{"glUniform3iARB", luaglew_glUniform3iARB},
#endif
#ifdef glUniform3iv
	{"glUniform3iv", luaglew_glUniform3iv},
#endif
#ifdef glUniform3ivARB
	{"glUniform3ivARB", luaglew_glUniform3ivARB},
#endif
#ifdef glUniform4fARB
	{"glUniform4fARB", luaglew_glUniform4fARB},
#endif
#ifdef glUniform4fv
	{"glUniform4fv", luaglew_glUniform4fv},
#endif
#ifdef glUniform4fvARB
	{"glUniform4fvARB", luaglew_glUniform4fvARB},
#endif
#ifdef glUniform4iARB
	{"glUniform4iARB", luaglew_glUniform4iARB},
#endif
#ifdef glUniform4iv
	{"glUniform4iv", luaglew_glUniform4iv},
#endif
#ifdef glUniform4ivARB
	{"glUniform4ivARB", luaglew_glUniform4ivARB},
#endif
#ifdef glUniformBlockBinding
	{"glUniformBlockBinding", luaglew_glUniformBlockBinding},
#endif
#ifdef glUniformMatrix2fv
	{"glUniformMatrix2fv", luaglew_glUniformMatrix2fv},
#endif
#ifdef glUniformMatrix2fvARB
	{"glUniformMatrix2fvARB", luaglew_glUniformMatrix2fvARB},
#endif
#ifdef glUniformMatrix3fv
	{"glUniformMatrix3fv", luaglew_glUniformMatrix3fv},
#endif
#ifdef glUniformMatrix3fvARB
	{"glUniformMatrix3fvARB", luaglew_glUniformMatrix3fvARB},
#endif
#ifdef glUniformMatrix4fv
	{"glUniformMatrix4fv", luaglew_glUniformMatrix4fv},
#endif
#ifdef glUniformMatrix4fvARB
	{"glUniformMatrix4fvARB", luaglew_glUniformMatrix4fvARB},
#endif
#ifdef glUnlockArraysEXT
	{"glUnlockArraysEXT", luaglew_glUnlockArraysEXT},
#endif
#ifdef glUseProgramObjectARB
	{"glUseProgramObjectARB", luaglew_glUseProgramObjectARB},
#endif
#ifdef glValidateProgramARB
	{"glValidateProgramARB", luaglew_glValidateProgramARB},
#endif
#ifdef glVertex2d
	{"glVertex2d", luaglew_glVertex2d},
#endif
#ifdef glVertex2dv
	{"glVertex2dv", luaglew_glVertex2dv},
#endif
#ifdef glVertex2f
	{"glVertex2f", luaglew_glVertex2f},
#endif
#ifdef glVertex2fv
	{"glVertex2fv", luaglew_glVertex2fv},
#endif
#ifdef glVertex2i
	{"glVertex2i", luaglew_glVertex2i},
#endif
#ifdef glVertex2iv
	{"glVertex2iv", luaglew_glVertex2iv},
#endif
#ifdef glVertex2s
	{"glVertex2s", luaglew_glVertex2s},
#endif
#ifdef glVertex2sv
	{"glVertex2sv", luaglew_glVertex2sv},
#endif
#ifdef glVertex3d
	{"glVertex3d", luaglew_glVertex3d},
#endif
#ifdef glVertex3dv
	{"glVertex3dv", luaglew_glVertex3dv},
#endif
#ifdef glVertex3f
	{"glVertex3f", luaglew_glVertex3f},
#endif
#ifdef glVertex3fv
	{"glVertex3fv", luaglew_glVertex3fv},
#endif
#ifdef glVertex3i
	{"glVertex3i", luaglew_glVertex3i},
#endif
#ifdef glVertex3iv
	{"glVertex3iv", luaglew_glVertex3iv},
#endif
#ifdef glVertex3s
	{"glVertex3s", luaglew_glVertex3s},
#endif
#ifdef glVertex3sv
	{"glVertex3sv", luaglew_glVertex3sv},
#endif
#ifdef glVertex4d
	{"glVertex4d", luaglew_glVertex4d},
#endif
#ifdef glVertex4dv
	{"glVertex4dv", luaglew_glVertex4dv},
#endif
#ifdef glVertex4f
	{"glVertex4f", luaglew_glVertex4f},
#endif
#ifdef glVertex4fv
	{"glVertex4fv", luaglew_glVertex4fv},
#endif
#ifdef glVertex4i
	{"glVertex4i", luaglew_glVertex4i},
#endif
#ifdef glVertex4iv
	{"glVertex4iv", luaglew_glVertex4iv},
#endif
#ifdef glVertex4s
	{"glVertex4s", luaglew_glVertex4s},
#endif
#ifdef glVertex4sv
	{"glVertex4sv", luaglew_glVertex4sv},
#endif
#ifdef glVertexArrayParameteriAPPLE
	{"glVertexArrayParameteriAPPLE", luaglew_glVertexArrayParameteriAPPLE},
#endif
#ifdef glVertexArrayRangeAPPLE
	{"glVertexArrayRangeAPPLE", luaglew_glVertexArrayRangeAPPLE},
#endif
#ifdef glVertexAttrib1dARB
	{"glVertexAttrib1dARB", luaglew_glVertexAttrib1dARB},
#endif
#ifdef glVertexAttrib1dv
	{"glVertexAttrib1dv", luaglew_glVertexAttrib1dv},
#endif
#ifdef glVertexAttrib1dvARB
	{"glVertexAttrib1dvARB", luaglew_glVertexAttrib1dvARB},
#endif
#ifdef glVertexAttrib1fARB
	{"glVertexAttrib1fARB", luaglew_glVertexAttrib1fARB},
#endif
#ifdef glVertexAttrib1fv
	{"glVertexAttrib1fv", luaglew_glVertexAttrib1fv},
#endif
#ifdef glVertexAttrib1fvARB
	{"glVertexAttrib1fvARB", luaglew_glVertexAttrib1fvARB},
#endif
#ifdef glVertexAttrib1sARB
	{"glVertexAttrib1sARB", luaglew_glVertexAttrib1sARB},
#endif
#ifdef glVertexAttrib1sv
	{"glVertexAttrib1sv", luaglew_glVertexAttrib1sv},
#endif
#ifdef glVertexAttrib1svARB
	{"glVertexAttrib1svARB", luaglew_glVertexAttrib1svARB},
#endif
#ifdef glVertexAttrib2dARB
	{"glVertexAttrib2dARB", luaglew_glVertexAttrib2dARB},
#endif
#ifdef glVertexAttrib2dv
	{"glVertexAttrib2dv", luaglew_glVertexAttrib2dv},
#endif
#ifdef glVertexAttrib2dvARB
	{"glVertexAttrib2dvARB", luaglew_glVertexAttrib2dvARB},
#endif
#ifdef glVertexAttrib2fARB
	{"glVertexAttrib2fARB", luaglew_glVertexAttrib2fARB},
#endif
#ifdef glVertexAttrib2fv
	{"glVertexAttrib2fv", luaglew_glVertexAttrib2fv},
#endif
#ifdef glVertexAttrib2fvARB
	{"glVertexAttrib2fvARB", luaglew_glVertexAttrib2fvARB},
#endif
#ifdef glVertexAttrib2sARB
	{"glVertexAttrib2sARB", luaglew_glVertexAttrib2sARB},
#endif
#ifdef glVertexAttrib2sv
	{"glVertexAttrib2sv", luaglew_glVertexAttrib2sv},
#endif
#ifdef glVertexAttrib2svARB
	{"glVertexAttrib2svARB", luaglew_glVertexAttrib2svARB},
#endif
#ifdef glVertexAttrib3dARB
	{"glVertexAttrib3dARB", luaglew_glVertexAttrib3dARB},
#endif
#ifdef glVertexAttrib3dv
	{"glVertexAttrib3dv", luaglew_glVertexAttrib3dv},
#endif
#ifdef glVertexAttrib3dvARB
	{"glVertexAttrib3dvARB", luaglew_glVertexAttrib3dvARB},
#endif
#ifdef glVertexAttrib3fARB
	{"glVertexAttrib3fARB", luaglew_glVertexAttrib3fARB},
#endif
#ifdef glVertexAttrib3fv
	{"glVertexAttrib3fv", luaglew_glVertexAttrib3fv},
#endif
#ifdef glVertexAttrib3fvARB
	{"glVertexAttrib3fvARB", luaglew_glVertexAttrib3fvARB},
#endif
#ifdef glVertexAttrib3sARB
	{"glVertexAttrib3sARB", luaglew_glVertexAttrib3sARB},
#endif
#ifdef glVertexAttrib3sv
	{"glVertexAttrib3sv", luaglew_glVertexAttrib3sv},
#endif
#ifdef glVertexAttrib3svARB
	{"glVertexAttrib3svARB", luaglew_glVertexAttrib3svARB},
#endif
#ifdef glVertexAttrib4Nbv
	{"glVertexAttrib4Nbv", luaglew_glVertexAttrib4Nbv},
#endif
#ifdef glVertexAttrib4NbvARB
	{"glVertexAttrib4NbvARB", luaglew_glVertexAttrib4NbvARB},
#endif
#ifdef glVertexAttrib4Niv
	{"glVertexAttrib4Niv", luaglew_glVertexAttrib4Niv},
#endif
#ifdef glVertexAttrib4NivARB
	{"glVertexAttrib4NivARB", luaglew_glVertexAttrib4NivARB},
#endif
#ifdef glVertexAttrib4Nsv
	{"glVertexAttrib4Nsv", luaglew_glVertexAttrib4Nsv},
#endif
#ifdef glVertexAttrib4NsvARB
	{"glVertexAttrib4NsvARB", luaglew_glVertexAttrib4NsvARB},
#endif
#ifdef glVertexAttrib4NubARB
	{"glVertexAttrib4NubARB", luaglew_glVertexAttrib4NubARB},
#endif
#ifdef glVertexAttrib4Nubv
	{"glVertexAttrib4Nubv", luaglew_glVertexAttrib4Nubv},
#endif
#ifdef glVertexAttrib4NubvARB
	{"glVertexAttrib4NubvARB", luaglew_glVertexAttrib4NubvARB},
#endif
#ifdef glVertexAttrib4Nuiv
	{"glVertexAttrib4Nuiv", luaglew_glVertexAttrib4Nuiv},
#endif
#ifdef glVertexAttrib4NuivARB
	{"glVertexAttrib4NuivARB", luaglew_glVertexAttrib4NuivARB},
#endif
#ifdef glVertexAttrib4Nusv
	{"glVertexAttrib4Nusv", luaglew_glVertexAttrib4Nusv},
#endif
#ifdef glVertexAttrib4NusvARB
	{"glVertexAttrib4NusvARB", luaglew_glVertexAttrib4NusvARB},
#endif
#ifdef glVertexAttrib4bv
	{"glVertexAttrib4bv", luaglew_glVertexAttrib4bv},
#endif
#ifdef glVertexAttrib4bvARB
	{"glVertexAttrib4bvARB", luaglew_glVertexAttrib4bvARB},
#endif
#ifdef glVertexAttrib4dARB
	{"glVertexAttrib4dARB", luaglew_glVertexAttrib4dARB},
#endif
#ifdef glVertexAttrib4dv
	{"glVertexAttrib4dv", luaglew_glVertexAttrib4dv},
#endif
#ifdef glVertexAttrib4dvARB
	{"glVertexAttrib4dvARB", luaglew_glVertexAttrib4dvARB},
#endif
#ifdef glVertexAttrib4fARB
	{"glVertexAttrib4fARB", luaglew_glVertexAttrib4fARB},
#endif
#ifdef glVertexAttrib4fv
	{"glVertexAttrib4fv", luaglew_glVertexAttrib4fv},
#endif
#ifdef glVertexAttrib4fvARB
	{"glVertexAttrib4fvARB", luaglew_glVertexAttrib4fvARB},
#endif
#ifdef glVertexAttrib4iv
	{"glVertexAttrib4iv", luaglew_glVertexAttrib4iv},
#endif
#ifdef glVertexAttrib4ivARB
	{"glVertexAttrib4ivARB", luaglew_glVertexAttrib4ivARB},
#endif
#ifdef glVertexAttrib4sARB
	{"glVertexAttrib4sARB", luaglew_glVertexAttrib4sARB},
#endif
#ifdef glVertexAttrib4sv
	{"glVertexAttrib4sv", luaglew_glVertexAttrib4sv},
#endif
#ifdef glVertexAttrib4svARB
	{"glVertexAttrib4svARB", luaglew_glVertexAttrib4svARB},
#endif
#ifdef glVertexAttrib4ubv
	{"glVertexAttrib4ubv", luaglew_glVertexAttrib4ubv},
#endif
#ifdef glVertexAttrib4ubvARB
	{"glVertexAttrib4ubvARB", luaglew_glVertexAttrib4ubvARB},
#endif
#ifdef glVertexAttrib4uiv
	{"glVertexAttrib4uiv", luaglew_glVertexAttrib4uiv},
#endif
#ifdef glVertexAttrib4uivARB
	{"glVertexAttrib4uivARB", luaglew_glVertexAttrib4uivARB},
#endif
#ifdef glVertexAttrib4usv
	{"glVertexAttrib4usv", luaglew_glVertexAttrib4usv},
#endif
#ifdef glVertexAttrib4usvARB
	{"glVertexAttrib4usvARB", luaglew_glVertexAttrib4usvARB},
#endif
#ifdef glVertexAttribDivisorARB
	{"glVertexAttribDivisorARB", luaglew_glVertexAttribDivisorARB},
#endif
#ifdef glVertexAttribPointer
	{"glVertexAttribPointer", luaglew_glVertexAttribPointer},
#endif
#ifdef glVertexAttribPointerARB
	{"glVertexAttribPointerARB", luaglew_glVertexAttribPointerARB},
#endif
#ifdef glVertexBlendARB
	{"glVertexBlendARB", luaglew_glVertexBlendARB},
#endif
#ifdef glVertexPointer
	{"glVertexPointer", luaglew_glVertexPointer},
#endif
#ifdef glViewport
	{"glViewport", luaglew_glViewport},
#endif
#ifdef glWeightPointerARB
	{"glWeightPointerARB", luaglew_glWeightPointerARB},
#endif
#ifdef glWeightbvARB
	{"glWeightbvARB", luaglew_glWeightbvARB},
#endif
#ifdef glWeightdvARB
	{"glWeightdvARB", luaglew_glWeightdvARB},
#endif
#ifdef glWeightfvARB
	{"glWeightfvARB", luaglew_glWeightfvARB},
#endif
#ifdef glWeightivARB
	{"glWeightivARB", luaglew_glWeightivARB},
#endif
#ifdef glWeightsvARB
	{"glWeightsvARB", luaglew_glWeightsvARB},
#endif
#ifdef glWeightubvARB
	{"glWeightubvARB", luaglew_glWeightubvARB},
#endif
#ifdef glWeightuivARB
	{"glWeightuivARB", luaglew_glWeightuivARB},
#endif
#ifdef glWeightusvARB
	{"glWeightusvARB", luaglew_glWeightusvARB},
#endif
#ifdef glWindowPos2dARB
	{"glWindowPos2dARB", luaglew_glWindowPos2dARB},
#endif
#ifdef glWindowPos2dv
	{"glWindowPos2dv", luaglew_glWindowPos2dv},
#endif
#ifdef glWindowPos2dvARB
	{"glWindowPos2dvARB", luaglew_glWindowPos2dvARB},
#endif
#ifdef glWindowPos2fARB
	{"glWindowPos2fARB", luaglew_glWindowPos2fARB},
#endif
#ifdef glWindowPos2fv
	{"glWindowPos2fv", luaglew_glWindowPos2fv},
#endif
#ifdef glWindowPos2fvARB
	{"glWindowPos2fvARB", luaglew_glWindowPos2fvARB},
#endif
#ifdef glWindowPos2iARB
	{"glWindowPos2iARB", luaglew_glWindowPos2iARB},
#endif
#ifdef glWindowPos2iv
	{"glWindowPos2iv", luaglew_glWindowPos2iv},
#endif
#ifdef glWindowPos2ivARB
	{"glWindowPos2ivARB", luaglew_glWindowPos2ivARB},
#endif
#ifdef glWindowPos2sARB
	{"glWindowPos2sARB", luaglew_glWindowPos2sARB},
#endif
#ifdef glWindowPos2sv
	{"glWindowPos2sv", luaglew_glWindowPos2sv},
#endif
#ifdef glWindowPos2svARB
	{"glWindowPos2svARB", luaglew_glWindowPos2svARB},
#endif
#ifdef glWindowPos3dARB
	{"glWindowPos3dARB", luaglew_glWindowPos3dARB},
#endif
#ifdef glWindowPos3dv
	{"glWindowPos3dv", luaglew_glWindowPos3dv},
#endif
#ifdef glWindowPos3dvARB
	{"glWindowPos3dvARB", luaglew_glWindowPos3dvARB},
#endif
#ifdef glWindowPos3fARB
	{"glWindowPos3fARB", luaglew_glWindowPos3fARB},
#endif
#ifdef glWindowPos3fv
	{"glWindowPos3fv", luaglew_glWindowPos3fv},
#endif
#ifdef glWindowPos3fvARB
	{"glWindowPos3fvARB", luaglew_glWindowPos3fvARB},
#endif
#ifdef glWindowPos3iARB
	{"glWindowPos3iARB", luaglew_glWindowPos3iARB},
#endif
#ifdef glWindowPos3iv
	{"glWindowPos3iv", luaglew_glWindowPos3iv},
#endif
#ifdef glWindowPos3ivARB
	{"glWindowPos3ivARB", luaglew_glWindowPos3ivARB},
#endif
#ifdef glWindowPos3sARB
	{"glWindowPos3sARB", luaglew_glWindowPos3sARB},
#endif
#ifdef glWindowPos3sv
	{"glWindowPos3sv", luaglew_glWindowPos3sv},
#endif
#ifdef glWindowPos3svARB
	{"glWindowPos3svARB", luaglew_glWindowPos3svARB},
#endif
#ifdef glAddSwapHintRectWIN
	{"glAddSwapHintRectWIN", luaglew_glAddSwapHintRectWIN},
#endif
#ifdef wglEnumGpusNV
	{"wglEnumGpusNV", luaglew_wglEnumGpusNV},
#endif
#ifdef wglAllocateMemoryNV
	{"wglAllocateMemoryNV", luaglew_wglAllocateMemoryNV},
#endif
#ifdef wglFreeMemoryNV
	{"wglFreeMemoryNV", luaglew_wglFreeMemoryNV},
#endif
	{0, 0}
};
