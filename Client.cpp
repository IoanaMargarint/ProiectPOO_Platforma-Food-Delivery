#include "Client.h"

Client::Client(std::string nume, std::string telefon, std::string adresaLivrare) : Utilizator(nume, telefon), adresaLivrare(adresaLivrare) {}

Client::~Client() {}

void Client::afisare() const {
    std::cout << "Client ";
    Utilizator::afisare();

    std::cout << " -> adresa livreare: " << adresaLivrare << "\n";
}