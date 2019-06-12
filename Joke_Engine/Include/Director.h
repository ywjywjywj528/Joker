#pragma once
#include "Predefine.h"

namespace Joker
{
	class Scene;
	class JE_EXPORT Director
	{
	public:
		static Director* getInstance();
		Scene* CreateScene();
		//Scene* CreateScene(const char* _sceneile);
	private:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            	private:
		vector<Scene* > _scenes;
	};
}