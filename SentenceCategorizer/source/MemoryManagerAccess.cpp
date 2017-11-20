#include "include\private\MemoryManagerAccess.h"

using namespace NeuralNetwork::SentenceCategorizer;

MemoryManagerAccess::MemoryManagerAccess(std::vector<std::string> currentString)
	:ISentences(currentString)
{
	m_memMng = new NeuralNetwork::MemoryManagement::MemoryManager();
}

bool MemoryManagerAccess::SaveSentence()
{
	NeuralNetwork::BaseFrameworkLib::BaseSentence tempBaseStruct; 
	tempBaseStruct.m_sentence = this; 
	tempBaseStruct.m_sentenceType = m_sentenceType;
	tempBaseStruct.m_string = m_currentString;
	return m_memMng->SetSentence(tempBaseStruct) ? true : false;
}

MemoryManagerAccess::~MemoryManagerAccess()
{
	delete m_memMng;
}