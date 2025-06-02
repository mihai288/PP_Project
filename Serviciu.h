//
// Created by Mihai on 6/2/2025.
//

#ifndef REPARATIE_H
#define REPARATIE_H

#include <vector>
#include "Piesa.h"
class Serviciu {
    static const double pretPeOra;
    vector<Piesa> piese;
    string tipServiciu;

public:
    double costManopera() const;
    double costPiese() const;
    double costTotal() const;
    Serviciu(string tipServiciu, const vector<Piesa>& piese);

};






#endif //REPARATIE_H
