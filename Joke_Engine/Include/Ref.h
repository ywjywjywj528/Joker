#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class Ref
	{
	public:
		void addRef();
		void release();
	protected:
		Ref();
		virtual ~Ref();

	private:
		unsigned int _refcount;

	};
NS_JE_END
