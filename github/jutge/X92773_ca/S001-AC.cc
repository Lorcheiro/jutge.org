#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	while(cin >> n){
		int max = 0;
		int velo;
		for (int i = 0; i < n; i++) {
			cin >> velo;
			if (velo > max) {
				max = velo;
			}
		}
		cout << max << endl;
	}
}