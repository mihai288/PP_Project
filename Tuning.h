#ifndef TUNING_H
#define TUNING_H

#include "Serviciu.h"
#include "Masina.h"
#include <string>
#include <random>
#include <chrono>

class Tuning : public Serviciu {
private:
    Masina& masina;

public:
    Tuning(Masina& m);
    void executa() override;
    std::string getTipServiciu() const override;
};

#endif // TUNING_H 