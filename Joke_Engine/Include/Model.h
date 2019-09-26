#pragma once
#include "Predefine.h"
#include "Mesh.h"
#include "drawable.h"
NS_JE_BEGIN
	class JE_EXPORT Model :public Drawable
	{
	public:
		static Model* CreateModel(Mesh* mesh);
		~Model();

		int draw();
	private:
		Model();
		
		Mesh* _mesh;
	};
NS_JE_END
