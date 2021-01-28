#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {
    if (a > b and b >= 0) return b;
    return a;
}


int main() {
    int n;
    while (cin >> n) {
        int min = (n * 6) % 360;
        int hor = (n / 2) % 360;
        int resta = abs(min - hor);
        int a = 360 - resta;
        int b = resta - 180 * (n / 360);
        if (a % 360 == 0) cout << ":" << 0 << endl;
        else cout << ":" << f(a, b) << endl;
    }
}