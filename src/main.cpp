#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include "TE.Core/Window/windowInitializer.h"
#include "TE.Core/GLFW/glfwInitializer.h"
#include "TE.Input/InputCallback.h"

int main(void)
{
	glfwInitializer::glfwInitializer _GLFWInitializer;
    WindowInitializer::windowInitializer _WindInitializer;
    InputCallback::Callbacks _input;

	_GLFWInitializer.Init();


	GLFWwindow* pWindow = _WindInitializer.InitWindow();

    if (pWindow == NULL)
    {
        return -1;
    }

	glfwSetWindowSizeCallback(pWindow, _WindInitializer.glfwWindowSizeCallback);
	glfwSetKeyCallback(pWindow, _input.key_callback);
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