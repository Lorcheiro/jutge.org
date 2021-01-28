#include <iostream>
using namespace std;
 
int main() {
    int n;
    while(cin >> n) {
        for (int i = 1; i <= n; i += 2) {
            if(i != 5) cout << i << " ";
        }
        cout << "5 4";
        for (int j = 2; j <= n; j += 2) {
            if (j != 4)cout << ' ' << j;
        }
        cout << endl;
    }  
}