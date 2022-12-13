#include "iostream"
#include "Carte.h"

#include <utility>


Carte::Carte(std::string numeCarte,std::string autor,std::string editura, int numarPagini, int anPublicatie ):  autor(std::move(autor)), editura(std::move(editura)), numeCarte(std::move(numeCarte)), anPublicatie(anPublicatie), numarPagini(numarPagini) {}
Carte::Carte(): autor("nedefinit"), editura("nedefinit"), numeCarte("nedefinit") ,anPublicatie(0) , numarPagini(0) {}

void Carte::print() const
{
    std::cout << "Numele volumului este: " << numeCarte <<std::endl << "Numele autorului este: "<< autor << std::endl << "Numele editurii este: "<< editura <<std::endl<< "Numarul de pagini este: "<< numarPagini<<std::endl<<"Anul publicatiei este: "<<anPublicatie<<std::endl;
}
Carte::Carte(const Carte& rhs)
{
    numeCarte = std::move(rhs.numeCarte);
    autor = std::move(rhs.autor);
    editura = std::move(rhs.editura);
    numarPagini = rhs.numarPagini;
    anPublicatie = rhs.anPublicatie;
}
const std::string Carte::getNumeCarte() const
{
    return numeCarte;
}
const std::string Carte::getAutor() const
{
    return autor;
}
const std::string Carte::getEditura() const
{
    return editura;
}
int Carte::getAnPublicatie() const
{
    return anPublicatie;
}
int Carte::getNumarPagini() const
{
    return numarPagini;
}
void Carte::setNumeCarte(std::string _numeCarte)
{
    this->numeCarte = std::move(_numeCarte);
}
void Carte::setAutor(std::string _autor)
{
    this->autor = std::move(_autor);
}
void Carte::setEditura(std::string _editura)
{
    this->editura = std::move(_editura);
}
void Carte::setAnPublicatie(int _anPublicatie)
{
    this->anPublicatie = _anPublicatie;
}
void Carte::setNumarPagini(int _numarPagini)
{
    this->numarPagini = _numarPagini;
}

std::istream &operator>>(std::istream &is, Carte &rhs)
{
    std::cout<<"Introduceti nume carte"<<std::endl;
    std::getline(is,rhs.numeCarte);
    std::cout<<"Introduceti nume autor"<<std::endl;
    std::getline(is,rhs.autor);
    std::cout<<"Introduceti nume editura"<<std::endl;
    std::getline(is,rhs.editura);
    std::cout<<"Introduceti an publicatie"<<std::endl;
    std::cout<<rhs.anPublicatie<<std::endl;
    std::cout<<"Introduceti nume autor"<<std::endl;
    std::cout<<rhs.numarPagini<<std::endl;

    return  is;
}
std::ostream &operator<<(std::ostream &os, const Carte &rhs)
{
    os << "Numele volumului este: " << rhs.numeCarte <<std::endl << "Numele autorului este: "<< rhs.autor << std::endl << "Numele editurii este: "<< rhs.editura <<std::endl<< "Numarul de pagini este: "<< rhs.numarPagini<<std::endl<<"Anul publicatiei este: "<< rhs.anPublicatie<<std::endl;
    return  os;
}
Carte& Carte::operator=(const Carte &rhs){
    numeCarte = std::move(rhs.numeCarte);
    autor = std::move(rhs.autor);
    editura = std::move(rhs.editura);
    numarPagini = rhs.numarPagini;
    anPublicatie = rhs.anPublicatie;

    return  *this;
}
Carte::~Carte()
{

}