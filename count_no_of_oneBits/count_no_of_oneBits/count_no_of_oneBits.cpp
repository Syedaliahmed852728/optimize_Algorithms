// count_no_of_oneBits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  here we count the number of one bit in a particular number when the number is written in binary

#include <iostream>
using namespace std;

// function for counting the ONE BIT/BITS

int countOneBits(int n) {
    int counter = 0;
    while (n != 0) {
        if (n & 1)
            counter++;;
        n = n >> 1;
    }
    return counter;
}

int main()
{
    cout << countOneBits(7);
}

