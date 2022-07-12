#include <iostream>
#include <vector>
#include "VectorRedactor.h"
using namespace std;

void VectorRedactor(vector<int> firstVector)
{
	int i;
	int counter = 0;
	vector<int> secondVector;
	for (int i = 0; i < firstVector.size(); i++)
	{
		if ((firstVector.at(i) % 3 == 0) && (firstVector.at(i) % 5 == 0))
		{
			secondVector.push_back(firstVector.at(i));
			counter++;
		}
	}



}

