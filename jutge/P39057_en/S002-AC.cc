#include<iostream>
#include<string>
#include<cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main(){
	cout.setf(ios::fixed); cout.precision(6);
	int c;
	cin >> c;
	for(int i = 0; i < c; i++){
		string forma;
		cin >> forma;
		if (forma == "rectangle"){
			double a, b;
			cin >> a >> b;
			cout << a * b << endl;
		}
		else{
			double a;
			cin >> a;
			cout << a * a * M_PI << endl;
		}
	}
}