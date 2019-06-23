#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i, ans;
    while ( cin >> a ) {
        if ( a > 31 ) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        a--;
        b = 2;
        ans = ( b << a );
        cout  << ans << endl;
        //cout << fixed << setprecision ( 0 ) << ans << endl;
    }
}
