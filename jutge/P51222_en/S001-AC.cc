#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int number_of_digits(int n){
	int meh = 1;
	if (n > 9) {
		n = n/10;
		return 1 + number_of_digits(n);
	}
	else return meh;
}
