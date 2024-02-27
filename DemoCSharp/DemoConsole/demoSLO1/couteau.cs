using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace demoSLO1
{
    class couteau : arme
    {
        //-- attribut --// 
        //-- private --// 
        private String mTypeArme;
        private String mModele;

        // constructeur 
        couteau() { }
        public couteau(String Modele, int degats)
        { }

        public override int Frapper() 
        {
            int degatsInflige = 0;

            return degatsInflige; 
        }



    }
}
