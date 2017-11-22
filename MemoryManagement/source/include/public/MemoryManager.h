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
#include <Windows.h>
#pragma endregion External Includes


namespace NeuralNetwork
{
	namespace MemoryManagement
	{
		class MemoryManager
		{
		public:
			MemoryManager(); 
			bool SetSentence(const NeuralNetwork::BaseFrameworkLib::BaseSentence baseSentence);
			~MemoryManager();
		private: 
			std::ifstream TryToOpenFile(const std::string filepath);
			std::vector<std::string> SearchTroughFile(std::ifstream currentFile); 
			bool SaveSentence(std::ifstream currentFile, NeuralNetwork::BaseFrameworkLib::BaseSentence currentSentence); 
		};
	}
}