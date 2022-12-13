
#ifndef MAIN_CPP_LIBRARIE_H
#define MAIN_CPP_LIBRARIE_H
#include "memory"
#include "Carte.h"
#include "vector"
#include "string"

class Librarie {
private:
    int sizeOfLibrary;
    std::vector<std::shared_ptr<Carte>> listaCarti = {};
public:
    Librarie(int newSize);
    Librarie();

    [[maybe_unused]] int getSizeOfLibrary() const;
    void setSizeOfLibrary(const int n);
    bool addBook(std::shared_ptr<Carte> c);
    friend std::ostream &operator<<(std::ostream  &os, const Librarie& rhs);
    void printLibrary();
    void findBook (std::string textToSearch);
    ~Librarie();
};


#endif //MAIN_CPP_LIBRARIE_H
