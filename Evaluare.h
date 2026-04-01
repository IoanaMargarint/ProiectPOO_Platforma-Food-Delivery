#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class ExceptieNotaInvalida : public std::invalid_argument {
public:
    ExceptieNotaInvalida() :std::invalid_argument("eroare: nota trebuie sa fie intre 1 si 5!") {}
};

class Evaluare {
protected:
    int nota;
    std::string mesaj;

public:
    Evaluare(int nota, const std::string& mesaj);
    virtual ~Evaluare();

    // functie virtuala pura
    virtual void afisare() const = 0;

    // getter pt nota
    int getNota() const { return nota; }
};
