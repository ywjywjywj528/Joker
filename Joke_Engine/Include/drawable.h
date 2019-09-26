#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class JE_EXPORT Drawable
	{
	public:
		virtual int draw() = 0;
	protected:
		Drawable() {};
		virtual ~Drawable() {};
	};
NS_JE_END