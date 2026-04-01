#pragma once
#include "Utilizator.h"

class Curier : public Utilizator {
private:
    std::string vehicul;

public:
    // constructor
    Curier(const std::string& nume, const std::string& telefon, const std::string& vehicul);

    ~Curier() override;

    void afisare() const override;
};
