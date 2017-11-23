#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "private\Categorizer.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes


namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class BaseAPI
		{
		public:
			BaseAPI(std::vector<std::string> currentSentence); 
			NeuralNetwork::BaseFrameworkLib::ISentences* GetSentence();
			NeuralNetwork::BaseFrameworkLib::Sentences GetSentenceType(); 
			std::vector<std::string> GetString();
			std::string GetFormattedString();
			void SetSentence(std::vector<std::string> sentence);
			~BaseAPI();
		private:
			std::vector<std::string> m_currentString; 
			enum NeuralNetwork::BaseFrameworkLib::Sentences m_currentSentenceType; 
			NeuralNetwork::BaseFrameworkLib::ISentences* m_currentSentence; 
			Categorizer* m_categorizer; 
		};
	}
}