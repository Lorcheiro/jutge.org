#include <iostream>
#include <string>
using namespace std;

void recursiu(){
    string lleig;
    cin >> lleig;
    if(lleig != "end"){
        recursiu();
        cout << lleig << endl;
    }
}
int main(){
    recursiu();
}
