#include "Platform.h"
#include "glview.h"
NS_JE_BEGIN
	Platform::Platform()
	{
		GLView* pView = GLView::GetInstance();
		glfwWindowHint(GLFW_RESIZABLE, pView->IsResizeable() ? GL_TRUE : GL_FALSE);
		glfwWindowHint(GLFW_RED_BITS, pView->GetAttrs().redBits);
		glfwWindowHint(GLFW_GREEN_BITS, pView->GetAttrs().greenBits);
		glfwWindowHint(GLFW_BLUE_BITS, pView->GetAttrs().blueBits);
		glfwWindowHint(GLFW_ALPHA_BITS, pView->GetAttrs().alphaBits);
		glfwWindowHint(GLFW_DEPTH_BITS, pView->GetAttrs().depthBits);
		glfwWindowHint(GLFW_STENCIL_BITS, pView->GetAttrs().stencilBits);
		glfwWindowHint(GLFW_SAMPLES, pView->GetAttrs().multisamplingCount);

		int neededWidth = pView->GetRect()._width;
		int neededHeight = pView->GetRect()._height;

		_mainWindow = glfwCreateWindow(neededWidth, neededHeight, pView->GetName().c_str(), _monitor, nullptr);
	}
NS_JE_END