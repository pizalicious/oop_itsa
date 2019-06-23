#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    int ncase, i, j;
    cin >> ncase;
    while ( ncase-- ) {
        int row, col;
        cin >> row >> col;
        int tab[row][col];
        for ( i = 0; i < row; i++ )
            for ( j = 0; j < col; j++ )
                cin >> tab[i][j];
        for ( i = 0; i < row; i++ ) {
            for ( j = 0; j < col; j++ ) {
                if ( tab[i][j] == 0 )
                    cout << '_';
                else {
                    if ( i == 0 || j == 0 || i == row - 1 || j == col - 1 )
                        cout << '0';
                    else if ( tab[i - 1][j] == 0 || tab[i + 1][j] == 0 || tab[i][j - 1] == 0 || tab[i][j + 1] == 0 )
                        cout << '0';
                    else
                        cout << '_';
                }
                cout << ' ';
            }
            cout << endl;
        }
        if ( ncase != 0 )
            cout << endl ;
    }
}
