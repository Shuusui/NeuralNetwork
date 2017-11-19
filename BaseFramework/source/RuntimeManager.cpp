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
		BaseMemory currMem = m_inputMgr->SetInput();
		if (currMem.m_isFilled)
			m_outputMgr = new OutputManager(currMem);
		else
			printf("Please repeat");
	}
}

void RuntimeManager::Finish()
{
	
}

RuntimeManager::~RuntimeManager()
{
	delete m_inputMgr; 
	delete m_outputMgr;
}