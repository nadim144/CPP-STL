// Vector_(10)_VectorOfVector_DiagonalDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Given a square matrix, calculate the absolute difference between the sums of its diagonals.
    For example, the square matrix  is shown below:
    1 2 3
    4 5 6
    9 8 9  
    The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .
    Function description
    Complete the  function in the editor below.
    diagonalDifference takes the following parameter:
    int arr[n][m]: an array of integers
    Return
    int: the absolute diagonal difference
    Input Format
    The first line contains a single integer, , the number of rows and columns in the square matrix .
    Each of the next  lines describes a row, , and consists of  space-separated integers .
    Constraints
    Output Format
    Return the absolute difference between the sums of the matrix's two diagonals as a single integer.
    Sample Input
    3
    11 2 4
    4 5 6
    10 8 -12
    Sample Output
    15
    Explanation
    The primary diagonal is:
    11
       5
         -12
    Sum across the primary diagonal: 11 + 5 - 12 = 4
    The secondary diagonal is:
         4
       5
    10
    Sum across the secondary diagonal: 4 + 5 + 10 = 19
    Difference: |4 - 19| = 15
    Note: |x| is the absolute value of x

*/

#include <iostream>
#include<vector>
using namespace std;

void PrintVectorOfVector(vector<vector<int>>& v)
{
    cout << "size of Vector of vector v = " << v.size() << endl;
    for (int i = 0; i <v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int diagonalDifference(vector<vector<int>> arr)
{
    int left_to_right_sum = 0;
    int right_to_left_sum = 0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr.size(); j++)
        {
            if (i == j)
            {
                int value = arr[i][j];
                left_to_right_sum = left_to_right_sum + value;
            }
            
            if ((i + j) == (arr.size() - 1))
            {
                int value = arr[i][j];
                right_to_left_sum = right_to_left_sum + value;
            }
        }
    }

    /*
        1 2 3
        4 5 6
        9 8 9
    */
    

    return  abs(left_to_right_sum - right_to_left_sum);

}



int main()
{
    vector<vector<int>> v = { {1, 2, 3}, {4, 5, 6}, {9, 8, 9} };
    PrintVectorOfVector(v);
    int x = diagonalDifference(v);
    return 0;
}

