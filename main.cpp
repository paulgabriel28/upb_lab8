#include <iostream>
#include <string>
#include "Apartament_Inchiriere.h"

using namespace  std;


void sort_vec_pret_luna(Apartament_Inchiriere *, const int &);
void afisare_apartamente(Apartament_Inchiriere *, const int &);

int main()
{

//    Proprietate p("001", 300);
//    p.afisare();
//    Apartament a;
//    string *fac = new string[2];
//    fac[0] = "metrou";
//    fac[1] = "parcare";
//    a.afisare();
//    Apartament b(3, 2, fac, "001", 300);//.afisare();
//    b.afisare();
//    a = Apartament(3, 2, fac, "001", 300);
//    a.afisare();

    Apartament_Inchiriere *vec;
    int dim;
    cout << "Dimensiune vector: "; cin >> dim;
    vec = new Apartament_Inchiriere[dim];

    for(int i = 0; i < dim; i++) {
        int pret;
        cout << "Pret: "; cin >> pret;

        string info;
        cout << "Informatii Contract: "; cin >> info;

        int nr_cam;
        cout << "Nr. camere: "; cin >> nr_cam;

        int nr_fac;
        cout << "Nr. facilitati: "; cin >> nr_fac;

        string *fac = new string[nr_fac];
        cout << "Facilitatile: \n";
        for(int i = 0; i < nr_fac; i++) {
            cout << "Facilitatea " << i + 1 << ": "; cin >> fac[i];
        }

        char id[5];
        cout << "ID: "; cin >> id;

        int val;
        cout << "Valoare / Luna: "; cin >> val;

        vec[i] = Apartament_Inchiriere(pret, info, nr_cam, nr_fac, fac, id, val);
    }

    cout<<"\nVector sortat [pret lunar]: ";
    sort_vec_pret_luna(vec, dim);
    for(int i = 0; i < dim; i++) {
        vec[i].afisare();
    }
    afisare_apartamente(vec, dim);
    
    return 0;
}


void sort_vec_pret_luna(Apartament_Inchiriere *vec, const int &dim) {
    for(int i = 0; i < dim - 1; i ++) {
        for(int j = i + 1; j < dim; j++) {
            if(vec[i].get_pret_luna() > vec[j].get_pret_luna()) {
                Apartament_Inchiriere temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

void afisare_apartamente(Apartament_Inchiriere *vec, const int &dim) {
    cout << "Apartamente [val < 100.000 | nr_cam = 3 | pret_lunar < 600]: ";
    for(int i = 0; i < dim; i++) {
        if(vec[i].get_valoare() < 100000 && vec[i].get_nr_camere() == 3 && vec[i].get_pret_luna() < 600) {
            vec[i].afisare();
        }
    }
}