#include <iostream>
#include <string>
#include "hello_person.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string name;
    cout << "¬ведите им€ \n";
    cin >> name;
    Hello_person(name);
    return 0;
}
