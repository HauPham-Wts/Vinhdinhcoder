/*
Với a và b là hai số nguyên được nhập vào từ bàn phím. 
Em hãy lập trình tính tổng các số chẵn trong phạm vi từ a đến b. (1 < a < b < 226)
*/
#include<iostream>
using namespace std;
int main() {
	unsigned long long a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}
