//
// Created by Simona on 12/9/2022.
//

#include "Angajat.h"
#include "iostream"
#include <utility>

Angajat::Angajat(std::string nume, std::string dataAngajare, std::string titluJob, int varsta , int idManager) : nume(std::move(nume)),dataAngajare(std::move(dataAngajare)), titluJob(std::move(titluJob)) ,varsta(varsta),idManager(idManager) {}
Angajat::Angajat() : nume("nedefinit"), dataAngajare("##/##/####"), titluJob("nedefinit"), varsta(-1), idManager(-1) {}
Angajat::Angajat(const Angajat &rhs)
{
    nume = rhs.nume;
    dataAngajare = rhs.dataAngajare;
    titluJob = rhs.titluJob;
    varsta = rhs.varsta;
    idManager = rhs.idManager;
}
std::string Angajat::getNume() const
{
    return nume;
}
std::string Angajat::getDataAngajare() const
{
    return dataAngajare;
}
std::string Angajat::getTitluJob() const
{
    return titluJob;
}
int Angajat::getVarsta() const
{
    return varsta;
}
int Angajat::getIdManager() const
{
    return idManager;
}
Angajat& Angajat::operator=(const Angajat &rhs){
    nume = rhs.nume;
    dataAngajare = rhs.dataAngajare;
    titluJob = rhs.titluJob;
    varsta = rhs.varsta;
    idManager = rhs.idManager;
    return *this;
}

void Angajat::setNume(std::string _nume) {
    nume = _nume;
}

void Angajat::setDataAngajare(std::string _data) {
    dataAngajare = _data;
}

void Angajat::setTitluJob(std::string _titluJob) {
    titluJob = _titluJob;
}

void Angajat::setVarsta(int _varsta) {
    varsta = _varsta;
}

void Angajat::setIdManager(int _id) {
    idManager =_id;
}

void Angajat::printAngajat() const {
    std::cout<<"Numele angajatului este "<<nume<<std::endl<<"Data angajarii este: "<<dataAngajare<<std::endl<<"Titlul jobului angajatului este "<<titluJob<<std::endl<<"Varsta angajatului este "<<varsta<<std::endl<<"Id-ul managerelui al acestui angajat este "<<idManager<<std::endl;
}
Angajat::~Angajat(){}

std::istream &operator>>(std::istream &is, Angajat &rhs) {
    std::cout<<"Numele angajatului este "<<std::endl;
    std::getline(is,rhs.nume);
    std::cout<<"Titlul jobului angajatului este "<<std::endl;
    std::getline(is,rhs.titluJob);
    std::cout<<"Data angajarii este: "<<std::endl;
    is>>rhs.dataAngajare;
    std::cout<<"Varsta angajatului este "<<std::endl;
    is>>rhs.varsta;
    std::cout<<"Id-ul de manager al angajatului este "<<std::endl;
    is>>rhs.idManager;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "Numele angajatului este  " << angajat.nume <<std::endl<< " Titlul jobului angajatului este  " << angajat.titluJob<<std::endl << "Data angajarii este:   " << angajat.dataAngajare<<std::endl<< "Varsta angajatului este  " << angajat.varsta <<std::endl<< " idManager: " << angajat.idManager;
    return os;
}
