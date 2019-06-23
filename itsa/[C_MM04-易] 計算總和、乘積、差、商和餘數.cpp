#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    //freopen ( "in.txt", "w", stdout );
    float a, b, c, d, e, i, ans;
    while ( cin >> a >> b ) {
        ans =  a + b  ;
        cout << fixed << setprecision ( 0 ) << a << "+" << b << "=" << ans << endl;
        ans =  a * b  ;
        cout << fixed << setprecision ( 0 ) << a << "*" << b << "=" << ans << endl;
        ans =  a - b  ;
        cout << fixed << setprecision ( 0 ) << a << "-" << b << "=" << ans << endl;
        int t = a, t2 = b, t3, t4;
        t3 = t / t2;
        t4 = t % t2;
        if ( t4 < 0 ) {
            t4 += t2;
            t3 -= 1;
        }
        cout << fixed << setprecision ( 0 ) << a << "/" << b << "=" << t3 << "..." << t4 << endl;
    }
}

