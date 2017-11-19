#include "include\private\Question.h"

using namespace NeuralNetwork::BaseFramework;

Question::Question(std::vector<std::string> currentQuestion)
	:ISentences(currentQuestion)
{
	m_memMng = new MemoryManager();
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Question;
}

bool Question::SaveSentence()
{
	m_memMng->SetSentence(m_currentString, this->GetEnum()); 
	return true; 
}

NeuralNetwork::BaseFrameworkLib::Sentences Question::GetEnum()
{
	return m_sentenceType; 
}

Question::~Question()
{
	delete m_memMng;
}