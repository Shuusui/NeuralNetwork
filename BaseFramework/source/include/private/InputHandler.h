#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
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
			bool ReadIn(std::string currentString); 
			~InputHandler();
		private: 
			//NeuralNetwork::BaseFrameworkLib::ISentences* CategorizeSentence(std::vector<std::string> currentString);
			std::vector<std::string> m_stringBuffer;

		};


	}
}