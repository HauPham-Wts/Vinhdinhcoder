/*
Lập trình nhập vào từ bàn phím 3 số nguyên x, y, z là ba cạnh của một tam giác. 
Kiểm tra và thông báo ra màn hình đây có phải là 3 cạnh của một tam giác cân hay không.
*/
#include<iostream>
using namespace std;
int main() {
	long long x, y, z;
	cin >> x >> y >> z;
	if (x == y || x == z || y == z) {
		cout << "LA TAM GIAC CAN";
	}
	else {
		cout << "KHONG PHAI TAM GIAC CAN";
	}
}