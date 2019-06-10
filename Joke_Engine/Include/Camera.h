#pragma once
#include "Node.h"
namespace Joker
{
	enum cam_type
	{
		e_Ortho,
		e_Perspective
	};
	class Camera:public Node
	{
	public:
		static Camera* CreateCamera(cam_type _type = e_Perspective);
	};
}