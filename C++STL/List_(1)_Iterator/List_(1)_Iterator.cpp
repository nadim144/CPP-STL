// List_(1)_Iterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Iterator:
	---------
	(1) begin() - returns an iterator pointing to the first element of the list.
	(2) end()	- returns an iterator pointing to the after last element of list.
	(3) rbegin() - returns a reverse iterator which points to the last element of the list.
	(4) rend()	- returns a reverse iterator that points to the position before the beginning of the list.
	(5) cbegin() - returns a constant random access iterator which points to the beginning of the list.
	(6) cend() - returns a constant random access iterator which points to the end of the list.
	(7) crbegin() - returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of the container.
	(8) crend() - returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
*/


#include <iostream>
#include <list>
using namespace std;

void PrintListUsing_normal_iterator(list<int>& l)
{
	cout << "size of list l = " << l.size() << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void PrintListUsing_const_iterator(const list<int>& l)
{
	cout << "size of list l = " << l.size() << endl;
	for (list<int>::const_iterator cit = l.cbegin(); cit != l.cend(); ++cit)
	{
		cout << *cit << " ";
	}
	cout << endl;
}

void PrintListUsing_reverse_iterator(list<int>& l)
{
	cout << "size of list l = " << l.size() << endl;
	for (list<int>::reverse_iterator rit = l.rbegin(); rit != l.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;
}

void PrintListUsing_const_reverse_iterator(const list<int>& l)
{
	cout << "size of list l = " << l.size() << endl;
	for (list<int>::const_reverse_iterator crit = l.crbegin(); crit != l.crend(); ++crit)
	{
		cout << *crit << " ";
	}
	cout << endl;
}

int main()
{
	list<int> l = { 10, 8, 6, 18, 4, 16, 14, 12, 2, 4, 16, 14 };
	cout << endl;
	cout << "Print list l using normal iterator : ";
	PrintListUsing_normal_iterator(l);
	
	cout << endl;
	cout << "Print list l using const_iterator : ";
	PrintListUsing_const_iterator(l);
	
	cout << endl;
	cout<< "Print list l using reverse_iterator : ";
	PrintListUsing_reverse_iterator(l);
	
	cout << endl;
	cout << "Print list l using const_reverse_iterator : ";
	PrintListUsing_const_reverse_iterator(l);
	return 0;
}

