#pragma once
#include "Predefine.h"
NS_JE_BEGIN
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
NS_JE_END