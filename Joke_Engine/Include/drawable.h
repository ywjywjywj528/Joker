#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class drawable
	{
	public:
		virtual int draw() = 0;
	protected:
		drawable();
		virtual ~drawable();
	};
NS_JE_END