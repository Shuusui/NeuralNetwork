#include "include\private\Demand.h"


using namespace NeuralNetwork::SentenceCategorizer; 


Demand::Demand(std::vector<std::string> currentDemand)
	:MemoryManagerAccess(currentDemand)
{
	m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Demand;
}



Demand::~Demand()
{

}