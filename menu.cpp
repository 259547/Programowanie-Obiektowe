#include<iostream>
#include "tablica.h"
#include "tablica_wysw.h"

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
    
            int x;
            int y;
    for (;;){

    wypiszmenu() ;
    cout<<"Co chcesz zrobić?"<<endl;
    int i;
    cin>> i;   
    switch (i){
        case 1:
            cout<<"Podaj ile chcesz kolumn";
            cin>> x;
            cout<<"Podaj ile chcesz wierszy";
            cin>> y;
            tablica= nowatablica(x,y);
            
        break;
        case 2:
            wyswietltablica(tablica,x,y);

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

}


