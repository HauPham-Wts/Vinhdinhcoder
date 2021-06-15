/*
 Thầy Phú phát kẹo cho các em học sinh theo qui tắc sau: Em đầu tiên được nhận 1 viên kẹo, em tiếp theo nhận nhiều hơn em trước đó 3 viên. 
 Lớp có N học sinh tuy nhiên Thầy chỉ mang theo K cái kẹo thôi. Bạn hãy tính giúp thầy số lượng học sinh nhiều nhất nhận được kẹo. 
 Thầy Phú rất nguyên tắc nên phát đúng theo quy định trên, kẹo còn thừa không đủ để phát theo quy tắc trên thì Thầy đem về cho cu Sắn.
Dữ liệu nhập:
- Gồm hai số nguyên dương N, K
Kết quả xuất:
- in ra một số nguyên duy nhất là số lượng bạn nhận được kẹo
Ràng buộc:
- 1 < N < 105
- 1 < K < 1015
 */
#include<iostream>
using namespace std;
int main() {
	unsigned long long n, k, sum = 0, temp = 1, hmm = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		sum += temp;
		if (sum <= k) {
			hmm++;
		}
		temp += 3;
	}
	cout << hmm;
	return 0;
}

