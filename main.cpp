#include "menu.h"
#include "tablica_class.h"
#include <iostream>
using namespace std;
int main () {
	//menu();
	tabela macierz(3,3);
	macierz (1,1)= 5;
	macierz.resize(2,2);
	cout<<endl<<macierz(1,1)<<endl<<macierz(1,1);
}