#pragma once
#ifndef tablica_class_h
#define tablica_class_h
#include <string>
///@file
class komorka
{

public:
    virtual void dodaj_war(std::string wartosc) = 0;
    /**
     * @brief 
     * 
     * @return std::string 
     */
    virtual std::string uzyskaj_war() = 0;
    /**
     * @brief 
     * 
     */
    
};

class komorka_string : public komorka
{
    std::string wartosc = "!";
    /**
     * @brief jeśli nie wpiszemy wartości do komórki i wyświetlimy jej zawartość ukażą się nam wykrzykniki
     * 
     */
public:
    void dodaj_war(std::string wartosc);
    /**
     * @brief pozwala dodać wartość za pomocą funkcji która wyłuskuje samą wartość dla kalsy string
     * 
     * @return std::string dlatego że tworzymy stringi w tabeli i klasa odpowaida stringowi
     */
    std::string uzyskaj_war();
    /**
     * @brief 
     *  pozwala na uzyskanie wartości dla kalsy string
     */
};

class komorka_double : public komorka
{
    double wartosc = 0;

public:
    void dodaj_war(std::string wartosc);
    /**
     * @brief 
     * 
     * @return std::string 
     */
    std::string uzyskaj_war();
    /**
     * @brief 
     * 
     */
    };
class arkusz
{
    bool *typy_kolumn;
    komorka ***tablica;
    int szerokosc;
    int wysokosc;

public:
    void tworzenie_arkusza(bool *typy_kolumn, int szerokosc, int wysokosc);
    /**
     * @brief 
     * 
     * @param x wiersze - ilosc wierszy
     * @param y kolumny - iloc kolumn
     * @return komorka* wykorzystuje to inna funkcja
     */
    komorka *uzyskaj_komorke(int x, int y);
    /**
     * @brief 
     * 
     * @return int uzyskuje komórke
     */
    int getszerokosc();
    /**
     * @brief użycie getera do sprowadzenia szerokości
     * 
     * @return int zwróć szerokość
     */
    int getwysokosc();
    /**
     * @brief użycie getera do sprowadzenia wysokości
     * 
     * @param x wartość sprawdzana czy kolumna jest równa doublowi czy stringowi
     * @return true jeśli kolumna double, zwróć wartość
     * @return false jeśli kolumna string, pomiń wartość w obliczeniach
     */
    bool gettyp(int x);
    /**
     * @brief użycie getera do sprowadzenia typu komórki
     * 
     */
};

#endif