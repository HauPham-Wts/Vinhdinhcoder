/*
Em hãy lập trình giải bài toán sau;

Vừa Gà vừa Chó

Bó lại cho tròn

Ba mươi sáu con

Một trăm chân chẵn.

Hỏi có bao nhiêu Gà, bao nhiêu Chó?
*/
#include<iostream>
using namespace std;
int main() {
	int z;
	char x;
	cin >> x;
	if (x == '.') {
		for (int i = 2; i <= 36; i++) {
			z = 2 * i + 4 * (36 - i);
			if (z == 100) {
				cout << i << " " << 36 - i;
			}
		}
	}
	return 0;
}
