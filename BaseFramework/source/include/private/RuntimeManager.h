#pragma once

///Internal includes
#pragma region Internal Includes
#include "OutputManager.h"
#include "InputManager.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <fstream>
#pragma region External Includes


///
///
///The Runtime Manager, manages when the InputManager or OutputManager has to work. 
///
///


namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class RuntimeManager
		{
		public:
			RuntimeManager(const std::string initialOutput);			
			void Finish(); 
			~RuntimeManager();
		private: 
			void Run(); 
			InputManager* m_inputMgr;
			OutputManager* m_outputMgr;
		};
	}
}
