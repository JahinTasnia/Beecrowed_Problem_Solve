#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin >> n;
    while(n--)
    {
        cout << c << " " << c+1 << " " << c+2  << " PUM" << endl ;
        c+=4;
    }
    return 0;
}
