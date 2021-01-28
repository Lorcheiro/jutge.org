#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int gcd(int a, int b){
	while(min(a, b) > 0){
		if (a < b){
			b = b % a;
		}
		else{
			a = a % b;
		}
	}
	return max(a, b);
}
