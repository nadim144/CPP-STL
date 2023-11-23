// Gfg_(5)_Counting_Valleys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int countingValleys(int steps, string path)
{
    int sealevel = 0;
    int vallyCount = 0;
    bool insideVally = false;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
        {
            sealevel++;
        }
        else if (path[i] == 'D')
        {
            sealevel--;
        }

        if (sealevel < 0 && !insideVally)
        {
            vallyCount++;
            insideVally = true;
        }
        else if (sealevel > 0)
        {
            insideVally = false;
        }
    }
    return vallyCount;
}

int main()
{
    countingValleys(12, "DDUUDDUDUUUD");
    return 0;
}

