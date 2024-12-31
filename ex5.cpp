#include <iostream>
#include <string>

class Personne {
protected:
    std::string nom;
    int age;
    char sexe;

public:
    Personne(const std::string& nom, int age, char sexe) : nom(nom), age(age), sexe(sexe) {}

    void setNom(const std::string& nom) { this->nom = nom; }
    void setAge(int age) { this->age = age; }
    void setSexe(char sexe) { this->sexe = sexe; }

    std::string getNom() const { return nom; }
    int getAge() const { return age; }
    char getSexe() const { return sexe; }

    virtual std::string getPersonne() const {
        return "Nom: " + nom + ", Age: " + std::to_string(age) + ", Sexe: " + sexe;
    }

    virtual ~Personne() = default;
};

class Enseignant : virtual public Personne {
private:
    std::string charge;

public:
    Enseignant(const std::string& nom, int age, char sexe, const std::string& charge)
        : Personne(nom, age, sexe), charge(charge) {}

    void setCharge(const std::string& charge) { this->charge = charge; }
    std::string getCharge() const { return charge; }

    std::string getPersonne() const override {
        return Personne::getPersonne() + ", Charge: " + charge;
    }
};

class Etudiant : virtual public Personne {
private:
    std::string filiere;

public:
    Etudiant(const std::string& nom, int age, char sexe, const std::string& filiere)
        : Personne(nom, age, sexe), filiere(filiere) {}

    void setFiliere(const std::string& filiere) { this->filiere = filiere; }
    std::string getFiliere() const { return filiere; }

    std::string getPersonne() const override {
        return Personne::getPersonne() + ", Filiere: " + filiere;
    }
};

class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel(const std::string& nom, int age, char sexe, const std::string& charge, const std::string& filiere)
        : Personne(nom, age, sexe), Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}

    std::string getPersonne() const override {
        return Personne::getPersonne() + ", Charge: " + Enseignant::getCharge() + ", Filiere: " + Etudiant::getFiliere();
    }
};

int main() {
    Enseignant enseignant("Dupont", 40, 'M', "Mathematiques");
    Etudiant etudiant("Martin", 20, 'F', "Informatique");
    Contractuel contractuel("Durand", 25, 'M', "Physique", "Chimie");

    std::cout << enseignant.getPersonne() << std::endl;
    std::cout << etudiant.getPersonne() << std::endl;
    std::cout << contractuel.getPersonne() << std::endl;

    return 0;
}
