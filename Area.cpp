#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,pi=3.14159,v;
    cin >> a >> b >> c ;
    printf("TRIANGULO: %.3lf\n", (0.5*a*c));
    printf("CIRCULO: %.3lf\n", (pi*c*c));
    printf("TRAPEZIO: %.3lf\n", (((a+b)/2)*c));
    printf("QUADRADO: %.3lf\n", (b*b));
    printf("RETANGULO: %.3lf\n", a*b);
    return 0;
}
