#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int recursive(double x, int l, int m, int r, const vector<double>& v){
	if (l > r) return -1;
	if (l == r) {
		if (v[l] != x) return -1;
		else return l;
	}
	if(x == v[m]){
		r = m;
		m = (l + r) / 2;
		return recursive(x, l, m, r, v);
	}
	if(x < v[m]){
		r = m -1;
		m = (l + r) / 2;
		return recursive(x, l, m, r, v);
	}
	else{
		l = m+1;
		m = (l + r) / 2;
		return recursive(x, l, m, r, v);
	}
}
int first_occurrence(double x, const vector<double>& v) {
	double l, m, r;
	l = 0;
	r = v.size() - 1;
	m = (r+l / 2);
	return recursive(x, l, r, m,  v);
}
int main(){
	vector<double> v(16, 4);
	for (int i = 15; i < 16; ++i) v[i] = 5;
	cout << first_occurrence(4, v);
}
