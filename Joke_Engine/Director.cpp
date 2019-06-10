#include "Director.h"
#include "Scene.h"

namespace Joker
{
	static Director director;

	inline Director* Director::getInstance()
	{
		return &director;
	}

	Scene* Director::CreateScene()
	{
		Scene* pScene = new Scene;
		_scenes.push_back(pScene);
		return pScene;
	}
}