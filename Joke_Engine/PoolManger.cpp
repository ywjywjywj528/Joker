#include"PoolManger.h"

NS_JE_BEGIN
	PoolManger* PoolManger::pInstance = nullptr;

	PoolManger::PoolManger()
	{
		_nodePool = new AutoNodePool;
		_componentPool = new AutoComponentPool;
	}
	PoolManger::~PoolManger()
	{
		JE_DELETE(_nodePool);
		JE_DELETE(_componentPool);
	}
NS_JE_END