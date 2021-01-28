#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;
void transposa(Matriu& M);

void transposa(Matriu& m){
    for (int i = 1; i < m.size(); i++) {
        for(int j = 0; j < i; j++) {
            swap(m[i][j],m[j][i]);
        }
    }
}

int main (){
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transposa(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}