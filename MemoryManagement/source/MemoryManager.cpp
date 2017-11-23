#include "include\public\MemoryManager.h"

using namespace NeuralNetwork::MemoryManagement;

MemoryManager::MemoryManager()
{

}

bool MemoryManager::SetSentence(const NeuralNetwork::BaseFrameworkLib::BaseSentence  baseSentence)
{
	std::string formattedString;
	for (unsigned int i = 0; i < baseSentence.m_string.size(); i++)
	{
		formattedString.append(baseSentence.m_string.at(i).c_str());
	}
	NeuralNetwork::BaseFrameworkLib::BaseSentence base;
	base.m_sentenceType = NeuralNetwork::BaseFrameworkLib::Sentences::Demand; 
	TCHAR NPath[256];
	GetCurrentDirectory(256, NPath);
	std::string  s = NPath;
	s.append("\\Memories");
	CreateDirectory(s.c_str(), NULL);
	switch (base.m_sentenceType)
	{
	case NeuralNetwork::BaseFrameworkLib::Sentences::Demand:
	{

		if (CreateDirectory("Memories\\Demands", NULL))
		{
			std::string tempStr = ("Memories\\Demands\\"); 
			tempStr.append(formattedString);
			std::ifstream currentFile = TryToOpenFile(tempStr);
			if(!currentFile)
				currentFile.open(tempStr.c_str(), std::ios::out);
			return true;

		}

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

std::ifstream MemoryManager::TryToOpenFile(const std::string filePath)
{
	std::ifstream fileHandle; 
	fileHandle.open(filePath.c_str(), std::ios::in | std::ios::out | std::ios::app);
	return fileHandle; 
}

std::vector<std::string> MemoryManager::SearchTroughFile(std::ifstream currentFile)
{
	std::vector<std::string> tempStr; 
	return tempStr; 
}

bool MemoryManager::SaveSentence(std::ifstream currentFile, NeuralNetwork::BaseFrameworkLib::BaseSentence currentSentence)
{
	return true; 
}

MemoryManager::~MemoryManager()
{

}