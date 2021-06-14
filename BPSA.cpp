/*
Lập trình nhập vào từ bàn phím ba số nguyên m, n, k. Tính và thông báo ra màn hình bình phương của số âm và lập phương của số dương.

Dữ liệu vào:

  - m, n, k nhập vào từ bàn phím

Kết quả:

  - Thông báo ra màn hình kết quả tương ứng
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int m, n, k;
	cin >> m >> n >> k;
	if (m > 0) {
		cout << setprecision(0) << fixed << pow(m, 3);
	}
	else {
		cout << setprecision(0) << fixed << pow(m, 2);
	}
	cout << " ";
	if (n > 0) {
		cout << setprecision(0) << fixed << pow(n, 3);
	}
	else {
		cout << setprecision(0) << fixed << pow(n, 2);
	}
	cout << " ";
	if (k > 0) {
		cout << setprecision(0) << fixed << pow(k, 3);
	}
	else {
		cout << setprecision(0) << fixed << pow(k, 2);
	}
	return 0;
}
