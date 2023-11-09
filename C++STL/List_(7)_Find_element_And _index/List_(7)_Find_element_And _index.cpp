// List_(7)_Find_element_And _index.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	(1) Find index of specific element.
	(2) Find element at specifix index 
*/

#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int>& lst)
{
	cout << "size of list lst = " << lst.size() << endl;
	for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int FindIndex(list<int>& lst, int k)
{
	list<int>::iterator itrIndex = find(lst.begin(), lst.end(), k);
	if (itrIndex != lst.end())
	{
		return static_cast<int>(distance(lst.begin(), itrIndex));
	}
	else
	{
		return -1;
	}
}

int main()
{
	list<int> lst = { 3,6,2,1, 9,7,5 };
	PrintList(lst);

	// (1)
	cout << endl;
	cout << "Find element at index 3 : ";
	list<int>::iterator it = lst.begin();
	advance(it, 3);
	cout << *it << endl;

	// (2)
	cout << endl;
	cout << "Find Index of element 9 : ";
	int index = FindIndex(lst, 9);
	cout << index << endl;
	return 0;
}
