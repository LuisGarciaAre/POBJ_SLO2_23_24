#include "demo.h"
#include <iostream>		//"<>" car librairie standard (pas créé par l'utilisateur)
#include <cstdint>		//lib types normalisés c++ (types entiers) exemples: bool,char,short,int,long
						//Types primitifs flottants: double,float, 
#include <string>		//Pour utiliser les string
#include <iomanip>		//manipulation flux de données

void main()
{
	//-- type normalisé (primitif) --//
	bool valB = 0; 	// différent de 0 (exemple 1, 10, 20 - true - false) -> codé 1 octets  
	char valC = 'A'; 	// 0x41 - 65 -> code 1 octets ->
	char tbC[10] = {0}; // initialisation  d'un tableau "statique (mémoire)" 
	short valS = 0; 	// usigned pour une valeur non signé qui va de 0 à 65535 
						// signé : - 32 768 à 32 767
						// codé sur 2 octets 
	int valI = 0, x = 0, divS = 2, divD = 10, reste = 0, valeurDiv = 0; 		// codé sur 4 octets -> Attention ne dépend plus de la machine 
	long valL = 0; 		// codé sur 4/8 ?  octets 
	
	double valD = 0.0;	// codé sur 8 octets 
	
	uint8_t clavier;
	float pi = 3.14f;
	std::string chaineCaractere = "Bonjour Cyril";		//Dans mémoire figée
	std::string *chaineCaractere2 = new std::string("Coucou Cyril");	//Dans mémoire dynamique
	
	std::cout << "Salut Cyril\n" << std::endl;	//Flux de sortie
	std::cin >> clavier;	//Flux d'entrée
	std::cout << "Taille variable = " << sizeof (clavier) << "Valeur clavier = " << clavier << std::endl;	//Flux de sortie
	std::cout << "Taille bool = " << sizeof (bool) << std::endl;	//Flux de sortie
	
	std::cout << std::setiosflags(ios::left) << std::setw(3) << clavier;	//reserve 3 charactère minimum sur la console
	std::cout << std::resetiosflags(ios::left) << std::setiosflags(ios::right) << std::setw(3) << clavier;
	
	std::cout << hex << clavier;		//affichage hexadécimal
	std::cout << dec << clavier;		//affichage décimal
	
	std::cout.width(3);					//reserve 3 charactère minimum sur la console
	std::cout.fill('-');				//remplit les case vide avec un charactère
	std::cout << clavier;
	
	std::cout << pi;					//affiche la valeur pi
	std::cout << std::setiosflags(ios::fixed) << pi;		//affiche 6 chiffres significatifs
	
	std::cout << std::setiosflags(ios::fixed);		
	std::cout.precision(1);
	std::cout << pi;		//affiche 1 chiffres après la virgule
	
	std::cout << std::resetiosflags(ios::fixed) << std::setiosflags(ios::scientific);
	std::cout << pi;		//annotation scientific
	
	std::cin >> pi; 		// récupère un float 
	std::cin >> valS;  		// récupère une valeur sur 2 octets 
	
	x = 2; 
	//-- ignorer des caractères --// 
	std::cin.unsetf(ios:skipws); 		// activer la notion d'espace dans une chaine 
	std::cin.ignore(x, " a"); 			// x = nb de caractère à ignorer, ce qu'il faut ignorer " a" 
	
	std::cin >> tbC; 
	std::cin.getline(tbC, 5); 
	
	//-- appel d'une fct --//
	//-- WARNING -> en ++ plus de notion de passage par pointeur -> adresse) 
	valeurDiv = FonctionDivisionEntiere(divD, reste, divS); // --> appel de fonction  normal 
	valeurDiv = FonctionDivisionEntiere(divD, reste); 

}

//-- description... 
//--> en C:  passage par référence lié au pointeur 
//-- passage par copie -> avec les types int
//--> en C++ passage par référence -> lié à la symbolique & WARNING 
//--> en C++ valeur par défaut : 
inline int FonctionDivisionEntiere(int dividende, int &ptReste, int diviseur)
{
	//-- calcul du reste 
	ptReste = dividende % diviseur;

	//-- calcul de la valeur divisee 
	return (dividende / diviseur);
	
}




