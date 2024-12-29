#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,a,b,c;
    cin >> x >> y >> z;
    double m[3] = {x,y,z} ;
    sort(m,m+3);
    c = m[0];
    b = m[1];
    a = m[2];
    if(a>=(b+c))
    {
        cout << "NAO FORMA TRIANGULO" << endl ;
    }
    else if(a*a == (b*b + c*c))
    {
        cout << "TRIANGULO RETANGULO" << endl ;
        if(a==b && b==c && c==a)
        {
            cout << "TRIANGULO EQUILATERO" << endl ;
        }
        else if(a==b || b==c || c==a)
        {
            cout << "TRIANGULO ISOSCELES" << endl ;
        }
    }
    else if(a*a > (b*b + c*c))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl ;
        if(a==b && b==c && c==a)
        {
            cout << "TRIANGULO EQUILATERO" << endl ;
        }
        else if(a==b || b==c || c==a)
        {
            cout << "TRIANGULO ISOSCELES" << endl ;
        }
    }
    else if(a*a < (b*b + c*c))
    {
        cout << "TRIANGULO ACUTANGULO" << endl ;
        if(a==b && b==c && c==a)
        {
            cout << "TRIANGULO EQUILATERO" << endl ;
        }
        else if(a==b || b==c || c==a)
        {
            cout << "TRIANGULO ISOSCELES" << endl ;
        }
    }

    return 0;
}
