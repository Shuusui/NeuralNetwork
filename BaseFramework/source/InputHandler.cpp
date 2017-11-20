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
		//NeuralNetwork::BaseFrameworkLib::ISentences* currentSentence = CategorizeSentence(m_stringBuffer);
		//return currentSentence->SaveSentence() ?  true :  false;
		return true;
	}
	else
		return false; 
}



InputHandler::~InputHandler()
{

}