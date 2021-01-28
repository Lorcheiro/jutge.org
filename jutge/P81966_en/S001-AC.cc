#include <bits/stdc++.h>
using namespace std;


int position(double x, const vector<double>& v, int l, int r){
  int m = (r-l)/2 + l;
  if(l > r) return -1;
  if (l == r){
    if(v[l] == x)  return l;
    else return -1;
  }

  if (v[m+1] == x) return m+1;
  else if(v[m+1] < x) return position(x,v,m+2,r);
  else return position(x,v,l,m);
}

int main(){}
