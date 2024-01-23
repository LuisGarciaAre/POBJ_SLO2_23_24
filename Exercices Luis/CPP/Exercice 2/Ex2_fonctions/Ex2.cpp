// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>
#include <iomanip>
using namespace std;


// Fonction Extract


// Fonction AfficheB


// Fonction CalculSurfaceRectangle


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	float heures, min, sec, reste;
	// Variables pour test A, B et C
	

	// a adapter
	cout << "Exercice 2 : Luis Garcia" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		UserAnswer = std::toupper(UserAnswer);
		
		switch (UserAnswer) {
			case 'A':
				cout << "TestA: entrez un nombre de secondes: ";
				cin >> ValA;

				if ((std::cin.fail() == true))
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "La valeur introduite n'est une valeur entiere" << std::endl;
					std:cout << "\n" << std::endl;
				}
				else
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					if (ValA >= 3600)
					{
						heures = ValA / 3600.0f;
						reste = heures - static_cast<int>(heures);
						min = reste * 60.0f;
						reste = min - static_cast<int>(min);
						sec = reste * 60.0f;
					}
					else
					{
						min = ValA / 60.0f;
						reste = min - static_cast<int>(min);
						sec = reste * 60.0f;
						heures = 0;
					}

					std::cout << std::fixed << std::setprecision(0) << "Val en secondes = " << ValA << "-> Heures: " << heures << ", minutes: " << min << ", secondes: " << sec << std::endl;
					std::cout << "\n" << std::endl;
				}


			break;

			case 'B':
				cout << "TestB: entrez un nombre " <<  endl;
				cin >> ValB; 
				
			break;

			case 'C':
				cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 paramètres int 25 et 45
				
				// b)	Avec 2 paramètres double 23.25 et 44.33'
				
				// c)	Avec 4 paramètres int 20,20, 60,40
				

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q'));

	return (0);
}