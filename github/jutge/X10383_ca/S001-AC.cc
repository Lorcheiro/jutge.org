#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> c;
    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        c[a] = i;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string a, b;
        cin >> a >> b;
        int aux = c[a];
        c[a] = c[b];
        c[b] = aux;
    }
    int a = 0;
    vector <string> v(n);
    for (map<string, int>::iterator it = c.begin(); it != c.end(); ++it) {
        v[it->second] = it->first;
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] << endl;
    }
}