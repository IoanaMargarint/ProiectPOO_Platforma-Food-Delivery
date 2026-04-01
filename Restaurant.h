#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produs.h"

class Restaurant {
private:
    std::string nume;
    std::string adresa;
    std::vector<Produs*> meniu; 

public:
    // constructor
    Restaurant(std::string nume, std::string adresa);

    // destructor
    ~Restaurant();

    // constructor de copiere
    Restaurant(const Restaurant& altul);

    // operator de atribuire
    Restaurant& operator=(const Restaurant& altul);

    void adaugaProdus(Produs* p);
    void afisare() const;

    std::string getNume() const { return nume; }
};