#pragma once
namespace Joker
{
	class Behavior
	{
	public:
		Behavior();
		virtual ~Behavior();

		virtual void Awake();
		virtual void Start();
		virtual void Update();
		virtual void FixedUpdate();
		virtual void OnDelete();
	};
}