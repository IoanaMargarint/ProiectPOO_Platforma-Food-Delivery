#include "Utilizator.h"

int Utilizator::contorID = 0;

Utilizator::Utilizator(const std::string& nume, const std::string& telefon) : nume(nume), telefon(telefon) {
    contorID++; // crestem nr total de utilizatori
    id = contorID; // utilizator = id curent
}

Utilizator::~Utilizator() {}

void Utilizator::afisare() const {
    std::cout << "ID: " << id << " | Nume: " << nume << " | Telefon: " << telefon << std::endl;
}
