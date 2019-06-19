#pragma once
#include "OGLHeader.h"
namespace Joker
{
	class Mesh
	{
	public:
		enum PrimitiveType
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
}
