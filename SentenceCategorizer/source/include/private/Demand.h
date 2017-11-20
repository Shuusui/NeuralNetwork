#pragma once
///Internal includes
#pragma region Internal Includes
#include "MemoryManagerAccess.h"
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
		class Demand : public MemoryManagerAccess
		{
		public:
			Demand(std::vector<std::string> currentDemand);
			virtual ~Demand();
		private:
		};
	}
}