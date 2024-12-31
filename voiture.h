#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
    int nombrePlaces;

public:
    Voiture(int annee, double prix, int nombrePlaces);
    void accelerer() const override;
    void afficher() const override;
};

#endif
