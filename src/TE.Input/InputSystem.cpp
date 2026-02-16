#include <GLFW/glfw3.h>
#include "TE.Input/InputSystem.h"

namespace InputSystem
{
	bool Input::isKeyPressed(int keycodeUser, int keycodeToEquel, int action)
	{
		if (keycodeToEquel == keycodeUser && action == GLFW_PRESS)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	bool Input::isKeyReleased(int keycodeUser, int keycodeToEquel, int action)
	{
		if (keycodeToEquel == keycodeUser && action == GLFW_RELEASE)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	bool Input::isKeyHolding(int keycodeUser, int keycodeToEquel, int action)
	{
		if (keycodeToEquel == keycodeUser && action == GLFW_REPEAT)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
}