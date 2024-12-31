#include "Voiture.h"
#include "Camion.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Vehicule*> parc;

    parc.push_back(new Voiture(2023, 45000, 5));
    parc.push_back(new Camion(2020, 120000, 10.5));
    parc.push_back(new Voiture(2022, 50000, 7));
    parc.push_back(new Camion(2019, 95000, 8.2));

    for (const auto& vehicule : parc) {
        vehicule->afficher();
        vehicule->accelerer();
        std::cout << std::endl;
    }

    for (auto& vehicule : parc) {
        delete vehicule;
    }

    return 0;
}
