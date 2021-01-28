#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int double_factorial(int n){
	if(n==0){
		return 1;
	}
	else if (n==1){
		return 1;
	}
	else{
		return n*double_factorial(n-2);
	}
}
