// Vector_(13)_Grading Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    int fivefactor = 0;
    int nextfivemultipliervalue = 0;
    int diff = 0;
    for (vector<int>::iterator it = grades.begin(); it != grades.end(); ++it)
    {
        if (*it > 33)
        {
            fivefactor = 33 / 5;
            fivefactor++;
            nextfivemultipliervalue = fivefactor * 5;
            diff = nextfivemultipliervalue - *it;
            if (diff < 3)
            {
                *it = nextfivemultipliervalue;
            }
        }
    }
    return grades;
}

int main()
{
    vector<int>v{ 73, 67, 38, 33 };
    vector<int>result = gradingStudents(v);
    return 0;
}
