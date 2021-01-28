#include <iostream>
#include <string>
using namespace std;

void recursiu(){
    string lleig;
    if(cin >> lleig){
        recursiu();
        cout << lleig << endl;
    }
}
int main(){
    recursiu();
}

