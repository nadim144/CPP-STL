// Gfg_(6)_Variable_Sized_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//string ltrim(const string& str)
//{
//    string s(str);
//
//    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
//    return s;
//}
//
//string rtrim(const string& str)
//{
//    string s(str);
//    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
//    return s;
//}
//
//vector<string> split(const string& str)
//{
//    vector<string> tokens;
//
//    string::size_type start = 0;
//    string::size_type end = 0;
//
//    while ((end = str.find(" ", start)) != string::npos)
//    {
//        tokens.push_back(str.substr(start, end - start));
//        start = end + 1;
//    }
//    tokens.push_back(str.substr(start));
//    return tokens;
//}

int main()
{
    int N = 0, Q = 0;
    int q1 = 0, q2 = 0;

    cin >> N;
    cin >> Q;

    vector<vector<int>> vElemets(N);
    string str;
    for (int i = 0; i < N; i++)
    {
        getline(cin, str);
    }

    // Query 
    for (int i = 0; i < Q; i++)
    {
        cin >> q1;
        cin >> q2;

        cout << vElemets[q1][q2] << endl;
    }

    return 0;
}