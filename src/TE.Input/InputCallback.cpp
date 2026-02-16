#include "TE.Input/InputCallback.h"
#include <GLFW/glfw3.h>
#include "TE.Input/InputSystem.h"
namespace InputCallback
{
	void Callbacks::key_callback(GLFWwindow* pWindow, int key, int scancode, int action, int mods)
	{
		InputSystem::Input _input;
		int callbackkey = GLFW_KEY_ESCAPE;
		if (_input.isKeyPressed(key, callbackkey, action))
		{
			glfwSetWindowShouldClose(pWindow, GL_TRUE);
		}
	}
}