/*
 Nhập n số nguyên bất kỳ từ bàn phím. Đếm số các số dương và số các số âm. In kết quả ra màn hình. (1 < N < 1000)
*/
#include<iostream>
using namespace std;
int main() {
	int n, sd = 0, sa = 0;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] > 0) {
			sd++;
		}
		else {
			sa++;
		}
	}
	cout << "SO DUONG: " << sd << endl;
	cout << "SO AM: " << sa;
	return 0;
}
