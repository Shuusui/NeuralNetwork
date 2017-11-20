///Internal includes
#pragma region Internal Includes
#include "include\private\RuntimeManager.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#pragma endregion External Includes


using namespace NeuralNetwork::BaseFramework;

int main()
{
	RuntimeManager* runtime = new RuntimeManager("Hello! How can I help you?");
	delete runtime; 
}