#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class JE_EXPORT Rect
	{
	public:
		Rect();
		Rect(int x,int y,int width,int height);
		void Set(int x, int y, int width, int height);
		~Rect();
	
		int _x;
		int _y;
		int _width;
		int _height;

	};
NS_JE_END
