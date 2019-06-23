#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, a2, b, b2, ncase, i;
    cin >> a;
    if ( a == 1 ) {
        cout << "NO" << endl;
        return 0;
    } else if ( a == 2 ) {
        cout << "YES" << endl;
        return 0;
    }

    for ( i = 2; i <= sqrt ( a ); i++ )
        if ( a % i == 0 ) {
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    return 0;
}
