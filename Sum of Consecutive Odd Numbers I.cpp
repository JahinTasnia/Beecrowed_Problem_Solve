#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin >> a >> b;
    if(b>a)
    {
        swap(a,b);
    }
    for(int i=b+1; i<a; i++)
    {
        if(i%2==1 || i%2==-1)
        {
            c+=i;
        }
    }
    cout << c << endl ;
    return 0;
}
