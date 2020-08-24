#pragma once
#include <iostream>

#include <iomanip>
using namespace std;

#pragma warning(disable : 4996)

struct Array createArray(struct Array ArrayElements);

struct Array fillArray(struct Array ArrayElements);

int freeMemory(struct Array ArrayElements);


int print(struct Array ArrayElements);

struct Array
{
    int rows, column, depth, arrayLength;
    int*** arrayPtr = NULL;
};