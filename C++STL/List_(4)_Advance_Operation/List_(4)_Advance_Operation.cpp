// List_(4)_Advance_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Advance Operation
	-----------------
	(1) empty() - Returns whether the list is empty(1) or not(0).
	(2) erase()	- Removes a single element or a range of elements from the list.
	(3) assign() - Assigns new elements to the list by replacing current elements and resizing the list.
	(4) remove() - Removes all the elements from the list, which are equal to a given element.
	(5) remove_if() - Used to remove all the values from the list that correspond true to the predicate or condition given as a parameter to the function.
	(6) reverse() - Reverses the list.
	(7) sort() - Sorts the list in increasing order.
	(8) unique() - Removes all duplicate consecutive elements from the list.
	(9) emplace() - Extends the list by inserting a new element at a given position and it constructs the object in-place at the beginning of the list, potentially improving performance by avoiding a copy operation
	(10) emplace_front() and emplace_back() - emplace_front() function is used to insert a new element into the list container and constructs the object in-place at the beginning of the list.emplace_back() function is used to insert a new element into the list container,and constructs the object in-place at the beginning of the list.
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
	list<int>lst = { 9, 6, 8, 10, 21, 18, 15, 12, 27, 24 };
	PrintList(lst);

	// (1)
	cout << endl;
	cout << "(1) empty() : Returns whether the list is empty(1) or not(0)." << endl;
	if (lst.empty())
	{
		cout << "TRUE : List lst is empty" << endl;
	}
	else
	{
		cout << "FALSE : List lst is not empty" << endl;
	}

	// (2)
	cout << endl;
	cout << "(2) erase() : Removes a single element or a range of elements from the list." << endl;
	list<int>::const_iterator const_itr_begin = lst.cbegin();
	list<int>::const_iterator const_itr_Last = lst.cbegin();
	advance(const_itr_begin, 1);
	advance(const_itr_Last, 4);
	//lst.erase(const_itr_begin);	//Single element deletion
	lst.erase(const_itr_begin, const_itr_Last); // range of elelment deletion
	PrintList(lst);

	// (3)
	cout << endl;
	cout << "(3) assign() : Assigns new elements to the list by replacing current elements and resizing the list." << endl;
	list<int> lstnew;
	lstnew.assign(lst.begin(), lst.end());
	PrintList(lstnew);

	// (4)
	cout << endl;
	cout << "(4) remove() : Removes all elements from the list, which are equal to a given element." << endl;
	lst.clear();
	lst = { 9, 1, 1, 2, 7, 9, 6, 6, 3 };
	lst.remove(1); // Here given element is 1
	lst.remove(6); //Here given element is 6
	PrintList(lst);

	// (6)
	cout << endl;
	cout << "(6) reverse() : Reverses the list." << endl;
	lst.clear();
	lst = { 9, 1, 1, 2, 7, 9, 6, 6, 3 };
	cout << "Before reverse : " << endl;
	PrintList(lst);
	cout << "After reverse : " << endl;
	lst.reverse();
	PrintList(lst);

	// (7)
	cout << endl;
	cout << "(7) sort() : Sorts the list in increasing order." << endl;
	lst.sort();
	PrintList(lst);

	// (8)
	cout << endl;
	cout << "(8) unique() : Removes all duplicate consecutive elements from the list." << endl;
	lst.clear();
	lst = { 9, 9, 1, 1, 2, 7, 9, 6, 6, 3 };
	lst.sort();

	lst.unique();
	PrintList(lst);


	return 0;
}
