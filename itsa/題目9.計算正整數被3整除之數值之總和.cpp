#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, a2, b, b2, ncase, i, sum = 0;
    cin >> a;
    for ( i = 3; i <= a; i += 3 )
        sum += i;
    cout << sum << endl;
    return 0;
}
