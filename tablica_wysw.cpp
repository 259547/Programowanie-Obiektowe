#include "tablica_wysw.h"
#include<iostream>

using namespace std;

void wyswietltablica(int**tablica,int x, int y){

for (int i=0; i<y;i++){
		for (int j=0; j<x;j++){
		cout<<tablica[i][j] << "\t";
		}
cout<<endl;


}



}