#include "Camera.h"
#include "PoolManger.h"
namespace Joker
{
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
}