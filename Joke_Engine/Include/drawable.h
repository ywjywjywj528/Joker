#pragma once
namespace Joker
{
	class drawable
	{
	public:
		virtual int draw() = 0;
	protected:
		drawable();
		virtual ~drawable();
	};
}