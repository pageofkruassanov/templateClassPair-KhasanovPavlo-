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

    Pair<string> str("Hello", "World");
    cout << str.getFirst() << endl;
    cout << str.getSecond() << endl;
    str.swap();
    cout << str.getFirst() << endl;
    cout << str.getSecond() << endl;
    system("pause");
}