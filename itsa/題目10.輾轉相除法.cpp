#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, a2, b, b2, ncase, i, sum = 0;
    cin >> a >> b;
    while ( a != b )
        if ( a > b ) a -= b;
        else b -= a;
    cout << a << endl;
    return 0;
}
