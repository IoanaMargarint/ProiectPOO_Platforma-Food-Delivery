#include "Comanda.h"

int Comanda::contorComenzi = 0;

Comanda::Comanda(Client* client, Curier* curier, Restaurant* restaurant) : client(client), curier(curier), restaurant(restaurant), pretTotal(0.0) {
    contorComenzi++;
    idComanda = contorComenzi;
}

Comanda::~Comanda() {
    for (Produs* p : cosCumparaturi) delete p;
    cosCumparaturi.clear();
}

void Comanda::adaugaInCos(Produs* p) {
    cosCumparaturi.push_back(p);
    pretTotal += p->getPret();
}

void Comanda::calculeazaTotal() {
    pretTotal = 0;
    for(Produs* p : cosCumparaturi) {
        pretTotal += p->getPret();
    }
}

void Comanda::afisare() const {
    std::cout << "COMANDA #" << idComanda << "\n";

    std::cout << "\nCLIENT:\n";
    if (client) client->afisare();

    std::cout << "\nCURIER:\n";
    if (curier) curier->afisare();

    std::cout << "\nRESTAURANT:\n";
    if (restaurant) restaurant->afisare();

    std::cout << "\nCOS DE CUMPARATURI:\n";
    if (cosCumparaturi.empty()) {
        std::cout << " ( cosul este gol)\n";
    }
    else {
        for(Produs* p : cosCumparaturi) {
            std::cout << "  - " << p->getNume() << " (" << p->getPret() << " RON)\n";
        }
    } 

std::cout << "TOTAL DE PLATA: " << pretTotal << " RON\n";
}