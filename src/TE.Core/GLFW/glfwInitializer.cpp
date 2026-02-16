#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include"glfwInitializer.h"

namespace glfwInitializer
{
	void glfwInitializer::Init()
	{
		/* Initialize the library */
		if (!glfwInit())
		{
			std::cout << "Cant initialize GLFW" << std::endl;
			return;
		}
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);
	}
}