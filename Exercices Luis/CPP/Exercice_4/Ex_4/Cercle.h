#ifndef Cercle_h
#define Cercle_h

#include "FormesGeometriques.h"


class Cercle : public FormesGeometriques {

 public:

    double CalculerSurface(double diametre, double x2);

    double CalculerPerimetre(double diametre, double x2);

    Cercle();
};

#endif // Cercle_h
