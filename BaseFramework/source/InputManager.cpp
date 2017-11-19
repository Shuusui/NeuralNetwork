#include "include\private\InputManager.h"

using namespace NeuralNetwork::BaseFramework; 

InputManager::InputManager()
{
	m_inputHandler = new InputHandler();
}

BaseMemory InputManager::SetInput()
{
	std::string tempStr;
	std::cin >> tempStr; 
	m_inputHandler->ReadIn(tempStr);
	BaseMemory base; 
	return base; 
}


InputManager::~InputManager()
{
	delete m_inputHandler;
}