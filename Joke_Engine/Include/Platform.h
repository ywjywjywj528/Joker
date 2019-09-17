#pragma once
#include "glfw3.h"
#include "Predefine.h"
NS_JE_BEGIN
	class JE_EXPORT Platform
	{
	public:
		Platform();
	private:
		GLFWwindow* _mainWindow;
		GLFWmonitor* _monitor;
	};
NS_JE_END