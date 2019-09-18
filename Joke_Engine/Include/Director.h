#pragma once
#include "Predefine.h"
#include "JEPlatform.h"
NS_JE_BEGIN
	class Scene;
	//class Platfrom;
	class JE_EXPORT Director
	{
	public:
		static Director* GetInstance();
		Scene* CreateScene();
		//Scene* CreateScene(const char* _sceneile);
		//inline int test() { return aaa; }
		void RunScene(Scene* pScene);
		void RunNextScene();  
		//static int aaa;      
	private:
		static Director m_directorInstance;
		Director();
	private:
	
		Scene* m_RuningScene;
		JEPlatform*  m_Platform;
		vector<Scene* > _scenes;	
	};
NS_JE_END