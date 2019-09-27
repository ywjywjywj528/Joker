#pragma once
#include "Predefine.h"
#include "OGLHeader.h"
NS_JE_BEGIN
	class JE_EXPORT ShaderCompile
	{
	public:
		static GLuint CompileFromString(const char* vertexshader, const char*fragshader);
	};
NS_JE_END
