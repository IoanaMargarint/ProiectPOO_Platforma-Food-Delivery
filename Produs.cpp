#include "Produs.h"

Produs::Produs(std::string nume, double pret) : nume(nume), pret(pret) {}

Produs::~Produs() {}

std::string Produs::getNume() const {
    return nume;
}

double Produs::getPret() const {
    return pret;
}

std::ostream& operator<<(std::ostream& out, const Produs& p) {
    out << "Produs: " << p.nume << "| Pret: "  << p.pret << " RON";
    return out;
}