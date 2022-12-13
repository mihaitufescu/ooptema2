//
// Created by Simona on 12/12/2022.
//

#include "ManagementAngajati.h"
#include <iostream>
#include <utility>

int ManagementAngajati::numarAngajati = 0;
ManagementAngajati::ManagementAngajati(int _id) : id_locatie(_id) {}
ManagementAngajati::ManagementAngajati() : id_locatie(0) {}

[[maybe_unused]] int ManagementAngajati::getIdLocatie() const {
    return id_locatie;
}

[[maybe_unused]] void ManagementAngajati::setIdLocatie(int _id) {
    id_locatie = _id;
}

bool ManagementAngajati::addAngajat(std::shared_ptr<Angajat> angajat) {
    listAngajati.push_back(static_cast<std::shared_ptr<Angajat>>(std::move(angajat)));
    numarAngajati++;
    return true;
}

void ManagementAngajati::printListaAngajati() const {
    for(int i=0;i<numarAngajati;i++)
    {
        listAngajati[i]->printAngajat();
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const ManagementAngajati &angajati) {
    os << "Id locatie: " << angajati.id_locatie<<std::endl;
    return os;
}

[[maybe_unused]] int ManagementAngajati::getNumarAngajati() {
    return numarAngajati;
}

