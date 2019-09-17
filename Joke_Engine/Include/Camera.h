#pragma once
#include "Predefine.h"
#include "Node.h"
NS_JE_BEGIN
	enum cam_type
	{
		e_Ortho,
		e_Perspective
	};
	class JE_EXPORT Camera:public Node
	{
	public:
		static Camera* CreateCamera(cam_type _type = e_Perspective);

		void SetViewport(int x, int y, int width, int height);


	private:
		Camera(cam_type _type);
		~Camera() {};

	private:
		cam_type m_type;
		int _x;
		int _y;
		int _width;
		int _height;
	};
NS_JE_END