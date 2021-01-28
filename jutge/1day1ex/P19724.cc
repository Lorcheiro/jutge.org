#include <bits/stdc++.h>
using namespace std;

int main () {
    int h,m,t;
    while (cin >> h >> m >> t) {
        int contador = 0;
        if (t>1440) {
            contador += 484*int(t/1440);
            t %= 1440;
        }
        while (t>0) {
            if (m==0) {
                contador+=4;
                if (h == 0) contador += 12;
                else if (h < 12) contador += h;
                else if (h==12) contador+=100;
                else contador += h-12;
            }
            if (m<=15 and t>15-m) contador+=1;
            if (m<=30 and t>30-m) contador+=2;
            if (m<=45 and t>45-m) contador+=3;
            t -= 60-m;
            m = 0;
            ++h;
            if (h==24) h = 0;
        }
        cout << contador << endl;
    }
}