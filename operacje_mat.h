 #pragma once
#include "tablica_class.h"
#include "zmien_komorke.h"
///@file
    /**
     * @brief funkcja przemnaża każdą komórkę przez siebie
     * 
     * @param mnozenie 
     */
void mnozenie_arkusza(arkusz *mnozenie);
//void dzielenie_arkusza(arkusz *dzielenie);
//void sumowanie_wierszy1(arkusz *sumowanie_wierszy);
    /**
     * @brief funkcja sumuje kolumny od góry do dołu a następnie dzięki temu że jest double zwraca informacje o sumie w kolumnach i cała funkcja może zostać wykorzystana w oblcizeniach
     * 
     * @param sumowanie_kolumn 
     */
double sumowanie_kolumn1(arkusz *sumowanie_kolumn);
    /**
     * @brief funkcja wywoływana jest poprzez obliczenia proste oraz funkcje sumowanie kolumn gdzie wylicza średnią ze wszystkich kolumn
     * 
     * @param srednia parametr który wykorzystywany jest do obliczenia średniej poprzez sume kolumn i podzielenia przez ilość wsystkich komórek
     */
void srednia1(arkusz *srednia);
    /**
     * @brief funkcja przseszukuje dane poprzez porównanie ze wcześniejszą komórką i sprawdzeniu czy dana komorka jest mniejsza jesli tak to zostawia ją jeśli nie to zmienia
     * 
     * @param min parametr który oblcizany jest poprzez prostą komende logiczną 
     */
void minimum(arkusz *min);
    /**
     * @brief funkcja przseszukuje dane poprzez porównanie ze wcześniejszą komórką i sprawdzeniu czy dana komorka jest wieksza jesli tak to zostawia ją jeśli nie to zmienia
     * 
     * @param max parametr bazujaćy na prostej komendzie logicznej
     */
void maximum(arkusz *max);
