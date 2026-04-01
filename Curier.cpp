#include "Curier.h"

Curier::Curier(std::string nume, std::string telefon, std::string vehicul) : Utilizator(nume, telefon), vehicul(vehicul) {}

Curier::~Curier() {}

void Curier::afisare() const {
    std::cout << "Curier ";
    Utilizator::afisare();

    std::cout << " -> vehicul: " << vehicul << "\n";
}