#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "BasicStructs.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#include <fstream>
#pragma endregion External Includes


namespace NeuralNetwork
{
	namespace MemoryManagement
	{
		class MemoryManager
		{
		public:
			MemoryManager(); 
			bool SetSentence(NeuralNetwork::BaseFrameworkLib::BaseSentence baseSentence);
			~MemoryManager();
		private: 
		};
	}
}