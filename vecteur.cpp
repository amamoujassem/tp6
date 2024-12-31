#include <iostream>

class Vecteur {
protected:
    double x, y;

public:
    Vecteur() : x(0), y(0) {}
    Vecteur(double x, double y) : x(x), y(y) {}
    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }
    void afficher() const {
        std::cout << "(" << x << " , " << y << ")" << std::endl;
    }
};

class Vecteur3D : public Vecteur {
    double z;

public:
    Vecteur3D() : Vecteur(), z(0) {}
    Vecteur3D(double x, double y, double z) : Vecteur(x, y), z(z) {}
    void deplacer(double dx, double dy, double dz) {
        Vecteur::deplacer(dx, dy);
        z += dz;
    }
    void afficher() const {
        std::cout << "(" << x << " , " << y << " , " << z << ")" << std::endl;
    }
};

int main() {
    Vecteur vecteurNul;
    std::cout << "Vecteur nul : ";
    vecteurNul.afficher();

    vecteurNul.deplacer(3.5, -2.0);
    std::cout << "Vecteur apres deplacement : ";
    vecteurNul.afficher();

    Vecteur3D* vecteur3D = new Vecteur3D(1.0, 2.0, 3.0);
    std::cout << "Vecteur3D initial : ";
    vecteur3D->afficher();

    vecteur3D->deplacer(0.5, -1.0, 2.0);
    std::cout << "Vecteur3D apres deplacement : ";
    vecteur3D->afficher();

    delete vecteur3D;
    return 0;
}
