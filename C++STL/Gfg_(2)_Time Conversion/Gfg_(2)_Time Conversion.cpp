// Gfg_(2)_Time Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Given a time in - hour AM/PM format, convert it to military (24-hour) time.
    Note:   - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
            - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
    Example
    s = '12:01:00PM'
        Return '12:01:00'
    s = '12:01:00AM'
        Return '00:01:00'
    
    Function Description:
    Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.
    timeConversion has the following parameter(s):
    - string s: a time in 12 hour format
    
    Returns
    - string: the time in 24 hour format
    
    Input Format
    A single string  that represents a time in -hour clock format (i.e.:  or ).
    
    Constraints:
    All input times are valid
    Sample Input 0
        07:05:45PM
    Sample Output 0
        19:05:45
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(const string& str) 
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(":", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}

//int main()
//{
//    //string sAM = "AM";
//    //string sPM = "PM";
//    string s = "12:01:00PM";
//    //string stime{};
//    //vector<string> stokenize;
//    //int hh{};
//    //int mm{};
//    //int ss{};
//
//
//    //if (s.find(sAM) > 0)
//    //{
//    //    stime = s.substr(0, s.size() - 2);
//    //    stokenize = split(stime);
//    //    hh = stoi(stokenize[0]);
//    //    mm = stoi(stokenize[1]);
//    //    ss = stoi(stokenize[2]);
//    //}
//    //else if (s.find(sPM) > 0)
//    //{
//    //    stime = s.substr(0, s.size() - 2);
//    //    stokenize = split(stime);
//    //    hh = stoi(stokenize[0]);
//    //    mm = stoi(stokenize[1]);
//    //    ss = stoi(stokenize[2]);
//    //}
//
//    // convert string into integer
//    int hours = stoi(s.substr(0, 2)); //Extract "07"
//    string period = s.substr(8, 2); // Extract AM/PM
//
//    if (period == "PM" && hours != 12) 
//    {
//        hours += 12;
//    }
//    else if (period == "AM" && hours == 12)
//    {
//        hours = 0;
//    }
//
//    // Convert hours to two digits format (e.g., 8 -> "08")
//    string militaryTime = (hours < 10 ? "0" : "") + to_string(hours) + s.substr(2, 6);
//
//    //return militaryTime;
//
//
//    return 0;
//}
//

int main()
{
    int n = 4;
    for (int i = 1; i <= n; ++i) 
    {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) 
        {
            std::cout << " ";
        }

        // Print hash symbols
        for (int k = 1; k <= i; ++k) 
        {
            std::cout << "#";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }
}