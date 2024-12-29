#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin >> a ;
    int m[a];
    for(int i=0; i<a; i++)
    {
        cin >> m[i];
    }
    
    for(int i=0; i<a; i++)
    {
        if(m[i]==0)
        {
            cout << "NULL" << endl ;
        }
        else if(m[i]>0 && m[i]%2==0)
        {
            cout << "EVEN POSITIVE" << endl;
        }
        else if(m[i]<0 && m[i]%2==0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if(m[i]>0 && m[i]%2==1)
        {
            cout << "ODD POSITIVE" << endl;
        }
        else if(m[i]<0 && m[i]%2==-1)
        {
            cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}
