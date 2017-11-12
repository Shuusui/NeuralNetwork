#pragma once
///Internal includes
#pragma region Internal Includes

#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes



namespace NeuralNetwork
{
	namespace BaseFrameworkLib
	{
		class ISentences
		{
		public: 			
			virtual bool WriteDown(); 
		protected: 
			std::vector<std::string> m_currentString; 
		};
	}
}