// Gfg_(3)_Number Line Jumps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

    The first kangaroo starts at location  and moves at a rate of  meters per jump.
    The second kangaroo starts at location  and moves at a rate of  meters per jump.
    You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
    
    Example
    x1 = 2
    v1 = 1
    x2 = 1
    v2 = 2
    
    After one jump, they are both at , (, ), so the answer is YES.
    
    Function Description
    
    Complete the function kangaroo in the editor below.
    
    kangaroo has the following parameter(s):
    
    int x1, int v1: starting position and jump distance for kangaroo 1
    int x2, int v2: starting position and jump distance for kangaroo 2
    Returns
    
    string: either YES or NO
    Input Format
    
    A single line of four space-separated integers denoting the respective values of , , , and .
    
    Constraints
    
    Sample Input 0
    
    0 3 4 2
    Sample Output 0
    
    YES
*/


#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    string result;
    int PosDiff = 0;
    int JumpDiff = 0;
    int x1Sum = x1;
    int x2Sum = x2;

    if (x2 > x1 && v1 > v2)
    {
        PosDiff = x2 - x1;
        JumpDiff = v1 - v2;
        for (int i = 0; i < (int)PosDiff / JumpDiff; i++)
        {
            x1Sum = x1Sum + v1;
            x2Sum = x2Sum + v2;
        }
        if (x1Sum == x2Sum)
        {
            result = "YES";
        }
        else
        {
            result = "NO";
        }
    }
    else if (x1 > x2 && v2 > v1)
    {
        PosDiff = x1 - x2;
        JumpDiff = v2 - v1;
        for (int i = 0; i < (int)PosDiff / JumpDiff; i++)
        {
            x1Sum = x1Sum + v1;
            x2Sum = x2Sum + v2;
        }
        if (x1Sum == x2Sum)
        {
            result = "YES";
        }
        else
        {
            result = "NO";
        }
    }
    else
    {
        result = "NO";
    }
    return result;
}


int main()
{
    string result = kangaroo(0, 3, 4, 2);
    cout << result << endl;
    return 0;
}

