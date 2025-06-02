//
// Created by Mihai on 6/2/2025.
//

#ifndef PROGRAMARECLIENT_H
#define PROGRAMARECLIENT_H

#include <string>
#include <iostream>

#include "Reparatie.h"
#include "Masina.h"

using namespace std;
class ProgramareClient {
    string NumeProprietar;
    int IDMasina;
    string an;
    string luna;
    string zi;
    string ora;
    string tipProgramare;
    Reparatie reparatie;

public:
    ProgramareClient(string an, string luna, string zi, string ora,string tipProgramare, int IDMasina, const Masina& masina, const Reparatie& reparatie);
    bool verificareData(string an);

};



#endif //PROGRAMARECLIENT_H
