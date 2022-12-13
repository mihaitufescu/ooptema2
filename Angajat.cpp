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

[[maybe_unused]] std::string Angajat::getNume() const
{
    return nume;
}

[[maybe_unused]] [[maybe_unused]] std::string Angajat::getDataAngajare() const
{
    return dataAngajare;
}
[[maybe_unused]] std::string Angajat::getTitluJob() const
{
    return titluJob;
}
[[maybe_unused]] int Angajat::getVarsta() const
{
    return varsta;
}
[[maybe_unused]] int Angajat::getIdManager() const
{
    return idManager;
}
Angajat& Angajat::operator=(const Angajat &rhs)= default;

[[maybe_unused]] void Angajat::setNume(std::string _nume) {
    nume = std::move(_nume);
}

[[maybe_unused]] void Angajat::setDataAngajare(std::string _data) {
    const char *copie = _data.c_str();
    if((copie[0]<'0' || copie[0]>'9') || (copie[1]<'0' || copie[1]>'9') || copie[2]!='/' || (copie[3]<'0' || copie[3]>'9') || (copie[4]<'0' || copie[4]>'9') || copie[5]!= '/' || (copie[6]<'0' || copie[6]>'9') || (copie[7]<'0' || copie[7]>'9') || (copie[8]<'0' || copie[8]>'9') || (copie[9]<'0' || copie[9]>'9'))
        throw ErorareFormatareData();

    dataAngajare = std::move(_data);
}

[[maybe_unused]] void Angajat::setTitluJob(std::string _titluJob) {
    titluJob = std::move(_titluJob);
}

[[maybe_unused]] void Angajat::setVarsta(int _varsta) {
    varsta = _varsta;
}

void Angajat::setIdManager(int _id) {
    idManager =_id;
}

void Angajat::printAngajat() const {
    std::cout<<"Numele angajatului este "<<nume<<std::endl<<"Data angajarii este: "<<dataAngajare<<std::endl<<"Titlul jobului angajatului este "<<titluJob<<std::endl<<"Varsta angajatului este "<<varsta<<std::endl<<"Id-ul managerelui al acestui angajat este "<<idManager<<std::endl;
}
Angajat::~Angajat()= default;

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
