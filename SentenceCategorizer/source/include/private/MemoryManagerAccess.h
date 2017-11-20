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

namespace NeuralNetwork
{
	namespace SentenceCategorizer
	{
		class MemoryManagerAccess :public NeuralNetwork::BaseFrameworkLib::ISentences
		{
		public:
			MemoryManagerAccess(std::vector<std::string> currentString);
			virtual bool SaveSentence() final;
			virtual ~MemoryManagerAccess();
		private:
			NeuralNetwork::MemoryManagement::MemoryManager* m_memMng;

		};
	}
}