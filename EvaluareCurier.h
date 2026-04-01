#pragma once
#include "Evaluare.h"

class EvaluareCurier : virtual public Evaluare {
protected:
    std::string numeCurier;
    int timpLivrareMinute;

public:
    EvaluareCurier(int nota, std::string mesaj, std::string numeCurier, int timpLivrareMinute);

    ~EvaluareCurier() override;

    // suprascriem functia pur virtuala
    void afisare() const override;
};