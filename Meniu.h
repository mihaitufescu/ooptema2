
#ifndef ANGAJAT_CPP_MENIU_H
#define ANGAJAT_CPP_MENIU_H
#include "Librarie.h"
#include "Angajat.h"

class Meniu {
    int module;
public:
    explicit Meniu(int _module);
    Meniu();
    [[nodiscard]] int getModule() const;
    void setModule(int _module);
    void afisareComenzi();
    ~Meniu();

};


#endif //ANGAJAT_CPP_MENIU_H
