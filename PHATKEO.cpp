/*
Một giáo viên phát kẹo cho các em học sinh theo qui tắc sau: em đầu tiên được nhận 1 viên kẹo, em tiếp theo nhận nhiều hơn em trước đó 3 viên. 
Hỏi nếu có N học sinh thì tổng số kẹo phải có để Giáo viên phát đủ cho cả lớp là bao nhiêu? (0 < N < 45000)
*/
#include<iostream>
using namespace std;
int main() {
	unsigned long long n, sum = 0, temp = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += temp;
		temp += 3;
	}
	cout << sum;
}
