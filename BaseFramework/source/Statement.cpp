#include "include\private\Statement.h"


using namespace NeuralNetwork::BaseFramework; 

Statement::Statement(std::vector<std::string> currentStatement)
	:ISentences(currentStatement)
{
	m_memMng = new MemoryManager();
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Statement;
}

bool Statement::SaveSentence()
{
	m_memMng->GetSentence(m_currentString, this->GetEnum()); 
	return true; 
}

NeuralNetwork::BaseFrameworkLib::Sentences Statement::GetEnum()
{
	return m_sentenceType; 
}

Statement::~Statement()
{

}