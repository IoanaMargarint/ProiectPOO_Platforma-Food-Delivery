#include <iostream>
#include "Meniu.h"
#include "Client.h"
#include "Curier.h"
#include "Restaurant.h"
#include "Produs.h"
#include "Comanda.h"
#include "EvaluareAplicatie.h"
#include "EvaluareComandaCompleta.h"

int main() {
    Meniu* aplicatie = Meniu::getInstance();

    Client* c1 = new Client("Ana", "0711000000", "Bulevardul Unirii");
    Client* c2 = new Client("Mihai", "0723456789", "Bulevardul Aviatorilor");

    Curier* cr1 = new Curier("Andrei", "0722123456", "bicicleta");
    Curier* cr2 = new Curier("Bogdan", "0733987654", "masina");

    Restaurant* r1 = new Restaurant("Centrale Pizza", "Calea Victoriei");
    r1->adaugaProdus(new Produs("pizza Margherita", 46));
    r1->adaugaProdus(new Produs("pizza Diavola", 53));

    aplicatie->adaugaUtilizator(c1);
    aplicatie->adaugaUtilizator(c2);
    aplicatie->adaugaUtilizator(cr1);
    aplicatie->adaugaUtilizator(cr2);
    aplicatie->adaugaRestaurant(r1);

    Comanda* comanda1 = new Comanda(c1, cr1, r1);
    comanda1->adaugaInCos(new Produs("pizza Margherita", 46));
    comanda1->calculeazaTotal();

    aplicatie->adaugaComanda(comanda1);

    // exceptii
    try {
        EvaluareAplicatie* eval1 = new EvaluareAplicatie(5, "aplicatia merge bine!", false);
        aplicatie->adaugaRecenzie(eval1);

        // recenzie completa
        EvaluareComandaCompleta* eval2 = new EvaluareComandaCompleta(4, "a intarziat mancarea, dar pizza a fost buna", "Centrale Pizza", true, "Andrei", 45, comanda1->getId());
        aplicatie->adaugaRecenzie(eval2);

        // eroare
        EvaluareAplicatie* evalGresit = new EvaluareAplicatie(10, "aplicatia merge bine", true);
        aplicatie->adaugaRecenzie(evalGresit);

    } catch (const std::exception& e) {
        std::cout << "eroare: " << e.what() << "\n\n";
    }

    aplicatie->startMeniu();

    delete aplicatie;

    return 0;
}
