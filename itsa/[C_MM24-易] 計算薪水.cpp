#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    double a, b, c, d, e, i;
    int ans;
    while ( cin >> a >> b ) {
        cout << fixed << setprecision ( 1 ) ;
        if ( a <= 60 )
            cout  << a *b << endl;
        else if ( a <= 120 )
            cout << 60 * b + ( a - 60 ) *b * 1.33 << endl;
        else
            cout << 60 * b + 60 * b * 1.33 + ( a - 120 ) *b * 1.66 << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
