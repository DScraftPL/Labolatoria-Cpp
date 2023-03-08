#include <iostream>
#include <limits>
#include <typeinfo>
#include <cmath>
#include "klasy.h"

using namespace std;

ZLab02::ZLab02()
{

}

void ZLab02::zadanie_2_3()
{
    int a = 0;
    int int_min = numeric_limits<int>::min();
    int int_max = numeric_limits<int>::max();
    unsigned int uint_min = numeric_limits<unsigned int>::min();
    unsigned int uint_max = numeric_limits<unsigned int>::max();
    long int_zakres = static_cast<long>(int_max) - static_cast<long>(int_min);
    long uint_zakres = static_cast<long>(uint_max) - static_cast<long>(uint_min);
    cout << "typ: " << typeid (a).name() << "\nrozmiar: " << sizeof(a) << "bajtów\n" << "zakres: " << int_min << " " << int_max << " " << int_zakres << endl;
}

void ZLab02::zadanie_2_4()
{
    cout.precision(5);
    int a=120,b=55;
    int c = a/b;
    double d = a/b;
    double e = static_cast<double>(a)/static_cast<double>(b);
    cout << c << " " << d << " " << e << endl;
}

void ZLab02::zadanie_2_5()
{
    double a,b,x;
    cout.precision(20);
    x = numeric_limits<double>::min();
    cout << "dokładność: "<< x << endl;
    cin >> a >> b;
    cout << a/b;
}

void ZLab02::menu()
{
    unsigned short wybor;
    cout << "Które zadanie uruchomić?\n3 - 2_3\n4 - 2_4\n5 - 2_5";
    cin >> wybor;
    switch(wybor)
    {
        case 3 : zadanie_2_3(); break;
        case 4 : zadanie_2_4(); break; 
        case 5 : zadanie_2_5(); break;
        default : cout << "Nie ma zadania" << endl;
    } 
}