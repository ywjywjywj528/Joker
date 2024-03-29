#include "JEPlatform.h"
#include "glview.h"
#include "OGLHeader.h"
NS_JE_BEGIN
JEPlatform::JEPlatform()
{
	_monitor = nullptr;
	_mainWindow = nullptr;
}
JEPlatform::~JEPlatform()
{

}
bool JEPlatform::Init()
{
	if (!glfwInit())
	{
		fprintf(stderr, "Failed to initialize GLFW\n");
		getchar();
		return false;
	}

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
	if (_mainWindow == nullptr)
		return false;
	glfwMakeContextCurrent(_mainWindow);
	InitGlew();
}

bool JEPlatform::InitGlew()
{
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		getchar();
		glfwTerminate();
		return false;
	}

	if (!GLEW_ARB_framebuffer_object && GLEW_EXT_framebuffer_object)
	{
		glBindFramebuffer = glBindFramebufferEXT;
		glBindRenderbuffer = glBindRenderbufferEXT;
		glBlitFramebuffer = glBlitFramebufferEXT;
		glCheckFramebufferStatus = glCheckFramebufferStatusEXT;
		glDeleteFramebuffers = glDeleteFramebuffersEXT;
		glDeleteRenderbuffers = glDeleteRenderbuffersEXT;
		glFramebufferRenderbuffer = glFramebufferRenderbufferEXT;
		glFramebufferTexture1D = glFramebufferTexture1DEXT;
		glFramebufferTexture2D = glFramebufferTexture2DEXT;
		glFramebufferTexture3D = glFramebufferTexture3DEXT;
		glFramebufferTextureLayer = glFramebufferTextureLayerEXT;
		glGenFramebuffers = glGenFramebuffersEXT;
		glGenRenderbuffers = glGenRenderbuffersEXT;
		glGenerateMipmap = glGenerateMipmapEXT;
		glGetFramebufferAttachmentParameteriv = glGetFramebufferAttachmentParameterivEXT;
		glGetRenderbufferParameteriv = glGetRenderbufferParameterivEXT;
		glIsFramebuffer = glIsFramebufferEXT;
		glIsRenderbuffer = glIsRenderbufferEXT;
		glRenderbufferStorage = glRenderbufferStorageEXT;
		glRenderbufferStorageMultisample = glRenderbufferStorageMultisampleEXT;
	}
	return true;
}

NS_JE_END