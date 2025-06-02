//
// Created by Mihai on 6/2/2025.
//

#include "ProgramareClient.h"
#include "Masina.h"

ProgramareClient::ProgramareClient(string an, string luna, string zi, string ora,string tipProgramare, int IDMasina, const Masina& masina, const Reparatie& reparatie)
    : NumeProprietar(masina.getNumeProprietar()), an(an), luna(luna), zi(zi), ora(ora), IDMasina(IDMasina), reparatie(reparatie), tipProgramare(tipProgramare) {}

bool ProgramareClient::verificareData(string an) {
    int anInt = stoi(an);
    return anInt != 2025;
}

