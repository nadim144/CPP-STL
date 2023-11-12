// MultiMap_(1)_Swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

void PrintMultiMap(multimap<char, int>& m)
{
    cout << "size of Multimap m = " << m.size() << endl;
    cout << "KEY\tVALUE" << endl;
    cout << "---\t-----" << endl;
    for (multimap<char, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << "\t" << it->second << endl;
    }
}


int main()
{
    multimap<char, int> mMap1;
    multimap<char, int> mMap2;

    mMap1.insert(pair<char, int>('a', 1));
    mMap1.insert(pair<char, int>('b', 2));
    mMap1.insert(pair<char, int>('b', 2));
    mMap1.insert(pair<char, int>('b', 2));
    mMap1.insert(pair<char, int>('c', 3));
    mMap1.insert(pair<char, int>('d', 4));
    mMap1.insert(pair<char, int>('d', 4));
    mMap1.insert(pair<char, int>('e', 5));
    mMap1.insert(pair<char, int>('d', 4));
    cout << "Print First Multimap Before Swaping..." << endl;
    PrintMultiMap(mMap1);

    cout << endl;
    mMap2.insert(make_pair('f', 1));
    mMap2.insert(make_pair('g', 2));
    mMap2.insert(make_pair('h', 3));
    mMap2.insert(make_pair('f', 1));
    mMap2.insert(make_pair('f', 1));
    mMap2.insert(make_pair('h', 3));
    cout << "Print Second Multimap Before Swaping ..." << endl;
    PrintMultiMap(mMap2);

    //Swap
    mMap1.swap(mMap2);
    cout << endl;
    cout << "Print First Multimap After Swaping..." << endl;
    PrintMultiMap(mMap1);
    cout << endl;
    cout << "Print Second Multimap After Swaping ..." << endl;
    PrintMultiMap(mMap2);

    return 0;
}
