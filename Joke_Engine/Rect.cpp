#include "Rect.h"

NS_JE_BEGIN
Rect::Rect()
{

}
Rect::Rect(int x, int y, int width, int height)
{
	_x = x;
	_y = y;
	_width = width;
	_height = height;
}
Rect::~Rect()
{

}

void Rect::Set(int x, int y, int width, int height)
{
	_x = x;
	_y = y;
	_width = width;
	_height = height;
}
NS_JE_END