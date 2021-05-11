#include "struktura.h"
#include <iostream>
#include<string>


struct użytkownik{
    std::string tabela;
    std::string kolumny;
    std::string wiersze;
    std::string numertabeli;
    std::string użytkownik;
};

struct program{
    std::string tablica_wysw;
    std::string main;
    std::string wczytywanie;
    std::string zapisanie_do_pliku;
    std::string menu;
};


struct tablica{
    std::string komorka;
    std::string RozmiarX;
    std::string RozmiarY;
    std::string zmiana_komorki;
    std::string bledy_komorki;
};