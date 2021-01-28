#include<iostream>
#include<math.h>
#include<vector>
 
using namespace std;
 
bool prime(int x){
    if (x <= 1) return false;
    for(int i = 2; i*i <= x;i++){
        if(x%i==0) return false;
    }
    return true;
}
           
int sum_of_digits(int x){
    if(x > 9){
        return x % 10 + sum_of_digits(x/10);
    }
    return x;
}
 
bool is_perfect_prime(int x) {
    if(x > 9){
        return prime(x) and is_perfect_prime(sum_of_digits(x));
    }
    return prime(x);       
}
 
int main(){
    int x;
    bool b;
    cin >> x;
    b = is_perfect_prime(x);
    cout << b << endl;
}
