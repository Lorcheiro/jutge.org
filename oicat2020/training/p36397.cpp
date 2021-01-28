#include<iostream>

using namespace std;

typedef unsigned long long int falo;

int main(){
	falo ano;
	while(cin >> ano){
		if(ano == 1){
			cout << 2 << endl;
		}
		else if (ano % 2 == 0){
			cout << 3 << endl;
		}
		else{
			cout << 4 << endl;
		}
		
	}
}