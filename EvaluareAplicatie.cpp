#include"EvaluareAplicatie.h"

EvaluareAplicatie::EvaluareAplicatie(int nota, std::string mesaj, bool IntampinareErori) : Evaluare(nota, mesaj), IntampinareErori(IntampinareErori) {}

EvaluareAplicatie::~EvaluareAplicatie() {}

void EvaluareAplicatie::afisare() const {
    std::cout << "-->review aplicatie:\n";
    std::cout << "nota: "<< nota << "/5\n";
    std::cout << "-->a intampinat erori tehnice: " << (IntampinareErori ? "da" : "nu") << "\n";
    std::cout << "mesaj: " << mesaj << "\n";
}