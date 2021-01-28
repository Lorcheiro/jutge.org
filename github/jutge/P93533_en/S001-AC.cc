#include<iostream>
#include<math.h>
#include<vector>

using namespace std;


int main(){
	int n;	
	while(cin >> n){
		int num = n;
		string s = "";
		string res = "";
		while (n != 0){
			if (n % 2 == 0) {
				s += '0';
				n /= -2;
			}
			else {
				s += '1';
				n = (n-1)/-2;
			}
		}
		for(int i = 0; i < s.size(); i++){
			res += s[s.size()-i-1]; 
		}
		if (num == 0) res = "0";
		cout << num << ": " << res << endl;
	}
}
