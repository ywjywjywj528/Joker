#pragma once

#include "Predefine.h"
class GLFWwindow;
class GLFWmonitor;
NS_JE_BEGIN
	class JE_EXPORT JEPlatform
	{
	public:
		JEPlatform();
		~JEPlatform();
		bool Init();
		GLFWwindow* GetWindow() { return _mainWindow; }
	private:
		bool InitGlew();

		GLFWwindow* _mainWindow;
		GLFWmonitor* _monitor;
	};
NS_JE_END