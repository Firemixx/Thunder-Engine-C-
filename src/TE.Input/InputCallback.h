#include <GLFW/glfw3.h>
#pragma once

namespace InputCallback
{
	class Callbacks{
	public:
		static void key_callback(GLFWwindow* pWindow, int key, int scancode, int action, int mods);
	};
}