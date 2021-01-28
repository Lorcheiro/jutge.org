#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
 
int main() {

	int n, i, maxim, p;

	while(cin >> p) {
		i = 1;
		cin >> n;
		maxim = n;
		//cerr << maxim << endl;
		while(i < p) {
			//cerr << maxim << endl;
			++i;
			cin >> n;

			if(n >= maxim) {

				maxim = n;
			}
		}
		cout << maxim << endl;
	} 

}
