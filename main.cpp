#include <iostream>
#include <vector>
#include <memory>

#include "Masina.h"
#include "Tuning.h"
#include "Reparatie.h"
#include "ProgramareClient.h"
#include "Piesa.h"

int main() {
    // Create Masini
    Masina masina1(1, 2000, 150, "Benzina", "BMW", "X5", 2018, "B01ABC", "Ion Popescu");
    Masina masina2(2, 1600, 110, "Diesel", "Audi", "A3", 2020, "CJ02XYZ", "Ana Maria");

    std::cout << "Detalii initiale masina1:" << std::endl;
    masina1.afiseazaDetalii();
    std::cout << std::endl;

    // Create Servicii and Programari
    // Programare Tuning
    Serviciu* tuningService = new Tuning(masina1);
    ProgramareClient programare1(masina1, tuningService, "2023-10-26", "10:00");
    programare1.afiseazaDetaliiProgramare();
    std::cout << std::endl;

    std::cout << "Detalii masina1 dupa tuning:" << std::endl;
    masina1.afiseazaDetalii();
    std::cout << std::endl;

    // Programare Reparatie
    Reparatie* reparatieService = new Reparatie();
    reparatieService->adaugaPiesa(Piesa("Placute de frana", 250.0));
    reparatieService->adaugaPiesa(Piesa("Discuri de frana", 500.0));
    ProgramareClient programare2(masina2, reparatieService, "2023-10-27", "14:30");
    programare2.afiseazaDetaliiProgramare();
    std::cout << std::endl;

    std::cout << "Detalii masina2 (neschimbata de reparatie):" << std::endl;
    masina2.afiseazaDetalii();
    std::cout << std::endl;

    return 0;
}
