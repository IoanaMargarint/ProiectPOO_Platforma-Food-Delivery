#include "EvaluareCurier.h"

EvaluareCurier::EvaluareCurier(int nota, const std::string& mesaj, const std::string& numeCurier, int timpLivrareMinute) : Evaluare(nota, mesaj), numeCurier(numeCurier), timpLivrareMinute(timpLivrareMinute) {}

EvaluareCurier::~EvaluareCurier() {}

void EvaluareCurier::afisare() const {
    std::cout << " review curier: " << numeCurier << "\n";
    std::cout << "nota generala: " << nota << "/5\n";
    std::cout << "timp livrare: " << timpLivrareMinute << " minute\n";
    std::cout << "mesaj client: " << mesaj << "\n"; 
}
