#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "BaseAPI.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes

namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class InputHandler
		{
		public: 
			InputHandler();
			bool ReadIn(const std::string currentString); 
			~InputHandler();
		private: 
			std::vector<std::string> m_stringBuffer;
			NeuralNetwork::SentenceCategorizer::BaseAPI* m_sentenceCategorizer; 

		};


	}
}