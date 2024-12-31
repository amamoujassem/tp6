#include "Vehicule.h"
#include <iostream>
#include <iomanip>

int Vehicule::numeroSerie = 1;
int Vehicule::numeroDansSerie = 1;

Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    numeroVehicule = numeroDansSerie;
    serie = numeroSerie;

    numeroDansSerie++;
    if (numeroDansSerie > 10000) {
        numeroDansSerie = 1;
        numeroSerie++;
    }
}

void Vehicule::afficher() const {
    std::cout << std::setfill('0') << serie << " TUN " << std::setw(4) << numeroVehicule
              << ", Annee: " << annee
              << ", Prix: " << prix << " TND" << std::endl;
}
