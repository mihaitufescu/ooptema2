#include <iostream>
#include "Carte.h"
#include "string"
#include "Librarie.h"
#include "Meniu.h"
#include "ManagementAngajati.h"
#include "memory"
#include "Angajat.h"
#include "Manager.h"
#include "ErorareFormatareData.h"

using namespace  std;
int main() {
    shared_ptr<Carte> c1 = make_shared<Carte>("Baltagul","Mihail Sadoveanu","Corint",1920,400);
    shared_ptr<Carte> c2= make_shared<Carte>("Moara cu noroc", "Ioan Slavici", "Libraria veche", 1920, 200);
    Librarie l1;
    l1.setSizeOfLibrary(2);
    l1.addBook(c1);
    l1.addBook(c2);
    shared_ptr<Angajat> a1 = make_shared<Angajat>("Mihai T","12/02/2020","CEO",20,0);
    try{
        a1->setDataAngajare("13/45/4233");
        cout<<"Adaugare efectuata!"<<endl;
    }
    catch(const ErorareFormatareData &e) {
        cout<<e.what();
        cout<<endl;
    }
    shared_ptr<ManagementAngajati> m1 = make_shared<ManagementAngajati>(123);
    m1->addAngajat(a1);
    shared_ptr<Manager> man1 = make_shared<Manager>("Mihai T","12/02/2020","CEO",20,0,20,20);
    man1->setIdManager(0);
    m1->addAngajat(dynamic_pointer_cast<Angajat>(man1));
    unique_ptr<Meniu> Menu= make_unique<Meniu>();
    while(Menu->getModule() != 4) {
        Menu->afisareComenzi();
        int module=Menu->getModule();
        switch(module)
        {
            case 1: {
                l1.printLibrary();
                break;
            }
            case 2: {
                string tempString;
                cin.get();
                getline(cin,tempString);
                l1.findBook(tempString);
                break;
            }
            case 3: {
                m1->printListaAngajati();
                break;
            }
            default:
                break;

        }


    }
    Menu->setModule(0);


    return 0;


    //de lucrat  cu throw catch pe seturi
}
//SFML pt grafica