#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "MemoryManager.h"
#include "BasicStructs.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma region External Includes

///
///
///Class which inherits from ISentences to get access to the MemoryManagerclass for all sentencetypes and override the SaveSentence and Successful class
///
///



namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class MemoryManagerAccess :public NeuralNetwork::BaseFrameworkLib::ISentences
		{
		public:
			MemoryManagerAccess(const std::vector<std::string> currentString);
			virtual ~MemoryManagerAccess();
			virtual bool Successful() final; 
		private:
			virtual bool SaveSentence() final;
			NeuralNetwork::MemoryManagement::MemoryManager* m_memMng;
			bool m_saveSuccessful; 

		};
	}
}