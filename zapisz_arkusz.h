 #pragma once
 #include "tablica_class.h"
 ///@file
    /**
     * @brief tworzy plik zapisztablice.txt zapisuje tam wszystkie najważniejsze parametry takie tjak ilosc kolumn ilosc wierszy rodzaj kolumn i wartosc komorek
     * 
     */
 void zapisz_arkusz(arkusz);
    /**
     * @brief tworzy od nowa tablice na bazie pliku zapisztablie.txt z wartościami takimi jakie się znajdują w pliku 
     * 
     */
 void wczytaj_arkusz(arkusz*);