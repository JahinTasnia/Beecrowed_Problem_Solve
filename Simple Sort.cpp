#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c ;
    cin >> a >> b >> c;
    int m[3] = {a,b,c} ;
    sort(m,m+3);
    for(int i=0; i<3; i++)
    {
        cout << m[i] << endl ;
    }
    cout << endl ;
    cout << a << endl << b <<  endl << c << endl ;

    return 0;
}
