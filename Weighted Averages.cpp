#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total=0;
    cin >> n;
    float a[n],b[n],c[n],avg[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i=0; i<n; i++)
    {
        avg[i] = ((a[i]*2) + (b[i]*3) + (c[i]*5))/10 ;
    }

    for(int i=0; i<n; i++)
    {
        printf("%.1f\n",avg[i]);
    }

    return 0;
}
