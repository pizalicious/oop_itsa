#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i, ans;
    while ( cin >> a ) {
        b = a / 10;
        cout  << "NT10=" << b << endl;
        a -= b * 10;
        b = a / 5;
        cout  << "NT5=" << b << endl;
        a -= b * 5;
        cout  << "NT1=" << a << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
