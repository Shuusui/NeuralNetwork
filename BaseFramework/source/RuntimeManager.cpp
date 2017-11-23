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
		if (!m_inputMgr->SetInput())
			printf("Please repeat");
		else
			continue; 
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