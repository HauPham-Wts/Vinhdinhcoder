/*
Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0 (a khác 0) với a, b, c là các hệ số nguyên nhập vào từ bàn phím. Kết quả thông báo theo yêu cầu, nghiệm làm tròn hai chữ số thập phân.

Dữ liệu nhập:

  - Gồm a, b, c theo thứ tự cách nhau dấu cách

Kết quả:

  - Kết luận nghiệm theo yêu cầu.
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	while (a == 0) {
		cin >> a;
	}
	double del = b * b - 4 * a * c;
	if (del > 0) {
		cout << "PT CO HAI NGHIEM" << endl;
		cout << "X1 = " << setprecision(2) << fixed << (-b + sqrt(del)) / (2 * a) << endl;
		cout << "X2 = " << setprecision(2) << fixed << (-b - sqrt(del)) / (2 * a);
	}
	else if (del < 0) {
		cout << "VO NGHIEM";
	}
	else {
		cout << "PT CO NGHIEM KEP" << endl;
		cout << "X = " << setprecision(2) << fixed << -b / (2 * a);
	}
	return 0;
}