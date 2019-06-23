#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i;
    int ans = 0;
    while ( cin >> a >> b ) {
        ans = ( a + b ) * ( abs ( b - a ) + 1 ) / 2;
        cout << ans << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
