#ifndef PIESA_H
#define PIESA_H

#include <string>

class Piesa {
public:
    std::string Nume;
    double Pret;

    Piesa(std::string nume, double pret);
    void afiseazaDetalii() const;
};

#endif // PIESA_H
