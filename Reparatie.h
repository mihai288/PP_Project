//
// Created by Mihai on 6/2/2025.
//

#ifndef REPARATIE_H
#define REPARATIE_H

#include <vector>
#include "Piesa.h"
class Reparatie {
    double pretPeOra;
    vector<Piesa> piese;


public:
    double costManopera() const;
    double costPiese() const;
    double costTotal() const;
    Reparatie(double pretPeOra, const vector<Piesa>& piese);

};




#endif //REPARATIE_H
