#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    float a, b, c, d, e, i, ans;
    while ( cin >> a >> b >> c ) {
        ans = ( a + b ) * c / 2;
        cout << fixed << setprecision ( 1 ) << "Trapezoid area:" << ans << endl;
    }
}

