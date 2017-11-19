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
		class Question : public BaseFrameworkLib::ISentences
		{
		public:
			Question(std::vector<std::string> currentQuestion);
			virtual bool SaveSentence() final;
			virtual enum NeuralNetwork::BaseFrameworkLib::Sentences GetEnum() final; 
			~Question();
		private: 
			MemoryManager* m_memMng;
		};
	}
}