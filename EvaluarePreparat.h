#pragma once
#include "EvaluareRestaurant.h"

class EvaluarePreparat : public EvaluareRestaurant {
private:
    std::string numeProdus; 

public:
    EvaluarePreparat(int nota, const std::string& mesaj, const std::string& numeRestaurant, bool mancareCalda, const std::string& numeProdus);
    ~EvaluarePreparat() override;
    
    void afisare() const override;
};
