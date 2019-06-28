// TestEngine.cpp : 定义控制台应用程序的入口点。
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

