#pragma once
#include "Evaluare.h"

class EvaluareCurier : virtual public Evaluare {
protected:
    std::string numeCurier;
    int timpLivrareMinute;

public:
    EvaluareCurier(int nota, const std::string& mesaj, const std::string& numeCurier, int timpLivrareMinute);

    ~EvaluareCurier() override;

    // suprascriem functia pur virtuala
    void afisare() const override;
};
