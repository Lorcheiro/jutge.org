#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

void f(int n) {
  if (n > 0) {
    f(n - 1);
    for (int i = 0; i < n; ++i) cout << '*';
    cout << endl;
    f(n - 1);
  }
}


int main() {
  int n;
  cin >> n;
  f(n);
}
