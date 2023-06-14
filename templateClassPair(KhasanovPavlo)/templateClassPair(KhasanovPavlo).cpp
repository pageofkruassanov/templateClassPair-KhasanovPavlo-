#include <iostream>
#include "templatesClass.h"

using namespace std;

int main()
{
    Pair<int> integer(20, 25);
    cout << integer.getFirst() << endl;
    cout << integer.getSecond() << endl;
    integer.swap();
    cout << integer.getFirst() << endl;
    cout << integer.getSecond() << endl;
    system("pause");
}