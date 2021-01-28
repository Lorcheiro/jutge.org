#include <iostream>
#include <math.h>
#include <vector>



using namespace std;


void f(long long k, vector<long long>& v, int ones, int zeros) {
  int n = v.size();
  if (k == n) {
    cout << v[0];
    for (int i = 1; i < n; ++i) 
      cout << ' ' << v[i];
    cout << endl;
  }
  else {
    if(0 < zeros) {
		v[k] = 0; 
		f(k+1, v, ones, zeros-1);
	}
    if(0 < ones) {
		v[k] = 1; 
		f(k+1, v, ones-1, zeros);
	}
  }
}

int main() {
  long long n, o;
  cin >> n >> o;

  vector<long long> v(n);
  f(0, v, o, n-o);
}

