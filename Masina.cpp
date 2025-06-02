#include "Masina.h"


Masina::Masina(int id, int CapacitateMotor, string Combustibil, string Marca, string Model, int AnFabricatie, string nrInmatriculare, string NumeProprietar, int CaiPutere) :
    IDMasina(id), CapacitateMotor(CapacitateMotor), Combustibil(Combustibil), Marca(Marca), Model(Model), AnFabricatie(AnFabricatie), nrInmatriculare(nrInmatriculare), NumeProprietar(NumeProprietar), CaiPutere(CaiPutere) {}

string Masina::getNumeProprietar() const{
    return NumeProprietar;
}
