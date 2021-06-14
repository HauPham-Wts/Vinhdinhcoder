/*Bạn Nam được bạn nhờ tính diện tích của tam giác khi biết độ dài ba cạnh là a, b, c. Em hãy lập trình giúp bạn tính diện tích của tam giác đó với a, b, c là các số nguyên dương < 3000 được nhập vào từ bàn phím. Kết quả thông báo ra màn hình, làm tròn 2 chữ số thập phân.
Dữ liệu nhập:

- a, b, c được nhập vào từ bàn phím theo đúng thứ tự

Kết quả:

- in ra một số suy nhất là đáp án của bài.
*/
#include<iostream>
#include<cmath>
#include<iomanip>
// Use <bits/stdc++.h> replace other library
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	// 1/2 circumference 
	double circumference = (a + b + c) / 2;
	cout << setprecision(2) << fixed << sqrt(circumference * (circumference - a) * (circumference - b) * (circumference - c));
}