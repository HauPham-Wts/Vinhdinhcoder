/*Cho một hình nón có chiều cao h và bán kính đáy R. Em hãy lập trình tính thể tích của hình nón nói trên. h và R là các số nguyên dương được nhập vào từ bàn phím. Kết quả làm tròn 8 chữ số thập phân. Đáp án của bạn được chấm đúng nếu sai khác không quá 10-3 với đáp án của bài.*/
#include<iostream>
#include<iomanip>
// Use <bits/stdc++.h> replace other library
using namespace std;
int main() {
	const double PI = 2 * acos(0);
	double r, h;
	cin >> h >> r;
	cout <<setprecision(8)<<fixed<< (PI * (r * r) * h) / 3;
}