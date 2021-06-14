/*Một người đi xe đạp với tốc độ 10km/h và một người đi xe máy với tốc độ 30km/h cùng xuất phát tại một vị trí, cùng thời điểm và cùng hướng.

 Lập trình tính khoảng cách giữa hai người sau t giờ (t là số nguyên dương, t≤15). Dữ liệu t được nhập vào từ bàn phím, kết quả in ra màn hình.*/
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	cout << (30 * t) - (10 * t);
}
