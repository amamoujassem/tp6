#include <iostream>
#include <vector>
#include <string>

class Piece {
protected:
    int x, y;
    std::string couleur;
public:
    Piece(int x, int y, const std::string& couleur) : x(x), y(y), couleur(couleur) {}
    virtual ~Piece() = default;
    virtual void deplacer() = 0;
    virtual void afficher() const = 0;
};

class Pion : public Piece {
public:
    Pion(int x, int y, const std::string& couleur) : Piece(x, y, couleur) {}
    void deplacer() override {
        if (y < 8) {
            y += 1;
        } else {
            std::cout << "Pion hors limites" << std::endl;
        }
    }
    void afficher() const override {
        std::cout << "Pion [" << couleur << "] en position (" << x << ", " << y << ")" << std::endl;
    }
};

class Roi : public Piece {
public:
    Roi(int x, int y, const std::string& couleur) : Piece(x, y, couleur) {}
    void deplacer() override {
        if (x < 8) x += 1;
        if (y < 8) y += 1;
    }
    void afficher() const override {
        std::cout << "Roi [" << couleur << "] en position (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    std::vector<Piece*> pieces;
    pieces.push_back(new Pion(1, 2, "blanc"));
    pieces.push_back(new Pion(3, 4, "noir"));
    pieces.push_back(new Roi(5, 6, "blanc"));

    for (const auto& piece : pieces) {
        piece->afficher();
        piece->deplacer();
        piece->afficher();
    }

    for (auto& piece : pieces) {
        delete piece;
    }

    return 0;
}
