/*Em hãy lập trình tính trung bình cộng của 4 số nguyên. Với điều kiện chỉ được dùng 2 biến. Kết quả làm tròn 2 chữ số thập phân.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	double ans = 0;
	for (int i = 0; i < 4; i++) {
		cin >> n;
		ans += n;
	}
	cout <<setprecision(2)<<fixed<< ans/4;
}