#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	int n;
	bool balanced = false;
	while (cin >> n) {

		vector<int>q(n, 0);
		vector<int>g(n, 0); //creamos vectores para guardar las skills
		vector<int>c(n, 0);

		for (int i = 0; i < n; i++) {
			cin >> q[i] >> g[i] >> c[i];  //rellenamos los vectores con la skill en orden
		}

		for (int i = 0; i < n; i++) {
			if()
		}

		/*for (int i = 0; i < n; i++) {
			cout << q[i] << " " << g[i] << " " << c[i] << endl;
		}*/

		if (balanced) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}	