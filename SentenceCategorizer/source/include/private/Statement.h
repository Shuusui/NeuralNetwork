#pragma once
///Internal includes
#pragma region Internal Includes
#include "MemoryManagerAccess.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma endregion External Includes



namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class Statement : MemoryManagerAccess
		{
		public:
			Statement(std::vector<std::string> currentStatement);
			~Statement();
		private: 
		};
	}
}