/*
Biết rằng bộ ba số nguyên dương a, b, c được gọi là bộ số pytago nếu tổng các bình phương của hai số bằng bình phương của số còn lại.

          Viết chương trình kiểm tra a, b, c có phải là bộ số pytago hay không

Dữ liệu nhập:

          - a, b, c là các số nguyên dương nhập từ bàn phím

Kết quả:

         - in ra đáp án theo mẫu
*/
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
		cout << "Ba so da nhap la bo so Pi-ta-go";
	}
	else {
		cout << "Ba so da nhap khong la bo so Pi-ta-go";
	}
	return 0;
}