#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "MemoryManager.h"
#include "BasicEnums.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma region External Includes




namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class Exclamation : public BaseFrameworkLib::ISentences
		{
		public: 
			Exclamation(std::vector<std::string> currentExclamation);
			virtual bool SaveSentence() final; 
			virtual enum NeuralNetwork::BaseFrameworkLib::Sentences GetEnum() final;
			virtual ~Exclamation();
		private: 
			MemoryManager* m_memMng;
		};
	}
}