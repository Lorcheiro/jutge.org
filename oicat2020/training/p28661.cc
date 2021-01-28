#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

bool isPerfectSquare(int x){
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n){
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}
 
void casos(vector <bool> v, int i, vector <int> fibonacci){
    for (int j = 0; j < 26; ++j) {
        if (v[i - fibonacci[j]] == false) {
            v[i] = true;
            j += 26;
        }
        else {
            v[i] = false;
        }
    }
}
 
 

int main(){
    int n;
    vector <bool> guanya1 (pow(10, 5));
    vector <int> fibonacci (26);
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    int i = 2;
    int a = fibonacci[1];
    while (a < 100000) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        a = fibonacci[i];
        i++;
    }
    guanya1[0] = false;
    guanya1[1] = true;
 
    for (int i = 2; i < 100000; i++){
        casos(guanya1, i, fibonacci);
    }
    while (cin >> n) {
        if (isFibonacci(n) and n != 0) cout << 1 << endl;
        else if (guanya1[n]) cout << 1 << endl;
        else cout << 2 << endl;
    }
   
 
   
    /*for (int i = 0; i < fibonacci.size(); ++i) { //DEBUG DE DEL VECTOR PUTO CANCER DIARREA MENTAL
        cerr << fibonacci[i] << endl;
    }*/
    // RIP PROGRAMA ENTERO UwU
}