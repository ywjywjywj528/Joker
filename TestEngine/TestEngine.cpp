// TestEngine.cpp : �������̨Ӧ�ó������ڵ㡣
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

