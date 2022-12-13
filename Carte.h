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

    [[maybe_unused]] void print() const;

    [[nodiscard]] std::string getNumeCarte() const;

    [[maybe_unused]] [[nodiscard]] std::string getAutor() const;

    [[maybe_unused]] [[nodiscard]] std::string getEditura() const;

    [[maybe_unused]] [[nodiscard]] int getAnPublicatie() const;

    [[maybe_unused]] [[nodiscard]] int getNumarPagini() const;

    [[maybe_unused]] void setNumeCarte(std::string _numeCarte);

    [[maybe_unused]] void setAutor(std::string _autor);

    [[maybe_unused]] void setEditura(std::string _editura);

    [[maybe_unused]] void setAnPublicatie(int _anPublicatie);

    [[maybe_unused]] void setNumarPagini(int _numarPagini);

    friend std::istream &operator>>(std::istream &is, Carte &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Carte &rhs);

    Carte &operator=(const Carte &rhs);

    ~Carte();

};
#endif //TEMA2_CARTE_H
