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
