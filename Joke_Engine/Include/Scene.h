#pragma once
#include "Predefine.h"
namespace Joker
{
	class Node;
	class Camera;
	class JE_EXPORT Scene
	{
		friend class Director;
	public:
		void addCamera(Camera* _cam);
		void setDefaultCamera(int index);
	private:
		Scene() {}
		~Scene() {};
	private:
		Node* m_Root;
		vector<Camera*> m_Cams;
		Camera *_defaultCamera;
	};
} 