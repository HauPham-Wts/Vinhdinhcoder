/*
Lập trình tính tổng các số lẻ từ 1  đến N (1 < N < 1 triệu). Thông báo kết quả ra màn hình.

T = 1 + 3 + ... + ...
*/
#include<iostream>
using namespace std;
int main() {
	unsigned long long n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}
