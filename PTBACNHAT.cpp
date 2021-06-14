/*
Em hãy lập trình giải phương trình ax+b=0 với a và b nguyên nhập vào từ bàn phím. 
Kết quả làm tròn 2 chữ số thập phân.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "VO SO NGHIEM";
		}
		else {
			cout << "VO NGHIEM";
		}
	}
	else {
		cout << "PT CO NGHIEM" << endl;
		cout << "X = " << setprecision(2) << fixed << -b / a;
	}
	return 0;
}