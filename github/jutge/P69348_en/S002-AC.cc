#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int n;

void escriu(vector<int>&  v){
	cout << "(";
	for(int i = 0; i < v.size(); i++){
		if(i != (v.size() -1)) cout << v[i] + 1 << ",";
		else cout << v[i] + 1 << ")" << endl;
	}
	
}

void f(int i, vector<int>& v, vector<int>& used){
	if (i == n){
		escriu(v);
		return;
	}
	for (int j = 0; j < v.size(); j++){
		if(not used[j]){
			used[j] = true;
			v[i] = j;
			f(i + 1, v, used);
			used[j] = false;
		}
	}
}

int main(){
	cin >> n;
	vector<int> v (n);
	vector<int> used (n,false);
	f(0, v, used);
}
