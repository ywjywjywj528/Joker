#pragma once
#include <vector>
#include <cassert>
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

#define JE_ERROR(...) do\
{\
	assert(0);\
}while(0)

#ifdef __cplusplus
#define NS_JE_BEGIN                     namespace Joker {
#define NS_JE_END                       }
#define USING_NS_JE                    using namespace Joker;
#define NS_CC                           ::Joker
#else
#define NS_JE_BEGIN 
#define NS_JE_END 
#define USING_NS_JE 
#define NS_CC
#endif 