// binaryToDecimal.cpp : This file contains the 'main' function. Program execution begins and ends there.
// converting a binary digit number to decimal number

#include <iostream>
using namespace std;


// function for decimal to binary
int DecToBin(int n) {
    int ans = 0;
    int i = 0;
    while (n != 0) {
        int dig = n % 10;
        if(dig==1)
            ans = pow(2, i) + ans;
       
        n = n / 10;
        i++;
    }
    return ans;
}
int main()
{
    cout << DecToBin(1010);
}
