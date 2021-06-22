#include <fstream>
#include "tablica_class.h"
#include <string>
///@file

using namespace std;

void zapisz_arkusz(arkusz zapisz)
{
    std::ofstream plik("zapisztablice.txt");
    if (plik.good())
    {
        plik << zapisz.getszerokosc() << std::endl;
        plik << zapisz.getwysokosc() << std::endl;
        for (int i = 0; i < zapisz.getszerokosc(); i++)
        {
            plik << zapisz.gettyp(i) << "\t";
        }
        plik << std::endl;
        for (int i = 0; i < zapisz.getwysokosc(); i++)
        {
            for (int j = 0; j < zapisz.getszerokosc(); j++)
            {
                string wynik = "";
                wynik = (zapisz.uzyskaj_komorke(j, i)->uzyskaj_war());

                plik << wynik << "\t";
            }
            plik << std::endl;
        }

        plik.close();
    }
};

void wczytaj_arkusz(arkusz *wczytaj)
{
    int szerokosc;
    int wysokosc;
    ifstream plik("zapisztablice.txt");
    if (plik.good())
    {
        plik >> szerokosc >> wysokosc;
        bool *tablica = new bool[szerokosc];
        for (int i = 0; i < szerokosc; i++)
        {
            int temp;
            plik >> temp;
            if (temp)
            {
                tablica[i] = true;
            }
            else
            {
                tablica[i] = false;
            }
        }
        wczytaj->tworzenie_arkusza(tablica, szerokosc, wysokosc);

        for (int i = 0; i < wczytaj->getwysokosc(); i++)
        {
            for (int j = 0; j < wczytaj->getszerokosc(); j++)
            {

                string temp;

                plik >> temp;
                (*wczytaj).uzyskaj_komorke(j, i)->dodaj_war(temp);

                plik.clear();
                plik.ignore(1000, '\t');
            }
        }
    }
};