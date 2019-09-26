#pragma once
#include "Predefine.h"
#include "Component.h"
NS_JE_BEGIN
	class JE_EXPORT Drawable :public Component
	{
	public:
		virtual int draw() = 0;
	protected:
		Drawable() {};
		virtual ~Drawable() {};
	};
NS_JE_END