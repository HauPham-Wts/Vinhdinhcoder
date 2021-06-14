/*
Nhà Tèo trong khu vực sinh thái được ban quản lý cấp nhà và đào hồ cá. 
Hồ cá nhà bạn tèo được đào có dạng hình hộp chữ nhật; có mặt hồ là hình chữ nhật kích thước (a, b) đơn vị mét. Chiều sâu có kích thước h (mét). 
Tèo đang thắc mắc liệu cần phải bơm vào hồ bao nhiêu lít nước để đầy hồ. Tuy nhiên Tèo mới có 6 tuổi tính mãi chưa ra, bạn hãy lập trình giúp tèo tính nhé.
*/
#include<iostream>
using namespace std;
int main() {
	long long a, b, h;
	cin >> a >> b >> h;
	cout << (a * b * h) * 1000;
}