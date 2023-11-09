// Vector_(4).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Modifiers
    ---------
    (1) assign() – It assigns new value to the vector elements by replacing old ones
    (2) push_back() – It push the elements into a vector from the back
    (3) pop_back() – It is used to pop or remove elements from a vector from the back.
    (4) insert() – It inserts new elements before the element at the specified position
    (5) erase() – It is used to remove elements from a container from the specified position or range.
    (6) swap() – It is used to swap two vectors of same type. Sizes may differ.
    (7) clear() – It is used to remove all the elements of the vector container
    (8) emplace() – It extends the container by inserting new element at specific position
    (9) emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/


#include <iostream>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& v)
{
    cout << "Size of vector v = " << v.size()<<endl;
    cout << "Capacity of vector v = " << v.capacity()<<endl;
    cout << "Print vector elements = ";
    for (vector<int>::const_iterator it  = v.cbegin(); it != v.cend(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void PrintVectorReverseOrder(const vector<int>& v)
{
    cout << endl;
    cout << "Size of vector v = " << v.size()<<endl;
    cout << "Capacity of vector v = " << v.capacity()<<endl;
    cout << "Print vector elements in reverse order = ";
    for (reverse_iterator<vector<int>::const_iterator> it = v.crbegin(); it != v.crend(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;              // Empty vector v.
    v = { 3, 6, 4, 7, 9 };      // Initialize vector v
    PrintVector(v);
    PrintVectorReverseOrder(v);

    // (1) - v.assig() - It will assign new value to all vector element or for specific range
    cout << endl;
    cout << "(1) - v.assig() : It will assign new value to all vector element or for specific range" << endl;
    v.assign(v.size(), 0);  // Assign 0 to all elements of vector v.
    PrintVector(v);

    // (2) push_back() – It push the elements into a vector from the back
    cout << endl;
    cout << "(2) - push_back() : It push the elements into a vector from the back" << endl;
    v = { 3, 6, 4, 7, 9 };
    v.resize(v.size() + 5);
    
    for (vector<int>::iterator it = v.begin() + 5; it != v.end(); ++it)
    {
        *it = (static_cast<int>(v.size()) + 1);
    }
    PrintVector(v);
    PrintVectorReverseOrder(v);

    // (3) pop_back() – It is used to pop or remove elements from a vector from the back.
    cout << endl;
    cout << "(3) - pop_back() : It is used to pop or remove elements from a vector from the back" << endl;
    v.pop_back(); // pop first element from last
    v.pop_back(); // pop second element from last
    PrintVector(v);
    PrintVectorReverseOrder(v);

    // (4) insert() – It inserts new elements before the element at the specified position
    cout << endl;
    cout << "(4) - insert() : It inserts new elements before the element at the specified position" << endl;
    vector<int>::const_iterator it = v.cbegin() + 6;
    v.insert(it, 77);
    PrintVector(v);
    PrintVectorReverseOrder(v);
    
    vector<int>::const_iterator itt = v.cbegin() + 6;
    v.insert(itt, {88, 99, 100});
    PrintVector(v);
    PrintVectorReverseOrder(v);

    // (5) erase() – It is used to remove elements from a container from the specified position or range.
    cout << endl;
    cout << "(5) - erase() : It is used to remove elements from a container from the specified position or range." << endl;
    cout << "Erase all elements from vector v." << endl;
    v.erase(v.begin(), v.end());
    PrintVector(v);
    PrintVectorReverseOrder(v);
    
    cout << endl;
    //Initialize vector agian after erase v.
    v = { 11, 11, 77, 100, 99, 88, 11, 9, 7, 4, 6, 3 };
    cout << "Erase all elements from index 2 to 5." << endl;
    v.erase(v.cbegin() + 2, v.cbegin() + 5);
    PrintVector(v);
    PrintVectorReverseOrder(v);


    // (6) swap() – It is used to swap two vectors of same type. Sizes may differ.
    cout << endl;
    cout << "(6) - swap() : It is used to swap two vectors of same type. Sizes may differ." << endl;

    vector<int> v1{ 1,2,3,4,5 };
    vector<int> v2{ 6,7,8,9,10 };

    cout << endl;
    cout << "Print v1 and v2 before swaping ..." << endl;
    PrintVector(v1);
    PrintVector(v2);
    
    v1.swap(v2);
    
    cout << endl;
    cout << "Print v1 and v2 after swaping ..." << endl;
    PrintVector(v1);
    PrintVector(v2);

    // (7) clear() – It is used to remove all the elements of the vector container
    cout << endl;
    cout << "(7) - clear() : It is used to remove all the elements of the vector v and use shrin_to_fit to make capacity 0." << endl;
    
    v1.clear();
    v1.shrink_to_fit();
    PrintVector(v1);

    // (8) emplace() - It extends the container by inserting new element at position"
    cout << endl; 
    cout << "(8) - emplace() : It extends the container by inserting new element at position" << endl;
    //v = { 11, 11, 77, 100, 99, 88, 11, 9, 7, 4, 6, 3 };
    v.emplace(v.begin() + 2, 999);
    PrintVector(v);

    // (9) emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
    cout << endl;
    cout << "(9) - emplace_back() : It is used to insert a new element into the vector container, the new element is added to the end of the vector" << endl;
    v.emplace_back(444);
    PrintVector(v);

    return 0;
}

