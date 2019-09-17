#pragma once
#include "Predefine.h"
#include "OGLHeader.h"
NS_JE_BEGIN
	class JE_EXPORT Mesh
	{
	public:
		enum OperationType
		{
			TRIANGLES = GL_TRIANGLES,
			TRIANGLE_STRIP = GL_TRIANGLE_STRIP,
			LINES = GL_LINES,
			LINE_STRIP = GL_LINE_STRIP,
			POINTS = GL_POINTS
		};

	public:
		static Mesh* CreateFromFile(const char* _filePath);

	private:
		Mesh();
		~Mesh();
	};
NS_JE_END
