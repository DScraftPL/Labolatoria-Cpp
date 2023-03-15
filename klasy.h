#ifndef KLASY_H
#define KLASY_H
#include <iostream>
//po wywołaniu metody, powinna zawsze działać
//

class student
{
    public:
        //konstruktor pozwala zachować zgodność danych
        student(std::string, std::string, int, int, int);
        student(const student&){}; // konstruktor kopioujacy pozwoli kopiować obiekty
        //2 funkcje o tej samej nazwie, bo c++ ma przeciążanie nazwy POG
        //nic nie stoi na przeszkodzie zapisania funkcji z inną syngnaturą (typ, lista arg)
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

#endif //KLASY_H
