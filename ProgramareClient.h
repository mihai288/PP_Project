
#ifndef PROGRAMARECLIENT_H
#define PROGRAMARECLIENT_H

#include <string>
#include <iostream>

#include "Serviciu.h"
#include "Masina.h"

using namespace std;
class ProgramareClient {
    string NumeProprietar;
    int IDMasina;
    string an;
    string luna;
    string zi;
    string ora;
    Serviciu serviciu;

public:
    ProgramareClient(string an, string luna, string zi, string ora, int IDMasina, const Masina& masina, const Serviciu& serviciu);
    bool verificareData(string an);

};



#endif //PROGRAMARECLIENT_H
