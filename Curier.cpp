#include "Curier.h"

Curier::Curier(const std::string& nume, const std::string& telefon, const std::string& vehicul) : Utilizator(nume, telefon), vehicul(vehicul) {}

Curier::~Curier() {}

void Curier::afisare() const {
    std::cout << "Curier ";
    Utilizator::afisare();

    std::cout << " -> vehicul: " << vehicul << "\n";
}
