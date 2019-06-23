#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, a2, b, b2, ncase, i, sum = 0;
    string line;
    cin >> line;
    string line2 ( line );
    for ( i = 0; i < line.size(); i++ )
        line2[i] = line[line.size() - i - 1];
    if ( line == line2 )
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
