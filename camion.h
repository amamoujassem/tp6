#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule {
    double chargeMaximale;

public:
    Camion(int annee, double prix, double chargeMaximale);
    void accelerer() const override;
    void afficher() const override;
};

#endif
