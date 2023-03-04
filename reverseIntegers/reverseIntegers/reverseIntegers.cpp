// reverseIntegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// here we reverse the number using a very simple method

#include <iostream>
using namespace std;


// function reverse a number

int reverse(int n) {
    int i = 0;
    int ans = 0;
    while (n != 0) {
        int dig = n % 10;
        if (ans<INT_MIN || ans>INT_MAX)          // here we handled the exception case if the 'ans' is not in a range of integer
            return 0;
        ans = ans * 10 + dig;
        n /= 10;
    }
    return ans;
}
int main()
{
    cout << reverse(123);
   
}

