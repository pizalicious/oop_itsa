#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i;
    int ans;
    while ( cin >> a ) {
        for ( i = a - 1; i >= 2; i-- ) {
            ans = 1;
            for ( b = 2; b <= sqrt ( i ); b++ ) {
                if ( i % b == 0 ) {
                    ans = 0;
                    break;
                }
            }
            if ( ans == 1 ) {
                cout << i << endl;
                break;
            }
        }
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
