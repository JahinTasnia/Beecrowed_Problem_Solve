#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    cin >> a >> b >> c ;
    d = (b*b)-(4*a*c) ;
    if(a==0)
    {
        cout << "Impossivel calcular" << endl ;
    }
    else if(d<0)
    {
        cout << "Impossivel calcular" << endl ;
    }
    else
    {
        e = (-b+sqrt(d))/(2*a);
        f = (-b-sqrt(d))/(2*a);

        printf("R1 = %.5lf\nR2 = %.5lf\n",e,f);
    }

    return 0;
}
