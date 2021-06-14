#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int N = 30 * n;
	cout << N * (N - 1) / 2;
}