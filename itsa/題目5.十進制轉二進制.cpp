#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, cnt = 0;
    int arr[8], i;
    cin >> a;
    if ( a == 0 ) cout << "00000000" << endl;
    if ( a > 0 ) {
        while ( a != 0 ) {
            b = a % 2;
            arr[cnt++] = b;
            a = a / 2;
        }
        for ( i = cnt; i < 8; i++ )
            arr[i] = 0;
        for ( i = 7; i >= 0; i-- )
            cout << arr[i];
        cout << endl;
    } else {
        a = abs ( a ) - 1;
        while ( a != 0 ) {
            b = a % 2;
            arr[cnt++] = b;
            a = a / 2;
        }
        for ( i = cnt; i < 8; i++ )
            arr[i] = 0;
        for ( i = 0; i < 8; i++ )
            if ( arr[i] == 1 ) arr[i] = 0;
            else if ( arr[i] == 0 ) arr[i] = 1;
        for ( i = 7; i >= 0; i-- )
            cout << arr[i];
        cout << endl;
    }
}
