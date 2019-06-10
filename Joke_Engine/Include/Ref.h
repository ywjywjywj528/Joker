#pragma once

namespace Joker
{
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
}
