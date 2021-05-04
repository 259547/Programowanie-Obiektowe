#include "tablica_class.h"

unsigned int min( unsigned int a, unsigned int b){
return a > b ?  b : a;
}

//konstruktory

//tworzenie tabeli oraz pamięci podręcznej
tabela::tabela(unsigned int kolumny,unsigned int wiersze): kolumny(kolumny),wiersze(wiersze) {
    unsigned int sloty = kolumny*wiersze;
    mem= new Z[sloty];
}

//usuwanie pamięci niepotrzebnej
tabela::~tabela(){
    delete []mem;
    mem = nullptr;
    return;
}

//wyświetlanie tabeli z pamięci
 Z& tabela::operator()(unsigned int x,unsigned int y){
    return *(mem+x+y*kolumny);
}

//sprawdzanie czy program otrzymał te same dane do tabeli, następnie zmienienie ich
 bool tabela::resize (unsigned int kol,unsigned int wie)//kolumny;wiersze
{
    if (kol==kolumny && wie==wiersze){
        return 0;
    }
    Z* buf =new Z[kol*wie];
    unsigned int k = min(kol,kolumny);
    unsigned int w =  min(wie,wiersze);
    for (unsigned int x{}; x<k; x++ ){
        for(unsigned int y{}; y<w; y++ ){
            *(buf+x+k*kol);
        }
    }

}