#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

class Vehicule {
protected:
    static int numeroSerie;
    static int numeroDansSerie;
    int serie;
    int numeroVehicule;
    int annee;
    double prix;

public:
    Vehicule(int annee, double prix);
    virtual ~Vehicule() = default;
    virtual void accelerer() const = 0;
    virtual void afficher() const;
};

#endif
