#include "include\private\Statement.h"


using namespace NeuralNetwork::SentenceCategorizer; 

Statement::Statement(std::vector<std::string> currentStatement)
	:MemoryManagerAccess(currentStatement)
{
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Statement;
}


Statement::~Statement()
{

}