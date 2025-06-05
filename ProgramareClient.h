#ifndef PROGRAMARE_CLIENT_H
#define PROGRAMARE_CLIENT_H

#include "Masina.h"
#include "Serviciu.h"
#include <string>

class ProgramareClient {
private:
    Masina& masina;
    Serviciu* serviciu;
    std::string data;
    std::string ora;

public:
    ProgramareClient(Masina& m, Serviciu* s, std::string d, std::string o);
    ~ProgramareClient(); // Destructor to handle dynamic memory for Serviciu*

    void afiseazaDetaliiProgramare() const;
};

#endif // PROGRAMARE_CLIENT_H
