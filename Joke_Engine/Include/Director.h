#pragma once
#include "Predefine.h"

namespace Joker
{
	class Scene;
	class Platfrom;
	class JE_EXPORT Director
	{
	public:
		static Director* GetInstance()
		{ 
			return &m_directorInstance;
		}
		Scene* CreateScene();
		//Scene* CreateScene(const char* _sceneile);

		void RunScene(Scene* pScene);
		void RunNextScene();         
	private:
		static Director m_directorInstance;
		Director();
	private:
		Scene* m_RuningScene;
		Platfrom*  m_Platform;
		vector<Scene* > _scenes;	
	};

}