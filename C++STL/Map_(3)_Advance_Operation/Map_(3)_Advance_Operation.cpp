// Map_(3)_Advance_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Advance Operation
    -----------------
    (1) count() - Returns the number of matches to element with key-value ‘g’ in the map.
    (2) emplace() - Inserts the key and its element in the map container.
*/

#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void PrintMap(const map<int, int>& mp)
{
    cout << "size of Map mp = " << mp.size() << endl;
    cout << "KEY\tELEMENTS" << endl;
    cout << "---\t--------" << endl;
    for (map<int,int>::const_iterator cit = mp.cbegin(); cit != mp.end(); ++cit)
    {
        cout << cit->first << "\t" << cit->second << endl;
    }
}

void PrintMapStringInt(const unordered_map<string, int>& mp)
{
    cout << "size of Map mp = " << mp.size() << endl;
    cout << "KEY\tELEMENTS" << endl;
    cout << "---\t--------" << endl;
    for (unordered_map<string, int>::const_iterator cit = mp.cbegin(); cit != mp.end(); cit++)
    {
        cout << cit->first << "\t" << cit->second << endl;
    }
}


string maximumFrequency(string s)
{
    unordered_map <string, int> m;
    stringstream check(s);
    string intermediate;
    string ss;

    while (getline(check, intermediate, ' '))
    {
        m[intermediate]++;
    }

    PrintMapStringInt(m);

    int count = 0;
    for (unordered_map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->second > count)
        {
            count = it->second;
        }
    }

    for (unordered_map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->second == count)
        {
            ss =  it->first;
            break;
        }
    }

    ss = ss + " " + to_string(count);


    return ss;
}

int main()
{
    map<int, int> mp;

    // insert elements in random order 
    mp.insert(make_pair<int, int>(2, 30 ));
    mp.insert(make_pair<int, int>(1, 40 ));
    mp.insert(make_pair<int, int>(3, 60 ));
    mp.insert(make_pair<int, int>(4, 20 ));
    mp.insert(make_pair<int, int>(5, 50 ));
    PrintMap(mp);

    // (1)
    /*
        The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. 
        It returns 0 if the element with key K is not present in the container.

        The main difference between map::count() and map::find() is that count() returns the number of elements with a given key, 
        while find() returns an iterator to the element with that key, or an iterator to the end of the map if the key is not found.
        Here is a table of the pros and cons of each function:
        
        Function   | Pros                                                                           | Cons
        --------   | ----                                                                           | ----
        count()    | Faster than find() - Only needs to compare the keys,                           | - Returns only an integer Can't be used to iterate over the elements
                   | Does not need to construct an iterator                                         | 
        find()     | Can be used to iterate over the elements - Returns an iterator to the element, | - Slower than count(), Needs to compare the keys and values,
                   | with the key Can be used to check if the key exists.                           |    Needs to construct an iterator
                            

        In general, count() is a better choice if you only need to check if the key exists, while find() is a better choice if you need to iterate over the elements or 
        if you need to check if the key exists and get the value associated with it.
    */
    
    cout << "(1) count() : Returns the number of matches to element with key-value ‘g’ in the map." << endl;
    int countkey = 3;
    if (mp.count(countkey))
    {
        cout << "Key is present in Map mp." << endl;
    }
    else
    {
        cout << "Key is not present in Map mp." << endl;
    }

    // (2)
    /*
        The map::emplace() is a built-in function in C++ STL which inserts the key and its element in the map container. It effectively increases the container size by one. 
        If the same key is emplaced more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value. 
        Syntax: 
            map_name.emplace(key, element)

        The main difference between std::map::insert() and std::map::emplace() is that insert() takes a reference to an already-constructed instance 
        and copies it into the map, while emplace() constructs a new instance in place.
        
        Here are some of the pros and cons of each function:
        Insert()
        --------
            Pros:
                - It is simpler to use than emplace().
                - It can be used with any type of object, including those that do not have a default constructor.
            Cons:
                - It can be less efficient than emplace() for objects that are large or complex.
                - It can cause unnecessary copies of objects to be made.
        Emplace()
        ---------
            Pros:
                - It is more efficient than insert() for objects that are large or complex.
                - It avoids unnecessary copies of objects.
                - It can be used with objects that do not have a default constructor.
            Cons:
                - It can be more difficult to use than insert().
                - It is not supported by all compilers.
        
        In general, emplace() is the preferred function to use when adding elements to a map. It is more efficient and avoids unnecessary copies of objects.However, 
        if you need to use a function that is compatible with older compilers, or if you need to add an element to a map that does not have a default constructor, 
        then insert() may be the better choice.
    */
    cout << endl;
    cout << "(2) emplace() : Inserts the key and its element in the map container." << endl;
    map<int, int>m;
    m.emplace(make_pair<int, int>(3, 300));
    m.emplace(make_pair<int, int>(6, 600));
    m.emplace(make_pair<int, int>(3, 300));
    m.emplace(make_pair<int, int>(2, 200));
    m.emplace(make_pair<int, int>(7, 700));
    m.emplace(make_pair<int, int>(8, 800));
    m.emplace(make_pair<int, int>(1, 100));
    m.emplace(make_pair<int, int>(9, 900));
    PrintMap(m);

    // (3)
    cout << endl;
    cout << "" << endl;
    
    return 0;
}
