#include <iostream>
#include <fstream>
#include "tablica.h"
using namespace std;


int** nowatablica(int x, int y) {

	int**tablica = new int*[y];
	for (int i=0; i<y;i++){
		tablica[i]= new int [x];
		}
	return tablica;


}

int** wczytywanie (){


	int liczba = 0;

	ifstream plik;
	plik.open("arkusz.csv");
	int liczbawierszy;
	int liczbakolumn;
	plik>>liczbawierszy;
	plik>>liczbakolumn;
	int**tablica = nowatablica(liczbakolumn,liczbawierszy);
	for (int i=0; i<liczbawierszy;i++){
		for (int j=0; j<liczbakolumn;j++){
		plik>>tablica[i][j];
		}
		}
	plik.close();
	return tablica;
}

