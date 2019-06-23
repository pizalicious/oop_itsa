#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, cnt = 0;
    int arr[8], i;
    cin >> a;
    switch ( a ) {
    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn" << endl;
        break;
    case 12:
    case 1:
    case 2:
        cout << "Winter" << endl;
        break;
    default:
        cout << "error" << endl;
    }
}
