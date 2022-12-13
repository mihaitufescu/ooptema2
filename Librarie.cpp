
#include "Librarie.h"
#include <iostream>
#include <utility>
#include "string"
#include "cstring"


[[maybe_unused]] Librarie::Librarie(int newSize) : sizeOfLibrary(newSize) {}
Librarie::Librarie() : sizeOfLibrary(0) {}

[[maybe_unused]] int Librarie:: getSizeOfLibrary() const
{
    return sizeOfLibrary;
}
void Librarie::setSizeOfLibrary(const int n)
{
    sizeOfLibrary = n;
}
bool Librarie::addBook(std::shared_ptr<Carte> c)
{
    listaCarti.push_back(static_cast<const std::shared_ptr<Carte>>(std::move(c)));

    return true;
}
std::ostream &operator<<(std::ostream  &os, const Librarie& rhs)
{
    for (auto i = 0; i< rhs.sizeOfLibrary; i++) {
        os <<  *rhs.listaCarti[i] << std::endl;
    }
    return os;
}
std::string convertToUpperCase (std::string text)
{
    for(char & i : text)
        if(!(i>='A' && i<='Z'))
            i -= 'a'- 'A';


    return text;
}
void Librarie::findBook (std::string textToSearch)
{
    std::string tempTextToSearch = convertToUpperCase(std::move(textToSearch));
    bool found = false;
    for (auto i = 0; i< sizeOfLibrary; i++)
    {
        if(strcmp(convertToUpperCase(listaCarti[i]->getNumeCarte()).c_str(), tempTextToSearch.c_str()) == 0) {
            std::cout << *listaCarti[i];
            found = true;
        }

    }
    if(!found)
        std::cout<<"Nicio carte cu acest titlu nu a fost gasita!\n";
}
Librarie::~Librarie()
{
    listaCarti.clear();
}

void Librarie::printLibrary() {
    for(auto iterator= 0; iterator<sizeOfLibrary;iterator++)
        std::cout<<*listaCarti[iterator]<<std::endl;
    std::cout<<"--------------------------------------------------"<<std::endl;
}
