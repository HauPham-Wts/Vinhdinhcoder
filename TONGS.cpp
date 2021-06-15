/*
Tính tổng: S = 1 + 1/2! + 1/3! + ... + 1/n!, với giá trị của n nhập vào từ bàn phím. 
Kết quả làm tròn 10 chữ số thập phân. (1 < N < 100)
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	unsigned long long n;
	cin >> n;
	double sum = 0, temp = 1;
	for (int i = 1; i <= n; i++) {
		temp *= i;
		sum = sum + (1 / temp);
	}
	cout << setprecision(10) << fixed << sum;
	return 0;
}
