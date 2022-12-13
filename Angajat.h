
#ifndef MAIN_CPP_ANGAJAT_H
#define MAIN_CPP_ANGAJAT_H

#include <ostream>
#include "string"


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
    std::string getNume() const;
    std::string getDataAngajare() const;
    std::string getTitluJob() const;
    int getVarsta() const;
    int getIdManager() const;
    void setNume(std::string _nume);
    void setDataAngajare(std::string _data);
    void setTitluJob(std::string _titluJob);
    void setVarsta(int _varsta);
    void setIdManager(int _id);
    virtual void printAngajat() const;
    Angajat& operator=(const Angajat& rhs);
    friend std::istream &operator>>(std::istream &is, Angajat &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

    virtual ~Angajat();


};


#endif //MAIN_CPP_ANGAJAT_H
