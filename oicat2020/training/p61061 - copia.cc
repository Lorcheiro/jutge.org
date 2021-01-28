#include <iostream>
using namespace std;

int produc_digits(int n);

int main() {
    int n;
    while(cin >> n) {
        if(n < 10) cout << "The product of the digits of " << n << " is " << n << "." << endl;
        while(n / 10 > 0) {
            int aux = n;
            n = produc_digits(n);
            cout << "The product of the digits of " << aux << " is " << n << "." << endl;
        }
        cout << "----------" << endl;
    }
}

int produc_digits(int n) {
    int prod_dig = 1;
    while(n / 10 > 0) {
        prod_dig *= n % 10;
        n /= 10;
    }
    return prod_dig * (n % 10);
}