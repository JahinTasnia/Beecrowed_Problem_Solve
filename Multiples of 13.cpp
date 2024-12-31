#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        swap(a,b);
    }
    int sum=0;
    for(int i=a; i<=b; i++)
    {
        if(i%13==0 || 13%i==0)
        {
            continue;
        }
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
