#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "tablica_class.h"
#include "zapisz_arkusz.h"
#include "zmien_komorke.h"
#include "operacje_mat.h"
#include <fstream>
#include <cstdlib>
///@file
using namespace std;

void wypiszmenu()
{
    cout << "___________________________________________\n \n<<<<<<<<<<< \t TABLICA \t >>>>>>>>>> \n __________________________________________\n";
    cout << "<< \t 1. Stwórz tablice \t \t >> \n";
    cout << "<< \t 2. Wyświetl tablice \t \t >> \n";
    cout << "<< \t 3. Rozszerz tablice \t \t >> \n";
    cout << "<< \t 4. Wczytaj tablice \t \t >> \n";
    cout << "<< \t 5. Zapisz tablice \t \t >> \n";
    cout << "<< \t 6. Zmień komórkę \t \t >> \n";
    cout << "<< \t 7. Mnożenie wartości komórek  \t >> \n";
    cout << "<< \t 8. Minimum \t \t \t >>\n";
    cout << "<< \t 9. Maximum \t \t \t >> \n";
    cout << "<< \t10. Sumowanie kolumn \t \t >> \n";
    cout << "<< \t11. Średnia \t \t \t >> \n";
    cout << "<< \t13. Wyjście z programu \t \t >> \n";
}

void menu()
{

    int x;
    int y;
    arkusz tablica;
    for (;;)
    {

        wypiszmenu();
        cout << " \n >> Co chcesz zrobić? \n >>";
        int i;
        cin >> i;

        switch (i)
        {
        case 1:
        {
            cout << "Podaj ile chcesz kolumn \n >>";
            cin >> x;
            bool *typy = new bool[x];
            cout << "Podaj ile chcesz wierszy \n >>";
            cin >> y;

            for (int i = 0; i < x; i++)
            {
                int temp;
                cout << "Jakiego typu ma być kolumna" << i << " 0 - double, dowlona wartość liczbowa = string \n";
                cin >> temp;
                if (temp)
                {
                    typy[i] = true;
                }
                else
                {
                    typy[i] = false;
                }
            }
            tablica.tworzenie_arkusza(typy, x, y);
            break;
        }
        case 2:
            wyswietltablica(tablica);
            break;

        case 3:
        {
            cout << "Podaj ile chcesz kolumn \n >>";
            cin >> x;
            bool *typy = new bool[x];
            cout << "Podaj ile chcesz wierszy \n >>";
            cin >> y;

            for (int i = 0; i < x; i++)
            {
                int temp;
                cout << "Jakiego typu ma być kolumna" << i << " 0 - double, dowlona wartość liczbowa = string \n";
                cin >> temp;
                if (temp)
                {
                    typy[i] = true;
                }
                else
                {
                    typy[i] = false;
                }
            }
            tablica.tworzenie_arkusza(typy, x, y);
            break;
        }
        case 4:
            wczytaj_arkusz(&tablica);
            break;
        case 5:
            zapisz_arkusz(tablica);
            break;
        case 6:
            zmien_komorke(tablica);
            break;
        case 7:
            mnozenie_arkusza(&tablica);
            break;
        case 8:
            minimum(&tablica);
            break;
        case 9:
            maximum(&tablica);
            break;
        case 10:
            sumowanie_kolumn1(&tablica);
            break;
        case 11:
            srednia1(&tablica);
            break;
        case 12:
        default:
            cout << "\n Nie ma takiej opcji w menu \n";
            exit(0);
        }
    }
}