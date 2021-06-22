#include <iostream>
#include "tablica_class.h"
///@file
using namespace std;
/**
 * @brief funkcja przemnaża wszystkie wartości w tabelce
 * 
 * @param mnozenie parametr który jest odpowiedzialny za mnożenie
 */
void mnozenie_arkusza(arkusz *mnozenie)
{

    double a = 1;
    for (int i = 0; i < mnozenie->getszerokosc(); i++)
    {

        if (mnozenie->gettyp(i) == 0)
        {
            for (int j = 0; j < mnozenie->getwysokosc(); j++)
                a *= stod(mnozenie->uzyskaj_komorke(i, j)->uzyskaj_war());
        }
    }
    cout << "Iloczyn wszystkich komórek to \t" << a << endl;
};
/*
void sumowanie_wierszy1(arkusz sumowanie_wierszy)
{
    double a = 0;
    for (int i = 0; i < sumowanie_wierszy.getwysokosc(); i++)
    {
        double temp = 0;
        for (int j = 0; j < sumowanie_wierszy.getszerokosc(); j++)
        {
            if (sumowanie_wierszy.gettyp(j)==0){
            a = stod(sumowanie_wierszy.uzyskaj_komorke(i, j)->uzyskaj_war());

            temp += a;
            }
        }
        cout << "Suma wierszy to \t" << temp << endl;
    }
};
*/

double sumowanie_kolumn1(arkusz *sumowanie_kolumn)
{
    double a = 0;
    for (int i = 0; i < sumowanie_kolumn->getszerokosc(); i++)
    {

        if (sumowanie_kolumn->gettyp(i) == 0)
        {
            for (int j = 0; j < sumowanie_kolumn->getwysokosc(); j++)
                a += stod(sumowanie_kolumn->uzyskaj_komorke(i, j)->uzyskaj_war());
        }
    }
    cout << "Suma kolumn to \t" << a << endl;
    return a;
};

/*
double sumowanie_wszystkiego(arkusz *sumowanie_kolumn)
{
    double a = 0;
    for (int i = 0; i < sumowanie_kolumn->getszerokosc(); i++)
    {
        for (int j = 0; j < sumowanie_kolumn->getwysokosc(); j++)
        {
            a += *((double *)(sumowanie_kolumn->uzyskaj_komorke(i, j)->uzyskaj_war()));
        }
    }
    return a;
};
*/

void minimum(arkusz *min)
{
    double a;
    bool b = true;
    double d;
    for (int i = 0; i < min->getwysokosc(); i++)
    {
        for (int j = 0; j < min->getszerokosc(); j++)
        {
            if (min->gettyp(j) == 0)
            {
                a = stod(min->uzyskaj_komorke(j, i)->uzyskaj_war());
                if (d > a || b)
                {
                    d = a;
                    b = false;
                }
            }
        }
    }
    cout << d << endl;
}

void maximum(arkusz *max)
{
    double a;
    bool b = true;
    double d;
    for (int i = 0; i < max->getwysokosc(); i++)
    {
        for (int j = 0; j < max->getszerokosc(); j++)
        {
            if (max->gettyp(j) == 0)
            {
                a = stod(max->uzyskaj_komorke(j, i)->uzyskaj_war());
                if (d < a || b)
                {
                    d = a;
                    b = false;
                }
            }
        }
    }
    cout << d << endl;
}


void srednia1(arkusz *srednia)
{
    double b;
    double a;
    for (int i = 0; i < srednia->getwysokosc(); i++)
    {
        for (int j = 0; j < srednia->getszerokosc(); j++)
        {
            b = sumowanie_kolumn1(srednia)/ (i + j);
        }
    }
    cout<<b<<endl;
};
