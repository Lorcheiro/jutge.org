#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


typedef vector<int> VI;


void dynamic(const int idx, const int mod, VI &used) {
  if (used[idx] < 0) {
    dynamic(idx - 1, mod, used);
    dynamic(idx - 2, mod, used);
    used[idx] = (used[idx - 1] + used[idx - 2]) % mod;
  }
}

int main() {
  const int ssiz = 1e5+10;
  VI used(ssiz, -1);
  used[0] = 0;
  used[1] = 1;
  int n;
  while (cin >> n) {
    dynamic(n, 1e8 + 7, used);
    cout << used[n] << endl;
  }
  return 0;
}








