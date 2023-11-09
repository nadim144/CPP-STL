// List_(3)_Basic_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Basic Operation
	---------------
	(1) front() – Returns the value of the first element in the list.
	(2) back() – Returns the value of the last element in the list.
	(3) push_front() – Adds a new element ‘g’ at the beginning of the list.
	(4) push_back() – Adds a new element ‘g’ at the end of the list.
	(5) pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
	(6) pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
	(7) insert() – Inserts new elements in the list before the element at a specified position.
	(8) emplace() - Extends the list by inserting a new element at a given position and it constructs the object in-place at the beginning of the list,
		potentially improving performance by avoiding a copy operation
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

int main()
{
	list<int> lst = { 10, 8, 6, 18, 4, 16, 14, 12, 2, 4, 16, 14 };
	cout << "Print list lst elements : ";
	PrintList(lst);

	// (1)
	cout << endl;
	cout << "(1) front() : Returns the value of the first element in the list." << endl;
	cout << "First Element of list lst : " << lst.front() << endl;

	// (2)
	cout << endl;
	cout << "(2) back() : Returns the value of the last element in the list." << endl;
	cout << "Last Element of list lst : " << lst.back() << endl;

	// (3)
	cout << endl;
	cout << "(3) push_front() : Adds a new element ‘g’ at the beginning of the list." << endl;
	int size = static_cast<int>(lst.size() + 5);
	for (int i = static_cast<int>(lst.size()); i < size; i++)
	{
		lst.push_front(i);
	}
	PrintList(lst);

	// (4)
	cout << endl;
	cout << "(4) push_back() : Adds a new element at the end of the list." << endl;
	size = static_cast<int>(lst.size() + 5);
	for (int i = static_cast<int>(lst.size()); i < size; i++)
	{
		lst.push_back(i);
	}
	PrintList(lst);

	// (5)
	cout << endl;
	cout << "(5) pop_front() : Removes the first element of the list, and reduces the size of the list by 1." << endl;
	for (int i = 0; i < 5; i++)
	{
		lst.pop_front();
	}
	PrintList(lst);

	// (6)
	cout << endl;
	cout << "(6) pop_back() : Removes the last element of the list, and reduces the size of the list by 1." << endl;
	for (int i = 0; i < 5; i++)
	{
		lst.pop_back();
	}
	PrintList(lst);

	// (7)
	cout << endl;
	cout << "(7) insert() : Inserts new elements in the list before the element at a specified position." << endl;
	list<int>::const_iterator const_itr = lst.cbegin();
	
	//for (int i = 0; i < 3; i++) // We can achieve through loop
	//{
	//	++const_itr;
	//}
	
	advance(const_itr, 3); // but best way is advance()
	int element = 55;
	lst.insert(const_itr, 1, element);
	PrintList(lst);
	
	cout << endl;
	const_itr = lst.cbegin();
	advance(const_itr, 5);
	lst.insert(const_itr, { 1,1,1 });
	PrintList(lst);

	// (8) Always better then insert()
	cout << endl;
	cout << "(8) emplace() : Extends the list by inserting a new element at a given position and it constructs the object in-place at the beginning of the list, potentially improving performance by avoiding a copy operation" << endl;
	const_itr = lst.cbegin();
	advance(const_itr, 5);
	lst.emplace(const_itr, 66);
	PrintList(lst);

}

