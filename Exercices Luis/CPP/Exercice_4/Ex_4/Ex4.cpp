// Ex4  SL228_POBJ  CPP
// Garcia Luis 23.01.2024

#include <iostream>
#include <stdint.h>
using namespace std;

#include "Utilisateur.h"

int main (void)
{
	Utilisateur UserA, UserB, UserC;
	uint8_t userChoice = 'A';

	std::cout << "Cours CPP exercice 4, Luis Gracia" << std::endl;

	while (userChoice != 'Q')
	{
		// Appel et execution de calcul du triangle
		UserA.ChoisirForme(0);
		UserA.SaisirLesParametres();
		UserA.ExecuterLesCalculs();
		UserA.AfficherResultats();

		// Appel et execution de calcul du rectangle
		UserB.ChoisirForme(1);
		UserB.SaisirLesParametres();
		UserB.ExecuterLesCalculs();
		UserB.AfficherResultats();

		// Appel et execution de calcul du cercle
		UserC.ChoisirForme(2);
		UserC.SaisirLesParametres();
		UserC.ExecuterLesCalculs();
		UserC.AfficherResultats();

		std::cout << "Q pour sortir" << std::endl;
		std::cin >> userChoice;
	}



	return 0;
}