#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int sum_of_digits(int x){
	if(x <= 9) return x;
	return x%10 + sum_of_digits(x/10);
	
}

int main(){
	int n;
	while(cin >> n){
		cout << "The sum of the digits of " << n << " is " << sum_of_digits(n) << "." << endl;
	}
}
