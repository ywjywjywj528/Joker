#include "Director.h"
#include "Scene.h"

namespace Joker
{
	static Director director;

	inline Director* Director::GetInstance()
	{
		return &director;
	}

	Scene* Director::CreateScene()
	{
		Scene* pScene = new Scene;
		_scenes.push_back(pScene);
		return pScene;
	}

	void Director::RunScene(Scene* pScene)
	{

	}
}