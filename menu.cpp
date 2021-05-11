#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "tablica_class.h"
#include "zapisanie_do_pliku.h"
#include <fstream>

using namespace std;

void wypiszmenu()
{
    cout << "1. Stworz tablice \n";
    cout << "2. Wyświetl tablice \n";
    cout << "3. Rozszerz tablice \n";
    cout << "4. Wczytaj tablice \n";
    cout << "5. Zapisz tablice \n";
}

void menu()
{
    int **tablica;

    int x;
    int y;
    for (;;)
    {

        wypiszmenu();
        cout << "Co chcesz zrobić? \n >>";
        int i;
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "Podaj ile chcesz kolumn";
            cin >> x;
            cout << "Podaj ile chcesz wierszy";
            cin >> y;
            tablica = nowatablica(x, y);

            break;
        case 2:
            wyswietltablica(tablica, x, y);
            break;

        case 3:
            cout << "Podaj ile chcesz kolumn";
            cin >> x;
            cout << "Podaj ile chcesz wierszy";
            cin >> y;
            tablica = nowatablica(x, y);
            break;
        case 4:
            wczytywanie(&tablica, &x, &y);
            break;
        case 5:
            zapisanie_do_pliku(tablica, &x, &y);
            break;

        case 6:

            exit(0);
        }
    }
