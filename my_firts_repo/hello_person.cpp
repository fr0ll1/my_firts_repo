#include <string>
#include "hello_person.h"

using namespace std;

void Hello_person(string &name)
{
    setlocale(LC_ALL, "rus");
    cout << "hello " << name;
}
