#include <iostream>
#include <vector>
using namespace std;
int main(){
	int temp;
	cin >> temp;
	if(temp > 30){
		if(temp >= 100){
			cout << "it's hot" << endl;
			cout << "water would boil" << endl;
		}
		else{
			cout << "it's hot" << endl;
		}
	}
	else if(temp < 10){
		if(temp <= 0){
			cout << "it's cold" << endl;
			cout << "water would freeze" << endl;
		}
		else{
			 cout << "it's cold" << endl;
		}
	}
	else{
		cout << "it's ok" << endl;
	}
}
