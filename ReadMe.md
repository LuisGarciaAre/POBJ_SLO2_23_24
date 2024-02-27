# POBJ - Cours de programmation objet année 2023 - 2024 
## Infos Pratique - Bonne pratique git

1. Créer un compte sur un serveur GIT => pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
=> **deux approches possible** <= 
* => vous créez et gérez votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** où vous voulez
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	B. => sur votre serveur Git, créer un dépôt (new repository) 
	
	C. => lié les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	c:\mesDossierGit\monDepot 
	```
	
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 	
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un 
	
	A. => depuis le serveur -> forker le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone <adresse serveur> 
	``` 

*=> avec un outil graphqiue* -> sourceTree pour l'ES - GitDescktop - TortoiseGit - etc. 
	
## Suivi des exercices 
---

| Exercice \ Initial Etudiant | **[JAR](https://github.com/JeremyETMLES)** | **[DBS](https://github.com/damienbignens)** | **[ADC](https://github.com/antoniodocarmoafonso)** | **[CFO](https://github.com/CyrilFeliciano)** | **[DFA](https://github.com/Diogo-FerreiraETML)** | **[LGA](https://github.com/LuisGarciaAre)** | **[MPT](https://github.com/Melissaperret)** | **[SPN](https://github.com/Toxik24)** | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| UML | | | | | | | | | 
| Ex1 | Done / Uncontrolled | NOK | NOK | NOK | NOK | Done / Merged Solus on PBY | Done / Uncontrolled | Done / Uncontrolled |
| C++ | | | | | | | |
| Ex2 (1) | Done / Uncontrolled | Done / Uncontrolled | NOK | NOK | Done / Uncontrolled | Done / Uncontrolled | Done / Uncontrolled | Done / Uncontrolled | 
| Ex5 (2) | NOK | NOK | NOK | NOK | NOK | Done / Uncontrolled | Done / Uncontrolled | Done / Uncontrolled | 
| Ex6 (3) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 (4) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 (5) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 (6) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| JAVA | | | | | | | |
| Ex4 (1) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | Done / Uncontrolled |
| Ex2 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex3 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex5 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| C# | | | | | | | |
| Ex3 (1) | NOK | NOK | NOK | NOK | NOK | NOK | Done / Uncontrolled | Done / Uncontrolled | 
| Ex2 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex3 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex5 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## Exercice 1 => **UML**
### Suivi Projet 
* Exercice 1 - UML (exercice 1 - UML)  
* codage "individuel" 
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#2](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/2)

## Exercice 2 => **C++**
### Suivi Projet  
* Exercice 1 - C-> C++ (exercice 1 - C++) 
* codage "individuel"
* **Exercice optionnel**: 

réalisation d'un programme en C++ permettant de déterminer la taille de chaque type primitif  
* etat d'avancement => voir [#8](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/8)

## Exercice 5 => **C++**
### Suivi Projet  
* Exercice 2 -> C++ (exercice 2 - C++) 
* codage "individuel"
* etat d'avancement => voir [#12](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/12)

## Exercice 6 => **C++**
### Suivi Projet  
* Exercice 3 -> C++ (exercice 4 - C++) 
* codage "individuel"
* etat d'avancement => voir [#15](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/15)

## Exercice 7 => **C++**
### Suivi Projet  
* Exercice 4 -> C++ (exercice 5 - C++) 
* codage "individuel"
* etat d'avancement => voir [#16](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/16)

## Exercice 8 => **C++**
### Suivi Projet  
* Exercice 5 -> C++ (exercice 6 - C++) 
* codage "individuel"
* etat d'avancement => voir [#17](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/17)

## Exercice 9 => **C++**
### Suivi Projet  
* Exercice 6 -> C++ (exercice 3 - C++) 
* codage "individuel"
* etat d'avancement => voir [#18](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/18)

## Exercice 3 => **C#**
### Suivi Projet  
* Exercice 1 - C-> C# (exercice 1 - C++) 
* codage "individuel"
* **Exercice optionnel**: 

réalisation d'un programme en C# (mode console) permettant de déterminer la taille de chaque type primitif  

=> etat d'avancement => voir [#10](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/10)

## Exercice 4 => **JAVA**
### Suivi Projet  
* Exercice 1 - C-> Java (exercice 1 - C++) 
* codage "individuel"
* **Exercice optionnel**: 

réalisation d'un programme en JAVA (mode console) permettant de déterminer la taille de chaque type primitif  

=> etat d'avancement => voir [#11](https://github.com/PBYetml/POBJ_SLO2_23_24/issues/11)






