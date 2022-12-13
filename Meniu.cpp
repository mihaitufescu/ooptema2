#include "iostream"
#include "Meniu.h"

Meniu::Meniu(int _module) :module(_module){}

Meniu::Meniu() : module(0) {}

void Meniu::afisareComenzi(){
    std::cout<< "Pentru a afisa lista de carti apasati tasta 1"<<std::endl;
    std::cout<< "Pentru a cauta titlul unei carti apasati tasta 2"<<std::endl;
    std::cout<< "Pentru a afisa lista de angajati apasati tasta 3"<<std::endl;
    std::cout<< "Pentru a iesi apasati tasta 4"<<std::endl;
    int _n;
    std::cin>>_n;
    switch (_n){
        case 1:
            Meniu::setModule(1);
            break;
        case 2:
            Meniu::setModule(2);
            break;
        case 3:
            Meniu::setModule(3);
            break;
        case 4:
            Meniu::setModule(4);
            break;
        default:
            Meniu::setModule(0);
            break;
    }
}

int Meniu::getModule() const {
    return module;
}

void Meniu::setModule(int _module) {
    module = _module;
}

Meniu::~Meniu() = default;

