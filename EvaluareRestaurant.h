#pragma once
#include "Evaluare.h"

class EvaluareRestaurant : virtual public Evaluare {
protected:
    std::string numeRestaurant;
    bool mancareCalda;

public:
    EvaluareRestaurant(int nota, const std::string& mesaj, const std::string& numeRestaurant, bool mancareCalda);

    ~EvaluareRestaurant() override;

    // suprascriem functia pur virtuala
    void afisare() const override;
};
