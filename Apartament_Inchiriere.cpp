#include "Apartament_Inchiriere.h"
#include <iostream>
#include <string>

using namespace std;

Apartament_Inchiriere::Apartament_Inchiriere(const int &pret, const string &info, const int &nr_cam, const int &nr_fac, const string *fac, const char *i, const int &val):pret_luna(pret), info_contract(info), Apartament(nr_cam, nr_fac, fac, i, val) {}

void Apartament_Inchiriere::afisare() {
    Apartament::afisare();
    cout << "\nApartament_Inchiriere [ pret_luna / info_contract ]: " << pret_luna << ' ' << info_contract;
}

Apartament_Inchiriere::Apartament_Inchiriere():pret_luna(0), info_contract("-") {}

int Apartament_Inchiriere::get_pret_luna() {
    return pret_luna;
}
