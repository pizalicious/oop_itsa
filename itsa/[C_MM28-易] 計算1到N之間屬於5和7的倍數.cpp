#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i;
    int ans = 0;
    while ( cin >> a ) {
        if ( a >= 35 )
            cout << "35";
        else continue;
        for ( i = 70; i <= a; i += 35 )
            cout << " " << i ;
        cout << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
