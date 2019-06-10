#pragma once
#include <vector>
using namespace std;

#ifdef _USEDLL
#define JE_EXPORT __declspec(dllexport)
#else
#define JE_EXPORT __declspec(dllimport)
#endif