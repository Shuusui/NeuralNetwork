#include "include\private\Optative.h"

using namespace NeuralNetwork::SentenceCategorizer;

Optative::Optative(std::vector<std::string> currentOptative)
	:MemoryManagerAccess(currentOptative)
{
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Optative;
}

Optative::~Optative()
{

}