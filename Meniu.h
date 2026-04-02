#pragma once
#include <iostream>
#include <vector>
#include "Utilizator.h"
#include "Restaurant.h"
#include "Comanda.h"
#include "Evaluare.h"

// modelul singleton
class Meniu {
private:
    static Meniu* instance;

    std::vector<Utilizator*> utilizatori;
    std::vector<Restaurant*> restaurante;
    std::vector<Comanda*> comenzi;
    std::vector<Evaluare*> recenzii;

    Meniu(); // constructor privat

    void meniuAdauga();
    void meniuModifica();
    void meniuSterge();
    void meniuAfiseaza();

public:
    static Meniu* getInstance();

    ~Meniu();

    void adaugaUtilizator(Utilizator* u);
    void adaugaRestaurant(Restaurant* r);
    void adaugaComanda(Comanda* c);
    void adaugaRecenzie(Evaluare* e);

    void startMeniu();
};
