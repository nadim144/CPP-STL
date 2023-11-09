// Vector_(10)_VectorOfMap.cpp : This file contains th e 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<map>
using namespace std;

#include <iostream>
#include <vector>
#include <map>

int main()
{
    // Create a vector of maps with integer keys and integer values
    std::vector<std::map<int, int>> v;

    // Add some data to the vector of maps
    for (int i = 0; i < 5; i++) 
    {
        std::map<int, int> m;
        for (int j = 1; j <= 3; j++)
        {
            m.insert(make_pair(j, j*i));
        }
        v.push_back(m);
    }

    // Access and print the data
    for (int i = 0; i < v.size(); i++) 
    {
        cout << "Vector " << i << endl;
        for (map<int, int>::iterator it = v[i].begin(); it != v[i].end(); ++it )
        {
            cout << it->first << "->" << it->second << endl;;
        }
        std::cout << std::endl;
    }

    return 0;
}
