#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(const std::string& nom, double x, double y, double portee);
    void chasserEtTuer(Robot& cible);
};

#endif
