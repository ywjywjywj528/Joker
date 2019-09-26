#pragma once
#include "Predefine.h"
NS_JE_BEGIN
	class Behabior;
	class Component;
	class Drawable;
	class Node
	{
	public:
		static Node* Create(const char* id = nullptr);

		void AddChild(Node* pNode);

		void RemoveChild(Node* pNode);

		void RemoveAllChildren();

		Node* findNode(char* id, bool recursive = false) const;

		vector<Node*>& findNodes(char* id, bool recursive = false)const;

		void AddBahavior(Behabior* _havior);
		void RemoveBehavior(Behabior* _havior);

		void AddDrawable(Drawable* object);
	protected:
		void draw();
	protected:
		bool m_bActive = true;

		typedef vector<Component*> ComponentMap;
		ComponentMap _componets;
		
	};
NS_JE_END