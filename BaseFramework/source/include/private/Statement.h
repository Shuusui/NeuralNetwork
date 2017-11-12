#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma endregion External Includes



namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class Statement : BaseFrameworkLib::ISentences
		{
		public:
			Statement(std::vector<std::string> currentStatement);
			~Statement();
		private: 
		};
	}
}