#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool is_increasing(int n){
	if (n <= 9) return true;
	int a = n % 10; 	
	if(a >= (n/10)%(10)){		
		return is_increasing(n/10);
	}
	else return false;
}
