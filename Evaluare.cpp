#include "Evaluare.h"

Evaluare::Evaluare(int nota, std::string mesaj) : mesaj(mesaj) {
    if (nota < 1 || nota > 5) {
        throw ExceptieNotaInvalida();
    }
    this->nota = nota;
}

Evaluare::~Evaluare() {}