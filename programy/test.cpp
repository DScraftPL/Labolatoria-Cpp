#include <iostream>
#include <limits> //bibiloteka zawierająca informacje o typach w C++

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
    float a = 10;
    int b = static_cast<int>(a);
    int& ref = b; //referencja
    cout << b << " " << ref << endl;
    return 0;
}
