#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "BasicEnums.h"
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
		struct BaseMemory
		{
			bool m_isFilled; 
			enum Sentences m_sentenceType; 
			std::string m_keyword; 
		};


	}
}