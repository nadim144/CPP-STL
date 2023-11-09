// Vector_(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Iterators
	---------
	(1) begin() – Returns an iterator pointing to the first element in the vector:		|4 v.begin() | 2 | 5 | 8 | 6 |
	(2) end() – Returns an iterator pointing to the after last element in the vector	| 4 | 2  | 5 | 8 | 6 | v.end()
	(3) rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
	(4) rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
	(5) cbegin() – Returns a constant iterator pointing to the first element in the vector.
	(6) cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
	(7) crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
	(8) crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/

#include <iostream>
#include <vector>
using namespace std;

void PrintVectorUsingconst_iterator(const vector<int>& v)
{
	cout << "Print vector elements using const_iterator - cbegin() and cend() iterator : ";
	for (vector<int>::const_iterator itr = v.cbegin(); itr != v.cend(); ++itr)
	{
		cout << (*itr) << " ";
	}
}

void PrintVectorUsingconst_reverse_iterator(const vector<int>& v)
{
	cout << "Print vector elements using const_reverse_iterator - crbegin() and crend() iterator it will print in reverse order : ";
	for (reverse_iterator<vector<int>::const_iterator> itrcrbegin = v.crbegin(); itrcrbegin != v.crend(); ++itrcrbegin)
	{
		cout << (*itrcrbegin) << " ";
	}
}

int main()
{
	vector<int> v;			//Empty Vector of int data tyoe
	v = { 4,2,5,8,6 };		//Initialize Vector v
	
	// (1)
	cout << "(1) Normal iterator - begin() and end() iterator concepts : "<<endl;
	vector<int>::iterator itrbegin = v.begin();
	vector<int>::iterator itrend = v.end();

	cout << "Print vector elements using begin() and end() iterator: ";
	for (itrbegin; itrbegin < itrend; ++itrbegin)
	{
		cout << (*itrbegin) << " ";
	}
	cout << endl; cout << endl;//============================================

	// (2)
	cout << "(2) Reverse iterator - rbegin() and rend() iterator concepts : " << endl;
	reverse_iterator<vector<int>::iterator> itrrbegin = v.rbegin();
	reverse_iterator<vector<int>::iterator> itrrend = v.rend();

	cout << "Print vector elements using rbegin() and rend() iterator it will print in reverse order : ";
	for (itrrbegin; itrrbegin < itrrend; ++itrrbegin)
	{
		cout << (*itrrbegin) << " "; 
	}
	cout << endl; cout << endl;//============================================

	// (3)
	cout << "(3) Constant iterator - cbegin() and cend() iterator concepts : " << endl;
	vector<int>::const_iterator itrcbegin = v.cbegin();
	vector<int>::const_iterator itrcend = v.end();

	cout << "Print vector elements using const_iterator - cbegin() and cend() iterator : ";
	for (itrcbegin; itrcbegin < itrcend; ++itrcbegin)
	{
		cout << (*itrcbegin) << " ";
	}
	cout << endl; //============================================
	PrintVectorUsingconst_iterator(v);
	cout << endl; cout << endl;//============================================

	// (4)
	cout << "(4) Constant reverse iterator - crbegin() and crend() iterator concepts : " << endl;
	reverse_iterator<vector<int>::const_iterator> itrcrbegin = v.crbegin();
	reverse_iterator<vector<int>::const_iterator> itrcrend = v.crend();

	cout << "Print vector elements using const_reverse_iterator - crbegin() and crend() iterator it will print in reverse order : ";
	for (itrcrbegin; itrcrbegin < itrcrend; ++itrcrbegin)
	{
		cout << (*itrcrbegin) << " ";
	}
	cout << endl; //============================================
	PrintVectorUsingconst_reverse_iterator(v);
	cout << endl; cout << endl;//============================================


	return 0;
}


/*
	output
	------
	(1) Normal iterator - begin() and end() iterator concepts :
	Print vector elements using begin() and end() iterator: 4 2 5 8 6
	
	(2) Reverse iterator - rbegin() and rend() iterator concepts :
	Print vector elements using rbegin() and rend() iterator it will print in reverse order : 6 8 5 2 4
	
	(3) Constant iterator - cbegin() and cend() iterator concepts :
	Print vector elements using const_iterator - cbegin() and cend() iterator : 4 2 5 8 6
	Print vector elements using const_iterator - cbegin() and cend() iterator : 4 2 5 8 6
	
	(4) Constant reverse iterator - crbegin() and crend() iterator concepts :
	Print vector elements using const_reverse_iterator - crbegin() and crend() iterator it will print in reverse order : 6 8 5 2 4
	Print vector elements using const_reverse_iterator - crbegin() and crend() iterator it will print in reverse order : 6 8 5 2 4
*/