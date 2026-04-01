#pragma once
#include <iostream>
#include <vector>
#include "Produs.h"
#include "Client.h"
#include "Curier.h"
#include "Restaurant.h"

class Comanda {
private:
    static int contorComenzi;
    int idComanda;
    
    Client* client;
    Curier* curier;
    Restaurant* restaurant;

    std::vector<Produs*> cosCumparaturi;
    double pretTotal;

public:
    // constructor
    Comanda(Client* client, Curier* curier, Restaurant* restaurant);

    // destructor
    ~Comanda();

    Comanda(const Comanda&) = delete;
    Comanda& operator=(const Comanda&) = delete;

   void adaugaInCos(Produs* p);
   void calculeazaTotal();
   void afisare() const;

   // getter pt id
   int getId() const { return idComanda; }
};