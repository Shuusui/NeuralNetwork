#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "MemoryManager.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma endregion External Includes



namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class Statement : BaseFrameworkLib::ISentences
		{
		public:
			Statement(std::vector<std::string> currentStatement);
			virtual bool SaveSentence() final; 
			virtual NeuralNetwork::BaseFrameworkLib::Sentences GetEnum() final; 
			~Statement();
		private: 
			MemoryManager* m_memMng;
		};
	}
}