#include "Camion.h"
#include <iostream>

Camion::Camion(int annee, double prix, double chargeMaximale)
    : Vehicule(annee, prix), chargeMaximale(chargeMaximale) {}

void Camion::accelerer() const {
    std::cout << "Je peux atteindre 120km/h" << std::endl;
}

void Camion::afficher() const {
    Vehicule::afficher();
    std::cout << "Charge maximale: " << chargeMaximale << " tonnes" << std::endl;
}
