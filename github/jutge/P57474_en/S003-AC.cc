#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int factorial(int d){
	int r = 1;
	for(int i = 1; i <= d; ++i){
		r = r * i;
	}
	return r;
}
