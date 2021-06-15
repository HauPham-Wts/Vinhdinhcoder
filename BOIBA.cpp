/*
Với m và n là hai số nguyên được nhập vào từ bàn phím (0 < a < b < 106). Đếm số lượng các số chia hết cho 3 trong phạm vi từ a đến b. 
Đưa ra màn hình kết quả là số lượng đếm được.
*/
#include<iostream>
using namespace std;
int main() {
	int a, b, dem = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0) {
			dem++;
		}
	}
	cout << dem;
	return 0;
}
