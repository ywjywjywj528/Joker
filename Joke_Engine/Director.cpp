#include "Director.h"
#include "Scene.h"
#include "OGLHeader.h"
NS_JE_BEGIN
	Director Director::m_directorInstance;
	//int Director::aaa = 1;
	Director::Director()
	{
		m_RuningScene = nullptr;
		m_Platform = nullptr;
		bAction = false;
	}

	Scene* Director::CreateScene()
	{
		Scene* pScene = new Scene;
		_scenes.push_back(pScene);
		return pScene;
	}

	void Director::RunScene(Scene* pScene)
	{
		if (m_Platform == nullptr)
		{
			m_Platform = new JEPlatform();
			m_Platform->Init();
		}
		m_RuningScene = pScene;
		Action();
	}

	void Director::Action()
	{
		if (bAction)
			return;
		while (true)
		{
			bAction = true;
			glClearColor(255, 0, 0, 1);
			glfwSwapBuffers(m_Platform->GetWindow());
		}
	}

	Director* Director::GetInstance()
	{
		return &m_directorInstance;
	}
NS_JE_END