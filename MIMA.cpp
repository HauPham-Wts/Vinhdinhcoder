/*
Nhập n rồi nhập vào một dãy n số nguyên bất kỳ từ bàn phím. 
Tìm giá trị lớn nhất và nhỏ nhất của dãy số đó. in kết quả tìm được ra màn hình. ( 0 < n < 10000)
*/
#include<iostream>
using namespace std;
int main() {
	unsigned short n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}
	cout << "SO LON NHAT: " << max << endl;
	int min = a[n - 1];
	for (int i = n - 1; i >= 0; i--) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	cout << "SO BE NHAT: " << min;
}
