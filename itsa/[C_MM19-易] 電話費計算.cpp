#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    double a, b, c, d, e, i;
    int ans;
    while ( cin >> a ) {
        if ( a <= 800 ) a *= 0.9;
        else if ( a < 1500 ) a = a * 0.9 * 0.9;
        else a = a * 0.9 * 0.79;
        //cout << a << endl;
        cout << fixed << setprecision ( 1 ) << a << endl;
    }
}
