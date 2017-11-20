#include "include\public\MemoryManager.h"

using namespace NeuralNetwork::MemoryManagement;

MemoryManager::MemoryManager()
{

}

bool MemoryManager::SetSentence(NeuralNetwork::BaseFrameworkLib::BaseSentence baseSentence)
{
	std::string formattedString;
	for (unsigned int i = 0; i < baseSentence.m_string.size(); i++)
	{
		formattedString.append(baseSentence.m_string.at(i).c_str());
	}
	switch (baseSentence.m_sentenceType)
	{
	case NeuralNetwork::BaseFrameworkLib::Sentences::Demand:
	{
		std::fstream file("...\MemoryFiles\\Demands\\" + formattedString, std::ios::out);
		return true;
	}
		break;
	case NeuralNetwork::BaseFrameworkLib::Sentences::Question:
	{
		return true;
	}
		break;
	case NeuralNetwork::BaseFrameworkLib::Sentences::Exclamation:
	{
		return true;
	}
		break;
	case NeuralNetwork::BaseFrameworkLib::Sentences::Optative:
	{
		return true;
	}
		break;
	case NeuralNetwork::BaseFrameworkLib::Sentences::Statement:
	{
		return true;
	}
		break;
	}
	return false;
}


MemoryManager::~MemoryManager()
{

}