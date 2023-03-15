#include <iostream>
#include "../klasy.h"

using namespace std;

int main()
{
    student s("Jan","Kowalski", 22, 32000, 4);
    student s2 = s;
    return 0;
}