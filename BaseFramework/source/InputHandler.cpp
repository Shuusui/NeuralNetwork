#include "include\private\InputHandler.h"

using namespace NeuralNetwork::BaseFramework; 


InputHandler::InputHandler()
{
}

bool InputHandler::ReadIn(std::string currentString)
{
	m_stringBuffer.push_back(currentString);
	if (currentString[currentString.size()] == '?')
	{
		m_question = new Question(m_stringBuffer);
		//m_question->WriteDown();
	}
	else if (currentString[currentString.size()] == '!')
	{
		m_exclamation = new Exclamation(m_stringBuffer); 
		//m_exclamation->WriteDown();
	}
	else
	{
		
	}
	return true;
}

InputHandler::~InputHandler()
{

}