#pragma once
///Internal includes
#pragma region Internal Includes
#include "MemoryManagerAccess.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma region External Includes


namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class Optative : public MemoryManagerAccess
		{
		public: 
			Optative(std::vector<std::string> currentOptative);
			virtual ~Optative();
		private: 
		};
	}
}