#include <iostream>


using namespace std;


int main () {
	int n;
	cin >> n;
	int hores, minuts, segons;
	segons = n%60;
	minuts = n/60;
	hores = minuts/60;
	minuts = minuts%60;
	cout << hores << ' ' << minuts << ' ' << segons << endl;
}