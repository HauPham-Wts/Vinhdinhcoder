/*
Chi nhánh điện lực Quảng Trị đưa ra hai mức tính tiền điện như sau:

               - Dưới 200 Kwh mức giá 1500đ/kwh

               - Từ 200 kwh trở lên mức giá là 3000đ/kwh.

     Hãy giúp bạn tính tiền điện của nhà bạn Nam biết rằng tháng vừa rồi nhà bạn Nam tiêu thụ hết N (kwh).

Dữ liệu vào: N được nhập vào từ bàn phím

Kết quả: in tiền điện ra màn hình

Ràng buộc: 0 < N < 1000
*/
#include<iostream>
using namespace std;
int main() {
	unsigned int n;
	cin >> n;
	if (n < 200) {
		n *= 1500;
		cout << n;
	}
	else {
		n *= 3000;
		cout << n;
	}
	return 0;
}