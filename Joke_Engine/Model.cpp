#include "Model.h"
#include "OGLHeader.h"
NS_JE_BEGIN
Model::Model()
{

}

Model::~Model()
{

}

Model* Model::CreateModel(Mesh* mesh)
{
	Model* m = new Model;
	m->_mesh = mesh;
	return m;
}

int Model::draw()
{
	return 0;
}

NS_JE_END