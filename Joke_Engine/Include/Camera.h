#pragma once
#include "Predefine.h"
#include "Node.h"
namespace Joker
{
	enum cam_type
	{
		e_Ortho,
		e_Perspective
	};
	class JE_EXPORT Camera:public Node
	{
	public:
		static Camera* CreateCamera(cam_type _type = e_Perspective);
	private:
		Camera(cam_type _type);
		~Camera() {};

	private:
		cam_type m_type;
	};
}