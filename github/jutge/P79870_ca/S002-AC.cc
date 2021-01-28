#include <iostream>
using namespace std;

int n;
string s;

void f(int i, bool abba) {
  if (i == n) {
    if (abba) cout << s << endl;
    return;
  }
  s[i] = 'A';
  f(i + 1, abba or (i >= 3 and s.substr(i - 3, 3) == "ABB"));
  s[i] = 'B';
  f(i + 1, abba);
}


int main() {
  cin >> n;
  s = string(n, '?');
  f(0, false);
}