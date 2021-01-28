#include <iostream>
using namespace std;

int expression () {
    char c,g;
    cin >> c;
    if (c=='(') {
        int a = expression();
        cin >> c;
        int b = expression();
        cin >> g;
        if (c == '+') return a+b;
        else if (c == '-') return a-b;
        else if (c == '*') return a*b;
    } else if (c!=')') return c-'0';
}

int main () {
	cout << expression() << endl;
}
