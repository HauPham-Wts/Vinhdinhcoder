/*Hoa gọi điện thoại cho Huệ để trao đổi bài. Cứ mỗi phút dùng điện thoại phải trả số tiền là x đồng. Cuộc trao đổi kéo dài t phút. Em hãy lập trình tính số tiền mà Hoa phải thanh toán cho cuộc trao đổi này. Với x và t là các số nguyên dương ≤ 10000 được nhập vào từ bàn phím.*/
#include<iostream>
using namespace std;
int main() {
	long long x, t;
	cin >> x >> t;
	cout << x * t;
}