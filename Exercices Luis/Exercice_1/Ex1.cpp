// Ex1 SL228_POBJ language C++ 
// Visual Studio 2022
// 28.11.2023 Garcia Luis

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

char UserAnswer;
int ValA, ValB;

// Variables pour test A et B
short i;
short ValB1;
double  ValB2;
bool noDigit;

int main (void)
{
	std::cout << "Exercice 1 : Garcia Luis" << std::endl;
	std::cout << "Solution en C a trandformer en C++" << std::endl;

	do {
		std::cout << "Test A ou B, Q pour Quitter" << std::endl;
		std::cin >> UserAnswer;
		UserAnswer = std::toupper(UserAnswer);
		
		
		switch (UserAnswer) {
			case 'A':
				std::cout << "TestA: entrez un nombre entre 1 et 9" << std::endl;
				std::cin >> ValA;

				if (ValA > 9)
				{
					ValA = 9;
					std::cout << "TestA: ValA limitee a 9" << std::endl;
				}
				if (ValA == 0)
				{
					ValA = 1;
					std::cout << "TestA: ValA forcee a 1" << std::endl;
				}
				if (ValA > 0 )
				{
					std::cout << ValA << std::endl;

					for (i=0; i < ValA; i++)
					{
						std::cout << "*";
					}
					std::cout << "\n"; // saut de ligne
				}
				else 
				{
					std::cout << "TestA: ValA est negatif !" << std::endl;
				}
			break;
			
			case 'B':
				std::cout << "TestB: entrez un nombre entre 1 et 9" << std::endl;
				std::cin >> ValB;
				
				if (ValB >= 0 && ValB <=9 )
				{
					for (i=0; i < ValB; i++) {
						ValB1 = 100 + (10 * i);
						ValB2 = ValB1 / 10000.0;
						std::cout << "TestB: i= " << i << 
									 " ValB1 = " << ValB1 << 
									 " ValB2 = " << std::fixed << std::setprecision(5) << ValB2 << std::endl;
					}
				}
				else
				{
					std::cout << "TestB: ValB n'est pas entre 0 et 9 !" << std::endl;
				}
				break;

		} // end switch
		
	
	} while (!(UserAnswer == 'Q'));

	return (0);
}