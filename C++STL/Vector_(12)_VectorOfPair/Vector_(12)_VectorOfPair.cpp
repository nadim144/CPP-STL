// Vector_(12)_VectorOfPair.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void PrintVectorOfPair(vector<pair<int, int>>& v)
{
	cout << "size of VectorOfPair v = " << v.size() << endl;
	for (vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); ++it)
	{
		pair<int, int> p = *it;
		cout <<p.first << " -> " << p.second << endl;
	}
}

int main()
{
	vector<pair<int, int>> v;

	// Insert 5 elements in vector v

	for (int i = 0; i < 5; i++)
	{
		pair<int, int> p;
		p = make_pair(i * 1, i * 2);
		v.push_back(p);
	}

	PrintVectorOfPair(v);

	return 0;
}
