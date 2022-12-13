#ifndef TEMA2_CARTE_H
#define TEMA2_CARTE_H
#include <string>
#include <fstream>
#include "cstring"

class Carte {
    std::string autor;
    std::string editura;
    std::string numeCarte;
    int anPublicatie;
    int numarPagini;
public:
    Carte(std::string numeCarte,std::string autor, std::string editura, int numarPagini, int anPublicatie );

    Carte();

    Carte(const Carte &rhs);

    void print() const;

    const std::string getNumeCarte() const;

    const std::string getAutor() const;

    const std::string getEditura() const;

    int getAnPublicatie() const;

    int getNumarPagini() const;

    void setNumeCarte(std::string _numeCarte);

    void setAutor(std::string _autor);

    void setEditura(std::string _editura);

    void setAnPublicatie(int _anPublicatie);

    void setNumarPagini(int _numarPagini);

    friend std::istream &operator>>(std::istream &is, Carte &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Carte &rhs);

    Carte &operator=(const Carte &rhs);

    ~Carte();

};
#endif //TEMA2_CARTE_H
