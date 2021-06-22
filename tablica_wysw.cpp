#include "tablica_wysw.h"
#include <iostream>
///@file
using namespace std;

void wyswietltablica(arkusz tablica)
{
    cout<<tablica.getwysokosc()<<"x"<< tablica.getszerokosc()<<endl;
    string wynik;
    for (int i = 0; i < tablica.getwysokosc(); i++)
    {
        for (int j = 0; j < tablica.getszerokosc(); j++)
        {
          
            wynik = tablica.uzyskaj_komorke(j,i)->uzyskaj_war();

            
            cout << wynik << "\t";
        }
        cout<< endl;
    }

}