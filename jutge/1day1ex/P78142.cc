#include <iostream>
using namespace std;

int main () {
	cerr << "haha salu3" << endl;
	cout.setf(ios::fixed); cout.precision(2);
	double n, mean = 0.0, total = 0.0;
    while (cin >> n) {
        total += n;
        mean++;
    }
    cerr << total << endl;
    mean = total/mean;
    cout << mean << endl;
}