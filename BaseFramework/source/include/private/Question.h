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
		class Question : public BaseFrameworkLib::ISentences
		{
		public:
			Question(std::vector<std::string> currentQuestion);
			~Question();
		private: 
		};
	}
}