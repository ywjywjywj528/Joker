#pragma once
#include <vector>
using namespace std;

#ifdef _USEDLL
#define JE_EXPORT __declspec(dllexport)
#else
#define JE_EXPORT /*__declspec(dllimport)*/
#endif

#define JE_DELETE(p) \
if(p != nullptr)\
{\
	delete p;\
	p = nullptr;\
}

#define JE_DELETE_ARRAY(p) \
if(p != nullptr)\
{\
	delete[] p;\
	p = nullptr;\
}