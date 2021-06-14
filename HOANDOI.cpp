/*Lập trình nhập vào từ bàn phím 2 số nguyên a và b, hoán đổi giá trị của chúng cho nhau rồi in kết quả 2 số đã hoán đổi ra màn hình.*/
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b;
}