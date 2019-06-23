#include <bits/stdc++.h>
using namespace std;

int f ( int a ) {
    if ( a == 0 || a == 1 ) return a + 1;
    return ( f ( a - 1 ) + f ( floor ( a / 2 ) ) );
}

int main() {
    int a, a2, b, b2, ncase, i, sum = 0;
    cin >> a ;
    a = f ( a );
    cout << a << endl;
    return 0;
}
