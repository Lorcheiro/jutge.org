#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main () {
	cout.setf(ios::fixed); cout.precision(4);
	int cont = 0;
    double x, n, res = 0;
    cin >> x;
    while (cin >> n) {
        res += n*pow(x,cont);
        cont++;
    }
    cout << res << endl; 
}