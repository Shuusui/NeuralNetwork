#pragma once

///Internal includes
#pragma region Internal Includes
#include "InputHandler.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#include <iostream>
#pragma endregion External Includes

namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class InputManager
		{
		public: 
			InputManager();
			void GetInput();
			~InputManager();
		private: 
			InputHandler* m_inputHandler; 
		};


	}
}