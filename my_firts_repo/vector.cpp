#include <iostream>
#include <vector>
#include "vector.h"
using namespace std;

void Vector()
{
	setlocale(LC_ALL, "rus");

	//int firstVectorElement;
	int i;
	int counter = 0;

	int vectorSize;
	cout << "\nHow many elements will be in the vector?\n";
	cin >> vectorSize;
	vector<int> firstVector(vectorSize);
	vector<int> secondVector;
	cout << "\nWrite the elements of the vector\n";
	for (int i = 0; i < firstVector.size(); i++)
	{
		cin >> firstVector.at(i);
	}	
	cout << endl;

	for (int i = 0; i < firstVector.size(); i++)
	{
		if ((firstVector.at(i) % 3 == 0) && (firstVector.at(i) % 5 == 0))
		{
			secondVector.push_back(firstVector.at(i));
			counter++;
		}
	}


	cout << "elements in multiples of 3 and 5: ";
	for (int i = 0; i < secondVector.size(); i++)
	{
		cout << secondVector.at(i) << " ";
	}
	cout << endl;
}

