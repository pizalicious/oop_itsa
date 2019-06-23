#include <bits/stdc++.h>
using namespace std;

long long f ( long long a ) {
    if ( a == 0 || a == 1 ) return 1;
    return a * f ( a - 1 );
}

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    long long a, b, c, d, e, i;
    int ans;
    while ( cin >> a ) {
        a=f(a);
        cout << a << endl;
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
