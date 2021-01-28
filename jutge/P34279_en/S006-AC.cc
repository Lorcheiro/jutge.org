#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int hores, minuts, segons;
	cin >> hores >> minuts >> segons;
	segons++;
	if (segons==60) {
		minuts++;
		segons = 0;
	}
	if (minuts==60) {
		hores++;
		minuts = 0;
	}
	if (hores==24) hores = 0;
	cout << setfill('0') << setw(2) << hores << ':' << setfill('0') << setw(2) << minuts << ':' << setfill('0') << setw(2) << segons << endl;
}