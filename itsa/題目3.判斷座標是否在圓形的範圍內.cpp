#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    a=abs(a);
    b=abs(b);
    if((a*a+b*b)<=10000)
        cout<<"inside"<<endl;
    else
        cout<<"outside"<<endl;
}
