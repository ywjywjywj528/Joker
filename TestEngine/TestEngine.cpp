// TestEngine.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Director.h"
#include "Camera.h"
#include "Scene.h"
using namespace Joker;
int main()
{
	Director* directorinstance =  Director::GetInstance();
	Scene* mainSecne = directorinstance->CreateScene();
	Camera* cam = Camera::CreateCamera();
	mainSecne->addCamera(cam);

	directorinstance->RunScene(mainSecne);
    return 0; 
}

