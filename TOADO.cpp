/*
Lập trình nhập từ bàn phím hai cặp số nguyên (x,y) (u,v) tương ứng là tọa độ điểm A và B trong mặt phẳng tọa độ. 
Tính và thông báo ra màn hình điểm nào gần gốc tọa độ hơn. (Gợi ý: Tính khoảng cách d2 = x2 + y2)
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long x, y, u, v;
	cin >> x >> y >> u >> v;
	if (abs(x * x + y * y) > abs(u * u + v * v)) {
		cout << "B";
	}
	else if (abs(x * x + y * y) < abs(u * u + v * v)) {
		cout << "A";
	}
	else {
		cout << "BANG NHAU";
	}
	return 0;
}