#include "RobotChasseur.h"
#include <vector>
#include <iostream>

int main() {
    RobotChasseur robotChass1("Optimus", 2, 3, 25);

    robotChass1.deplacer(33, 19);
    robotChass1.afficher();

    std::vector<Robot> robots = {
        {"Megatron", 30, 20, 10},
        {"Starscream", 50, 50, 10},
        {"Bumblebee", 10, 10, 10},
        {"Ratchet", 5, 5, 10},
        {"Ironhide", 70, 80, 10}
    };

    for (auto& robot : robots) {
        robot.afficher();
    }

    for (auto& robot : robots) {
        robotChass1.chasserEtTuer(robot);
    }

    std::cout << "\n Apres la chasse :" << std::endl;
    for (const auto& robot : robots) {
        robot.afficher();
    }

    return 0;
}
