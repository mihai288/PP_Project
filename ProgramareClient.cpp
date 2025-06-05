#include "ProgramareClient.h"
#include <iostream>

ProgramareClient::ProgramareClient(Masina& m, Serviciu* s, std::string d, std::string o)
    : masina(m), serviciu(s), data(d), ora(o) {}

ProgramareClient::~ProgramareClient() {
    delete serviciu; // Deallocate the dynamically allocated service object
}

void ProgramareClient::afiseazaDetaliiProgramare() const {
    std::cout << "--- Detalii Programare --- " << std::endl;
    std::cout << "Data: " << data << ", Ora: " << ora << std::endl;
    std::cout << "Masina: " << masina.Marca << " " << masina.Model << " (ID: " << masina.IDMasina << ")" << std::endl;
    std::cout << "Tip Serviciu: " << serviciu->getTipServiciu() << std::endl;
    serviciu->executa(); // Execute the service for demonstration
    std::cout << "---------------------------" << std::endl;
}
