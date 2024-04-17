#pragma once

class Proprietate{
    protected: 
        char id[4];
        int valoare;

    public:
        Proprietate();
        Proprietate(const char *, const int &);
        
        void afisare();
        
        int get_valoare();
};
