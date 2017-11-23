#include "include\private\Categorizer.h"


using namespace NeuralNetwork::SentenceCategorizer; 

Categorizer::Categorizer(std::vector<std::string> currentSentence)
{
	m_baseSentence.m_string = currentSentence; 
	m_baseSentence.m_sentence = CategorizeSentence();
	m_baseSentence.m_sentenceType = m_baseSentence.m_sentence->GetEnum(); 
} 

void Categorizer::SetNewSentence(std::vector<std::string> currentString)
{
	m_baseSentence.m_string = currentString; 
	m_baseSentence.m_sentence = CategorizeSentence();
	m_baseSentence.m_sentenceType = m_baseSentence.m_sentence->GetEnum();
}

NeuralNetwork::BaseFrameworkLib::ISentences* Categorizer::GetSentence()
{
	return m_baseSentence.m_sentence; 
}

NeuralNetwork::BaseFrameworkLib::ISentences* Categorizer::CategorizeSentence()
{
	NeuralNetwork::BaseFrameworkLib::ISentences* tempSentences = new Demand(m_baseSentence.m_string);
	return tempSentences; 
}