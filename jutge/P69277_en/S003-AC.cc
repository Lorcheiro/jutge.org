#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    int res = 0;
    cout << 0;
    for (int i = 1; i <= n; i++) cout << "," << i*i*i; 
    cout << endl;
}