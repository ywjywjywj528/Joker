#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class Node;
	class Camera;
	class JE_EXPORT Scene
	{
		friend class Director;
	public:
		void addCamera(Camera* _cam);
		Camera* getDefaultCam() { return _defaultCamera; }
		//void setDefaultCamera(int index);
	private:
		Scene();
		~Scene() {};

	private:
		typedef vector<Camera*> cameraList;
		typedef vector<Camera*>::iterator camIter;

		Node* m_Root;
		cameraList m_Cams;
		Camera* _defaultCamera;
	};
NS_JE_END