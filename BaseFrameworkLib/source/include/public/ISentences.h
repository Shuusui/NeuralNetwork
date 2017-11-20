#pragma once
///Internal includes
#pragma region Internal Includes
#include "BasicEnums.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes



namespace NeuralNetwork
{

	namespace BaseFrameworkLib
	{
		class ISentences
		{
		public: 	
			ISentences(std::vector<std::string> currentString) : m_currentString(currentString){ }
			virtual bool SaveSentence() = 0;
			enum Sentences GetEnum();
		protected: 
			std::vector<std::string> m_currentString; 		
			enum Sentences m_sentenceType; 
		};
	}
}