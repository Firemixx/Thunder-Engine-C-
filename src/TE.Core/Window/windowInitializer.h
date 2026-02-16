#include <string>
#pragma once
namespace WindowInitializer
{
	class windowInitializer
	{
	public:
		static std::string title;
		static int g_WindowSizeX;
		static int g_WindowSizeY;
		static void glfwWindowSizeCallback(GLFWwindow* pWindow, int width, int height);
		GLFWwindow* InitWindow();
	};
}