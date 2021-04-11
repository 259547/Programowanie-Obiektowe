
#include <iostream>
#include <fstream>
#include <tablica_wysw.cpp>
#include <tablica.cpp>
#include <fstream>



using namespace std;
int main () {

	int liczba = 0;

	ifstream plik;
	plik.open("Tablica.cpp");
	int liczbaelementow;
	plik>>liczbaelementow;
	int*tablica = new int(liczbaelementow);
	for (int i; i<liczbaelementow;i++){
		plik>>tablica[i];
		}
	plik.close();
}
