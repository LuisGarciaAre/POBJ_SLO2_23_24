#include "Rectangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle()
{
    std::cout << "Constructeur de Rectangle" << std::endl;
}


double Rectangle::CalculerSurface(double largeur, double hauteur)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D6A begin
{
    Surface = largeur * hauteur;

    return Surface;
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D6A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

double Rectangle::CalculerPerimetre(double largeur, double hauteur)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D6C begin
{
    Perimetre = (largeur * 2) + (hauteur * 2);
    return Perimetre;
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D6C end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element
