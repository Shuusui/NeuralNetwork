#include "include\private\InputManager.h"

using namespace NeuralNetwork::BaseFramework; 

InputManager::InputManager()
{
	m_inputHandler = new InputHandler();
}

bool InputManager::SetInput()
{
	std::string tempStr;
	std::cin >> tempStr; 
	return m_inputHandler->ReadIn(tempStr) ? true : false;
	
}


InputManager::~InputManager()
{
	delete m_inputHandler;
}