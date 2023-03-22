#ifndef KLASY_H
#define KLASY_H
#include <iostream>
//po wywołaniu metody, powinna zawsze działać

class prostokat
{
    private:
        std::string nazwa;
        double bok1, bok2;
        bool poprawny;
        double obwod, pole;

        bool czyPoprawny(double bok1, double bok2)
        {
            return bok1 > 0 && bok2 > 0;
        }
        void obliczPole()
        {
            pole = bok1 * bok2;
        }
        void obliczObwod()
        {
            obwod = (bok1 + bok2)*2;
        }
    public:
        prostokat(std::string n = "?", double a=1, double b=2) :nazwa(n)
        {
            poprawny = czyPoprawny(a,b);
            if(poprawny)
            {
                bok1 = a;
                bok2 = b;
                obliczPole();
                obliczObwod();  
            }
            else
            {
                bok1 = 0;
                bok2 = 0;
                pole = 0;
                obwod = 0;
            }
        }

        ~prostokat()
        {
            std::cout << "prostokąt" << nazwa << "znika\n";
        }
        bool czyPoprawny()
        {
            return poprawny;
        }
        const std::string& jakaNazwa()
        {
            return nazwa;
        }
        double podajPole()
        {
            return pole;
        }
        double podajObwod()
        {
            return obwod;
        }
        bool zmienBoki(double a, double b)
        {
            if(czyPoprawny(a,b))
            {
                poprawny = true;
                bok1 = a;
                bok2 = b;
                obliczPole();
                obliczObwod();
                return true;
            }
            else
            {
                return false;
            }
        }

        std::string doTekstu();

};

class student
{
    public:
        //konstruktor pozwala zachować zgodność danych
        student(std::string, std::string, int, int, int);
        student(const student&){}; // konstruktor kopioujacy pozwoli kopiować obiekty
        //2 funkcje o tej samej nazwie, bo c++ ma przeciążanie nazwy POG
        //nic nie stoi na przeszkodzie zapisania funkcji z inną syngnaturą (typ, lista arg)
        ~student(); //destruktor, pomagaposprzątać po obiektcie, np zwolnić pamięć
        //przestrzeńnazw::metody
        float dochodNaOsobe()
        {
            return dochod/liczbaOsob;
        }

        //hermetyzacja zabronienie modyfikacji danych
        //publiczne funkcjie dadzą możliwość zmiany danych prywatnych
        int getLiczbaOsob() const
        {
            return liczbaOsob;
        }
        //modyfikator const - ta metoda nie modyfikujeniczego
        //object będzie read only poprzez const
        void setLiczbaOsob(int x)
        {
            if(x > 0)
            {
                liczbaOsob = x;
            }
        }
        //ta metoda pozwoli ustawić liczbe
    private:
        std::string imie;
        std::string nazwisko;
        int wiek;
        float dochod;
        int liczbaOsob=1;
        int *tab; //przy kopiowaniu s2 bedzie miało ten sam wskanik co s1 przez co mamy  2 obiekty
        // które wskazują na tablice
};

class ZLab02
{
    public:
        ZLab02();
        void zadanie_2_3();
        void zadanie_2_4();
        void zadanie_2_5();
        void menu();
    
};

class test
{
    private:
        test();
    public:
        static test& create()
        {
            static test t;
            return t;
        }
        //tl;dr tworzymy nową referencje do obiektu, nie nowy obiekt, obiekt jest statynczy LOL
};

#endif //KLASY_H

