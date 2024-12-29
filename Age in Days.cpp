#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d ;
    cin >> a ;
    b = a/365;
    c = (a%365)/30;
    d = (a%365)%30;
    cout << b << " ano(s)\n" << c << " mes(es)\n" << d << " dia(s)\n" ;
    return 0;
}
