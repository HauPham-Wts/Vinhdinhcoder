/*
Cho ba số nguyên p, q, r (p < q < r và ≠ 0). Kiểm tra ba số này theo thứ tự nhập vào có tạo thành một cấp số nhân hay không.

Em hãy lập trình thực hiện yêu cầu trên. Kết quả thông báo ra YES hoặc NO tương ứng.
*/
#include<iostream>
using namespace std;
int main() {
	double p, q, r;
	cin >> p >> q >> r;
	if ((q / p) == (r / q)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}