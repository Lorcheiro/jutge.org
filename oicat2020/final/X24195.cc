#include<iostream>

using namespace std;

void Fsumar(int i) {
	int result = 0;
	while (i > 0) {
		result += (i % 10) * (i % 10);
		i /= 10;
	}
	cerr << result << endl;
	return result;
}

int main() {
	int i;
	while (cin >> i) {
		int a = i;
		for (int j = 1; j < 1000; j++) {
			i = Fsumar(i);
			if (i == a) {
				cout << "si" << endl;
				j = 1000;
			}
		}
	}
}