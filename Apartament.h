#pragma once

#include "Proprietate.h"
#include <string>

using namespace std;

class Apartament: public Proprietate{
    protected:
        int nr_camere;
        int nr_facilitati;
        string *facilitati; //ex: parcare, metrou

    public:
        Apartament();
        Apartament(const int &, const int &, const string *, const char *, const int &);
        Apartament(const Apartament &);
        ~Apartament();

        Apartament& operator=(const Apartament &);

        void afisare();

        int get_nr_camere();
};
