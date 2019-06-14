// TestEngine.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Director.h"
#include "Camera.h"
using namespace Joker;
int main()
{
	Scene* mainSecne = Director::getInstance()->CreateScene();
	Camera* cam = Camera::CreateCamera();
    return 0; 
}

