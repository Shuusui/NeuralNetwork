#pragma once
///Internal includes
#pragma region Internal Includes
#include "Demand.h"
#include "Optative.h"
#include "Question.h"
#include "Statement.h"
#include "Exclamation.h"
#pragma endregion Internal Includes
///External includes
#pragma region External Includes
#include <string>
#include <vector>
#pragma endregion External Includes

namespace NeuralNetwork
{
	namespace BaseFramework
	{
		class InputHandler
		{
		public: 
			InputHandler();
			bool ReadIn(std::string currentString); 

			~InputHandler();
		private: 
			std::vector<std::string> m_stringBuffer;
			Demand* m_demand;
			Question* m_question;
			Exclamation* m_exclamation;
		};


	}
}