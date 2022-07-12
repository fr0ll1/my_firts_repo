#include <iostream>
#include <vector>
#include "VectorCin.h"
using namespace std;

void VectorCin() {
	setlocale(LC_ALL, "rus");

	int i;
	int vectorSize;
	cout << "\nHow many elements will be in the vector?\n";
	cin >> vectorSize;
	vector<int> firstVector(vectorSize);
	cout << "\nWrite the elements of the vector\n";
	for (int i = 0; i < firstVector.size(); i++)
	{
		cin >> firstVector.at(i);
	}
	cout << endl;
}