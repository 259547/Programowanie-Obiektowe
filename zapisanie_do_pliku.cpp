#include <iostream>
#include <fstream>
#include<string>
int main() {

using namespace std;



fstream plik("zapisztablice.txt", ios::out);
            if (plik.good () == true )
            {
                for(int i=1; i<=100;i++)
                {
                    plik<<i<<","; 
                    plik.flush();


                }
                plik.close();
            }
}
//pamięć zbuforowana ląduje do pliku

std::fstream wczytanie;
            wczytanie.open("zapisztablice.txt",std::ios::in);
            std::string x; 
            std::string y;
            getline( wczytanie,x);
            getline( wczytanie,y);
            //otwiera arkusz z chwilowo wypisaną wcześniej tablicą
            //wczytuje tablice
}