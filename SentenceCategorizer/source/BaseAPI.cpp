#include "include\public\BaseAPI.h"

using namespace NeuralNetwork::SentenceCategorizer; 


BaseAPI::BaseAPI(std::vector<std::string> currentSentence)
	:m_currentString(currentSentence)
{
	m_categorizer = new Categorizer(currentSentence);
	m_currentSentence = m_categorizer->GetSentence();
	m_currentSentenceType = m_currentSentence->GetEnum(); 

}

NeuralNetwork::BaseFrameworkLib::ISentences* BaseAPI::GetSentence()
{
	return m_currentSentence;
}
std::vector<std::string> BaseAPI::GetString()
{
	return m_currentString;
}

std::string BaseAPI::GetFormattedString()
{
	std::string tempString; 
	for (unsigned int i = 0; i < m_currentString.size(); i++)
	{
		tempString.append(m_currentString.at(i));
	}
	return tempString;
	
}

NeuralNetwork::BaseFrameworkLib::Sentences BaseAPI::GetSentenceType()
{
	return m_currentSentenceType; 
}

void BaseAPI::SetSentence(std::vector<std::string> sentence)
{
	m_currentString = sentence; 
	m_categorizer->SetNewSentence(sentence);
	m_currentSentence = m_categorizer->GetSentence(); 
	m_currentSentenceType != m_currentSentence->GetEnum() ? m_currentSentenceType = m_currentSentence->GetEnum() : m_currentSentenceType = m_currentSentenceType;
}


BaseAPI::~BaseAPI()
{

}