#include "include\private\MemoryManager.h"

using namespace NeuralNetwork::BaseFramework; 

MemoryManager::MemoryManager()
{

}

bool MemoryManager::GetSentence(std::vector<std::string> currentSentence, enum NeuralNetwork::BaseFrameworkLib::Sentences sentenceType)
{
	switch (sentenceType)
	{
	case NeuralNetwork::BaseFrameworkLib::Sentences::Demand: 
		return true;

		break; 
	case NeuralNetwork::BaseFrameworkLib::Sentences::Question:
		return true;

		break; 
	case NeuralNetwork::BaseFrameworkLib::Sentences::Exclamation:
		return true;

		break; 
	case NeuralNetwork::BaseFrameworkLib::Sentences::Optative:
		return true;

		break; 
	case NeuralNetwork::BaseFrameworkLib::Sentences::Statement:
		return true;

		break;
	}
	return true; 
}


MemoryManager::~MemoryManager()
{

}