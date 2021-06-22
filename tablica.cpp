
#include <iostream>
#include <fstream>
#include <string>
#include "tablica.h"
///@file
using namespace std;


int **nowatablica(int x, int y)
{

	int **tablica = new int *[y];
	for (int i = 0; i < y; i++)
	{
		tablica[i] = new int[x];
	}

	return tablica;
}

/* komorka(int **tablica, int x, int y)
{ 
	int x;
	int y;
	int tablica[x][y];
	getkomorka(int x, int y)
	return 0;
	setkomorka(int x, int y)
		setAll(int x, int y)
	{
		for (int i = 0, i < tablica.size)
		{
			for (int j = 0, j < tablica[0])
				getkomorka(int x, int y);
		}
	}
	return komorka;
}
 */

int **zapisanie_do_pliku(int **tablica, int *x, int *y)
{

    fstream plik("zapisztablice.txt", ios::out);
    if (plik.good() == true)
    {
        int dlugosc = *y;
        int szerokosc = *x;
        plik << szerokosc << endl;
        plik << dlugosc << endl;
        for (int i = 0; i < *y; i++)
        {
            for (int j = 0; j < *x; j++)
            {
                plik << tablica[i][j] << "\t";
            }
            plik << endl;
        }
    }
    plik.close();
	return tablica;
};



/*int **przemnoz_tablice(int a,int **tablica, int x, int y)
{
	int a

	int** tablica = tablica[x][y]* a;
	return tablica;
}


int **wartosc_min()
*/