#pragma once
#include "Predefine.h"
#include <typeinfo>
namespace Joker
{
	class Node;
	class Component;
	template<class T>
	class AutoPoolRealse
	{
	public:
		void add(T* _obj);
		void remove(T* _obj);
	private:
		vector<T*> _pool;
	};

	template<class T>
	void AutoPoolRealse<T>::add(T* _obj)
	{
		vector<T*>::iterator it = std::find(_pool.begin(), _pool.end(), _obj);
		if (it == _pool.end())
		{
			_pool.push_back(_obj);
		}
	}

	template<class T>
	void AutoPoolRealse<T>::remove(T* _obj)
	{
		vector<T*>::iterator it = std::find(_pool.begin(), _pool.end(), _obj);
		if (it != _pool.end())
		{
			_pool.erase(it);
		}
	}


	typedef AutoPoolRealse<Node> AutoNodePool;
	typedef AutoPoolRealse<Component> AutoComponentPool;


	class JE_EXPORT PoolManger
	{
	public:
		static PoolManger* GetInstance()
		{
			if (pInstance == nullptr)
			{
				pInstance = new  PoolManger;
			}
			return pInstance;
		}

		template<class T>
		AutoPoolRealse<T>* GetPool()
		{
			string cname(typeid(T).name());
			if (cname == "class Joker::Node")
			{
				return _nodePool;
			}
			else if (cname == "Joker::Component")
			{
				return (AutoPoolRealse<T>*)_componentPool;
			}
			printf("%s", typeid(T).name());
			return nullptr;
		}


	private:
		static PoolManger* pInstance;
	private:
		PoolManger();
		~PoolManger();
	private:
		AutoNodePool* _nodePool;
		AutoComponentPool* _componentPool;
	};
}