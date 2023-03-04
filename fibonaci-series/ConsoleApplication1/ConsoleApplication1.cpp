#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonaci(int n) {
	vector<int>ans;
	int first = 0;
	int second = 1;
	ans.push_back(first);
	ans.push_back(second);
	for (int i = 0; i < n; i++) {
		int next = first + second;
		ans.push_back(next);
		first = second;
		second = next;
	}
	return ans;
}

int main() {
	vector <int> ans;
	int n;
	cout << "enter the number till you want to generate the fibonacci series :- ";
	cin >> n;
	ans = fibonaci(n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans.at(i) << " ";
	}

}

