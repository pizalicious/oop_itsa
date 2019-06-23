#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i;
    int ans;
    while ( cin >> a ) {
        b = a % 60; //sec
        a /= 60;
        c = a % 60; //min
        a /= 60;
        d = a % 24; //hour
        a /= 24; //day
        cout  << a << " days\n" << d << " hours\n" << c << " minutes\n" << b << " seconds" << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
