#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int r;
	r = max(max(a,b),c);
	cout << r << endl;
}
