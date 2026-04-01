#include "EvaluareComandaCompleta.h"

EvaluareComandaCompleta::EvaluareComandaCompleta(int nota, std::string mesaj, 
                                                 std::string numeRestaurant, bool mancareCalda,
                                                 std::string numeCurier, int timpLivrareMinute,
                                                 int idComanda)
    : Evaluare(nota, mesaj),
      EvaluareRestaurant(nota, mesaj, numeRestaurant, mancareCalda),
      EvaluareCurier(nota, mesaj, numeCurier, timpLivrareMinute),
      idComanda(idComanda) {}

EvaluareComandaCompleta::~EvaluareComandaCompleta() {}

void EvaluareComandaCompleta::afisare() const {
    std::cout << "-->review complet pentru comanda #" << idComanda << "\n";
    std::cout << "NOTA GENERALA: " << nota << "/5\n";
    std::cout << "MESAJ: " << mesaj << "\n\n";

    std::cout << "detalii restaurant: " << numeRestaurant << "\n";
    std::cout << " - mancare a ajuns calda? " << (mancareCalda ? "da" : "nu") <<"\n\n";

    std::cout << "detalii curier: " << numeCurier << "\n";
    std::cout << " - timp de livrare "<< timpLivrareMinute << " minute\n";
    
}

   