#include "Reparatie.h"
#include <iostream>

Reparatie::Reparatie() {}

void Reparatie::adaugaPiesa(const Piesa& piesa) {
    pieseAdaugate.push_back(piesa);
    std::cout << "Piesa \"" << piesa.Nume << "\" adaugata pentru reparatie." << std::endl;
}

void Reparatie::executa() {
    if (pieseAdaugate.empty()) {
        std::cout << "Nicio piesa adaugata pentru reparatie." << std::endl;
    } else {
        std::cout << "Reparatie efectuata, folosind urmatoarele piese:" << std::endl;
        for (const auto& piesa : pieseAdaugate) {
            piesa.afiseazaDetalii();
        }
    }
}

std::string Reparatie::getTipServiciu() const {
    return "Reparatie";
} 