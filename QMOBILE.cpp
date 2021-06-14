/*
Bạn Lan sử dụng điện thoại Q.Mobile, bạn thắc mắc là làm thế nào mà khi có người gọi điện thoại đến thì điện thoại có thể đọc số của người gọi đến. Ví dụ 0942250787 là 0   9   4   2   2   5   0   7   8   7.
Em hãy lập trình giúp cho bạn nhập vào một số điện thoại có 10 chữ số và đọc các số này ra màn hình, các số cách nhau một dấu cách.
*/
#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack<int> s;
	while (n != 0) {
		int temp = n % 10;
		s.push(temp);
		n /= 10;
	}
	cout << 0 << " ";
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
}
