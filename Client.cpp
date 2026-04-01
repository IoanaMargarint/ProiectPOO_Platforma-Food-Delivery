#include "Client.h"

Client::Client(const std::string& nume, const std::string& telefon, const std::string& adresaLivrare) : Utilizator(nume, telefon), adresaLivrare(adresaLivrare) {}

Client::~Client() {}

void Client::afisare() const {
    std::cout << "Client ";
    Utilizator::afisare();

    std::cout << " -> adresa livreare: " << adresaLivrare << "\n";
}
