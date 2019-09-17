#include "Camera.h"
#include "PoolManger.h"
NS_JE_BEGIN
	Camera* Camera::CreateCamera(cam_type _type /* = e_Perspective */)
	{
		Camera* pCam = new Camera(_type);
		PoolManger::GetInstance()->GetPool<Node>()->add(pCam);
		return pCam;
	}

	Camera::Camera(cam_type _type)
	{
		m_type = _type;
	}

	void Camera::SetViewport(int x, int y, int width, int height)
	{
		_x = x;
		_y = y;
		_width = width;
		_height = height;
	}
NS_JE_END