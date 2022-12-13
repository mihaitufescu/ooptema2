
#include "Manager.h"
#include "iostream"
Manager::Manager(std::string nume, std::string dataAngajare, std::string titluJob, int varsta,int _idManager, int _angajati,
                 int _comision) : Angajat(nume, dataAngajare,titluJob,varsta,_idManager) {
    angajatiInSubordine = _angajati;
    comision = _comision;
    idManager=0;
}

Manager::Manager() : Angajat() {
    angajatiInSubordine=0;
    comision=0;
}

void Manager::printAngajat() const {
        std::cout<<"Numele managerului este "<<nume<<std::endl<<"Data managerului este: "<<dataAngajare<<std::endl<<"Titlul jobului managerului este "<<titluJob<<std::endl<<"Varsta managerului este "<<varsta<<std::endl<<"Numarul de angajati in subordine "<<angajatiInSubordine<<std::endl<<"Comisionul este "<<comision<<"Id manager este "<<idManager<<std::endl;
}

int Manager::getAngajatiInSubordine() const {
    return angajatiInSubordine;
}

int Manager::getComision() const {
    return comision;
}

void Manager::setAngajatiInSubordine(int _angajatiInSubordine) {
    Manager::angajatiInSubordine = _angajatiInSubordine;
}

void Manager::setComision(int _comision) {
    Manager::comision = _comision;
}

std::ostream &operator<<(std::ostream &os, const Manager &manager) {
    os << static_cast<const Angajat &>(manager)<<"Id manager"<< manager.idManager<<std::endl << "Numarul de angajati in subordine " << manager.angajatiInSubordine<< "Comisionul este  " << manager.comision;
    return os;
}

Manager::~Manager() {
    std::cout<<"dctr Manager";
}

Manager &Manager::operator=(const Manager &rhs) {
    nume= rhs.nume;
    titluJob =rhs.nume;
    dataAngajare = rhs.dataAngajare;
    varsta = rhs.varsta;
    comision = rhs.comision;
    angajatiInSubordine = rhs.angajatiInSubordine;
    idManager = rhs.idManager;

    return *this;
}







