#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
protected:
    std::string nom;
    double x, y;
    double portee;
    bool estMort;

public:
    Robot(const std::string& nom, double x, double y, double portee);
    virtual ~Robot() = default;
    void deplacer(double dx, double dy);
    void afficher() const;
    bool estALaPortee(const Robot& autre) const;
    void tuer();
    bool estVivant() const;
    std::string getNom() const;
};

#endif
