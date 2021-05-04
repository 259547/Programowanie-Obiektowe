#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void zapisanie_do_pliku(int **tablica, int *x, int *y)
{

    fstream plik("zapisztablice.txt", ios::out);
    if (plik.good() == true)
    {
        for (int i = 0; i < *y; i++)
        {
            for (int j = 0; j < *x; j++)
            {
                cout << tablica[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

//pamięć zbuforowana ląduje do pliku

void wczytywanie(int ***tablica, int *x, int *y)
{
    ifstream wczytanie;
    wczytanie.open("zapisztablice.txt");


if (wczytanie.good())
{
    int rozmiarX;
    int rozmiarY;
    wczytanie>>rozmiarX;
    wczytanie>>rozmiarY;
    int **nowatablica;
    if (rozmiarX < 1 || rozmiarY < 1)
    {
        return;
    }
}
//otwiera arkusz z chwilowo wypisaną wcześniej tablicą
//wczytuje tablice
}