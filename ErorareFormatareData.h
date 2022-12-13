//
// Created by Simona on 12/13/2022.
//

#ifndef MAIN_CPP_ERORAREFORMATAREDATA_H
#define MAIN_CPP_ERORAREFORMATAREDATA_H
#include "iostream"
#include "string"
#include "Angajat.h"

class ErorareFormatareData : public std::exception{
public:
    ErorareFormatareData() = default;
    const char* what() const noexcept override;
};


#endif //MAIN_CPP_ERORAREFORMATAREDATA_H
