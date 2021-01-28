#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPerfectSquare(int x){
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n){
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}

int main(){
    int n;
    bool result = true;
    while(cin >> n){
    	result = true;
    	if(isFibonacci(n) || n != 0){
    		cerr << "1er if" << endl;
    		int j = n;
    		for(cin >> n; n != 0 || result;){
    			cerr << "me cago en todo estoy en el for" << endl;
    			if(n != 0 || isFibonacci(n) || n != j){
    				if (n / j >= 1.5 || n / j <= 1.7){
    					n = j;
    					result = true;
    				}
    				else{
    					result = false;
    				}
    			}
    		}
    	}
    	else if(result) cout << "yes" << endl;
    	else cout << "no" << endl;
    }
}