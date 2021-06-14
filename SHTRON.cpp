/*Lập trình tính và thông báo ra màn hình diện tích hình tròn có bán kính R là số nguyên dương được nhập vào từ bàn phím. 0 ≤ R ≤ 109. Kết quả làm tròn đến phần nguyên.*/
#include<iostream>
#include<iomanip>
// Use #include<bits/stdc++.h> replace other library!
using namespace std;
int main() {
	const double PI = 2 * acos(0);
	long long r;
	cin >> r;
	cout <<setprecision(0)<<fixed<< (r * r) * PI;
}