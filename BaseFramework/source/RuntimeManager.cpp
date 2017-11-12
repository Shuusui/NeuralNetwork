#include "include\private\RuntimeManager.h"

using namespace NeuralNetwork::BaseFramework; 



RuntimeManager::RuntimeManager(std::string initialOutput)
{
	printf("%s", initialOutput.c_str()); 
	m_inputMgr = new InputManager();
	Run();
}

void RuntimeManager::Run()
{
	while (true)
	{
		m_inputMgr->GetInput();
	}
}

void RuntimeManager::Finish()
{
	
}

RuntimeManager::~RuntimeManager()
{

}