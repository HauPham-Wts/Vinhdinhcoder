/*
Chương trình dịch tiếng Anh các thứ trong tuần.

Em hãy lập trình cho phép người dùng nhập vào một số nguyên từ 2 đến 8 và thông báo thứ tương ứng ra màn hình.
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	switch (n) {
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	case 8:
		cout << "Sunday";
		break;
	}
	return 0;
}