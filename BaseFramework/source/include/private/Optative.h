#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma region External Includes


namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class Optative : BaseFrameworkLib::ISentences
		{
		public: 
			virtual bool SaveSentence() final;
			virtual ~Optative();
		private: 

		};
	}
}