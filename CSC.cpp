/*
Cho ba số nguyên m, n, k (m < n < k). Nếu ba số này lập thành một cấp số cộng thì thì tính tổng 3 số này còn không thông báo không phải là cấp số cộng.

 Em hãy lập trình thực hiện yêu cầu trên. Với m, n, k là các số nguyên nhập vào từ bàn phím.
*/
#include<iostream>
using namespace std;
int main() {
	int m, n, k;
	cin >> m >> n >> k;
	if ((n - m) == (k - n)) {
		cout << m + n + k;
	}
	else {
		cout << "KHONG PHAI CAP SO CONG";
	}
}