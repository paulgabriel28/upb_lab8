#pragma once

#include "Apartament.h"
#include <string>

using namespace std;

class Apartament_Inchiriere: public Apartament{
     int pret_luna;
     string info_contract; //ex:Inchiriere_pe_un_an

     public:
          Apartament_Inchiriere();
          Apartament_Inchiriere(const int &, const string &, const int &, const int &, const string *, const char *, const int &);

          void afisare();
          int get_pret_luna();
};
