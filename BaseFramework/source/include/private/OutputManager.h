#pragma once

///Internal includes
#pragma region Internal Includes
#include "BasicStructs.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma region External Includes

namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class OutputManager
		{
		public: 
			OutputManager(NeuralNetwork::BaseFrameworkLib::BaseMemory memoryFrag); 
			~OutputManager();
		private: 
			NeuralNetwork::BaseFrameworkLib::BaseMemory m_currMem;
		};
	}
}