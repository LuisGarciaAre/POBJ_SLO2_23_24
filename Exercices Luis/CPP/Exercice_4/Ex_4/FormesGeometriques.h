#ifndef FormesGeometriques_h
#define FormesGeometriques_h


class FormesGeometriques {

 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double CalculerPerimetre(double x1, double x2);

    double GetSurface();

    double GetPerimetre();
    
    FormesGeometriques();

 protected:
    double Surface;
    double Perimetre;

private:
    double m_Surface;
    double m_Perimetre;

};

#endif // FormesGeometriques_h
