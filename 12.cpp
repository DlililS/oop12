#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;
int main()
{
    int n = 4;
    Complex arr[4]{ 5 + 1, 9 - 7, 1 + 4, 7 + 3 };

    Sort(arr, n);
}