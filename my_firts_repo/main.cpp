#include <iostream>
#include <string>
#include "hello_person.h"

using namespace std;
using namespace hello_person;

int main()
{
    setlocale(LC_ALL, "rus");
    string name;
    cout << "������� ��� \n";
    cin >> name;
    Hello_person(name);
}

