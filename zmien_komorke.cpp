#include <iostream>
#include "tablica_class.h"
///@file

using namespace std;
    /**
     * @brief funkcja uzyskaj komorke uzyskuje komorke przez co mozna do niej to wpisac
     * 
     * @param zmien_kom 
     */
void zmien_komorke(arkusz zmien_kom)
{
    
    for (int i = 0; i < zmien_kom.getwysokosc(); i++)
    {
        for (int j = 0; j < zmien_kom.getszerokosc(); j++)
        {
           auto komorka_temp= zmien_kom.uzyskaj_komorke(j,i);
            
                string temp;
                cout<<"Wprowadź wartość "<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
                cin >> temp;
                komorka_temp->dodaj_war(temp);
            
            


            
        }
    }
}
