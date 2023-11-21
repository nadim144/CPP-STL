// Vector_(14)_Apple_and_Orange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int AppleCount = 0;
    int OrangeCount = 0;
    for (vector<int>::iterator itrApple = apples.begin(); itrApple != apples.end(); ++itrApple)
    {
        *itrApple = *itrApple + a;
    }
    for (vector<int>::iterator itrOrange = oranges.begin(); itrOrange != oranges.end(); ++itrOrange)
    {
        *itrOrange = *itrOrange + b;
    }

    for (vector<int>::iterator itrApple = apples.begin(); itrApple != apples.end(); ++itrApple)
    {
        if (*itrApple >= s)
            AppleCount++;
    }

    for (vector<int>::iterator itrOrange = oranges.begin(); itrOrange != oranges.end(); ++itrOrange)
    {
        if (*itrOrange <= t)
            OrangeCount++;
    }
    cout << AppleCount << endl;
    cout << OrangeCount << endl;
}

int main()
{
    vector<int> apples = { -2, 2, 1 };
    vector<int> oranges = { 5, -6 };
    countApplesAndOranges(7, 11, 5, 15, apples, oranges);

    return 0;
}