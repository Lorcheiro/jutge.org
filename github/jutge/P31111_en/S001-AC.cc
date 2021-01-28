#include <iostream>

using namespace std;

int main(){
    int x;
    bool b = true;
    string s;
    cin >> s;
    for(int i = 0;i < s.size(); i++){
        if(s[i] == '('){
            x++;
        }
        else{
            x--;
        }
        if(x < 0){
            b = false;
        }
    }
    if(b == true and x == 0){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}
