#include "tablica_class.h"

///@file



void komorka_string::dodaj_war(std::string wartosc)
{   
    /**
     * @brief funkcja wyłuskuje wartość z komórki
     * 
     */
    this->wartosc = wartosc;
}
void komorka_double::dodaj_war(std::string wartosc)
{   
    /**
     * @brief funkcja zmieniająca stringa na doubla
     *  
     */
    this->wartosc = stod(wartosc);
}
std::string komorka_string::uzyskaj_war()
{   
    /**
     * @brief Construct a new return object
     * Uzyskuje wartość poprzez funkcje
     * 
     */
    return (wartosc);
}
std::string komorka_double::uzyskaj_war()
{
    /**
     * @brief 
     * 
     * @return return zwraca  wartość w postaci stringa
     */
    return std::to_string(wartosc);
    
}
/**
 * @brief Tworzy arkusz
 * 
 * @param typy_kolumn wykorzystuje parametr z klasy arkusz
 * @param szerokosc wykorzystuje parametr z klasy arkusz
 * @param wysokosc wykorzystuje parametr z klasy arkusz
 */
void arkusz::tworzenie_arkusza(bool *typy_kolumn, int szerokosc, int wysokosc)
{
    this->szerokosc=szerokosc;
    this->wysokosc=wysokosc;
    this->typy_kolumn=typy_kolumn;
    tablica = new komorka **[szerokosc];
    for (int i = 0; i < szerokosc; i++)
    {
        tablica[i] = new komorka *[wysokosc];
        for (int j = 0; j < wysokosc; j++)
        {
            if (typy_kolumn[i])
            {
                tablica[i][j] = new komorka_string();
            }
            else
            {
                tablica[i][j] = new komorka_double();
            }
        }
    }
}

komorka *arkusz::uzyskaj_komorke(int x, int y)
{
    /**
     * @brief wyłuskuje komórkę
     * 
     */
    return tablica[x][y];
};

int arkusz::getszerokosc()
{
    /**
     * @brief użycie getera do sprowadzenia szerokości
     * 
     */
    return szerokosc;
};

int arkusz::getwysokosc()
{
    /**
     * @brief użycie getera do sprowadzenia wysokości
     * 
     */
    return wysokosc;
};
bool arkusz::gettyp(int x)
{
    /**
     * @brief użycie getera do sprowadzenia typu komórki
     * 
     */
    return typy_kolumn[x];

}
