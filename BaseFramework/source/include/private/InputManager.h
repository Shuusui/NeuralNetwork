#pragma once

///Internal includes
#pragma region Internal Includes
#include "InputHandler.h"
#include "BasicStructs.h"
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
			BaseMemory SetInput();
			~InputManager();
		private: 
			InputHandler* m_inputHandler; 
		};


	}
}