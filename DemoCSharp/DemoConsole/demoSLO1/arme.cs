﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace demoSLO1
{
    //-- énumération globale  --//
    public enum e_typeArme { aBlanche, aContondante, aJet, aFeu }
    class arme
    {
        //-- attributs --// 
        //-- protected --// 
        protected int mDegats;
        protected String mNomComplet; 

        //-- private --//
        private int mTest1;
        private char mTest2;

        //-- constructeur --// 
        public arme() 
        { }
        public arme(String nomArme, int Degat) 
        {

        }

        public virtual int Frapper() 
        {
            int degatInflige = 0;

            return degatInflige; 
        }



    }
}
