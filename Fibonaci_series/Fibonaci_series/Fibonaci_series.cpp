// Fibonaci_series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//fibonacci series can be programmed/code in different ways but here we chose the easy and brute force approach to solve it

#include <iostream>
#include<vector>
using namespace std;


// function for printing a fibonacci series 
void fibonaci_series(int x) {
	int first = 0;
	int second = 1;
	cout << first << " " << second << " ";
	for (int i = 0; i < x -2 ; i++) {
		int next = first + second;
		cout << next<<" ";
		first = second; 
		second = next; 
	}
}

// you can also create a vector and store in it

vector<int> fibonaci_Series(int x) {
	int first = 0;
	int second = 1;
	vector<int>ans;
	ans.push_back(first);
	ans.push_back(second);
	for (int i = 0; i < x - 2; i++) {
		int next = first + second;
		ans.push_back(next);
		first = second;
		second = next;
	}
	return ans;
}
int main()
{
	// fibonaci_series(10);
	vector<int> ans = fibonaci_Series(10);
	for (int i = 0; i < 10; i++) {
		cout << ans[i] << " ";
	}
}

