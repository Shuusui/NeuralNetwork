#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "Demand.h"
#include "Question.h"
#include "Exclamation.h"
#include "Optative.h"
#include "Statement.h"
#include "BasicStructs.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include "wn.h"
#include <string>
#include <vector>
#pragma endregion External Includes

namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class Categorizer
		{
		public: 
			Categorizer(const std::vector<std::string> currentSentence); 
			void SetNewSentence(const std::vector<std::string> currentString);
			NeuralNetwork::BaseFrameworkLib::ISentences* GetSentence();
		private: 
			NeuralNetwork::BaseFrameworkLib::ISentences* CategorizeSentence();
			NeuralNetwork::BaseFrameworkLib::BaseSentence m_baseSentence; 
		};
	}
}