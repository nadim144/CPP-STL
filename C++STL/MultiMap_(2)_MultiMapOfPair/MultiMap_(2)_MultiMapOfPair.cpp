// MultiMap_(2)_MultiMapOfPair.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

void PrintMultiMapWithPair(multimap<pair<int, int>, int>& m)
{
	cout << "size of MultiMapWithPair m = " << m.size() << endl;
	cout << "KEY\tVALUE\tVALUE" << endl;
	cout << "---\t-----\t-----" << endl;
	for (multimap<pair<int, int>, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		pair<int, int> p = it->first;
		cout << p.first << "\t" << p.second << "\t" << it->second << endl;
	}
}


int main()
{
	multimap<pair<int, int>, int> m; // Empty Multimap

	//Insert 5 elements in multimap
	for (int i = 0; i < 5; i++)
	{
		pair<int, int> p;
		p = make_pair(i * 2, i * 3);
		m.insert(pair<pair<int, int>, int>(p, i*5));
	}
	PrintMultiMapWithPair(m);

	return 0;
}