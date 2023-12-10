// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <iostream>

extern "C" __declspec(dllexport)int TestNadim(char* data)
{
    printf("This is Nadim Test - %s\n", data);
    fflush(stdout);
    return 1;
}