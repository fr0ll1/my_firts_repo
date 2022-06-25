#pragma once
namespace hello_person {

#include <iostream>
#include <string>

    using namespace std;

    void Hello_person(string name)
    {
        setlocale(LC_ALL, "rus");
        cout << "hello " << name;
    }
}