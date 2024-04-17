#include "Apartament.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Apartament::Apartament(const int &nr_cam, const int &nr_fac, const string *fac, const char *i, const int &val):nr_camere(nr_cam), nr_facilitati(nr_fac), Proprietate(i, val) {
    facilitati = new string[nr_facilitati];

    for(int i = 0; i < nr_fac; i++) {
        facilitati[i] = fac[i];
    }
}   

Apartament& Apartament::operator=(const Apartament &a) {
    nr_camere = a.nr_camere;
    nr_facilitati = a.nr_facilitati;
    
    delete [] facilitati;
    facilitati = new string[nr_facilitati];

    for(int i = 0; i < nr_facilitati; i++) {
        facilitati[i] = a.facilitati[i];
    }

    strcpy(id, a.id);
    valoare = a.valoare;
    return *this;
}

Apartament::Apartament(const Apartament &a){
    facilitati = NULL;
    *this = a;
}

Apartament::~Apartament() {
    if(facilitati != NULL) {
        delete [] facilitati;
    }
}

void Apartament::afisare() {
    Proprietate::afisare();
    cout<<"\nApartament [nr_camere / nr_facilitati / facilitatile]: " << nr_camere << ' ' << nr_facilitati << ": ";
    if(nr_facilitati != 0) 
        for(int i = 0; i < nr_facilitati; i++) {
            cout <<facilitati[i] << ' ';
    }
}

Apartament::Apartament():nr_camere(0), nr_facilitati(0), facilitati(NULL) {}

int Apartament::get_nr_camere() {
    return nr_camere;
}