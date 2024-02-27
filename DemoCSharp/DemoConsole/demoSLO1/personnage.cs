using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace demoSLO1
{
    class personnage
    {
        //-- déclaration de constante --// 
        private const byte VIE_MAX = 100; 
        //-- déclaration d'attribut 
        //-- private --// 
        private byte mVie;
        private String mNomPersonnage; 
        


        //-- protect --// 

        //-- public --//  
        public arme choixArme;

        //-- constructeur --// 
        public personnage()
        {
            mVie = 100;
            mNomPersonnage = "perso"; 
        }
        public personnage(byte vie) 
        {
            //-- MAJ attribut lors de l'instanciation --// 
            mVie = vie;         //-- this.mVie = vie; => même chose  

            //-- message user --// 
            Console.WriteLine("Entrer un nom de personnage");
            mNomPersonnage = Console.ReadLine(); 
        }
        public void ChoisirArme(ref e_typeArme typeArme) // passage par reférence 
                                                         // ref -> valeur initialisée à l'appel de la fonction 
        {
            switch(typeArme)
            {
                case e_typeArme.aBlanche :
                    // instanciation d'objet 
                    choixArme = new arme("couteau suisse", 50); 

                    break;

                case e_typeArme.aContondante:

                    break;

                case e_typeArme.aFeu:

                    break;
                
                case e_typeArme.aJet:

                    break;
            }

            typeArme = e_typeArme.aFeu; 

        }

        public void choisirArme2(out e_typeArme typeArme) // passage par reférence 
                                                          // ref -> valeur initialisée à l'appel de la fonction 
        {
            typeArme = e_typeArme.aJet;
        }

        public void Attaquer(personnage adversaire) 
        {
            
        }

        public void BoirePotion(ref byte quantite)
        {
            if((mVie + quantite) > personnage.VIE_MAX)      // -> ou simplement VIE_MAX
            {
                mVie = VIE_MAX;
                //quantite = VIE_MAX 
            }
            else 
                mVie += quantite; 


        }
        public void InfoPersonnage() 
        {
            Console.WriteLine("nom : " + mNomPersonnage);
            Console.WriteLine("vie actuelle : " + mVie); 
        }
    }
}
