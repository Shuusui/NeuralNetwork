#pragma once
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
		class Demand : public BaseFrameworkLib::ISentences
		{
		public:
			Demand(); 
			~Demand();
		private:
		};
	}
}