#include "Meniu.h"
#include "Client.h"
#include "Curier.h"
#include "EvaluareAplicatie.h"
#include "EvaluareRestaurant.h"
#include "EvaluareCurier.h"
#include "EvaluarePreparat.h"
#include "EvaluareComandaCompleta.h"

Meniu* Meniu::instance = nullptr;

Meniu::Meniu() {}

Meniu* Meniu::getInstance() {
    if (!instance) {
        instance = new Meniu();
    }
    return instance;
}

Meniu::~Meniu() {
    for (Utilizator* u : utilizatori) delete u;
    for (Restaurant* r : restaurante) delete r;
    for (Comanda* c : comenzi) delete c;
    for (Evaluare* e : recenzii) delete e;
}

void Meniu::adaugaUtilizator(Utilizator* u) { utilizatori.push_back(u); }
void Meniu::adaugaRestaurant(Restaurant* r) { restaurante.push_back(r); }
void Meniu::adaugaComanda(Comanda* c) { comenzi.push_back(c); }
void Meniu::adaugaRecenzie(Evaluare* e) { recenzii.push_back(e); }


// meniu principal
void Meniu::startMeniu() {
    int optiune;
    do {
        std::cout << "\nMENIU PRINCIPAL\n";
        std::cout << "1. adauga\n";
        std::cout << "2. modifica\n";
        std::cout << "3. sterge\n";
        std::cout << "4. afiseaza\n";
        std::cout << "0. iesire\n";
        std::cout << "alege o optiune: ";

        std::cin >> optiune;

        std::cout<< "\n";
        switch (optiune) {
            case 1: meniuAdauga(); break;
            case 2: meniuModifica(); break;
            case 3: meniuSterge();   break;
            case 4: meniuAfiseaza(); break;
            case 0: std::cout << "va multumim ca ati folosit platforma noastra!\n"; break;
            default: std::cout << "optiune invalida!\n";
        }
    } while (optiune != 0);
}

// adauga
void Meniu::meniuAdauga() {
    std::cout << "ce doriti sa adaugati?\n";
    std::cout << "1. client\n";
    std::cout << "2. curier\n";
    std::cout << "3. restaurant\n";
    std::cout << "alege: ";

    int opt;
    std::cin >> opt;
    std::cout << "\n";

    if (opt == 1) {
        std::string nume, telefon, adresa;
        std::cin.ignore();
        std::cout << "nume: ";
        std::getline(std::cin, nume);
        std::cout << "telefon: ";
        std::getline(std::cin, telefon);
        std::cout << "adresa livrare: "; 
        std::getline(std::cin, adresa);
        utilizatori.push_back(new Client(nume, telefon, adresa));
        std::cout << "client adaugat!\n";
    }
    else if (opt == 2) {
        std::string nume, telefon, vehicul;
        std::cin.ignore();
        std::cout << "nume: ";    
        std::getline(std::cin, nume);
        std::cout << "telefon: "; 
        std::getline(std::cin, telefon);
        std::cout << "vehicul: "; 
        std::getline(std::cin, vehicul);
        utilizatori.push_back(new Curier(nume, telefon, vehicul));
        std::cout << "curier adaugat!\n";
    }
    else if (opt == 3) {
        std::string nume, adresa;
        std::cin.ignore();
        std::cout << "nume restaurant: "; 
        std::getline(std::cin, nume);
        std::cout << "adresa: ";          
        std::getline(std::cin, adresa);
        restaurante.push_back(new Restaurant(nume, adresa));
        std::cout << "restaurant adaugat!\n";
    }
    else {
        std::cout << "optiune invalida!\n";
    }
}

