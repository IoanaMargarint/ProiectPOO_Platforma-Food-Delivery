#pragma once
#include <iostream>
#include <string>

class Utilizator {
protected:
    static int contorID;
    int id;
    std::string nume;
    std::string telefon;

public:
    // constructor
    Utilizator(std::string nume, std::string telefon);

    // destructor virtual
    virtual ~Utilizator();

    virtual void afisare() const;

    friend std::ostream& operator<<(std::ostream& out, const Utilizator& u) {
        u.afisare();
        return out;
    }

    // getter pt ID
    int getId() const { return id; }
};