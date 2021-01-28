#include<iostream>
#include<string>


using namespace std;

int main(){
    int egos;
    cin >> egos;
    string gos;
    cin >> gos;
    int ehum;
    if(egos > 2){
        ehum = (2*10) + ((egos - 2) * 4);
    }
    else{
        ehum = 20;
    }
    cout << gos << " is " << ehum << " human years old" << endl;
}