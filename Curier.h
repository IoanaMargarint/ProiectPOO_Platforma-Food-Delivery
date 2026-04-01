#pragma once
#include "Utilizator.h"

class Curier : public Utilizator {
private:
    std::string vehicul;

public:
    // constructor
    Curier(std::string nume, std::string telefon, std::string vehicul);

    ~Curier() override;

    void afisare() const override;
};