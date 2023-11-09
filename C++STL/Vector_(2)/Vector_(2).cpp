// Vector_(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Capacity
	--------
	(1) size()			– Returns the number of elements in the vector.
	(2) max_size()		– Returns the maximum number of elements that the vector can hold.
	(3) capacity()		– Returns the size of the storage space currently allocated to the vector expressed as number of elements.
	(4) resize(n)		– Resizes the container so that it contains ‘n’ elements.
	(5) empty()			– Returns whether the container is empty.
	(6) shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
	(7) reserve()		– Requests that the vector capacity be at least enough to contain n elements.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;			//Empty Vector of int data tyoe
	v = { 4,2,5,8,6 };		//Initialize Vector v

	cout << "(1) Print vector using iterator {4,2,5,8,6} : ";
	vector<int>::iterator itr;
	for (itr = v.begin(); itr != v.end(); ++itr)
	{
		cout << (*itr) << " ";
	}

	cout << endl;
	cout << "Print Current size of vector v = " << v.size() << endl;
	cout << "Print Current Capacity of Vector v = " << v.capacity() << endl;
	cout << "Print Maximum size of vector v = " << v.max_size() << endl;
	cout << endl;

	// resize vecotr
	cout << "(2) Now resize vector to v.size() -  1 = 4" << endl;

	v.resize(4);			// resize Vector v

	cout << "Print Current size of vector v = " << v.size() << endl;
	cout << "Print Current Capacity of Vector v = " << v.capacity() << endl;
	cout << "Print vector using iterator {4,2,5,8,6} : ";
	for (itr = v.begin(); itr != v.end(); ++itr)
	{
		cout << (*itr) << " ";
	}
	cout << endl; cout << endl;

	//Check Vector is Empty or not
	cout << "(3) Check Vector is Empty or not" << endl;
	if (v.empty())
	{
		cout << "Vector v is Empty..." << "Size = " << v.size() << "And Capacity = " << v.capacity() << endl;
	}
	else
	{
		cout << "Vector v is not Empty..." << "Size = " << v.size() << " And Capacity = " << v.capacity() << endl;
	}
	cout << endl;

	//Shrint to fit vector
	cout << "(4) Now Shrink_to_fit vector v after resize()." << endl;

	v.shrink_to_fit();		// Shrink_to_fit Vector v

	cout << "Current size of vector v = " << v.size() << endl;
	cout << "Current Capacity of Vector v = " << v.capacity() << endl;
	cout << "Print vector using iterator {4,2,5,8,6} : ";
	for (itr = v.begin(); itr != v.end(); ++itr)
	{
		cout << (*itr) << " ";
	}


	cout << endl;
	cout << endl;
	return 0;
}


/*
	output
	------
	(1) Print vector using iterator {4,2,5,8,6} : 4 2 5 8 6
	Print Current size of vector v = 5
	Print Current Capacity of Vector v = 5
	Print Maximum size of vector v = 4611686018427387903
	
	(2) Now resize vector to v.size() -  1 = 4
	Print Current size of vector v = 4
	Print Current Capacity of Vector v = 5
	Print vector using iterator {4,2,5,8,6} : 4 2 5 8
	
	(3) Check Vector is Empty or not
	Vector v is not Empty...Size = 4 And Capacity = 5
	
	(4) Now Shrink_to_fit vector v after resize().
	Current size of vector v = 4
	Current Capacity of Vector v = 4
	Print vector using iterator {4,2,5,8,6} : 4 2 5 8

*/