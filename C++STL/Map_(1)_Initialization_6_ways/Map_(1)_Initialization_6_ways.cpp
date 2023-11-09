// Map_(1)_Initialization_6_ways.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Map is an associative container available in the C++ Standard Template Library(STL) that is used to store key-value pairs. Let’s see the different ways to initialize a map in C++.
	Initialization
	--------------
	(1) Initialization using assignment and subscript operator
	(2) Initialization using an initializer list
	(3) Initialization using an array of pairs
	(4) Initialization from another map using the map.insert() method
	(5) Initialization from another map using the copy constructor
	(6) Initialization through a range
*/

#include <iostream>
#include <map>
using namespace std;

void PrintMap(map<string, string>& m)
{
	cout << "size of Map m = " << m.size() << endl;
	for (map<string, string>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << it->first << " -> " << it->second << endl;
	}
}

int main()
{
	// (1)
	cout << "(1) Initialization using assignment and subscript operator" << endl;
	map<string, string> m;

	// Syntax : mMap[“ABCD”] = “PQRS”;  

	// Keep on adding key-value pairs using subscript([]) and assignment(=) operators
	m["Ground"] = "Grass";
	m["Floor"] = "Cement";
	m["Table"] = "Wood";

	PrintMap(m);

	// (2)
	cout << endl;
	cout << "(2) Initialization using an initializer list" << endl;
	m.clear(); //Clear exiting map to use it again

	// Syntax : map<string, string>mMap = { {key1, value1},{key2, value2},{key3, value3} };
	// Adding key-value pairs using Initializer list
	m = { {"Ground", "Grass"}, {"Floor", "Cement"}, {"Table", "Wood"}};
	PrintMap(m);

	// (3)
	cout << endl;
	cout << "(3) Initialization using an array of pairs" << endl;

	pair<string, string> arr[] = {
									make_pair("Ground", "Grass"), 
									make_pair("Floor","Cement"), 
									make_pair("Table","Wood")
								 };

	int size = sizeof(arr) / sizeof(arr[0]);
	map<string, string> mMap(arr, arr + size);
	PrintMap(mMap);

	// (4)
	cout << endl;
	cout << "(4) Initialization a map from another map using the map.insert() method" << endl;

	// Syntax : map<string, string> mMap;
	// mMap.insert(old_map.begin(), old_map.end());
	map<string, string>mm;
	mm.insert(mMap.begin(), mMap.end());
	PrintMap(mm);

	// (5)
	cout << endl;
	cout << "(5) Initialization from another map using the copy constructor" << endl;

	// Syntax : map<string, string>New_Map(old_map)
	map<string, string>mmm(mm);
	PrintMap(mmm);


	// (6)
	cout << endl;
	cout << "(6) Initialization through a range" << endl;

	// Syntax : map<string, string>New_Map(old_map.begin(), old_map.end());
	map<string, string>mmmm(mmm.begin(), mmm.end());
	PrintMap(mmmm);


	return 0;
}

/*
	Output
	------
	(1) Initialization using assignment and subscript operator
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
	
	(2) Initialization using an initializer list
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
	
	(3) Initialization using an array of pairs
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
	
	(4) Initialization a map from another map using the map.insert() method
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
	
	(5) Initialization from another map using the copy constructor
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
	
	(6) Initialization through a range
	size of Map m = 3
	Floor -> Cement
	Ground -> Grass
	Table -> Wood
*/