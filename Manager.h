
#ifndef ANGAJAT_CPP_MANAGER_H
#define ANGAJAT_CPP_MANAGER_H

#include <ostream>
#include "Angajat.h"

class Manager : public Angajat {
    int angajatiInSubordine;
    int comision;
public:
    Manager(std::string nume, std::string dataAngajare, std::string titluJob, int varsta, int _idManager, int _angajati,int _comision);
    Manager();
    void printAngajat() const override;

    [[maybe_unused]] int getAngajatiInSubordine() const;
    int getComision() const;
    void setAngajatiInSubordine(int _angajatiInSubordine);
    void setComision(int _comision);
    friend std::ostream &operator<<(std::ostream &os, const Manager &manager);
    Manager &operator=(const Manager& rhs);
    ~Manager() override;
};


#endif //ANGAJAT_CPP_MANAGER_H
