// DecimaToBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
// here we conver the decimal number into the binary form

#include <iostream>
using namespace std;

// function 
int DecToBinar(int n) {
	int ans = 0;
	int i = 0;
	while (n != 0) {
		int bit = n & 1;
		ans = (pow(10, i)*bit) + ans;
		n = n >> 1;
		i++;
	}
	return ans;
}
int main()
{
	cout<<DecToBinar(12);
}

