/*
Số hoàn hảo là số có tổng các ước số nhỏ hơn nó bằng chính nó.

        Ví dụ 28 là số hoàn hảo (28 = 1 + 2 + 4 + 7 + 14).

        Cho một số nguyên n, hãy kiểm tra xem n có phải là số hoàn hảo hay không.

Dữ liệu nhập: Là số nguyên n (2 ≤ n ≤ 107)

Dữ liệu xuất: Nếu n là số hoàn hảo in ra YES. Nếu không in ra NO.
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	unsigned long long n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
