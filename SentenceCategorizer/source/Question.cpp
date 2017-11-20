#include "include\private\Question.h"

using namespace NeuralNetwork::SentenceCategorizer;

Question::Question(std::vector<std::string> currentQuestion)
	:MemoryManagerAccess(currentQuestion)
{
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Question;
}


Question::~Question()
{
}