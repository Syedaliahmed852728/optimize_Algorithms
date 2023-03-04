// isPrimeOrNot.cpp : This file contains the 'main' function. Program execution begins and ends there.
// here we find out whether the partiular number is prime or not 
// there are different ways but we chose the simple method and brute force approach

// time complexity = O(log N)


#include <iostream>
using namespace std;

// wheter the number is prime or not

bool isPrime(int n) {
    for (int i = 2; i < n - 1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int x = 7;
    cout << isPrime(x);
}