// modifica
void Meniu::meniuModifica() {
    std::cout << "ce doriti sa modificati?\n";
    std::cout << "1. adresa client\n";
    std::cout << "alege: ";
 
    int opt; 
    std::cin >> opt;
    std::cout << "\n";
 
    if (opt == 1) {
        std::vector<Client*> clienti;
        for (Utilizator* u : utilizatori)
            if (Client* c = dynamic_cast<Client*>(u)) 
                clienti.push_back(c);
 
        if (clienti.empty()) { 
            std::cout << "nu exista clienti!\n"; return;
        }
 
        for (int i = 0; i < (int)clienti.size(); i++) { 
            std::cout << " " << i << ". "; clienti[i]->afisare(); 
        }
 
        int idx; 
        std::cout << "selecteaza client (index): "; 
        std::cin >> idx;
        if (idx < 0 || idx >= (int)clienti.size()) { 
            std::cout << "Index invalid!\n"; return; 
        }
 
        std::string adresaNoua;
        std::cin.ignore();
        std::cout << "adresa noua: "; 
        std::getline(std::cin, adresaNoua);
        clienti[idx]->setAdresaLivrare(adresaNoua);
        std::cout << "adresa actualizata!\n";
    }
    else {
        std::cout << "optiune invalida!\n";
    }
}

// sterge
void Meniu::meniuSterge() {
    std::cout << "ce doriti sa stergeti?\n";
    std::cout << "1. utilizator\n";
    std::cout << "2. restaurant\n";
    std::cout << "alege: ";
 
    int opt; 
    std::cin >> opt;
    std::cout << "\n";
 
    if (opt == 1) {
        if (utilizatori.empty()) { 
            std::cout << "nu exista utilizatori!\n"; 
            return; 
        }
 
        for (int i = 0; i < (int)utilizatori.size(); i++) { 
            std::cout << " " << i << ". "; 
            utilizatori[i]->afisare(); 
        }
 
        int idx; 
        std::cout << "selecteaza utilizatorul de sters (index): "; 
        std::cin >> idx;
        if (idx < 0 || idx >= (int)utilizatori.size()) { 
            std::cout << "Index invalid!\n"; 
            return;
        }
 
        delete utilizatori[idx];
        utilizatori.erase(utilizatori.begin() + idx);
        std::cout << "utilizator sters!\n";
    }
    else if (opt == 2) {
        if (restaurante.empty()) { 
            std::cout << "nu exista restaurante!\n"; 
            return; 
        }
 
        for (int i = 0; i < (int)restaurante.size(); i++)
            std::cout << " " << i << ". " << restaurante[i]->getNume() << "\n";
 
        int idx; 
        std::cout << "selecteaza restaurantul de sters (index): "; 
        std::cin >> idx;
        if (idx < 0 || idx >= (int)restaurante.size()) { 
            std::cout << "Index invalid!\n"; 
            return; 
        }
 
        delete restaurante[idx];
        restaurante.erase(restaurante.begin() + idx);
        std::cout << "restaurant sters!\n";
    }
    else {
        std::cout << "optiune invalida!\n";
    }
}

// afisare
void Meniu::meniuAfiseaza() {
    std::cout << "ce doriti sa afisati?\n";
    std::cout << "1. utilizatori\n";
    std::cout << "2. restaurante\n";
    std::cout << "3. comenzi\n";
    std::cout << "4. recenzii\n";
    std::cout << "alege: ";
 
    int opt; 
    std::cin >> opt;
    std::cout << "\n";
 
    if (opt == 1) {
        if (utilizatori.empty()) { 
            std::cout << "nu exista utilizatori!\n"; 
            return; 
        }
        std::cout << "UTILIZATORI:\n";
        for (const Utilizator* u : utilizatori) std::cout << *u;
    }
    else if (opt == 2) {
        if (restaurante.empty()) { 
            std::cout << "nu exista restaurante!\n"; 
            return; 
        }
        std::cout << "RESTAURANTE:\n";
        for (const Restaurant* r : restaurante) r->afisare();
    }
    else if (opt == 3) {
        if (comenzi.empty()) { 
            std::cout << "nu exista comenzi!\n"; 
            return; 
        }
        std::cout << "COMENZI:\n";
        for (const Comanda* c : comenzi) c->afisare();
    }
    else if (opt == 4) {
        if (recenzii.empty()) { 
            std::cout << "nu exista recenzii!\n"; 
            return; 
        }
        std::cout << "RECENZII:\n";
        for (const Evaluare* e : recenzii) e->afisare();
    }
    else {
        std::cout << "optiune invalida!\n";
    }
}