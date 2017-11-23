#include "include\private\InputHandler.h"

using namespace NeuralNetwork::BaseFramework; 


InputHandler::InputHandler()
{
}

bool InputHandler::ReadIn(const std::string currentString)
{
	m_stringBuffer.push_back(currentString);

	if (currentString[currentString.size()] == '?' || currentString[currentString.size()] == '!' || currentString[currentString.size()] == '.')
	{
		m_sentenceCategorizer = new NeuralNetwork::SentenceCategorizer::BaseAPI(m_stringBuffer);
		return m_sentenceCategorizer->GetSentence()->Successful() ? true : false; 
	}
	else
		return false; 
}



InputHandler::~InputHandler()
{

}