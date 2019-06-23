#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen ( "input.txt", "r", stdin );
    int a;
    int i, sum = 0;
    for ( i = 0; i < 6; i++ ) {
        cin >> a;
        a = a * a * a;
        sum += a;
    }
    cout << sum << endl;
}
