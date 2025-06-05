#include "Masina.h"
#include <iostream>

Masina::Masina(int id, int capacitate, int caiPutere, std::string combustibil, std::string marca,
               std::string model, int anFabricatie, std::string nrInmatriculare, std::string numeProprietar)
    : IDMasina(id),
      CapacitateMotor(capacitate),
      CaiPutere(caiPutere),
      Combustibil(combustibil),
      Marca(marca),
      Model(model),
      AnFabricatie(anFabricatie),
      nrInmatriculare(nrInmatriculare),
      NumeProprietar(numeProprietar) {}

void Masina::afiseazaDetalii() const {
    std::cout << "ID Masina: " << IDMasina << std::endl;
    std::cout << "Marca: " << Marca << ", Model: " << Model << " (" << AnFabricatie << ")" << std::endl;
    std::cout << "Nr. Inmatriculare: " << nrInmatriculare << std::endl;
    std::cout << "Proprietar: " << NumeProprietar << std::endl;
    std::cout << "Capacitate Motor: " << CapacitateMotor << "cc, Cai Putere: " << CaiPutere << ", Combustibil: " << Combustibil << std::endl;
}
