#include "include\private\InputManager.h"

using namespace NeuralNetwork::BaseFramework; 

InputManager::InputManager()
{
	m_inputHandler = new InputHandler();
}

void InputManager::GetInput()
{
	std::string tempStr;
	std::cin >> tempStr; 
	m_inputHandler->ReadIn(tempStr);
}


InputManager::~InputManager()
{

}