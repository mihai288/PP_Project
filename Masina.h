

#ifndef MASINA_H
#define MASINA_H


#include <string>
using namespace std;
class Masina {
    int IDMasina;
    int CapacitateMotor;
    int CaiPutere;
    string Combustibil;
    string Marca;
    string Model;
    int AnFabricatie;
    string nrInmatriculare;
    string NumeProprietar;

public:
    Masina(int id, int CapacitateMotor, string Combustibil, string Marca, string Model, int AnFabricatie, string nrInmatriculare, string NumeProprietar,int CaiPutere);
    string getNumeProprietar() const;
    int getCai() const;
    void setCai(const int CaiPutere);
};




#endif //MASINA_H
