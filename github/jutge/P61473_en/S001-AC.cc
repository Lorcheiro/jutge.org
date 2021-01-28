#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matrix;
bool is_symmetric(const Matrix& m);

bool is_symmetric(const Matrix& m){
  const size_t n = m.size();
  for (size_t i = 0; i < n; ++i)
      for (size_t j = i+1; j < n; ++j) if (m[i][j] != m[j][i]) return false;
    return true;
}

int main() {
  int n;
  while (cin >> n) {
    vector< vector<int> > M(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) cin >> M[i][j];
    cout << is_symmetric(M) << endl;

    int q;
    cin >> q;
    while (q--) {
      int m;
      cin >> m;
      vector<int> I(m), J(m), C(m);
      for (int k = 0; k < m; ++k) {
        int v;
        cin >> I[k] >> J[k] >> v;
        C[k] = M[I[k]][J[k]];
        M[I[k]][J[k]] = v;
      }
      cout << is_symmetric(M) << endl;
      for (int k = 0; k < m; ++k) M[I[k]][J[k]] = C[k];
    }
  }
}
