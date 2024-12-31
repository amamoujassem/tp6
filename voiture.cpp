#include "Voiture.h"
#include <iostream>

Voiture::Voiture(int annee, double prix, int nombrePlaces)
    : Vehicule(annee, prix), nombrePlaces(nombrePlaces) {}

void Voiture::accelerer() const {
    std::cout << "Je peux atteindre 200km/h" << std::endl;
}

void Voiture::afficher() const {
    Vehicule::afficher();
    std::cout << "Nombre de places: " << nombrePlaces << std::endl;
}
