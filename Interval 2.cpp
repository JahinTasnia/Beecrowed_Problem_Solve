#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0;
    cin >> a;
    int m[a];
    for(int i=0; i<a; i++)
    {
        cin >> m[i] ;
    }

    for(int i=0; i<a; i++)
    {
        if(m[i]>=10 && m[i]<=20)
        {
            c++ ;
        }
    }

    cout << c << " in" << endl ;
    cout << a-c << " out" << endl ;
    return 0;
}
