#include "glview.h"
NS_JE_BEGIN
GLView GLView::m_view;
GLView* GLView::GetInstance()
{
	return &m_view;
}

GLView::GLView()
{
	_glContextAttrs = { 8, 8, 8, 8, 24, 8, 0 };
	_resizable = true;
	_zoomfactor = 1;
	_viewName = "Joker_view";
	_rect.Set(0, 0, 1024, 768);
}

GLView::~GLView()
{

}
NS_JE_END
