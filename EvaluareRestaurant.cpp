#include "EvaluareRestaurant.h"

EvaluareRestaurant::EvaluareRestaurant(int nota, std::string mesaj, std::string numeRestaurant, bool mancareCalda) : Evaluare(nota, mesaj), numeRestaurant(numeRestaurant), mancareCalda(mancareCalda) {}

EvaluareRestaurant::~EvaluareRestaurant() {}

void EvaluareRestaurant::afisare() const {
    std::cout << " review restaurant: " << numeRestaurant << "\n";
    std::cout << "nota generala: " << nota << "/5\n";
    std::cout << "mancare calda la sosire: " << (mancareCalda ? "da" : "nu") << "\n";
    std::cout << "mesaj client: " << mesaj << "\n"; 
}