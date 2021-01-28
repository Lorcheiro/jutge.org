#include <iostream>
#include <vector>
using namespace std;
 
typedef unsigned long long int ull;
//aquesta funcio va ser la primera idea que vam tenir, però donava tle, RIP  int Bolets  (05/04/2020 12:55 - 05/04/2020 16:35)
int setas(vector <int>&v, int c, int p, int resultat){
    if(c <= p){
        resultat += v[c-1];
        c++;
        setas(v, c, p, resultat);
    }
    else return resultat;
}
int main() {
    int n;
    int cas = 1;
    while (cin >> n) {
        vector <int>v (n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
        }
        vector <int>k (n);
        k[0] = v[0];
        for(int i = 1; i < v.size(); i++){
            k[i] = v[i] + k[i - 1];
        }
        int q;
        cin >> q;
        cout << '#' << cas << endl;
        for (int i = 0; i < q; i++) {
            int c,p,a;
            cin >> c >> p;
            if (c > p) swap(c, p);
            if (c == 1) {
                cout << k[p - 1] << endl;
            }
            else if (c == p) {
                cout << v[p-1] << endl;
            }
            else {
                cout << k[p - 1] - k[c - 2]<< endl;
            }
        }
        cas++;
    }
}