#include "RobotChasseur.h"
#include <iostream>

RobotChasseur::RobotChasseur(const std::string& nom, double x, double y, double portee)
    : Robot(nom, x, y, portee) {}

void RobotChasseur::chasserEtTuer(Robot& cible) {
    if (estALaPortee(cible) && cible.estVivant()) {
        cible.tuer();
        std::cout << cible.getNom() << " a ete abattu par " << nom <<std::endl;
    }
}
