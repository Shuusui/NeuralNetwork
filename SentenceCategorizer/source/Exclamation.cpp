#include "include\private\Exclamation.h"

using namespace NeuralNetwork::SentenceCategorizer;


Exclamation::Exclamation(std::vector<std::string> currentExclamation)
	:MemoryManagerAccess(currentExclamation)
{
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Exclamation;
}


Exclamation::~Exclamation()
{

}