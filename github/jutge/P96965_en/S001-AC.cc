#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int sum_of_digits(int x){
	if(x <= 9) return x;
	return x%10 + sum_of_digits(x/10);
	
}

int reduction_of_digits(int x){
	int c = sum_of_digits(x);
	if(c <= 9) return c;
	return reduction_of_digits(c);
}
int main(){
	cout << reduction_of_digits(128) << endl;
}
