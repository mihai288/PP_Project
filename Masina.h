#ifndef MASINA_H
#define MASINA_H

#include <string>
#include <iostream>

class Masina {
public:
    int IDMasina;
    int CapacitateMotor;
    int CaiPutere;
    std::string Combustibil;
    std::string Marca;
    std::string Model;
    int AnFabricatie;
    std::string nrInmatriculare;
    std::string NumeProprietar;

    Masina(int id, int capacitate, int caiPutere, std::string combustibil, std::string marca,
           std::string model, int anFabricatie, std::string nrInmatriculare, std::string numeProprietar);
    void afiseazaDetalii() const;
};

#endif // MASINA_H
