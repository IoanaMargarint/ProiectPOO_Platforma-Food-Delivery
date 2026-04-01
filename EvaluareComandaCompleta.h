#pragma once
#include "EvaluareRestaurant.h"
#include "EvaluareCurier.h"

class EvaluareComandaCompleta : public EvaluareRestaurant, public EvaluareCurier {
private:
    int idComanda; 

public:
    // constructor
    EvaluareComandaCompleta(int nota, std::string mesaj, 
                            std::string numeRestaurant, bool mancareCalda,
                            std::string numeCurier, int timpLivrareMinute,
                            int idComanda);

    ~EvaluareComandaCompleta() override;

    void afisare() const override;
};