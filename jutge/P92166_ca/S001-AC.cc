#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while (cin >> n) {
		vector<int> v(n * 3,0);
		for(int i = 0; i < n * 3; i++)
			cin >> v[i];
		int res = 0;
		sort(v.begin(), v.end());
		for (int j = 0; j < v.size(); ++j) 
			if(j%3 != 0) res += v[j];
		cout << res << endl;
	}
}
