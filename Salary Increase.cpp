#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a;
    if(a>=0 && a<=400.00)
    {
        b = 15;
        c = a*(b/100);
        printf("Novo salario: %.2f\n",c+a);
        printf("Reajuste ganho: %.2f\n",c);
        cout << "Em percentual: " << b << " %\n" ;
    }
    else if(a>=400.01 && a<=800.00)
    {
        b = 12;
        c = a*(b/100);
        printf("Novo salario: %.2f\n",c+a);
        printf("Reajuste ganho: %.2f\n",c);
        cout << "Em percentual: " << b << " %\n" ;
    }
    else if(a>=800.01 && a<=1200.00)
    {
        b = 10;
        c = a*(b/100);
        printf("Novo salario: %.2f\n",c+a);
        printf("Reajuste ganho: %.2f\n",c);
        cout << "Em percentual: " << b << " %\n" ;
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        b = 7;
        c = a*(b/100);
        printf("Novo salario: %.2f\n",c+a);
        printf("Reajuste ganho: %.2f\n",c);
        cout << "Em percentual: " << b << " %\n" ;
    }
    else if(a>2000.00)
    {
        b = 4;
        c = a*(b/100);
        printf("Novo salario: %.2f\n",c+a);
        printf("Reajuste ganho: %.2f\n",c);
        cout << "Em percentual: " << b << " %\n" ;
    }

    return 0;
}

