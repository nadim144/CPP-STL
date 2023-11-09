// Vector_(5)_Initialization_7_ways.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	(1) Initializing by pushing values one by one:
	(2) Specifying size and initializing all values:
	(3) Initializing like arrays:
	(4) Initializing from an array:
	(5) Initializing from another vector:
	(6) Initializing all elements with a particular value:
	(7) Initialize an array with consecutive numbers using std::iota:
*/

#include <iostream>
#include <vector>
using namespace std;

// Print vector using normal iterator
void PrintVector_UsingNormalIterator(vector<int>& v)
{
	cout << "Print vector v using normal iterator in normal order" << endl;
	cout << "size of vector v = " << v.size() << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// Print vector using const_iterator
void PrintVector_UsingConstIterator(const vector<int> v)
{
	cout << "Print vector v using const_iterator in normal order" << endl;
	cout << "size of vector v = " << v.size() << endl;
	for (vector<int>::const_iterator cit = v.cbegin(); cit != v.cend(); ++cit)
	{
		cout << *cit << " ";
	}
	cout << endl;
}

void PrintVector_UsingNormalIterator_InRevverseOrder(vector<int>& v)
{
	cout << "Print vector v using revese_iterator in reverse order" << endl;
	cout << "size of vector v = " << v.size() << endl;
	for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;
}
void PrintVector_UsingConstIterator_InRevverseOrder(const vector<int>& v)
{
	cout << "Print vector v using revese_iterator in reverse order" << endl;
	cout << "size of vector v = " << v.size() << endl;
	for (vector<int>::const_reverse_iterator crit = v.crbegin(); crit != v.crend(); ++crit)
	{
		cout << *crit << " ";
	}
	cout << endl;
}

int main()
{
	// (1) Initializing by pushing values one by one: by using push_back() and print the vector..
	cout << "(1) Initializing by pushing values one by one: by using push_back() and print the vector.." << endl;
	vector<int> v;	// Create empty vector of type integer.
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	PrintVector_UsingNormalIterator(v);
	cout << endl;
	PrintVector_UsingConstIterator(v);
	cout << endl;
	PrintVector_UsingNormalIterator_InRevverseOrder(v);
	cout << endl;
	PrintVector_UsingConstIterator_InRevverseOrder(v);
	cout << endl;
	return 0;
}

