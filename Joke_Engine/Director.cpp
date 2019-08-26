#include "Director.h"
#include "Scene.h"
#include "Platform.h"
namespace Joker
{
	Director Director::m_directorInstance;
	//int Director::aaa = 1;
	Director::Director()
	{
		m_RuningScene = nullptr;
		m_Platform = nullptr;
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

		}
	}

	Director* Director::GetInstance()
	{
		return &m_directorInstance;
	}
}