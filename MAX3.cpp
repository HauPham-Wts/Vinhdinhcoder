/*
Lập trình tìm số lớn nhất (Max) trong 3 số nguyên a, b, c được nhập vào từ bàn phím.

Dữ liệu nhập:

  - Gồm 3 số nguyên a, b, c theo thứ tự, cách nhau một dấu cách.

Kết quả:

  - in đáp án chính xác theo yêu cầu
*/
#include<iostream>
using namespace std;
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c) {
		cout << "So lon nhat: " << a;
	}
	else if (b >= c) {
		cout << "So lon nhat: " << b;
	}
	else {
		cout << "So lon nhat: " << c;
	}
}