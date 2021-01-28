#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int sum_of_digits(int x){
	if(x <= 9) return x;
	return x%10 + sum_of_digits(x/10);
	
}

bool is_multiple_3(int x){
	if (x <= 9) return x%3 == 0;
	return is_multiple_3(sum_of_digits(x));
}
int main(){
	cout << is_multiple_3(8472) << endl;
}
