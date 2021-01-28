#include <iostream>
using namespace std;

bool es_pot(long long int n, long long int caixes, long long int capacitat) {
    return n%capacitat == 0 and n <= capacitat * caixes;
}

int main() {
    long long int m, g, q, a, k, b;
    while (cin >> m >> g >> q >> a >> k >> b) {
        if (es_pot(m, q, a) and es_pot(g, k, b))
            cout << "Enviat" << endl;
        else if (es_pot(g, q, a) and es_pot(m, k, b))
            cout << "Enviat" << endl;
        else
            cout << "Error" << endl;
    }
}
