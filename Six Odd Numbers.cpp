#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a ;
    if(a%2==0)
    {
        a++;
    }
    for(int i=1; i<=6; i++)
    {
        cout << a << endl;
        a+=2;
    }
    return 0;
}
