/*Lập trình tính và thông báo ra màn hình diện tích tam giác vuông với hai cạnh góc vuông a và b là các số nguyên (1 ≤ a, b ≤ 106). Kết quả làm tròn 2 chữ số thập phân.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	cout <<setprecision(2)<<fixed<< (a * b) / 2;
}