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
		typedef vector<Camera*> cameraList;
		typedef vector<Camera*>::iterator camIter;

		Node* m_Root;
		cameraList m_Cams;
		Camera *_defaultCamera;
	};
} 