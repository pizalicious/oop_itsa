#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    a = a * 60 + b;
    c = c * 60 + d;

    int t;

    if ( a > c ) t = ( 24 * 60 - a ) + c;
    else    t = c - a;
    if ( t <= 2 * 60 ) {
        cout << ( t / 30 ) * 30 << endl;
    } else if ( t <= 4 * 60 ) {
        int t2;
        t2 = t - 120;
        cout << ( t2 / 30 ) * 40 + 120 << endl;
    } else {
        int t2;
        t2 = t - 240;
        cout << ( t2 / 30 ) * 60 + 120 + 160 << endl;
    }
}
