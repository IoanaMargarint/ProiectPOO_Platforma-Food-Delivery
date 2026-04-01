#include"EvaluarePreparat.h"

EvaluarePreparat::EvaluarePreparat(int nota, std::string mesaj, std::string numeRestaurant, bool mancareCalda, std::string numeProdus) 
    : Evaluare(nota, mesaj), EvaluareRestaurant(nota, mesaj, numeRestaurant, mancareCalda), numeProdus(numeProdus) {}

EvaluarePreparat::~EvaluarePreparat() {}

void EvaluarePreparat::afisare() const {
    std::cout << " review preparat: "<< numeProdus << " de la " << numeRestaurant << "\n";
    std::cout << "nota: "<< nota << "/5\n";
    std::cout << "mancare calda: " << (mancareCalda ? "da" : "nu") << "\n";
    std::cout << "mesaj: " << mesaj << "\n";
}
