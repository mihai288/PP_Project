#include "Tuning.h"
#include <iostream>

Tuning::Tuning(Masina& m) : masina(m) {}

void Tuning::executa() {
    // Seed for random number generation
    std::mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<> distrib(25, 50);
    int caiPutereSuplimentari = distrib(gen);

    masina.CaiPutere += caiPutereSuplimentari;
    std::cout << "Tuning efectuat pe masina ID " << masina.IDMasina 
              << ". Cai putere crescuti cu " << caiPutereSuplimentari 
              << ". Noi cai putere: " << masina.CaiPutere << std::endl;
}

std::string Tuning::getTipServiciu() const {
    return "Tuning";
} 