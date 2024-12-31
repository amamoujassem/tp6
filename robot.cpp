#include "Robot.h"
#include <iostream>
#include <cmath>

Robot::Robot(const std::string& nom, double x, double y, double portee)
    : nom(nom), x(x), y(y), portee(portee), estMort(false) {}

void Robot::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

void Robot::afficher() const {
    std::cout << "Nom: " << nom
              << ", Position: (" << x << ", " << y << ")"
              << ", Portée: " << portee
              << ", Statut: " << (estMort ? "Mort" : "Vivant") << std::endl;
}

bool Robot::estALaPortee(const Robot& autre) const {
    double distance = std::sqrt(std::pow(x - autre.x, 2) + std::pow(y - autre.y, 2));
    return distance <= portee;
}

void Robot::tuer() {
    estMort = true;
}

bool Robot::estVivant() const {
    return !estMort;
}

std::string Robot::getNom() const {
    return nom;
}
