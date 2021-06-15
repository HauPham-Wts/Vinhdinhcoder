/*
Tuấn tham gia sinh hoạt Đội, cậu được phát một lá cờ semaphore, lá cờ có dạng là một tam giác vuông cân. 
Với một số nguyên n, bạn hãy giúp Tuấn vẽ một lá cờ semaphore.
Dữ liệu vào: Nhập số nguyên n ( 1<= n <= 100).

Dữ liệu ra: Là tam giác vuông cân gồm các dấu *, cạnh góc vuông có chiều dài n. 
Xem thêm ví dụ để hiểu cách xuất dữ liệu.
*/
#include<iostream>
using namespace std;
int main() {
	unsigned short n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
