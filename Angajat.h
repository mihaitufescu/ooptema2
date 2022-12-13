
#ifndef MAIN_CPP_ANGAJAT_H
#define MAIN_CPP_ANGAJAT_H

#include <ostream>
#include "string"
#include "ErorareFormatareData.h"

class Angajat {
protected:
    std::string nume;
    std::string dataAngajare;
    std::string titluJob;
    int varsta;
    int idManager;
public:
    Angajat(std::string nume, std::string dataAngajare, std::string titluJob ,int varsta, int idManager);
    Angajat();
    Angajat(const Angajat &rhs);

    [[maybe_unused]] std::string getNume() const;

    [[maybe_unused]] std::string getDataAngajare() const;
    [[maybe_unused]] std::string getTitluJob() const;
    [[maybe_unused]] int getVarsta() const;
    [[maybe_unused]] int getIdManager() const;
    [[maybe_unused]] void setNume(std::string _nume);
    [[maybe_unused]] void setDataAngajare(std::string _data);
    [[maybe_unused]] void setTitluJob(std::string _titluJob);
    [[maybe_unused]] void setVarsta(int _varsta);
    [[maybe_unused]] void setIdManager(int _id);
    virtual void printAngajat() const;
    Angajat& operator=(const Angajat& rhs);
    friend std::istream &operator>>(std::istream &is, Angajat &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

    virtual ~Angajat();


};


#endif //MAIN_CPP_ANGAJAT_H
