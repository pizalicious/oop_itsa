#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen ( "input.txt", "r", stdin );
    char line[1024], temp[100];
    char *ptr, *qtr;
    int i, total;
    int a[100];
    while ( cin.getline ( line, 1024, '\n' ) ) {
        total = 0;
        int len = strlen ( line );
        if ( line[len - 1] == '\n' )
            line[len - 1] = '\0';
        ptr = line;
        qtr = temp;
        while ( *ptr != '\0' ) {
            if ( *ptr != ' ' )
                *qtr++ = *ptr++;
            else {
                *qtr = '\0';
                qtr = temp;
                ptr++;
                a[total++] = atoi ( temp );
            }
        }
        *qtr = '\0';
        qtr = temp;
        a[total++] = atoi ( temp );
        for ( i = total - 1; i > 0; i-- )
            cout << a[i] << ' ';
        cout << a[i] << endl;
    }

}
