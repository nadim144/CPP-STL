// Vector_(11)_VectorOfMultiMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void PrintVectorOfMultiMap(vector<multimap<int, int>>& v)
{
	cout << "size of VectorOfMultiMap v = " << v.size() << endl;;
	for (vector<multimap<int, int>>::iterator it = v.begin(); it != v.end(); ++it)
	{
		multimap<int, int> m = *it;
		for (multimap<int, int>::iterator itr = m.begin(); itr != m.end(); ++itr)
		{
			cout << itr->first << " -> " << itr->second << endl;
		}
		cout << endl;
	}
}

int main()
{
	vector<multimap<int, int>> v;

	//Insert 5 elemrnts in vector
	for (int i = 0; i < 5; i++)
	{
		multimap<int, int> m;
		for (int j = 0; j < 3; j++)
		{
			m.insert(pair<int, int>(i * 3, j * 5));
		}
		v.push_back(m);
	}
	PrintVectorOfMultiMap(v);
	return 0;
}
