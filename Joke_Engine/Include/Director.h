#pragma once
#include "Predefine.h"

namespace Joker
{
	class Scene;
	class JE_EXPORT Director
	{
	public:
		static Director* GetInstance();
		Scene* CreateScene();
		//Scene* CreateScene(const char* _sceneile);

		void RunScene(Scene* pScene);
		void RunNextScene();         

	private:
		Scene* m_RuningScene：NULL;

		vector<Scene* > _scenes;
	};
}