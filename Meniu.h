
#ifndef ANGAJAT_CPP_MENIU_H
#define ANGAJAT_CPP_MENIU_H
#include "Librarie.h"
#include "Angajat.h"

class Meniu {
    int module;
public:
    Meniu(const int _module);
    Meniu();
    int getModule() const;
    void setModule(int module);
    void afisareComenzi();
    ~Meniu();

};


#endif //ANGAJAT_CPP_MENIU_H
