#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int max4(int a, int b, int c, int d){
	int r = max(max(a,b),max(c,d));
	return r;
}
