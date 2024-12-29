#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x ;
    cin >> x ;
    int a = static_cast<int>(x);
    cout << "NOTAS:\n" ;
    cout << a/100 << " nota(s) de R$ 100.00\n" ;
    int b = a%100 ;
    cout << b/50 << " nota(s) de R$ 50.00\n" ;
    int c = b%50 ;
    cout << c/20 << " nota(s) de R$ 20.00\n" ;
    int d = c%20 ;
    cout << d/10 << " nota(s) de R$ 10.00\n" ;
    int e = d%10 ;
    cout << e/5 << " nota(s) de R$ 5.00\n" ;
    int f = e%5 ;
    cout << f/2 << " nota(s) de R$ 2.00\n" ;

    cout << "MOEDAS:\n" ;
    int g = f%2 ;
    cout << g/1 << " moeda(s) de R$ 1.00\n" ;


    float m = x-a ;
    int n = static_cast<int>(round(m*100));
    cout << n/50 << " moeda(s) de R$ 0.50\n" ;
    int o = n%50 ;
    cout << o/25 << " moeda(s) de R$ 0.25\n" ;
    int p = o%25 ;
    cout << p/10 << " moeda(s) de R$ 0.10\n" ;
    int q = p%10 ;
    cout << q/5 << " moeda(s) de R$ 0.05\n" ;
    int r = q%5 ;
    cout << r/1 << " moeda(s) de R$ 0.01\n" ;

    return 0;
}
