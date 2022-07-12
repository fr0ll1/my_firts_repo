#include <iostream>
#include <vector>
#include "VectorCout.h"
using namespace std;

void VectorCout(vector<int> secondVector) {
	setlocale(LC_ALL, "rus");

	int i;
	cout << "elements in multiples of 3 and 5: ";
	for (int i = 0; i < secondVector.size(); i++)
	{
		cout << secondVector.at(i) << " ";
	}
	cout << endl;
}