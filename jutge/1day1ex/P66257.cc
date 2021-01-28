#include <iostream>
#include <vector>

using namespace std;

int main () {
    int a;
    while (cin >> a) {
        vector<int> m (a, 0);
        int mx=0, nn=0;
        while (a--) {
            int n;
            cin >> n;
            m[a] == n;
            if (m[a]>mx) {
                nn=n;
            } else if (m[a]==mx) nn=max(n,nn);
        }
        cin >> a;
        while (a--) {
            int n;
            cin >> n;
            m[a] == n;
            if (m[a]>mx) {
                nn=n;
            } else if (m[a]==mx) nn=max(n,nn);
        }
        cout << nn << ' ' << mx << endl;
    }
}