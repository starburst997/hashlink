#ifndef __APPLE__
GL_IMPORT(glCreateProgram, CREATEPROGRAM);
GL_IMPORT(glDeleteProgram, DELETEPROGRAM);
GL_IMPORT(glLinkProgram, LINKPROGRAM);
GL_IMPORT(glAttachShader, ATTACHSHADER);
GL_IMPORT(glGetProgramInfoLog, GETPROGRAMINFOLOG);
GL_IMPORT(glGetUniformLocation, GETUNIFORMLOCATION);
GL_IMPORT(glGetAttribLocation, GETATTRIBLOCATION);
GL_IMPORT(glBlendFuncSeparate, BLENDFUNCSEPARATE);
GL_IMPORT(glBlendEquationSeparate, BLENDEQUATIONSEPARATE);
GL_IMPORT(glStencilMaskSeparate, STENCILMASKSEPARATE);
GL_IMPORT(glStencilFuncSeparate, STENCILFUNCSEPARATE);
GL_IMPORT(glStencilOpSeparate, STENCILOPSEPARATE);
GL_IMPORT(glUseProgram, USEPROGRAM);
GL_IMPORT(glCreateShader, CREATESHADER);
GL_IMPORT(glShaderSource, SHADERSOURCE);
GL_IMPORT(glCompileShader, COMPILESHADER);
GL_IMPORT(glDeleteShader, DELETESHADER);
GL_IMPORT(glGetShaderInfoLog, GETSHADERINFOLOG);
GL_IMPORT(glGenerateMipmap, GENERATEMIPMAP);
GL_IMPORT(glDispatchCompute, DISPATCHCOMPUTE);
GL_IMPORT(glBlitFramebuffer, BLITFRAMEBUFFER);
GL_IMPORT(glGenFramebuffers, GENFRAMEBUFFERS);
GL_IMPORT(glBindFramebuffer, BINDFRAMEBUFFER);
GL_IMPORT(glFramebufferTexture, FRAMEBUFFERTEXTURE);
GL_IMPORT(glFramebufferTexture2D, FRAMEBUFFERTEXTURE2D);
GL_IMPORT(glDeleteFramebuffers, DELETEFRAMEBUFFERS);
GL_IMPORT(glGenRenderbuffers, GENRENDERBUFFERS);
GL_IMPORT(glBindRenderbuffer, BINDRENDERBUFFER);
GL_IMPORT(glTexImage2DMultisample, TEXIMAGE2DMULTISAMPLE);
GL_IMPORT(glRenderbufferStorage, RENDERBUFFERSTORAGE);
GL_IMPORT(glRenderbufferStorageMultisample, RENDERBUFFERSTORAGEMULTISAMPLE);
GL_IMPORT(glFramebufferRenderbuffer, FRAMEBUFFERRENDERBUFFER);
GL_IMPORT(glDeleteRenderbuffers, DELETERENDERBUFFERS);
GL_IMPORT(glGenBuffers, GENBUFFERS);
GL_IMPORT(glDrawBuffers, DRAWBUFFERS);
GL_IMPORT(glDrawArraysInstanced, DRAWARRAYSINSTANCED);
GL_IMPORT(glDrawElementsInstanced, DRAWELEMENTSINSTANCED);
GL_IMPORT(glBindBuffer, BINDBUFFER);
GL_IMPORT(glBindBufferBase, BINDBUFFERBASE);
GL_IMPORT(glBufferData, BUFFERDATA);
GL_IMPORT(glBufferSubData, BUFFERSUBDATA);
GL_IMPORT(glEnableVertexAttribArray, ENABLEVERTEXATTRIBARRAY);
GL_IMPORT(glDisableVertexAttribArray, DISABLEVERTEXATTRIBARRAY);
GL_IMPORT(glDeleteBuffers, DELETEBUFFERS);
GL_IMPORT(glMemoryBarrier, MEMORYBARRIER);
GL_IMPORT(glBindImageTexture, BINDIMAGETEXTURE);
GL_IMPORT(glUniform1i, UNIFORM1I);
GL_IMPORT(glUniform4fv, UNIFORM4FV);
GL_IMPORT(glUniformMatrix4fv, UNIFORMMATRIX4FV);
GL_IMPORT(glGetShaderiv, GETSHADERIV);
GL_IMPORT(glGetProgramiv, GETPROGRAMIV);
GL_IMPORT(glVertexAttribPointer, VERTEXATTRIBPOINTER);
GL_IMPORT(glVertexAttribIPointer, VERTEXATTRIBIPOINTER);
GL_IMPORT(glBindFragDataLocation, BINDFRAGDATALOCATION);
GL_IMPORT(glGenVertexArrays, GENVERTEXARRAYS);
GL_IMPORT(glBindVertexArray, BINDVERTEXARRAY);
GL_IMPORT(glDeleteVertexArrays, DELETEVERTEXARRAYS);

GL_IMPORT(glBeginQuery, BEGINQUERY);
GL_IMPORT(glEndQuery, ENDQUERY);
GL_IMPORT(glGenQueries, GENQUERIES);
GL_IMPORT(glDeleteQueries, DELETEQUERIES);
GL_IMPORT(glGetQueryObjectiv, GETQUERYOBJECTIV);

#if !defined(HL_MESA)
GL_IMPORT(glGetQueryObjectui64v, GETQUERYOBJECTUI64V);
GL_IMPORT(glQueryCounter, QUERYCOUNTER);
#endif

#endif
#if defined(_WIN32) || defined(HL_NX)
GL_IMPORT(glBlendEquation, BLENDEQUATION);
GL_IMPORT(glActiveTexture, ACTIVETEXTURE);
GL_IMPORT(glTexImage3D, TEXIMAGE3D);
#endif

#if defined(HL_NX)
GL_IMPORT(glClearDepthf, CLEARDEPTHF);
#endif