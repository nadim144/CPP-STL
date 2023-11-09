// Map_(2)_Basic_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Basic Operation
    ---------------
    (1) begin() – Returns an iterator to the first element in the map.
    (2) end() – Returns an iterator to the theoretical element that follows the last element in the map.
    (3) size() – Returns the number of elements in the map.
    (4) max_size() – Returns the maximum number of elements that the map can hold.
    (5) empty() – Returns whether the map is empty.
    (6) pair insert(keyvalue, mapvalue) – Adds a new element to the map.
    (7) erase(const g)– Removes the key-value ‘g’ from the map.
    (8) erase(iterator position) – Removes the element at the position pointed by the iterator.
    (9) clear() – Removes all the elements from the map.
*/

#include <iostream>
#include<map>
using namespace std;

void PrintMap(map<int, string>& m)
{
    cout << endl;
    cout << "size of Map m = " << m.size() << endl;;
    cout << "KEY\tELEMENT\n";
    cout << "---\t------\n";
    for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << "  ->  " << it->second << endl;
    }
}

int main()
{
    map<int, string> m = { {1, "Nadim"}, {2, "Ahmad"}, {3, "Mohammad"}, {4, "Eiba"}, {5, "Shazia"} };
    PrintMap(m);


    // (1)
    cout << endl;
    cout << "(1) begin() : Returns an iterator to the first element in the map." << endl;
    map<int, string>::iterator itbegin = m.begin();
    cout << itbegin->first << " -> " << itbegin->second << endl;

    // (2)
    cout << endl;
    cout << "(2) end() : Returns an iterator to the theoretical element that follows the last element in the map." << endl;
    map<int, string>::iterator itend = m.begin();   //There is no support of front() and back() function in map.
    advance(itend, (m.size() - 1));                 // it is behave like back() function
    cout << itend->first << " -> " << itend->second << endl;

    // (3)
    cout << endl;
    cout << "(3) size() : Returns the number of elements in the map." << endl;
    cout << "size of Map m = " << m.size() << endl;;

    // (4)
    cout << endl;
    cout << "(4) max_size() : Returns the maximum number of elements that the map can hold." << endl;
    cout << "Maximum element a Map m can hold = " << m.max_size() << endl;

    // (5)
    cout << endl;
    cout << "(5) empty() : Returns whether the map is empty." << endl;
    if (m.empty())
    {
        cout << "TRUE :  Map m is empty ..." << endl;
    }
    else
    {
        cout << "FALSE : Map m is not empty..." << endl;
    }

    // (6)
    cout << endl;
    cout << "(6) pair insert(keyvalue, mapvalue) – Adds a new element to the map." << endl;
    m.clear();  // clear all elements from map.
    m.insert(make_pair<int, string>(100, "ABC"));
    m.insert(make_pair<int, string>(200, "DEF"));
    m.insert(make_pair<int, string>(300, "GHI"));
    m.insert(make_pair<int, string>(400, "LMN"));
    m.insert(make_pair<int, string>(500, "PQR"));
    m.insert(make_pair<int, string>(600, "STU"));
    // Another way of inserting
    m[700] = "VXY";
    PrintMap(m);

    map<int, string> m1(m.begin(), m.end());
    PrintMap(m1);

    // (7)
    cout << endl;
    cout << "(7) erase(const g) : Removes the key-value ‘g’ from the map." << endl;
    m.erase(200);
    m.erase(500);
    PrintMap(m);

    // (8)
    cout << endl;
    cout << "(8) erase(iterator position) : Removes the element at the position pointed by the iterator." << endl;
    map<int, string>::iterator it = m.find(300);
    if (it != m.end())
    {
        m.erase(it);
    }
    PrintMap(m);
    
    it = m.find(400);
    if (it != m.end())
    {
        m.erase(it);
    }
    PrintMap(m);

    // (9)
    cout << endl;
    cout << "(9) clear() : Clear all the elements from the map." << endl;
    m.clear();
    PrintMap(m);
    if (m.empty())
    {
        cout << "TRUE :  Map m is empty ..." << endl;
    }
    else
    {
        cout << "FALSE : Map m is not empty..." << endl;
    }

    return 0;
}

/*
    Output
    ------
    size of Map m = 5
    KEY     ELEMENT
    ---     ------
    1  ->  Nadim
    2  ->  Ahmad
    3  ->  Mohammad
    4  ->  Eiba
    5  ->  Shazia
    
    (1) begin() : Returns an iterator to the first element in the map.
    1 -> Nadim
    
    (2) end() : Returns an iterator to the theoretical element that follows the last element in the map.
    5 -> Shazia
    
    (3) size() : Returns the number of elements in the map.
    size of Map m = 5
    
    (4) max_size() : Returns the maximum number of elements that the map can hold.
    Maximum element a Map m can hold = 230584300921369395
    
    (5) empty() : Returns whether the map is empty.
    FALSE : Map m is not empty...
    
    (6) pair insert(keyvalue, mapvalue) û Adds a new element to the map.
    
    size of Map m = 7
    KEY     ELEMENT
    ---     ------
    100  ->  ABC
    200  ->  DEF
    300  ->  GHI
    400  ->  LMN
    500  ->  PQR
    600  ->  STU
    700  ->  VXY
    
    size of Map m = 7
    KEY     ELEMENT
    ---     ------
    100  ->  ABC
    200  ->  DEF
    300  ->  GHI
    400  ->  LMN
    500  ->  PQR
    600  ->  STU
    700  ->  VXY
    
    (7) erase(const g) : Removes the key-value ægÆ from the map.
    
    size of Map m = 5
    KEY     ELEMENT
    ---     ------
    100  ->  ABC
    300  ->  GHI
    400  ->  LMN
    600  ->  STU
    700  ->  VXY
    
    (8) erase(iterator position) : Removes the element at the position pointed by the iterator.
    
    size of Map m = 4
    KEY     ELEMENT
    ---     ------
    100  ->  ABC
    400  ->  LMN
    600  ->  STU
    700  ->  VXY
    
    size of Map m = 3
    KEY     ELEMENT
    ---     ------
    100  ->  ABC
    600  ->  STU
    700  ->  VXY
    
    (9) clear() : Removes all the elements from the map.
    
    size of Map m = 0
    KEY     ELEMENT
    ---     ------
    TRUE :  Map m is empty ...

*/