#include <iostream>
#include <vector>

using namespace std;

void hanoi(int n, char orig, char pivo, char obje){
	if (n == 0) return;
	hanoi(n-1, orig, obje, pivo);
	cout << orig << " => " << obje << endl;
	hanoi(n-1,pivo, orig, obje);
}
int main(){
	int n;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
}
