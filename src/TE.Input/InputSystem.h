#pragma once

namespace InputSystem
{
	class Input{
	public:
		bool isKeyPressed(int keycodeUser, int keycodeToEquel, int action);
		bool isKeyReleased(int keycodeUser, int keycodeToEquel, int action);
		bool isKeyHolding(int keycodeUser, int keycodeToEquel, int action);
	};
}