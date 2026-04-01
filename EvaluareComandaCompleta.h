#pragma once
#include "EvaluareRestaurant.h"
#include "EvaluareCurier.h"

class EvaluareComandaCompleta : public EvaluareRestaurant, public EvaluareCurier {
private:
    int idComanda; 

public:
    // constructor
    EvaluareComandaCompleta(int nota, const std::string& mesaj, 
                            const std::string& numeRestaurant, bool mancareCalda,
                            const std::string& numeCurier, int timpLivrareMinute,
                            int idComanda);

    ~EvaluareComandaCompleta() override;

    void afisare() const override;
};
