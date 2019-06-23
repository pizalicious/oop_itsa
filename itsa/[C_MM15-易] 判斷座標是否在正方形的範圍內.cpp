#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    int a, b, c, d, e, i;
    int ans;
    while ( cin >> a >> b ) {
        while ( a != b )
            if ( a > b ) a -= b;
            else b -= a;
        cout << a << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
