#include "Restaurant.h"

// constructor
Restaurant::Restaurant(std::string nume, std::string adresa) : nume(nume), adresa(adresa) {}

// destructor - elibereaza memoria pt fiecare produs din vector
Restaurant::~Restaurant() {
    for (Produs* p : meniu) {
        delete p;
    }
    meniu.clear();
}

// constructor de copiere
Restaurant::Restaurant(const Restaurant& altul) : nume(altul.nume), adresa(altul.adresa) {
    for (Produs* p : altul.meniu) {
        // produs nou
        meniu.push_back(new Produs(p->getNume(), p->getPret()));
    }
}

// operatorul = 
Restaurant& Restaurant::operator=(const Restaurant& altul) {
    if (this == &altul) {
        return *this;
    }

    // stergem memoria veche
    for (Produs* p : meniu) {
        delete p;
    }
    meniu.clear();

    // copiem datele noi
    nume = altul.nume;
    adresa = altul.adresa;
    for (Produs* p : altul.meniu) {
        meniu.push_back(new Produs(p->getNume(), p->getPret()));
    }

    // obiectul curent
    return *this;
}

// adaugam produsul in meniul restaurantului
void Restaurant::adaugaProdus(Produs* p) {
    meniu.push_back(p);
}

void Restaurant::afisare() const {
    std::cout << "Restaurant:  " << nume << "    " << "\n";
    std::cout << "Adresa: " << adresa << "\n";
    std::cout << "Meniu:\n";

    if(meniu.empty()) {
        std::cout << " (meniul este momentan gol)\n";
    } 
    else {
        for(Produs* p : meniu) {
            std::cout << "  - " << *p << "\n";
        }
    }
    std::cout << "\n";
}