#pragma once
#include <iostream>
#include <string>

class Produs {
private:
    std::string nume;
    double pret;

public:
    // constructor
    Produs(std::string nume, double pret);

    // destructor virtual
    virtual ~Produs();

    // getteri pt a accesa date private
    std::string getNume() const;
    double getPret() const;

    friend std::ostream& operator<<(std::ostream& out, const Produs& p);
};