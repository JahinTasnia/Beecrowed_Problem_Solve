#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[6];
    for(int i=0; i<6; i++)
    {
        cin >> a[i];
    }

    int pos=0;
    float m=0;
    for(int i=0; i<6; i++)
    {
        if(a[i]>0)
        {
            pos++;
            m += a[i];
        }
    }
    cout << pos << " valores positivos" << endl;
    printf("%.1f\n",m/pos);

    return 0;
}
