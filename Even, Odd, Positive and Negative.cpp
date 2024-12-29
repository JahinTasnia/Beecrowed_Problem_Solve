#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }

    int even=0,odd=0,pos=0,neg=0;
    for(int i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        if(a[i]%2==1 || a[i]%2==-1)
        {
            odd++;
        }
        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<0)
        {
            neg++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
