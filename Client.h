#pragma once
#include "Utilizator.h"

class Client : public Utilizator {
private:
    std::string adresaLivrare;

public:
    // constructor
    Client(const std::string& nume, const std::string& telefon, const std::string& adresaLivrare);

    ~Client() override;

    void afisare() const override;

    // setter pt modificare adresa
    void setAdresaLivrare(const std::string& adresa) { adresaLivrare = adresa;}
    std::string getAdresaLivrare() const { return adresaLivrare; }
};
