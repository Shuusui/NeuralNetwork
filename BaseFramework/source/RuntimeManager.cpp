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
		std::string tempStr = ("/MemoryFiles/Demands/hasdikasj.txt");
		std::fstream file(tempStr.c_str(), std::ios::out);
		if (file)
		{

		}
		file.write(tempStr.c_str(),tempStr.size());
		file.close();

		NeuralNetwork::BaseFrameworkLib::BaseMemory currMem = m_inputMgr->SetInput();
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