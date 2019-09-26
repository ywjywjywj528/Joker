#pragma once
#include "Predefine.h"
#include "OGLHeader.h"
#include "vector3.h"
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
		static Mesh* CreateLines(vector3f* pts, int size,bool dynamic = false);
		~Mesh();
	private:
		Mesh();
		
		bool _dynamic;
		GLuint _vbo;
		unsigned int _vertexsize;
		void* _data;
		OperationType _optype;
	};
NS_JE_END
