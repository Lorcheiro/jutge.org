#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(121);
		vector<int>input(n);
		for (int i = 0; i < n; i++) {
			cin >> input[i];
			v[input[i] - 30] += 1;
		}
		int npeople = -1;
		int weight = -1;
		for (int k = 0; k < 121; k++) {
			if (v[k] >= npeople and k > weight) {
				weight = k;
				npeople = v[k];
			}
		}
		cout << npeople << " " << weight + 30 << endl;
	}
}
