/*
Lập trình tính tổng các số nguyên dương lẻ nhỏ hơn một số nguyên x cho trước (0 < x < 2.109).
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    long long n, m, t;
    cin >> n;
    if (n == 1) t = 1;
    else
    {
        if (n == 0) t = 0;
        else
        {
            if (n % 2 == 0)
                t = n * (n / 4);
            else
            {
                if (n % 2 != 0)
                    t = (n - 1) * (n / 4);
            }
        }
    }
    m = n / 2;
    if (m % 2 != 0)
        t += n / 2;
    cout << t;
    return 0;
}