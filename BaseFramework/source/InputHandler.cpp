#include "include\private\InputHandler.h"

using namespace NeuralNetwork::BaseFramework; 


InputHandler::InputHandler()
{
}

bool InputHandler::ReadIn(std::string currentString)
{
	m_stringBuffer.push_back(currentString);

	if (currentString[currentString.size()] == '?' || currentString[currentString.size()] == '!' || currentString[currentString.size()] == '.')
	{
		NeuralNetwork::BaseFrameworkLib::ISentences* currentSentence = CategorizeSentence(m_stringBuffer);
		return currentSentence->SaveSentence() ?  true :  false;
		
	}
	else
		return false; 
}

NeuralNetwork::BaseFrameworkLib::ISentences* InputHandler::CategorizeSentence(std::vector<std::string> currentString)
{
	NeuralNetwork::BaseFrameworkLib::ISentences* sentence = new NeuralNetwork::BaseFramework::Question(currentString);
	return sentence;
}

InputHandler::~InputHandler()
{

}