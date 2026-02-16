#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include <string>
#include"windowInitializer.h"
namespace WindowInitializer
{
	std::string windowInitializer::title = "Thunder Engine";
	int windowInitializer::g_WindowSizeX = 640;
	int windowInitializer::g_WindowSizeY = 480;

	void windowInitializer::glfwWindowSizeCallback(GLFWwindow* pWindow, int width, int height)
	{
		g_WindowSizeX = width;
		g_WindowSizeY = height;
		glViewport(0, 0, g_WindowSizeX, g_WindowSizeY);
	}
	GLFWwindow* windowInitializer::InitWindow()
	{
		GLFWwindow* pWindow = glfwCreateWindow(g_WindowSizeX, g_WindowSizeY, title.c_str(), nullptr, nullptr);
		if (!pWindow)
		{
			std::cout << "Cant create window" << std::endl;
			glfwTerminate();
			return NULL;
		}
		glfwMakeContextCurrent(pWindow);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			std::cout << "Failed to initialize GLAD" << std::endl;
			return nullptr;
		}

		glfwSetWindowSizeCallback(pWindow, glfwWindowSizeCallback);
		std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;
		std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;
		return pWindow;
	}
}