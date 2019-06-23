#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, a2, b, b2, ncase, i, sum = 0, t, cnt = 0;
    char *ptr;
    char line[100];
    string str;
    getline ( cin, str );
    int tab[26] = {0};
    for ( i = 0; i < str.size(); i++ ) {
        if ( str[i] >= 'a' && str[i] <= 'z' )
            tab[str[i] - 'a']++;
        if ( str[i] >= 'A' && str[i] <= 'Z' )
            tab[str[i] - 'A']++;
        line[i] = str[i];
    }
    line[str.size()] = '\0';
    ptr = strtok ( line, " \n" );
    while ( ptr != NULL ) {
        cnt++;
        ptr = strtok ( NULL, " \n" );
    }
    cout << cnt << endl;

    for ( i = 0; i < 26; i++ ) {
        if ( tab[i] > 0 ) {
            char alp = 'a' + i;
            cout << alp << " : " << tab[i] << endl;
        }
    }
}
