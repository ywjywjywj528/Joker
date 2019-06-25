#include "Scene.h"

namespace Joker
{
	void Scene::addCamera(Camera* _cam)
	{
		if (m_Cams.empty())
		{
			m_Cams.push_back(_cam);
			return;
		}
		camIter it = std::find(m_Cams.begin(), m_Cams.end(), _cam);
		if (it != m_Cams.end())
		{
			JE_ERROR("cam exist!");
			return;
		}
		m_Cams.push_back(_cam);
	}
			
}
