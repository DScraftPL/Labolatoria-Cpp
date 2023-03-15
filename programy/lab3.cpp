#include <iostream>
#include "../klasy.h"

using namespace std;

int main()
{
    prostokat p1;
    prostokat p2("koc",1.4,2.2);
    prostokat p3("pułapka",-2,-3);

    p3.zmienBoki(2,3);

    cout << endl << p2.jakaNazwa() << endl << p2.jakaNazwa() << endl << p2.czyPoprawny() << endl << p2.podajObwod() << endl << p2.podajPole();
    return 0;
}