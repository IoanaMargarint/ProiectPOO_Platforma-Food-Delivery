#pragma once
#include "EvaluareRestaurant.h"

class EvaluarePreparat : public EvaluareRestaurant {
private:
    std::string numeProdus; 

public:
    EvaluarePreparat(int nota, std::string mesaj, std::string numeRestaurant, bool mancareCalda, std::string numeProdus);
    ~EvaluarePreparat() override;
    
    void afisare() const override;
};