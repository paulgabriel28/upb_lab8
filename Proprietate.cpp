#include "Proprietate.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Proprietate::Proprietate(const char *i, const int &val): valoare(val) {
    strcpy(id, i);
}

Proprietate::Proprietate():valoare(0) {
    strcpy(id, "0000");
}


void Proprietate::afisare() {
    cout<<"\nProprietate [id / valoare]: " << id << ' ' << valoare;
}

int Proprietate::get_valoare() {
    return valoare;
}