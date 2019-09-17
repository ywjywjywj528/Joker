#pragma once
#include "Predefine.h"
#include "Rect.h"
NS_JE_BEGIN
struct GLContextAttrs
{
	int redBits;
	int greenBits;
	int blueBits;
	int alphaBits;
	int depthBits;
	int stencilBits;
	int multisamplingCount;
};

class JE_EXPORT GLView
{
public:
	static GLView* GetInstance();
	~GLView();

	const GLContextAttrs & GetAttrs() { return _glContextAttrs; };
	bool IsResizeable() { return _resizable; }
	int GetZoomFavtor() { return _zoomfactor; }
	Rect& GetRect() { return _rect; };
	const string& GetName() { return _viewName; }
private:
	GLView();
private:
	static GLView m_view;
	bool _resizable;
	GLContextAttrs _glContextAttrs;
	int _zoomfactor;
	string _viewName;
	Rect _rect;
};
NS_JE_END
