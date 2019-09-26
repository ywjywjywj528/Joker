#include "Mesh.h"
#include "OGLHeader.h"
NS_JE_BEGIN
Mesh::Mesh()
{

}

Mesh::~Mesh()
{

}

Mesh* Mesh::CreateLines(vector3f* pts, int size,bool dynamic)
{
	float *vertex = new float[3*size];
	memcpy(vertex, pts, sizeof(float) * 3 * size);

	GLuint vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)*size * 3, vertex, dynamic ? GL_DYNAMIC_DRAW : GL_STATIC_DRAW);

	Mesh* m = new Mesh();
	m->_data = vertex;
	m->_dynamic = dynamic;
	m->_vbo = vbo;
	m->_optype = LINE_STRIP;
	return m;
}
NS_JE_END