/*
Bạn Nam mất trật tự trong giờ học thể dục nên bị thầy giáo phạt. Hình phạt của thầy như sau: bạn Nam đứng nghiêm, khi thầy hô "trái" thì Nam bước sang trái một mét, thầy hô "phải" thì Nam bước sang phải một mét. Hỏi sau n lần thầy hô như vậy thì bạn Nam cách xa vị trí ban đầu bao nhiêu mét?

Dữ liệu nhập:

- Dòng thứ nhất là số n (1 ≤ n ≤ 1000).

- Dòng tiếp theo gồm n số 1 hoặc 2, mỗi số cách nhau một khoảng trắng. Nếu là số 1 thì thầy giáo hô "trái", nếu là số 2 thì thầy giáo hô "phải".

Dữ liệu xuất: Là khoảng cách của Nam sau n lần hô so với vị trí ban đầu.
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	unsigned short n;
	int sum = 0;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			sum -= 1;
		}
		if (a[i] == 2) {
			sum += 1;
		}
	}
	cout << abs(sum);
	return 0;
}
