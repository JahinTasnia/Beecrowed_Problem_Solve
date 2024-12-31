#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,r=0,s=0,total=0;
    cin >> n;
    int a[n];
    char e[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> e[i];
    }

    for(int i=0; i<n; i++)
    {
        total += a[i] ;
        if(e[i]=='C')
        {
            c+=a[i] ;
        }
        else if(e[i]=='R')
        {
            r+=a[i];
        }
        else if(e[i]=='S')
        {
            s+=a[i];
        }
    }
    cout << "Total: " << total << " cobaias" << endl ;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl ;
    float x = (float(c)/total)*100 ;
    printf("Percentual de coelhos: %.2f %%\n",x);
    float y = (float(r)/total)*100 ;
    printf("Percentual de ratos: %.2f %%\n",y);
    float z = (float(s)/total)*100 ;
    printf("Percentual de sapos: %.2f %%\n",z);


    return 0;
}
