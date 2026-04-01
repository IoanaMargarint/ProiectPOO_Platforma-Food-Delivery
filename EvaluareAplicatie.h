#pragma once
#include "Evaluare.h"

class EvaluareAplicatie : public Evaluare {
private:
    bool IntampinareErori; 

public:
    EvaluareAplicatie(int nota, std::string mesaj, bool IntampinareErori);
    ~EvaluareAplicatie() override;
    
    void afisare() const override;
};