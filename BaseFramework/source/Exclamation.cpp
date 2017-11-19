#include "include\private\Exclamation.h"

using namespace NeuralNetwork::BaseFramework;


Exclamation::Exclamation(std::vector<std::string> currentExclamation)
	:ISentences(currentExclamation)
{
	m_memMng = new MemoryManager(); 
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Exclamation;
}

bool Exclamation::SaveSentence()
{
	m_memMng->GetSentence(m_currentString, this->GetEnum());
	return true; 
}

NeuralNetwork::BaseFrameworkLib::Sentences Exclamation::GetEnum()
{
	return m_sentenceType; 
}


Exclamation::~Exclamation()
{

}