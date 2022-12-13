//
// Created by Simona on 12/12/2022.
//

#ifndef ANGAJAT_CPP_MANAGEMENTANGAJATI_H
#define ANGAJAT_CPP_MANAGEMENTANGAJATI_H

#include <ostream>
#include "vector"
#include "memory"
#include "Angajat.h"

class ManagementAngajati {
    static int numarAngajati;
    int id_locatie;
    std::vector<std::shared_ptr<Angajat>> listAngajati = {};
public:
    explicit ManagementAngajati(int _id);
    ManagementAngajati();
    [[maybe_unused]] [[nodiscard]] int getIdLocatie() const;
    [[maybe_unused]] void setIdLocatie(int _id);
    bool addAngajat(std::shared_ptr<Angajat> angajat);
    void printListaAngajati() const;
    friend std::ostream &operator<<(std::ostream &os, const ManagementAngajati &angajati);
    [[maybe_unused]] static int getNumarAngajati();
};


#endif //ANGAJAT_CPP_MANAGEMENTANGAJATI_H
