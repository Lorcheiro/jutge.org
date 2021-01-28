#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int double_factorial(int d){
	int paritat = d % 2;
	int r = 1;
	for(int i = 1; i <= d; ++i){
		if(i % 2 == paritat){
			r = r * i;
		}
	}
	return r;
}
