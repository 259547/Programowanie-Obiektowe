#include<iostream>
#include "tablica.h"


using namespace std;


void wypiszmenu() {
    cout<<"1. Stworz tablice \n";
    cout<<"2. Wyświetl tablice \n";
    cout<<"3. Rozszerz tablice \n";
    cout<<"4. Wczytaj tablice \n";
    cout<<"5. Zapisz tablice \n";
}

void menu() {
    int**tablica;
    wypiszmenu() ;
    cout<<"Co chcesz zrobić?"<<endl;
    int i;
    cin>> i;   
    switch (i){
        case 1:
            cout<<"Podaj ile chcesz wierszy";
            int x;
            cin>> x;
            cout<<"Podaj ile chcesz kolumn";
            int y;
            cin>> y;


        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        case 5:

        break;
        case 6:

        exit(0);


    }


}


