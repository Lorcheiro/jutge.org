#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
	long long n;
	cout.setf(ios::fixed);
	cout.precision(6);
	while(cin >> n){
		cout << n*n << ' ' << sqrt(n) << endl;
	}
}
