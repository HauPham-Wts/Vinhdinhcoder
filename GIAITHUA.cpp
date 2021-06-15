/*
Lập trình nhập n từ bàn phím (0 < n < 20), tính giai thừa của n (n!).

N! = 1 * 2 * 3 * ... * N
*/
#include<iostream>
using namespace std;
int main() {
	unsigned long long n, mul = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		mul *= i;
	}
	cout << mul;
	return 0;
}
