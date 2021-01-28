#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int v;
    while (cin >> v >> n and v > 0 and n > 0) {
        int i = 0;
        bool married = false;
        vector<int> diamonds(n);
        for (int i = 0; i < diamonds.size(); i++) {
            cin >> diamonds[i];
        }
        sort(diamonds.begin(), diamonds.end());
        int pos = n - 1;
        while (pos > 0 and i < diamonds.size() and not married and i != pos) {
            if ((diamonds[i] + diamonds[pos]) == v) {
                married = true;
            }
            else if ((diamonds[i] + diamonds[pos]) < v) {
                i++;
            }
            else {
                pos--;
            }
        }
        if (married) {
            cout << "married" << endl;
        }
        else {
             cout << "single" << endl;
        }
    }
}
