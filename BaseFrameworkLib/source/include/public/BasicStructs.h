#pragma once
///Internal includes
#pragma region Internal Includes
#include "ISentences.h"
#include "BasicEnums.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes

namespace NeuralNetwork
{
	namespace BaseFrameworkLib
	{
		struct BaseMemory
		{
			bool m_isFilled; 
			enum Sentences m_sentenceType; 
			std::string m_keyword; 
		};
		struct BaseSentence
		{
			enum Sentences m_sentenceType; 
			std::vector<std::string> m_string; 
			NeuralNetwork::BaseFrameworkLib::ISentences* m_sentence;
			MemoryToSave* m_memoryToSave; 
			BaseSentence() : m_sentenceType(Sentences::None), m_string(0), m_sentence(nullptr), m_memoryToSave(nullptr) {};
			~BaseSentence()
			{
				delete m_sentence;
				delete m_memoryToSave; 
			}
		};
		struct MemoryToSave
		{
			//TODO: Find out how to save a fragment of Memory of a sentence 
		};

	}
}