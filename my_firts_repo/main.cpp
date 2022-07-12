#include <iostream>
#include <string>
#include "hello_person.h"
#include "VectorRedactor.h"
#include "VectorCin.h"
#include "VectorCout.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string name;
    cout << "¬ведите им€ \n";
    cin >> name;
    Hello_person(name);
    VectorCin();
    VectorRedactor();
    VectorCout();
    return 0;
}
