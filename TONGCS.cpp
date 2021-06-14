/*Một số nguyên N có 4 chữ số, em hãy lập trình tính tổng các chữ số của N. Ví dụ nhập vào số N là 2345 thì kết quả là 14 (2+3+4+5 = 14).*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n != 0) {
		int temp = n % 10;
		n /= 10;
		ans += temp;
	}
	cout << ans;
}