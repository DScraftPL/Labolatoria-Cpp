#include <iostream>

using namespace std;

class Student
{
    public:
    string imie;
    string nazwisko;
    int wiek;
    void show() //funkcje w klasie mają domyślnie elementy klasy
    {
        cout << imie << " " << nazwisko << " " << wiek;
    }
    Student();
};

int main()
{
    Student s1;
    s1.imie = "kacper";
    s1.nazwisko = "wiacek";
    s1.wiek = 18;
    s1.show();
    return 0;
}
