// TestEngine.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Director.h"
#include "Camera.h"
#include "Scene.h"
using namespace Joker;
int main()
{
	Scene* mainSecne = Director::getInstance()->CreateScene();
	Camera* cam = Camera::CreateCamera();
	mainSecne->addCamera(cam);
    return 0; 
}

