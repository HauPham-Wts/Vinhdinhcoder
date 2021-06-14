/*
Để bù đắp thiệt hại cho nhân dân trong công tác phòng chống dịch cúm gia cầm, nhà nước hỗ trợ cho các hộ có gà thiêu hủy theo quy định: Loại 1: dưới một tháng tuổi a đồng/con; Loại 2: trên một tháng và dưới ba tháng là b đồng/con; Loại 3: từ 3 tháng trở lên là c đồng/con.
Một hộ nông dân có n con gia cầm phải tiêu hủy trong đó m con loại 1, k con loại 2 còn lại loại 3. (0 ≤ m, n, k ≤ 100.000)

Lập trình nhập dữ liệu a, b, c, m, n, k từ bàn phím và thông báo số tiền được đền bù của bác nông dân ra màn hình.
*/
#include<iostream>
using namespace std;
int main() {
	int a, b, c, m, n, k;
	cin >> a >> b >> c >> m >> n >> k;
	cout << (a * m) + (b * k) + (c * (n - m - k));
}