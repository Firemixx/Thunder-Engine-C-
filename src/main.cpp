#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include "TE.Core/windowInitializer.h"
#include "TE.Core/glfwInitializer.h"

int main(void)
{
	glfwInitializer::glfwInitializer GLFWInitializer;

	GLFWInitializer.Init();

    WindowInitializer::windowInitializer WindInitializer;

	GLFWwindow* pWindow = WindInitializer.InitWindow();

    if (pWindow == NULL)
    {
        return -1;
    }

	glfwSetWindowSizeCallback(pWindow, WindInitializer.glfwWindowSizeCallback);
    glClearColor(0,1,0,1);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(pWindow))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(pWindow);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}