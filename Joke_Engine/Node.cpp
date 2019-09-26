#include "Node.h"
NS_JE_BEGIN
Node::Node(const char* id)
{
	_id = id;
}

Node* Node::Create(const char* id)
{
	return new Node(id);
}

void Node::AddComponent(Component* object)
{
	_componets.push_back(object);
}
NS_JE_END
