#include "Piesa.h"
#include <iostream>

Piesa::Piesa(std::string nume, double pret) : Nume(nume), Pret(pret) {}

void Piesa::afiseazaDetalii() const {
    std::cout << "Piesa: " << Nume << ", Pret: " << Pret << " RON" << std::endl;
}
