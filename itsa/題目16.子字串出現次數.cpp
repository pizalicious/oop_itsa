#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, a2, b, b2, ncase, i, sum = 0, t, cnt = 0;
    char line[100];
    string str, str2;
    cin >> str >> str2;
    t = str2.find ( str, 0 );
    if ( t != -1 )
        sum++;
    while ( ( t = str2.find ( str, t + 1 ) ) != -1 )
        sum++;
    cout << sum << endl;
}
