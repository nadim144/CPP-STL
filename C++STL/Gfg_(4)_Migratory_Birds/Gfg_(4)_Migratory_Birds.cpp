// Gfg_(4)_Migratory_Birds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void PrintMap(map<int, int>& m)
{
    cout << "Key" << "\t" << "Value" << endl;
    cout << "---" << "\t" << "-----" << endl;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << "\t" << it->second << endl;
    }
}

int migratoryBirds(vector<int> arr)
{
    map<int, int>m;
    int ele = -1;
    int maxCount = 0;
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        m[*it]++;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->second > maxCount)
        {

            ele = it->first;
            maxCount = it->second;
        }
    }
    return ele;
}

int main()
{
    vector<int> v = { 1, 4 ,4, 4, 5, 3 };
    migratoryBirds(v);
    std::cout << "Hello World!\n";
}
