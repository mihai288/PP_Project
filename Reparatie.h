#ifndef REPARATIE_H
#define REPARATIE_H

#include "Serviciu.h"
#include "Piesa.h"
#include <vector>
#include <string>
#include <iostream>

class Reparatie : public Serviciu {
private:
    std::vector<Piesa> pieseAdaugate;

public:
    Reparatie();
    void adaugaPiesa(const Piesa& piesa);
    void executa() override;
    std::string getTipServiciu() const override;
};

#endif // REPARATIE_H 